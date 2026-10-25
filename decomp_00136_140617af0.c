// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140617af0 FUN_140617af0 body=110 status=ok
// SIG undefined FUN_140617af0(void)

void FUN_140617af0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_143264350(param_1 + 0xb8,0,0);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 140617b60 FUN_140617b60 body=1415 status=ok
// SIG undefined FUN_140617b60(void)

void FUN_140617b60(longlong param_1,float param_2,longlong param_3,char param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong *plVar15;
  int *piVar16;
  undefined8 local_88;
  int *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  
  plVar6 = (longlong *)UInterpTrackInst::GetGroupActor(param_3);
  if (plVar6 != (longlong *)0x0) {
    uVar7 = UCircularThrobber::GetPrivateStaticClass();
    lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
    if (lVar8 != 0) {
      if (*(int *)(param_1 + 0x78) != 0) {
        if ((param_2 < *(float *)(param_3 + 0x28) || param_2 == *(float *)(param_3 + 0x28)) ||
           (param_4 != '\0')) {
          local_80 = (int *)0x0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_140612260(param_1,param_2,&local_80,&local_70);
          piVar16 = local_80 + (longlong)(int)local_78 * 4;
          if (local_80 != piVar16) {
            local_88 = 0;
            piVar14 = local_80;
            do {
              lVar13 = *(longlong *)(piVar14 + 2);
              fVar1 = *(float *)(lVar13 + 0x48);
              uVar7 = FUN_140611f40(lVar8,lVar13);
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId((longlong *)(param_3 + 0x30),&local_88,uVar7);
              if ((int)local_88 == -1) {
                lVar9 = 0;
              }
              else {
                lVar9 = *(longlong *)(param_3 + 0x30) + (longlong)(int)local_88 * 0x18;
              }
              piVar11 = (int *)(lVar9 + 8);
              if (lVar9 == 0) {
                piVar11 = (int *)0x0;
              }
              if (piVar11 == (int *)0x0) {
                iVar5 = -1;
              }
              else {
                iVar5 = *piVar11;
              }
              iVar2 = *piVar14;
              if (iVar2 != iVar5) {
                FUN_140617020(lVar8,uVar7,0);
                iVar2 = *piVar14;
              }
              FUN_140616150(param_3,uVar7,iVar2);
              if (*(longlong *)(lVar13 + 0x18) == 0) {
                lVar9 = FUN_140611140(lVar13,param_1);
                if ((lVar9 == 0) ||
                   (cVar4 = FUN_140612f20(lVar8,param_2 - fVar1,param_4,lVar9,
                                          *(byte *)(lVar13 + 0x4c) & 1,uVar7,param_1), cVar4 == '\0'
                   )) goto LAB_140617fe2;
              }
              else {
                FUN_140612c50();
LAB_140617fe2:
                FUN_140617020(lVar8,uVar7,0);
              }
              piVar14 = piVar14 + 4;
            } while (piVar14 != piVar16);
          }
          lVar9 = local_70;
          piVar16 = local_80;
          lVar10 = (longlong)(int)local_68 * 0x10 + local_70;
          for (lVar13 = local_70; lVar13 != lVar10; lVar13 = lVar13 + 0x10) {
            lVar12 = FUN_140611f40(lVar8,lVar13);
            if (lVar12 != 0) {
              plVar15 = *(longlong **)(lVar8 + 0x198);
              plVar6 = plVar15 + (longlong)*(int *)(lVar8 + 0x1a0) * 9;
              for (; plVar15 != plVar6; plVar15 = plVar15 + 9) {
                if (*plVar15 == lVar12) {
                  if ((plVar15 != (longlong *)0x0) && (plVar15[7] != 0)) {
                    FUN_140616e20(plVar15[7],0);
                    goto LAB_140618063;
                  }
                  break;
                }
              }
              FUN_140612c50();
            }
LAB_140618063:
          }
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
        else {
          local_80 = (int *)0x0;
          local_78 = 0;
          FUN_140612260(param_1,param_2,&local_80,0);
          piVar11 = local_80 + (longlong)(int)local_78 * 4;
          for (piVar14 = local_80; piVar16 = local_80, piVar14 != piVar11; piVar14 = piVar14 + 4) {
            lVar13 = *(longlong *)(piVar14 + 2);
            lVar9 = FUN_140611f40(lVar8,lVar13);
            if (lVar9 != 0) {
              plVar15 = *(longlong **)(lVar8 + 0x198);
              plVar6 = plVar15 + (longlong)*(int *)(lVar8 + 0x1a0) * 9;
              for (; plVar15 != plVar6; plVar15 = plVar15 + 9) {
                if (*plVar15 == lVar9) {
                  if ((plVar15 != (longlong *)0x0) && (lVar10 = plVar15[7], lVar10 != 0)) {
                    if ((*(char *)(lVar10 + 0x158) != '\x01') || (*(longlong *)(lVar10 + 0xb8) == 0)
                       ) goto LAB_140617c99;
                    bVar3 = true;
                    goto LAB_140617cb2;
                  }
                  break;
                }
              }
              FUN_140612c50();
            }
LAB_140617c99:
            bVar3 = false;
            cVar4 = FUN_140612a70(lVar8,lVar9,param_1);
            if (cVar4 == '\0') {
LAB_140617e0c:
              local_88 = 0;
              fVar1 = *(float *)(lVar13 + 0x48);
              if (*(longlong *)(lVar13 + 0x18) == 0) {
                lVar10 = FUN_140611140(lVar13,param_1);
                if ((lVar10 == 0) ||
                   (cVar4 = FUN_140612f20(lVar8,param_2 - fVar1,0,lVar10,
                                          *(byte *)(lVar13 + 0x4c) & 1,lVar9,param_1), cVar4 == '\0'
                   )) goto LAB_140617e63;
              }
              else {
                FUN_140612c50();
LAB_140617e63:
                FUN_140617020(lVar8,lVar9,0);
              }
              FUN_140616150(param_3,lVar9,*piVar14);
            }
            else {
LAB_140617cb2:
              iVar5 = FUN_140611900(param_3,lVar9);
              if (*piVar14 != iVar5) goto LAB_140617e0c;
              if ((bVar3) && (lVar9 != 0)) {
                plVar15 = *(longlong **)(lVar8 + 0x198);
                plVar6 = plVar15 + (longlong)*(int *)(lVar8 + 0x1a0) * 9;
                for (; plVar15 != plVar6; plVar15 = plVar15 + 9) {
                  if (*plVar15 == lVar9) {
                    if ((plVar15 != (longlong *)0x0) && (lVar13 = plVar15[7], lVar13 != 0)) {
                      if ((((*(byte *)(lVar13 + 0x15a) & 4) != 0) &&
                          (((*(longlong *)(lVar13 + 0xa0) != 0 &&
                            (*(longlong *)(lVar13 + 0x90) != 0)) &&
                           (*(char *)(lVar13 + 0x158) != '\0')))) &&
                         ((iVar5 = FUN_143264f90(*(longlong *)(lVar13 + 0xa0),
                                                 *(undefined4 *)(lVar13 + 0x120)), iVar5 != 0 &&
                          (iVar5 = FUN_143264600(), iVar5 == 0)))) {
                        lVar9 = *(longlong *)(lVar13 + 0x98) + 0x180;
                        *(undefined1 *)(lVar13 + 0x158) = 0;
                        cVar4 = FUN_14059ee90(lVar9);
                        if (((cVar4 == '\0') || (cVar4 = FUN_14059ee00(lVar9), cVar4 != '\0')) &&
                           (lVar9 = FUN_140611520(lVar13), lVar9 != 0)) {
                          FUN_1405a8a50(lVar9 + 0x180,0,4);
                          *(undefined1 *)(lVar13 + 0x159) = 0;
                        }
                      }
                      goto LAB_140617e84;
                    }
                    break;
                  }
                }
                FUN_140612c50();
              }
            }
LAB_140617e84:
          }
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
      }
      *(float *)(param_3 + 0x28) = param_2;
    }
  }
  return;
}



// FUNCTION 1406180f0 FUN_1406180f0 body=47 status=ok
// SIG undefined FUN_1406180f0(void)

void FUN_1406180f0(longlong param_1,undefined8 param_2)

{
  FPoseLinkBase::Update(param_1 + 0x30);
  FUN_142290d80(param_1 + 8,param_2);
  return;
}



// FUNCTION 140618120 FUN_140618120 body=127 status=ok
// SIG undefined FUN_140618120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140618120(uint *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  uVar4 = (ulonglong)uVar1;
  if ((int)uVar1 < DAT_146855ba0) {
    uVar4 = _Init_thread_header(&DAT_146855ba0);
    if (DAT_146855ba0 == -1) {
      _DAT_146855b90 = 0x7f8000007f800000;
      uRam0000000146855b98 = 0x7f8000007f800000;
      uVar4 = _Init_thread_footer(&DAT_146855ba0);
    }
  }
  auVar2._4_4_ = -(uint)((float)(param_1[1] & (uint)DAT_146855b90_4) == DAT_146855b90_4);
  auVar2._0_4_ = -(uint)((float)(*param_1 & (uint)_DAT_146855b90) == _DAT_146855b90);
  auVar2._8_4_ = -(uint)((float)(param_1[2] & (uint)(float)uRam0000000146855b98) ==
                        (float)uRam0000000146855b98);
  auVar2._12_4_ =
       -(uint)((float)(param_1[3] & (uint)uRam0000000146855b98._4_4_) == uRam0000000146855b98._4_4_)
  ;
  iVar3 = movmskps((int)uVar4,auVar2);
  return CONCAT71((int7)(CONCAT44((int)(uVar4 >> 0x20),iVar3) >> 8),iVar3 != 0);
}



// FUNCTION 1406181a0 FUN_1406181a0 body=151 status=ok
// SIG undefined FUN_1406181a0(void)

longlong FUN_1406181a0(void)

{
  if (DAT_146855f68 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXSettings",&DAT_146855f68,FUN_140447710,0x78,0x10000006,0
                  ,L"Game",&LAB_140619500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855f68;
}



// FUNCTION 140618240 FUN_140618240 body=53 status=ok
// SIG undefined FUN_140618240(void)

void FUN_140618240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1440165d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618280 FUN_140618280 body=53 status=ok
// SIG undefined FUN_140618280(void)

void FUN_140618280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_144016288;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406182c0 FUN_1406182c0 body=53 status=ok
// SIG undefined FUN_1406182c0(void)

void FUN_1406182c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_1440163a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618300 FUN_140618300 body=162 status=ok
// SIG undefined FUN_140618300(void)

longlong FUN_140618300(void)

{
  if (DAT_146855d58 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXAnimationSection",&DAT_146855d58,FUN_140447710,0x138,
                  0x10000000,0,L"Engine",&LAB_1406193f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146855d58;
}



// FUNCTION 1406183d0 FUN_1406183d0 body=151 status=ok
// SIG undefined FUN_1406183d0(void)

longlong FUN_1406183d0(void)

{
  if (DAT_146855f78 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXEditorSettings",&DAT_146855f78,FUN_140447710,0x78,
                  0x10000006,0,L"Editor",&LAB_1406194a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855f78;
}



// FUNCTION 140618470 FUN_140618470 body=47 status=ok
// SIG undefined FUN_140618470(void)

longlong FUN_140618470(void)

{
  if (DAT_146855da0 == 0) {
    FUN_141786440(&DAT_146855da0,&PTR_FUN_144015400);
  }
  return DAT_146855da0;
}



// FUNCTION 1406184b0 FUN_1406184b0 body=162 status=ok
// SIG undefined FUN_1406184b0(void)

longlong FUN_1406184b0(void)

{
  if (DAT_146855d48 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXAnim",&DAT_146855d48,FUN_140447710,0x60,0x10000000,0,
                  L"Engine",&LAB_1406193b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140618b50,&LAB_140447700,0);
  }
  return DAT_146855d48;
}



// FUNCTION 140618570 FUN_140618570 body=53 status=ok
// SIG undefined FUN_140618570(void)

void FUN_140618570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144016830;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406185b0 FUN_1406185b0 body=53 status=ok
// SIG undefined FUN_1406185b0(void)

void FUN_1406185b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144016170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406185f0 FUN_1406185f0 body=53 status=ok
// SIG undefined FUN_1406185f0(void)

void FUN_1406185f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144016948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618640 FUN_140618640 body=53 status=ok
// SIG undefined FUN_140618640(void)

void FUN_140618640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144016a60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618680 FUN_140618680 body=53 status=ok
// SIG undefined FUN_140618680(void)

void FUN_140618680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144016b78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406186c0 FUN_1406186c0 body=53 status=ok
// SIG undefined FUN_1406186c0(void)

void FUN_1406186c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144016c90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618700 FUN_140618700 body=162 status=ok
// SIG undefined FUN_140618700(void)

longlong FUN_140618700(void)

{
  if (DAT_146855dc8 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXAudioComponent",&DAT_146855dc8,FUN_140447710,0x1a0,
                  0x10000000,0,L"Engine",&LAB_140619450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146855dc8;
}



// FUNCTION 1406187b0 FUN_1406187b0 body=53 status=ok
// SIG undefined FUN_1406187b0(void)

void FUN_1406187b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144016da8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406187f0 FUN_1406187f0 body=53 status=ok
// SIG undefined FUN_1406187f0(void)

void FUN_1406187f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144017208;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618830 FUN_140618830 body=53 status=ok
// SIG undefined FUN_140618830(void)

void FUN_140618830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144016ec0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618870 FUN_140618870 body=53 status=ok
// SIG undefined FUN_140618870(void)

void FUN_140618870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144017320;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406188b0 FUN_1406188b0 body=53 status=ok
// SIG undefined FUN_1406188b0(void)

void FUN_1406188b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144016fd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618910 FUN_140618910 body=47 status=ok
// SIG undefined FUN_140618910(void)

longlong FUN_140618910(void)

{
  if (DAT_146855d18 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
  }
  return DAT_146855d18;
}



// FUNCTION 140618940 FUN_140618940 body=53 status=ok
// SIG undefined FUN_140618940(void)

void FUN_140618940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_144016000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618980 FUN_140618980 body=162 status=ok
// SIG undefined FUN_140618980(void)

longlong FUN_140618980(void)

{
  if (DAT_146855d88 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXAnimationTrack",&DAT_146855d88,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_140619410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146855d88;
}



// FUNCTION 140618a40 FUN_140618a40 body=162 status=ok
// SIG undefined FUN_140618a40(void)

longlong FUN_140618a40(void)

{
  if (DAT_146855d98 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXAnimSet",&DAT_146855d98,FUN_140447710,0x40,0x10000000,0,
                  L"Engine",&LAB_1406193d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146855d98;
}



// FUNCTION 140618b10 FUN_140618b10 body=53 status=ok
// SIG undefined FUN_140618b10(void)

void FUN_140618b10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440164b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618b50 FUN_140618b50 body=151 status=ok
// SIG undefined FUN_140618b50(void)

longlong FUN_140618b50(void)

{
  if (DAT_146855da8 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXAsset",&DAT_146855da8,FUN_140447710,0x28,0x10000001,0,
                  L"Engine",&LAB_140619430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855da8;
}



// FUNCTION 140618c00 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNodeMappingContainer::GetPrivateStaticClass(void)

{
  if (DAT_146855dd8 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXCharacter",&DAT_146855dd8,FUN_140447710,0x180,0x10000000
                  ,0,L"Engine",&LAB_140619460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855dd8;
}



// FUNCTION 140618ca0 FUN_140618ca0 body=162 status=ok
// SIG undefined FUN_140618ca0(void)

longlong FUN_140618ca0(void)

{
  if (DAT_146855f28 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXMatineeControl",&DAT_146855f28,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",&LAB_1406194c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UInterpTrack::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146855f28;
}



// FUNCTION 140618d50 FUN_140618d50 body=53 status=ok
// SIG undefined FUN_140618d50(void)

void FUN_140618d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_1440170f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140618db0 FUN_140618db0 body=162 status=ok
// SIG undefined FUN_140618db0(void)

longlong FUN_140618db0(void)

{
  if (DAT_146855f38 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXMatineeControlInst",&DAT_146855f38,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",&LAB_1406194e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UInterpTrackInst::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146855f38;
}



// FUNCTION 140618e60 FUN_140618e60 body=162 status=ok
// SIG undefined FUN_140618e60(void)

longlong FUN_140618e60(void)

{
  if (DAT_146855d28 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXActor",&DAT_146855d28,FUN_140447710,0x50,0x10000000,0,
                  L"Engine",&LAB_140619390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140618b50,&LAB_140447700,0);
  }
  return DAT_146855d28;
}



// FUNCTION 140618f10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCircularThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146855e80 == 0) {
    FUN_14171ccd0(L"/Script/FaceFX",L"FaceFXComponent",&DAT_146855e80,FUN_14061ab00,0x1b8,0x10000000
                  ,0,L"Engine",&LAB_140619480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_14060c330,thunk_FUN_1428e7a40,
                  &LAB_140447700,0);
  }
  return DAT_146855e80;
}



// FUNCTION 140618fc0 FUN_140618fc0 body=47 status=ok
// SIG undefined FUN_140618fc0(void)

longlong FUN_140618fc0(void)

{
  if (DAT_146855e78 == 0) {
    FUN_141786440(&DAT_146855e78,&PTR_GetPrivateStaticClass_144013ec0);
  }
  return DAT_146855e78;
}



// FUNCTION 140618ff0 FUN_140618ff0 body=47 status=ok
// SIG undefined FUN_140618ff0(void)

longlong FUN_140618ff0(void)

{
  if (DAT_146855e00 == 0) {
    FUN_141786a30(&DAT_146855e00,&PTR_FUN_146217ea0);
  }
  return DAT_146855e00;
}



// FUNCTION 140619020 FUN_140619020 body=47 status=ok
// SIG undefined FUN_140619020(void)

longlong FUN_140619020(void)

{
  if (DAT_146855e08 == 0) {
    FUN_141786a30(&DAT_146855e08,&PTR_FUN_146217fb0);
  }
  return DAT_146855e08;
}



// FUNCTION 140619050 FUN_140619050 body=47 status=ok
// SIG undefined FUN_140619050(void)

longlong FUN_140619050(void)

{
  if (DAT_146855e10 == 0) {
    FUN_141786a30(&DAT_146855e10,&PTR_FUN_1462180c0);
  }
  return DAT_146855e10;
}



// FUNCTION 140619080 FUN_140619080 body=47 status=ok
// SIG undefined FUN_140619080(void)

longlong FUN_140619080(void)

{
  if (DAT_146855e18 == 0) {
    FUN_141786a30(&DAT_146855e18,&PTR_FUN_146218210);
  }
  return DAT_146855e18;
}



// FUNCTION 1406190b0 FUN_1406190b0 body=47 status=ok
// SIG undefined FUN_1406190b0(void)

longlong FUN_1406190b0(void)

{
  if (DAT_146855e20 == 0) {
    FUN_141786a30(&DAT_146855e20,&PTR_FUN_146218430);
  }
  return DAT_146855e20;
}



// FUNCTION 1406190e0 FUN_1406190e0 body=47 status=ok
// SIG undefined FUN_1406190e0(void)

longlong FUN_1406190e0(void)

{
  if (DAT_146855e28 == 0) {
    FUN_141786a30(&DAT_146855e28,&PTR_FUN_146218680);
  }
  return DAT_146855e28;
}



// FUNCTION 140619110 FUN_140619110 body=47 status=ok
// SIG undefined FUN_140619110(void)

longlong FUN_140619110(void)

{
  if (DAT_146855e30 == 0) {
    FUN_141786a30(&DAT_146855e30,&PTR_FUN_1462187d0);
  }
  return DAT_146855e30;
}



// FUNCTION 140619140 FUN_140619140 body=47 status=ok
// SIG undefined FUN_140619140(void)

longlong FUN_140619140(void)

{
  if (DAT_146855e38 == 0) {
    FUN_141786a30(&DAT_146855e38,&PTR_FUN_146218890);
  }
  return DAT_146855e38;
}



// FUNCTION 140619170 FUN_140619170 body=47 status=ok
// SIG undefined FUN_140619170(void)

longlong FUN_140619170(void)

{
  if (DAT_146855e40 == 0) {
    FUN_141786a30(&DAT_146855e40,&PTR_FUN_1462189a0);
  }
  return DAT_146855e40;
}



// FUNCTION 1406191a0 FUN_1406191a0 body=47 status=ok
// SIG undefined FUN_1406191a0(void)

longlong FUN_1406191a0(void)

{
  if (DAT_146855e48 == 0) {
    FUN_141786a30(&DAT_146855e48,&PTR_FUN_146218b40);
  }
  return DAT_146855e48;
}



// FUNCTION 1406191d0 FUN_1406191d0 body=47 status=ok
// SIG undefined FUN_1406191d0(void)

longlong FUN_1406191d0(void)

{
  if (DAT_146855e50 == 0) {
    FUN_141786a30(&DAT_146855e50,&PTR_FUN_146218d10);
  }
  return DAT_146855e50;
}



// FUNCTION 140619200 FUN_140619200 body=47 status=ok
// SIG undefined FUN_140619200(void)

longlong FUN_140619200(void)

{
  if (DAT_146855e58 == 0) {
    FUN_141786a30(&DAT_146855e58,&PTR_FUN_146218e20);
  }
  return DAT_146855e58;
}



// FUNCTION 140619230 FUN_140619230 body=47 status=ok
// SIG undefined FUN_140619230(void)

longlong FUN_140619230(void)

{
  if (DAT_146855e60 == 0) {
    FUN_141786a30(&DAT_146855e60,&PTR_FUN_146219050);
  }
  return DAT_146855e60;
}



// FUNCTION 140619260 FUN_140619260 body=47 status=ok
// SIG undefined FUN_140619260(void)

longlong FUN_140619260(void)

{
  if (DAT_146855e68 == 0) {
    FUN_141786a30(&DAT_146855e68,&PTR_FUN_146219160);
  }
  return DAT_146855e68;
}



// FUNCTION 140619290 FUN_140619290 body=47 status=ok
// SIG undefined FUN_140619290(void)

longlong FUN_140619290(void)

{
  if (DAT_146855e70 == 0) {
    FUN_141786a30(&DAT_146855e70,&PTR_FUN_1462191a0);
  }
  return DAT_146855e70;
}



// FUNCTION 1406192d0 CopyToEmpty<TMeshAttributeArrayBase<bool>_> body=183 status=ok
// SIG undefined CopyToEmpty<TMeshAttributeArrayBase<bool>_>(void)

void TArray<TMeshAttributeArrayBase<bool>,FDefaultAllocator>::
     CopyToEmpty<TMeshAttributeArrayBase<bool>_>
               (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}



// FUNCTION 140619520 FUN_140619520 body=129 status=ok
// SIG undefined FUN_140619520(void)

undefined4 * FUN_140619520(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  if (0x7fffffff < (uint)param_1[0x11]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  if (*(undefined2 **)(param_1 + 0xe) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0xe) = 0;
  }
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1406195b0 FUN_1406195b0 body=155 status=ok
// SIG undefined FUN_1406195b0(void)

undefined8 * FUN_1406195b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if ((undefined2 *)param_1[8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 140619650 FUN_140619650 body=118 status=ok
// SIG undefined FUN_140619650(void)

undefined8 * FUN_140619650(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1406196d0 FUN_1406196d0 body=139 status=ok
// SIG undefined FUN_1406196d0(void)

undefined4 * FUN_1406196d0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  if (0x7fffffff < (uint)param_1[0x11]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  if (*(undefined2 **)(param_1 + 0xe) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0xe) = 0;
  }
  param_1[10] = 0;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfc;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 140619760 ~AccountId body=142 status=ok
// SIG undefined ~AccountId(void)

void AccountId::~AccountId(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[9];
  plVar1 = (longlong *)param_1[8];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[8];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
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
  }
  return;
}



// FUNCTION 1406197f0 operator= body=122 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FMeshElementAttributeList,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    TArray<TMeshAttributeArrayBase<bool>,FDefaultAllocator>::
    CopyToEmpty<TMeshAttributeArrayBase<bool>_>
              (param_1,*param_2,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 140619870 FUN_140619870 body=473 status=ok
// SIG undefined FUN_140619870(void)

longlong * FUN_140619870(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_1[1];
    if (iVar9 != 0) {
      puVar10 = (undefined8 *)(*param_1 + 0x28);
      do {
        iVar11 = *(int *)(puVar10 + 1);
        plVar7 = (longlong *)*puVar10;
        if (iVar11 != 0) {
          do {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 2;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          plVar7 = (longlong *)*puVar10;
        }
        if (plVar7 != (longlong *)0x0) {
          FMemory::Free(plVar7);
        }
        puVar10[-3] = &PTR_FUN_144010748;
        puVar10 = puVar10 + 7;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(param_1,iVar9);
      puVar6 = (undefined4 *)*param_1;
      if (iVar9 != 0) {
        puVar10 = (undefined8 *)(lVar2 + 0x18);
        puVar13 = puVar6 + 8;
        do {
          uVar3 = *(undefined4 *)((longlong)puVar10 + -0x14);
          uVar4 = *(undefined4 *)(puVar10 + -2);
          uVar5 = *(undefined4 *)((longlong)puVar10 + -0xc);
          *puVar6 = *(undefined4 *)(puVar10 + -3);
          puVar6[1] = uVar3;
          puVar6[2] = uVar4;
          puVar6[3] = uVar5;
          *(undefined ***)(puVar13 + -4) = &PTR_FUN_144010748;
          *(undefined8 *)(puVar13 + -2) = *puVar10;
          *puVar13 = *(undefined4 *)(puVar10 + 1);
          *(undefined8 *)(puVar13 + 2) = 0;
          iVar11 = *(int *)(puVar10 + 3);
          puVar12 = (undefined8 *)puVar10[2];
          puVar13[4] = iVar11;
          if (iVar11 == 0) {
            puVar13[5] = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar13 + 2,iVar11,0);
            puVar8 = *(undefined8 **)(puVar13 + 2);
            do {
              *puVar8 = 0;
              iVar1 = *(int *)(puVar12 + 1);
              _Src = (void *)*puVar12;
              *(int *)(puVar8 + 1) = iVar1;
              if (iVar1 == 0) {
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              }
              else {
                TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar1);
              }
              puVar8 = puVar8 + 2;
              puVar12 = puVar12 + 2;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          puVar13 = puVar13 + 0xe;
          puVar6 = puVar6 + 0xe;
          puVar10 = puVar10 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140619a50 FUN_140619a50 body=150 status=ok
// SIG undefined FUN_140619a50(void)

undefined8 * FUN_140619a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  local_28 = param_2[7];
  FString::FString(local_20,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 7,&local_28);
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x74);
  return param_1;
}



// FUNCTION 140619c60 FUN_140619c60 body=539 status=ok
// SIG undefined FUN_140619c60(void)

undefined8 FUN_140619c60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_3 + 0x10);
    do {
      puVar10 = (undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = puVar9[-1];
      if (puVar10 != puVar9) {
        iVar11 = *(int *)(puVar9 + 1);
        pvVar2 = (void *)*puVar9;
        *(int *)(param_2 + 0x18) = iVar11;
        if ((iVar11 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar10,iVar11);
          _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar2,(longlong)iVar11 * 0x68);
        }
      }
      puVar10 = (undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x20) = puVar9[2];
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(puVar9 + 3);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x24);
      uVar5 = *(undefined4 *)(puVar9 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar9 + 4);
      *(undefined4 *)(param_2 + 0x34) = uVar4;
      *(undefined4 *)(param_2 + 0x38) = uVar5;
      *(undefined4 *)(param_2 + 0x3c) = uVar6;
      *(undefined8 *)(param_2 + 0x40) = puVar9[6];
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(puVar9 + 7);
      *(undefined1 *)(param_2 + 0x4c) = *(undefined1 *)((longlong)puVar9 + 0x3c);
      *(undefined1 *)(param_2 + 0x4d) = *(undefined1 *)((longlong)puVar9 + 0x3d);
      *(undefined1 *)(param_2 + 0x4e) = *(undefined1 *)((longlong)puVar9 + 0x3e);
      if (puVar10 != puVar9 + 8) {
        iVar11 = *(int *)(puVar9 + 9);
        pvVar2 = (void *)puVar9[8];
        *(int *)(param_2 + 0x58) = iVar11;
        if ((iVar11 == 0) && (*(int *)(param_2 + 0x5c) == 0)) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar10,iVar11);
          _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar2,(longlong)iVar11 << 3);
        }
      }
      plVar1 = (longlong *)(param_2 + 0x60);
      if (plVar1 != puVar9 + 10) {
        iVar11 = *(int *)(puVar9 + 0xb);
        lVar3 = puVar9[10];
        *(int *)(param_2 + 0x68) = iVar11;
        if ((iVar11 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar11);
          puVar12 = (undefined4 *)*plVar1;
          if (iVar11 != 0) {
            puVar10 = (undefined8 *)(lVar3 + 0x30);
            puVar8 = (undefined8 *)(puVar12 + 0xc);
            do {
              *puVar12 = *(undefined4 *)(puVar10 + -6);
              puVar12 = puVar12 + 0x10;
              uVar7 = puVar10[-3];
              puVar8[-4] = puVar10[-4];
              puVar8[-3] = uVar7;
              uVar7 = puVar10[-1];
              puVar8[-2] = puVar10[-2];
              puVar8[-1] = uVar7;
              uVar7 = puVar10[1];
              *puVar8 = *puVar10;
              puVar8[1] = uVar7;
              iVar11 = iVar11 + -1;
              puVar10 = puVar10 + 8;
              puVar8 = puVar8 + 8;
            } while (iVar11 != 0);
          }
        }
      }
      *(byte *)(param_2 + 0x70) =
           *(byte *)(param_2 + 0x70) ^ (*(byte *)(puVar9 + 0xc) ^ *(byte *)(param_2 + 0x70)) & 1;
      puVar10 = (undefined8 *)(param_2 + 0x78);
      if (puVar10 != puVar9 + 0xd) {
        iVar11 = *(int *)(puVar9 + 0xe);
        pvVar2 = (void *)puVar9[0xd];
        *(int *)(param_2 + 0x80) = iVar11;
        if ((iVar11 == 0) && (*(int *)(param_2 + 0x84) == 0)) {
          *(undefined4 *)(param_2 + 0x84) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar10,iVar11);
          _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar2,(longlong)iVar11 << 3);
        }
      }
      puVar9 = puVar9 + 0x11;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x88;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140619e80 FUN_140619e80 body=206 status=ok
// SIG undefined FUN_140619e80(void)

undefined8 FUN_140619e80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x20);
    do {
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_2,puVar2 + -4);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_2 + 0x10,puVar2 + -2);
      puVar3 = (undefined8 *)(param_2 + 0x20);
      if (puVar3 != puVar2) {
        iVar1 = *(int *)(puVar2 + 1);
        _Src = (void *)*puVar2;
        *(int *)(param_2 + 0x28) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 4);
        }
      }
      puVar2 = puVar2 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140619f50 FUN_140619f50 body=138 status=ok
// SIG undefined FUN_140619f50(void)

undefined8 FUN_140619f50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x28);
    do {
      puVar1 = (undefined8 *)(param_3 + -0x28 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -10) = *puVar1;
      *(undefined8 *)(puVar7 + -8) = uVar6;
      puVar2 = (undefined4 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[-6] = *puVar2;
      puVar7[-5] = uVar3;
      puVar7[-4] = uVar4;
      puVar7[-3] = uVar5;
      puVar7[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar7);
      puVar7[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar7);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar7);
      FSoftObjectPath::operator=(puVar7 + 2,&local_28);
      puVar7 = puVar7 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140619fe0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGridSpatialConstraint2x2Data>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_2 + param_3,param_3)
      ;
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a030 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FVertexAttributesForPolygonHole>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FMeshElementAttributeList,FDefaultAllocator>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a080 FUN_14061a080 body=216 status=ok
// SIG undefined FUN_14061a080(void)

undefined8 FUN_14061a080(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x30);
    do {
      puVar1 = (undefined8 *)((longlong)puVar7 + param_3 + -0x30);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0xc) = *puVar1;
      *(undefined8 *)(puVar7 + -10) = uVar6;
      puVar7[-8] = *(undefined4 *)(param_3 + -0x20 + (longlong)puVar7);
      puVar2 = (undefined4 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[-6] = *puVar2;
      puVar7[-5] = uVar3;
      puVar7[-4] = uVar4;
      puVar7[-3] = uVar5;
      puVar7[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar7);
      puVar7[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar7);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar7);
      FSoftObjectPath::operator=(puVar7 + 2,&local_28);
      puVar1 = (undefined8 *)((longlong)puVar7 + param_3 + 0x20);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 8) = *puVar1;
      *(undefined8 *)(puVar7 + 10) = uVar6;
      puVar7[0xc] = *(undefined4 *)((longlong)puVar7 + param_3 + 0x30);
      puVar7[0xd] = *(undefined4 *)((longlong)puVar7 + param_3 + 0x34);
      puVar7[0xe] = *(undefined4 *)((longlong)puVar7 + param_3 + 0x38);
      puVar7[0xf] = *(undefined4 *)((longlong)puVar7 + param_3 + 0x3c);
      puVar7[0x10] = *(undefined4 *)((longlong)puVar7 + param_3 + 0x40);
      *(undefined1 *)(puVar7 + 0x11) = *(undefined1 *)((longlong)puVar7 + param_3 + 0x44);
      puVar7 = puVar7 + 0x1e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a160 FUN_14061a160 body=117 status=ok
// SIG undefined FUN_14061a160(void)

undefined8 FUN_14061a160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FUN_140619a50(puVar1 + 0x10,puVar1 + param_3 + 0x10);
      puVar1 = puVar1 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a210 FUN_14061a210 body=346 status=ok
// SIG undefined FUN_14061a210(void)

undefined8 FUN_14061a210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    do {
      FString::operator=(param_2,param_3 + -0x20);
      FString::operator=(param_2 + 0x10,param_3 + -0x10);
      FString::operator=(param_2 + 0x20,param_3);
      FString::operator=(param_2 + 0x30,param_3 + 0x10);
      puVar3 = (undefined8 *)(param_2 + 0x40);
      if (puVar3 != (undefined8 *)(param_3 + 0x20)) {
        plVar2 = (longlong *)*puVar3;
        for (iVar4 = *(int *)(param_2 + 0x48); iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
        }
        iVar4 = *(int *)(param_3 + 0x28);
        puVar5 = *(undefined8 **)(param_3 + 0x20);
        *(int *)(param_2 + 0x48) = iVar4;
        if ((iVar4 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
          *(undefined4 *)(param_2 + 0x4c) = 0;
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
              _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
            }
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x50;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a370 FUN_14061a370 body=210 status=ok
// SIG undefined FUN_14061a370(void)

undefined8 FUN_14061a370(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar2 = (undefined4 *)(param_2 + 0x18);
    do {
      *(undefined8 *)(puVar2 + -6) = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar2);
      *(undefined8 *)(puVar2 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar2);
      puVar2[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar2);
      puVar2[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar2);
      *puVar2 = *(undefined4 *)(param_3 + (longlong)puVar2);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar2);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar2);
      FSoftObjectPath::operator=(puVar2 + 2,&local_28);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar2);
      *(byte *)(puVar2 + 10) =
           *(byte *)(puVar2 + 10) ^
           (*(byte *)(puVar2 + 10) ^ *(byte *)(param_3 + 0x28 + (longlong)puVar2)) & 1;
      bVar1 = (*(byte *)(puVar2 + 10) ^ *(byte *)(param_3 + 0x28 + (longlong)puVar2)) & 2 ^
              *(byte *)(puVar2 + 10);
      *(byte *)(puVar2 + 10) = bVar1;
      *(byte *)(puVar2 + 10) = (bVar1 ^ *(byte *)(param_3 + 0x28 + (longlong)puVar2)) & 4 ^ bVar1;
      puVar2 = puVar2 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a450 FUN_14061a450 body=87 status=ok
// SIG undefined FUN_14061a450(void)

undefined1 FUN_14061a450(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a4b0 FUN_14061a4b0 body=194 status=ok
// SIG undefined FUN_14061a4b0(void)

undefined8 FUN_14061a4b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x28);
    do {
      puVar1 = (undefined8 *)(param_3 + -0x28 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -10) = *puVar1;
      *(undefined8 *)(puVar7 + -8) = uVar6;
      puVar2 = (undefined4 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[-6] = *puVar2;
      puVar7[-5] = uVar3;
      puVar7[-4] = uVar4;
      puVar7[-3] = uVar5;
      puVar7[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar7);
      puVar7[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar7);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar7);
      FSoftObjectPath::operator=(puVar7 + 2,&local_28);
      puVar7[8] = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar7);
      *(byte *)(puVar7 + 9) =
           *(byte *)(puVar7 + 9) ^
           (*(byte *)(puVar7 + 9) ^ *(byte *)(param_3 + 0x24 + (longlong)puVar7)) & 1;
      *(byte *)(puVar7 + 9) =
           *(byte *)(puVar7 + 9) ^
           (*(byte *)(puVar7 + 9) ^ *(byte *)(param_3 + 0x24 + (longlong)puVar7)) & 2;
      puVar7[10] = *(undefined4 *)(param_3 + 0x28 + (longlong)puVar7);
      puVar7 = puVar7 + 0x16;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a580 FUN_14061a580 body=114 status=ok
// SIG undefined FUN_14061a580(void)

undefined8 FUN_14061a580(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x20);
    do {
      puVar1 = (undefined4 *)(param_3 + -0x20 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar5[-8] = *puVar1;
      puVar5[-7] = uVar2;
      puVar5[-6] = uVar3;
      puVar5[-5] = uVar4;
      *(undefined8 *)(puVar5 + -2) = *(undefined8 *)(param_3 + -8 + (longlong)puVar5);
      *puVar5 = *(undefined4 *)(param_3 + (longlong)puVar5);
      TArray<FMeshElementAttributeList,FDefaultAllocator>::operator=
                (puVar5 + 2,param_3 + 8 + (longlong)puVar5);
      puVar5 = puVar5 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a600 FUN_14061a600 body=71 status=ok
// SIG undefined FUN_14061a600(void)

undefined1 FUN_14061a600(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140619870(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14061a660 Destruct body=61 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FInAppPurchaseRestoreInfo>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14061a6b0 FUN_14061a6b0 body=86 status=ok
// SIG undefined FUN_14061a6b0(void)

void FUN_14061a6b0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 1);
  plVar1 = (longlong *)*param_2;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14061a730 FUN_14061a730 body=47 status=ok
// SIG undefined FUN_14061a730(void)

void FUN_14061a730(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14061a780 FUN_14061a780 body=85 status=ok
// SIG undefined FUN_14061a780(void)

void FUN_14061a780(void)

{
  if (DAT_146855ca0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    DAT_146855ca0 = GetStaticEnum(FUN_14061b620,DAT_146855d18,L"EFaceFXTargetPlatform");
  }
  return;
}



// FUNCTION 14061a7e0 FUN_14061a7e0 body=6 status=ok
// SIG undefined FUN_14061a7e0(void)

undefined8 FUN_14061a7e0(void)

{
  return 0x9626bc0;
}



// FUNCTION 14061a7f0 FUN_14061a7f0 body=6 status=ok
// SIG undefined FUN_14061a7f0(void)

undefined8 FUN_14061a7f0(void)

{
  return 0xbc65db75;
}



// FUNCTION 14061a800 FUN_14061a800 body=6 status=ok
// SIG undefined FUN_14061a800(void)

undefined8 FUN_14061a800(void)

{
  return 0xf3ce0655;
}



// FUNCTION 14061a810 FUN_14061a810 body=6 status=ok
// SIG undefined FUN_14061a810(void)

undefined8 FUN_14061a810(void)

{
  return 0x2010f739;
}



// FUNCTION 14061a820 FUN_14061a820 body=6 status=ok
// SIG undefined FUN_14061a820(void)

undefined8 FUN_14061a820(void)

{
  return 0x4ce43823;
}



// FUNCTION 14061a830 FUN_14061a830 body=6 status=ok
// SIG undefined FUN_14061a830(void)

undefined8 FUN_14061a830(void)

{
  return 0xd20168da;
}



// FUNCTION 14061a840 FUN_14061a840 body=6 status=ok
// SIG undefined FUN_14061a840(void)

undefined8 FUN_14061a840(void)

{
  return 0x8ef11736;
}



// FUNCTION 14061a850 FUN_14061a850 body=6 status=ok
// SIG undefined FUN_14061a850(void)

undefined8 FUN_14061a850(void)

{
  return 0xe7c976f7;
}



// FUNCTION 14061a860 FUN_14061a860 body=6 status=ok
// SIG undefined FUN_14061a860(void)

undefined8 FUN_14061a860(void)

{
  return 0xaeb5fe63;
}



// FUNCTION 14061a870 FUN_14061a870 body=6 status=ok
// SIG undefined FUN_14061a870(void)

undefined8 FUN_14061a870(void)

{
  return 0x735be021;
}



// FUNCTION 14061a880 FUN_14061a880 body=6 status=ok
// SIG undefined FUN_14061a880(void)

undefined8 FUN_14061a880(void)

{
  return 0x40e5f7cb;
}



// FUNCTION 14061a890 FUN_14061a890 body=6 status=ok
// SIG undefined FUN_14061a890(void)

undefined8 FUN_14061a890(void)

{
  return 0xa18bd877;
}



// FUNCTION 14061a8a0 FUN_14061a8a0 body=6 status=ok
// SIG undefined FUN_14061a8a0(void)

undefined8 FUN_14061a8a0(void)

{
  return 0x48acd880;
}



// FUNCTION 14061a8b0 FUN_14061a8b0 body=6 status=ok
// SIG undefined FUN_14061a8b0(void)

undefined8 FUN_14061a8b0(void)

{
  return 0xe79987fc;
}



// FUNCTION 14061a8c0 FUN_14061a8c0 body=6 status=ok
// SIG undefined FUN_14061a8c0(void)

undefined8 FUN_14061a8c0(void)

{
  return 0x6581134a;
}



// FUNCTION 14061a8d0 FUN_14061a8d0 body=6 status=ok
// SIG undefined FUN_14061a8d0(void)

undefined8 FUN_14061a8d0(void)

{
  return 0x54918464;
}



// FUNCTION 14061a8e0 FUN_14061a8e0 body=6 status=ok
// SIG undefined FUN_14061a8e0(void)

undefined8 FUN_14061a8e0(void)

{
  return 0x917081d1;
}



// FUNCTION 14061a970 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 6,0);
    iVar1 = (int)(uVar2 >> 6);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 6,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 14061a9e0 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x68,0);
    iVar3 = (int)(uVar1 / 0x68);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x68,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14061aa60 ResizeForCopy body=136 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x38,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 5);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x38,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 14061aaf0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UInterpTrack::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14061ab00 FUN_14061ab00 body=34 status=ok
// SIG undefined FUN_14061ab00(void)

void FUN_14061ab00(void)

{
  undefined8 uVar1;
  
  uVar1 = UCircularThrobber::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetFaceFXBlendWeight_1440166f0,0xf);
  return;
}



// FUNCTION 14061ab30 FUN_14061ab30 body=113 status=ok
// SIG undefined FUN_14061ab30(void)

void FUN_14061ab30(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855d08 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a7e0();
    DAT_146855d08 = GetStaticStruct(FUN_14061b650,lVar1,L"AnimNode_BlendFaceFXAnimation",0x88,uVar2)
    ;
  }
  return;
}



// FUNCTION 14061abb0 FUN_14061abb0 body=113 status=ok
// SIG undefined FUN_14061abb0(void)

void FUN_14061abb0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855ec0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a7f0();
    DAT_146855ec0 = GetStaticStruct(FUN_14061b680,lVar1,L"FaceFXActorData",0x30,uVar2);
  }
  return;
}



// FUNCTION 14061ac30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceFXAnimComponentSet::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855d30 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a800();
    DAT_146855d30 = GetStaticStruct(FUN_14061b6b0,lVar1,L"FaceFXAnimComponentSet",0x48,uVar2);
  }
  return;
}



// FUNCTION 14061acb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceFXAnimData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855ef0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a810();
    DAT_146855ef0 = GetStaticStruct(FUN_14061b6e0,lVar1,L"FaceFXAnimData",0x10,uVar2);
  }
  return;
}



// FUNCTION 14061ad30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceFXAnimId::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855f00 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a820();
    DAT_146855f00 = GetStaticStruct(FUN_14061b710,lVar1,L"FaceFXAnimId",0x10,uVar2);
  }
  return;
}



// FUNCTION 14061adb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceFXAnimSetData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855ed0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a830();
    DAT_146855ed0 = GetStaticStruct(FUN_14061b740,lVar1,L"FaceFXAnimSetData",0x10,uVar2);
  }
  return;
}



// FUNCTION 14061ae30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855d70 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a840();
    DAT_146855d70 = GetStaticStruct(FUN_14061b770,lVar1,L"FaceFXAnimationSectionData",0x78,uVar2);
  }
  return;
}



// FUNCTION 14061aeb0 FUN_14061aeb0 body=113 status=ok
// SIG undefined FUN_14061aeb0(void)

void FUN_14061aeb0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855d60 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a850();
    DAT_146855d60 =
         GetStaticStruct(FUN_14061b7a0,lVar1,L"FaceFXAnimationSectionTemplate",0x98,uVar2);
  }
  return;
}



// FUNCTION 14061af30 FUN_14061af30 body=113 status=ok
// SIG undefined FUN_14061af30(void)

void FUN_14061af30(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855db0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a860();
    DAT_146855db0 = GetStaticStruct(FUN_14061b7d0,lVar1,L"FaceFXAudioAsset",0x18,uVar2);
  }
  return;
}



// FUNCTION 14061afb0 FUN_14061afb0 body=113 status=ok
// SIG undefined FUN_14061afb0(void)

void FUN_14061afb0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855f40 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a870();
    DAT_146855f40 = GetStaticStruct(FUN_14061b800,lVar1,L"FaceFXDLCPathSettings",0x50,uVar2);
  }
  return;
}



// FUNCTION 14061b030 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceFXEntry::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855df0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a880();
    DAT_146855df0 = GetStaticStruct(FUN_14061b830,lVar1,L"FaceFXEntry",0x48,uVar2);
  }
  return;
}



// FUNCTION 14061b0b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceFXIdData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855ee0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a890();
    DAT_146855ee0 = GetStaticStruct(FUN_14061b860,lVar1,L"FaceFXIdData",0x10,uVar2);
  }
  return;
}



// FUNCTION 14061b130 FUN_14061b130 body=113 status=ok
// SIG undefined FUN_14061b130(void)

void FUN_14061b130(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855f50 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a8a0();
    DAT_146855f50 = GetStaticStruct(FUN_14061b890,lVar1,L"FaceFXLocalizationData",0x20,uVar2);
  }
  return;
}



// FUNCTION 14061b1b0 FUN_14061b1b0 body=113 status=ok
// SIG undefined FUN_14061b1b0(void)

void FUN_14061b1b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855eb0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a8b0();
    DAT_146855eb0 = GetStaticStruct(FUN_14061b8c0,lVar1,L"FaceFXSkelMeshComponentId",0x10,uVar2);
  }
  return;
}



// FUNCTION 14061b230 FUN_14061b230 body=113 status=ok
// SIG undefined FUN_14061b230(void)

void FUN_14061b230(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855f10 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a8c0();
    DAT_146855f10 = GetStaticStruct(FUN_14061b8f0,lVar1,L"FaceFXTrackKey",0x58,uVar2);
  }
  return;
}



// FUNCTION 14061b2b0 FUN_14061b2b0 body=113 status=ok
// SIG undefined FUN_14061b2b0(void)

void FUN_14061b2b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855ea0 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a8d0();
    DAT_146855ea0 = GetStaticStruct(FUN_14061b920,lVar1,L"GbxFaceFXAnimData",0x38,uVar2);
  }
  return;
}



// FUNCTION 14061b330 FUN_14061b330 body=113 status=ok
// SIG undefined FUN_14061b330(void)

void FUN_14061b330(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146855e90 == 0) {
    if (DAT_146855d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146855d18,&PTR_s__Script_FaceFX_144016128);
    }
    lVar1 = DAT_146855d18;
    uVar2 = FUN_14061a8e0();
    DAT_146855e90 = GetStaticStruct(FUN_14061b950,lVar1,L"GbxFaceFXAnimSetData",0x10,uVar2);
  }
  return;
}



// FUNCTION 14061b3b0 FUN_14061b3b0 body=47 status=ok
// SIG undefined FUN_14061b3b0(void)

longlong FUN_14061b3b0(void)

{
  if (DAT_146855d20 == 0) {
    FUN_141786440(&DAT_146855d20,&PTR_FUN_144013cc0);
  }
  return DAT_146855d20;
}



// FUNCTION 14061b3e0 FUN_14061b3e0 body=47 status=ok
// SIG undefined FUN_14061b3e0(void)

longlong FUN_14061b3e0(void)

{
  if (DAT_146855d40 == 0) {
    FUN_141786440(&DAT_146855d40,&PTR_FUN_144014540);
  }
  return DAT_146855d40;
}



// FUNCTION 14061b410 FUN_14061b410 body=47 status=ok
// SIG undefined FUN_14061b410(void)

longlong FUN_14061b410(void)

{
  if (DAT_146855d90 == 0) {
    FUN_141786440(&DAT_146855d90,&PTR_FUN_1440152f0);
  }
  return DAT_146855d90;
}



// FUNCTION 14061b440 FUN_14061b440 body=47 status=ok
// SIG undefined FUN_14061b440(void)

longlong FUN_14061b440(void)

{
  if (DAT_146855d50 == 0) {
    FUN_141786440(&DAT_146855d50,&PTR_FUN_144013790);
  }
  return DAT_146855d50;
}



// FUNCTION 14061b470 FUN_14061b470 body=47 status=ok
// SIG undefined FUN_14061b470(void)

longlong FUN_14061b470(void)

{
  if (DAT_146855d80 == 0) {
    FUN_141786440(&DAT_146855d80,&PTR_FUN_1440151a0);
  }
  return DAT_146855d80;
}



// FUNCTION 14061b4a0 FUN_14061b4a0 body=47 status=ok
// SIG undefined FUN_14061b4a0(void)

longlong FUN_14061b4a0(void)

{
  if (DAT_146855dc0 == 0) {
    FUN_141786440(&DAT_146855dc0,&PTR_FUN_144015590);
  }
  return DAT_146855dc0;
}



// FUNCTION 14061b4d0 FUN_14061b4d0 body=47 status=ok
// SIG undefined FUN_14061b4d0(void)

longlong FUN_14061b4d0(void)

{
  if (DAT_146855dd0 == 0) {
    FUN_141786440(&DAT_146855dd0,&PTR_GetPrivateStaticClass_1440158a0);
  }
  return DAT_146855dd0;
}



// FUNCTION 14061b500 FUN_14061b500 body=47 status=ok
// SIG undefined FUN_14061b500(void)

longlong FUN_14061b500(void)

{
  if (DAT_146855f70 == 0) {
    FUN_141786440(&DAT_146855f70,&PTR_FUN_144014e90);
  }
  return DAT_146855f70;
}



// FUNCTION 14061b530 FUN_14061b530 body=47 status=ok
// SIG undefined FUN_14061b530(void)

longlong FUN_14061b530(void)

{
  if (DAT_146855f20 == 0) {
    FUN_141786440(&DAT_146855f20,&PTR_FUN_1440157e0);
  }
  return DAT_146855f20;
}



// FUNCTION 14061b560 FUN_14061b560 body=47 status=ok
// SIG undefined FUN_14061b560(void)

longlong FUN_14061b560(void)

{
  if (DAT_146855f30 == 0) {
    FUN_141786440(&DAT_146855f30,&PTR_FUN_144015a70);
  }
  return DAT_146855f30;
}



// FUNCTION 14061b590 FUN_14061b590 body=47 status=ok
// SIG undefined FUN_14061b590(void)

longlong FUN_14061b590(void)

{
  if (DAT_146855f60 == 0) {
    FUN_141786440(&DAT_146855f60,&PTR_FUN_144014cf0);
  }
  return DAT_146855f60;
}



// FUNCTION 14061b5c0 FUN_14061b5c0 body=47 status=ok
// SIG undefined FUN_14061b5c0(void)

longlong FUN_14061b5c0(void)

{
  if (DAT_146855de0 == 0) {
    FUN_141786a30(&DAT_146855de0,&PTR_FUN_146217a80);
  }
  return DAT_146855de0;
}



// FUNCTION 14061b5f0 FUN_14061b5f0 body=47 status=ok
// SIG undefined FUN_14061b5f0(void)

longlong FUN_14061b5f0(void)

{
  if (DAT_146855de8 == 0) {
    FUN_141786a30(&DAT_146855de8,&PTR_FUN_146217b40);
  }
  return DAT_146855de8;
}



// FUNCTION 14061b620 FUN_14061b620 body=47 status=ok
// SIG undefined FUN_14061b620(void)

longlong FUN_14061b620(void)

{
  if (DAT_146855e88 == 0) {
    FUN_1417866a0(&DAT_146855e88,&PTR_FUN_14621a1c0);
  }
  return DAT_146855e88;
}



// FUNCTION 14061b650 FUN_14061b650 body=47 status=ok
// SIG undefined FUN_14061b650(void)

longlong FUN_14061b650(void)

{
  if (DAT_146855d10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855d10,&PTR_FUN_146216cb0);
  }
  return DAT_146855d10;
}



// FUNCTION 14061b680 FUN_14061b680 body=47 status=ok
// SIG undefined FUN_14061b680(void)

longlong FUN_14061b680(void)

{
  if (DAT_146855ec8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855ec8,&PTR_FUN_146219740);
  }
  return DAT_146855ec8;
}



// FUNCTION 14061b6b0 FUN_14061b6b0 body=47 status=ok
// SIG undefined FUN_14061b6b0(void)

longlong FUN_14061b6b0(void)

{
  if (DAT_146855d38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855d38,&PTR_FUN_146216ee0);
  }
  return DAT_146855d38;
}



// FUNCTION 14061b6e0 FUN_14061b6e0 body=47 status=ok
// SIG undefined FUN_14061b6e0(void)

longlong FUN_14061b6e0(void)

{
  if (DAT_146855ef8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855ef8,&PTR_FUN_146219980);
  }
  return DAT_146855ef8;
}



// FUNCTION 14061b710 FUN_14061b710 body=47 status=ok
// SIG undefined FUN_14061b710(void)

longlong FUN_14061b710(void)

{
  if (DAT_146855f08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855f08,&PTR_FUN_146219a40);
  }
  return DAT_146855f08;
}



// FUNCTION 14061b740 FUN_14061b740 body=47 status=ok
// SIG undefined FUN_14061b740(void)

longlong FUN_14061b740(void)

{
  if (DAT_146855ed8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855ed8,&PTR_FUN_146219800);
  }
  return DAT_146855ed8;
}



// FUNCTION 14061b770 FUN_14061b770 body=47 status=ok
// SIG undefined FUN_14061b770(void)

longlong FUN_14061b770(void)

{
  if (DAT_146855d78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855d78,&PTR_FUN_146217590);
  }
  return DAT_146855d78;
}



// FUNCTION 14061b7a0 FUN_14061b7a0 body=47 status=ok
// SIG undefined FUN_14061b7a0(void)

longlong FUN_14061b7a0(void)

{
  if (DAT_146855d68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855d68,&PTR_FUN_146217280);
  }
  return DAT_146855d68;
}



// FUNCTION 14061b7d0 FUN_14061b7d0 body=47 status=ok
// SIG undefined FUN_14061b7d0(void)

longlong FUN_14061b7d0(void)

{
  if (DAT_146855db8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855db8,&PTR_FUN_146217790);
  }
  return DAT_146855db8;
}



// FUNCTION 14061b800 FUN_14061b800 body=47 status=ok
// SIG undefined FUN_14061b800(void)

longlong FUN_14061b800(void)

{
  if (DAT_146855f48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855f48,&PTR_FUN_146219ef0);
  }
  return DAT_146855f48;
}



// FUNCTION 14061b830 FUN_14061b830 body=47 status=ok
// SIG undefined FUN_14061b830(void)

longlong FUN_14061b830(void)

{
  if (DAT_146855df8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855df8,&PTR_FUN_146217d70);
  }
  return DAT_146855df8;
}



// FUNCTION 14061b860 FUN_14061b860 body=47 status=ok
// SIG undefined FUN_14061b860(void)

longlong FUN_14061b860(void)

{
  if (DAT_146855ee8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855ee8,&PTR_FUN_1462198c0);
  }
  return DAT_146855ee8;
}



// FUNCTION 14061b890 FUN_14061b890 body=47 status=ok
// SIG undefined FUN_14061b890(void)

longlong FUN_14061b890(void)

{
  if (DAT_146855f58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855f58,&PTR_FUN_146219fb0);
  }
  return DAT_146855f58;
}



// FUNCTION 14061b8c0 FUN_14061b8c0 body=47 status=ok
// SIG undefined FUN_14061b8c0(void)

longlong FUN_14061b8c0(void)

{
  if (DAT_146855eb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855eb8,&PTR_FUN_146219580);
  }
  return DAT_146855eb8;
}



// FUNCTION 14061b8f0 FUN_14061b8f0 body=47 status=ok
// SIG undefined FUN_14061b8f0(void)

longlong FUN_14061b8f0(void)

{
  if (DAT_146855f18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855f18,&PTR_FUN_146219c50);
  }
  return DAT_146855f18;
}



// FUNCTION 14061b920 FUN_14061b920 body=47 status=ok
// SIG undefined FUN_14061b920(void)

longlong FUN_14061b920(void)

{
  if (DAT_146855ea8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855ea8,&PTR_FUN_1462194c0);
  }
  return DAT_146855ea8;
}



// FUNCTION 14061b950 FUN_14061b950 body=47 status=ok
// SIG undefined FUN_14061b950(void)

longlong FUN_14061b950(void)

{
  if (DAT_146855e98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146855e98,&PTR_FUN_146219380);
  }
  return DAT_146855e98;
}



// FUNCTION 14061b980 FUN_14061b980 body=255 status=ok
// SIG undefined FUN_14061b980(void)

void FUN_14061b980(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140611960(param_1,local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061ba80 FUN_14061ba80 body=190 status=ok
// SIG undefined FUN_14061ba80(void)

void FUN_14061ba80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140612a00(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061bb40 FUN_14061bb40 body=190 status=ok
// SIG undefined FUN_14061bb40(void)

void FUN_14061bb40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140612a70(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061bc00 FUN_14061bc00 body=297 status=ok
// SIG undefined FUN_14061bc00(void)

void FUN_14061bc00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res18 = 0;
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res18 = 0;
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140612ad0(param_1,puVar2,local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061bd30 FUN_14061bd30 body=456 status=ok
// SIG undefined FUN_14061bd30(void)

void FUN_14061bd30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_48[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140612f20(param_1,local_res20[0],bVar2,local_48[0],bVar3,local_50,local_58);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061bf00 FUN_14061bf00 body=520 status=ok
// SIG undefined FUN_14061bf00(void)

void FUN_14061bf00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOnlineFriendsInterfaceSynthetic::DeleteFriendsList
                    (param_1,local_res20[0],bVar2,local_50,local_58,bVar3,local_40,local_48);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061c110 FUN_14061c110 body=396 status=ok
// SIG undefined FUN_14061c110(void)

void FUN_14061c110(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_res10[0] = 0;
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140613b60(param_1,local_48,puVar1,bVar2,local_res20);
  return;
}



// FUNCTION 14061c2a0 FUN_14061c2a0 body=224 status=ok
// SIG undefined FUN_14061c2a0(void)

void FUN_14061c2a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar1 + 0x28);
    FUN_14179aca0(param_2,&local_20,lVar1,param_4,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar2 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140613bd0(param_1,local_res10,puVar2);
  return;
}



// FUNCTION 14061c380 FUN_14061c380 body=190 status=ok
// SIG undefined FUN_14061c380(void)

void FUN_14061c380(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140613de0(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061c440 FUN_14061c440 body=349 status=ok
// SIG undefined FUN_14061c440(void)

void FUN_14061c440(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1406144d0(param_1,local_38[0],local_res20,bVar2,local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061c5a0 FUN_14061c5a0 body=407 status=ok
// SIG undefined FUN_14061c5a0(void)

void FUN_14061c5a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOnlineFriendsInterfaceSynthetic::DeleteFriendsList
                    (param_1,local_res20,local_res18,local_30,bVar2,local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061c740 FUN_14061c740 body=190 status=ok
// SIG undefined FUN_14061c740(void)

void FUN_14061c740(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140615da0(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061c800 FUN_14061c800 body=446 status=ok
// SIG undefined FUN_14061c800(void)

void FUN_14061c800(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  local_48[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140616440(param_1,local_48[0],local_50,local_58,bVar2,bVar3,local_res20);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061c9c0 FUN_14061c9c0 body=190 status=ok
// SIG undefined FUN_14061c9c0(void)

void FUN_14061c9c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140617020(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14061caa0 FUN_14061caa0 body=72 status=ok
// SIG undefined FUN_14061caa0(void)

undefined8 * FUN_14061caa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440196b8;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14061caf0 FUN_14061caf0 body=1739 status=ok
// SIG undefined FUN_14061caf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14061caf0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  longlong ****pppplVar8;
  longlong ***ppplVar9;
  longlong **pplVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  int iVar19;
  char cVar20;
  uint uVar21;
  longlong *plVar22;
  float *pfVar23;
  undefined4 *puVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ushort *puVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  uint *puVar30;
  int iVar31;
  longlong *****ppppplVar32;
  undefined8 *puVar33;
  int iVar34;
  longlong *****ppppplVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  undefined4 local_1c4;
  longlong ****local_1c0;
  longlong ****local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_190 [2];
  longlong ****local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_118 [16];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  ppppplVar32 = (longlong *****)*param_3;
  puVar33 = (undefined8 *)0x0;
  iVar34 = 0;
  iVar31 = 0;
  local_1b0 = (undefined8 *)0x0;
  local_1a4 = 0;
  ppppplVar35 = ppppplVar32 + (int)param_3[1];
  local_1b8 = (longlong ****)ppppplVar35;
  local_180 = param_1;
  if (ppppplVar32 != ppppplVar35) {
    do {
      pppplVar8 = *ppppplVar32;
      ppplVar9 = pppplVar8[2];
      if ((((ppplVar9 != (longlong ***)0x0) && (*(int *)ppplVar9 == 7)) &&
          (pplVar10 = ppplVar9[1], pplVar10 != (longlong **)0x0)) &&
         ((cVar20 = (**(code **)(*DAT_146855f80 + 0xf8))(DAT_146855f80,pppplVar8), cVar20 != '\0' &&
          (cVar20 = FWeakObjectPtr::IsValid((longlong)pplVar10 + 0x14), cVar20 != '\0')))) {
        local_1a8 = (*(code *)(*pppplVar8)[0x19])(pppplVar8);
        local_1a8 = iVar31 + local_1a8;
        if (iVar34 < local_1a8) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar31);
          puVar33 = local_1b0;
        }
        iVar19 = local_1a8;
        (*(code *)(*pppplVar8)[0x1a])(pppplVar8,puVar33,local_1a8,0);
        iVar34 = 0;
        puVar29 = puVar33;
        if (0 < iVar19) {
          do {
            plVar22 = (longlong *)
                      (**(code **)(*DAT_146855f80 + 0x108))(DAT_146855f80,*puVar29,&local_1c4);
            if (plVar22 != (longlong *)0x0) {
              pfVar23 = (float *)(**(code **)(*plVar22 + 0xe0))(plVar22,&local_108,local_1c4);
              fVar1 = pfVar23[2];
              fVar2 = pfVar23[1];
              fVar3 = *pfVar23;
              fVar4 = pfVar23[3];
              fVar37 = fVar3 + fVar3;
              fVar38 = fVar2 + fVar2;
              local_fc = (fVar1 + fVar1) * fVar4;
              local_108 = (fVar1 + fVar1) * fVar1;
              local_e8 = 1.0 - fVar37 * fVar3;
              fVar3 = pfVar23[5];
              local_100 = fVar37 * fVar1 - fVar38 * fVar4;
              local_f8 = local_e8 - local_108;
              local_104 = local_fc + fVar37 * fVar2;
              local_fc = fVar37 * fVar2 - local_fc;
              fVar5 = pfVar23[6];
              local_f0 = fVar38 * fVar4 + fVar37 * fVar1;
              fVar6 = pfVar23[4];
              local_108 = (1.0 - fVar38 * fVar2) - local_108;
              local_f4 = fVar38 * fVar1 + fVar37 * fVar4;
              local_e8 = local_e8 - fVar38 * fVar2;
              local_ec = fVar38 * fVar1 - fVar37 * fVar4;
              puVar24 = (undefined4 *)physx::PxQuat::PxQuat(local_118,&local_108);
              piVar11 = (int *)plVar22[1];
              local_178 = *puVar24;
              local_174 = puVar24[1];
              local_170 = puVar24[2];
              local_16c = puVar24[3];
              local_168 = fVar6;
              local_164 = fVar3;
              local_160 = fVar5;
              if (((piVar11 != (int *)0x0) && (*piVar11 == 5)) &&
                 (lVar12 = *(longlong *)(piVar11 + 2), lVar12 != 0)) {
                lVar25 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar25 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar25 + 0x90) * 8) != lVar25 + 0x88)) {
                  bVar18 = false;
                }
                else {
                  bVar18 = true;
                }
                if ((bVar18) && ((*(byte *)(lVar12 + 0xb8) & 1) != 0)) {
                  if ((*(longlong *)(lVar12 + 0x118) != 0) &&
                     (lVar25 = FUN_14222e2a0(), lVar25 != 0)) {
                    FWeakObjectPtr::operator=(&local_1c0,lVar12);
                    lVar12 = local_180;
                    local_1b8 = local_1c0;
                    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                    ::FindId(local_180 + 0x18,&local_1c8,&local_1b8);
                    if ((local_1c8 == -1) ||
                       (lVar25 = (longlong)local_1c8 * 0x20 + *(longlong *)(lVar12 + 0x18),
                       lVar25 == 0)) {
                      local_1b8 = (longlong ****)&local_1c0;
                      FUN_14061dff0(lVar12 + 0x18,&local_1c8,&local_1b8,0);
                      lVar25 = (longlong)local_1c8 * 0x20 + *(longlong *)(lVar12 + 0x18);
                    }
                    uVar21 = (**(code **)(*plVar22 + 0xa0))(plVar22);
                    puVar27 = (ushort *)(**(code **)(*plVar22 + 0xa8))(plVar22);
                    if (uVar21 != 0) {
                      uVar36 = (ulonglong)uVar21;
                      do {
                        uVar7 = *puVar27;
                        uVar28 = (**(code **)(*plVar22 + 0xe0))(plVar22,&local_108,uVar7);
                        physx::PxMat44::PxMat44(&local_158,uVar28);
                        local_108 = local_158;
                        local_100 = local_150;
                        local_104 = local_154;
                        local_f8 = local_144;
                        local_fc = local_148;
                        local_f0 = local_138;
                        local_f4 = local_140;
                        local_e8 = local_130;
                        local_ec = local_134;
                        puVar29 = (undefined8 *)physx::PxQuat::PxQuat(local_118,&local_108);
                        iVar34 = *(int *)(lVar25 + 0x10);
                        local_1b0 = (undefined8 *)*puVar29;
                        local_1a8 = *(int *)(puVar29 + 1);
                        local_1a4 = *(int *)((longlong)puVar29 + 0xc);
                        local_1a0 = local_128;
                        local_19c = local_124;
                        local_198 = local_120;
                        *(int *)(lVar25 + 0x10) = iVar34 + 1;
                        if (*(int *)(lVar25 + 0x14) < iVar34 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                          ::ResizeGrow(lVar25 + 8,iVar34);
                        }
                        puVar30 = (uint *)((longlong)iVar34 * 0x40 + *(longlong *)(lVar25 + 8));
                        if (puVar30 != (uint *)0x0) {
                          puVar29 = (undefined8 *)P2UTransform(&local_108,&local_1b0);
                          *puVar30 = (uint)uVar7;
                          uVar28 = puVar29[1];
                          *(undefined8 *)(puVar30 + 4) = *puVar29;
                          *(undefined8 *)(puVar30 + 6) = uVar28;
                          uVar28 = puVar29[3];
                          *(undefined8 *)(puVar30 + 8) = puVar29[2];
                          *(undefined8 *)(puVar30 + 10) = uVar28;
                          uVar21 = *(uint *)((longlong)puVar29 + 0x24);
                          uVar16 = *(uint *)(puVar29 + 5);
                          uVar17 = *(uint *)((longlong)puVar29 + 0x2c);
                          puVar30[0xc] = *(uint *)(puVar29 + 4);
                          puVar30[0xd] = uVar21;
                          puVar30[0xe] = uVar16;
                          puVar30[0xf] = uVar17;
                        }
                        puVar27 = puVar27 + 1;
                        uVar36 = uVar36 - 1;
                      } while (uVar36 != 0);
                    }
                    goto LAB_14061d131;
                  }
                  FWeakObjectPtr::operator=(&local_1c0,lVar12);
                  lVar12 = local_180;
                  local_188 = local_1c0;
                  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                  ::FindId(local_180 + 0x18,local_190,&local_188);
                  if ((local_190[0] == -1) ||
                     (lVar25 = (longlong)local_190[0] * 0x20 + *(longlong *)(lVar12 + 0x18),
                     lVar25 == 0)) {
                    local_188 = (longlong ****)&local_1c0;
                    FUN_14061dff0(lVar12 + 0x18,&local_1c8,&local_188);
                    lVar25 = (longlong)local_1c8 * 0x20 + *(longlong *)(lVar12 + 0x18);
                  }
                  iVar31 = *(int *)(lVar25 + 0x10);
                  *(int *)(lVar25 + 0x10) = iVar31 + 1;
                  if (*(int *)(lVar25 + 0x14) < iVar31 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                    ::ResizeGrow((longlong *)(lVar25 + 8),iVar31);
                  }
                  puVar24 = (undefined4 *)((longlong)iVar31 * 0x40 + *(longlong *)(lVar25 + 8));
                  if (puVar24 != (undefined4 *)0x0) {
                    puVar26 = (undefined8 *)P2UTransform(&local_108,&local_178);
                    *puVar24 = local_1c4;
                    uVar28 = puVar26[1];
                    *(undefined8 *)(puVar24 + 4) = *puVar26;
                    *(undefined8 *)(puVar24 + 6) = uVar28;
                    uVar28 = puVar26[3];
                    *(undefined8 *)(puVar24 + 8) = puVar26[2];
                    *(undefined8 *)(puVar24 + 10) = uVar28;
                    uVar13 = *(undefined4 *)((longlong)puVar26 + 0x24);
                    uVar14 = *(undefined4 *)(puVar26 + 5);
                    uVar15 = *(undefined4 *)((longlong)puVar26 + 0x2c);
                    puVar24[0xc] = *(undefined4 *)(puVar26 + 4);
                    puVar24[0xd] = uVar13;
                    puVar24[0xe] = uVar14;
                    puVar24[0xf] = uVar15;
                  }
                }
              }
            }
            iVar34 = iVar34 + 1;
            ppppplVar35 = (longlong *****)local_1b8;
            puVar29 = puVar29 + 1;
          } while (iVar34 < iVar19);
        }
        local_1a8 = 0;
        iVar34 = local_1a4;
        iVar31 = 0;
        if (local_1a4 != iVar19) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1b0,iVar19);
          puVar33 = local_1b0;
          iVar34 = local_1a4;
          iVar31 = local_1a8;
        }
      }
      ppppplVar32 = ppppplVar32 + 1;
    } while (ppppplVar32 != ppppplVar35);
LAB_14061d131:
    if (puVar33 != (undefined8 *)0x0) {
      FMemory::Free(puVar33);
    }
  }
  return;
}



// FUNCTION 14061d1c0 FUN_14061d1c0 body=505 status=ok
// SIG undefined FUN_14061d1c0(void)

void FUN_14061d1c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x40);
  puStack_28 = (uint *)(param_1 + 0x28);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar10 = puStack_28;
    }
    uVar7 = *puVar10;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar7 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar7;
      if (bVar4) goto LAB_14061d27f;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_74 = -uVar7 & uVar7;
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
LAB_14061d27f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x40);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      lVar9 = (longlong)iStack_5c;
      lVar8 = FWeakObjectPtr::Get(lVar9 * 0x20 + *plVar1);
      if (lVar8 != 0) {
        lVar3 = *plVar1;
        cVar5 = FUN_1406270d0(lVar8);
        if (cVar5 == '\0') {
          FUN_142719970(lVar8,1);
        }
        else {
          FUN_14062aec0(lVar8,lVar3 + 8 + lVar9 * 0x20);
        }
        FUN_142252d00(lVar8);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(plVar1);
  return;
}



// FUNCTION 14061d3c0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FApexDestructionSyncActors::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR_FUN_1440196b8;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14061d430 FUN_14061d430 body=314 status=ok
// SIG undefined FUN_14061d430(void)

void FUN_14061d430(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res10 [2];
  
  lVar8 = 0;
  piVar2 = *(int **)(*param_2 + 8);
  if (((piVar2 != (int *)0x0) && (*piVar2 == 5)) && (lVar9 = *(longlong *)(piVar2 + 2), lVar9 != 0))
  {
    lVar5 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14061d498;
  }
  lVar9 = lVar8;
LAB_14061d498:
  lVar5 = DAT_146855f98;
  iVar1 = *(int *)(lVar9 + 0xc);
  lVar6 = lVar8;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar7;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
    lVar6 = *(longlong *)(lVar9 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(lVar9);
    }
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0x20,local_res10,*(undefined8 *)(lVar6 + 0x218));
    if (local_res10[0] != -1) {
      lVar8 = (longlong)local_res10[0] * 0x20 + *(longlong *)(lVar5 + 0x20);
    }
    iVar1 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x10) = iVar1 + 1;
    if (*(int *)(lVar8 + 0x14) < iVar1 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (lVar8 + 8,iVar1);
    }
    FPendingApexDamageEvent::FPendingApexDamageEvent
              ((longlong)iVar1 * 0x80 + *(longlong *)(lVar8 + 8),lVar9,param_2);
  }
  return;
}



// FUNCTION 14061d570 FUN_14061d570 body=191 status=ok
// SIG undefined FUN_14061d570(void)

void FUN_14061d570(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = 0;
  piVar2 = *(int **)(*param_2 + 8);
  if (((piVar2 != (int *)0x0) && (*piVar2 == 5)) && (lVar7 = *(longlong *)(piVar2 + 2), lVar7 != 0))
  {
    lVar5 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14061d5d7;
  }
  lVar7 = lVar8;
LAB_14061d5d7:
  iVar1 = *(int *)(lVar7 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar6;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
    FUN_140628450(lVar7,param_2);
  }
  return;
}



// FUNCTION 14061d630 FUN_14061d630 body=43 status=ok
// SIG undefined FUN_14061d630(void)

undefined8 * FUN_14061d630(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144019728;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14061d660 FUN_14061d660 body=123 status=ok
// SIG undefined FUN_14061d660(void)

void FUN_14061d660(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 param_5)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  piVar1 = *(int **)(param_2 + 0x10);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 5)) &&
     (plVar4 = *(longlong **)(piVar1 + 2), plVar4 != (longlong *)0x0)) {
    lVar3 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14061d6bc;
  }
  plVar4 = (longlong *)0x0;
LAB_14061d6bc:
                    /* WARNING: Could not recover jumptable at 0x00014061d6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0xa28))(plVar4,param_5,param_2);
  return;
}



// FUNCTION 14061d6e0 getContactReportFlags body=43 status=ok
// SIG undefined getContactReportFlags(void)

undefined2 *
FApexPhysX3Interface::getContactReportFlags
          (undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  undefined1 local_18 [12];
  undefined2 local_c;
  
  (**(code **)(*param_3 + 0xa0))(param_3,local_18);
  *param_2 = local_c;
  return param_2;
}



// FUNCTION 14061d710 FUN_14061d710 body=995 status=ok
// SIG undefined FUN_14061d710(void)

void FUN_14061d710(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  local_28[1] = 0x12;
  puVar7 = (undefined8 *)0x0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x12,"Apex_Destructible",0x12,0x3f);
  DAT_146855f90 = PhysDLLHelper::LoadAPEXModule(local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  DAT_146855f80 = (longlong *)(**(code **)(*DAT_146b08418 + 0x48))(DAT_146b08418,"Destructible",0);
  uVar2 = (**(code **)(*DAT_146855f80 + 0x40))(DAT_146855f80);
  (**(code **)(*DAT_146855f80 + 0x28))(DAT_146855f80,uVar2);
  (**(code **)(*DAT_146855f80 + 0xb0))(DAT_146855f80,&PTR_PTR_14621a208);
  puVar6 = puVar7;
  if (-1 < (int)*DAT_146855fb0) {
    puVar6 = (undefined8 *)(ulonglong)*DAT_146855fb0;
  }
  (**(code **)(*DAT_146855f80 + 0x80))(DAT_146855f80,puVar6);
  puVar6 = puVar7;
  if (-1 < (int)*DAT_146855fc8) {
    puVar6 = (undefined8 *)(ulonglong)*DAT_146855fc8;
  }
  (**(code **)(*DAT_146855f80 + 0x88))(DAT_146855f80,puVar6);
  (**(code **)(*DAT_146855f80 + 0x90))(DAT_146855f80,*DAT_146855fe0 != 0);
  (**(code **)(*DAT_146855f80 + 0xd8))(DAT_146855f80,2);
  (**(code **)(*DAT_146855f80 + 0x138))(DAT_146855f80,1);
  (**(code **)(*DAT_146855f80 + 0x130))();
  puVar3 = (undefined8 *)operator_new(0x68);
  puVar6 = puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar3,0,0x68);
    puVar3[2] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__1440196d0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar6 = puVar3;
  }
  DAT_146b08448 = &PTR_PTR_14621a210;
  DAT_146855f88 = puVar6;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  puVar6 = puVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)&LAB_140623ed0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534a10,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_146534a18;
    lVar5 = (longlong)DAT_146534a18;
    puVar6 = (undefined8 *)*puVar6;
    DAT_146534a18 = DAT_146534a18 + 1;
    if (DAT_146534a1c < DAT_146534a18) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534a10,iVar1);
    }
    puVar3 = (undefined8 *)(lVar5 * 0x10 + DAT_146534a10);
    *puVar3 = plVar4;
    *(undefined4 *)(puVar3 + 1) = 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar6;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  puVar6 = puVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140623ed8;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534a40,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_146534a48;
    lVar5 = (longlong)DAT_146534a48;
    puVar6 = (undefined8 *)*puVar6;
    DAT_146534a48 = DAT_146534a48 + 1;
    if (DAT_146534a4c < DAT_146534a48) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534a40,iVar1);
    }
    puVar3 = (undefined8 *)(lVar5 * 0x10 + DAT_146534a40);
    *puVar3 = plVar4;
    *(undefined4 *)(puVar3 + 1) = 3;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar6;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140629640;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534a58,1);
    puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_146534a60;
    lVar5 = (longlong)DAT_146534a60;
    puVar7 = (undefined8 *)*puVar7;
    DAT_146534a60 = DAT_146534a60 + 1;
    if (DAT_146534a64 < DAT_146534a60) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534a58,iVar1);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + DAT_146534a58);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar7;
  DAT_146855f98 = param_1;
  return;
}



// FUNCTION 14061db00 FUN_14061db00 body=235 status=ok
// SIG undefined FUN_14061db00(void)

void FUN_14061db00(longlong param_1,char *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_res8 [2];
  char *local_res10;
  char **local_res20;
  
  local_res10 = param_2;
  if (*param_2 == '\0') {
    if (param_3 != 0) goto LAB_14061db9b;
  }
  else if (param_3 != 2) goto LAB_14061db9b;
  uVar1 = FUN_1426e19d0(param_2,-(*param_2 != '\0') & 2);
  uVar2 = FUN_1426e2530(local_res10,0);
  (**(code **)(*DAT_146855f80 + 0xf0))(DAT_146855f80,uVar1,uVar2);
  (**(code **)(*DAT_146855f80 + 0x150))(DAT_146855f80,3,uVar1);
  (**(code **)(*DAT_146855f80 + 0x140))(DAT_146855f80,0x3f800000,0x3f800000,uVar1);
LAB_14061db9b:
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x20,local_res8,local_res10);
  if ((local_res8[0] == -1) || ((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x20) == 0)
     ) {
    local_res20 = &local_res10;
    FUN_14061e260(param_1 + 0x20,local_res8,&local_res20,0);
  }
  return;
}



// FUNCTION 14061dbf0 FUN_14061dbf0 body=219 status=ok
// SIG undefined FUN_14061dbf0(void)

void FUN_14061dbf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x20),local_res8,param_2);
  if (local_res8[0] == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x20);
  }
  lVar3 = *(longlong *)(lVar2 + 8);
  uVar6 = (ulonglong)*(int *)(lVar2 + 0x10);
  lVar4 = uVar6 * 0x80 + lVar3;
  if (lVar3 != lVar4) {
    do {
      plVar1 = (longlong *)FWeakObjectPtr::Get(lVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xa38))(plVar1,lVar3 + 8);
      }
      lVar3 = lVar3 + 0x80;
    } while (lVar3 != lVar4);
    uVar6 = (ulonglong)*(uint *)(lVar2 + 0x10);
    lVar3 = *(longlong *)(lVar2 + 8);
  }
  if ((int)uVar6 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x70);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x10;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(lVar2 + 0x10) = 0;
  if (*(int *)(lVar2 + 0x14) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(lVar2 + 8),0);
  }
  return;
}



// FUNCTION 14061dcd0 FUN_14061dcd0 body=688 status=ok
// SIG undefined FUN_14061dcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14061dcd0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  if (DAT_146855f88 != (undefined8 *)0x0) {
    (**(code **)*DAT_146855f88)(DAT_146855f88,1);
  }
  uVar7 = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar6 = uVar7;
  uVar10 = uVar7;
  iVar4 = DAT_146534a18;
  if (0 < DAT_146534a18) {
    do {
      plVar9 = (longlong *)(DAT_146534a10 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_146534a18, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_146534a18;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  if (DAT_146534a24 < 1) {
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar10 + 8 + DAT_146534a10) == 0) ||
            (*(longlong **)(uVar10 + DAT_146534a10) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar10 + DAT_146534a10) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534a10,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar10 = uVar10 + 0x10;
        }
        iVar5 = DAT_146534a18;
      } while ((int)uVar6 < DAT_146534a18);
    }
    _DAT_146534a20 = iVar5 * 2;
    if (_DAT_146534a20 < 3) {
      _DAT_146534a20 = 2;
    }
    if ((_DAT_146534a20 < iVar4) && (DAT_146534a1c != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534a10);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar6 = uVar7;
  uVar10 = uVar7;
  iVar4 = DAT_146534a60;
  if (0 < DAT_146534a60) {
    do {
      plVar9 = (longlong *)(DAT_146534a58 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_146534a60, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_146534a60;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  if (DAT_146534a6c < 1) {
    uVar6 = uVar7;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar7 + 8 + DAT_146534a58) == 0) ||
            (*(longlong **)(uVar7 + DAT_146534a58) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_146534a58) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534a58,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 0x10;
        }
        iVar5 = DAT_146534a60;
      } while ((int)uVar6 < DAT_146534a60);
    }
    _DAT_146534a68 = iVar5 * 2;
    if (_DAT_146534a68 < 3) {
      _DAT_146534a68 = 2;
    }
    if ((_DAT_146534a68 < iVar4) && (DAT_146534a64 != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534a58);
    }
  }
  if (DAT_146855f90 == 0) {
    return;
  }
  FUN_1426f0210();
  return;
}



// FUNCTION 14061df80 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSandboxVisitor::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPhysScene_PhysX_*,TArray<FPendingApexDamageEvent,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPhysScene_PhysX_*,TArray<FPendingApexDamageEvent,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 4);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14061dff0 FUN_14061dff0 body=616 status=ok
// SIG undefined FUN_14061dff0(void)

int * FUN_14061dff0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  void *_Dst;
  uint uVar11;
  undefined4 uVar12;
  uint *_Src;
  bool bVar13;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  undefined1 *local_res20;
  
  uVar12 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (uint *)((longlong)iVar9 * 0x20 + *param_1);
  puVar1 = (uint *)*local_res18;
  *_Src = *puVar1;
  _Src[1] = puVar1[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = _Src[1];
    local_res10 = *_Src;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    iVar9 = local_res8[0];
    lVar10 = (longlong)local_res8[0];
    bVar13 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar10 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar3 = *param_2;
      bVar4 = (byte)iVar3 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar3;
      }
      puVar7 = (undefined4 *)((longlong)iVar3 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar3;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar8 = (undefined1)local_res8[0];
      goto LAB_14061e23d;
    }
  }
  uVar8 = 0;
  cVar5 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res20 = param_4;
  if (cVar5 == '\0') {
    uVar11 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_14061e23d:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = uVar8;
  }
  return param_2;
}



// FUNCTION 14061e260 FUN_14061e260 body=776 status=ok
// SIG undefined FUN_14061e260(void)

uint * FUN_14061e260(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong *_Src;
  bool bVar16;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar10 = 1;
  uVar15 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar11 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar11 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar9 * 0x20 + *param_1);
      TArray<FPendingApexDamageEvent,FDefaultAllocator>::
      ~TArray<FPendingApexDamageEvent,FDefaultAllocator>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      uVar11 = *local_res10;
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar11;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar6 = (longlong *)param_1[4];
      *local_res10 = uVar5;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14061e53f;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar13 = -(uVar5 + iVar10) ^ uVar5 >> 0xd;
    uVar14 = (iVar10 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar14;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14061e53f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 14061e570 IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_> body=872 status=ok
// SIG undefined IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>
               (longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  longlong *plVar9;
  ushort *puVar10;
  longlong lVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 2;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar9 = &local_328;
    do {
      puVar7 = (ushort *)*plVar9;
      puVar14 = (ushort *)plVar9[1];
      local_338 = (int)plVar9[2];
      lVar11 = ((longlong)puVar14 - (longlong)puVar7 >> 1) + 1;
      puVar10 = puVar7;
      if (local_338 != 0) {
LAB_14061e630:
        if (8 < lVar11) {
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          uVar1 = puVar10[lVar11 >> 1];
          puVar10[lVar11 >> 1] = *puVar10;
          puVar12 = puVar14 + 1;
          *puVar10 = uVar1;
          puVar7 = puVar10;
LAB_14061e660:
          puVar7 = puVar7 + 1;
          if (puVar7 <= puVar14) goto code_r0x00014061e669;
          goto LAB_14061e672;
        }
        for (; puVar12 = puVar10, puVar7 = puVar10, puVar10 < puVar14; puVar14 = puVar14 + -1) {
          while (puVar13 = puVar12, puVar7 = puVar7 + 1, puVar7 <= puVar14) {
            puVar12 = puVar7;
            if (*puVar7 <= *puVar13) {
              puVar12 = puVar13;
            }
          }
          uVar1 = *puVar13;
          *puVar13 = *puVar14;
          *puVar14 = uVar1;
        }
        goto LAB_14061e845;
      }
LAB_14061e727:
      iVar15 = (int)lVar11;
      iVar4 = (iVar15 + -2) / 2;
      if (-1 < iVar4) {
        iVar5 = iVar4 * 2 + 1;
        iVar3 = iVar5;
        iVar8 = iVar4;
joined_r0x00014061e746:
        do {
          if (iVar5 < iVar15) {
            iVar5 = iVar4 * 2;
            iVar6 = iVar5 + 1;
            if (iVar5 + 2 < iVar15) {
              if (puVar7[(longlong)iVar5 + 2] < puVar7[iVar6]) {
                iVar6 = iVar5;
              }
              iVar6 = iVar6 + 1;
            }
            uVar1 = puVar7[iVar4];
            if (uVar1 < puVar7[iVar6]) {
              puVar7[iVar4] = puVar7[iVar6];
              puVar7[iVar6] = uVar1;
              iVar5 = iVar6 * 2 + 1;
              iVar4 = iVar6;
              goto joined_r0x00014061e746;
            }
          }
          iVar5 = iVar3 + -2;
          iVar4 = iVar8 + -1;
          iVar3 = iVar5;
          iVar8 = iVar4;
        } while (-1 < iVar4);
      }
      iVar15 = iVar15 + -1;
      lVar11 = (longlong)iVar15;
      if (0 < iVar15) {
        do {
          iVar4 = 0;
          uVar1 = *puVar7;
          *puVar7 = puVar7[lVar11];
          puVar7[lVar11] = uVar1;
          if (1 < iVar15) {
            do {
              iVar3 = iVar4 * 2;
              iVar5 = iVar3 + 1;
              if (iVar3 + 2 < iVar15) {
                if (puVar7[(longlong)iVar3 + 2] < puVar7[iVar5]) {
                  iVar5 = iVar3;
                }
                iVar5 = iVar5 + 1;
              }
              uVar1 = puVar7[iVar4];
              if (puVar7[iVar5] <= uVar1) break;
              puVar7[iVar4] = puVar7[iVar5];
              puVar7[iVar5] = uVar1;
              iVar4 = iVar5;
            } while (iVar5 * 2 + 1 < iVar15);
          }
          iVar15 = iVar15 + -1;
          lVar11 = lVar11 + -1;
        } while (0 < lVar11);
      }
LAB_14061e845:
      plVar9 = plVar9 + -3;
    } while (&local_328 <= plVar9);
  }
  return;
code_r0x00014061e669:
  if (*puVar7 <= *puVar10) goto LAB_14061e660;
LAB_14061e672:
  do {
    puVar13 = puVar12;
    uVar1 = puVar13[-1];
    puVar12 = puVar13 + -1;
    if (puVar12 <= puVar10) break;
  } while (*puVar10 <= uVar1);
  if (puVar7 <= puVar12) {
    uVar2 = *puVar7;
    *puVar7 = uVar1;
    *puVar12 = uVar2;
    goto LAB_14061e660;
  }
  uVar2 = *puVar10;
  local_338 = local_338 + -1;
  *puVar10 = uVar1;
  *puVar12 = uVar2;
  if ((longlong)((longlong)puVar12 + (-2 - (longlong)puVar10) & 0xfffffffffffffffeU) <
      (longlong)((longlong)puVar14 - (longlong)puVar7 & 0xfffffffffffffffeU)) {
    if (puVar7 < puVar14) {
      *plVar9 = (longlong)puVar7;
      plVar9[1] = (longlong)puVar14;
      *(int *)(plVar9 + 2) = local_338;
      plVar9 = plVar9 + 3;
    }
    if (puVar12 <= puVar10 + 1) goto LAB_14061e845;
    puVar14 = puVar13 + -2;
    puVar7 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar12) {
      *plVar9 = (longlong)puVar10;
      plVar9[1] = (longlong)(puVar13 + -2);
      *(int *)(plVar9 + 2) = local_338;
      plVar9 = plVar9 + 3;
    }
    if (puVar14 <= puVar7) goto LAB_14061e845;
  }
  lVar11 = ((longlong)puVar14 - (longlong)puVar7 >> 1) + 1;
  puVar10 = puVar7;
  if (local_338 == 0) goto LAB_14061e727;
  goto LAB_14061e630;
}



// FUNCTION 14061e8e0 FUN_14061e8e0 body=133 status=ok
// SIG undefined FUN_14061e8e0(void)

undefined8 * FUN_14061e8e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__14401a5f0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DestructibleComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14061e970 FPendingApexDamageEvent body=356 status=ok
// SIG undefined FPendingApexDamageEvent(void)

longlong FPendingApexDamageEvent::FPendingApexDamageEvent
                   (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FWeakObjectPtr::operator=();
  uVar6 = 0;
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_3 + 6);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)((longlong)param_3 + 0x32);
  *(undefined8 *)(param_1 + 0x40) = param_3[7];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x50) = param_3[9];
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0xb);
  *(undefined8 *)(param_1 + 0x68) = param_3[0xc];
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar1 = *(int *)(param_3 + 8);
  *(int *)(param_1 + 0x78) = iVar1;
  if (*(int *)(param_1 + 0x7c) < iVar1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,0);
  }
  if (*(int *)(param_3 + 8) != 0) {
    do {
      lVar2 = param_3[7];
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar4 = (longlong)(int)uVar6;
      uVar5 = (int)uVar6 + 1;
      *(undefined4 *)(lVar3 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 4 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 4 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 8 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 8 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0xc + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0xc + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0x10 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0x14 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0x14 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0x18 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0x18 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0x1c + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0x1c + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0x20 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0x20 + uVar6 * 0x28);
      *(undefined4 *)(lVar3 + 0x24 + lVar4 * 0x28) = *(undefined4 *)(lVar2 + 0x24 + uVar6 * 0x28);
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_3 + 8));
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x70);
  return param_1;
}



// FUNCTION 14061eae0 PxMat44 body=381 status=ok
// SIG undefined PxMat44(void)

float * physx::PxMat44::PxMat44(float *param_1,float *param_2)

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
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar4 = param_2[3];
  fVar7 = fVar3 + fVar3;
  fVar11 = fVar2 + fVar2;
  fVar5 = param_2[5];
  fVar9 = (fVar1 + fVar1) * fVar1;
  fVar10 = (fVar1 + fVar1) * fVar4;
  fVar8 = 1.0 - fVar3 * fVar7;
  fVar3 = param_2[4];
  fVar6 = param_2[6];
  param_1[3] = 0.0;
  *param_1 = (1.0 - fVar11 * fVar2) - fVar9;
  param_1[2] = fVar7 * fVar1 - fVar11 * fVar4;
  param_1[1] = fVar10 + fVar7 * fVar2;
  param_1[4] = fVar7 * fVar2 - fVar10;
  param_1[7] = 0.0;
  param_1[5] = fVar8 - fVar9;
  param_1[6] = fVar11 * fVar1 + fVar7 * fVar4;
  param_1[8] = fVar11 * fVar4 + fVar7 * fVar1;
  param_1[9] = fVar11 * fVar1 - fVar7 * fVar4;
  param_1[0xb] = 0.0;
  param_1[10] = fVar8 - fVar11 * fVar2;
  param_1[0xc] = fVar3;
  param_1[0xd] = fVar5;
  param_1[0xe] = fVar6;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 14061ec60 PxQuat body=490 status=ok
// SIG undefined PxQuat(void)

float * physx::PxQuat::PxQuat(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = param_2[8];
  if (fVar4 < 0.0) {
    fVar2 = *param_2;
    fVar3 = param_2[4];
    if (fVar2 <= fVar3) {
      fVar4 = ((1.0 - fVar2) + fVar3) - fVar4;
      fVar3 = 0.5 / SQRT(fVar4);
      fVar6 = (param_2[6] - param_2[2]) * fVar3;
      fVar8 = fVar3 * fVar4;
      fVar2 = (param_2[7] + param_2[5]) * fVar3;
      fVar3 = fVar3 * (param_2[3] + param_2[1]);
    }
    else {
      fVar4 = ((fVar2 + 1.0) - fVar3) - fVar4;
      fVar3 = 0.5 / SQRT(fVar4);
      fVar6 = (param_2[5] - param_2[7]) * fVar3;
      fVar8 = fVar3 * (param_2[3] + param_2[1]);
      fVar2 = (param_2[2] + param_2[6]) * fVar3;
      fVar3 = fVar3 * fVar4;
    }
    *param_1 = fVar3;
    param_1[1] = fVar8;
    param_1[2] = fVar2;
    param_1[3] = fVar6;
    return param_1;
  }
  fVar2 = param_2[4];
  fVar3 = *param_2;
  if (fVar3 < -fVar2) {
    fVar6 = param_2[1];
    fVar8 = param_2[3];
    fVar5 = param_2[7];
    fVar1 = param_2[5];
    fVar4 = ((1.0 - fVar3) - fVar2) + fVar4;
    fVar2 = param_2[2];
    fVar3 = param_2[6];
    fVar7 = 0.5 / SQRT(fVar4);
    param_1[2] = fVar7 * fVar4;
    *param_1 = (fVar2 + fVar3) * fVar7;
    param_1[1] = (fVar5 + fVar1) * fVar7;
    param_1[3] = (fVar6 - fVar8) * fVar7;
    return param_1;
  }
  fVar6 = param_2[6];
  fVar8 = param_2[2];
  fVar4 = fVar3 + 1.0 + fVar2 + fVar4;
  fVar5 = 0.5 / SQRT(fVar4);
  fVar2 = param_2[1];
  fVar3 = param_2[3];
  *param_1 = (param_2[5] - param_2[7]) * fVar5;
  param_1[1] = (fVar6 - fVar8) * fVar5;
  param_1[2] = (fVar2 - fVar3) * fVar5;
  param_1[3] = fVar5 * fVar4;
  return param_1;
}



// FUNCTION 14061ee50 FUN_14061ee50 body=506 status=ok
// SIG undefined FUN_14061ee50(void)

longlong * FUN_14061ee50(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1423a07f0();
  *param_1 = (longlong)&PTR_FUN_144019af0;
  param_1[5] = (longlong)&PTR_LAB_14401a548;
  param_1[0x5a] = (longlong)&PTR_LAB_14401a578;
  param_1[0x146] = (longlong)&PTR_LAB_14401a5d0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  FCollisionResponse::FCollisionResponse(param_1 + 0x150);
  FCollisionResponse::FCollisionResponse(param_1 + 0x156);
  *(undefined4 *)(param_1 + 0x15c) = 5;
  param_1[0x15d] = (longlong)param_1;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb19) = 1;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  *(byte *)((longlong)param_1 + 0x664) = *(byte *)((longlong)param_1 + 0x664) & 0xfd;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  FUN_1426aa270(param_1 + 0x76,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146856138) {
    _Init_thread_header(&DAT_146856138);
    if (DAT_146856138 == -1) {
      FName::FName(&DAT_146856130,L"Destructible",1);
      _Init_thread_footer(&DAT_146856138);
    }
  }
  uVar1 = DAT_146856130;
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar2 != 0) {
    FUN_142717130(param_1,uVar1);
  }
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x80;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) | 2;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 8;
  *(undefined4 *)((longlong)param_1 + 0xa54) = 0x41c80000;
  FUN_1423b9e20(param_1,0);
  *(byte *)((longlong)param_1 + 0x881) = *(byte *)((longlong)param_1 + 0x881) & 0xf7;
  FUN_1426c5e30(param_1 + 0x160,(longlong)param_1 + 0xb04,param_1 + 0x161);
  return param_1;
}



// FUNCTION 14061f050 UDestructibleFractureSettings body=136 status=ok
// SIG undefined UDestructibleFractureSettings(void)

undefined8 * UDestructibleFractureSettings::UDestructibleFractureSettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144019828;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  param_1[6] = 0x42c80000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 5) = 0x19;
  return param_1;
}



// FUNCTION 14061f0e0 FUN_14061f0e0 body=450 status=ok
// SIG undefined FUN_14061f0e0(void)

undefined8 * FUN_14061f0e0(undefined8 *param_1)

{
  FUN_14276cd20();
  *param_1 = &PTR_FUN_14401acd8;
  param_1[5] = &PTR_LAB_14401af50;
  param_1[6] = &PTR_LAB_14401af80;
  param_1[7] = &PTR_LAB_14401afb0;
  *(undefined4 *)(param_1 + 0x6d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x3dcccccd;
  param_1[0x6e] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6f) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x70] = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x72) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0x41200000;
  *(undefined4 *)(param_1 + 0x73) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x41200000;
  param_1[0x74] = 0xc8f42400c8f42400;
  *(undefined1 *)(param_1 + 0x77) = 1;
  *(undefined4 *)(param_1 + 0x75) = 0xc8f42400;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x48f4240048f42400;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x48f42400;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(uint *)(param_1 + 0x7e) = *(uint *)(param_1 + 0x7e) & 0xfffffe00;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x82) = 10;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x40800000;
  param_1[0x83] = 0x40800000;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  return param_1;
}



// FUNCTION 14061f2b0 ~TArray<FPendingApexDamageEvent,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FPendingApexDamageEvent,FDefaultAllocator>(void)

void TArray<FPendingApexDamageEvent,FDefaultAllocator>::
     ~TArray<FPendingApexDamageEvent,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x70);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x10;
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



// FUNCTION 14061f310 ~TSparseArray<TSetElement<TTuple<FPhysScene_PhysX_*,TArray<FPendingApexDamageEvent,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FPhysScene_PhysX_*,TArray<FPendingApexDamageEvent,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FPhysScene_PhysX_*,TArray<FPendingApexDamageEvent,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FPhysScene_PhysX_*,TArray<FPendingApexDamageEvent,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_14061f3d1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_14061f3d1:
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
      TArray<FPendingApexDamageEvent,FDefaultAllocator>::
      ~TArray<FPendingApexDamageEvent,FDefaultAllocator>((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14061f4a0 ~TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=201 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x20 + *local_38 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 14061f570 FUN_14061f570 body=291 status=ok
// SIG undefined FUN_14061f570(void)

void FUN_14061f570(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  plVar6 = *(longlong **)(param_1 + 0x188);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x158);
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x150) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x148);
  }
  if ((plVar6 != (longlong *)0x0) ||
     ((*(int *)(param_1 + 0x150) != 0 &&
      (plVar6 = *(longlong **)(param_1 + 0x148), plVar6 != (longlong *)0x0)))) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    if (*(longlong *)(param_1 + 0x148) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x148),0,0);
      *(undefined8 *)(param_1 + 0x148) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_1 + 0x130);
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14061f6a0 FUN_14061f6a0 body=177 status=ok
// SIG undefined FUN_14061f6a0(void)

void FUN_14061f6a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x458) = 0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x410);
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 1000);
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x3e0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_14271e9f0(param_1);
  return;
}



// FUNCTION 14061f760 FUN_14061f760 body=629 status=ok
// SIG undefined FUN_14061f760(void)

void FUN_14061f760(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  FTickFunction::~FTickFunction(param_1 + 0x658);
  if (*(longlong *)(param_1 + 0x648) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x648) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
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
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FMemory::Free();
  }
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
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  FUN_14061f570(param_1 + 0x3b0);
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_1440197d0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14061f9e0 FUN_14061f9e0 body=683 status=ok
// SIG undefined FUN_14061f9e0(void)

void FUN_14061f9e0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x9f0) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x988);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x978);
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x930) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x910) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x908);
  plVar2 = *(longlong **)(param_1 + 0x900);
  if (iVar4 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar2 = *(longlong **)(param_1 + 0x900);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x8e8) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x8e0);
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x8e0);
    plVar3 = plVar2;
  }
  if (plVar2 == (longlong *)0x0) {
    if ((*(int *)(param_1 + 0x8e8) == 0) || (plVar3 == (longlong *)0x0)) goto LAB_14061fafe;
    lVar5 = *plVar3;
  }
  else {
    lVar5 = *plVar2;
    plVar3 = plVar2;
  }
  (**(code **)(lVar5 + 0x28))(plVar3,0);
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x8e0),0,0);
    *(undefined8 *)(param_1 + 0x8e0) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x8e8) = 0;
LAB_14061fafe:
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x868) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x860);
  lVar5 = *(longlong *)(param_1 + 0x858);
  if (iVar4 != 0) {
    do {
      FUN_1423a1320(lVar5);
      lVar5 = lVar5 + 0x38;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = *(longlong *)(param_1 + 0x858);
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x808) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7a0);
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)(param_1 + 0x748);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar5 = 2;
  do {
    plVar3 = plVar2 + -2;
    plVar2 = plVar2 + -2;
    lVar5 = lVar5 + -1;
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  iVar4 = *(int *)(param_1 + 0x708);
  lVar5 = *(longlong *)(param_1 + 0x700);
  if (iVar4 != 0) {
    plVar2 = (longlong *)(lVar5 + 0x18);
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
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = *(longlong *)(param_1 + 0x700);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 14061fc90 FUN_14061fc90 body=155 status=ok
// SIG undefined FUN_14061fc90(void)

void FUN_14061fc90(longlong *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar1 = (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xa0))();
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined2 *)(**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xa8))();
  if (uVar1 != 0) {
    do {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xd0))
                         (*(longlong **)(*param_1 + 0xa78),*puVar2);
      (**(code **)(*plVar3 + 0x50))(plVar3,2,*(char *)param_1[1] == '\0');
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14061fd30 FUN_14061fd30 body=160 status=ok
// SIG undefined FUN_14061fd30(void)

void FUN_14061fd30(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = FUN_1423ac950(*param_1,*(undefined8 *)param_1[1]);
  puVar1 = (undefined4 *)param_1[2];
  puVar2 = (undefined4 *)param_1[3];
  local_24 = puVar1[1];
  local_28 = *puVar1;
  local_20 = puVar1[2];
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    iVar4 = iVar3 + -1;
  }
  local_10 = puVar2[2];
  local_14 = puVar2[1];
  local_18 = *puVar2;
  (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x168))
            (*(longlong **)(*param_1 + 0xa78),iVar4,&local_18,0,&local_28,1);
  return;
}



// FUNCTION 14061fdd0 FUN_14061fdd0 body=130 status=ok
// SIG undefined FUN_14061fdd0(void)

void FUN_14061fdd0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = FUN_1423ac950(*param_1,*(undefined8 *)param_1[1]);
  puVar1 = (undefined4 *)param_1[2];
  local_10 = puVar1[2];
  local_14 = puVar1[1];
  local_18 = *puVar1;
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    iVar3 = iVar2 + -1;
  }
  (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x168))
            (*(longlong **)(*param_1 + 0xa78),iVar3,&local_18,(*(char *)param_1[3] != '\0') + '\x01'
             ,0,1);
  return;
}



// FUNCTION 14061fe60 FUN_14061fe60 body=215 status=ok
// SIG undefined FUN_14061fe60(void)

void FUN_14061fe60(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8 [2];
  longlong local_res10;
  
  if (*(char *)*param_1 != '\0') {
    plVar1 = *(longlong **)(param_1[1] + 0xa78);
                    /* WARNING: Could not recover jumptable at 0x00014061fe89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff);
    return;
  }
  uVar5 = 0;
  local_res10 = 0;
  local_res8[0] = 0;
  plVar1 = *(longlong **)(param_1[1] + 0xa78);
  cVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,&local_res10,local_res8,7);
  if (cVar3 != '\0') {
    uVar6 = local_res8[0];
    if (local_res8[0] != 0) {
      do {
        piVar2 = *(int **)(*(longlong *)(local_res10 + uVar5 * 8) + 0x10);
        if (((piVar2 != (int *)0x0) && (*piVar2 == 7)) && (*(longlong *)(piVar2 + 2) != 0)) {
          (**(code **)(**(longlong **)(param_1[1] + 0xa78) + 0x160))
                    (*(longlong **)(param_1[1] + 0xa78),
                     *(undefined4 *)(*(longlong *)(piVar2 + 2) + 0x10),0);
          uVar6 = local_res8[0];
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar6);
    }
    (**(code **)(**(longlong **)(param_1[1] + 0xa78) + 200))();
  }
  return;
}



// FUNCTION 14061ff40 FUN_14061ff40 body=310 status=ok
// SIG undefined FUN_14061ff40(void)

void FUN_14061ff40(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_res8;
  
  lVar9 = *(longlong *)(*param_1 + 0x718);
  if (lVar9 != 0) {
    lVar6 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14061ff9c;
  }
  lVar9 = 0;
LAB_14061ff9c:
  uVar4 = (**(code **)(**(longlong **)(lVar9 + 0x440) + 0xc0))();
  iVar1 = *(int *)param_1[1];
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      uVar5 = (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xd8))
                        (*(longlong **)(*param_1 + 0xa78),&local_res8,uVar7);
      if (uVar5 != 0) {
        lVar9 = 0;
        uVar8 = (ulonglong)uVar5;
        do {
          plVar2 = *(longlong **)(lVar9 + local_res8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0xf8))(plVar2,2,(iVar1 - 1U & 0xfffffffd) == 0);
            (**(code **)(*plVar2 + 0xf8))(plVar2,1,iVar1 - 2U < 2);
          }
          lVar9 = lVar9 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return;
}



// FUNCTION 140620080 FUN_140620080 body=131 status=ok
// SIG undefined FUN_140620080(void)

void FUN_140620080(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = FUN_1423ac950(*param_1,*(undefined8 *)param_1[1]);
  puVar1 = (undefined4 *)param_1[2];
  local_10 = puVar1[2];
  local_14 = puVar1[1];
  local_18 = *puVar1;
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    iVar3 = iVar2 + -1;
  }
  (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x168))
            (*(longlong **)(*param_1 + 0xa78),iVar3,&local_18,-(*(char *)param_1[3] != '\0') & 3,0,1
            );
  return;
}



// FUNCTION 140620110 FUN_140620110 body=298 status=ok
// SIG undefined FUN_140620110(void)

void FUN_140620110(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 *local_18;
  int local_10;
  undefined4 local_c;
  
  uVar5 = 0x34000000;
  if (*(char *)*param_1 == '\0') {
    uVar5 = 0x14000000;
  }
  uVar4 = 0;
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  local_10 = *(int *)param_1[1];
  lVar8 = (longlong)local_10;
  if (0 < local_10) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18);
  }
  puVar1 = local_18;
  _guard_xfg_dispatch_icall_nop(local_18,0,lVar8 << 3);
  piVar7 = (int *)param_1[1];
  puVar2 = puVar1;
  uVar6 = uVar4;
  if (0 < *piVar7) {
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *puVar2 = *(undefined4 *)(uVar6 + *(longlong *)param_1[2]);
      puVar2[1] = uVar5;
      piVar7 = (int *)param_1[1];
      puVar2 = puVar2 + 2;
      uVar6 = uVar6 + 4;
    } while ((int)uVar3 < *piVar7);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = (undefined4 *)0x0;
  local_10 = 0;
  (**(code **)(**(longlong **)(param_1[3] + 0xa78) + 0x200))
            (*(longlong **)(param_1[3] + 0xa78),puVar1,*piVar7,*(undefined1 *)*param_1,0,&local_18,
             &local_28);
  if (puVar1 != (undefined4 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 140620240 FUN_140620240 body=221 status=ok
// SIG undefined FUN_140620240(void)

void FUN_140620240(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  uint uVar5;
  bool bVar6;
  uint local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  bVar6 = 0 < *(int *)(*(longlong *)*param_1 + 0x3cc);
  local_res8[0] = *(int *)param_1[1] + 1;
  lVar2 = *(longlong *)*param_1;
  uVar5 = *(int *)param_1[1] + 2;
  iVar1 = *(int *)(lVar2 + 0x468);
  if ((int)uVar5 < iVar1) {
    lVar3 = (longlong)(int)uVar5;
    puVar4 = (ushort *)(*(longlong *)(lVar2 + 0x460) + lVar3 * 2);
    do {
      if (*puVar4 == local_res8[0]) {
        bVar6 = true;
        local_res8[0] = uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar3 < iVar1);
  }
  local_res8[1] = 0x34000000;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(**(longlong **)(param_1[2] + 0xa78) + 0x200))
            (*(longlong **)(param_1[2] + 0xa78),local_res8,1,bVar6,0,&local_18,&local_28);
  return;
}



// FUNCTION 140620320 FUN_140620320 body=328 status=ok
// SIG undefined FUN_140620320(void)

void FUN_140620320(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  longlong local_res10;
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  
  uVar8 = 0;
  local_res10 = 0;
  local_res8[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xc0))
                    (*(longlong **)(*param_1 + 0xa78),&local_res10,local_res8,7);
  if ((cVar2 != '\0') && (uVar6 = uVar8, local_res8[0] != 0)) {
    do {
      local_48 = 0;
      local_3c = 0;
      plVar1 = *(longlong **)(local_res10 + uVar6 * 8);
      local_40 = (**(code **)(*plVar1 + 200))(plVar1);
      uVar7 = uVar8;
      if (0 < local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,0,local_40);
        uVar7 = local_48;
      }
      iVar3 = (**(code **)(*plVar1 + 0xd0))(plVar1,uVar7,local_40,0);
      uVar4 = uVar8;
      if (0 < iVar3) {
        do {
          plVar1 = *(longlong **)(uVar7 + uVar4 * 8);
          (**(code **)(*plVar1 + 0xb0))(plVar1,local_38);
          local_38[0] = *(undefined4 *)param_1[1];
          (**(code **)(**(longlong **)(uVar7 + uVar4 * 8) + 0xa8))();
          uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < (longlong)iVar3);
      }
      if (uVar7 != 0) {
        FMemory::Free(uVar7);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < local_res8[0]);
  }
  return;
}



// FUNCTION 140620470 FUN_140620470 body=359 status=ok
// SIG undefined FUN_140620470(void)

void FUN_140620470(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [12];
  uint local_2c;
  undefined1 local_28 [12];
  uint local_1c;
  
  uVar7 = 0;
  uVar5 = uVar7;
  if (*(int *)*param_1 != 0) {
    do {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1[1] + 0xa78) + 0xd0))
                         (*(longlong **)(param_1[1] + 0xa78),uVar5);
      if (plVar2 != (longlong *)0x0) {
        local_48 = 0;
        local_3c = 0;
        local_40 = (**(code **)(*plVar2 + 200))(plVar2);
        uVar6 = uVar7;
        if (0 < local_40) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,0,local_40);
          uVar6 = local_48;
        }
        iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2,uVar6,local_40,0);
        uVar3 = uVar7;
        if (0 < iVar1) {
          do {
            plVar2 = *(longlong **)(uVar6 + uVar3 * 8);
            (**(code **)(*plVar2 + 0xb0))(plVar2,local_38);
            plVar2 = *(longlong **)(uVar6 + uVar3 * 8);
            (**(code **)(*plVar2 + 0xa0))(plVar2,local_28);
            local_2c = local_2c | 0x43;
            local_1c = local_1c | 0x43;
            (**(code **)(*(longlong *)param_1[1] + 0xa40))((longlong *)param_1[1],local_38,local_28)
            ;
            plVar2 = *(longlong **)(uVar6 + uVar3 * 8);
            (**(code **)(*plVar2 + 0xa8))(plVar2,local_38);
            plVar2 = *(longlong **)(uVar6 + uVar3 * 8);
            (**(code **)(*plVar2 + 0x98))(plVar2,local_28);
            uVar3 = uVar3 + 1;
          } while ((longlong)uVar3 < (longlong)iVar1);
        }
        if (uVar6 != 0) {
          FMemory::Free(uVar6);
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)*param_1);
  }
  return;
}



// FUNCTION 1406205e0 FUN_1406205e0 body=7277 status=ok
// SIG undefined FUN_1406205e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406205e0(longlong *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  float fVar39;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar46;
  float fVar47;
  undefined1 auVar41 [16];
  float fVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
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
  undefined1 auStack_2f8 [32];
  char local_2d8;
  undefined4 local_2d0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  int local_278;
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  longlong local_258;
  longlong local_250;
  ulonglong local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
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
  undefined1 local_1a8 [32];
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [32];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [4];
  undefined1 auStack_134 [4];
  undefined8 uStack_130;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar24 = 0;
  lVar27 = *(longlong *)(*param_1 + 0x718);
  if (lVar27 != 0) {
    lVar20 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x88) + (longlong)*(int *)(lVar20 + 0x90) * 8
         ) != lVar20 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) goto LAB_140620654;
  }
  lVar27 = lVar24;
LAB_140620654:
  lVar20 = *(longlong *)(*param_1 + 0x120);
  if (lVar20 == 0) {
    lVar20 = FUN_1423407b0();
  }
  if (((*(longlong *)(lVar20 + 0x218) != 0) &&
      (lVar20 = *param_1, *(longlong *)(lVar20 + 0xa78) != 0)) && (lVar27 != 0)) {
    local_1f8 = *(undefined8 *)(lVar20 + 0x220);
    uStack_1f0 = *(undefined8 *)(lVar20 + 0x228);
    local_178 = *(undefined8 *)(lVar20 + 0x230);
    uStack_170 = *(undefined8 *)(lVar20 + 0x238);
    fVar51 = *(float *)(lVar20 + 0x210);
    fVar50 = *(float *)(lVar20 + 0x214);
    fVar53 = *(float *)(lVar20 + 0x218);
    fVar54 = *(float *)(lVar20 + 0x21c);
    local_1b8 = fVar51;
    fStack_1b4 = fVar50;
    fStack_1b0 = fVar53;
    fStack_1ac = fVar54;
    local_2d8 = FWeakObjectPtr::IsValid(lVar20 + 0xb10);
    local_250 = 0;
    local_248 = 0;
    if (0 < *(int *)(lVar27 + 0x450)) {
      local_258 = 0x60;
      iVar28 = 1;
      cVar17 = local_2d8;
      do {
        lVar20 = local_258;
        local_278 = iVar28 + 1;
        cVar16 = FUN_1423b47e0(*param_1,local_278);
        if (((*(char *)param_1[1] == '\0') || (cVar16 == '\0')) &&
           (plVar21 = (longlong *)
                      (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xd0))
                                (*(longlong **)(*param_1 + 0xa78),iVar28),
           fVar48 = fRam00000001468560d8, fVar39 = fRam00000001468560d4, fVar69 = _DAT_1468560d0,
           fVar67 = fRam0000000146856008, fVar64 = fRam0000000146856004, fVar60 = _DAT_146856000,
           plVar21 != (longlong *)0x0)) {
          piVar3 = (int *)plVar21[2];
          if ((piVar3 == (int *)0x0) || (*piVar3 != 7)) {
            lVar22 = 0;
          }
          else {
            lVar22 = *(longlong *)(piVar3 + 2);
          }
          if ((*(int *)(lVar22 + 0x10) == iVar28) &&
             ((cVar17 != '\0' || (*(char *)(*param_1 + 0xa50) != '\0')))) {
            lVar22 = *(longlong *)(lVar27 + 0x148);
            pfVar2 = (float *)(lVar20 + 0x10 + lVar22);
            pfVar1 = (float *)(lVar20 + lVar22);
            auVar41._4_4_ =
                 -(uint)(fRam0000000146856054 <
                        (float)((uint)DAT_1464aa788._4_4_ & uRam0000000146856064));
            auVar41._0_4_ =
                 -(uint)(_DAT_146856050 < (float)((uint)(float)DAT_1464aa788 & _DAT_146856060));
            auVar41._8_4_ =
                 -(uint)(fRam0000000146856058 < (float)((uint)DAT_1464aa790 & uRam0000000146856068))
            ;
            auVar41._12_4_ = -(uint)(fRam000000014685605c < 0.0);
            iVar18 = movmskps((int)lVar22,auVar41);
            fVar70 = _DAT_1468b5b70;
            fVar71 = fRam00000001468b5b74;
            fVar72 = fRam00000001468b5b78;
            fVar73 = fRam00000001468b5b7c;
            fVar40 = _DAT_1468b5b90;
            fVar46 = fRam00000001468b5b94;
            fVar47 = fRam00000001468b5b98;
            fVar49 = fRam00000001468b5b9c;
            fVar74 = _DAT_1468b5b80;
            fVar75 = fRam00000001468b5b84;
            fVar57 = fRam00000001468b5b88;
            fVar61 = fRam00000001468b5b8c;
            if (iVar18 != 0) {
              fVar70 = *pfVar1 * _DAT_146856040;
              fVar71 = pfVar1[1] * fRam0000000146856044;
              fVar72 = pfVar1[2] * fRam0000000146856048;
              fVar73 = pfVar1[3] * fRam000000014685604c;
              auVar9._4_4_ = DAT_1464aa788._4_4_;
              auVar9._0_4_ = (float)DAT_1464aa788;
              auVar9._8_4_ = DAT_1464aa790;
              auVar9._12_4_ = 0;
              auVar41 = rcpps(ZEXT816(0),auVar9);
              fVar40 = auVar41._0_4_;
              fVar46 = auVar41._4_4_;
              fVar47 = auVar41._8_4_;
              fVar49 = auVar41._12_4_;
              fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * (float)DAT_1464aa788;
              fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * DAT_1464aa788._4_4_;
              fVar47 = (fVar47 + fVar47) - fVar47 * fVar47 * DAT_1464aa790;
              fVar49 = (fVar49 + fVar49) - fVar49 * fVar49 * 0.0;
              fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * (float)DAT_1464aa788;
              fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * DAT_1464aa788._4_4_;
              fVar47 = (fVar47 + fVar47) - fVar47 * fVar47 * DAT_1464aa790;
              fVar49 = (fVar49 + fVar49) - fVar49 * fVar49 * 0.0;
              fVar40 = (float)((-(uint)((float)((uint)(float)DAT_1464aa788 & _DAT_146856060) <=
                                       _DAT_146856050) & (uint)fVar40 ^ (uint)fVar40) &
                              _DAT_146856010);
              fVar46 = (float)((-(uint)((float)((uint)DAT_1464aa788._4_4_ & uRam0000000146856064) <=
                                       fRam0000000146856054) & (uint)fVar46 ^ (uint)fVar46) &
                              uRam0000000146856014);
              fVar47 = (float)((-(uint)((float)((uint)DAT_1464aa790 & uRam0000000146856068) <=
                                       fRam0000000146856058) & (uint)fVar47 ^ (uint)fVar47) &
                              uRam0000000146856018);
              fVar49 = (float)((-(uint)(0.0 <= fRam000000014685605c) & (uint)fVar49 ^ (uint)fVar49)
                              & uRam000000014685601c);
              fVar74 = *pfVar2 * fVar40;
              fVar75 = pfVar2[1] * fVar46;
              fVar77 = pfVar2[2] * fVar47;
              fVar80 = fVar49 * 0.0;
              fVar57 = fVar77 * fVar71 - fVar75 * fVar72;
              fVar61 = fVar74 * fVar72 - fVar77 * fVar70;
              fVar65 = fVar75 * fVar70 - fVar74 * fVar71;
              fVar68 = fVar80 * fVar73 - fVar80 * fVar73;
              fVar57 = fVar57 + fVar57;
              fVar61 = fVar61 + fVar61;
              fVar65 = fVar65 + fVar65;
              fVar68 = fVar68 + fVar68;
              fVar74 = (float)((uint)(0.0 - ((fVar65 * fVar71 - fVar61 * fVar72) +
                                            fVar73 * fVar57 + fVar74)) & _DAT_146856010);
              fVar75 = (float)((uint)(0.0 - ((fVar57 * fVar72 - fVar65 * fVar70) +
                                            fVar73 * fVar61 + fVar75)) & uRam0000000146856014);
              fVar57 = (float)((uint)(0.0 - ((fVar61 * fVar70 - fVar57 * fVar71) +
                                            fVar73 * fVar65 + fVar77)) & uRam0000000146856018);
              fVar61 = (float)((uint)(0.0 - ((fVar68 * fVar73 - fVar68 * fVar73) +
                                            fVar73 * fVar68 + fVar80)) & uRam000000014685601c);
            }
            lVar22 = *(longlong *)param_1[2];
            local_268 = CONCAT44(fRam00000001468560d4,_DAT_1468560d0);
            fStack_260 = fRam00000001468560d8;
            fStack_25c = fRam00000001468560dc;
            pfVar1 = (float *)(lVar22 + 0x10 + lVar20);
            fVar65 = *pfVar1;
            fVar68 = pfVar1[1];
            fVar77 = pfVar1[2];
            pfVar1 = (float *)(lVar22 + lVar20);
            fVar80 = *pfVar1;
            fVar59 = pfVar1[1];
            fVar63 = pfVar1[2];
            fVar56 = pfVar1[3];
            auVar29._4_4_ = fVar46;
            auVar29._0_4_ = fVar40;
            auVar29._8_4_ = fVar47;
            auVar29._12_4_ = fVar49;
            auVar10._4_4_ = DAT_1464aa788._4_4_;
            auVar10._0_4_ = (float)DAT_1464aa788;
            auVar10._8_4_ = DAT_1464aa790;
            auVar10._12_4_ = 0;
            auVar41 = minps(auVar29,auVar10);
            auVar30._4_4_ = -(uint)(auVar41._4_4_ < fRam00000001468560d4);
            auVar30._0_4_ = -(uint)(auVar41._0_4_ < _DAT_1468560d0);
            auVar30._8_4_ = -(uint)(auVar41._8_4_ < fRam00000001468560d8);
            auVar30._12_4_ = -(uint)(auVar41._12_4_ < fRam00000001468560dc);
            iVar18 = movmskps((int)(longlong *)param_1[2],auVar30);
            local_288 = _DAT_1468560b0;
            uStack_280 = uRam00000001468560b8;
            if (iVar18 == 0) {
              fVar74 = (float)DAT_1464aa788 * fVar74;
              fVar75 = DAT_1464aa788._4_4_ * fVar75;
              fVar57 = DAT_1464aa790 * fVar57;
              fVar61 = fVar61 * 0.0;
              fVar60 = fVar80 * fVar73 * _DAT_146856090 + fVar70 * fVar56 +
                       fVar59 * fVar72 * _DAT_146856080 + fVar63 * fVar71 * _DAT_146856070;
              fVar64 = fVar80 * fVar72 * fRam0000000146856094 + fVar71 * fVar56 +
                       fVar59 * fVar73 * fRam0000000146856084 +
                       fVar63 * fVar70 * fRam0000000146856074;
              fVar67 = fVar80 * fVar71 * fRam0000000146856098 + fVar72 * fVar56 +
                       fVar59 * fVar70 * fRam0000000146856088 +
                       fVar63 * fVar73 * fRam0000000146856078;
              fVar69 = fVar80 * fVar70 * fRam000000014685609c + fVar73 * fVar56 +
                       fVar59 * fVar71 * fRam000000014685608c +
                       fVar63 * fVar72 * fRam000000014685607c;
              fVar39 = fVar57 * fVar59 - fVar75 * fVar63;
              fVar48 = fVar74 * fVar63 - fVar57 * fVar80;
              fVar70 = fVar75 * fVar80 - fVar74 * fVar59;
              fVar71 = fVar61 * fVar56 - fVar61 * fVar56;
              fVar39 = fVar39 + fVar39;
              fVar48 = fVar48 + fVar48;
              fVar70 = fVar70 + fVar70;
              fVar71 = fVar71 + fVar71;
              fVar65 = (fVar70 * fVar59 - fVar48 * fVar63) + fVar39 * fVar56 + fVar74 + fVar65;
              fVar68 = (fVar39 * fVar63 - fVar70 * fVar80) + fVar48 * fVar56 + fVar75 + fVar68;
              fVar77 = (fVar48 * fVar80 - fVar39 * fVar59) + fVar70 * fVar56 + fVar57 + fVar77;
              fVar39 = (fVar71 * fVar56 - fVar71 * fVar56) + fVar71 * fVar56 + fVar61 + 0.0;
              fVar40 = (float)DAT_1464aa788 * fVar40;
              fVar46 = DAT_1464aa788._4_4_ * fVar46;
              fVar47 = DAT_1464aa790 * fVar47;
              fVar49 = fVar49 * 0.0;
              uVar19 = 0;
            }
            else {
              fVar50 = fVar59 + fVar59;
              fVar53 = fVar63 + fVar63;
              fVar55 = fVar80 * (fVar80 + fVar80);
              local_238 = CONCAT44(DAT_1464aa788._4_4_ * fVar46,(float)DAT_1464aa788 * fVar40);
              uStack_230 = CONCAT44(fVar49 * 0.0,DAT_1464aa790 * fVar47);
              fVar51 = (fVar80 + fVar80) * fVar56;
              fVar52 = fVar71 + fVar71;
              fVar54 = fVar72 + fVar72;
              fVar81 = (fVar53 * fVar56 + fVar50 * fVar80) * (float)DAT_1464aa788;
              fVar83 = (fVar51 + fVar53 * fVar59) * DAT_1464aa788._4_4_;
              fVar85 = (fVar50 * fVar56 + fVar53 * fVar80) * DAT_1464aa790;
              fVar58 = DAT_1464aa788._4_4_ * (fVar50 * fVar80 - fVar53 * fVar56);
              fVar62 = DAT_1464aa790 * (fVar53 * fVar59 - fVar51);
              fVar66 = (float)DAT_1464aa788 * (fVar53 * fVar80 - fVar50 * fVar56);
              fVar56 = fVar70 * (fVar70 + fVar70);
              fVar51 = (float)((uint)((_DAT_146856000 - (fVar63 * fVar53 + fVar59 * fVar50)) *
                                     (float)DAT_1464aa788) & _DAT_146856010);
              fVar53 = (float)((uint)((fRam0000000146856004 - (fVar63 * fVar53 + fVar55)) *
                                     DAT_1464aa788._4_4_) & uRam0000000146856014);
              fVar61 = (float)((uint)((fRam0000000146856008 - (fVar59 * fVar50 + fVar55)) *
                                     DAT_1464aa790) & uRam0000000146856018);
              fVar80 = (float)((uint)((fRam000000014685600c - (fVar55 + fVar55)) * 0.0) &
                              uRam000000014685601c);
              fVar50 = (fVar70 + fVar70) * fVar73;
              fVar55 = (fVar54 * fVar73 + fVar52 * fVar70) * fVar40;
              fVar76 = (fVar50 + fVar54 * fVar71) * fVar46;
              fVar78 = (fVar52 * fVar73 + fVar54 * fVar70) * fVar47;
              fVar59 = fVar46 * (fVar52 * fVar70 - fVar54 * fVar73);
              fVar63 = fVar47 * (fVar54 * fVar71 - fVar50);
              fVar70 = fVar40 * (fVar54 * fVar70 - fVar52 * fVar73);
              fVar50 = (float)((uint)((_DAT_146856000 - (fVar72 * fVar54 + fVar71 * fVar52)) *
                                     fVar40) & _DAT_146856010);
              fVar54 = (float)((uint)((fRam0000000146856004 - (fVar72 * fVar54 + fVar56)) * fVar46)
                              & uRam0000000146856014);
              fVar40 = (float)((uint)((fRam0000000146856008 - (fVar71 * fVar52 + fVar56)) * fVar47)
                              & uRam0000000146856018);
              fVar46 = (float)((uint)((fRam000000014685600c - (fVar56 + fVar56)) * fVar49) &
                              uRam000000014685601c);
              local_148 = fVar55 * fVar58 + fVar50 * fVar51 + fVar70 * fVar85 + fVar46 * fVar65;
              fStack_144 = fVar55 * fVar53 + fVar50 * fVar81 + fVar70 * fVar62 + fVar46 * fVar68;
              fStack_140 = fVar55 * fVar83 + fVar50 * fVar66 + fVar70 * fVar61 + fVar46 * fVar77;
              fStack_13c = fVar55 * fVar80 + fVar50 * fVar80 + fVar70 * fVar80 +
                           fVar46 * fRam000000014685600c;
              auStack_134 = (undefined1  [4])
                            (fVar54 * fVar53 + fVar59 * fVar81 + fVar76 * fVar62 + fVar46 * fVar68);
              local_138 = (undefined1  [4])
                          (fVar54 * fVar58 + fVar59 * fVar51 + fVar76 * fVar85 + fVar46 * fVar65);
              uStack_130._0_4_ =
                   fVar54 * fVar83 + fVar59 * fVar66 + fVar76 * fVar61 + fVar46 * fVar77;
              uStack_130._4_4_ =
                   fVar54 * fVar80 + fVar59 * fVar80 + fVar76 * fVar80 +
                   fVar46 * fRam000000014685600c;
              local_128 = fVar63 * fVar58 + fVar78 * fVar51 + fVar40 * fVar85 + fVar46 * fVar65;
              fStack_124 = fVar63 * fVar53 + fVar78 * fVar81 + fVar40 * fVar62 + fVar46 * fVar68;
              fStack_120 = fVar63 * fVar83 + fVar78 * fVar66 + fVar40 * fVar61 + fVar46 * fVar77;
              fStack_11c = fVar63 * fVar80 + fVar78 * fVar80 + fVar40 * fVar80 +
                           fVar46 * fRam000000014685600c;
              local_118 = fVar75 * fVar58 + fVar74 * fVar51 + fVar57 * fVar85 +
                          fRam000000014685600c * fVar65;
              fStack_114 = fVar75 * fVar53 + fVar74 * fVar81 + fVar57 * fVar62 +
                           fRam000000014685600c * fVar68;
              fStack_110 = fVar75 * fVar83 + fVar74 * fVar66 + fVar57 * fVar61 +
                           fRam000000014685600c * fVar77;
              fStack_10c = fVar75 * fVar80 + fVar74 * fVar80 + fVar57 * fVar80 +
                           fRam000000014685600c * fRam000000014685600c;
              FMatrix::RemoveScaling(&local_148);
              fVar40 = (float)local_238;
              fVar46 = local_238._4_4_;
              fVar47 = (float)uStack_230;
              fVar49 = uStack_230._4_4_;
              fVar51 = (float)(-(uint)(fVar69 <= (float)local_238) & (_DAT_1468560c0 ^ (uint)fVar60)
                              ^ _DAT_1468560c0);
              fVar53 = (float)(-(uint)(fVar39 <= local_238._4_4_) &
                               (uRam00000001468560c4 ^ (uint)fVar64) ^ uRam00000001468560c4);
              fVar54 = (float)(-(uint)(fVar48 <= (float)uStack_230) &
                               (uRam00000001468560c8 ^ (uint)fVar67) ^ uRam00000001468560c8);
              local_148 = local_148 * fVar51;
              fStack_144 = fStack_144 * fVar51;
              fStack_140 = fStack_140 * fVar51;
              fVar51 = (float)auStack_134 * fVar53;
              fVar50 = (float)local_138 * fVar53;
              uStack_130._0_4_ = (float)uStack_130 * fVar53;
              auStack_134 = (undefined1  [4])fVar51;
              fStack_120 = fStack_120 * fVar54;
              local_128 = local_128 * fVar54;
              fStack_124 = fStack_124 * fVar54;
              local_138 = (undefined1  [4])fVar50;
              uVar19 = FQuat::FQuat(&local_218,&local_148);
              local_2d0 = 0x322bcc77;
              auVar42._0_4_ = local_218 * local_218 + fStack_210 * fStack_210;
              auVar42._4_4_ = fStack_214 * fStack_214 + fStack_20c * fStack_20c;
              auVar42._8_4_ = fStack_210 * fStack_210 + local_218 * local_218;
              auVar42._12_4_ = fStack_20c * fStack_20c + fStack_214 * fStack_214;
              fVar60 = auVar42._4_4_ + auVar42._0_4_;
              fVar64 = auVar42._8_4_ + auVar42._4_4_;
              fVar67 = auVar42._12_4_ + auVar42._8_4_;
              fVar69 = auVar42._0_4_ + auVar42._12_4_;
              auVar5._4_4_ = fVar64;
              auVar5._0_4_ = fVar60;
              auVar5._8_4_ = fVar67;
              auVar5._12_4_ = fVar69;
              auVar41 = rsqrtps(auVar42,auVar5);
              fVar51 = auVar41._0_4_;
              fVar50 = auVar41._4_4_;
              fVar53 = auVar41._8_4_;
              fVar54 = auVar41._12_4_;
              fVar51 = ((float)local_288 - fVar51 * fVar51 * fVar60 * (float)local_288) * fVar51 +
                       fVar51;
              fVar50 = (local_288._4_4_ - fVar50 * fVar50 * fVar64 * local_288._4_4_) * fVar50 +
                       fVar50;
              fVar53 = ((float)uStack_280 - fVar53 * fVar53 * fVar67 * (float)uStack_280) * fVar53 +
                       fVar53;
              fVar54 = (uStack_280._4_4_ - fVar54 * fVar54 * fVar69 * uStack_280._4_4_) * fVar54 +
                       fVar54;
              fVar39 = 0.0;
              fVar60 = (float)(((uint)((((float)local_288 -
                                        fVar51 * fVar51 * fVar60 * (float)local_288) * fVar51 +
                                       fVar51) * local_218) ^ _DAT_1468560a0) &
                               -(uint)(1e-08 <= fVar60) ^ _DAT_1468560a0);
              fVar64 = (float)(((uint)(((local_288._4_4_ -
                                        fVar50 * fVar50 * fVar64 * local_288._4_4_) * fVar50 +
                                       fVar50) * fStack_214) ^ uRam00000001468560a4) &
                               -(uint)(1e-08 <= fVar64) ^ uRam00000001468560a4);
              fVar67 = (float)(((uint)((((float)uStack_280 -
                                        fVar53 * fVar53 * fVar67 * (float)uStack_280) * fVar53 +
                                       fVar53) * fStack_210) ^ uRam00000001468560a8) &
                               -(uint)(1e-08 <= fVar67) ^ uRam00000001468560a8);
              fVar69 = (float)(((uint)(((uStack_280._4_4_ -
                                        fVar54 * fVar54 * fVar69 * uStack_280._4_4_) * fVar54 +
                                       fVar54) * fStack_20c) ^ uRam00000001468560ac) &
                               -(uint)(1e-08 <= fVar69) ^ uRam00000001468560ac);
              local_268 = CONCAT44(fRam00000001468560d4,_DAT_1468560d0);
              fVar51 = local_1b8;
              fVar50 = fStack_1b4;
              fVar53 = fStack_1b0;
              fVar54 = fStack_1ac;
              fVar65 = local_118;
              fVar68 = fStack_114;
              fVar77 = fStack_110;
              local_218 = fVar60;
              fStack_214 = fVar64;
              fStack_210 = fVar67;
              fStack_20c = fVar69;
            }
            auVar14._8_8_ = uStack_170;
            auVar14._0_8_ = local_178;
            fVar48 = (float)local_178;
            fVar70 = (float)((ulonglong)local_178 >> 0x20);
            fVar71 = (float)uStack_170;
            fVar72 = (float)((ulonglong)uStack_170 >> 0x20);
            local_108 = 0.0;
            fStack_104 = 0.0;
            fStack_100 = 0.0;
            fStack_fc = fRam000000014685600c;
            local_e8 = (float)((uint)_DAT_146856000 & _DAT_146856010);
            fStack_e4 = (float)((uint)fRam0000000146856004 & uRam0000000146856014);
            fStack_e0 = (float)((uint)fRam0000000146856008 & uRam0000000146856018);
            fStack_dc = (float)((uint)fRam000000014685600c & uRam000000014685601c);
            auVar31._4_4_ = fVar46;
            auVar31._0_4_ = fVar40;
            auVar31._8_4_ = fVar47;
            auVar31._12_4_ = fVar49;
            auVar41 = minps(auVar31,auVar14);
            local_f8 = ZEXT816(0);
            auVar32._4_4_ = -(uint)(auVar41._4_4_ < fRam00000001468560d4);
            auVar32._0_4_ = -(uint)(auVar41._0_4_ < _DAT_1468560d0);
            auVar32._8_4_ = -(uint)(auVar41._8_4_ < fRam00000001468560d8);
            auVar32._12_4_ = -(uint)(auVar41._12_4_ < fRam00000001468560dc);
            iVar18 = movmskps(uVar19,auVar32);
            fStack_260 = fRam00000001468560d8;
            fStack_25c = fRam00000001468560dc;
            if (iVar18 == 0) {
              fVar61 = fVar48 * fVar65;
              fVar80 = fVar70 * fVar68;
              fVar59 = fVar71 * fVar77;
              fVar39 = fVar72 * fVar39;
              local_108 = fVar51 * fVar69 * _DAT_146856090 + fVar60 * fVar54 +
                          fVar50 * fVar67 * _DAT_146856080 + fVar53 * fVar64 * _DAT_146856070;
              fStack_104 = fVar51 * fVar67 * fRam0000000146856094 + fVar64 * fVar54 +
                           fVar50 * fVar69 * fRam0000000146856084 +
                           fVar53 * fVar60 * fRam0000000146856074;
              fStack_100 = fVar51 * fVar64 * fRam0000000146856098 + fVar67 * fVar54 +
                           fVar50 * fVar60 * fRam0000000146856088 +
                           fVar53 * fVar69 * fRam0000000146856078;
              fStack_fc = fVar51 * fVar60 * fRam000000014685609c + fVar69 * fVar54 +
                          fVar50 * fVar64 * fRam000000014685608c +
                          fVar53 * fVar67 * fRam000000014685607c;
              fVar73 = fVar59 * fVar50 - fVar80 * fVar53;
              fVar74 = fVar61 * fVar53 - fVar59 * fVar51;
              fVar75 = fVar80 * fVar51 - fVar61 * fVar50;
              fVar57 = fVar39 * fVar54 - fVar39 * fVar54;
              fVar73 = fVar73 + fVar73;
              fVar74 = fVar74 + fVar74;
              fVar75 = fVar75 + fVar75;
              fVar57 = fVar57 + fVar57;
              local_f8._0_4_ =
                   (fVar75 * fVar50 - fVar74 * fVar53) + fVar73 * fVar54 + fVar61 + (float)local_1f8
              ;
              local_f8._4_4_ =
                   (fVar73 * fVar53 - fVar75 * fVar51) + fVar74 * fVar54 + fVar80 + local_1f8._4_4_;
              local_f8._8_4_ =
                   (fVar74 * fVar51 - fVar73 * fVar50) + fVar75 * fVar54 + fVar59 +
                   (float)uStack_1f0;
              local_f8._12_4_ =
                   (fVar57 * fVar54 - fVar57 * fVar54) + fVar57 * fVar54 + fVar39 + uStack_1f0._4_4_
              ;
            }
            else {
              fVar73 = fVar50 + fVar50;
              fVar74 = fVar53 + fVar53;
              fVar75 = fVar51 * (fVar51 + fVar51);
              fVar39 = fVar54 * (fVar51 + fVar51);
              fVar62 = (fVar54 * fVar74 + fVar51 * fVar73) * fVar48;
              fVar66 = (fVar39 + fVar50 * fVar74) * fVar70;
              fVar76 = (fVar54 * fVar73 + fVar51 * fVar74) * fVar71;
              fVar57 = fVar70 * (fVar51 * fVar73 - fVar54 * fVar74);
              fVar80 = fVar71 * (fVar50 * fVar74 - fVar39);
              fVar63 = fVar48 * (fVar51 * fVar74 - fVar54 * fVar73);
              fVar54 = (float)((uint)((_DAT_146856000 - (fVar53 * fVar74 + fVar50 * fVar73)) *
                                     fVar48) & _DAT_146856010);
              fVar53 = (float)((uint)((fRam0000000146856004 - (fVar53 * fVar74 + fVar75)) * fVar70)
                              & uRam0000000146856014);
              fVar73 = (float)((uint)((fRam0000000146856008 - (fVar50 * fVar73 + fVar75)) * fVar71)
                              & uRam0000000146856018);
              fVar74 = (float)((uint)((fRam000000014685600c - (fVar75 + fVar75)) * fVar72) &
                              uRam000000014685601c);
              fVar50 = fVar64 + fVar64;
              fVar39 = fVar67 + fVar67;
              fVar75 = fVar60 * (fVar60 + fVar60);
              fVar51 = fVar69 * (fVar60 + fVar60);
              fVar52 = (fVar69 * fVar39 + fVar60 * fVar50) * fVar40;
              fVar55 = (fVar51 + fVar64 * fVar39) * fVar46;
              fVar58 = (fVar69 * fVar50 + fVar60 * fVar39) * fVar47;
              fVar61 = fVar46 * (fVar60 * fVar50 - fVar69 * fVar39);
              fVar59 = fVar47 * (fVar64 * fVar39 - fVar51);
              fVar56 = fVar40 * (fVar60 * fVar39 - fVar69 * fVar50);
              fVar51 = (float)((uint)((_DAT_146856000 - (fVar67 * fVar39 + fVar64 * fVar50)) *
                                     fVar40) & _DAT_146856010);
              fVar39 = (float)((uint)((fRam0000000146856004 - (fVar67 * fVar39 + fVar75)) * fVar46)
                              & uRam0000000146856014);
              fVar50 = (float)((uint)((fRam0000000146856008 - (fVar64 * fVar50 + fVar75)) * fVar47)
                              & uRam0000000146856018);
              fVar75 = (float)((uint)((fRam000000014685600c - (fVar75 + fVar75)) * fVar49) &
                              uRam000000014685601c);
              local_148 = fVar52 * fVar57 + fVar51 * fVar54 + fVar56 * fVar76 +
                          fVar75 * (float)local_1f8;
              fStack_144 = fVar52 * fVar53 + fVar51 * fVar62 + fVar56 * fVar80 +
                           fVar75 * local_1f8._4_4_;
              fStack_140 = fVar52 * fVar66 + fVar51 * fVar63 + fVar56 * fVar73 +
                           fVar75 * (float)uStack_1f0;
              fStack_13c = fVar52 * fVar74 + fVar51 * fVar74 + fVar56 * fVar74 +
                           fVar75 * fRam000000014685600c;
              auStack_134 = (undefined1  [4])
                            (fVar39 * fVar53 + fVar61 * fVar62 + fVar55 * fVar80 +
                            fVar75 * local_1f8._4_4_);
              local_138 = (undefined1  [4])
                          (fVar39 * fVar57 + fVar61 * fVar54 + fVar55 * fVar76 +
                          fVar75 * (float)local_1f8);
              uStack_130._0_4_ =
                   fVar39 * fVar66 + fVar61 * fVar63 + fVar55 * fVar73 + fVar75 * (float)uStack_1f0;
              uStack_130._4_4_ =
                   fVar39 * fVar74 + fVar61 * fVar74 + fVar55 * fVar74 +
                   fVar75 * fRam000000014685600c;
              local_128 = fVar59 * fVar57 + fVar58 * fVar54 + fVar50 * fVar76 +
                          fVar75 * (float)local_1f8;
              fStack_124 = fVar59 * fVar53 + fVar58 * fVar62 + fVar50 * fVar80 +
                           fVar75 * local_1f8._4_4_;
              fStack_120 = fVar59 * fVar66 + fVar58 * fVar63 + fVar50 * fVar73 +
                           fVar75 * (float)uStack_1f0;
              fStack_11c = fVar59 * fVar74 + fVar58 * fVar74 + fVar50 * fVar74 +
                           fVar75 * fRam000000014685600c;
              local_118 = fVar68 * fVar57 + fVar65 * fVar54 + fVar77 * fVar76 +
                          fRam000000014685600c * (float)local_1f8;
              fStack_114 = fVar68 * fVar53 + fVar65 * fVar62 + fVar77 * fVar80 +
                           fRam000000014685600c * local_1f8._4_4_;
              fStack_110 = fVar68 * fVar66 + fVar65 * fVar63 + fVar77 * fVar73 +
                           fRam000000014685600c * (float)uStack_1f0;
              fStack_10c = fVar68 * fVar74 + fVar65 * fVar74 + fVar77 * fVar74 +
                           fRam000000014685600c * fRam000000014685600c;
              FMatrix::RemoveScaling(&local_148);
              fVar51 = (float)(-(uint)((float)local_268 <= fVar48 * fVar40) &
                               (_DAT_1468560c0 ^ (uint)_DAT_146856000) ^ _DAT_1468560c0);
              fVar53 = (float)(-(uint)(local_268._4_4_ <= fVar70 * fVar46) &
                               (uRam00000001468560c4 ^ (uint)fRam0000000146856004) ^
                              uRam00000001468560c4);
              fVar54 = (float)(-(uint)(fStack_260 <= fVar71 * fVar47) &
                               (uRam00000001468560c8 ^ (uint)fRam0000000146856008) ^
                              uRam00000001468560c8);
              local_148 = local_148 * fVar51;
              fStack_144 = fStack_144 * fVar51;
              fStack_140 = fStack_140 * fVar51;
              fVar51 = (float)auStack_134 * fVar53;
              fVar50 = (float)local_138 * fVar53;
              uStack_130._0_4_ = (float)uStack_130 * fVar53;
              auStack_134 = (undefined1  [4])fVar51;
              fStack_120 = fStack_120 * fVar54;
              local_128 = local_128 * fVar54;
              fStack_124 = fStack_124 * fVar54;
              local_138 = (undefined1  [4])fVar50;
              FQuat::FQuat(&local_208,&local_148);
              local_2d0 = 0x322bcc77;
              auVar43._0_4_ = local_208 * local_208 + fStack_200 * fStack_200;
              auVar43._4_4_ = fStack_204 * fStack_204 + fStack_1fc * fStack_1fc;
              auVar43._8_4_ = fStack_200 * fStack_200 + local_208 * local_208;
              auVar43._12_4_ = fStack_1fc * fStack_1fc + fStack_204 * fStack_204;
              fVar39 = auVar43._4_4_ + auVar43._0_4_;
              fVar73 = auVar43._8_4_ + auVar43._4_4_;
              fVar74 = auVar43._12_4_ + auVar43._8_4_;
              fVar75 = auVar43._0_4_ + auVar43._12_4_;
              auVar6._4_4_ = fVar73;
              auVar6._0_4_ = fVar39;
              auVar6._8_4_ = fVar74;
              auVar6._12_4_ = fVar75;
              auVar41 = rsqrtps(auVar43,auVar6);
              fVar51 = auVar41._0_4_;
              fVar50 = auVar41._4_4_;
              fVar53 = auVar41._8_4_;
              fVar54 = auVar41._12_4_;
              fVar51 = ((float)local_288 - fVar51 * fVar51 * fVar39 * (float)local_288) * fVar51 +
                       fVar51;
              fVar50 = (local_288._4_4_ - fVar50 * fVar50 * fVar73 * local_288._4_4_) * fVar50 +
                       fVar50;
              fVar53 = ((float)uStack_280 - fVar53 * fVar53 * fVar74 * (float)uStack_280) * fVar53 +
                       fVar53;
              fVar54 = (uStack_280._4_4_ - fVar54 * fVar54 * fVar75 * uStack_280._4_4_) * fVar54 +
                       fVar54;
              local_f8._4_4_ = fStack_114;
              local_f8._0_4_ = local_118;
              local_f8._8_4_ = fStack_110;
              local_208 = (float)(((uint)((((float)local_288 -
                                           fVar51 * fVar51 * fVar39 * (float)local_288) * fVar51 +
                                          fVar51) * local_208) ^ _DAT_1468560a0) &
                                  -(uint)(1e-08 <= fVar39) ^ _DAT_1468560a0);
              fStack_204 = (float)(((uint)(((local_288._4_4_ -
                                            fVar50 * fVar50 * fVar73 * local_288._4_4_) * fVar50 +
                                           fVar50) * fStack_204) ^ uRam00000001468560a4) &
                                   -(uint)(1e-08 <= fVar73) ^ uRam00000001468560a4);
              fStack_200 = (float)(((uint)((((float)uStack_280 -
                                            fVar53 * fVar53 * fVar74 * (float)uStack_280) * fVar53 +
                                           fVar53) * fStack_200) ^ uRam00000001468560a8) &
                                   -(uint)(1e-08 <= fVar74) ^ uRam00000001468560a8);
              fStack_1fc = (float)(((uint)(((uStack_280._4_4_ -
                                            fVar54 * fVar54 * fVar75 * uStack_280._4_4_) * fVar54 +
                                           fVar54) * fStack_1fc) ^ uRam00000001468560ac) &
                                   -(uint)(1e-08 <= fVar75) ^ uRam00000001468560ac);
              local_f8._12_4_ = 0.0;
              local_108 = local_208;
              fStack_104 = fStack_204;
              fStack_100 = fStack_200;
              fStack_fc = fStack_1fc;
            }
            fStack_dc = fVar72 * fVar49;
            fStack_e0 = fVar71 * fVar47;
            fStack_e4 = fVar70 * fVar46;
            local_e8 = fVar48 * fVar40;
            U2PTransform(local_1a8,&local_108);
            FUN_14062e090(local_1a8);
            cVar16 = IsRigidBodyKinematicAndInSimulationScene_AssumesLocked(plVar21);
            if (((cVar16 == '\0') || (*(char *)param_1[3] == '\x01')) ||
               (lVar22 = (**(code **)(*plVar21 + 0x30))(plVar21), lVar22 == 0)) {
              (**(code **)(*plVar21 + 0xa8))(plVar21,local_1a8,0);
            }
            else {
              (**(code **)(*plVar21 + 0x1b0))(plVar21,local_1a8);
            }
            iVar18 = (**(code **)(*plVar21 + 200))(plVar21);
            if (1 < iVar18) {
              uVar19 = (**(code **)(*plVar21 + 200))(plVar21);
              TArray<unsigned___int64,FDefaultAllocator>::SetNum(&local_250,uVar19,0);
              lVar24 = local_250;
              lVar22 = *param_1;
              if (1e-08 < ABS(*(float *)(lVar22 + 0x230))) {
                fVar51 = 1.0 / *(float *)(lVar22 + 0x230);
              }
              else {
                fVar51 = 0.0;
              }
              if (1e-08 < ABS(*(float *)(lVar22 + 0x234))) {
                fVar50 = 1.0 / *(float *)(lVar22 + 0x234);
              }
              else {
                fVar50 = 0.0;
              }
              if (1e-08 < ABS(*(float *)(lVar22 + 0x238))) {
                fVar53 = 1.0 / *(float *)(lVar22 + 0x238);
              }
              else {
                fVar53 = 0.0;
              }
              auVar33._4_4_ =
                   -(uint)(fRam0000000146856054 < (float)((uint)fVar50 & uRam0000000146856064));
              auVar33._0_4_ = -(uint)(_DAT_146856050 < (float)((uint)fVar51 & _DAT_146856060));
              auVar33._8_4_ =
                   -(uint)(fRam0000000146856058 < (float)((uint)fVar53 & uRam0000000146856068));
              auVar33._12_4_ = -(uint)(fRam000000014685605c < 0.0);
              iVar18 = movmskps((int)lVar22,auVar33);
              if (iVar18 == 0) {
                local_288 = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
                uStack_280 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
                local_1d8 = _DAT_1468b5b90;
                fStack_1d4 = fRam00000001468b5b94;
                fStack_1d0 = fRam00000001468b5b98;
                fStack_1cc = fRam00000001468b5b9c;
                fVar60 = _DAT_1468b5b70;
                fVar64 = fRam00000001468b5b74;
                fVar67 = fRam00000001468b5b78;
                fVar69 = fRam00000001468b5b7c;
              }
              else {
                fVar60 = fVar60 * _DAT_146856040;
                fVar64 = fVar64 * fRam0000000146856044;
                fVar67 = fVar67 * fRam0000000146856048;
                fVar69 = fVar69 * fRam000000014685604c;
                auVar4._4_4_ = fVar50;
                auVar4._0_4_ = fVar51;
                auVar4._8_4_ = fVar53;
                auVar4._12_4_ = 0;
                auVar41 = rcpps(ZEXT816(0),auVar4);
                fVar54 = auVar41._0_4_;
                fVar39 = auVar41._4_4_;
                fVar48 = auVar41._8_4_;
                fVar40 = auVar41._12_4_;
                fVar54 = (fVar54 + fVar54) - fVar54 * fVar54 * fVar51;
                fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar50;
                fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar53;
                fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * 0.0;
                fVar54 = (fVar54 + fVar54) - fVar54 * fVar54 * fVar51;
                fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar50;
                fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar53;
                fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * 0.0;
                local_1d8 = (float)(((uint)fVar54 &
                                     -(uint)((float)((uint)fVar51 & _DAT_146856060) <=
                                            _DAT_146856050) ^ (uint)fVar54) & _DAT_146856010);
                fStack_1d4 = (float)(((uint)fVar39 &
                                      -(uint)((float)((uint)fVar50 & uRam0000000146856064) <=
                                             fRam0000000146856054) ^ (uint)fVar39) &
                                    uRam0000000146856014);
                fStack_1d0 = (float)(((uint)fVar48 &
                                      -(uint)((float)((uint)fVar53 & uRam0000000146856068) <=
                                             fRam0000000146856058) ^ (uint)fVar48) &
                                    uRam0000000146856018);
                fStack_1cc = (float)(((uint)fVar40 & -(uint)(0.0 <= fRam000000014685605c) ^
                                     (uint)fVar40) & uRam000000014685601c);
                fVar65 = local_1d8 * fVar65;
                fVar68 = fStack_1d4 * fVar68;
                fVar77 = fStack_1d0 * fVar77;
                fVar39 = fStack_1cc * 0.0;
                fVar51 = fVar77 * fVar64 - fVar68 * fVar67;
                fVar50 = fVar65 * fVar67 - fVar77 * fVar60;
                fVar53 = fVar68 * fVar60 - fVar65 * fVar64;
                fVar54 = fVar39 * fVar69 - fVar39 * fVar69;
                fVar51 = fVar51 + fVar51;
                fVar50 = fVar50 + fVar50;
                fVar53 = fVar53 + fVar53;
                fVar54 = fVar54 + fVar54;
                local_288 = CONCAT44((uint)(0.0 - ((fVar51 * fVar67 - fVar53 * fVar60) +
                                                  fVar69 * fVar50 + fVar68)) & uRam0000000146856014,
                                     (uint)(0.0 - ((fVar53 * fVar64 - fVar50 * fVar67) +
                                                  fVar69 * fVar51 + fVar65)) & _DAT_146856010);
                uStack_280 = CONCAT44((uint)(0.0 - ((fVar54 * fVar69 - fVar54 * fVar69) +
                                                   fVar69 * fVar54 + fVar39)) & uRam000000014685601c
                                      ,(uint)(0.0 - ((fVar50 * fVar60 - fVar51 * fVar64) +
                                                    fVar69 * fVar53 + fVar77)) &
                                       uRam0000000146856018);
              }
              lVar26 = 0;
              iVar18 = (**(code **)(*plVar21 + 0xd0))(plVar21,local_250,local_248 & 0xffffffff,0);
              lVar22 = (longlong)iVar18;
              local_268 = lVar22;
              cVar17 = local_2d8;
              if (0 < iVar18) {
                do {
                  plVar21 = *(longlong **)(lVar24 + lVar26 * 8);
                  piVar3 = (int *)plVar21[2];
                  if ((piVar3 == (int *)0x0) || (*piVar3 != 7)) {
                    plVar25 = (longlong *)0x0;
                  }
                  else {
                    plVar25 = *(longlong **)(piVar3 + 2);
                  }
                  if ((int)plVar25[2] != iVar28) {
                    uVar23 = (**(code **)(*plVar25 + 8))(plVar25,local_188);
                    cVar17 = FUN_14058c1e0(uVar23,*param_1);
                    fVar48 = fRam0000000146856008;
                    fVar39 = fRam0000000146856004;
                    fVar54 = _DAT_146856000;
                    fVar53 = DAT_1464aa790;
                    fVar50 = DAT_1464aa788._4_4_;
                    fVar51 = (float)DAT_1464aa788;
                    lVar22 = local_268;
                    if (cVar17 != '\0') {
                      lVar22 = (longlong)(int)plVar25[2] + 1;
                      lVar20 = *(longlong *)(lVar27 + 0x148);
                      pfVar2 = (float *)(lVar20 + 0x10 + lVar22 * 0x30);
                      pfVar1 = (float *)(lVar20 + lVar22 * 0x30);
                      auVar34._4_4_ =
                           -(uint)(fRam0000000146856054 <
                                  (float)((uint)DAT_1464aa788._4_4_ & uRam0000000146856064));
                      auVar34._0_4_ =
                           -(uint)(_DAT_146856050 <
                                  (float)((uint)(float)DAT_1464aa788 & _DAT_146856060));
                      auVar34._8_4_ =
                           -(uint)(fRam0000000146856058 <
                                  (float)((uint)DAT_1464aa790 & uRam0000000146856068));
                      auVar34._12_4_ = -(uint)(fRam000000014685605c < 0.0);
                      iVar18 = movmskps((int)lVar20,auVar34);
                      fVar40 = _DAT_1468b5b70;
                      fVar46 = fRam00000001468b5b74;
                      fVar47 = fRam00000001468b5b78;
                      fVar49 = fRam00000001468b5b7c;
                      fVar70 = _DAT_1468b5b90;
                      fVar71 = fRam00000001468b5b94;
                      fVar72 = fRam00000001468b5b98;
                      fVar73 = fRam00000001468b5b9c;
                      fVar74 = _DAT_1468b5b80;
                      fVar75 = fRam00000001468b5b84;
                      fVar57 = fRam00000001468b5b88;
                      fVar61 = fRam00000001468b5b8c;
                      if (iVar18 != 0) {
                        fVar40 = *pfVar1 * _DAT_146856040;
                        fVar46 = pfVar1[1] * fRam0000000146856044;
                        fVar47 = pfVar1[2] * fRam0000000146856048;
                        fVar49 = pfVar1[3] * fRam000000014685604c;
                        auVar11._4_4_ = DAT_1464aa788._4_4_;
                        auVar11._0_4_ = (float)DAT_1464aa788;
                        auVar11._8_4_ = DAT_1464aa790;
                        auVar11._12_4_ = 0;
                        auVar41 = rcpps(ZEXT816(0),auVar11);
                        fVar70 = auVar41._0_4_;
                        fVar71 = auVar41._4_4_;
                        fVar72 = auVar41._8_4_;
                        fVar73 = auVar41._12_4_;
                        fVar70 = (fVar70 + fVar70) - fVar70 * fVar70 * (float)DAT_1464aa788;
                        fVar71 = (fVar71 + fVar71) - fVar71 * fVar71 * DAT_1464aa788._4_4_;
                        fVar72 = (fVar72 + fVar72) - fVar72 * fVar72 * DAT_1464aa790;
                        fVar73 = (fVar73 + fVar73) - fVar73 * fVar73 * 0.0;
                        fVar70 = (fVar70 + fVar70) - fVar70 * fVar70 * (float)DAT_1464aa788;
                        fVar71 = (fVar71 + fVar71) - fVar71 * fVar71 * DAT_1464aa788._4_4_;
                        fVar72 = (fVar72 + fVar72) - fVar72 * fVar72 * DAT_1464aa790;
                        fVar73 = (fVar73 + fVar73) - fVar73 * fVar73 * 0.0;
                        fVar70 = (float)((-(uint)((float)((uint)(float)DAT_1464aa788 &
                                                         _DAT_146856060) <= _DAT_146856050) &
                                          (uint)fVar70 ^ (uint)fVar70) & _DAT_146856010);
                        fVar71 = (float)((-(uint)((float)((uint)DAT_1464aa788._4_4_ &
                                                         uRam0000000146856064) <=
                                                 fRam0000000146856054) & (uint)fVar71 ^ (uint)fVar71
                                         ) & uRam0000000146856014);
                        fVar72 = (float)((-(uint)((float)((uint)DAT_1464aa790 & uRam0000000146856068
                                                         ) <= fRam0000000146856058) & (uint)fVar72 ^
                                         (uint)fVar72) & uRam0000000146856018);
                        fVar73 = (float)((-(uint)(0.0 <= fRam000000014685605c) & (uint)fVar73 ^
                                         (uint)fVar73) & uRam000000014685601c);
                        fVar74 = *pfVar2 * fVar70;
                        fVar75 = pfVar2[1] * fVar71;
                        fVar77 = pfVar2[2] * fVar72;
                        fVar80 = fVar73 * 0.0;
                        fVar57 = fVar77 * fVar46 - fVar75 * fVar47;
                        fVar61 = fVar74 * fVar47 - fVar77 * fVar40;
                        fVar65 = fVar75 * fVar40 - fVar74 * fVar46;
                        fVar68 = fVar80 * fVar49 - fVar80 * fVar49;
                        fVar57 = fVar57 + fVar57;
                        fVar61 = fVar61 + fVar61;
                        fVar65 = fVar65 + fVar65;
                        fVar68 = fVar68 + fVar68;
                        fVar74 = (float)((uint)(0.0 - ((fVar65 * fVar46 - fVar61 * fVar47) +
                                                      fVar49 * fVar57 + fVar74)) & _DAT_146856010);
                        fVar75 = (float)((uint)(0.0 - ((fVar57 * fVar47 - fVar65 * fVar40) +
                                                      fVar49 * fVar61 + fVar75)) &
                                        uRam0000000146856014);
                        fVar57 = (float)((uint)(0.0 - ((fVar61 * fVar40 - fVar57 * fVar46) +
                                                      fVar49 * fVar65 + fVar77)) &
                                        uRam0000000146856018);
                        fVar61 = (float)((uint)(0.0 - ((fVar68 * fVar49 - fVar68 * fVar49) +
                                                      fVar49 * fVar68 + fVar80)) &
                                        uRam000000014685601c);
                      }
                      local_228 = _DAT_1468560d0;
                      fStack_224 = fRam00000001468560d4;
                      fStack_220 = fRam00000001468560d8;
                      fStack_21c = fRam00000001468560dc;
                      lVar20 = *(longlong *)param_1[2];
                      pfVar1 = (float *)(lVar20 + 0x10 + lVar22 * 0x30);
                      fVar65 = *pfVar1;
                      fVar68 = pfVar1[1];
                      fVar77 = pfVar1[2];
                      pfVar1 = (float *)(lVar20 + lVar22 * 0x30);
                      fVar80 = *pfVar1;
                      fVar59 = pfVar1[1];
                      fVar63 = pfVar1[2];
                      fVar56 = pfVar1[3];
                      auVar35._4_4_ = fVar71;
                      auVar35._0_4_ = fVar70;
                      auVar35._8_4_ = fVar72;
                      auVar35._12_4_ = fVar73;
                      auVar12._4_4_ = DAT_1464aa788._4_4_;
                      auVar12._0_4_ = (float)DAT_1464aa788;
                      auVar12._8_4_ = DAT_1464aa790;
                      auVar12._12_4_ = 0;
                      auVar41 = minps(auVar35,auVar12);
                      auVar36._4_4_ = -(uint)(auVar41._4_4_ < fRam00000001468560d4);
                      auVar36._0_4_ = -(uint)(auVar41._0_4_ < _DAT_1468560d0);
                      auVar36._8_4_ = -(uint)(auVar41._8_4_ < fRam00000001468560d8);
                      auVar36._12_4_ = -(uint)(auVar41._12_4_ < fRam00000001468560dc);
                      iVar18 = movmskps((int)(longlong *)param_1[2],auVar36);
                      local_238 = _DAT_1468560b0;
                      uStack_230 = uRam00000001468560b8;
                      if (iVar18 == 0) {
                        fVar74 = (float)DAT_1464aa788 * fVar74;
                        fVar75 = DAT_1464aa788._4_4_ * fVar75;
                        fVar57 = DAT_1464aa790 * fVar57;
                        fVar61 = fVar61 * 0.0;
                        fVar52 = fVar80 * fVar49 * _DAT_146856090 + fVar40 * fVar56 +
                                 fVar59 * fVar47 * _DAT_146856080 + fVar63 * fVar46 * _DAT_146856070
                        ;
                        fVar55 = fVar80 * fVar47 * fRam0000000146856094 + fVar46 * fVar56 +
                                 fVar59 * fVar49 * fRam0000000146856084 +
                                 fVar63 * fVar40 * fRam0000000146856074;
                        fVar58 = fVar80 * fVar46 * fRam0000000146856098 + fVar47 * fVar56 +
                                 fVar59 * fVar40 * fRam0000000146856088 +
                                 fVar63 * fVar49 * fRam0000000146856078;
                        fVar46 = fVar80 * fVar40 * fRam000000014685609c + fVar49 * fVar56 +
                                 fVar59 * fVar46 * fRam000000014685608c +
                                 fVar63 * fVar47 * fRam000000014685607c;
                        fVar54 = fVar57 * fVar59 - fVar75 * fVar63;
                        fVar39 = fVar74 * fVar63 - fVar57 * fVar80;
                        fVar48 = fVar75 * fVar80 - fVar74 * fVar59;
                        fVar40 = fVar61 * fVar56 - fVar61 * fVar56;
                        fVar54 = fVar54 + fVar54;
                        fVar39 = fVar39 + fVar39;
                        fVar48 = fVar48 + fVar48;
                        fVar40 = fVar40 + fVar40;
                        fVar65 = (fVar48 * fVar59 - fVar39 * fVar63) + fVar54 * fVar56 + fVar74 +
                                 fVar65;
                        fVar68 = (fVar54 * fVar63 - fVar48 * fVar80) + fVar39 * fVar56 + fVar75 +
                                 fVar68;
                        fVar77 = (fVar39 * fVar80 - fVar54 * fVar59) + fVar48 * fVar56 + fVar57 +
                                 fVar77;
                        fVar54 = (fVar40 * fVar56 - fVar40 * fVar56) + fVar40 * fVar56 + fVar61 +
                                 0.0;
                        uVar19 = 0;
                      }
                      else {
                        fVar52 = fVar59 + fVar59;
                        fVar55 = fVar63 + fVar63;
                        fVar58 = fVar80 * (fVar80 + fVar80);
                        fVar61 = fVar56 * (fVar80 + fVar80);
                        fVar87 = (float)DAT_1464aa788 * fVar70;
                        fVar88 = DAT_1464aa788._4_4_ * fVar71;
                        fVar89 = DAT_1464aa790 * fVar72;
                        fVar82 = (fVar56 * fVar55 + fVar80 * fVar52) * (float)DAT_1464aa788;
                        fVar84 = (fVar61 + fVar59 * fVar55) * DAT_1464aa788._4_4_;
                        fVar86 = (fVar56 * fVar52 + fVar80 * fVar55) * DAT_1464aa790;
                        fVar62 = DAT_1464aa788._4_4_ * (fVar80 * fVar52 - fVar56 * fVar55);
                        fVar66 = DAT_1464aa790 * (fVar59 * fVar55 - fVar61);
                        fVar78 = (float)DAT_1464aa788 * (fVar80 * fVar55 - fVar56 * fVar52);
                        fVar61 = (float)((uint)((_DAT_146856000 -
                                                (fVar63 * fVar55 + fVar59 * fVar52)) *
                                               (float)DAT_1464aa788) & _DAT_146856010);
                        fVar80 = (float)((uint)((fRam0000000146856004 - (fVar63 * fVar55 + fVar58))
                                               * DAT_1464aa788._4_4_) & uRam0000000146856014);
                        fVar63 = (float)((uint)((fRam0000000146856008 - (fVar59 * fVar52 + fVar58))
                                               * DAT_1464aa790) & uRam0000000146856018);
                        fVar52 = (float)((uint)((fRam000000014685600c - (fVar58 + fVar58)) * 0.0) &
                                        uRam000000014685601c);
                        fVar59 = fVar46 + fVar46;
                        fVar56 = fVar47 + fVar47;
                        fVar55 = fVar40 * (fVar40 + fVar40);
                        fVar76 = fVar49 * (fVar40 + fVar40);
                        fVar83 = (fVar49 * fVar56 + fVar40 * fVar59) * fVar70;
                        fVar85 = (fVar76 + fVar46 * fVar56) * fVar71;
                        fVar79 = (fVar49 * fVar59 + fVar40 * fVar56) * fVar72;
                        fVar58 = fVar71 * (fVar40 * fVar59 - fVar49 * fVar56);
                        fVar76 = fVar72 * (fVar46 * fVar56 - fVar76);
                        fVar81 = fVar70 * (fVar40 * fVar56 - fVar49 * fVar59);
                        fVar40 = (float)((uint)((_DAT_146856000 -
                                                (fVar47 * fVar56 + fVar46 * fVar59)) * fVar70) &
                                        _DAT_146856010);
                        fVar47 = (float)((uint)((fRam0000000146856004 - (fVar47 * fVar56 + fVar55))
                                               * fVar71) & uRam0000000146856014);
                        fVar46 = (float)((uint)((fRam0000000146856008 - (fVar46 * fVar59 + fVar55))
                                               * fVar72) & uRam0000000146856018);
                        fVar49 = (float)((uint)((fRam000000014685600c - (fVar55 + fVar55)) * fVar73)
                                        & uRam000000014685601c);
                        local_2c8 = fVar83 * fVar62 + fVar40 * fVar61 + fVar81 * fVar86 +
                                    fVar49 * fVar65;
                        fStack_2c4 = fVar83 * fVar80 + fVar40 * fVar82 + fVar81 * fVar66 +
                                     fVar49 * fVar68;
                        fStack_2c0 = fVar83 * fVar84 + fVar40 * fVar78 + fVar81 * fVar63 +
                                     fVar49 * fVar77;
                        fStack_2bc = fVar83 * fVar52 + fVar40 * fVar52 + fVar81 * fVar52 +
                                     fVar49 * fRam000000014685600c;
                        local_2b8 = fVar47 * fVar62 + fVar58 * fVar61 + fVar85 * fVar86 +
                                    fVar49 * fVar65;
                        fStack_2b4 = fVar47 * fVar80 + fVar58 * fVar82 + fVar85 * fVar66 +
                                     fVar49 * fVar68;
                        fStack_2b0 = fVar47 * fVar84 + fVar58 * fVar78 + fVar85 * fVar63 +
                                     fVar49 * fVar77;
                        fStack_2ac = fVar47 * fVar52 + fVar58 * fVar52 + fVar85 * fVar52 +
                                     fVar49 * fRam000000014685600c;
                        local_2a8 = fVar76 * fVar62 + fVar79 * fVar61 + fVar46 * fVar86 +
                                    fVar49 * fVar65;
                        fStack_2a4 = fVar76 * fVar80 + fVar79 * fVar82 + fVar46 * fVar66 +
                                     fVar49 * fVar68;
                        fStack_2a0 = fVar76 * fVar84 + fVar79 * fVar78 + fVar46 * fVar63 +
                                     fVar49 * fVar77;
                        fStack_29c = fVar76 * fVar52 + fVar79 * fVar52 + fVar46 * fVar52 +
                                     fVar49 * fRam000000014685600c;
                        local_298 = fVar75 * fVar62 + fVar74 * fVar61 + fVar57 * fVar86 +
                                    fRam000000014685600c * fVar65;
                        fStack_294 = fVar75 * fVar80 + fVar74 * fVar82 + fVar57 * fVar66 +
                                     fRam000000014685600c * fVar68;
                        fStack_290 = fVar75 * fVar84 + fVar74 * fVar78 + fVar57 * fVar63 +
                                     fRam000000014685600c * fVar77;
                        fStack_28c = fVar75 * fVar52 + fVar74 * fVar52 + fVar57 * fVar52 +
                                     fRam000000014685600c * fRam000000014685600c;
                        FMatrix::RemoveScaling(&local_2c8);
                        fVar54 = (float)(-(uint)(local_228 <= fVar87) &
                                         (_DAT_1468560c0 ^ (uint)fVar54) ^ _DAT_1468560c0);
                        fVar39 = (float)(-(uint)(fStack_224 <= fVar88) &
                                         (uRam00000001468560c4 ^ (uint)fVar39) ^
                                        uRam00000001468560c4);
                        fVar48 = (float)(-(uint)(fStack_220 <= fVar89) &
                                         (uRam00000001468560c8 ^ (uint)fVar48) ^
                                        uRam00000001468560c8);
                        local_2c8 = local_2c8 * fVar54;
                        fStack_2c4 = fStack_2c4 * fVar54;
                        fStack_2c0 = fStack_2c0 * fVar54;
                        fStack_2b4 = fStack_2b4 * fVar39;
                        fStack_2b0 = fStack_2b0 * fVar39;
                        local_2b8 = local_2b8 * fVar39;
                        fStack_2a4 = fStack_2a4 * fVar48;
                        fStack_2a0 = fStack_2a0 * fVar48;
                        local_2a8 = local_2a8 * fVar48;
                        uVar19 = FQuat::FQuat(&local_1e8,&local_2c8);
                        local_2d0 = 0x322bcc77;
                        auVar44._0_4_ = local_1e8 * local_1e8 + fStack_1e0 * fStack_1e0;
                        auVar44._4_4_ = fStack_1e4 * fStack_1e4 + fStack_1dc * fStack_1dc;
                        auVar44._8_4_ = fStack_1e0 * fStack_1e0 + local_1e8 * local_1e8;
                        auVar44._12_4_ = fStack_1dc * fStack_1dc + fStack_1e4 * fStack_1e4;
                        fVar47 = auVar44._4_4_ + auVar44._0_4_;
                        fVar49 = auVar44._8_4_ + auVar44._4_4_;
                        fVar74 = auVar44._12_4_ + auVar44._8_4_;
                        fVar75 = auVar44._0_4_ + auVar44._12_4_;
                        auVar7._4_4_ = fVar49;
                        auVar7._0_4_ = fVar47;
                        auVar7._8_4_ = fVar74;
                        auVar7._12_4_ = fVar75;
                        auVar41 = rsqrtps(auVar44,auVar7);
                        fVar39 = auVar41._0_4_;
                        fVar48 = auVar41._4_4_;
                        fVar40 = auVar41._8_4_;
                        fVar46 = auVar41._12_4_;
                        fVar39 = ((float)local_238 - fVar39 * fVar39 * fVar47 * (float)local_238) *
                                 fVar39 + fVar39;
                        fVar48 = (local_238._4_4_ - fVar48 * fVar48 * fVar49 * local_238._4_4_) *
                                 fVar48 + fVar48;
                        fVar40 = ((float)uStack_230 - fVar40 * fVar40 * fVar74 * (float)uStack_230)
                                 * fVar40 + fVar40;
                        fVar46 = (uStack_230._4_4_ - fVar46 * fVar46 * fVar75 * uStack_230._4_4_) *
                                 fVar46 + fVar46;
                        fVar54 = 0.0;
                        fVar52 = (float)(((uint)((((float)local_238 -
                                                  fVar39 * fVar39 * fVar47 * (float)local_238) *
                                                  fVar39 + fVar39) * local_1e8) ^ _DAT_1468560a0) &
                                         -(uint)(1e-08 <= fVar47) ^ _DAT_1468560a0);
                        fVar55 = (float)(((uint)(((local_238._4_4_ -
                                                  fVar48 * fVar48 * fVar49 * local_238._4_4_) *
                                                  fVar48 + fVar48) * fStack_1e4) ^
                                         uRam00000001468560a4) & -(uint)(1e-08 <= fVar49) ^
                                        uRam00000001468560a4);
                        fVar58 = (float)(((uint)((((float)uStack_230 -
                                                  fVar40 * fVar40 * fVar74 * (float)uStack_230) *
                                                  fVar40 + fVar40) * fStack_1e0) ^
                                         uRam00000001468560a8) & -(uint)(1e-08 <= fVar74) ^
                                        uRam00000001468560a8);
                        fVar46 = (float)(((uint)(((uStack_230._4_4_ -
                                                  fVar46 * fVar46 * fVar75 * uStack_230._4_4_) *
                                                  fVar46 + fVar46) * fStack_1dc) ^
                                         uRam00000001468560ac) & -(uint)(1e-08 <= fVar75) ^
                                        uRam00000001468560ac);
                        fVar65 = local_298;
                        fVar68 = fStack_294;
                        fVar77 = fStack_290;
                        local_1e8 = fVar52;
                        fStack_1e4 = fVar55;
                        fStack_1e0 = fVar58;
                        fStack_1dc = fVar46;
                      }
                      fVar47 = fStack_1cc;
                      fVar40 = fStack_1d0;
                      fVar48 = fStack_1d4;
                      fVar39 = local_1d8;
                      fVar73 = fVar73 * 0.0;
                      fVar53 = fVar53 * fVar72;
                      fVar50 = fVar50 * fVar71;
                      fVar51 = fVar51 * fVar70;
                      auVar13._4_4_ = fStack_1d4;
                      auVar13._0_4_ = local_1d8;
                      auVar13._8_4_ = fStack_1d0;
                      auVar13._12_4_ = fStack_1cc;
                      local_148 = 0.0;
                      fStack_144 = 0.0;
                      fStack_140 = 0.0;
                      fStack_13c = fRam000000014685600c;
                      local_128 = (float)((uint)_DAT_146856000 & _DAT_146856010);
                      fStack_124 = (float)((uint)fRam0000000146856004 & uRam0000000146856014);
                      fStack_120 = (float)((uint)fRam0000000146856008 & uRam0000000146856018);
                      fStack_11c = (float)((uint)fRam000000014685600c & uRam000000014685601c);
                      auVar37._4_4_ = fVar50;
                      auVar37._0_4_ = fVar51;
                      auVar37._8_4_ = fVar53;
                      auVar37._12_4_ = fVar73;
                      _local_138 = ZEXT816(0);
                      auVar41 = minps(auVar37,auVar13);
                      auVar38._4_4_ = -(uint)(auVar41._4_4_ < fRam00000001468560d4);
                      auVar38._0_4_ = -(uint)(auVar41._0_4_ < _DAT_1468560d0);
                      auVar38._8_4_ = -(uint)(auVar41._8_4_ < fRam00000001468560d8);
                      auVar38._12_4_ = -(uint)(auVar41._12_4_ < fRam00000001468560dc);
                      iVar18 = movmskps(uVar19,auVar38);
                      local_228 = _DAT_1468560d0;
                      fStack_224 = fRam00000001468560d4;
                      fStack_220 = fRam00000001468560d8;
                      fStack_21c = fRam00000001468560dc;
                      if (iVar18 == 0) {
                        fVar65 = fVar65 * local_1d8;
                        fVar68 = fVar68 * fStack_1d4;
                        fVar77 = fVar77 * fStack_1d0;
                        fVar54 = fVar54 * fStack_1cc;
                        local_148 = fVar46 * fVar60 * _DAT_146856090 + fVar52 * fVar69 +
                                    fVar58 * fVar64 * _DAT_146856080 +
                                    fVar55 * fVar67 * _DAT_146856070;
                        fStack_144 = fVar58 * fVar60 * fRam0000000146856094 + fVar55 * fVar69 +
                                     fVar46 * fVar64 * fRam0000000146856084 +
                                     fVar52 * fVar67 * fRam0000000146856074;
                        fStack_140 = fVar55 * fVar60 * fRam0000000146856098 + fVar58 * fVar69 +
                                     fVar52 * fVar64 * fRam0000000146856088 +
                                     fVar46 * fVar67 * fRam0000000146856078;
                        fStack_13c = fVar52 * fVar60 * fRam000000014685609c + fVar46 * fVar69 +
                                     fVar55 * fVar64 * fRam000000014685608c +
                                     fVar58 * fVar67 * fRam000000014685607c;
                        fVar46 = fVar77 * fVar64 - fVar68 * fVar67;
                        fVar49 = fVar65 * fVar67 - fVar77 * fVar60;
                        fVar70 = fVar68 * fVar60 - fVar65 * fVar64;
                        fVar71 = fVar54 * fVar69 - fVar54 * fVar69;
                        fVar46 = fVar46 + fVar46;
                        fVar49 = fVar49 + fVar49;
                        fVar70 = fVar70 + fVar70;
                        fVar71 = fVar71 + fVar71;
                        local_138 = (undefined1  [4])
                                    ((fVar70 * fVar64 - fVar49 * fVar67) + fVar69 * fVar46 + fVar65
                                    + (float)local_288);
                        auStack_134 = (undefined1  [4])
                                      ((fVar46 * fVar67 - fVar70 * fVar60) +
                                       fVar69 * fVar49 + fVar68 + local_288._4_4_);
                        uStack_130._0_4_ =
                             (fVar49 * fVar60 - fVar46 * fVar64) + fVar69 * fVar70 + fVar77 +
                             (float)uStack_280;
                        uStack_130._4_4_ =
                             (fVar71 * fVar69 - fVar71 * fVar69) + fVar69 * fVar71 + fVar54 +
                             uStack_280._4_4_;
                      }
                      else {
                        fVar49 = fVar64 + fVar64;
                        fVar70 = fVar67 + fVar67;
                        fVar85 = fVar51 * local_1d8;
                        fVar79 = fVar50 * fStack_1d4;
                        fVar82 = fVar53 * fStack_1d0;
                        fVar74 = fVar60 * (fVar60 + fVar60);
                        fVar54 = fVar69 * (fVar60 + fVar60);
                        fVar78 = (fVar69 * fVar70 + fVar60 * fVar49) * local_1d8;
                        fVar81 = (fVar54 + fVar64 * fVar70) * fStack_1d4;
                        fVar83 = (fVar69 * fVar49 + fVar60 * fVar70) * fStack_1d0;
                        fVar61 = fStack_1d4 * (fVar60 * fVar49 - fVar69 * fVar70);
                        fVar59 = fStack_1d0 * (fVar64 * fVar70 - fVar54);
                        fVar56 = local_1d8 * (fVar60 * fVar70 - fVar69 * fVar49);
                        fVar72 = fVar55 + fVar55;
                        fVar75 = fVar58 + fVar58;
                        fVar57 = fVar52 * (fVar52 + fVar52);
                        fVar54 = (float)((uint)((_DAT_146856000 -
                                                (fVar67 * fVar70 + fVar64 * fVar49)) * local_1d8) &
                                        _DAT_146856010);
                        fVar70 = (float)((uint)((fRam0000000146856004 - (fVar67 * fVar70 + fVar74))
                                               * fStack_1d4) & uRam0000000146856014);
                        fVar71 = (float)((uint)((fRam0000000146856008 - (fVar64 * fVar49 + fVar74))
                                               * fStack_1d0) & uRam0000000146856018);
                        fVar74 = (float)((uint)((fRam000000014685600c - (fVar74 + fVar74)) *
                                               fStack_1cc) & uRam000000014685601c);
                        fVar49 = (fVar52 + fVar52) * fVar46;
                        fVar62 = (fVar75 * fVar46 + fVar72 * fVar52) * fVar51;
                        fVar66 = (fVar49 + fVar75 * fVar55) * fVar50;
                        fVar76 = (fVar72 * fVar46 + fVar75 * fVar52) * fVar53;
                        fVar80 = fVar50 * (fVar72 * fVar52 - fVar75 * fVar46);
                        fVar63 = fVar53 * (fVar75 * fVar55 - fVar49);
                        fVar52 = fVar51 * (fVar75 * fVar52 - fVar72 * fVar46);
                        fVar46 = (float)((uint)((_DAT_146856000 -
                                                (fVar58 * fVar75 + fVar55 * fVar72)) * fVar51) &
                                        _DAT_146856010);
                        fVar49 = (float)((uint)((fRam0000000146856004 - (fVar58 * fVar75 + fVar57))
                                               * fVar50) & uRam0000000146856014);
                        fVar72 = (float)((uint)((fRam0000000146856008 - (fVar55 * fVar72 + fVar57))
                                               * fVar53) & uRam0000000146856018);
                        fVar75 = (float)((uint)((fRam000000014685600c - (fVar57 + fVar57)) * fVar73)
                                        & uRam000000014685601c);
                        local_2c8 = fVar62 * fVar61 + fVar46 * fVar54 + fVar52 * fVar83 +
                                    fVar75 * (float)local_288;
                        fStack_2c4 = fVar62 * fVar70 + fVar46 * fVar78 + fVar52 * fVar59 +
                                     fVar75 * local_288._4_4_;
                        fStack_2c0 = fVar62 * fVar81 + fVar46 * fVar56 + fVar52 * fVar71 +
                                     fVar75 * (float)uStack_280;
                        fStack_2bc = fVar62 * fVar74 + fVar46 * fVar74 + fVar52 * fVar74 +
                                     fVar75 * fRam000000014685600c;
                        local_2b8 = fVar49 * fVar61 + fVar80 * fVar54 + fVar66 * fVar83 +
                                    fVar75 * (float)local_288;
                        fStack_2b4 = fVar49 * fVar70 + fVar80 * fVar78 + fVar66 * fVar59 +
                                     fVar75 * local_288._4_4_;
                        fStack_2b0 = fVar49 * fVar81 + fVar80 * fVar56 + fVar66 * fVar71 +
                                     fVar75 * (float)uStack_280;
                        fStack_2ac = fVar49 * fVar74 + fVar80 * fVar74 + fVar66 * fVar74 +
                                     fVar75 * fRam000000014685600c;
                        local_2a8 = fVar63 * fVar61 + fVar76 * fVar54 + fVar72 * fVar83 +
                                    fVar75 * (float)local_288;
                        fStack_2a4 = fVar63 * fVar70 + fVar76 * fVar78 + fVar72 * fVar59 +
                                     fVar75 * local_288._4_4_;
                        fStack_2a0 = fVar63 * fVar81 + fVar76 * fVar56 + fVar72 * fVar71 +
                                     fVar75 * (float)uStack_280;
                        fStack_29c = fVar63 * fVar74 + fVar76 * fVar74 + fVar72 * fVar74 +
                                     fVar75 * fRam000000014685600c;
                        local_298 = fVar68 * fVar61 + fVar65 * fVar54 + fVar77 * fVar83 +
                                    fRam000000014685600c * (float)local_288;
                        fStack_294 = fVar68 * fVar70 + fVar65 * fVar78 + fVar77 * fVar59 +
                                     fRam000000014685600c * local_288._4_4_;
                        fStack_290 = fVar68 * fVar81 + fVar65 * fVar56 + fVar77 * fVar71 +
                                     fRam000000014685600c * (float)uStack_280;
                        fStack_28c = fVar68 * fVar74 + fVar65 * fVar74 + fVar77 * fVar74 +
                                     fRam000000014685600c * fRam000000014685600c;
                        FMatrix::RemoveScaling(&local_2c8);
                        fVar54 = (float)((_DAT_1468560c0 ^ (uint)_DAT_146856000) &
                                         -(uint)(local_228 <= fVar85) ^ _DAT_1468560c0);
                        fVar46 = (float)((uRam00000001468560c4 ^ (uint)fRam0000000146856004) &
                                         -(uint)(fStack_224 <= fVar79) ^ uRam00000001468560c4);
                        fVar49 = (float)((uRam00000001468560c8 ^ (uint)fRam0000000146856008) &
                                         -(uint)(fStack_220 <= fVar82) ^ uRam00000001468560c8);
                        local_2c8 = local_2c8 * fVar54;
                        fStack_2c4 = fStack_2c4 * fVar54;
                        fStack_2c0 = fStack_2c0 * fVar54;
                        fStack_2b0 = fStack_2b0 * fVar46;
                        fStack_2b4 = fStack_2b4 * fVar46;
                        local_2b8 = local_2b8 * fVar46;
                        fStack_2a0 = fStack_2a0 * fVar49;
                        local_2a8 = local_2a8 * fVar49;
                        fStack_2a4 = fStack_2a4 * fVar49;
                        FQuat::FQuat(&local_1c8,&local_2c8);
                        local_2d0 = 0x322bcc77;
                        auVar45._0_4_ = local_1c8 * local_1c8 + fStack_1c0 * fStack_1c0;
                        auVar45._4_4_ = fStack_1c4 * fStack_1c4 + fStack_1bc * fStack_1bc;
                        auVar45._8_4_ = fStack_1c0 * fStack_1c0 + local_1c8 * local_1c8;
                        auVar45._12_4_ = fStack_1bc * fStack_1bc + fStack_1c4 * fStack_1c4;
                        fVar71 = auVar45._4_4_ + auVar45._0_4_;
                        fVar72 = auVar45._8_4_ + auVar45._4_4_;
                        fVar74 = auVar45._12_4_ + auVar45._8_4_;
                        fVar75 = auVar45._0_4_ + auVar45._12_4_;
                        auVar8._4_4_ = fVar72;
                        auVar8._0_4_ = fVar71;
                        auVar8._8_4_ = fVar74;
                        auVar8._12_4_ = fVar75;
                        auVar41 = rsqrtps(auVar45,auVar8);
                        fVar54 = auVar41._0_4_;
                        fVar46 = auVar41._4_4_;
                        fVar49 = auVar41._8_4_;
                        fVar70 = auVar41._12_4_;
                        fVar54 = ((float)local_238 - fVar54 * fVar54 * fVar71 * (float)local_238) *
                                 fVar54 + fVar54;
                        fVar46 = (local_238._4_4_ - fVar46 * fVar46 * fVar72 * local_238._4_4_) *
                                 fVar46 + fVar46;
                        fVar49 = ((float)uStack_230 - fVar49 * fVar49 * fVar74 * (float)uStack_230)
                                 * fVar49 + fVar49;
                        fVar70 = (uStack_230._4_4_ - fVar70 * fVar70 * fVar75 * uStack_230._4_4_) *
                                 fVar70 + fVar70;
                        auStack_134 = (undefined1  [4])fStack_294;
                        local_138 = (undefined1  [4])local_298;
                        uStack_130._0_4_ = fStack_290;
                        local_1c8 = (float)(((uint)((((float)local_238 -
                                                     fVar54 * fVar54 * fVar71 * (float)local_238) *
                                                     fVar54 + fVar54) * local_1c8) ^ _DAT_1468560a0)
                                            & -(uint)(1e-08 <= fVar71) ^ _DAT_1468560a0);
                        fStack_1c4 = (float)(((uint)(((local_238._4_4_ -
                                                      fVar46 * fVar46 * fVar72 * local_238._4_4_) *
                                                      fVar46 + fVar46) * fStack_1c4) ^
                                             uRam00000001468560a4) & -(uint)(1e-08 <= fVar72) ^
                                            uRam00000001468560a4);
                        fStack_1c0 = (float)(((uint)((((float)uStack_230 -
                                                      fVar49 * fVar49 * fVar74 * (float)uStack_230)
                                                      * fVar49 + fVar49) * fStack_1c0) ^
                                             uRam00000001468560a8) & -(uint)(1e-08 <= fVar74) ^
                                            uRam00000001468560a8);
                        fStack_1bc = (float)(((uint)(((uStack_230._4_4_ -
                                                      fVar70 * fVar70 * fVar75 * uStack_230._4_4_) *
                                                      fVar70 + fVar70) * fStack_1bc) ^
                                             uRam00000001468560ac) & -(uint)(1e-08 <= fVar75) ^
                                            uRam00000001468560ac);
                        uStack_130._4_4_ = 0.0;
                        local_148 = local_1c8;
                        fStack_144 = fStack_1c4;
                        fStack_140 = fStack_1c0;
                        fStack_13c = fStack_1bc;
                      }
                      fStack_11c = fVar73 * fVar47;
                      fStack_120 = fVar53 * fVar40;
                      fStack_124 = fVar50 * fVar48;
                      local_128 = fVar51 * fVar39;
                      U2PTransform(local_168,&local_148);
                      FUN_14062e090(local_168);
                      (**(code **)(*plVar21 + 0x88))(plVar21,local_168);
                      lVar22 = local_268;
                    }
                  }
                  lVar26 = lVar26 + 1;
                  lVar20 = local_258;
                  cVar17 = local_2d8;
                } while (lVar26 < lVar22);
              }
            }
          }
        }
        local_258 = lVar20 + 0x30;
        fVar51 = local_1b8;
        fVar50 = fStack_1b4;
        fVar53 = fStack_1b0;
        fVar54 = fStack_1ac;
        iVar28 = local_278;
      } while (local_278 <= *(int *)(lVar27 + 0x450));
      if (lVar24 != 0) {
        FMemory::Free(lVar24);
      }
    }
  }
  return;
}



// FUNCTION 140622250 FUN_140622250 body=163 status=ok
// SIG undefined FUN_140622250(void)

void FUN_140622250(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = FUN_1423ac950(*param_1,*(undefined8 *)param_1[1]);
  puVar1 = (undefined4 *)param_1[2];
  puVar2 = (undefined4 *)param_1[3];
  local_24 = puVar1[1];
  local_28 = *puVar1;
  local_20 = puVar1[2];
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    iVar4 = iVar3 + -1;
  }
  local_10 = puVar2[2];
  local_14 = puVar2[1];
  local_18 = *puVar2;
  (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x168))
            (*(longlong **)(*param_1 + 0xa78),iVar4,&local_18,1,&local_28,1);
  return;
}



// FUNCTION 140622300 FUN_140622300 body=6787 status=ok
// SIG undefined FUN_140622300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140622300(longlong *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar45;
  float fVar46;
  undefined1 auVar39 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  undefined1 auStack_268 [32];
  undefined4 local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  longlong local_1d8;
  ulonglong local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [4];
  undefined1 auStack_134 [4];
  undefined8 uStack_130;
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
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  plVar20 = *(longlong **)(*param_1 + 0xa78);
  if (plVar20 != (longlong *)0x0) {
    plVar20 = (longlong *)(**(code **)(*plVar20 + 0xd0))(plVar20,*(undefined4 *)param_1[1]);
    if (plVar20 != (longlong *)0x0) {
      piVar3 = (int *)plVar20[2];
      lVar26 = 0;
      lVar21 = lVar26;
      if ((piVar3 != (int *)0x0) && (*piVar3 == 7)) {
        lVar21 = *(longlong *)(piVar3 + 2);
      }
      if (*(int *)(lVar21 + 0x10) == *(int *)param_1[1]) {
        lVar21 = FUN_140626d60(*param_1);
        fVar61 = fRam00000001468560d8;
        fVar62 = fRam00000001468560d4;
        fVar84 = _DAT_1468560d0;
        fVar85 = fRam0000000146856008;
        fVar57 = fRam0000000146856004;
        fVar83 = _DAT_146856000;
        fVar58 = DAT_1464aa790;
        fVar63 = DAT_1464aa788._4_4_;
        fVar70 = (float)DAT_1464aa788;
        lVar24 = (longlong)*(int *)param_1[2];
        pfVar2 = (float *)(*(longlong *)(lVar21 + 0x148) + 0x10 + lVar24 * 0x30);
        pfVar1 = (float *)(*(longlong *)(lVar21 + 0x148) + lVar24 * 0x30);
        auVar28._0_4_ = (float)((uint)(float)DAT_1464aa788 & _DAT_146856060);
        auVar28._4_4_ = (float)((uint)DAT_1464aa788._4_4_ & uRam0000000146856064);
        auVar28._8_4_ = (float)((uint)DAT_1464aa790 & uRam0000000146856068);
        auVar28._12_4_ = 0;
        auVar39._4_4_ = -(uint)(fRam0000000146856054 < auVar28._4_4_);
        auVar39._0_4_ = -(uint)(_DAT_146856050 < auVar28._0_4_);
        auVar39._8_4_ = -(uint)(fRam0000000146856058 < auVar28._8_4_);
        auVar39._12_4_ = -(uint)(fRam000000014685605c < 0.0);
        iVar17 = movmskps((int)lVar21,auVar39);
        fVar69 = _DAT_1468b5b70;
        fVar71 = fRam00000001468b5b74;
        fVar72 = fRam00000001468b5b78;
        fVar73 = fRam00000001468b5b7c;
        fVar38 = _DAT_1468b5b90;
        fVar45 = fRam00000001468b5b94;
        fVar46 = fRam00000001468b5b98;
        fVar48 = fRam00000001468b5b9c;
        fVar74 = _DAT_1468b5b80;
        fVar75 = fRam00000001468b5b84;
        fVar59 = fRam00000001468b5b88;
        fVar64 = fRam00000001468b5b8c;
        if (iVar17 != 0) {
          fVar69 = *pfVar1 * _DAT_146856040;
          fVar71 = pfVar1[1] * fRam0000000146856044;
          fVar72 = pfVar1[2] * fRam0000000146856048;
          fVar73 = pfVar1[3] * fRam000000014685604c;
          auVar10._4_4_ = DAT_1464aa788._4_4_;
          auVar10._0_4_ = (float)DAT_1464aa788;
          auVar10._8_4_ = DAT_1464aa790;
          auVar10._12_4_ = 0;
          auVar39 = rcpps(auVar28,auVar10);
          fVar38 = auVar39._0_4_;
          fVar45 = auVar39._4_4_;
          fVar46 = auVar39._8_4_;
          fVar48 = auVar39._12_4_;
          fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * (float)DAT_1464aa788;
          fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * DAT_1464aa788._4_4_;
          fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * DAT_1464aa790;
          fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * 0.0;
          fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * (float)DAT_1464aa788;
          fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * DAT_1464aa788._4_4_;
          fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * DAT_1464aa790;
          fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * 0.0;
          fVar38 = (float)((-(uint)((float)((uint)(float)DAT_1464aa788 & _DAT_146856060) <=
                                   _DAT_146856050) & (uint)fVar38 ^ (uint)fVar38) & _DAT_146856010);
          fVar45 = (float)((-(uint)((float)((uint)DAT_1464aa788._4_4_ & uRam0000000146856064) <=
                                   fRam0000000146856054) & (uint)fVar45 ^ (uint)fVar45) &
                          uRam0000000146856014);
          fVar46 = (float)((-(uint)((float)((uint)DAT_1464aa790 & uRam0000000146856068) <=
                                   fRam0000000146856058) & (uint)fVar46 ^ (uint)fVar46) &
                          uRam0000000146856018);
          fVar48 = (float)((-(uint)(0.0 <= fRam000000014685605c) & (uint)fVar48 ^ (uint)fVar48) &
                          uRam000000014685601c);
          fVar74 = *pfVar2 * fVar38;
          fVar75 = pfVar2[1] * fVar45;
          fVar77 = pfVar2[2] * fVar46;
          fVar79 = fVar48 * 0.0;
          fVar59 = fVar77 * fVar71 - fVar75 * fVar72;
          fVar64 = fVar74 * fVar72 - fVar77 * fVar69;
          fVar66 = fVar75 * fVar69 - fVar74 * fVar71;
          fVar68 = fVar79 * fVar73 - fVar79 * fVar73;
          fVar59 = fVar59 + fVar59;
          fVar64 = fVar64 + fVar64;
          fVar66 = fVar66 + fVar66;
          fVar68 = fVar68 + fVar68;
          fVar74 = (float)((uint)(0.0 - ((fVar66 * fVar71 - fVar64 * fVar72) +
                                        fVar73 * fVar59 + fVar74)) & _DAT_146856010);
          fVar75 = (float)((uint)(0.0 - ((fVar59 * fVar72 - fVar66 * fVar69) +
                                        fVar73 * fVar64 + fVar75)) & uRam0000000146856014);
          fVar59 = (float)((uint)(0.0 - ((fVar64 * fVar69 - fVar59 * fVar71) +
                                        fVar73 * fVar66 + fVar77)) & uRam0000000146856018);
          fVar64 = (float)((uint)(0.0 - ((fVar68 * fVar73 - fVar68 * fVar73) +
                                        fVar73 * fVar68 + fVar79)) & uRam000000014685601c);
        }
        lVar23 = *param_1;
        local_1f8 = CONCAT44(fRam00000001468560d4,_DAT_1468560d0);
        uStack_1f0 = CONCAT44(fRam00000001468560dc,fRam00000001468560d8);
        lVar4 = *(longlong *)(lVar23 + 0x728 + (longlong)*(int *)(lVar23 + 0x770) * 0x10);
        auVar39 = *(undefined1 (*) [16])(lVar4 + 0x10 + lVar24 * 0x30);
        fVar66 = auVar39._0_4_;
        fVar68 = auVar39._4_4_;
        fVar77 = auVar39._8_4_;
        pfVar1 = (float *)(lVar4 + lVar24 * 0x30);
        fVar79 = *pfVar1;
        fVar47 = pfVar1[1];
        fVar49 = pfVar1[2];
        fVar52 = pfVar1[3];
        auVar27._4_4_ = fVar45;
        auVar27._0_4_ = fVar38;
        auVar27._8_4_ = fVar46;
        auVar27._12_4_ = fVar48;
        auVar11._4_4_ = DAT_1464aa788._4_4_;
        auVar11._0_4_ = (float)DAT_1464aa788;
        auVar11._8_4_ = DAT_1464aa790;
        auVar11._12_4_ = 0;
        auVar28 = minps(auVar27,auVar11);
        auVar29._4_4_ = -(uint)(auVar28._4_4_ < fRam00000001468560d4);
        auVar29._0_4_ = -(uint)(auVar28._0_4_ < _DAT_1468560d0);
        auVar29._8_4_ = -(uint)(auVar28._8_4_ < fRam00000001468560d8);
        auVar29._12_4_ = -(uint)(auVar28._12_4_ < fRam00000001468560dc);
        iVar17 = movmskps(*(int *)(lVar23 + 0x770) * 2,auVar29);
        fStack_1dc = 0.0;
        _local_1e8 = auVar39._0_12_;
        if (iVar17 == 0) {
          fVar74 = (float)DAT_1464aa788 * fVar74;
          fVar75 = DAT_1464aa788._4_4_ * fVar75;
          fVar59 = DAT_1464aa790 * fVar59;
          fVar64 = fVar64 * 0.0;
          fVar83 = fVar73 * fVar79 * _DAT_146856090 + fVar52 * fVar69 +
                   fVar72 * fVar47 * _DAT_146856080 + fVar49 * fVar71 * _DAT_146856070;
          fVar57 = fVar72 * fVar79 * fRam0000000146856094 + fVar52 * fVar71 +
                   fVar73 * fVar47 * fRam0000000146856084 + fVar49 * fVar69 * fRam0000000146856074;
          fVar85 = fVar71 * fVar79 * fRam0000000146856098 + fVar52 * fVar72 +
                   fVar69 * fVar47 * fRam0000000146856088 + fVar49 * fVar73 * fRam0000000146856078;
          fVar84 = fVar69 * fVar79 * fRam000000014685609c + fVar52 * fVar73 +
                   fVar71 * fVar47 * fRam000000014685608c + fVar49 * fVar72 * fRam000000014685607c;
          fVar62 = fVar59 * fVar47 - fVar75 * fVar49;
          fVar61 = fVar74 * fVar49 - fVar59 * fVar79;
          fVar69 = fVar75 * fVar79 - fVar74 * fVar47;
          fVar71 = fVar64 * fVar52 - fVar64 * fVar52;
          fVar62 = fVar62 + fVar62;
          fVar61 = fVar61 + fVar61;
          fVar69 = fVar69 + fVar69;
          fVar71 = fVar71 + fVar71;
          fVar66 = (fVar69 * fVar47 - fVar61 * fVar49) + fVar52 * fVar62 + fVar74 + fVar66;
          fVar68 = (fVar62 * fVar49 - fVar69 * fVar79) + fVar52 * fVar61 + fVar75 + fVar68;
          fVar77 = (fVar61 * fVar79 - fVar62 * fVar47) + fVar52 * fVar69 + fVar59 + fVar77;
          fVar62 = (fVar71 * fVar52 - fVar71 * fVar52) + fVar52 * fVar71 + fVar64 + 0.0;
          uVar18 = 0;
        }
        else {
          fVar50 = fVar47 + fVar47;
          fVar53 = fVar49 + fVar49;
          fVar55 = fVar79 * (fVar79 + fVar79);
          fVar64 = (fVar79 + fVar79) * fVar52;
          fVar87 = (float)DAT_1464aa788 * fVar38;
          fVar88 = DAT_1464aa788._4_4_ * fVar45;
          fVar89 = DAT_1464aa790 * fVar46;
          fVar51 = fVar71 + fVar71;
          fVar54 = fVar72 + fVar72;
          fVar80 = (fVar53 * fVar52 + fVar79 * fVar50) * (float)DAT_1464aa788;
          fVar81 = (fVar64 + fVar47 * fVar53) * DAT_1464aa788._4_4_;
          fVar82 = (fVar50 * fVar52 + fVar79 * fVar53) * DAT_1464aa790;
          fVar60 = DAT_1464aa788._4_4_ * (fVar79 * fVar50 - fVar53 * fVar52);
          fVar65 = DAT_1464aa790 * (fVar47 * fVar53 - fVar64);
          fVar67 = (float)DAT_1464aa788 * (fVar79 * fVar53 - fVar50 * fVar52);
          fVar56 = fVar69 * (fVar69 + fVar69);
          fVar64 = (float)((uint)((_DAT_146856000 - (fVar49 * fVar53 + fVar47 * fVar50)) *
                                 (float)DAT_1464aa788) & _DAT_146856010);
          fVar79 = (float)((uint)((fRam0000000146856004 - (fVar49 * fVar53 + fVar55)) *
                                 DAT_1464aa788._4_4_) & uRam0000000146856014);
          fVar47 = (float)((uint)((fRam0000000146856008 - (fVar47 * fVar50 + fVar55)) *
                                 DAT_1464aa790) & uRam0000000146856018);
          fVar49 = (float)((uint)((fRam000000014685600c - (fVar55 + fVar55)) * 0.0) &
                          uRam000000014685601c);
          fVar52 = (fVar69 + fVar69) * fVar73;
          fVar55 = (fVar54 * fVar73 + fVar69 * fVar51) * fVar38;
          fVar76 = (fVar52 + fVar71 * fVar54) * fVar45;
          fVar78 = (fVar51 * fVar73 + fVar69 * fVar54) * fVar46;
          fVar50 = fVar45 * (fVar69 * fVar51 - fVar54 * fVar73);
          fVar52 = fVar46 * (fVar71 * fVar54 - fVar52);
          fVar53 = fVar38 * (fVar69 * fVar54 - fVar51 * fVar73);
          fVar69 = (float)((uint)((_DAT_146856000 - (fVar72 * fVar54 + fVar71 * fVar51)) * fVar38) &
                          _DAT_146856010);
          fVar72 = (float)((uint)((fRam0000000146856004 - (fVar72 * fVar54 + fVar56)) * fVar45) &
                          uRam0000000146856014);
          fVar71 = (float)((uint)((fRam0000000146856008 - (fVar71 * fVar51 + fVar56)) * fVar46) &
                          uRam0000000146856018);
          fVar73 = (float)((uint)((fRam000000014685600c - (fVar56 + fVar56)) * fVar48) &
                          uRam000000014685601c);
          local_148 = fVar55 * fVar60 + fVar69 * fVar64 + fVar53 * fVar82 + fVar73 * fVar66;
          fStack_144 = fVar55 * fVar79 + fVar69 * fVar80 + fVar53 * fVar65 + fVar73 * fVar68;
          fStack_140 = fVar55 * fVar81 + fVar69 * fVar67 + fVar53 * fVar47 + fVar73 * fVar77;
          fStack_13c = fVar55 * fVar49 + fVar69 * fVar49 + fVar53 * fVar49 +
                       fVar73 * fRam000000014685600c;
          auStack_134 = (undefined1  [4])
                        (fVar72 * fVar79 + fVar50 * fVar80 + fVar76 * fVar65 + fVar73 * fVar68);
          local_138 = (undefined1  [4])
                      (fVar72 * fVar60 + fVar50 * fVar64 + fVar76 * fVar82 + fVar73 * fVar66);
          uStack_130._0_4_ = fVar72 * fVar81 + fVar50 * fVar67 + fVar76 * fVar47 + fVar73 * fVar77;
          uStack_130._4_4_ =
               fVar72 * fVar49 + fVar50 * fVar49 + fVar76 * fVar49 + fVar73 * fRam000000014685600c;
          local_128 = fVar52 * fVar60 + fVar78 * fVar64 + fVar71 * fVar82 + fVar73 * fVar66;
          fStack_124 = fVar52 * fVar79 + fVar78 * fVar80 + fVar71 * fVar65 + fVar73 * fVar68;
          fStack_120 = fVar52 * fVar81 + fVar78 * fVar67 + fVar71 * fVar47 + fVar73 * fVar77;
          fStack_11c = fVar52 * fVar49 + fVar78 * fVar49 + fVar71 * fVar49 +
                       fVar73 * fRam000000014685600c;
          local_118 = fVar75 * fVar60 + fVar74 * fVar64 + fVar59 * fVar82 +
                      fRam000000014685600c * fVar66;
          fStack_114 = fVar75 * fVar79 + fVar74 * fVar80 + fVar59 * fVar65 +
                       fRam000000014685600c * fVar68;
          fStack_110 = fVar75 * fVar81 + fVar74 * fVar67 + fVar59 * fVar47 +
                       fRam000000014685600c * fVar77;
          fStack_10c = fVar75 * fVar49 + fVar74 * fVar49 + fVar59 * fVar49 +
                       fRam000000014685600c * fRam000000014685600c;
          FMatrix::RemoveScaling(&local_148);
          auVar39 = _local_138;
          fVar83 = (float)(-(uint)(fVar84 <= fVar87) & (_DAT_1468560c0 ^ (uint)fVar83) ^
                          _DAT_1468560c0);
          fVar84 = (float)(-(uint)(fVar62 <= fVar88) & (uRam00000001468560c4 ^ (uint)fVar57) ^
                          uRam00000001468560c4);
          fVar85 = (float)(-(uint)(fVar61 <= fVar89) & (uRam00000001468560c8 ^ (uint)fVar85) ^
                          uRam00000001468560c8);
          local_148 = local_148 * fVar83;
          fStack_144 = fStack_144 * fVar83;
          fStack_140 = fStack_140 * fVar83;
          fVar83 = (float)uStack_130 * fVar84;
          fVar57 = (float)local_138 * fVar84;
          auVar15._4_8_ = uStack_130;
          auVar15._0_4_ = (float)auStack_134 * fVar84;
          _local_138 = auVar15._0_8_ << 0x20;
          uStack_130._4_4_ = auVar39._12_4_;
          uStack_130._0_4_ = fVar83;
          fStack_124 = fStack_124 * fVar85;
          fStack_120 = fStack_120 * fVar85;
          local_128 = local_128 * fVar85;
          local_138 = (undefined1  [4])fVar57;
          uVar18 = FQuat::FQuat(local_1e8,&local_148);
          lVar23 = *param_1;
          local_248 = 0x322bcc77;
          auVar40._0_4_ = (float)local_1e8._0_4_ * (float)local_1e8._0_4_ + fStack_1e0 * fStack_1e0;
          auVar40._4_4_ = (float)local_1e8._4_4_ * (float)local_1e8._4_4_ + fStack_1dc * fStack_1dc;
          auVar40._8_4_ = fStack_1e0 * fStack_1e0 + (float)local_1e8._0_4_ * (float)local_1e8._0_4_;
          auVar40._12_4_ = fStack_1dc * fStack_1dc + (float)local_1e8._4_4_ * (float)local_1e8._4_4_
          ;
          fVar61 = auVar40._4_4_ + auVar40._0_4_;
          fVar69 = auVar40._8_4_ + auVar40._4_4_;
          fVar71 = auVar40._12_4_ + auVar40._8_4_;
          fVar72 = auVar40._0_4_ + auVar40._12_4_;
          auVar6._4_4_ = fVar69;
          auVar6._0_4_ = fVar61;
          auVar6._8_4_ = fVar71;
          auVar6._12_4_ = fVar72;
          auVar39 = rsqrtps(auVar40,auVar6);
          fVar83 = auVar39._0_4_;
          fVar57 = auVar39._4_4_;
          fVar85 = auVar39._8_4_;
          fVar84 = auVar39._12_4_;
          fVar83 = (_DAT_1468560b0 - fVar83 * fVar83 * fVar61 * _DAT_1468560b0) * fVar83 + fVar83;
          fVar57 = (fRam00000001468560b4 - fVar57 * fVar57 * fVar69 * fRam00000001468560b4) * fVar57
                   + fVar57;
          fVar85 = (fRam00000001468560b8 - fVar85 * fVar85 * fVar71 * fRam00000001468560b8) * fVar85
                   + fVar85;
          fVar84 = (fRam00000001468560bc - fVar84 * fVar84 * fVar72 * fRam00000001468560bc) * fVar84
                   + fVar84;
          fVar62 = 0.0;
          local_1f8 = CONCAT44(fRam00000001468560d4,_DAT_1468560d0);
          uStack_1f0 = CONCAT44(fRam00000001468560dc,fRam00000001468560d8);
          fVar83 = (float)(((uint)(((_DAT_1468560b0 - fVar83 * fVar83 * fVar61 * _DAT_1468560b0) *
                                    fVar83 + fVar83) * (float)local_1e8._0_4_) ^ _DAT_1468560a0) &
                           -(uint)(1e-08 <= fVar61) ^ _DAT_1468560a0);
          fVar57 = (float)(((uint)(((fRam00000001468560b4 -
                                    fVar57 * fVar57 * fVar69 * fRam00000001468560b4) * fVar57 +
                                   fVar57) * (float)local_1e8._4_4_) ^ uRam00000001468560a4) &
                           -(uint)(1e-08 <= fVar69) ^ uRam00000001468560a4);
          fVar85 = (float)(((uint)(((fRam00000001468560b8 -
                                    fVar85 * fVar85 * fVar71 * fRam00000001468560b8) * fVar85 +
                                   fVar85) * fStack_1e0) ^ uRam00000001468560a8) &
                           -(uint)(1e-08 <= fVar71) ^ uRam00000001468560a8);
          fVar84 = (float)(((uint)(((fRam00000001468560bc -
                                    fVar84 * fVar84 * fVar72 * fRam00000001468560bc) * fVar84 +
                                   fVar84) * fStack_1dc) ^ uRam00000001468560ac) &
                           -(uint)(1e-08 <= fVar72) ^ uRam00000001468560ac);
          fVar66 = local_118;
          fVar68 = fStack_114;
          fVar77 = fStack_110;
        }
        fVar59 = fRam0000000146856008;
        fVar75 = fRam0000000146856004;
        fVar74 = _DAT_146856000;
        fVar48 = fVar48 * 0.0;
        fVar58 = fVar58 * fVar46;
        fVar63 = fVar63 * fVar45;
        fVar70 = fVar70 * fVar38;
        fVar73 = *(float *)(lVar23 + 0x210);
        fVar38 = *(float *)(lVar23 + 0x214);
        fVar45 = *(float *)(lVar23 + 0x218);
        fVar46 = *(float *)(lVar23 + 0x21c);
        auVar30._4_4_ = fVar63;
        auVar30._0_4_ = fVar70;
        auVar30._8_4_ = fVar58;
        auVar30._12_4_ = fVar48;
        auVar39 = *(undefined1 (*) [16])(lVar23 + 0x230);
        fVar61 = auVar39._0_4_;
        fVar69 = auVar39._4_4_;
        fVar71 = auVar39._8_4_;
        fVar72 = auVar39._12_4_;
        auVar39 = minps(auVar30,auVar39);
        auVar31._4_4_ = -(uint)(auVar39._4_4_ < fRam00000001468560d4);
        auVar31._0_4_ = -(uint)(auVar39._0_4_ < _DAT_1468560d0);
        auVar31._8_4_ = -(uint)(auVar39._8_4_ < fRam00000001468560d8);
        auVar31._12_4_ = -(uint)(auVar39._12_4_ < fRam00000001468560dc);
        iVar17 = movmskps(uVar18,auVar31);
        if (iVar17 == 0) {
          fVar79 = fVar66 * fVar61;
          fVar47 = fVar68 * fVar69;
          fVar49 = fVar77 * fVar71;
          fVar62 = fVar62 * fVar72;
          local_108 = fVar73 * fVar84 * _DAT_146856090 + fVar83 * fVar46 +
                      fVar38 * fVar85 * _DAT_146856080 + fVar45 * fVar57 * _DAT_146856070;
          fStack_104 = fVar73 * fVar85 * fRam0000000146856094 + fVar57 * fVar46 +
                       fVar38 * fVar84 * fRam0000000146856084 +
                       fVar45 * fVar83 * fRam0000000146856074;
          fStack_100 = fVar73 * fVar57 * fRam0000000146856098 + fVar85 * fVar46 +
                       fVar38 * fVar83 * fRam0000000146856088 +
                       fVar45 * fVar84 * fRam0000000146856078;
          fStack_fc = fVar73 * fVar83 * fRam000000014685609c + fVar84 * fVar46 +
                      fVar38 * fVar57 * fRam000000014685608c +
                      fVar45 * fVar85 * fRam000000014685607c;
          fVar74 = fVar49 * fVar38 - fVar47 * fVar45;
          fVar75 = fVar79 * fVar45 - fVar49 * fVar73;
          fVar59 = fVar47 * fVar73 - fVar79 * fVar38;
          fVar64 = fVar62 * fVar46 - fVar62 * fVar46;
          fVar74 = fVar74 + fVar74;
          fVar75 = fVar75 + fVar75;
          fVar59 = fVar59 + fVar59;
          fVar64 = fVar64 + fVar64;
          local_f8._4_4_ =
               (fVar74 * fVar45 - fVar59 * fVar73) + fVar75 * fVar46 + fVar47 +
               *(float *)(lVar23 + 0x224);
          local_f8._0_4_ =
               (fVar59 * fVar38 - fVar75 * fVar45) + fVar74 * fVar46 + fVar79 +
               *(float *)(lVar23 + 0x220);
          fStack_f0 = (fVar75 * fVar73 - fVar74 * fVar38) + fVar59 * fVar46 + fVar49 +
                      *(float *)(lVar23 + 0x228);
          fStack_ec = (fVar64 * fVar46 - fVar64 * fVar46) + fVar64 * fVar46 + fVar62 +
                      *(float *)(lVar23 + 0x22c);
        }
        else {
          fVar47 = fVar38 + fVar38;
          fVar49 = fVar45 + fVar45;
          fVar52 = fVar73 * (fVar73 + fVar73);
          fVar50 = fVar46 * (fVar73 + fVar73);
          fVar62 = *(float *)(lVar23 + 0x220);
          fVar64 = *(float *)(lVar23 + 0x224);
          fVar79 = *(float *)(lVar23 + 0x228);
          fVar80 = (fVar46 * fVar49 + fVar73 * fVar47) * fVar61;
          fVar81 = (fVar50 + fVar38 * fVar49) * fVar69;
          fVar82 = (fVar46 * fVar47 + fVar73 * fVar49) * fVar71;
          fVar53 = fVar69 * (fVar73 * fVar47 - fVar46 * fVar49);
          fVar55 = fVar71 * (fVar38 * fVar49 - fVar50);
          fVar60 = fVar61 * (fVar73 * fVar49 - fVar46 * fVar47);
          fVar50 = fVar57 + fVar57;
          fVar46 = fVar85 + fVar85;
          fVar73 = (float)((uint)((_DAT_146856000 - (fVar45 * fVar49 + fVar38 * fVar47)) * fVar61) &
                          _DAT_146856010);
          fVar45 = (float)((uint)((fRam0000000146856004 - (fVar45 * fVar49 + fVar52)) * fVar69) &
                          uRam0000000146856014);
          fVar47 = (float)((uint)((fRam0000000146856008 - (fVar38 * fVar47 + fVar52)) * fVar71) &
                          uRam0000000146856018);
          fVar52 = (float)((uint)((fRam000000014685600c - (fVar52 + fVar52)) * fVar72) &
                          uRam000000014685601c);
          fVar51 = fVar83 * (fVar83 + fVar83);
          fVar38 = (fVar83 + fVar83) * fVar84;
          fVar67 = (fVar46 * fVar84 + fVar50 * fVar83) * fVar70;
          fVar76 = (fVar38 + fVar46 * fVar57) * fVar63;
          fVar78 = (fVar50 * fVar84 + fVar46 * fVar83) * fVar58;
          fVar54 = fVar63 * (fVar50 * fVar83 - fVar46 * fVar84);
          fVar56 = fVar58 * (fVar46 * fVar57 - fVar38);
          fVar65 = fVar70 * (fVar46 * fVar83 - fVar50 * fVar84);
          fVar38 = (float)((uint)((_DAT_146856000 - (fVar85 * fVar46 + fVar57 * fVar50)) * fVar70) &
                          _DAT_146856010);
          fVar46 = (float)((uint)((fRam0000000146856004 - (fVar85 * fVar46 + fVar51)) * fVar63) &
                          uRam0000000146856014);
          fVar49 = (float)((uint)((fRam0000000146856008 - (fVar57 * fVar50 + fVar51)) * fVar58) &
                          uRam0000000146856018);
          fVar50 = (float)((uint)((fRam000000014685600c - (fVar51 + fVar51)) * fVar48) &
                          uRam000000014685601c);
          local_148 = fVar67 * fVar53 + fVar38 * fVar73 + fVar65 * fVar82 + fVar50 * fVar62;
          fStack_144 = fVar67 * fVar45 + fVar38 * fVar80 + fVar65 * fVar55 + fVar50 * fVar64;
          fStack_140 = fVar67 * fVar81 + fVar38 * fVar60 + fVar65 * fVar47 + fVar50 * fVar79;
          fStack_13c = fVar67 * fVar52 + fVar38 * fVar52 + fVar65 * fVar52 +
                       fVar50 * fRam000000014685600c;
          auStack_134 = (undefined1  [4])
                        (fVar46 * fVar45 + fVar54 * fVar80 + fVar76 * fVar55 + fVar50 * fVar64);
          local_138 = (undefined1  [4])
                      (fVar46 * fVar53 + fVar54 * fVar73 + fVar76 * fVar82 + fVar50 * fVar62);
          uStack_130._0_4_ = fVar46 * fVar81 + fVar54 * fVar60 + fVar76 * fVar47 + fVar50 * fVar79;
          uStack_130._4_4_ =
               fVar46 * fVar52 + fVar54 * fVar52 + fVar76 * fVar52 + fVar50 * fRam000000014685600c;
          local_128 = fVar56 * fVar53 + fVar78 * fVar73 + fVar49 * fVar82 + fVar50 * fVar62;
          fStack_124 = fVar56 * fVar45 + fVar78 * fVar80 + fVar49 * fVar55 + fVar50 * fVar64;
          fStack_120 = fVar56 * fVar81 + fVar78 * fVar60 + fVar49 * fVar47 + fVar50 * fVar79;
          fStack_11c = fVar56 * fVar52 + fVar78 * fVar52 + fVar49 * fVar52 +
                       fVar50 * fRam000000014685600c;
          local_118 = fVar68 * fVar53 + fVar66 * fVar73 + fVar77 * fVar82 +
                      fRam000000014685600c * fVar62;
          fStack_114 = fVar68 * fVar45 + fVar66 * fVar80 + fVar77 * fVar55 +
                       fRam000000014685600c * fVar64;
          fStack_110 = fVar68 * fVar81 + fVar66 * fVar60 + fVar77 * fVar47 +
                       fRam000000014685600c * fVar79;
          fStack_10c = fVar68 * fVar52 + fVar66 * fVar52 + fVar77 * fVar52 +
                       fRam000000014685600c * fRam000000014685600c;
          FMatrix::RemoveScaling(&local_148);
          fVar62 = (float)(-(uint)((float)local_1f8 <= fVar70 * fVar61) &
                           (_DAT_1468560c0 ^ (uint)fVar74) ^ _DAT_1468560c0);
          fVar38 = (float)(-(uint)(local_1f8._4_4_ <= fVar63 * fVar69) &
                           (uRam00000001468560c4 ^ (uint)fVar75) ^ uRam00000001468560c4);
          fVar45 = (float)(-(uint)((float)uStack_1f0 <= fVar58 * fVar71) &
                           (uRam00000001468560c8 ^ (uint)fVar59) ^ uRam00000001468560c8);
          local_148 = local_148 * fVar62;
          fStack_144 = fStack_144 * fVar62;
          fStack_140 = fStack_140 * fVar62;
          fVar62 = (float)auStack_134 * fVar38;
          fVar73 = (float)local_138 * fVar38;
          uStack_130._0_4_ = (float)uStack_130 * fVar38;
          auStack_134 = (undefined1  [4])fVar62;
          fStack_120 = fStack_120 * fVar45;
          local_128 = local_128 * fVar45;
          fStack_124 = fStack_124 * fVar45;
          local_138 = (undefined1  [4])fVar73;
          FQuat::FQuat(local_1e8,&local_148);
          local_248 = 0x322bcc77;
          auVar41._0_4_ = (float)local_1e8._0_4_ * (float)local_1e8._0_4_ + fStack_1e0 * fStack_1e0;
          auVar41._4_4_ = (float)local_1e8._4_4_ * (float)local_1e8._4_4_ + fStack_1dc * fStack_1dc;
          auVar41._8_4_ = fStack_1e0 * fStack_1e0 + (float)local_1e8._0_4_ * (float)local_1e8._0_4_;
          auVar41._12_4_ = fStack_1dc * fStack_1dc + (float)local_1e8._4_4_ * (float)local_1e8._4_4_
          ;
          fVar46 = auVar41._4_4_ + auVar41._0_4_;
          fVar74 = auVar41._8_4_ + auVar41._4_4_;
          fVar75 = auVar41._12_4_ + auVar41._8_4_;
          fVar59 = auVar41._0_4_ + auVar41._12_4_;
          auVar7._4_4_ = fVar74;
          auVar7._0_4_ = fVar46;
          auVar7._8_4_ = fVar75;
          auVar7._12_4_ = fVar59;
          auVar39 = rsqrtps(auVar41,auVar7);
          fVar62 = auVar39._0_4_;
          fVar73 = auVar39._4_4_;
          fVar38 = auVar39._8_4_;
          fVar45 = auVar39._12_4_;
          fVar62 = (_DAT_1468560b0 - fVar62 * fVar62 * fVar46 * _DAT_1468560b0) * fVar62 + fVar62;
          fVar73 = (fRam00000001468560b4 - fVar73 * fVar73 * fVar74 * fRam00000001468560b4) * fVar73
                   + fVar73;
          fVar38 = (fRam00000001468560b8 - fVar38 * fVar38 * fVar75 * fRam00000001468560b8) * fVar38
                   + fVar38;
          fVar45 = (fRam00000001468560bc - fVar45 * fVar45 * fVar59 * fRam00000001468560bc) * fVar45
                   + fVar45;
          local_f8._4_4_ = fStack_114;
          local_f8._0_4_ = local_118;
          fStack_f0 = fStack_110;
          local_108 = (float)(((uint)(((_DAT_1468560b0 - fVar62 * fVar62 * fVar46 * _DAT_1468560b0)
                                       * fVar62 + fVar62) * (float)local_1e8._0_4_) ^ _DAT_1468560a0
                              ) & -(uint)(1e-08 <= fVar46) ^ _DAT_1468560a0);
          fStack_104 = (float)(((uint)(((fRam00000001468560b4 -
                                        fVar73 * fVar73 * fVar74 * fRam00000001468560b4) * fVar73 +
                                       fVar73) * (float)local_1e8._4_4_) ^ uRam00000001468560a4) &
                               -(uint)(1e-08 <= fVar74) ^ uRam00000001468560a4);
          fStack_100 = (float)(((uint)(((fRam00000001468560b8 -
                                        fVar38 * fVar38 * fVar75 * fRam00000001468560b8) * fVar38 +
                                       fVar38) * fStack_1e0) ^ uRam00000001468560a8) &
                               -(uint)(1e-08 <= fVar75) ^ uRam00000001468560a8);
          fStack_fc = (float)(((uint)(((fRam00000001468560bc -
                                       fVar45 * fVar45 * fVar59 * fRam00000001468560bc) * fVar45 +
                                      fVar45) * fStack_1dc) ^ uRam00000001468560ac) &
                              -(uint)(1e-08 <= fVar59) ^ uRam00000001468560ac);
          fStack_ec = 0.0;
        }
        fStack_dc = fVar48 * fVar72;
        fStack_e0 = fVar58 * fVar71;
        fStack_e4 = fVar63 * fVar69;
        local_e8 = fVar70 * fVar61;
        U2PTransform(local_188,&local_108);
        FUN_14062e090(local_188);
        (**(code **)(*plVar20 + 0xa8))(plVar20,local_188,0);
        iVar17 = (**(code **)(*plVar20 + 200))(plVar20);
        if (1 < iVar17) {
          local_1d8 = 0;
          local_1d0 = 0;
          uVar18 = (**(code **)(*plVar20 + 200))(plVar20);
          TArray<unsigned___int64,FDefaultAllocator>::SetNum(&local_1d8,uVar18,0);
          lVar4 = local_1d8;
          lVar24 = *param_1;
          if (1e-08 < ABS(*(float *)(lVar24 + 0x230))) {
            fVar70 = 1.0 / *(float *)(lVar24 + 0x230);
          }
          else {
            fVar70 = 0.0;
          }
          if (1e-08 < ABS(*(float *)(lVar24 + 0x234))) {
            fVar63 = 1.0 / *(float *)(lVar24 + 0x234);
          }
          else {
            fVar63 = 0.0;
          }
          if (1e-08 < ABS(*(float *)(lVar24 + 0x238))) {
            fVar58 = 1.0 / *(float *)(lVar24 + 0x238);
          }
          else {
            fVar58 = 0.0;
          }
          auVar32._4_4_ =
               -(uint)(fRam0000000146856054 < (float)((uint)fVar63 & uRam0000000146856064));
          auVar32._0_4_ = -(uint)(_DAT_146856050 < (float)((uint)fVar70 & _DAT_146856060));
          auVar32._8_4_ =
               -(uint)(fRam0000000146856058 < (float)((uint)fVar58 & uRam0000000146856068));
          auVar32._12_4_ = -(uint)(fRam000000014685605c < 0.0);
          iVar17 = movmskps((int)lVar24,auVar32);
          if (iVar17 == 0) {
            local_1f8 = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
            uStack_1f0 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
            local_1a8 = _DAT_1468b5b90;
            fStack_1a4 = fRam00000001468b5b94;
            fStack_1a0 = fRam00000001468b5b98;
            fStack_19c = fRam00000001468b5b9c;
            fVar83 = _DAT_1468b5b70;
            fVar57 = fRam00000001468b5b74;
            fVar85 = fRam00000001468b5b78;
            fVar84 = fRam00000001468b5b7c;
          }
          else {
            fVar83 = fVar83 * _DAT_146856040;
            fVar57 = fVar57 * fRam0000000146856044;
            fVar85 = fVar85 * fRam0000000146856048;
            fVar84 = fVar84 * fRam000000014685604c;
            auVar5._4_4_ = fVar63;
            auVar5._0_4_ = fVar70;
            auVar5._8_4_ = fVar58;
            auVar5._12_4_ = 0;
            auVar39 = rcpps(ZEXT816(0),auVar5);
            fVar62 = auVar39._0_4_;
            fVar61 = auVar39._4_4_;
            fVar69 = auVar39._8_4_;
            fVar71 = auVar39._12_4_;
            fVar62 = (fVar62 + fVar62) - fVar62 * fVar62 * fVar70;
            fVar61 = (fVar61 + fVar61) - fVar61 * fVar61 * fVar63;
            fVar69 = (fVar69 + fVar69) - fVar69 * fVar69 * fVar58;
            fVar71 = (fVar71 + fVar71) - fVar71 * fVar71 * 0.0;
            fVar62 = (fVar62 + fVar62) - fVar62 * fVar62 * fVar70;
            fVar61 = (fVar61 + fVar61) - fVar61 * fVar61 * fVar63;
            fVar69 = (fVar69 + fVar69) - fVar69 * fVar69 * fVar58;
            fVar71 = (fVar71 + fVar71) - fVar71 * fVar71 * 0.0;
            local_1a8 = (float)(((uint)fVar62 &
                                 -(uint)((float)((uint)fVar70 & _DAT_146856060) <= _DAT_146856050) ^
                                (uint)fVar62) & _DAT_146856010);
            fStack_1a4 = (float)(((uint)fVar61 &
                                  -(uint)((float)((uint)fVar63 & uRam0000000146856064) <=
                                         fRam0000000146856054) ^ (uint)fVar61) &
                                uRam0000000146856014);
            fStack_1a0 = (float)(((uint)fVar69 &
                                  -(uint)((float)((uint)fVar58 & uRam0000000146856068) <=
                                         fRam0000000146856058) ^ (uint)fVar69) &
                                uRam0000000146856018);
            fStack_19c = (float)(((uint)fVar71 & -(uint)(0.0 <= fRam000000014685605c) ^ (uint)fVar71
                                 ) & uRam000000014685601c);
            fVar66 = local_1a8 * fVar66;
            fVar68 = fStack_1a4 * fVar68;
            fVar77 = fStack_1a0 * fVar77;
            fVar61 = fStack_19c * 0.0;
            fVar70 = fVar77 * fVar57 - fVar68 * fVar85;
            fVar63 = fVar66 * fVar85 - fVar77 * fVar83;
            fVar58 = fVar68 * fVar83 - fVar66 * fVar57;
            fVar62 = fVar61 * fVar84 - fVar61 * fVar84;
            fVar70 = fVar70 + fVar70;
            fVar63 = fVar63 + fVar63;
            fVar58 = fVar58 + fVar58;
            fVar62 = fVar62 + fVar62;
            local_1f8 = CONCAT44((uint)(0.0 - ((fVar70 * fVar85 - fVar58 * fVar83) +
                                              fVar84 * fVar63 + fVar68)) & uRam0000000146856014,
                                 (uint)(0.0 - ((fVar58 * fVar57 - fVar63 * fVar85) +
                                              fVar84 * fVar70 + fVar66)) & _DAT_146856010);
            uStack_1f0 = CONCAT44((uint)(0.0 - ((fVar62 * fVar84 - fVar62 * fVar84) +
                                               fVar84 * fVar62 + fVar61)) & uRam000000014685601c,
                                  (uint)(0.0 - ((fVar63 * fVar83 - fVar70 * fVar57) +
                                               fVar84 * fVar58 + fVar77)) & uRam0000000146856018);
          }
          iVar17 = (**(code **)(*plVar20 + 0xd0))(plVar20,local_1d8,local_1d0 & 0xffffffff,0);
          if (0 < iVar17) {
            do {
              plVar20 = *(longlong **)(lVar4 + lVar26 * 8);
              piVar3 = (int *)plVar20[2];
              if ((piVar3 == (int *)0x0) || (*piVar3 != 7)) {
                plVar25 = (longlong *)0x0;
              }
              else {
                plVar25 = *(longlong **)(piVar3 + 2);
              }
              if ((int)plVar25[2] != *(int *)param_1[1]) {
                uVar22 = (**(code **)(*plVar25 + 8))(plVar25,&local_1d8);
                cVar16 = FUN_14058c1e0(uVar22,*param_1);
                fVar69 = fRam0000000146856008;
                fVar61 = fRam0000000146856004;
                fVar62 = _DAT_146856000;
                fVar58 = DAT_1464aa790;
                fVar63 = DAT_1464aa788._4_4_;
                fVar70 = (float)DAT_1464aa788;
                if (cVar16 != '\0') {
                  lVar23 = (longlong)(int)plVar25[2] + 1;
                  lVar24 = *(longlong *)(lVar21 + 0x148);
                  pfVar2 = (float *)(lVar24 + 0x10 + lVar23 * 0x30);
                  pfVar1 = (float *)(lVar24 + lVar23 * 0x30);
                  auVar42._0_4_ = (float)((uint)(float)DAT_1464aa788 & _DAT_146856060);
                  auVar42._4_4_ = (float)((uint)DAT_1464aa788._4_4_ & uRam0000000146856064);
                  auVar42._8_4_ = (float)((uint)DAT_1464aa790 & uRam0000000146856068);
                  auVar42._12_4_ = 0;
                  auVar33._4_4_ = -(uint)(fRam0000000146856054 < auVar42._4_4_);
                  auVar33._0_4_ = -(uint)(_DAT_146856050 < auVar42._0_4_);
                  auVar33._8_4_ = -(uint)(fRam0000000146856058 < auVar42._8_4_);
                  auVar33._12_4_ = -(uint)(fRam000000014685605c < 0.0);
                  iVar19 = movmskps((int)lVar24,auVar33);
                  fVar71 = _DAT_1468b5b70;
                  fVar72 = fRam00000001468b5b74;
                  fVar73 = fRam00000001468b5b78;
                  fVar38 = fRam00000001468b5b7c;
                  fVar45 = _DAT_1468b5b90;
                  fVar46 = fRam00000001468b5b94;
                  fVar48 = fRam00000001468b5b98;
                  fVar74 = fRam00000001468b5b9c;
                  fVar75 = _DAT_1468b5b80;
                  fVar59 = fRam00000001468b5b84;
                  fVar64 = fRam00000001468b5b88;
                  fVar66 = fRam00000001468b5b8c;
                  if (iVar19 != 0) {
                    fVar71 = *pfVar1 * _DAT_146856040;
                    fVar72 = pfVar1[1] * fRam0000000146856044;
                    fVar73 = pfVar1[2] * fRam0000000146856048;
                    fVar38 = pfVar1[3] * fRam000000014685604c;
                    auVar12._4_4_ = DAT_1464aa788._4_4_;
                    auVar12._0_4_ = (float)DAT_1464aa788;
                    auVar12._8_4_ = DAT_1464aa790;
                    auVar12._12_4_ = 0;
                    auVar39 = rcpps(auVar42,auVar12);
                    fVar45 = auVar39._0_4_;
                    fVar46 = auVar39._4_4_;
                    fVar48 = auVar39._8_4_;
                    fVar74 = auVar39._12_4_;
                    fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * (float)DAT_1464aa788;
                    fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * DAT_1464aa788._4_4_;
                    fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * DAT_1464aa790;
                    fVar74 = (fVar74 + fVar74) - fVar74 * fVar74 * 0.0;
                    fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * (float)DAT_1464aa788;
                    fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * DAT_1464aa788._4_4_;
                    fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * DAT_1464aa790;
                    fVar74 = (fVar74 + fVar74) - fVar74 * fVar74 * 0.0;
                    fVar45 = (float)((-(uint)((float)((uint)(float)DAT_1464aa788 & _DAT_146856060)
                                             <= _DAT_146856050) & (uint)fVar45 ^ (uint)fVar45) &
                                    _DAT_146856010);
                    fVar46 = (float)((-(uint)((float)((uint)DAT_1464aa788._4_4_ &
                                                     uRam0000000146856064) <= fRam0000000146856054)
                                      & (uint)fVar46 ^ (uint)fVar46) & uRam0000000146856014);
                    fVar48 = (float)((-(uint)((float)((uint)DAT_1464aa790 & uRam0000000146856068) <=
                                             fRam0000000146856058) & (uint)fVar48 ^ (uint)fVar48) &
                                    uRam0000000146856018);
                    fVar74 = (float)((-(uint)(0.0 <= fRam000000014685605c) & (uint)fVar74 ^
                                     (uint)fVar74) & uRam000000014685601c);
                    fVar75 = *pfVar2 * fVar45;
                    fVar59 = pfVar2[1] * fVar46;
                    fVar79 = pfVar2[2] * fVar48;
                    fVar47 = fVar74 * 0.0;
                    fVar64 = fVar79 * fVar72 - fVar59 * fVar73;
                    fVar66 = fVar75 * fVar73 - fVar79 * fVar71;
                    fVar68 = fVar59 * fVar71 - fVar75 * fVar72;
                    fVar77 = fVar47 * fVar38 - fVar47 * fVar38;
                    fVar64 = fVar64 + fVar64;
                    fVar66 = fVar66 + fVar66;
                    fVar68 = fVar68 + fVar68;
                    fVar77 = fVar77 + fVar77;
                    fVar75 = (float)((uint)(0.0 - ((fVar68 * fVar72 - fVar66 * fVar73) +
                                                  fVar38 * fVar64 + fVar75)) & _DAT_146856010);
                    fVar59 = (float)((uint)(0.0 - ((fVar64 * fVar73 - fVar68 * fVar71) +
                                                  fVar38 * fVar66 + fVar59)) & uRam0000000146856014)
                    ;
                    fVar64 = (float)((uint)(0.0 - ((fVar66 * fVar71 - fVar64 * fVar72) +
                                                  fVar38 * fVar68 + fVar79)) & uRam0000000146856018)
                    ;
                    fVar66 = (float)((uint)(0.0 - ((fVar77 * fVar38 - fVar77 * fVar38) +
                                                  fVar38 * fVar77 + fVar47)) & uRam000000014685601c)
                    ;
                  }
                  local_1c8 = _DAT_1468560d0;
                  fStack_1c4 = fRam00000001468560d4;
                  fStack_1c0 = fRam00000001468560d8;
                  fStack_1bc = fRam00000001468560dc;
                  iVar19 = *(int *)(*param_1 + 0x770);
                  lVar24 = *(longlong *)(*param_1 + 0x728 + (longlong)iVar19 * 0x10);
                  pfVar1 = (float *)(lVar24 + 0x10 + lVar23 * 0x30);
                  fVar68 = *pfVar1;
                  fVar77 = pfVar1[1];
                  fVar79 = pfVar1[2];
                  pfVar1 = (float *)(lVar24 + lVar23 * 0x30);
                  fVar47 = *pfVar1;
                  fVar49 = pfVar1[1];
                  fVar52 = pfVar1[2];
                  fVar50 = pfVar1[3];
                  auVar34._4_4_ = fVar46;
                  auVar34._0_4_ = fVar45;
                  auVar34._8_4_ = fVar48;
                  auVar34._12_4_ = fVar74;
                  auVar13._4_4_ = DAT_1464aa788._4_4_;
                  auVar13._0_4_ = (float)DAT_1464aa788;
                  auVar13._8_4_ = DAT_1464aa790;
                  auVar13._12_4_ = 0;
                  auVar39 = minps(auVar34,auVar13);
                  auVar35._4_4_ = -(uint)(auVar39._4_4_ < fRam00000001468560d4);
                  auVar35._0_4_ = -(uint)(auVar39._0_4_ < _DAT_1468560d0);
                  auVar35._8_4_ = -(uint)(auVar39._8_4_ < fRam00000001468560d8);
                  auVar35._12_4_ = -(uint)(auVar39._12_4_ < fRam00000001468560dc);
                  iVar19 = movmskps(iVar19 * 2,auVar35);
                  local_198 = CONCAT44(fRam00000001468560b4,_DAT_1468560b0);
                  uStack_190 = CONCAT44(fRam00000001468560bc,fRam00000001468560b8);
                  if (iVar19 == 0) {
                    fVar75 = (float)DAT_1464aa788 * fVar75;
                    fVar59 = DAT_1464aa788._4_4_ * fVar59;
                    fVar64 = DAT_1464aa790 * fVar64;
                    fVar66 = fVar66 * 0.0;
                    fVar51 = fVar47 * fVar38 * _DAT_146856090 + fVar71 * fVar50 +
                             fVar49 * fVar73 * _DAT_146856080 + fVar52 * fVar72 * _DAT_146856070;
                    fVar53 = fVar47 * fVar73 * fRam0000000146856094 + fVar72 * fVar50 +
                             fVar49 * fVar38 * fRam0000000146856084 +
                             fVar52 * fVar71 * fRam0000000146856074;
                    fVar54 = fVar47 * fVar72 * fRam0000000146856098 + fVar73 * fVar50 +
                             fVar49 * fVar71 * fRam0000000146856088 +
                             fVar52 * fVar38 * fRam0000000146856078;
                    fVar72 = fVar47 * fVar71 * fRam000000014685609c + fVar38 * fVar50 +
                             fVar49 * fVar72 * fRam000000014685608c +
                             fVar52 * fVar73 * fRam000000014685607c;
                    fVar62 = fVar64 * fVar49 - fVar59 * fVar52;
                    fVar61 = fVar75 * fVar52 - fVar64 * fVar47;
                    fVar69 = fVar59 * fVar47 - fVar75 * fVar49;
                    fVar71 = fVar66 * fVar50 - fVar66 * fVar50;
                    fVar62 = fVar62 + fVar62;
                    fVar61 = fVar61 + fVar61;
                    fVar69 = fVar69 + fVar69;
                    fVar71 = fVar71 + fVar71;
                    fVar68 = (fVar69 * fVar49 - fVar61 * fVar52) + fVar62 * fVar50 + fVar75 + fVar68
                    ;
                    fVar77 = (fVar62 * fVar52 - fVar69 * fVar47) + fVar61 * fVar50 + fVar59 + fVar77
                    ;
                    fVar79 = (fVar61 * fVar47 - fVar62 * fVar49) + fVar69 * fVar50 + fVar64 + fVar79
                    ;
                    fVar62 = (fVar71 * fVar50 - fVar71 * fVar50) + fVar71 * fVar50 + fVar66 + 0.0;
                    uVar18 = 0;
                  }
                  else {
                    fVar51 = fVar49 + fVar49;
                    fVar53 = fVar52 + fVar52;
                    fVar54 = fVar47 * (fVar47 + fVar47);
                    fVar66 = (fVar47 + fVar47) * fVar50;
                    fVar88 = (float)DAT_1464aa788 * fVar45;
                    fVar89 = DAT_1464aa788._4_4_ * fVar46;
                    fVar86 = DAT_1464aa790 * fVar48;
                    fVar81 = (fVar53 * fVar50 + fVar51 * fVar47) * (float)DAT_1464aa788;
                    fVar82 = (fVar66 + fVar53 * fVar49) * DAT_1464aa788._4_4_;
                    fVar87 = (fVar51 * fVar50 + fVar53 * fVar47) * DAT_1464aa790;
                    fVar55 = DAT_1464aa788._4_4_ * (fVar51 * fVar47 - fVar53 * fVar50);
                    fVar56 = DAT_1464aa790 * (fVar53 * fVar49 - fVar66);
                    fVar65 = (float)DAT_1464aa788 * (fVar53 * fVar47 - fVar51 * fVar50);
                    fVar66 = (float)((uint)((_DAT_146856000 - (fVar52 * fVar53 + fVar49 * fVar51)) *
                                           (float)DAT_1464aa788) & _DAT_146856010);
                    fVar47 = (float)((uint)((fRam0000000146856004 - (fVar52 * fVar53 + fVar54)) *
                                           DAT_1464aa788._4_4_) & uRam0000000146856014);
                    fVar52 = (float)((uint)((fRam0000000146856008 - (fVar49 * fVar51 + fVar54)) *
                                           DAT_1464aa790) & uRam0000000146856018);
                    fVar51 = (float)((uint)((fRam000000014685600c - (fVar54 + fVar54)) * 0.0) &
                                    uRam000000014685601c);
                    fVar49 = fVar72 + fVar72;
                    fVar50 = fVar73 + fVar73;
                    fVar53 = fVar71 * (fVar71 + fVar71);
                    fVar60 = fVar38 * (fVar71 + fVar71);
                    fVar76 = (fVar38 * fVar50 + fVar49 * fVar71) * fVar45;
                    fVar78 = (fVar60 + fVar50 * fVar72) * fVar46;
                    fVar80 = (fVar38 * fVar49 + fVar50 * fVar71) * fVar48;
                    fVar54 = fVar46 * (fVar49 * fVar71 - fVar38 * fVar50);
                    fVar60 = fVar48 * (fVar50 * fVar72 - fVar60);
                    fVar67 = fVar45 * (fVar50 * fVar71 - fVar38 * fVar49);
                    fVar71 = (float)((uint)((_DAT_146856000 - (fVar73 * fVar50 + fVar72 * fVar49)) *
                                           fVar45) & _DAT_146856010);
                    fVar73 = (float)((uint)((fRam0000000146856004 - (fVar73 * fVar50 + fVar53)) *
                                           fVar46) & uRam0000000146856014);
                    fVar72 = (float)((uint)((fRam0000000146856008 - (fVar72 * fVar49 + fVar53)) *
                                           fVar48) & uRam0000000146856018);
                    fVar38 = (float)((uint)((fRam000000014685600c - (fVar53 + fVar53)) * fVar74) &
                                    uRam000000014685601c);
                    local_238 = fVar76 * fVar55 + fVar71 * fVar66 + fVar67 * fVar87 +
                                fVar38 * fVar68;
                    fStack_234 = fVar76 * fVar47 + fVar71 * fVar81 + fVar67 * fVar56 +
                                 fVar38 * fVar77;
                    fStack_230 = fVar76 * fVar82 + fVar71 * fVar65 + fVar67 * fVar52 +
                                 fVar38 * fVar79;
                    fStack_22c = fVar76 * fVar51 + fVar71 * fVar51 + fVar67 * fVar51 +
                                 fVar38 * fRam000000014685600c;
                    local_228 = fVar73 * fVar55 + fVar54 * fVar66 + fVar78 * fVar87 +
                                fVar38 * fVar68;
                    fStack_224 = fVar73 * fVar47 + fVar54 * fVar81 + fVar78 * fVar56 +
                                 fVar38 * fVar77;
                    fStack_220 = fVar73 * fVar82 + fVar54 * fVar65 + fVar78 * fVar52 +
                                 fVar38 * fVar79;
                    fStack_21c = fVar73 * fVar51 + fVar54 * fVar51 + fVar78 * fVar51 +
                                 fVar38 * fRam000000014685600c;
                    local_218 = fVar60 * fVar55 + fVar80 * fVar66 + fVar72 * fVar87 +
                                fVar38 * fVar68;
                    fStack_214 = fVar60 * fVar47 + fVar80 * fVar81 + fVar72 * fVar56 +
                                 fVar38 * fVar77;
                    fStack_210 = fVar60 * fVar82 + fVar80 * fVar65 + fVar72 * fVar52 +
                                 fVar38 * fVar79;
                    fStack_20c = fVar60 * fVar51 + fVar80 * fVar51 + fVar72 * fVar51 +
                                 fVar38 * fRam000000014685600c;
                    local_208 = fVar59 * fVar55 + fVar75 * fVar66 + fVar64 * fVar87 +
                                fRam000000014685600c * fVar68;
                    fStack_204 = fVar59 * fVar47 + fVar75 * fVar81 + fVar64 * fVar56 +
                                 fRam000000014685600c * fVar77;
                    fStack_200 = fVar59 * fVar82 + fVar75 * fVar65 + fVar64 * fVar52 +
                                 fRam000000014685600c * fVar79;
                    fStack_1fc = fVar59 * fVar51 + fVar75 * fVar51 + fVar64 * fVar51 +
                                 fRam000000014685600c * fRam000000014685600c;
                    FMatrix::RemoveScaling(&local_238);
                    fVar62 = (float)(-(uint)(local_1c8 <= fVar88) & (_DAT_1468560c0 ^ (uint)fVar62)
                                    ^ _DAT_1468560c0);
                    fVar61 = (float)(-(uint)(fStack_1c4 <= fVar89) &
                                     (uRam00000001468560c4 ^ (uint)fVar61) ^ uRam00000001468560c4);
                    fVar69 = (float)(-(uint)(fStack_1c0 <= fVar86) &
                                     (uRam00000001468560c8 ^ (uint)fVar69) ^ uRam00000001468560c8);
                    local_238 = local_238 * fVar62;
                    fStack_234 = fStack_234 * fVar62;
                    fStack_230 = fStack_230 * fVar62;
                    fStack_224 = fStack_224 * fVar61;
                    fStack_220 = fStack_220 * fVar61;
                    local_228 = local_228 * fVar61;
                    fStack_214 = fStack_214 * fVar69;
                    fStack_210 = fStack_210 * fVar69;
                    local_218 = local_218 * fVar69;
                    uVar18 = FQuat::FQuat(&local_1b8,&local_238);
                    local_248 = 0x322bcc77;
                    auVar43._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
                    auVar43._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
                    auVar43._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
                    auVar43._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
                    fVar73 = auVar43._4_4_ + auVar43._0_4_;
                    fVar38 = auVar43._8_4_ + auVar43._4_4_;
                    fVar75 = auVar43._12_4_ + auVar43._8_4_;
                    fVar59 = auVar43._0_4_ + auVar43._12_4_;
                    auVar8._4_4_ = fVar38;
                    auVar8._0_4_ = fVar73;
                    auVar8._8_4_ = fVar75;
                    auVar8._12_4_ = fVar59;
                    auVar39 = rsqrtps(auVar43,auVar8);
                    fVar61 = auVar39._0_4_;
                    fVar69 = auVar39._4_4_;
                    fVar71 = auVar39._8_4_;
                    fVar72 = auVar39._12_4_;
                    fVar61 = ((float)local_198 - fVar61 * fVar61 * fVar73 * (float)local_198) *
                             fVar61 + fVar61;
                    fVar69 = (local_198._4_4_ - fVar69 * fVar69 * fVar38 * local_198._4_4_) * fVar69
                             + fVar69;
                    fVar71 = ((float)uStack_190 - fVar71 * fVar71 * fVar75 * (float)uStack_190) *
                             fVar71 + fVar71;
                    fVar72 = (uStack_190._4_4_ - fVar72 * fVar72 * fVar59 * uStack_190._4_4_) *
                             fVar72 + fVar72;
                    fVar62 = 0.0;
                    fVar51 = (float)(((uint)((((float)local_198 -
                                              fVar61 * fVar61 * fVar73 * (float)local_198) * fVar61
                                             + fVar61) * local_1b8) ^ _DAT_1468560a0) &
                                     -(uint)(1e-08 <= fVar73) ^ _DAT_1468560a0);
                    fVar53 = (float)(((uint)(((local_198._4_4_ -
                                              fVar69 * fVar69 * fVar38 * local_198._4_4_) * fVar69 +
                                             fVar69) * fStack_1b4) ^ uRam00000001468560a4) &
                                     -(uint)(1e-08 <= fVar38) ^ uRam00000001468560a4);
                    fVar54 = (float)(((uint)((((float)uStack_190 -
                                              fVar71 * fVar71 * fVar75 * (float)uStack_190) * fVar71
                                             + fVar71) * fStack_1b0) ^ uRam00000001468560a8) &
                                     -(uint)(1e-08 <= fVar75) ^ uRam00000001468560a8);
                    fVar72 = (float)(((uint)(((uStack_190._4_4_ -
                                              fVar72 * fVar72 * fVar59 * uStack_190._4_4_) * fVar72
                                             + fVar72) * fStack_1ac) ^ uRam00000001468560ac) &
                                     -(uint)(1e-08 <= fVar59) ^ uRam00000001468560ac);
                    fVar68 = local_208;
                    fVar77 = fStack_204;
                    fVar79 = fStack_200;
                    local_1b8 = fVar51;
                    fStack_1b4 = fVar53;
                    fStack_1b0 = fVar54;
                    fStack_1ac = fVar72;
                  }
                  fVar73 = fStack_19c;
                  fVar71 = fStack_1a0;
                  fVar69 = fStack_1a4;
                  fVar61 = local_1a8;
                  fVar74 = fVar74 * 0.0;
                  fVar58 = fVar58 * fVar48;
                  fVar63 = fVar63 * fVar46;
                  fVar70 = fVar70 * fVar45;
                  auVar14._4_4_ = fStack_1a4;
                  auVar14._0_4_ = local_1a8;
                  auVar14._8_4_ = fStack_1a0;
                  auVar14._12_4_ = fStack_19c;
                  local_148 = 0.0;
                  fStack_144 = 0.0;
                  fStack_140 = 0.0;
                  fStack_13c = fRam000000014685600c;
                  local_128 = (float)((uint)_DAT_146856000 & _DAT_146856010);
                  fStack_124 = (float)((uint)fRam0000000146856004 & uRam0000000146856014);
                  fStack_120 = (float)((uint)fRam0000000146856008 & uRam0000000146856018);
                  fStack_11c = (float)((uint)fRam000000014685600c & uRam000000014685601c);
                  auVar36._4_4_ = fVar63;
                  auVar36._0_4_ = fVar70;
                  auVar36._8_4_ = fVar58;
                  auVar36._12_4_ = fVar74;
                  _local_138 = ZEXT816(0);
                  auVar39 = minps(auVar36,auVar14);
                  auVar37._4_4_ = -(uint)(auVar39._4_4_ < fRam00000001468560d4);
                  auVar37._0_4_ = -(uint)(auVar39._0_4_ < _DAT_1468560d0);
                  auVar37._8_4_ = -(uint)(auVar39._8_4_ < fRam00000001468560d8);
                  auVar37._12_4_ = -(uint)(auVar39._12_4_ < fRam00000001468560dc);
                  iVar19 = movmskps(uVar18,auVar37);
                  local_1c8 = _DAT_1468560d0;
                  fStack_1c4 = fRam00000001468560d4;
                  fStack_1c0 = fRam00000001468560d8;
                  fStack_1bc = fRam00000001468560dc;
                  if (iVar19 == 0) {
                    fVar68 = fVar68 * local_1a8;
                    fVar77 = fVar77 * fStack_1a4;
                    fVar79 = fVar79 * fStack_1a0;
                    fVar62 = fVar62 * fStack_19c;
                    local_148 = fVar72 * fVar83 * _DAT_146856090 + fVar51 * fVar84 +
                                fVar54 * fVar57 * _DAT_146856080 + fVar53 * fVar85 * _DAT_146856070;
                    fStack_144 = fVar54 * fVar83 * fRam0000000146856094 + fVar53 * fVar84 +
                                 fVar72 * fVar57 * fRam0000000146856084 +
                                 fVar51 * fVar85 * fRam0000000146856074;
                    fStack_140 = fVar53 * fVar83 * fRam0000000146856098 + fVar54 * fVar84 +
                                 fVar51 * fVar57 * fRam0000000146856088 +
                                 fVar72 * fVar85 * fRam0000000146856078;
                    fStack_13c = fVar51 * fVar83 * fRam000000014685609c + fVar72 * fVar84 +
                                 fVar53 * fVar57 * fRam000000014685608c +
                                 fVar54 * fVar85 * fRam000000014685607c;
                    fVar72 = fVar79 * fVar57 - fVar77 * fVar85;
                    fVar38 = fVar68 * fVar85 - fVar79 * fVar83;
                    fVar45 = fVar77 * fVar83 - fVar68 * fVar57;
                    fVar46 = fVar62 * fVar84 - fVar62 * fVar84;
                    fVar72 = fVar72 + fVar72;
                    fVar38 = fVar38 + fVar38;
                    fVar45 = fVar45 + fVar45;
                    fVar46 = fVar46 + fVar46;
                    local_138 = (undefined1  [4])
                                ((fVar45 * fVar57 - fVar38 * fVar85) + fVar84 * fVar72 + fVar68 +
                                (float)local_1f8);
                    auStack_134 = (undefined1  [4])
                                  ((fVar72 * fVar85 - fVar45 * fVar83) + fVar84 * fVar38 + fVar77 +
                                  local_1f8._4_4_);
                    uStack_130._0_4_ =
                         (fVar38 * fVar83 - fVar72 * fVar57) + fVar84 * fVar45 + fVar79 +
                         (float)uStack_1f0;
                    uStack_130._4_4_ =
                         (fVar46 * fVar84 - fVar46 * fVar84) + fVar84 * fVar46 + fVar62 +
                         uStack_1f0._4_4_;
                  }
                  else {
                    fVar38 = fVar57 + fVar57;
                    fVar45 = fVar85 + fVar85;
                    fVar78 = fVar70 * local_1a8;
                    fVar80 = fVar63 * fStack_1a4;
                    fVar81 = fVar58 * fStack_1a0;
                    fVar75 = fVar83 * (fVar83 + fVar83);
                    fVar62 = fVar84 * (fVar83 + fVar83);
                    fVar65 = (fVar84 * fVar45 + fVar83 * fVar38) * local_1a8;
                    fVar67 = (fVar62 + fVar57 * fVar45) * fStack_1a4;
                    fVar76 = (fVar84 * fVar38 + fVar83 * fVar45) * fStack_1a0;
                    fVar66 = fStack_1a4 * (fVar83 * fVar38 - fVar84 * fVar45);
                    fVar49 = fStack_1a0 * (fVar57 * fVar45 - fVar62);
                    fVar50 = local_1a8 * (fVar83 * fVar45 - fVar84 * fVar38);
                    fVar48 = fVar53 + fVar53;
                    fVar59 = fVar54 + fVar54;
                    fVar64 = fVar51 * (fVar51 + fVar51);
                    fVar62 = (float)((uint)((_DAT_146856000 - (fVar85 * fVar45 + fVar57 * fVar38)) *
                                           local_1a8) & _DAT_146856010);
                    fVar45 = (float)((uint)((fRam0000000146856004 - (fVar85 * fVar45 + fVar75)) *
                                           fStack_1a4) & uRam0000000146856014);
                    fVar46 = (float)((uint)((fRam0000000146856008 - (fVar57 * fVar38 + fVar75)) *
                                           fStack_1a0) & uRam0000000146856018);
                    fVar75 = (float)((uint)((fRam000000014685600c - (fVar75 + fVar75)) * fStack_19c)
                                    & uRam000000014685601c);
                    fVar38 = (fVar51 + fVar51) * fVar72;
                    fVar55 = (fVar59 * fVar72 + fVar48 * fVar51) * fVar70;
                    fVar56 = (fVar38 + fVar59 * fVar53) * fVar63;
                    fVar60 = (fVar48 * fVar72 + fVar59 * fVar51) * fVar58;
                    fVar47 = fVar63 * (fVar48 * fVar51 - fVar59 * fVar72);
                    fVar52 = fVar58 * (fVar59 * fVar53 - fVar38);
                    fVar51 = fVar70 * (fVar59 * fVar51 - fVar48 * fVar72);
                    fVar72 = (float)((uint)((_DAT_146856000 - (fVar54 * fVar59 + fVar53 * fVar48)) *
                                           fVar70) & _DAT_146856010);
                    fVar38 = (float)((uint)((fRam0000000146856004 - (fVar54 * fVar59 + fVar64)) *
                                           fVar63) & uRam0000000146856014);
                    fVar48 = (float)((uint)((fRam0000000146856008 - (fVar53 * fVar48 + fVar64)) *
                                           fVar58) & uRam0000000146856018);
                    fVar59 = (float)((uint)((fRam000000014685600c - (fVar64 + fVar64)) * fVar74) &
                                    uRam000000014685601c);
                    local_238 = fVar55 * fVar66 + fVar72 * fVar62 + fVar51 * fVar76 +
                                fVar59 * (float)local_1f8;
                    fStack_234 = fVar55 * fVar45 + fVar72 * fVar65 + fVar51 * fVar49 +
                                 fVar59 * local_1f8._4_4_;
                    fStack_230 = fVar55 * fVar67 + fVar72 * fVar50 + fVar51 * fVar46 +
                                 fVar59 * (float)uStack_1f0;
                    fStack_22c = fVar55 * fVar75 + fVar72 * fVar75 + fVar51 * fVar75 +
                                 fVar59 * fRam000000014685600c;
                    local_228 = fVar38 * fVar66 + fVar47 * fVar62 + fVar56 * fVar76 +
                                fVar59 * (float)local_1f8;
                    fStack_224 = fVar38 * fVar45 + fVar47 * fVar65 + fVar56 * fVar49 +
                                 fVar59 * local_1f8._4_4_;
                    fStack_220 = fVar38 * fVar67 + fVar47 * fVar50 + fVar56 * fVar46 +
                                 fVar59 * (float)uStack_1f0;
                    fStack_21c = fVar38 * fVar75 + fVar47 * fVar75 + fVar56 * fVar75 +
                                 fVar59 * fRam000000014685600c;
                    local_218 = fVar52 * fVar66 + fVar60 * fVar62 + fVar48 * fVar76 +
                                fVar59 * (float)local_1f8;
                    fStack_214 = fVar52 * fVar45 + fVar60 * fVar65 + fVar48 * fVar49 +
                                 fVar59 * local_1f8._4_4_;
                    fStack_210 = fVar52 * fVar67 + fVar60 * fVar50 + fVar48 * fVar46 +
                                 fVar59 * (float)uStack_1f0;
                    fStack_20c = fVar52 * fVar75 + fVar60 * fVar75 + fVar48 * fVar75 +
                                 fVar59 * fRam000000014685600c;
                    local_208 = fVar77 * fVar66 + fVar68 * fVar62 + fVar79 * fVar76 +
                                fRam000000014685600c * (float)local_1f8;
                    fStack_204 = fVar77 * fVar45 + fVar68 * fVar65 + fVar79 * fVar49 +
                                 fRam000000014685600c * local_1f8._4_4_;
                    fStack_200 = fVar77 * fVar67 + fVar68 * fVar50 + fVar79 * fVar46 +
                                 fRam000000014685600c * (float)uStack_1f0;
                    fStack_1fc = fVar77 * fVar75 + fVar68 * fVar75 + fVar79 * fVar75 +
                                 fRam000000014685600c * fRam000000014685600c;
                    FMatrix::RemoveScaling(&local_238);
                    fVar62 = (float)((_DAT_1468560c0 ^ (uint)_DAT_146856000) &
                                     -(uint)(local_1c8 <= fVar78) ^ _DAT_1468560c0);
                    fVar72 = (float)((uRam00000001468560c4 ^ (uint)fRam0000000146856004) &
                                     -(uint)(fStack_1c4 <= fVar80) ^ uRam00000001468560c4);
                    fVar38 = (float)((uRam00000001468560c8 ^ (uint)fRam0000000146856008) &
                                     -(uint)(fStack_1c0 <= fVar81) ^ uRam00000001468560c8);
                    local_238 = local_238 * fVar62;
                    fStack_234 = fStack_234 * fVar62;
                    fStack_230 = fStack_230 * fVar62;
                    fStack_220 = fStack_220 * fVar72;
                    fStack_224 = fStack_224 * fVar72;
                    local_228 = local_228 * fVar72;
                    fStack_210 = fStack_210 * fVar38;
                    local_218 = local_218 * fVar38;
                    fStack_214 = fStack_214 * fVar38;
                    FQuat::FQuat(local_1e8,&local_238);
                    local_248 = 0x322bcc77;
                    auVar44._0_4_ =
                         (float)local_1e8._0_4_ * (float)local_1e8._0_4_ + fStack_1e0 * fStack_1e0;
                    auVar44._4_4_ =
                         (float)local_1e8._4_4_ * (float)local_1e8._4_4_ + fStack_1dc * fStack_1dc;
                    auVar44._8_4_ =
                         fStack_1e0 * fStack_1e0 + (float)local_1e8._0_4_ * (float)local_1e8._0_4_;
                    auVar44._12_4_ =
                         fStack_1dc * fStack_1dc + (float)local_1e8._4_4_ * (float)local_1e8._4_4_;
                    fVar46 = auVar44._4_4_ + auVar44._0_4_;
                    fVar48 = auVar44._8_4_ + auVar44._4_4_;
                    fVar75 = auVar44._12_4_ + auVar44._8_4_;
                    fVar59 = auVar44._0_4_ + auVar44._12_4_;
                    auVar9._4_4_ = fVar48;
                    auVar9._0_4_ = fVar46;
                    auVar9._8_4_ = fVar75;
                    auVar9._12_4_ = fVar59;
                    auVar39 = rsqrtps(auVar44,auVar9);
                    fVar62 = auVar39._0_4_;
                    fVar72 = auVar39._4_4_;
                    fVar38 = auVar39._8_4_;
                    fVar45 = auVar39._12_4_;
                    fVar62 = ((float)local_198 - fVar62 * fVar62 * fVar46 * (float)local_198) *
                             fVar62 + fVar62;
                    fVar72 = (local_198._4_4_ - fVar72 * fVar72 * fVar48 * local_198._4_4_) * fVar72
                             + fVar72;
                    fVar38 = ((float)uStack_190 - fVar38 * fVar38 * fVar75 * (float)uStack_190) *
                             fVar38 + fVar38;
                    fVar45 = (uStack_190._4_4_ - fVar45 * fVar45 * fVar59 * uStack_190._4_4_) *
                             fVar45 + fVar45;
                    auStack_134 = (undefined1  [4])fStack_204;
                    local_138 = (undefined1  [4])local_208;
                    uStack_130._0_4_ = fStack_200;
                    local_148 = (float)(((uint)((((float)local_198 -
                                                 fVar62 * fVar62 * fVar46 * (float)local_198) *
                                                 fVar62 + fVar62) * (float)local_1e8._0_4_) ^
                                        _DAT_1468560a0) & -(uint)(1e-08 <= fVar46) ^ _DAT_1468560a0)
                    ;
                    fStack_144 = (float)(((uint)(((local_198._4_4_ -
                                                  fVar72 * fVar72 * fVar48 * local_198._4_4_) *
                                                  fVar72 + fVar72) * (float)local_1e8._4_4_) ^
                                         uRam00000001468560a4) & -(uint)(1e-08 <= fVar48) ^
                                        uRam00000001468560a4);
                    fStack_140 = (float)(((uint)((((float)uStack_190 -
                                                  fVar38 * fVar38 * fVar75 * (float)uStack_190) *
                                                  fVar38 + fVar38) * fStack_1e0) ^
                                         uRam00000001468560a8) & -(uint)(1e-08 <= fVar75) ^
                                        uRam00000001468560a8);
                    fStack_13c = (float)(((uint)(((uStack_190._4_4_ -
                                                  fVar45 * fVar45 * fVar59 * uStack_190._4_4_) *
                                                  fVar45 + fVar45) * fStack_1dc) ^
                                         uRam00000001468560ac) & -(uint)(1e-08 <= fVar59) ^
                                        uRam00000001468560ac);
                    uStack_130._4_4_ = 0.0;
                    local_1e8._4_4_ = fStack_144;
                    local_1e8._0_4_ = local_148;
                    fStack_1e0 = fStack_140;
                    fStack_1dc = fStack_13c;
                  }
                  fStack_11c = fVar74 * fVar73;
                  fStack_120 = fVar58 * fVar71;
                  fStack_124 = fVar63 * fVar69;
                  local_128 = fVar70 * fVar61;
                  U2PTransform(local_168,&local_148);
                  FUN_14062e090(local_168);
                  (**(code **)(*plVar20 + 0x88))(plVar20,local_168);
                }
              }
              lVar26 = lVar26 + 1;
            } while (lVar26 < iVar17);
          }
          if (lVar4 != 0) {
            FMemory::Free(lVar4);
          }
        }
      }
    }
    if (*(char *)(*param_1 + 0xa50) != '\0') {
      plVar20 = *(longlong **)(*param_1 + 0xa78);
      (**(code **)(*plVar20 + 0x160))(plVar20,*(undefined4 *)param_1[1],0);
    }
  }
  return;
}



// FUNCTION 140623d90 FUN_140623d90 body=167 status=ok
// SIG undefined FUN_140623d90(void)

void FUN_140623d90(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)*param_1;
  local_res8[0] = *(int *)(lVar1 + 0x458);
  if (local_res8[0] < 1) {
    local_res8[0] = *(int *)(lVar1 + 0x450);
  }
  local_res8[1] = 0x34000000;
  lVar1 = *(longlong *)*param_1;
  uVar2 = 0;
  if ((0 < *(int *)(lVar1 + 0x3cc)) && (uVar2 = 0, *(int *)(lVar1 + 0x450) < local_res8[0])) {
    uVar2 = 1;
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(**(longlong **)(param_1[1] + 0xa78) + 0x200))
            (*(longlong **)(param_1[1] + 0xa78),local_res8,1,uVar2,0,&local_18,&local_28);
  return;
}



// FUNCTION 140623e40 FUN_140623e40 body=141 status=ok
// SIG undefined FUN_140623e40(void)

void FUN_140623e40(undefined8 *param_1)

{
  char cVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res8 = *(undefined4 *)*param_1;
  local_resc = 0x14000000;
  cVar1 = '\0';
  if (*(char *)param_1[1] != '\0') {
    local_resc = 0x34000000;
    cVar1 = *(char *)param_1[1];
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(**(longlong **)(param_1[2] + 0xa78) + 0x200))
            (*(longlong **)(param_1[2] + 0xa78),&local_res8,1,cVar1,0,&local_18,&local_28);
  return;
}



// FUNCTION 140623ed8 FUN_140623ed8 body=6 status=ok
// SIG undefined FUN_140623ed8(void)

void FUN_140623ed8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140623edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



// FUNCTION 140623f30 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AFGAttachmentSplitterHologram::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 140623f80 FUN_140623f80 body=43 status=ok
// SIG undefined FUN_140623f80(void)

undefined8 * FUN_140623f80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144019aa0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140623fb0 FUN_140623fb0 body=43 status=ok
// SIG undefined FUN_140623fb0(void)

undefined8 * FUN_140623fb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144019aa0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140623fe0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHyperlinkStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f6a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 140624020 FUN_140624020 body=43 status=ok
// SIG undefined FUN_140624020(void)

undefined8 * FUN_140624020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440197d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140624050 FUN_140624050 body=229 status=ok
// SIG undefined FUN_140624050(void)

longlong FUN_140624050(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0xb20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0xa60);
  puVar2 = *(undefined8 **)(param_1 + 0xa58);
  if (iVar1 != 0) {
    do {
      *puVar2 = &PTR_FUN_144019aa0;
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0xa58);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa30) = &PTR_FUN_143fce298;
  FUN_14061f9e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb40);
  }
  return param_1;
}



// FUNCTION 140624140 FUN_140624140 body=145 status=ok
// SIG undefined FUN_140624140(void)

undefined8 * FUN_140624140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144019828;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1406241e0 FUN_1406241e0 body=141 status=ok
// SIG undefined FUN_1406241e0(void)

longlong FUN_1406241e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  FUN_14276d4f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 140624270 FUN_140624270 body=39 status=ok
// SIG undefined FUN_140624270(void)

void FUN_140624270(longlong *param_1,char param_2)

{
  char cVar1;
  
  if ((param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2c8))(), cVar1 != '\x01')) {
    return;
  }
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
  return;
}



// FUNCTION 1406242a0 AddAngularImpulse body=40 status=ok
// SIG undefined AddAngularImpulse(void)

void UPrimitiveComponent::AddAngularImpulse(longlong *param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  (**(code **)(*param_1 + 0x5e8))(local_18,&local_18);
  return;
}



// FUNCTION 1406242d0 AddDefaulted body=116 status=ok
// SIG undefined AddDefaulted(void)

int TArray<FApexDestructionCustomPayload,TSizedDefaultAllocator<32>_>::AddDefaulted
              (longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2[1] = DAT_146855f88;
    *puVar2 = &PTR_FUN_144019ac8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2 = puVar2 + 4;
  }
  return iVar1;
}



// FUNCTION 140624350 AddDefaulted body=132 status=ok
// SIG undefined AddDefaulted(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int TArray<FTransform,FDefaultAllocator>::AddDefaulted(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    ResizeGrow(param_1,iVar1);
  }
  uVar6 = uRam000000014685601c;
  uVar5 = uRam0000000146856018;
  uVar4 = uRam0000000146856014;
  uVar3 = _DAT_146856010;
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x30 + *param_1);
  uVar7 = uRam000000014685600c;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uRam000000014685600c = uVar7;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    uVar7 = uRam0000000146856004 & uVar4;
    uVar8 = uRam0000000146856008 & uVar5;
    uVar9 = uRam000000014685600c & uVar6;
    puVar2[8] = _DAT_146856000 & uVar3;
    puVar2[9] = uVar7;
    puVar2[10] = uVar8;
    puVar2[0xb] = uVar9;
    puVar2 = puVar2 + 0xc;
    uVar7 = uRam000000014685600c;
  }
  uRam000000014685600c = uVar7;
  return iVar1;
}



// FUNCTION 1406243e0 FUN_1406243e0 body=83 status=ok
// SIG undefined FUN_1406243e0(void)

void FUN_1406243e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  
  local_20 = &local_res18;
  local_10 = local_res20;
  puStack_30 = &local_28;
  local_38 = &LAB_140624cd0;
  local_res18 = param_3;
  local_res20[0] = param_4;
  local_28 = param_1;
  local_18 = param_2;
  FUN_1406256c0(0x40624cd0,&local_38);
  return;
}



// FUNCTION 140624440 FUN_140624440 body=75 status=ok
// SIG undefined FUN_140624440(void)

void FUN_140624440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = &local_res20;
  puStack_30 = &local_28;
  local_38 = &LAB_140624c30;
  local_res20 = param_4;
  local_28 = param_1;
  local_18 = param_3;
  local_10 = param_2;
  FUN_1406256c0(0x40624c30,&local_38);
  return;
}



// FUNCTION 140624490 FUN_140624490 body=64 status=ok
// SIG undefined FUN_140624490(void)

void FUN_140624490(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  (**(code **)(*param_1 + 0x608))(local_18,&local_18,&local_28);
  return;
}



// FUNCTION 1406244d0 FUN_1406244d0 body=83 status=ok
// SIG undefined FUN_1406244d0(void)

void FUN_1406244d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  
  local_20 = &local_res18;
  local_10 = local_res20;
  puStack_30 = &local_28;
  local_38 = &LAB_140624c40;
  local_res18 = param_3;
  local_res20[0] = param_4;
  local_28 = param_1;
  local_18 = param_2;
  FUN_1406256c0(0x40624c40,&local_38);
  return;
}



// FUNCTION 140624530 FUN_140624530 body=75 status=ok
// SIG undefined FUN_140624530(void)

void FUN_140624530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = &local_res20;
  puStack_30 = &local_28;
  local_38 = &LAB_140624d50;
  local_res20 = param_4;
  local_28 = param_1;
  local_18 = param_3;
  local_10 = param_2;
  FUN_1406256c0(0x40624d50,&local_38);
  return;
}



// FUNCTION 140624580 FUN_140624580 body=409 status=ok
// SIG undefined FUN_140624580(void)

void FUN_140624580(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  int local_res8 [2];
  longlong *local_48 [6];
  
  if (((*(byte *)(param_1 + 0x2f8) & 2) == 0) &&
     (plVar3 = *(longlong **)(param_1 + 0xa78), plVar3 != (longlong *)0x0)) {
    local_48[0] = (longlong *)0x0;
    local_res8[0] = 0;
    cVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,local_48,local_res8,2);
    if (cVar2 != '\0') {
      plVar3 = (longlong *)0x0;
      while (local_res8[0] != 0) {
        local_res8[0] = local_res8[0] + -1;
        plVar1 = (longlong *)*local_48[0];
        local_48[0] = local_48[0] + 1;
        if (plVar1 != (longlong *)0x0) {
          if (plVar3 == (longlong *)0x0) {
            plVar3 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1);
            (**(code **)(*plVar3 + 0x358))(plVar3,0,0);
            (**(code **)(*plVar3 + 0x348))(plVar3,0);
          }
          FUN_1426d8680(plVar1,param_2,param_3,param_4,param_5,param_6);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x350))(plVar3);
          (**(code **)(*plVar3 + 0x360))(plVar3);
          plVar3 = (longlong *)0x0;
        }
      }
      local_res8[0] = -1;
      (**(code **)(**(longlong **)(param_1 + 0xa78) + 200))();
    }
  }
  return;
}



// FUNCTION 140624720 FUN_140624720 body=399 status=ok
// SIG undefined FUN_140624720(void)

void FUN_140624720(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  int local_res8 [2];
  longlong *local_48 [6];
  
  if (((*(byte *)(param_1 + 0x2f8) & 1) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xa78), plVar1 != (longlong *)0x0)) {
    plVar3 = (longlong *)0x0;
    local_48[0] = (longlong *)0x0;
    local_res8[0] = 0;
    cVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,local_48,local_res8,2);
    if (cVar2 != '\0') {
      while (local_res8[0] != 0) {
        local_res8[0] = local_res8[0] + -1;
        plVar1 = (longlong *)*local_48[0];
        local_48[0] = local_48[0] + 1;
        if (plVar1 != (longlong *)0x0) {
          if (plVar3 == (longlong *)0x0) {
            plVar3 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1);
            (**(code **)(*plVar3 + 0x358))(plVar3,0,0);
            (**(code **)(*plVar3 + 0x348))(plVar3,0);
          }
          FUN_1426d8980(plVar1,param_2,param_3,param_4,param_5,param_6);
        }
      }
      local_res8[0] = -1;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x350))(plVar3);
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
      (**(code **)(**(longlong **)(param_1 + 0xa78) + 200))();
    }
  }
  return;
}



// FUNCTION 1406248b0 AddZeroed body=85 status=ok
// SIG undefined AddZeroed(void)

int TArray<FString,FDefaultAllocator>::AddZeroed(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)param_2 << 4);
  return iVar1;
}



// FUNCTION 140624910 ApplyDamage body=231 status=ok
// SIG undefined ApplyDamage(void)

void UDestructibleComponent::ApplyDamage
               (longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 param_5)

{
  longlong *plVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    local_64 = param_4[1];
    local_68 = *param_4;
    local_60 = param_4[2];
    local_5c = *param_3;
    local_54 = param_3[2];
    local_58 = param_3[1];
    (**(code **)(*plVar1 + 0x188))(plVar1,param_2,param_5,&local_5c,&local_68,0xffffffff,0);
  }
  return;
}



// FUNCTION 140624a00 ApplyRadiusDamage body=105 status=ok
// SIG undefined ApplyRadiusDamage(void)

void UDestructibleComponent::ApplyRadiusDamage
               (longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5,byte param_6)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_3;
    local_14 = param_3[1];
    local_10 = param_3[2];
    (**(code **)(*plVar1 + 400))(plVar1,*plVar1,param_5,&local_18,param_4,param_6 ^ 1,0);
  }
  return;
}



// FUNCTION 140624a70 AreSymmetricRotations body=94 status=ok
// SIG undefined AreSymmetricRotations(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint UPrimitiveComponent::AreSymmetricRotations(undefined8 param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  
  auVar1._4_4_ = -(uint)(0.0001 < (float)((uint)(param_2[1] - param_3[1]) & uRam0000000146856064));
  auVar1._0_4_ = -(uint)(0.0001 < (float)((uint)(*param_2 - *param_3) & _DAT_146856060));
  auVar1._8_4_ = -(uint)(0.0001 < (float)((uint)(param_2[2] - param_3[2]) & uRam0000000146856068));
  auVar1._12_4_ = -(uint)(0.0001 < (float)((uint)(param_2[3] - param_3[3]) & uRam000000014685606c));
  iVar3 = movmskps(in_EAX,auVar1);
  if ((iVar3 != 0) &&
     (auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(param_3[1] + param_2[1]) & uRam0000000146856064
                                             )),
     auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(*param_3 + *param_2) & _DAT_146856060)),
     auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(param_3[2] + param_2[2]) & uRam0000000146856068)
                           ),
     auVar2._12_4_ =
          -(uint)(0.0001 < (float)((uint)(param_3[3] + param_2[3]) & uRam000000014685606c)),
     uVar4 = movmskps(iVar3,auVar2), uVar4 != 0)) {
    return uVar4 & 0xffffff00;
  }
  return 1;
}



// FUNCTION 140624ad0 FUN_140624ad0 body=331 status=ok
// SIG undefined FUN_140624ad0(void)

undefined8 * FUN_140624ad0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong *plVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [40];
  
  lVar1 = *(longlong *)(param_1 + 0xa78);
  if (lVar1 != 0) {
    pfVar2 = (float *)(**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))(lVar1 + 0x10,local_30);
    if (*pfVar2 <= pfVar2[3]) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0xa78) + 0x10);
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      *(ulonglong *)((longlong)param_2 + 0xc) =
           CONCAT44((local_38 - local_44) * 0.5,(local_3c - local_48) * 0.5);
      *(float *)((longlong)param_2 + 0x14) = (local_34 - local_40) * 0.5;
      *param_2 = CONCAT44(local_44 + *(float *)(param_2 + 2),
                          local_48 + *(float *)((longlong)param_2 + 0xc));
      *(float *)(param_2 + 1) = local_40 + *(float *)((longlong)param_2 + 0x14);
      *(float *)(param_2 + 3) =
           SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
                *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
                *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
      return param_2;
    }
  }
  USkinnedMeshComponent::CalcBounds(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 140624c50 FUN_140624c50 body=63 status=ok
// SIG undefined FUN_140624c50(void)

void FUN_140624c50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1423ac950(*param_1,*(undefined8 *)param_1[1]);
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    iVar2 = iVar1 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140624c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x160))(*(longlong **)(*param_1 + 0xa78),iVar2,1)
  ;
  return;
}



// FUNCTION 140624d70 FUN_140624d70 body=69 status=ok
// SIG undefined FUN_140624d70(void)

void FUN_140624d70(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)param_1[1];
  local_10 = puVar1[2];
  local_14 = puVar1[1];
  local_18 = *puVar1;
  (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x128))
            (*(longlong **)(*param_1 + 0xa78),&local_18);
  return;
}



// FUNCTION 140624de0 FUN_140624de0 body=961 status=ok
// SIG undefined FUN_140624de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140624de0(longlong param_1,undefined8 *param_2,float param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined1 *local_1c0;
  undefined1 local_1b8 [4];
  int local_1b4 [2];
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  longlong local_170;
  int *local_168;
  undefined1 *local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128;
  undefined2 local_125;
  undefined1 local_122;
  longlong local_f0;
  longlong local_d0;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (((((*(longlong *)(param_1 + 0xa78) != 0) && (lVar4 = FUN_140626d60(), lVar4 != 0)) &&
       (0 < *(int *)(lVar4 + 0x450))) && (*(longlong *)(lVar4 + 0x440) != 0)) &&
     ((lVar5 = *(longlong *)(param_1 + 0x120), lVar5 != 0 ||
      (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)))) {
    local_1b4[0] = 1;
    if (0 < *(int *)(lVar4 + 0x450)) {
      uVar8 = (ulonglong)_tls_index;
      do {
        uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x440) + 0x140))
                          (*(longlong **)(lVar4 + 0x440),local_1b4[0]);
        piVar7 = (int *)*param_2;
        piVar1 = piVar7 + *(int *)(param_2 + 1);
        for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
          if (*piVar7 == local_1b4[0]) goto LAB_1406250de;
        }
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x240))
                          (*(longlong **)(param_1 + 0xa78),local_1b4[0]);
        if ((cVar2 == '\0') && ((uVar3 & 1) != 0)) {
          (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x230))
                    (*(longlong **)(param_1 + 0xa78),&local_188,local_1b4[0]);
          fVar9 = local_174 - local_180;
          fVar10 = local_178 - local_184;
          fVar11 = local_17c - local_188;
          lVar6 = FUN_1423acfd0(param_1,local_b8,local_1b4[0] + 1);
          local_1a8 = *(undefined4 *)(lVar6 + 0x10);
          local_1a4 = *(undefined4 *)(lVar6 + 0x14);
          local_1a0 = *(undefined4 *)(lVar6 + 0x18);
          local_1ac = 0;
          local_1b4[1] = 1;
          if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
              DAT_146856148) {
            _Init_thread_header(&DAT_146856148);
            if (DAT_146856148 == -1) {
              FName::FName(&DAT_146856140,L"SupportChunkTest",1);
              _Init_thread_footer(&DAT_146856148);
            }
          }
          local_1c8 = (undefined4 *)0x0;
          FUN_1422ffb20(local_138,DAT_146856140,local_1b8,0);
          local_1c0 = local_138;
          local_1c8 = &local_198;
          local_125 = 0;
          local_128 = 0;
          local_122 = 1;
          local_198 = 1;
          local_194 = fVar11 * 0.5 + param_3;
          local_190 = fVar10 * 0.5 + param_3;
          local_18c = fVar9 * 0.5 + param_3;
          cVar2 = UWorld::OverlapAnyTestByObjectType(lVar5,&local_1a8,&DAT_1464aa810,local_1b4 + 1);
          if (cVar2 == '\0') {
            local_168 = local_1b4;
            plStack_150 = &local_170;
            local_158 = &LAB_140624d30;
            local_148 = 0x40624d30;
            uStack_144 = 1;
            local_170 = param_1;
            uStack_140 = plStack_150;
            FUN_1406256c0(param_1,&local_148);
          }
          if (local_d0 != 0) {
            FMemory::Free();
          }
          if (local_f0 != 0) {
            FMemory::Free();
          }
        }
LAB_1406250de:
        local_1b4[0] = local_1b4[0] + 1;
      } while (local_1b4[0] <= *(int *)(lVar4 + 0x450));
    }
  }
  return;
}



// FUNCTION 1406251b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
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
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140625260 FUN_140625260 body=342 status=ok
// SIG undefined FUN_140625260(void)

void FUN_140625260(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = param_1[0xe3];
  if (lVar2 != 0) {
    lVar4 = FUN_14062e990();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (0 < *(int *)(lVar2 + 0x450))) {
      *(undefined1 *)(param_1 + 0x163) = 1;
      if ((int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] == 0) {
        (**(code **)(*param_1 + 0x9a8))(param_1);
      }
      iVar1 = *(int *)(lVar2 + 0x450);
      if ((int)param_1[0x165] != iVar1) {
        *(undefined4 *)(param_1 + 0x165) = 0;
        if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb2c)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(param_1 + 0x164,0);
        }
        TArray<FTransform,FDefaultAllocator>::AddDefaulted(param_1 + 0x164,iVar1);
      }
      FUN_14062a3b0(param_1,0,0);
      iVar5 = 1;
      if (0 < iVar1) {
        do {
          FUN_14062a3b0(param_1,iVar5,1);
          iVar5 = iVar5 + 1;
        } while (iVar5 <= iVar1);
      }
      iVar5 = (**(code **)(**(longlong **)(lVar2 + 0x440) + 0xc0))();
      while (iVar1 = iVar1 + 1, iVar1 < iVar5) {
        FUN_14062a3b0(param_1,iVar1,0);
      }
      FUN_140629400(param_1);
      FUN_14062cd50(param_1,0);
    }
  }
  return;
}



// FUNCTION 1406253c0 FUN_1406253c0 body=180 status=ok
// SIG undefined FUN_1406253c0(void)

undefined8 * FUN_1406253c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  lVar1 = FUN_1423b08f0(param_1);
  if ((((lVar1 != 0) && (-1 < *(int *)(param_1 + 0x83c))) &&
      (*(int *)(param_1 + 0x83c) < *(int *)(lVar1 + 8))) &&
     (((*(byte *)(param_1 + 0x879) & 0x10) == 0 && (*(longlong *)(param_1 + 0x888) != 0)))) {
    puVar2 = (undefined8 *)operator_new(0x470);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_14276be60(puVar2,param_1,lVar1);
      puVar2[0x8d] = param_1;
      *puVar2 = &PTR__scalar_deleting_destructor__14401afc8;
      return puVar2;
    }
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140625480 FUN_140625480 body=35 status=ok
// SIG undefined FUN_140625480(void)

void FUN_140625480(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfb;
  }
  return;
}



// FUNCTION 1406254b0 FUN_1406254b0 body=343 status=ok
// SIG undefined FUN_1406254b0(void)

bool FUN_1406254b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int local_res8 [2];
  undefined8 *local_res18;
  longlong local_28;
  undefined8 uStack_20;
  
  plVar1 = *(longlong **)(param_1 + 0xa78);
  bVar7 = true;
  if (plVar1 == (longlong *)0x0) {
    return true;
  }
  local_28 = 0;
  uStack_20 = 8;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,0);
  local_res18 = (undefined8 *)0x0;
  iVar6 = 0;
  local_res8[0] = 0;
  cVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,&local_res18,local_res8,7);
  if (cVar2 != '\0') {
    while (local_res8[0] != 0) {
      local_res8[0] = local_res8[0] + -1;
      uVar5 = *local_res18;
      local_res18 = local_res18 + 1;
      iVar3 = ExportPxActorGeometry(uVar5,&local_28,param_2);
      iVar6 = iVar6 + iVar3;
    }
    local_res8[0] = -1;
    (**(code **)(**(longlong **)(param_1 + 0xa78) + 200))();
    bVar7 = iVar6 == 0;
    if (iVar6 != 0) goto LAB_1406255e1;
  }
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa0))();
  if ((iVar6 == 1) &&
     (psVar4 = (short *)(**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa8))(), *psVar4 == 0)) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                      (*(longlong **)(param_1 + 0xa78),0);
    iVar6 = ExportPxActorGeometry(uVar5,&local_28,param_2);
    bVar7 = iVar6 == 0;
  }
LAB_1406255e1:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return bVar7;
}



// FUNCTION 140625610 FUN_140625610 body=176 status=ok
// SIG undefined FUN_140625610(void)

undefined8 FUN_140625610(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    uVar1 = *(undefined8 *)(lVar3 + 0x218);
    cVar2 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar1);
    plVar4 = (longlong *)FUN_1426e2530(uVar1,-(cVar2 != '\0') & 2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x348))
                (plVar4,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ApexDestruction\\Source\\ApexDestruction\\Private\\DestructibleComponent.cpp"
                 ,0x44f);
    }
    (*(code *)*param_2)(param_2[1]);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1406256c0 FUN_1406256c0 body=176 status=ok
// SIG undefined FUN_1406256c0(void)

undefined8 FUN_1406256c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    uVar1 = *(undefined8 *)(lVar3 + 0x218);
    cVar2 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar1);
    plVar4 = (longlong *)FUN_1426e2530(uVar1,-(cVar2 != '\0') & 2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x358))
                (plVar4,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\ApexDestruction\\Source\\ApexDestruction\\Private\\DestructibleComponent.cpp"
                 ,0x463);
    }
    (*(code *)*param_2)(param_2[1]);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x360))(plVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140625770 ExportPxActorGeometry body=620 status=ok
// SIG undefined ExportPxActorGeometry(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ExportPxActorGeometry(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined1 local_f0 [32];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar11 = 0;
  if (param_1 == (longlong *)0x0) {
    iVar11 = 0;
  }
  else {
    uVar8 = (**(code **)(*param_1 + 0xa0))(param_1,local_f0);
    P2UTransform(&local_68,uVar8);
    uVar4 = (**(code **)(*param_1 + 200))(param_1);
    uVar5 = *(uint *)(param_2 + 1);
    uVar12 = uVar5;
    if ((uVar5 < uVar4) &&
       (*(uint *)(param_2 + 1) = uVar4, uVar12 = uVar4,
       *(int *)((longlong)param_2 + 0xc) < (int)uVar4)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,uVar5,uVar4);
      uVar12 = *(uint *)(param_2 + 1);
    }
    uVar5 = (**(code **)(*param_1 + 0xd0))(param_1,*param_2,uVar12,0);
    plVar10 = (longlong *)*param_2;
    if (uVar5 != 0) {
      uVar13 = (ulonglong)uVar5;
      do {
        plVar1 = (longlong *)*plVar10;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x90))(plVar1,local_f0);
          uVar6 = P2UTransform(&local_98,local_f0);
          auVar2._4_4_ = -(uint)(fStack_5c * fStack_5c < fRam00000001468560e4);
          auVar2._0_4_ = -(uint)(fStack_5c * fStack_5c < _DAT_1468560e0);
          auVar2._8_4_ = -(uint)(fStack_5c * fStack_5c < fRam00000001468560e8);
          auVar2._12_4_ = -(uint)(fStack_5c * fStack_5c < fRam00000001468560ec);
          iVar7 = movmskps(uVar6,auVar2);
          if (iVar7 != 0) {
            fVar16 = fStack_94 * local_68;
            fVar17 = local_98 * local_68;
            fVar14 = fStack_64 * local_98;
            fVar15 = fStack_64 * fStack_94;
            fVar18 = fStack_60 * local_98;
            fVar19 = fStack_60 * fStack_90;
            local_98 = fStack_8c * local_68 * _DAT_146856090 + fStack_5c * local_98 +
                       fStack_64 * fStack_90 * _DAT_146856080 +
                       fStack_60 * fStack_94 * _DAT_146856070;
            fStack_94 = fStack_90 * local_68 * fRam0000000146856094 + fStack_5c * fStack_94 +
                        fStack_64 * fStack_8c * fRam0000000146856084 + fVar18 * fRam0000000146856074
            ;
            fStack_90 = fVar16 * fRam0000000146856098 + fStack_5c * fStack_90 +
                        fVar14 * fRam0000000146856088 + fStack_60 * fStack_8c * fRam0000000146856078
            ;
            fStack_8c = fVar17 * fRam000000014685609c + fStack_5c * fStack_8c +
                        fVar15 * fRam000000014685608c + fVar19 * fRam000000014685607c;
          }
          local_88 = local_88 + local_58;
          fStack_84 = fStack_84 + fStack_54;
          fStack_80 = fStack_80 + fStack_50;
          fStack_7c = fStack_7c + fStack_4c;
          local_78 = local_78 * local_48;
          fStack_74 = fStack_74 * fStack_44;
          fStack_70 = fStack_70 * fStack_40;
          fStack_6c = fStack_6c * fStack_3c;
          iVar7 = (**(code **)(*(longlong *)*plVar10 + 0x30))();
          if (iVar7 == 4) {
            local_d0 = 4;
            local_cc = 0x3f800000;
            uStack_c8 = 0x3f800000;
            uStack_c4 = 0x3f800000;
            uStack_c0 = 0;
            local_bc = 0;
            local_b4 = 0x3f800000;
            uStack_b0 = 0;
            uStack_ac = 0;
            local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffff00000000);
            cVar3 = (**(code **)(*(longlong *)*plVar10 + 0x68))((longlong *)*plVar10,&local_d0);
            if (cVar3 != '\0') {
              iVar11 = iVar11 + 1;
              (**(code **)(*param_3 + 0x18))(param_3,CONCAT44(uStack_ac,uStack_b0),&local_98);
            }
          }
          else if (iVar7 == 5) {
            local_d0 = 5;
            local_cc = 0x3f800000;
            uStack_c8 = 0x3f800000;
            uStack_c4 = 0x3f800000;
            uStack_c0 = 0;
            local_bc = 0;
            local_b4 = 0x3f800000;
            uStack_b0 = 0;
            local_a8 = (longlong *)0x0;
            cVar3 = (**(code **)(*(longlong *)*plVar10 + 0x70))((longlong *)*plVar10,&local_d0);
            if (cVar3 != '\0') {
              iVar11 = iVar11 + 1;
              pbVar9 = (byte *)(**(code **)(*local_a8 + 0x58))(local_a8,local_f8);
              if ((*pbVar9 & 2) == 0) {
                (**(code **)(*param_3 + 0x10))(param_3,local_a8,&local_98);
              }
              else {
                (**(code **)(*param_3 + 8))();
              }
            }
          }
        }
        plVar10 = plVar10 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return iVar11;
}



// FUNCTION 1406259e0 FUN_1406259e0 body=57 status=ok
// SIG undefined FUN_1406259e0(void)

void FUN_1406259e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1426bd8f0(DAT_146b08410);
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 140625a20 FUN_140625a20 body=119 status=ok
// SIG undefined FUN_140625a20(void)

void FUN_140625a20(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  undefined1 *local_38;
  undefined4 **ppuStack_30;
  undefined4 *local_28;
  undefined1 *local_20;
  longlong local_18;
  
  if (*(longlong **)(param_1 + 0xa78) != (longlong *)0x0) {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x240))();
    if (cVar1 == '\0') {
      local_28 = local_res10;
      local_20 = local_res18;
      ppuStack_30 = &local_28;
      local_38 = &LAB_140624dd0;
      local_18 = param_1;
      FUN_1406256c0(param_1,&local_38);
    }
  }
  return;
}



// FUNCTION 140625aa0 FUN_140625aa0 body=111 status=ok
// SIG undefined FUN_140625aa0(void)

void FUN_140625aa0(longlong param_1,longlong param_2,int param_3,undefined1 param_4)

{
  longlong local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 *local_38;
  undefined1 **ppuStack_30;
  undefined1 *local_28;
  int *local_20;
  longlong *local_18;
  longlong local_10;
  
  if (((*(longlong *)(param_1 + 0xa78) != 0) && (param_2 != 0)) && (0 < param_3)) {
    local_28 = local_res20;
    local_20 = local_res18;
    local_18 = &local_res10;
    ppuStack_30 = &local_28;
    local_38 = &LAB_140624ce0;
    local_res10 = param_2;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    local_10 = param_1;
    FUN_1406256c0(0x40624ce0,&local_38);
  }
  return;
}



// FUNCTION 140625b10 FUN_140625b10 body=1055 status=ok
// SIG undefined FUN_140625b10(void)

undefined8
FUN_140625b10(longlong param_1,longlong *param_2,undefined8 param_3,float *param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  byte local_res8 [8];
  float local_2c8;
  int local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  undefined1 local_270 [16];
  undefined1 local_260 [24];
  int local_248 [68];
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_110 [216];
  
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    fVar3 = *param_4;
    fVar4 = param_4[1];
    fVar5 = param_4[2];
    fVar6 = param_4[3];
    fVar14 = fVar3 + fVar3;
    local_2c8 = 0.0;
    local_2c0 = 0;
    local_2b8 = 0;
    fVar13 = fVar4 + fVar4;
    local_28c = fVar6 * (fVar5 + fVar5);
    local_278 = 1.0 - fVar3 * fVar14;
    local_288 = fVar5 * (fVar5 + fVar5);
    local_290 = fVar5 * fVar14 - fVar6 * fVar13;
    local_280 = fVar6 * fVar13 + fVar5 * fVar14;
    local_298 = (1.0 - fVar4 * fVar13) - local_288;
    local_284 = fVar5 * fVar13 + fVar6 * fVar14;
    local_27c = fVar5 * fVar13 - fVar6 * fVar14;
    local_294 = local_28c + fVar4 * fVar14;
    local_28c = fVar4 * fVar14 - local_28c;
    local_288 = local_278 - local_288;
    local_278 = local_278 - fVar4 * fVar13;
    puVar8 = (undefined4 *)FUN_14233e050(local_270,param_3);
    local_2a8 = param_4[4];
    local_2a4 = param_4[5];
    local_2a0 = param_4[6];
    local_2b4 = *puVar8;
    local_2ac = puVar8[2];
    local_2b0 = puVar8[1];
    local_2c4 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x1a8))
                          (*(longlong **)(param_1 + 0xa78),&local_2c8,local_260,&local_2a8,
                           &local_2b4,&local_298,&local_2c0,3);
    if ((local_2c4 != -1) && (local_2c8 <= 1.0)) {
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                        (*(longlong **)(param_1 + 0xa78),local_2c4);
      if (lVar9 != 0) {
        FUN_1426852e0();
        lVar10 = *(longlong *)(param_1 + 0x120);
        if (lVar10 == 0) {
          lVar10 = FUN_1423407b0();
        }
        uVar12 = 0;
        if (lVar10 != 0) {
          uVar12 = *(undefined8 *)(lVar10 + 0x218);
        }
        cVar7 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar12);
        local_138 = lVar9;
        if (cVar7 != '\0') {
          local_138 = 0;
        }
        cVar7 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar12);
        local_128 = 0;
        local_130 = 0;
        if (cVar7 != '\0') {
          local_130 = lVar9;
        }
        local_248[0] = local_2c4;
        FWeakObjectPtr::operator=(local_110,param_1);
        local_res8[0] = 0;
        cVar7 = FUN_142695450(local_248,param_3,param_4,param_5,param_6,local_res8);
        if (cVar7 != '\0') {
          iVar2 = (int)param_2[1];
          lVar9 = (longlong)iVar2;
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar2);
          }
          lVar10 = *param_2;
          *(undefined8 *)(lVar10 + lVar9 * 0x18) = 0;
          *(undefined8 *)(lVar10 + 8 + lVar9 * 0x18) = 0;
          *(undefined8 *)(lVar10 + 0x10 + lVar9 * 0x18) = 0;
          FWeakObjectPtr::operator=(*param_2 + 8 + lVar9 * 0x18,param_1);
          FWeakObjectPtr::operator=(*param_2 + lVar9 * 0x18,*(undefined8 *)(param_1 + 0x118));
          uVar11 = 1;
          *(undefined4 *)(*param_2 + 0x10 + lVar9 * 0x18) = 0xffffffff;
          puVar1 = (uint *)(*param_2 + 0x14 + lVar9 * 0x18);
          *puVar1 = *puVar1 ^ ((uint)local_res8[0] ^ *(uint *)(*param_2 + 0x14 + lVar9 * 0x18)) & 1;
        }
        FUN_14061f570(local_248);
      }
      return uVar11;
    }
  }
  return 0;
}



// FUNCTION 140625f30 FUN_140625f30 body=515 status=ok
// SIG undefined FUN_140625f30(void)

undefined8
FUN_140625f30(longlong *param_1,longlong *param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,char param_10)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  float local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar2 = false;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 1.0;
  cVar3 = (**(code **)(*param_1 + 0x8b0))
                    (param_1,local_a8,param_4,param_5,param_6,param_7,param_8,param_9,0);
  if ((cVar3 != '\0') && (local_9c < *param_3)) {
    if ((local_a8[0] & 1) != 0) {
      *param_3 = local_9c;
    }
    iVar1 = (int)param_2[1];
    bVar2 = true;
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    pbVar4 = (byte *)((longlong)iVar1 * 0x90 + *param_2);
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 1;
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 2;
    *(undefined4 *)(pbVar4 + 4) = local_a4;
    *(uint *)(pbVar4 + 8) = *(uint *)(pbVar4 + 8) ^ (*(uint *)(pbVar4 + 8) ^ local_a0) & 1;
    *(float *)(pbVar4 + 0xc) = local_9c;
    *(undefined4 *)(pbVar4 + 0x10) = local_98;
    *(undefined8 *)(pbVar4 + 0x14) = local_94;
    *(undefined4 *)(pbVar4 + 0x1c) = local_8c;
    *(undefined8 *)(pbVar4 + 0x20) = local_88;
    *(undefined4 *)(pbVar4 + 0x28) = local_80;
    *(undefined8 *)(pbVar4 + 0x2c) = local_7c;
    *(undefined4 *)(pbVar4 + 0x34) = local_74;
    *(undefined8 *)(pbVar4 + 0x38) = local_70;
    *(undefined4 *)(pbVar4 + 0x40) = local_68;
    *(undefined8 *)(pbVar4 + 0x44) = local_64;
    *(undefined4 *)(pbVar4 + 0x4c) = local_5c;
    *(undefined8 *)(pbVar4 + 0x50) = local_58;
    *(undefined4 *)(pbVar4 + 0x58) = local_50;
    *(undefined4 *)(pbVar4 + 0x5c) = local_4c;
    *(undefined4 *)(pbVar4 + 0x60) = local_48;
    *(undefined4 *)(pbVar4 + 100) = local_44;
    *(undefined4 *)(pbVar4 + 0x68) = local_40;
    *(undefined4 *)(pbVar4 + 0x6c) = local_3c;
    *(undefined4 *)(pbVar4 + 0x70) = local_38;
    *(undefined4 *)(pbVar4 + 0x74) = local_34;
    *(undefined4 *)(pbVar4 + 0x78) = local_30;
    *(undefined8 *)(pbVar4 + 0x80) = local_28;
    *(undefined8 *)(pbVar4 + 0x88) = local_20;
  }
  if (param_10 != '\0') {
    if (!bVar2) {
      return 0;
    }
    FUN_1423560b0(param_2);
  }
  if ((bVar2) && ((local_a8[0] & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140626140 FUN_140626140 body=991 status=ok
// SIG undefined FUN_140626140(void)

undefined1 *
FUN_140626140(longlong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  undefined8 local_res10;
  undefined8 in_stack_fffffffffffffd30;
  undefined4 uVar15;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined1 local_270 [16];
  undefined1 local_260 [24];
  int local_248 [68];
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_110 [216];
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
  if (*(longlong *)(param_1 + 0xa78) == 0) {
    return &stack0x00000000;
  }
  local_2b8 = *param_4 - *param_3;
  local_res8[0] = 0.0;
  local_2b4 = param_4[1] - param_3[1];
  local_2b0 = param_4[2] - param_3[2];
  fVar1 = param_5[2];
  fVar2 = param_5[1];
  fVar3 = param_5[3];
  fVar4 = *param_5;
  fVar13 = fVar2 + fVar2;
  fVar14 = fVar4 + fVar4;
  local_284 = fVar1 * (fVar1 + fVar1);
  local_288 = fVar3 * (fVar1 + fVar1);
  local_28c = fVar1 * fVar14 - fVar3 * fVar13;
  local_294 = (1.0 - fVar2 * fVar13) - local_284;
  local_27c = fVar3 * fVar13 + fVar1 * fVar14;
  local_274 = 1.0 - fVar4 * fVar14;
  local_280 = fVar1 * fVar13 + fVar3 * fVar14;
  local_278 = fVar1 * fVar13 - fVar3 * fVar14;
  local_290 = local_288 + fVar2 * fVar14;
  local_288 = fVar2 * fVar14 - local_288;
  local_284 = local_274 - local_284;
  local_274 = local_274 - fVar2 * fVar13;
  local_res10 = param_2;
  puVar7 = (undefined4 *)FUN_14233e050(local_270,param_6);
  local_2ac = *puVar7;
  local_2a8 = puVar7[1];
  local_2a4 = puVar7[2];
  local_2a0 = *param_3;
  local_29c = param_3[1];
  local_298 = param_3[2];
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x1a8))
                    (*(longlong **)(param_1 + 0xa78),local_res8,local_260,&local_2a0,&local_2ac,
                     &local_294,&local_2b8,CONCAT44(uVar15,3));
  if (((int)uVar8 == -1) || (1.0 < local_res8[0])) {
    puVar11 = (undefined1 *)(uVar8 & 0xffffffffffffff00);
  }
  else {
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                      (*(longlong **)(param_1 + 0xa78),uVar8 & 0xffffffff);
    puVar11 = (undefined1 *)0x0;
    if (lVar9 != 0) {
      FUN_1426852e0();
      lVar10 = *(longlong *)(param_1 + 0x120);
      if (lVar10 == 0) {
        lVar10 = FUN_1423407b0();
      }
      uVar12 = 0;
      if (lVar10 != 0) {
        uVar12 = *(undefined8 *)(lVar10 + 0x218);
      }
      cVar5 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0,uVar12);
      local_138 = lVar9;
      if (cVar5 != '\0') {
        local_138 = 0;
      }
      cVar5 = FBodyInstance::UseAsyncScene(param_1 + 0x3b0);
      local_128 = 0;
      local_130 = 0;
      if (cVar5 != '\0') {
        local_130 = lVar9;
      }
      local_248[0] = (int)uVar8;
      FWeakObjectPtr::operator=(local_110,param_1);
      bVar6 = FUN_142695520(local_248,local_res10,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9);
      FUN_14061f570(local_248);
      puVar11 = (undefined1 *)(ulonglong)bVar6;
    }
  }
  return puVar11;
}


