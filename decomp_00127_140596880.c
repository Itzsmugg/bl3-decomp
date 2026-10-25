// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140596880 FUN_140596880 body=117 status=ok
// SIG undefined FUN_140596880(void)

longlong FUN_140596880(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (lVar1 = FUN_140599e90(param_2), lVar1 != 0)) &&
     (lVar2 = FUN_14058e530(lVar1), lVar2 != 0)) {
    *(longlong *)(lVar2 + 0x28) = param_1;
    FWeakObjectPtr::operator=(lVar2 + 0x40,lVar1);
    *(undefined4 *)(lVar2 + 0x30) = param_3;
    return lVar2;
  }
  return 0;
}



// FUNCTION 140596900 FUN_140596900 body=85 status=ok
// SIG undefined FUN_140596900(void)

undefined8 FUN_140596900(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x117,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::CreateNewSection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x117,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::CreateNewSection");
  return 0;
}



// FUNCTION 140596960 FUN_140596960 body=372 status=ok
// SIG undefined FUN_140596960(void)

undefined8 * FUN_140596960(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_143fca7b0;
  *(undefined1 *)(plVar8 + 0xe) = 0;
  plVar8[0xf] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 140596ae0 FUN_140596ae0 body=266 status=ok
// SIG undefined FUN_140596ae0(void)

longlong FUN_140596ae0(longlong *param_1,longlong param_2,undefined8 *param_3,float param_4,
                      undefined4 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
      (param_2 != 0)) && (0.0001 < param_4)) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar3 = FUN_1405b53c0();
    lVar2 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x28) = param_2;
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      FWeakObjectPtr::operator=(lVar2 + 0x40,uVar3);
      uVar1 = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar2 + 0x48) = *param_3;
      *(undefined4 *)(lVar2 + 0x50) = uVar1;
      *(undefined4 *)(lVar2 + 0x58) = param_5;
      *(float *)(lVar2 + 0x54) = param_4;
      *(undefined4 *)(lVar2 + 0x30) = 0x3f800000;
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140596bf0 FUN_140596bf0 body=3 status=ok
// SIG undefined FUN_140596bf0(void)

undefined1 FUN_140596bf0(void)

{
  return 2;
}



// FUNCTION 140596c00 FUN_140596c00 body=509 status=ok
// SIG undefined FUN_140596c00(void)

void FUN_140596c00(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  BOOL BVar3;
  undefined8 uVar4;
  
  if (((*(longlong *)(param_1 + 0xd0) != 0) && (lVar1 = *(longlong *)(param_1 + 0xc0), lVar1 != 0))
     && (*(char *)(param_1 + 0xd8) == '\0')) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
    *(undefined1 *)(param_1 + 0xd8) = 1;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_1405ac930();
    }
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x70), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(param_1 + 0x70) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x70),0,0);
        *(undefined8 *)(param_1 + 0x70) = uVar4;
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if ((*(int *)(param_1 + 0x88) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x80),0,0);
        *(undefined8 *)(param_1 + 0x80) = uVar4;
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    if ((*(int *)(param_1 + 0xa8) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0xa0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0xa0),0,0);
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
      }
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if ((*(int *)(param_1 + 0xb8) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0xb0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0xb0),0,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar4;
      }
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    FUN_140595ce0(*(longlong *)(param_1 + 0xc0) + 0x50,param_1);
    if ((DAT_1468536c5 != '\0') && (lVar1 == DAT_1468536c8)) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      }
      if (*(longlong *)(lVar1 + 0x210) != 0) {
        FUN_1405ad8b0(*(longlong *)(lVar1 + 0x210),*(undefined8 *)(param_1 + 0xd0));
      }
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (lVar1 + 0xe0,param_1);
      AK::SoundEngine::UnregisterGameObj(*(__uint64 *)(param_1 + 0xd0));
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
    FUN_1405a53f0(param_1);
  }
  return;
}



// FUNCTION 140596e00 FUN_140596e00 body=144 status=ok
// SIG undefined FUN_140596e00(void)

void FUN_140596e00(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    if (param_1[0x6f] != 0) {
      FUN_1405ac930();
    }
    *(undefined1 *)((longlong)param_1 + 0x403) = 0;
    (**(code **)(*param_1 + 0x358))(param_1,0);
    if (*(char *)((longlong)param_1 + 0x401) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x401) = 1;
      if ((param_1[0x6f] != 0) && (*(longlong *)(param_1[0x6f] + 0xe0) != 0)) {
        FUN_1405acdf0(param_1);
        FUN_1405b17d0(param_1);
      }
    }
    param_1[0x7f] = -0x4010000000000000;
  }
  FUN_142338f40(param_1);
  return;
}



// FUNCTION 140596e90 FUN_140596e90 body=1325 status=ok
// SIG undefined FUN_140596e90(void)

void FUN_140596e90(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  byte bVar22;
  int *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80 [2];
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_res10 = *(int **)(*param_2 + 0x18);
  FName::ToString(&local_res10,local_80);
  uVar13 = 0;
  lVar18 = (longlong)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar12 = **(longlong **)(param_1 + 0x20);
    uVar11 = uVar13;
    if (lVar12 != 0) {
      uVar11 = (*(longlong **)(param_1 + 0x20))[1];
    }
    uVar4 = uVar13;
    if (*param_2 != 0) {
      uVar4 = param_2[1];
    }
    uVar21 = uVar13;
    if ((uVar11 == uVar4) && (lVar12 == *param_2)) {
      bVar22 = 0;
      uVar11 = uVar13;
    }
    else {
      bVar22 = 1;
      uVar11 = uVar13;
    }
    do {
      iVar15 = (int)uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = (ulonglong)(iVar15 + 1);
      if ((longlong)uVar13 < lVar18) {
        plVar5 = (longlong *)(uVar13 * 0x10 + *(longlong *)(param_1 + 0x20));
        do {
          lVar12 = 0;
          if (*plVar5 != 0) {
            lVar12 = plVar5[1];
          }
          lVar7 = 0;
          if (*param_2 != 0) {
            lVar7 = param_2[1];
          }
          if ((lVar12 == lVar7) && (*plVar5 == *param_2)) {
            bVar6 = 0;
          }
          else {
            bVar6 = 1;
          }
          if (bVar22 != bVar6) break;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar13 = uVar13 + 1;
          plVar5 = plVar5 + 2;
        } while ((longlong)uVar13 < lVar18);
      }
      iVar14 = (int)uVar11 - iVar15;
      if (bVar22 != 0) {
        iVar20 = (int)uVar21;
        if (iVar20 != iVar15) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar20 * 0x10 + *(longlong *)(param_1 + 0x20)),
                     (void *)((longlong)iVar15 * 0x10 + *(longlong *)(param_1 + 0x20)),
                     (longlong)iVar14 << 4);
        }
        uVar21 = (ulonglong)(uint)(iVar20 + iVar14);
      }
      bVar22 = bVar22 ^ 1;
    } while ((longlong)uVar13 < lVar18);
    *(int *)(param_1 + 0x28) = (int)uVar21;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853cf8) && (_Init_thread_header(&DAT_146853cf8), DAT_146853cf8 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3fa50);
    _Init_thread_footer(&DAT_146853cf8);
  }
  DAT_146853cf0 = 0;
  if ((DAT_146853cf4 < 0) && (DAT_146853cf4 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146853ce8,0);
  }
  plVar5 = (longlong *)0x0;
  if (*param_2 != 0) {
    plVar5 = (longlong *)param_2[1];
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,&DAT_146853ce8);
  local_res10 = DAT_146853ce8;
  local_res18 = (longlong *)0x0;
  local_res20 = (longlong *)
                ((ulonglong)
                 ((longlong)(DAT_146853ce8 + DAT_146853cf0) + (3 - (longlong)DAT_146853ce8)) >> 2);
  if (DAT_146853ce8 + DAT_146853cf0 < DAT_146853ce8) {
    local_res20 = (longlong *)0x0;
  }
  if (local_res20 != (longlong *)0x0) {
    do {
      piVar9 = (int *)0x0;
      iVar15 = *local_res10;
      if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
        lVar18 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar18 = param_1 + 0x68;
        }
        iVar14 = *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iVar15) * 4)
        ;
        if (iVar14 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar14 * 0x70 + *(longlong *)(param_1 + 0x30));
            if (*piVar8 == iVar15) {
              if (iVar14 != -1) goto LAB_1405970f1;
              break;
            }
            iVar14 = piVar8[0x1a];
          } while (iVar14 != -1);
        }
      }
      piVar8 = piVar9;
LAB_1405970f1:
      piVar16 = piVar8 + 2;
      if (piVar8 == (int *)0x0) {
        piVar16 = piVar9;
      }
      if ((piVar16 != (int *)0x0) && (piVar16[2] = piVar16[2] + -1, piVar16[2] < 1)) {
        uStack_c4 = 1;
        plVar5 = (longlong *)(piVar16 + 4);
        local_c8 = 0;
        uVar2 = piVar16[0xe];
        puVar1 = (uint *)(piVar16 + 8);
        uStack_b4 = 0;
        iStack_b0 = 0;
        if (uVar2 != 0) {
          puVar19 = *(uint **)(piVar16 + 0xc);
          if (*(uint **)(piVar16 + 0xc) == (uint *)0x0) {
            puVar19 = puVar1;
          }
          uVar3 = *puVar19;
          iStack_b0 = 0;
          while (uVar3 == 0) {
            iVar14 = (int)piVar9;
            iStack_b0 = iStack_b0 + 0x20;
            local_c8 = iVar14 + 1;
            piVar9 = (int *)(ulonglong)local_c8;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
            goto LAB_1405971bf;
            uVar3 = puVar19[(longlong)iVar14 + 1];
          }
          uStack_c4 = -uVar3 & uVar3;
          iVar14 = 0x1f;
          if (uStack_c4 != 0) {
            for (; uStack_c4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (uStack_c4 == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          uStack_b4 = (iStack_b0 - iVar14) + 0x1f;
          if ((int)uVar2 < (int)uStack_b4) {
LAB_1405971bf:
            uStack_b4 = uVar2;
          }
        }
        uVar3 = piVar16[0xe];
        uStack_90 = CONCAT44(uStack_b4,0xffffffff);
        local_88 = CONCAT44(uStack_ac,iStack_b0);
        uStack_68 = CONCAT44(uStack_c4,local_c8);
        uVar17 = uVar3 & 0xffffffe0;
        uStack_a0 = local_c8;
        uStack_9c = uStack_c4;
        local_98 = puVar1;
        local_70 = plVar5;
        puStack_60 = puVar1;
        uStack_58 = uStack_90;
        uStack_50 = local_88;
        uStack_b4 = uVar3;
        if (uVar3 != uVar2) {
          puVar19 = *(uint **)(piVar16 + 0xc);
          if (*(uint **)(piVar16 + 0xc) == (uint *)0x0) {
            puVar19 = puVar1;
          }
          uVar10 = puVar19[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
          iVar14 = (int)uVar3 >> 5;
          while (uVar10 == 0) {
            uVar17 = uVar17 + 0x20;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
            goto LAB_140597296;
            uVar10 = puVar19[(longlong)iVar14 + 1];
            iVar14 = iVar14 + 1;
          }
          uVar10 = -uVar10 & uVar10;
          iVar14 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (uVar10 == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          uStack_b4 = (uVar17 - iVar14) + 0x1f;
          if ((int)uVar2 < (int)uStack_b4) {
LAB_140597296:
            uStack_b4 = uVar2;
          }
        }
        while( true ) {
          if ((uStack_90._4_4_ == uStack_b4) && (local_98 == puVar1)) break;
          FUN_1405adce0(*(longlong *)(param_1 + 8) + 0x1e8,
                        *(undefined8 *)(*plVar5 + 8 + (longlong)(int)uStack_90._4_4_ * 0x18));
          uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        }
        FUN_1405adce0(*(longlong *)(param_1 + 8) + 0x1e8,*(undefined8 *)piVar16);
        FUN_1405a5a20(param_1 + 0x30,iVar15);
      }
      local_res10 = local_res10 + 1;
      local_res18 = (longlong *)((longlong)local_res18 + 1);
    } while (local_res18 != local_res20);
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405973c0 FUN_1405973c0 body=10 status=ok
// SIG undefined FUN_1405973c0(void)

void FUN_1405973c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001405973c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))();
  return;
}



// FUNCTION 1405973d0 FUN_1405973d0 body=63 status=ok
// SIG undefined FUN_1405973d0(void)

void FUN_1405973d0(longlong param_1)

{
  if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
     (*(char *)(param_1 + 0x48) != '\0')) {
    FUN_1405adb00(DAT_1468536c8,param_1);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 140597410 FUN_140597410 body=63 status=ok
// SIG undefined FUN_140597410(void)

void FUN_140597410(longlong param_1)

{
  if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
     (*(char *)(param_1 + 0x5c) != '\0')) {
    FUN_1405adb00(DAT_1468536c8,param_1);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 140597450 FUN_140597450 body=22 status=ok
// SIG undefined FUN_140597450(void)

void FUN_140597450(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140597461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140597470 FUN_140597470 body=213 status=ok
// SIG undefined FUN_140597470(void)

void FUN_140597470(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined4 local_res18;
  undefined4 local_res1c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (DAT_1468c21ae != '\0') {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      FWeakObjectPtr::operator=(&local_res18,param_1);
      uVar1 = *param_2;
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_CopyToEmptyStorage_143fcfe68;
        *(undefined4 *)(puVar3 + 1) = local_res18;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_res1c;
        *(undefined4 *)(puVar3 + 2) = uVar1;
      }
      local_58[0] = FUN_140595b60;
      FUN_14158fcd0(2,local_58);
      return;
    }
  }
  FUN_142388a20(param_1,param_2);
  return;
}



// FUNCTION 140597570 FUN_140597570 body=360 status=ok
// SIG undefined FUN_140597570(void)

void FUN_140597570(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  if (*(char *)(param_1 + 0x528) != '\0') {
    uVar9 = 0;
    *(undefined1 *)(param_1 + 0x528) = 0;
    plVar11 = *(longlong **)(param_1 + 0x488);
    uVar10 = (longlong)*(int *)(param_1 + 0x490) & 0x1fffffffffffffff;
    if (plVar11 + *(int *)(param_1 + 0x490) < plVar11) {
      uVar10 = uVar9;
    }
    if (uVar10 != 0) {
      do {
        uVar7 = 0;
        lVar1 = *plVar11;
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x52c) = *(int *)(lVar1 + 0x52c) + -1;
          iVar5 = *(int *)(lVar1 + 0x4d0);
          iVar6 = *(int *)(lVar1 + 0x52c);
          uVar8 = uVar7;
          if (0 < iVar5) {
            do {
              iVar6 = (int)uVar7;
              lVar2 = *(longlong *)(lVar1 + 0x4c8);
              if (*(longlong *)(uVar8 + lVar2) == param_1) {
                iVar4 = (iVar5 - iVar6) + -1;
                if (0 < iVar4) {
                  iVar4 = 1;
                }
                if (iVar4 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar2 + (longlong)iVar6 * 8),
                             (void *)(lVar2 + (longlong)(iVar5 - iVar4) * 8),(longlong)iVar4 << 3);
                  iVar5 = *(int *)(lVar1 + 0x4d0);
                }
                *(int *)(lVar1 + 0x4d0) = iVar5 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(lVar1 + 0x4c8));
                iVar5 = *(int *)(lVar1 + 0x4d0);
                iVar6 = iVar6 + -1;
                uVar8 = uVar8 - 8;
              }
              uVar7 = (ulonglong)(iVar6 + 1U);
              uVar8 = uVar8 + 8;
            } while ((int)(iVar6 + 1U) < iVar5);
            iVar6 = *(int *)(lVar1 + 0x52c);
          }
          if ((iVar6 == 0) && (cVar3 = FUN_14059ea80(lVar1), cVar3 != '\0')) {
            FUN_140598940(lVar1);
          }
          FUN_140599610(lVar1);
        }
        plVar11 = plVar11 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
  }
  return;
}



// FUNCTION 1405976e0 FUN_1405976e0 body=501 status=ok
// SIG undefined FUN_1405976e0(void)

void FUN_1405976e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  plVar6 = (longlong *)*plVar1;
  uVar9 = (ulonglong)*(int *)(param_1 + 0xf0);
  plVar4 = plVar6 + uVar9 * 3;
  if (plVar6 != plVar4) {
    lVar10 = param_1 + 0xc0;
    if (param_1 == 0) {
      lVar10 = 0;
    }
    do {
      lVar2 = *plVar6;
      lVar7 = -1;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd0) != -1)) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + 1;
        lVar7 = *(longlong *)(lVar2 + 0xd0);
      }
      FUN_1405adfe0((int)plVar6[2],lVar10);
      if ((((lVar2 != 0) && (lVar7 != -1)) && (lVar7 == *(longlong *)(lVar2 + 0xd0))) &&
         ((lVar7 != -1 && (*(longlong *)(lVar2 + 0xd0) == lVar7)))) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar4);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0xf0);
  }
  iVar5 = *(int *)(param_1 + 0xf4);
  plVar4 = (longlong *)*plVar1;
  uVar8 = (uint)uVar9;
  if (iVar5 < 0) {
    if (uVar8 != 0) {
      do {
        lVar10 = *plVar4;
        if (((lVar10 != 0) && (plVar4[1] != -1)) && (plVar4[1] == *(longlong *)(lVar10 + 0xd0))) {
          *(int *)(lVar10 + 0x2e8) = *(int *)(lVar10 + 0x2e8) + -1;
          *plVar4 = 0;
          plVar4[1] = -1;
        }
        plVar4 = plVar4 + 3;
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 != 0);
      iVar5 = *(int *)(param_1 + 0xf4);
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (iVar5 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
  }
  else {
    while (uVar8 != 0) {
      lVar10 = *plVar4;
      if (((lVar10 != 0) && (plVar4[1] != -1)) && (plVar4[1] == *(longlong *)(lVar10 + 0xd0))) {
        *(int *)(lVar10 + 0x2e8) = *(int *)(lVar10 + 0x2e8) + -1;
        *plVar4 = 0;
        plVar4[1] = -1;
      }
      plVar4 = plVar4 + 3;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  lVar10 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) &&
     ((DAT_1468536c8 != 0 && ((param_1 != 0 && (local_res8 = param_1 + 200, local_res8 != 0)))))) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_1468536c8 + 0x180));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x180));
    }
    TArray<FName,FDefaultAllocator>::Remove(lVar10 + 0x1a8,&local_res8);
    TArray<FName,FDefaultAllocator>::Remove(lVar10 + 0x1b8,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x180));
  }
  return;
}



// FUNCTION 1405978e0 FUN_1405978e0 body=1366 status=ok
// SIG undefined FUN_1405978e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405978e0(byte param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar17;
  bool bVar18;
  longlong local_res10;
  ulonglong uVar16;
  
  if (DAT_146853710 != 0) {
    (**(code **)(**(longlong **)(DAT_146853710 + 0x8420) + 0x10))();
  }
  if (DAT_1468c21ae == '\0') {
    bVar18 = true;
  }
  else {
    DVar6 = GetCurrentThreadId();
    bVar18 = DVar6 == DAT_1468c21c0;
  }
  uVar14 = 0;
  if (DAT_1468536c0 != 0) {
    local_res10 = 0;
    uVar16 = uVar14;
    do {
      if (DAT_146853710 != 0) {
        LOCK();
        iVar7 = *(int *)(DAT_146853710 + 0x840c);
        if (iVar7 == 0) {
          *(int *)(DAT_146853710 + 0x840c) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if ((int)uVar16 < iVar7) {
          lVar17 = local_res10 * 0x210;
          do {
            lVar11 = DAT_146853710 + lVar17;
            if (*(int *)(lVar11 + 0x210) == 1) {
              lVar12 = *(longlong *)(lVar11 + 0x50);
              if ((((lVar12 != 0) && (*(longlong *)(lVar11 + 0x58) != -1)) &&
                  (*(longlong *)(lVar11 + 0x58) == *(longlong *)(lVar12 + 0xd0))) &&
                 (*(int *)(lVar12 + 0x2e4) = *(int *)(lVar12 + 0x2e4) + 1, lVar12 != 0)) {
                FUN_1405947e0(lVar12,lVar11 + 8);
                FUN_1405a53f0(lVar12);
              }
            }
            else if (*(int *)(lVar11 + 0x210) == 0) {
              bVar3 = false;
              DAT_1461fd00c = DAT_1461fd00c + 1;
              uVar2 = *(undefined8 *)(lVar11 + 8);
              lVar12 = (longlong)(DAT_1461fd000 + -1);
              if (-1 < DAT_1461fd000 + -1) {
                lVar9 = lVar12 << 4;
                do {
                  if (((*(int *)(lVar9 + 8 + DAT_1461fcff8) == 0) ||
                      (plVar8 = *(longlong **)(lVar9 + DAT_1461fcff8), plVar8 == (longlong *)0x0))
                     || (cVar5 = (**(code **)(*plVar8 + 0x40))
                                           (plVar8,uVar2,lVar11 + 0x10,lVar11 + 0x1f0,lVar11 + 0x200
                                           ), cVar5 == '\0')) {
                    bVar3 = true;
                  }
                  lVar9 = lVar9 + -0x10;
                  lVar12 = lVar12 + -1;
                } while (-1 < lVar12);
              }
              iVar7 = DAT_1461fd000;
              DAT_1461fd00c = DAT_1461fd00c + -1;
              if ((bVar3) && (DAT_1461fd00c < 1)) {
                uVar10 = uVar14;
                uVar13 = uVar14;
                if (0 < DAT_1461fd000) {
                  do {
                    if (((*(int *)(uVar10 + 8 + DAT_1461fcff8) == 0) ||
                        (*(longlong **)(uVar10 + DAT_1461fcff8) == (longlong *)0x0)) ||
                       (cVar5 = (**(code **)(**(longlong **)(uVar10 + DAT_1461fcff8) + 0x10))(),
                       cVar5 != '\0')) {
                      TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl
                                (&DAT_1461fcff8,uVar13,1,1);
                    }
                    else {
                      uVar13 = (ulonglong)((int)uVar13 + 1);
                      uVar10 = uVar10 + 0x10;
                    }
                  } while ((int)uVar13 < DAT_1461fd000);
                }
                _DAT_1461fd008 = DAT_1461fd000 * 2;
                if (_DAT_1461fd008 < 3) {
                  _DAT_1461fd008 = 2;
                }
                if ((_DAT_1461fd008 < iVar7) && (DAT_1461fd004 != DAT_1461fd000)) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1461fcff8);
                }
              }
            }
            DAT_1468536c0 = DAT_1468536c0 + -1;
            local_res10 = local_res10 + 1;
            uVar15 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
            lVar17 = lVar17 + 0x210;
            LOCK();
            iVar7 = *(int *)(DAT_146853710 + 0x840c);
            if (iVar7 == 0) {
              *(int *)(DAT_146853710 + 0x840c) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          } while ((int)uVar15 < iVar7);
        }
      }
      while( true ) {
        plVar4 = DAT_146853708;
        plVar8 = (longlong *)*DAT_146853708;
        if (plVar8 == (longlong *)0x0) break;
        puVar1 = (undefined8 *)plVar8[1];
        DAT_146853708 = plVar8;
        plVar8[1] = 0;
        FMemory::operator_delete(plVar4,0x10);
        if (*(int *)(puVar1 + 0x41) == 1) {
          lVar17 = puVar1[9];
          if (((lVar17 != 0) && (puVar1[10] != -1)) &&
             ((puVar1[10] == *(longlong *)(lVar17 + 0xd0) &&
              (*(int *)(lVar17 + 0x2e4) = *(int *)(lVar17 + 0x2e4) + 1, lVar17 != 0)))) {
            FUN_1405947e0(lVar17,puVar1);
            FUN_1405a53f0(lVar17);
          }
        }
        else if (*(int *)(puVar1 + 0x41) == 0) {
          bVar3 = false;
          DAT_1461fd00c = DAT_1461fd00c + 1;
          uVar2 = *puVar1;
          lVar17 = (longlong)(DAT_1461fd000 + -1);
          if (-1 < DAT_1461fd000 + -1) {
            lVar11 = lVar17 << 4;
            do {
              if (((*(int *)(lVar11 + 8 + DAT_1461fcff8) == 0) ||
                  (plVar8 = *(longlong **)(lVar11 + DAT_1461fcff8), plVar8 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar8 + 0x40))
                                    (plVar8,uVar2,puVar1 + 1,puVar1 + 0x3d,puVar1 + 0x3f),
                 cVar5 == '\0')) {
                bVar3 = true;
              }
              lVar11 = lVar11 + -0x10;
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
          }
          iVar7 = DAT_1461fd000;
          DAT_1461fd00c = DAT_1461fd00c + -1;
          if ((bVar3) && (DAT_1461fd00c < 1)) {
            uVar10 = uVar14;
            uVar13 = uVar14;
            if (0 < DAT_1461fd000) {
              do {
                if (((*(int *)(uVar10 + 8 + DAT_1461fcff8) == 0) ||
                    (*(longlong **)(uVar10 + DAT_1461fcff8) == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(**(longlong **)(uVar10 + DAT_1461fcff8) + 0x10))(),
                   cVar5 != '\0')) {
                  TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1461fcff8,uVar13,1,1);
                }
                else {
                  uVar13 = (ulonglong)((int)uVar13 + 1);
                  uVar10 = uVar10 + 0x10;
                }
              } while ((int)uVar13 < DAT_1461fd000);
            }
            _DAT_1461fd008 = DAT_1461fd000 * 2;
            if (DAT_1461fd000 * 2 < 3) {
              _DAT_1461fd008 = 2;
            }
            if ((_DAT_1461fd008 < iVar7) && (DAT_1461fd004 != DAT_1461fd000)) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1461fcff8);
            }
          }
        }
        DAT_1468536c0 = DAT_1468536c0 + -1;
        FUN_140590fa0(puVar1);
        FMemory::operator_delete(puVar1,0x210);
      }
      if (DAT_1468536c0 == 0) {
        if (DAT_146853710 == 0) {
          return;
        }
        LOCK();
        *(undefined4 *)(DAT_146853710 + 0x8408) = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)(DAT_146853710 + 0x840c) = 0;
        UNLOCK();
        return;
      }
      if ((param_1 & bVar18) == 0) {
LAB_140597db2:
        if (DAT_146853710 != 0) {
          (**(code **)(**(longlong **)(DAT_146853710 + 0x8420) + 0x10))();
        }
        FUN_1416b1760(0);
      }
      else {
        plVar8 = (longlong *)FTaskGraphInterface::Get();
        cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,2);
        if (cVar5 != '\0') goto LAB_140597db2;
        plVar8 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar8 + 0x30))(plVar8,2);
      }
    } while (DAT_1468536c0 != 0);
  }
  return;
}



// FUNCTION 140597e40 FUN_140597e40 body=786 status=ok
// SIG undefined FUN_140597e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140597e40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_168 [32];
  undefined1 **local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = *param_2;
  uStack_130 = param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar6 = 0;
  plVar11 = (longlong *)(param_1 + 0x18);
  iVar9 = *(int *)(param_1 + 0x20);
  local_128 = param_2[2];
  uStack_120 = param_2[3];
  plVar5 = plVar2 + iVar9;
  local_118 = *(undefined4 *)(param_2 + 4);
  uStack_114 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_110 = *(undefined4 *)(param_2 + 5);
  uStack_10c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_108 = local_138;
  uStack_100 = uStack_130;
  local_f8 = local_128;
  uStack_f0 = uStack_120;
  if (plVar2 != plVar5) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (((plVar1 != (longlong *)0x0) &&
          (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) &&
         (*(char *)((longlong)puVar3 + 0x71) != '\0')) {
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          plVar1 = (longlong *)*plVar2;
        }
        FMemory::operator_delete(plVar1,0x18);
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar5);
    iVar9 = *(int *)(param_1 + 0x20);
  }
  if (iVar9 != 0) {
    bVar14 = *(longlong *)*plVar11 != 0;
    lVar7 = (longlong)iVar9;
    uVar10 = uVar6;
    uVar13 = uVar6;
    do {
      iVar9 = (int)uVar10;
      uVar6 = uVar6 + 1;
      uVar10 = (ulonglong)(iVar9 + 1);
      if ((longlong)uVar6 < lVar7) {
        plVar5 = (longlong *)(*plVar11 + uVar6 * 8);
        do {
          if (bVar14 != (*plVar5 != 0)) break;
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar6 = uVar6 + 1;
          plVar5 = plVar5 + 1;
        } while ((longlong)uVar6 < lVar7);
      }
      iVar8 = (int)uVar10 - iVar9;
      if (bVar14 != false) {
        iVar12 = (int)uVar13;
        if (iVar12 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + (longlong)iVar12 * 8),
                     (void *)(*plVar11 + (longlong)iVar9 * 8),(longlong)iVar8 << 3);
        }
        uVar13 = (ulonglong)(uint)(iVar12 + iVar8);
      }
      bVar14 = (bool)(bVar14 ^ 1);
    } while ((longlong)uVar6 < lVar7);
    *(int *)(param_1 + 0x20) = (int)uVar13;
  }
  plVar5 = (longlong *)0x0;
  plVar2 = (longlong *)operator_new(0x18);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    *(undefined4 *)(plVar2 + 2) = 0;
    plVar5 = plVar2;
  }
  local_a8 = plVar5 + 2;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x40,local_88);
  lVar7 = local_f8;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143fcfea8;
    puVar3[1] = local_138;
    puVar3[2] = uStack_130;
    puVar3[3] = local_128;
    puVar3[4] = uStack_120;
    puVar3[5] = CONCAT44(uStack_114,local_118);
    puVar3[6] = CONCAT44(uStack_10c,uStack_110);
    puVar3[7] = local_a8;
  }
  local_148 = local_98;
  local_98[0] = &LAB_140595bd0;
  local_140 = local_f8;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                    (*(longlong **)(param_1 + 0x10),local_108,uStack_100._4_4_,4);
  if (lVar4 == 0) {
    FMemory::operator_delete(plVar5,0x18);
  }
  else {
    *plVar5 = lVar4;
    plVar5[1] = lVar7;
    iVar9 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar9 + 1;
    if (*(int *)(param_1 + 0x24) < iVar9 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar9);
    }
    *(longlong **)(*plVar11 + (longlong)iVar9 * 8) = plVar5;
  }
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
  return 1;
}



// FUNCTION 140598160 DoWork body=103 status=ok
// SIG undefined DoWork(void)

undefined8 AkWriteFileCustomParam::DoWork(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),*param_2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                    (*(longlong **)(param_1 + 0x10),param_2[2],*(undefined4 *)(param_2 + 1));
  if (cVar1 != '\0') {
    if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(param_2,1);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1405981d0 DrawTrack body=642 status=ok
// SIG undefined DrawTrack(void)

void UInterpTrackAkAudioEvent::DrawTrack
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  local_90 = *(longlong *)(param_2 + 0x60);
  local_res18 = param_3;
  local_res20 = param_4;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      local_80 = (undefined2 *)0x0;
      local_78 = 5;
      lVar1 = *(longlong *)(uVar8 + 8 + *(longlong *)(param_1 + 0x90));
      local_res10 = (int)((*(float *)(uVar8 + *(longlong *)(param_1 + 0x90)) -
                          *(float *)(param_4 + 0xc)) * *(float *)(param_4 + 0x10));
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
      puVar7 = local_80;
      FGenericPlatformString::Memcpy(local_80,L"None",10);
      if (lVar1 == 0) {
        ppuVar4 = (undefined2 **)(*(longlong *)(param_1 + 0x90) + 0x10 + uVar8);
        if (&local_80 != ppuVar4) {
          iVar6 = *(int *)(ppuVar4 + 1);
          puVar5 = *ppuVar4;
          local_78 = CONCAT44(local_78._4_4_,iVar6);
          if ((iVar6 == 0) && (local_78._4_4_ == 0)) {
            local_78 = 0;
            iVar6 = 0;
            goto LAB_14059831a;
          }
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar6);
          puVar7 = local_80;
          ::_guard_xfg_dispatch_icall_nop(local_80,puVar5,(longlong)iVar6 * 2);
        }
        iVar6 = (int)local_78;
      }
      else {
        local_88 = *(undefined8 *)(lVar1 + 0x18);
        FName::ToString(&local_88,&local_70);
        if (puVar7 != (undefined2 *)0x0) {
          FMemory::Free(puVar7);
        }
        puVar7 = local_70;
        local_78 = CONCAT44(local_68._4_4_,(int)local_78);
        local_70 = (undefined2 *)0x0;
        iVar6 = (int)local_68;
        local_68 = 0;
      }
LAB_14059831a:
      puVar5 = &DAT_143f3eda8;
      if (iVar6 != 0) {
        puVar5 = puVar7;
      }
      uVar2 = UEngine::GetSmallFont();
      StringSize(uVar2,local_98,local_res8,puVar5);
      if (local_90 != 0) {
        puVar3 = (undefined8 *)operator_new(0x38);
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)0x0;
        }
        else {
          HHitProxy::HHitProxy(puVar3,3);
          puVar3[5] = param_1;
          *puVar3 = &PTR__scalar_deleting_destructor__143fcd190;
          puVar3[4] = local_res18;
          *(int *)(puVar3 + 6) = (int)uVar10;
        }
        FCanvas::SetHitProxy(param_2,puVar3);
      }
      FLinearColor::FLinearColor(local_60);
      UEngine::GetSmallFont();
      FUN_1428a6e00(param_2);
      if (local_90 != 0) {
        FCanvas::SetHitProxy(param_2);
      }
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 0x20;
      param_4 = local_res20;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 140598460 DuplicateKeyframe body=321 status=ok
// SIG undefined DuplicateKeyframe(void)

uint UInterpTrackAkAudioEvent::DuplicateKeyframe
               (longlong param_1,int param_2,float param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 in_R8;
  longlong local_28 [4];
  ulonglong uVar10;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x98) <= param_2)) {
    return 0xffffffff;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + *plVar1);
  uVar3 = *(undefined8 *)(puVar7 + 2);
  FString::FString(local_28,puVar7 + 4,in_R8,param_4,*puVar7);
  uVar6 = 0;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    pfVar5 = (float *)*plVar1;
    uVar10 = uVar6;
    do {
      uVar9 = (uint)uVar10;
      if (param_3 < *pfVar5 || param_3 == *pfVar5) break;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 8;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x98));
  }
  iVar2 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar2 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar2);
  }
  lVar8 = (longlong)(int)uVar9 * 0x20;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar8 + 0x20),(void *)(*plVar1 + lVar8),
             (longlong)(int)(iVar2 - uVar9) << 5);
  lVar4 = *plVar1;
  *(undefined8 *)(lVar8 + lVar4) = 0;
  *(undefined8 *)(lVar8 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar8 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar8 + 0x18 + lVar4) = 0;
  lVar4 = *plVar1;
  *(undefined8 *)(lVar8 + 8 + lVar4) = uVar3;
  *(float *)(lVar8 + lVar4) = param_3;
  FString::operator=(lVar4 + 0x10 + lVar8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 1405985b0 Empty body=447 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_140598681;
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
LAB_140598681:
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
      lVar5 = (longlong)iStack_2c * 0x70 + *param_1;
      *(undefined4 *)(lVar5 + 0x60) = 0;
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x18);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 140598770 FUN_140598770 body=451 status=ok
// SIG undefined FUN_140598770(void)

void FUN_140598770(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_140598841;
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
LAB_140598841:
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
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 140598940 FUN_140598940 body=233 status=ok
// SIG undefined FUN_140598940(void)

void FUN_140598940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0x528) == '\0') {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x528) = 1;
    plVar4 = *(longlong **)(param_1 + 0x488);
    uVar5 = (longlong)*(int *)(param_1 + 0x490) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x490) < plVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        lVar2 = *plVar4;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x52c) = *(int *)(lVar2 + 0x52c) + 1;
          iVar1 = *(int *)(lVar2 + 0x4d0);
          *(int *)(lVar2 + 0x4d0) = iVar1 + 1;
          if (*(int *)(lVar2 + 0x4d4) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x4c8,iVar1);
          }
          *(longlong *)(*(longlong *)(lVar2 + 0x4c8) + (longlong)iVar1 * 8) = param_1;
          FUN_140597570(lVar2);
          FUN_140599610(lVar2);
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return;
}



// FUNCTION 140598a30 FUN_140598a30 body=354 status=ok
// SIG undefined FUN_140598a30(void)

undefined8 FUN_140598a30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  BOOL BVar8;
  void *_Src;
  
  iVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  iVar5 = (**(code **)(*(longlong *)*param_2 + 8))();
  uVar6 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar7 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  if (iVar7 == 2) {
    iVar7 = 4;
    uVar3 = 1;
  }
  else {
    if (iVar7 != 4) {
      return 0;
    }
    iVar7 = 2;
    uVar3 = 0;
  }
  cVar2 = FUN_1405b3ce0(param_1,uVar6,iVar5,(char)iVar7 << 3,uVar3);
  if (cVar2 != '\0') {
    iVar7 = iVar7 * iVar5 * iVar4;
    _Src = (void *)(*(code *)**(undefined8 **)*param_2)();
    lVar1 = *(longlong *)(param_1 + 8);
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    }
    iVar4 = *(int *)(lVar1 + 0x140);
    iVar5 = iVar4 + iVar7;
    *(int *)(lVar1 + 0x140) = iVar5;
    if (*(int *)(lVar1 + 0x144) < iVar5) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(lVar1 + 0x138,iVar4);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar4 + *(longlong *)(lVar1 + 0x138)),_Src,(longlong)iVar7);
    if ((int)((uint)*(byte *)(lVar1 + 0x124) * (uint)*(byte *)(lVar1 + 0x12d) *
             *(int *)(lVar1 + 0xd8)) < *(int *)(lVar1 + 0x140)) {
      FUN_1405a74f0(lVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
  }
  return 1;
}



// FUNCTION 140598ba0 FUN_140598ba0 body=1763 status=ok
// SIG undefined FUN_140598ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140598ba0(void *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  AKRESULT AVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  IAkStreamMgr *pIVar8;
  IAkFileLocationResolver *pIVar9;
  short *psVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  void *_Dst;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  double dVar19;
  undefined1 auStackY_1c8 [32];
  longlong local_198;
  ulonglong local_190;
  undefined4 local_188;
  undefined4 local_184;
  ulonglong local_180;
  int local_178;
  int iStack_174;
  AkInitSettings local_168 [12];
  undefined4 local_15c;
  undefined4 local_158;
  long local_150;
  undefined1 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_100;
  undefined4 local_f8;
  AkDeviceSettings local_e8 [8];
  undefined4 local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_bc;
  undefined1 local_b8;
  AkPlatformInitSettings local_a8 [56];
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_1c8;
  plVar15 = (longlong *)0x0;
  local_184 = 0;
  uVar6 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar6,L"nosound");
  if (((cVar3 != '\0') || (DAT_1468b5a25 != '\0')) || (DAT_1468b616c != '\0')) goto LAB_140599253;
  if (DAT_1468536c5 == '\0') {
    lVar7 = FUN_14058e3a0();
    local_180 = (ulonglong)*(uint *)(lVar7 + 0x148);
    AVar4 = AK::MemoryMgr::Init((AkMemSettings *)&local_180);
    if (AVar4 == 1) {
      AK::StreamMgr::GetDefaultSettings((AkStreamMgrSettings *)&local_188);
      local_188 = (undefined4)(longlong)(*(float *)(lVar7 + 0x14c) * 1048576.0);
      pIVar8 = AK::StreamMgr::Create((AkStreamMgrSettings *)&local_188);
      if (pIVar8 != (IAkStreamMgr *)0x0) {
        AK::StreamMgr::GetDefaultDeviceSettings(local_e8);
        local_d4 = *(undefined4 *)(lVar7 + 0x154);
        local_bc = 0x20;
        local_e0 = (undefined4)(longlong)(*(float *)(lVar7 + 0x150) * 1048576.0);
        local_b8 = *(undefined1 *)(lVar7 + 0x158);
        local_d0 = 2;
        pIVar9 = AK::StreamMgr::GetFileLocationResolver();
        if (pIVar9 == (IAkFileLocationResolver *)0x0) {
          AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)&PTR_PTR_1461fd038);
        }
        DAT_1461fd05c =
             AK::StreamMgr::CreateDevice(local_e8,(IAkLowLevelIOHook *)&PTR_PTR_1461fd040);
        if (DAT_1461fd05c != 0xffffffff) {
          *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
          AK::SoundEngine::RegisterAudioDeviceStatusCallback
                    ((_func_void_IAkGlobalPluginContext_ptr_ulong_ulong_AkAudioDeviceEvent_AKRESULT
                      *)&LAB_140597550);
          local_138 = 0;
          local_12c = 0;
          local_130 = 0;
          AK::SoundEngine::GetDefaultInitSettings(local_168);
          AK::SoundEngine::GetDefaultPlatformInitSettings(local_a8);
          cVar3 = FUN_1415bac00();
          plVar18 = plVar15;
          if (cVar3 == '\0') {
LAB_140598dc7:
            bVar1 = false;
          }
          else {
            psVar10 = (short *)FCommandLine::Get();
            local_198 = 0;
            local_190 = 0;
            if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
              lVar17 = -1;
              do {
                lVar17 = lVar17 + 1;
              } while (psVar10[lVar17] != 0);
              uVar16 = (int)lVar17 + 1;
              local_190 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
              }
              FGenericPlatformString::Memcpy(local_198,psVar10,(longlong)(int)uVar16 * 2);
            }
            plVar18 = (longlong *)0x1;
            iVar5 = FUN_141592950(&local_198,L"SingleCoreWwise",1,0);
            if (iVar5 != -1) goto LAB_140598dc7;
            bVar1 = true;
          }
          if ((plVar18 != (longlong *)0x0) && (local_198 != 0)) {
            FMemory::Free();
          }
          if ((bVar1) && (DAT_146853918 = FUN_1415ab270(), DAT_146853918 != 0)) {
            local_f8 = 4;
            local_100 = FUN_140594360;
          }
          local_15c = (undefined4)(longlong)(*(float *)(lVar7 + 0x160) * 1048576.0);
          local_140 = (undefined4)(longlong)(*(float *)(lVar7 + 0x168) * 1048576.0);
          local_13c = (undefined4)(longlong)(*(float *)(lVar7 + 0x16c) * 1048576.0);
          local_158 = *(undefined4 *)(lVar7 + 0x178);
          local_144 = 0x400;
          local_150 = AK::MemoryMgr::CreatePool((void *)0x0,0x1400000,0x400,1,0x10);
          local_14c = 1;
          if (local_150 != -1) {
            AK::MemoryMgr::SetPoolName(local_150,"PrepareEvent");
          }
          local_70 = (undefined4)(longlong)(*(float *)(lVar7 + 0x164) * 1048576.0);
          local_6c = *(undefined4 *)(lVar7 + 0x164);
          AVar4 = AK::SoundEngine::Init(local_168,local_a8);
          if (AVar4 == 1) {
            AK::MusicEngine::GetDefaultInitSettings((AkMusicSettings *)&local_184);
            AVar4 = AK::MusicEngine::Init((AkMusicSettings *)&local_184);
            if (AVar4 == 1) {
              FUN_1405a96a0(param_1);
              lVar17 = FInternationalization::Get();
              plVar18 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar18 != (longlong *)0x0) {
                plVar18[1] = (longlong)param_1;
                *plVar18 = (longlong)&PTR_GetPoolName_143fcffe0;
                plVar18[2] = (longlong)FUN_1405a0390;
                *(undefined1 *)(plVar18 + 3) = 0;
                lVar11 = FDelegateHandle::GenerateNewID();
                plVar18[4] = lVar11;
                *plVar18 = (longlong)&PTR_GetPoolName_143fd0028;
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar17 + 8,1);
                (**(code **)(*plVar18 + 0x20))(plVar18,&local_198);
                iVar5 = *(int *)(lVar17 + 0x10);
                *(int *)(lVar17 + 0x10) = iVar5 + 1;
                if (*(int *)(lVar17 + 0x14) < iVar5 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar17 + 8,iVar5);
                }
                puVar12 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar17 + 8));
                *puVar12 = plVar18;
                *(undefined4 *)(puVar12 + 1) = 3;
              }
              FUN_1405a0390(param_1,0);
              DAT_1468536c5 = '\x01';
              FUN_14059f3c0(param_1);
              plVar13 = (longlong *)operator_new(0x48);
              plVar18 = plVar15;
              if (plVar13 != (longlong *)0x0) {
                *plVar13 = 0;
                plVar13[1] = 0;
                plVar13[2] = 0;
                plVar13[3] = 0;
                InitializeCriticalSection((LPCRITICAL_SECTION)(plVar13 + 4));
                SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar13 + 4),4000);
                plVar18 = plVar13;
              }
              DAT_1468536d0 = plVar18;
              *(undefined1 *)((longlong)param_1 + 0x1c8) = 0;
              *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
              AK::SoundEngine::RegisterGlobalCallback(FUN_140595060,4,param_1,0,0,0);
              FUN_1405aad10(param_1,lVar7 + 0x120);
              FUN_1405aa900(param_1,*(undefined4 *)(lVar7 + 0x11c));
              AK::SoundEngine::GetAudioSettings((AkAudioSettings *)&local_178);
              *(int *)((longlong)param_1 + 0x1dc) = local_178;
              *(int *)((longlong)param_1 + 0x1d8) = iStack_174;
              if (iStack_174 < 1) {
                dVar19 = 0.0;
              }
              else {
                dVar19 = (double)local_178 / (double)iStack_174;
              }
              *(double *)((longlong)param_1 + 0x1e0) = dVar19;
              *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
              *(void **)((longlong)param_1 + 0x1e8) = param_1;
              uVar14 = DAT_1461fd070;
              uVar2 = DAT_1461fd070 + 1;
              if ((DAT_1461fd070 & 3) == 0) {
                uVar14 = DAT_1461fd070 + 1;
                uVar2 = DAT_1461fd070 + 2;
              }
              DAT_1461fd070 = uVar2;
              *(ulonglong *)((longlong)param_1 + 0x1f0) = uVar14;
              AK::SoundEngine::RegisterGameObj(uVar14);
              uVar14 = DAT_1461fd070;
              uVar2 = DAT_1461fd070 + 1;
              if ((DAT_1461fd070 & 3) == 0) {
                uVar14 = DAT_1461fd070 + 1;
                uVar2 = DAT_1461fd070 + 2;
              }
              DAT_1461fd070 = uVar2;
              *(ulonglong *)((longlong)param_1 + 0x1f8) = uVar14;
              local_198 = 0;
              local_190 = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
              FGenericPlatformString::Memcpy(local_198,L"NonPlayer Mix",0x1c);
              FUN_1405a3b90((longlong)param_1 + 0x1e8,*(undefined8 *)((longlong)param_1 + 0x1f8),
                            &local_198,0x3f800000);
              _Dst = (void *)operator_new(0x170);
              plVar18 = plVar15;
              if (_Dst != (void *)0x0) {
                _guard_xfg_dispatch_icall_nop(_Dst,0,0x170);
                plVar18 = (longlong *)FUN_14058fe10(_Dst);
              }
              plVar13 = (longlong *)((longlong)param_1 + 0x210);
              if (plVar13 != &local_198) {
                lVar7 = *plVar13;
                *plVar13 = (longlong)plVar18;
                FUN_1405919f0(plVar13,lVar7);
                plVar18 = plVar15;
              }
              FUN_1405919f0(&local_198,plVar18);
              *(void **)(*plVar13 + 8) = param_1;
              lVar7 = operator_new(0x8460);
              if (lVar7 != 0) {
                plVar15 = (longlong *)FUN_14058f1f0(lVar7);
              }
              plVar18 = DAT_146853710;
              if (DAT_146853710 != (longlong *)0x0) {
                lVar7 = *DAT_146853710;
                DAT_146853710 = plVar15;
                (**(code **)(lVar7 + 0x28))(plVar18,1);
                plVar15 = DAT_146853710;
              }
              DAT_146853710 = plVar15;
              plVar18 = (longlong *)FUN_1415d42a0(DAT_146853710,L"Async Acoustics Updates",0,0);
              plVar15 = DAT_146853718;
              if (DAT_146853718 != (longlong *)0x0) {
                lVar7 = *DAT_146853718;
                DAT_146853718 = plVar18;
                (**(code **)(lVar7 + 0x28))(plVar15,1);
                plVar18 = DAT_146853718;
              }
              DAT_146853718 = plVar18;
              FUN_1415b2540(DAT_146853718,8);
              goto LAB_14059924f;
            }
          }
        }
      }
    }
LAB_140599253:
    uVar6 = 0;
  }
  else {
LAB_14059924f:
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 140599290 Eval body=538 status=ok
// SIG undefined Eval(void)

ulonglong FInterpCurve<float>::Eval(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar13 = (float)param_2;
  iVar4 = *(int *)(param_1 + 1);
  uVar8 = (ulonglong)iVar4;
  uVar7 = iVar4 - 1;
  if (iVar4 == 0) {
    return (ulonglong)*param_3;
  }
  pfVar1 = (float *)*param_1;
  uVar9 = iVar4 - 1;
  if (*pfVar1 <= fVar13) {
    lVar5 = uVar8 - 1;
    if (fVar13 < pfVar1[lVar5 * 5]) {
      uVar9 = 0;
      while (1 < iVar4) {
        uVar3 = (int)((int)uVar8 + uVar9) / 2;
        uVar8 = uVar8 & 0xffffffff;
        if (fVar13 < pfVar1[(longlong)(int)uVar3 * 5]) {
          uVar8 = (ulonglong)uVar3;
          uVar3 = uVar9;
        }
        uVar9 = uVar3;
        iVar4 = (int)uVar8 - uVar3;
      }
    }
    if (uVar9 != 0xffffffff) {
      if (uVar9 == uVar7) {
        if (*(char *)(param_1 + 2) == '\0') {
          fVar13 = pfVar1[lVar5 * 5 + 1];
          uVar10 = 0;
          goto LAB_1405993ed;
        }
        if (pfVar1[lVar5 * 5] + *(float *)((longlong)param_1 + 0x14) <= fVar13) goto LAB_14059949f;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar9 != uVar7)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar5 = (longlong)(int)uVar9;
      iVar4 = 0;
      if (!bVar2) {
        iVar4 = uVar9 + 1;
      }
      lVar6 = (longlong)iVar4;
      if (!bVar2) {
        fVar14 = pfVar1[lVar6 * 5] - pfVar1[lVar5 * 5];
      }
      else {
        fVar14 = *(float *)((longlong)param_1 + 0x14);
      }
      if ((fVar14 <= 0.0) || (*(char *)(pfVar1 + lVar5 * 5 + 4) == '\x02')) {
        fVar13 = pfVar1[lVar5 * 5 + 1];
        uVar10 = 0;
      }
      else {
        fVar13 = (fVar13 - pfVar1[lVar5 * 5]) / fVar14;
        if (*(char *)(pfVar1 + lVar5 * 5 + 4) == '\0') {
          fVar13 = (pfVar1[lVar6 * 5 + 1] - pfVar1[lVar5 * 5 + 1]) * fVar13 + pfVar1[lVar5 * 5 + 1];
          uVar10 = 0;
        }
        else {
          fVar12 = fVar13 * fVar13;
          fVar11 = fVar12 * fVar13;
          fVar13 = ((fVar11 - (fVar12 + fVar12)) + fVar13) * fVar14 * pfVar1[lVar5 * 5 + 3] +
                   (((fVar11 + fVar11) - fVar12 * 3.0) + 1.0) * pfVar1[lVar5 * 5 + 1] +
                   fVar14 * pfVar1[lVar6 * 5 + 2] * (fVar11 - fVar12) +
                   (fVar12 * 3.0 - (fVar11 + fVar11)) * pfVar1[lVar6 * 5 + 1];
        }
      }
      goto LAB_1405993ed;
    }
  }
LAB_14059949f:
  fVar13 = pfVar1[1];
  uVar10 = 0;
LAB_1405993ed:
  return CONCAT44(uVar10,fVar13);
}



// FUNCTION 1405994b0 FUN_1405994b0 body=344 status=ok
// SIG undefined FUN_1405994b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405994b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined ****ppppuVar4;
  longlong *in_stack_00000028;
  undefined1 auStack_138 [32];
  undefined ***local_118;
  undefined ***local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  byte local_c8;
  undefined1 local_c0 [104];
  undefined8 **local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_100 = *(undefined4 *)(param_1 + 0x20);
  uStack_fc = *(undefined4 *)(param_1 + 0x24);
  uStack_f8 = *(undefined4 *)(param_1 + 0x28);
  uStack_f4 = *(undefined4 *)(param_1 + 0x2c);
  local_c8 = local_c8 | 3;
  local_f0 = *(undefined4 *)(param_1 + 0x30);
  uStack_ec = *(undefined4 *)(param_1 + 0x34);
  uStack_e8 = *(undefined4 *)(param_1 + 0x38);
  uStack_e4 = *(undefined4 *)(param_1 + 0x3c);
  local_e0 = *(undefined4 *)(param_1 + 0x40);
  uStack_dc = *(undefined4 *)(param_1 + 0x44);
  uStack_d8 = *(undefined4 *)(param_1 + 0x48);
  uStack_d4 = *(undefined4 *)(param_1 + 0x4c);
  local_d0 = *(undefined8 *)(param_1 + 0x50);
  local_108 = (undefined ***)&PTR_FUN_143fce258;
  local_118 = (undefined ***)&local_108;
  uVar2 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_c0,in_stack_00000028 + 0x22,(longlong)in_stack_00000028 + 0x124,
                     (longlong)in_stack_00000028 + 0x134);
  iVar1 = (int)in_stack_00000028[1];
  *(int *)(in_stack_00000028 + 1) = iVar1 + 1;
  if (*(int *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
              (in_stack_00000028,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *in_stack_00000028,uVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_58;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  if ((local_c8 & 1) != 0) {
    ppppuVar4 = &local_108;
    if ((local_c8 & 2) == 0) {
      ppppuVar4 = (undefined ****)local_108;
    }
    local_c8 = local_c8 & 0xfe;
    (*(code *)**ppppuVar4)(ppppuVar4,0);
    if ((local_c8 & 2) == 0) {
      FMemory::Free(local_108);
    }
  }
  return;
}



// FUNCTION 140599610 FUN_140599610 body=496 status=ok
// SIG undefined FUN_140599610(void)

void FUN_140599610(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  
  lVar1 = param_1 + 0x4d8;
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4e4)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1,0);
  }
  *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  iVar3 = *(int *)(param_1 + 0x500) + 0x1f;
  _Dst = *(void **)(param_1 + 0x4f8);
  if (*(void **)(param_1 + 0x4f8) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x4e8);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x500) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x520)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x520);
    uVar7 = uVar9;
    do {
      uVar5 = (longlong)*(int *)(param_1 + 0x520) - 1U & uVar7;
      lVar4 = *(longlong *)(param_1 + 0x518);
      if (*(longlong *)(param_1 + 0x518) == 0) {
        lVar4 = param_1 + 0x510;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar4 + uVar5 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  plVar10 = *(longlong **)(param_1 + 0x4c8);
  plVar2 = plVar10 + *(int *)(param_1 + 0x4d0);
  for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
    lVar4 = *plVar10;
    if (lVar4 != 0) {
      plVar6 = *(longlong **)(lVar4 + 0x478);
      uVar7 = (longlong)*(int *)(lVar4 + 0x480) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar4 + 0x480) < plVar6) {
        uVar7 = uVar9;
      }
      uVar8 = uVar9;
      if (uVar7 != 0) {
        do {
          local_res18 = *plVar6;
          if ((local_res18 != 0) && (*(char *)(local_res18 + 0x498) == '\0')) {
            FUN_14058c900(lVar1,local_res8,&local_res18,0);
          }
          plVar6 = plVar6 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
      plVar6 = *(longlong **)(lVar4 + 0x4b8);
      uVar7 = (longlong)*(int *)(lVar4 + 0x4c0) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar4 + 0x4c0) < plVar6) {
        uVar7 = uVar9;
      }
      uVar8 = uVar9;
      if (uVar7 != 0) {
        do {
          local_res18 = *plVar6;
          if ((local_res18 != 0) && (*(char *)(local_res18 + 0x498) == '\0')) {
            FUN_14058c900(lVar1,local_res10,&local_res18,0);
          }
          plVar6 = plVar6 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
    }
  }
  return;
}



// FUNCTION 140599820 FUN_140599820 body=69 status=ok
// SIG undefined FUN_140599820(void)

void FUN_140599820(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140599862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
  return;
}



// FUNCTION 140599870 FUN_140599870 body=70 status=ok
// SIG undefined FUN_140599870(void)

void FUN_140599870(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001405998b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
  return;
}



// FUNCTION 1405998f0 FUN_1405998f0 body=147 status=ok
// SIG undefined FUN_1405998f0(void)

void FUN_1405998f0(longlong *param_1,undefined1 param_2,float param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_14059ee90();
  if (cVar2 != '\0') {
    FUN_140599990(*param_1,(int)param_1[2],param_2,(int)(param_3 * 1000.0),param_4);
  }
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 140599990 FUN_140599990 body=186 status=ok
// SIG undefined FUN_140599990(void)

void FUN_140599990(longlong param_1,ulong param_2,AkActionOnEventType param_3,long param_4,
                  AkCurveInterpolation param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
    if (param_2 != 0) {
      for (lVar1 = *(longlong *)(param_1 + 0xe0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
        if (param_2 == *(ulong *)(lVar1 + 0x20)) {
          lVar2 = FWeakObjectPtr::Get(lVar1 + 0x18);
          if (lVar2 != 0) {
            AK::SoundEngine::ExecuteActionOnEvent
                      (*(ulong *)(lVar2 + 0x28),param_3,*(__uint64 *)(param_1 + 0xd0),param_4,
                       param_5,param_2);
            if (param_3 == 1) {
              *(undefined1 *)(lVar1 + 0x40) = 1;
            }
            else if (param_3 == 2) {
              *(undefined1 *)(lVar1 + 0x40) = 0;
            }
          }
          break;
        }
      }
    }
    FUN_1405a53f0(param_1);
  }
  return;
}



// FUNCTION 140599a60 FUN_140599a60 body=25 status=ok
// SIG undefined FUN_140599a60(void)

undefined8 FUN_140599a60(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140599a80 FUN_140599a80 body=111 status=ok
// SIG undefined FUN_140599a80(void)

undefined8 FUN_140599a80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140599af0 FUN_140599af0 body=112 status=ok
// SIG undefined FUN_140599af0(void)

undefined8 FUN_140599af0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140599b60 ExecuteTask body=329 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FFunctionGraphTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  plVar3 = plVar6;
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar5 + 8))();
    }
  }
  (*(code *)param_1[2])(plVar3);
  if (*(int *)(param_1 + 10) != 0) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 4;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_141591a60(param_1[0xf],param_2,param_3);
  *param_1 = &PTR_FUN_143fca7b0;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar4);
  if (plVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    plVar3 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar3 = plVar5;
    }
    TlsSetValue(*pDVar4,plVar3);
  }
  if ((int)plVar3[2] < 0x20) {
    plVar6 = (longlong *)plVar3[1];
  }
  else {
    if (*plVar3 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar3 = plVar3[1];
    plVar3[1] = 0;
    *(undefined4 *)(plVar3 + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  plVar3[1] = (longlong)param_1;
  return;
}



// FUNCTION 140599cc0 FUN_140599cc0 body=463 status=ok
// SIG undefined FUN_140599cc0(void)

void FUN_140599cc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  BOOL BVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853b30) && (_Init_thread_header(&DAT_146853b30), DAT_146853b30 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3fac0);
    _Init_thread_footer(&DAT_146853b30);
  }
  DAT_146853b28 = 0;
  if ((DAT_146853b2c < 0) && (DAT_146853b2c != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146853b20,0);
  }
  puVar8 = (undefined8 *)*param_1;
  puVar1 = puVar8 + (longlong)(int)param_1[1] * 9;
  iVar5 = DAT_146853b28;
  iVar7 = DAT_146853b2c;
  for (; DAT_146853b28 = iVar5, puVar8 != puVar1; puVar8 = puVar8 + 9) {
    if (puVar8[1] != 0) {
      lVar9 = (longlong)iVar5;
      DAT_146853b28 = iVar5 + 1;
      if (iVar7 < DAT_146853b28) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&DAT_146853b20,iVar5);
      }
      uVar3 = puVar8[1];
      lVar4 = CONCAT44(DAT_146853b20._4_4_,(undefined4)DAT_146853b20);
      puVar2 = (undefined8 *)(lVar4 + lVar9 * 0x48);
      *puVar2 = *puVar8;
      puVar2[1] = uVar3;
      uVar3 = puVar8[3];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar9 * 0x48);
      *puVar2 = puVar8[2];
      puVar2[1] = uVar3;
      uVar3 = puVar8[5];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar9 * 0x48);
      *puVar2 = puVar8[4];
      puVar2[1] = uVar3;
      uVar3 = puVar8[7];
      puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar9 * 0x48);
      *puVar2 = puVar8[6];
      puVar2[1] = uVar3;
      *(undefined8 *)(lVar4 + 0x40 + lVar9 * 0x48) = puVar8[8];
      iVar7 = DAT_146853b2c;
    }
    iVar5 = DAT_146853b28;
  }
  if (param_1 != &DAT_146853b20) {
    DAT_146853b28 = (int)param_1[1];
    lVar9 = CONCAT44(DAT_146853b20._4_4_,(undefined4)DAT_146853b20);
    lVar4 = CONCAT44(DAT_146853b2c,iVar5);
    DAT_146853b20._0_4_ = (int)*param_1;
    DAT_146853b20._4_4_ = *(undefined4 *)((longlong)param_1 + 4);
    DAT_146853b2c = *(int *)((longlong)param_1 + 0xc);
    *param_1 = lVar9;
    param_1[1] = lVar4;
  }
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  iVar5 = (int)param_1[3];
  if (iVar5 != 0) {
    iVar7 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                (param_1);
      iVar7 = (int)param_1[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar7 * 0x48),(void *)param_1[2],(longlong)iVar5 * 0x48
              );
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar5;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140599e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 140599e90 FUN_140599e90 body=103 status=ok
// SIG undefined FUN_140599e90(void)

undefined8 FUN_140599e90(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x670))();
    if ((plVar2 != (longlong *)0x0) && ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) != 0)) {
      cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2);
      if ((cVar1 != '\0') && (plVar2 = (longlong *)plVar2[0xa5], plVar2 != (longlong *)0x0)) {
        uVar3 = UProgressBar::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000140599ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140599f00 FindId body=267 status=ok
// SIG undefined FindId(void)

int * TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x10) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14059a010 FindId body=199 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x20;
        local_res20 = *(undefined4 *)(lVar5 + lVar3);
        local_res24 = *(undefined4 *)(lVar5 + 4 + lVar3);
        local_res8 = *param_3;
        local_resc = param_3[1];
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar1 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar5 + 0x18 + lVar3);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14059a0e0 FindId body=168 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(~param_3[1] ^ *param_3 ^ param_3[2]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if (((*(uint *)(lVar4 + 4 + lVar1) == param_3[1]) && (*(uint *)(lVar4 + lVar1) == *param_3))
           && (*(uint *)(lVar4 + 8 + lVar1) == param_3[2])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14059a190 FindId body=308 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar8 = *param_3 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0x148;
        if ((*(int *)(lVar6 + lVar2) == *param_3) && (*(uint *)(lVar6 + 4 + lVar2) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0x140 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14059a2d0 FUN_14059a2d0 body=526 status=ok
// SIG undefined FUN_14059a2d0(void)

longlong * FUN_14059a2d0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
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
  
  plVar2 = (longlong *)(param_1 + 0x130);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x158);
  puVar1 = (uint *)(param_1 + 0x140);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar6 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar6) goto LAB_14059a39d;
      uVar4 = puVar11[lVar7 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (iStack_70 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14059a39d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x158);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
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
    puVar11 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar8) goto LAB_14059a461;
      uVar10 = puVar11[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar8 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14059a461:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      return (longlong *)0x0;
    }
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if ((plVar5 != (longlong *)0x0) &&
       (lVar7 = (**(code **)(*plVar5 + 0x548))(plVar5), lVar7 == param_2)) break;
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return plVar5;
}



// FUNCTION 14059a4e0 FinishAndTriggerIf body=137 status=ok
// SIG undefined FinishAndTriggerIf(void)

longlong FLatentResponse::FinishAndTriggerIf
                   (longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(char *)(param_1 + 0x70) = param_2;
  if (param_2 != '\0') {
    lVar5 = (longlong)*(int *)(param_1 + 0x68);
    uVar1 = *param_5;
    uVar2 = param_5[1];
    iVar3 = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x68) = iVar3;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow();
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar4 = param_1;
    }
    *(undefined8 *)(lVar4 + lVar5 * 0x18) = param_3;
    *(undefined4 *)(lVar4 + 8 + lVar5 * 0x18) = param_4;
    *(undefined4 *)(lVar4 + 0xc + lVar5 * 0x18) = uVar1;
    *(undefined4 *)(lVar4 + 0x10 + lVar5 * 0x18) = uVar2;
  }
  return param_1;
}



// FUNCTION 14059a570 FUN_14059a570 body=27 status=ok
// SIG undefined FUN_14059a570(void)

void FUN_14059a570(undefined8 param_1)

{
  FUN_140595fe0();
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14059a590 FUN_14059a590 body=53 status=ok
// SIG undefined FUN_14059a590(void)

void FUN_14059a590(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1405adde0(*(longlong *)(param_1 + 0x2d8),param_1);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14059a5d0 FUN_14059a5d0 body=482 status=ok
// SIG undefined FUN_14059a5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14059a5d0(longlong param_1)

{
  void *_Src;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  undefined1 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar6 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  local_30 = *(int *)(param_1 + 0x198);
  lVar5 = (longlong)local_30;
  _Src = *(void **)(param_1 + 400);
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1405a7940(local_78,local_30,0);
    puVar3 = local_78;
    if (local_38 != (undefined1 *)0x0) {
      puVar3 = local_38;
    }
    _guard_xfg_dispatch_icall_nop(puVar3,_Src,lVar5 << 3);
  }
  puVar3 = local_78;
  if (local_38 != (undefined1 *)0x0) {
    puVar3 = puVar6;
  }
  plVar8 = (longlong *)((ulonglong)puVar3 | (ulonglong)local_38);
  puVar3 = (undefined1 *)((longlong)local_30 & 0x1fffffffffffffff);
  if (plVar8 + local_30 < plVar8) {
    puVar3 = puVar6;
  }
  puVar7 = puVar6;
  if (puVar3 != (undefined1 *)0x0) {
    do {
      lVar5 = *plVar8;
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x378) != 0) {
          FUN_1405ac930();
        }
        *(undefined1 *)(lVar5 + 0x403) = 0;
      }
      plVar8 = plVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar3);
  }
  if (local_38 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x180);
  puVar3 = (undefined1 *)((longlong)*(int *)(param_1 + 0x188) & 0x1fffffffffffffff);
  if (plVar8 + *(int *)(param_1 + 0x188) < plVar8) {
    puVar3 = puVar6;
  }
  puVar7 = puVar6;
  if (puVar3 != (undefined1 *)0x0) {
    do {
      lVar5 = *plVar8;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0xc);
        puVar2 = puVar6;
        if ((int)uVar1 < (int)DAT_1469e91c4) {
          uVar4 = uVar1 & 0xffff;
          if ((int)uVar1 < 0) {
            uVar1 = uVar1 + 0xffff;
            uVar4 = uVar4 - 0x10000;
          }
          puVar2 = (undefined1 *)
                   (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                   (longlong)(int)uVar4 * 0x18);
        }
        if ((*(uint *)(puVar2 + 8) & 0x30000000) == 0) {
          FWeakObjectPtr::operator=(lVar5 + 0x3f0,0);
          FUN_1405a8f50(lVar5);
        }
      }
      plVar8 = plVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar3);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x18c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x180,0);
  }
  return;
}



// FUNCTION 14059a7c0 FUN_14059a7c0 body=1121 status=ok
// SIG undefined FUN_14059a7c0(void)

void FUN_14059a7c0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  float *pfVar23;
  uint *puVar24;
  undefined8 local_b8;
  float *pfStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  ulonglong local_90;
  uint local_88;
  int local_84;
  uint local_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined4 local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uVar16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 600);
  local_90 = 0;
  local_84 = 0;
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = (longlong *)(param_1 + 0x280);
  uStack_7c = 1;
  uVar2 = *(uint *)(param_1 + 0x2a8);
  puVar24 = (uint *)(param_1 + 0x290);
  local_80 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  if (uVar2 != 0) {
    puVar22 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar22 = puVar24;
    }
    uVar12 = *puVar22;
    uVar14 = uVar16;
    uVar20 = uVar16;
    while (uVar12 == 0) {
      iVar6 = (int)uVar14;
      uStack_68 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uStack_68;
      local_80 = iVar6 + 1;
      uVar14 = (ulonglong)local_80;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14059a8bc;
      uVar12 = puVar22[(longlong)iVar6 + 1];
    }
    uStack_7c = -uVar12 & uVar12;
    iVar6 = 0x1f;
    if (uStack_7c != 0) {
      for (; uStack_7c >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_7c == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_6c = (uStack_68 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_6c) {
LAB_14059a8bc:
      uStack_6c = uVar2;
    }
  }
  local_70 = 0xffffffff;
  uStack_a4 = *(uint *)(param_1 + 0x2a8);
  pfStack_b0 = (float *)CONCAT44(uStack_7c,local_80);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_6c;
  uStack_98 = CONCAT44(uStack_64,uStack_68);
  uStack_a8 = -1 << ((byte)uStack_a4 & 0x1f);
  uVar21 = uStack_a4 & 0xffffffe0;
  uStack_58 = local_80;
  uStack_54 = uStack_7c;
  uVar14 = uVar16;
  local_b8 = plVar1;
  puStack_78 = puVar24;
  local_50 = puVar24;
  local_40 = uStack_98;
  local_60 = plVar1;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  uVar12 = uStack_a4;
  if (uStack_a4 != uVar2) {
    puVar22 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar22 = puVar24;
    }
    uVar12 = puVar22[(int)uStack_a4 >> 5] & uStack_a8;
    iVar6 = (int)uStack_a4 >> 5;
    while (uVar12 == 0) {
      uVar21 = uVar21 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14059a994;
      uVar12 = puVar22[(longlong)iVar6 + 1];
      uStack_a8 = 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    uVar12 = -uVar12 & uVar12;
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
    uStack_a4 = (uVar21 - iVar6) + 0x1f;
    uVar12 = uStack_a4;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_14059a994:
      uStack_a4 = uVar2;
      uVar12 = uVar2;
    }
  }
  do {
    if (((uStack_44 == uVar12) && (local_50 == puVar24)) && (local_60 == plVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar6 = (int)uVar14;
    if (!bVar3) {
      LeaveCriticalSection(lpCriticalSection);
      for (uVar14 = uVar16; uVar14 != uVar16 + (longlong)iVar6 * 8; uVar14 = uVar14 + 8) {
        uVar10 = FWeakObjectPtr::Get(uVar14);
        FUN_14059fe50(uVar10);
      }
      if (uVar16 != 0) {
        FMemory::Free(uVar16);
      }
      return;
    }
    plVar11 = (longlong *)((longlong)(int)uStack_44 * 0x20 + *local_60);
    local_b8 = (longlong *)*plVar11;
    pfStack_b0 = (float *)0x0;
    uStack_a8 = *(uint *)(plVar11 + 2);
    lVar17 = (longlong)(int)uStack_a8;
    _Src = (void *)plVar11[1];
    if (uStack_a8 == 0) {
      uStack_a4 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&pfStack_b0,uStack_a8,0);
      _guard_xfg_dispatch_icall_nop(pfStack_b0,_Src,lVar17 << 4);
    }
    cVar4 = FWeakObjectPtr::IsValid(&local_b8);
    if (cVar4 == '\0') {
LAB_14059ab9e:
      puVar24 = puStack_78;
      if (pfStack_b0 != (float *)0x0) {
        FMemory::Free();
        puVar24 = puStack_78;
      }
    }
    else {
      lVar17 = FWeakObjectPtr::Get(&local_b8);
      if (*(longlong *)(lVar17 + 0x378) != 0) {
        bVar3 = false;
        pfVar23 = pfStack_b0 + (longlong)(int)uStack_a8 * 4;
        if (pfStack_b0 != pfVar23) {
          pfVar18 = pfStack_b0 + 2;
          do {
            lVar17 = FWeakObjectPtr::Get(&local_b8);
            uVar16 = local_90;
            bVar15 = false;
            if (*(int *)(lVar17 + 0x3a8) != *(int *)(lVar17 + 0x3d4)) {
              lVar8 = *(longlong *)(lVar17 + 0x3e0);
              if (*(longlong *)(lVar17 + 0x3e0) == 0) {
                lVar8 = lVar17 + 0x3d8;
              }
              fVar7 = *(float *)(lVar8 + ((longlong)*(int *)(lVar17 + 1000) - 1U &
                                         (longlong)(int)*pfVar18) * 4);
              if (fVar7 != -NAN) {
                do {
                  pfVar13 = (float *)((longlong)(int)fVar7 * 0x10 + *(longlong *)(lVar17 + 0x3a0));
                  if (*pfVar13 == *pfVar18) {
                    if (fVar7 != -NAN) goto LAB_14059aaf1;
                    break;
                  }
                  fVar7 = pfVar13[2];
                } while (fVar7 != -NAN);
              }
            }
            pfVar13 = (float *)0x0;
LAB_14059aaf1:
            pfVar9 = pfVar13 + 1;
            if (pfVar13 == (float *)0x0) {
              pfVar9 = (float *)0x0;
            }
            if (pfVar9 != (float *)0x0) {
              bVar15 = pfVar18[1] != *pfVar9;
              *pfVar9 = pfVar18[1];
            }
            bVar3 = (bool)(bVar3 | bVar15);
            pfVar13 = pfVar18 + 2;
            pfVar18 = pfVar18 + 4;
          } while (pfVar13 != pfVar23);
          if (bVar3) {
            uVar20 = local_90 + (longlong)iVar6 * 8;
            for (uVar19 = local_90; uVar19 != uVar20; uVar19 = uVar19 + 8) {
              cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(uVar19,&local_b8);
              if (cVar4 != '\0') {
                if ((int)((longlong)(uVar19 - uVar16) >> 3) != -1) goto LAB_14059ab9e;
                break;
              }
            }
            local_88 = iVar6 + 1;
            if (local_84 < (int)local_88) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_90,uVar14);
              uVar16 = local_90;
            }
            uVar14 = (ulonglong)local_88;
            *(undefined4 *)(uVar16 + (longlong)iVar6 * 8) = (undefined4)local_b8;
            *(undefined4 *)(uVar16 + 4 + (longlong)iVar6 * 8) = local_b8._4_4_;
          }
        }
        goto LAB_14059ab9e;
      }
      if (pfStack_b0 != (float *)0x0) {
        FMemory::Free();
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  } while( true );
}



// FUNCTION 14059ac30 FUN_14059ac30 body=351 status=ok
// SIG undefined FUN_14059ac30(void)

undefined8 * FUN_14059ac30(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined6 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uStack_44;
  undefined2 uStack_2a;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = *(undefined4 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  uVar6 = *(undefined6 *)(param_1 + 0xf8);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x90) == '\x02') {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x94);
    if (*(char *)(param_1 + 0x90) != '\x01') {
      iVar7 = iVar7 + 1;
    }
  }
  if (*(char *)(param_1 + 0x98) == '\x02') {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x9c);
    if (*(char *)(param_1 + 0x98) == '\x01') {
      iVar8 = iVar8 + 1;
    }
  }
  uVar9 = UMovieScene::GetPrivateStaticClass();
  lVar10 = UObjectBaseUtility::GetTypedOuter(param_1,uVar9);
  if (lVar10 == 0) {
    uVar9 = 0x10000ea60;
  }
  else {
    uVar9 = *(undefined8 *)(lVar10 + 0xb8);
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  uStack_1c = (undefined4)uVar9;
  uStack_18 = (undefined4)((ulonglong)uVar9 >> 0x20);
  puVar11 = (undefined8 *)FMemory::Malloc(0x58);
  bVar1 = *(byte *)(param_2 + 6);
  *param_2 = puVar11;
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar11 = param_2;
  }
  puVar11[4] = CONCAT44(uStack_44,uVar2);
  puVar11[5] = uVar4;
  *(undefined1 *)(puVar11 + 1) = 0;
  *(undefined1 *)(puVar11 + 2) = 0;
  puVar11[6] = uVar5;
  puVar11[7] = CONCAT26(uStack_2a,uVar6);
  puVar11[3] = 0;
  puVar11[8] = CONCAT44(iVar7,uVar3);
  puVar11[9] = CONCAT44(uStack_1c,iVar8);
  *puVar11 = &PTR_FUN_143fce1d8;
  puVar11[10] = CONCAT44(uStack_14,uStack_18);
  return param_2;
}



// FUNCTION 14059ad90 FUN_14059ad90 body=199 status=ok
// SIG undefined FUN_14059ad90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14059ad90(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x11e,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::GetAllSections");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x11e,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::GetAllSections");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146853950) {
    _Init_thread_header(&DAT_146853950);
    if (DAT_146853950 == -1) {
      DAT_146853940 = 0;
      _DAT_146853948 = 0;
      atexit((_func_5014 *)&LAB_143e3fb20);
      _Init_thread_footer(&DAT_146853950);
      return &DAT_146853940;
    }
  }
  return &DAT_146853940;
}



// FUNCTION 14059ae60 FUN_14059ae60 body=281 status=ok
// SIG undefined FUN_14059ae60(void)

longlong FUN_14059ae60(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong local_res8;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  lVar4 = *param_1;
  lVar2 = 0;
  if (((lVar4 == 0) || (param_1[1] == -1)) || (param_1[1] != *(longlong *)(lVar4 + 0xd0))) {
    lVar4 = 0;
  }
  else {
    *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
    if (((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x2d8), param_2 != '\0')) && (lVar2 == 0)) {
      uVar1 = GetTransientPackage();
      lVar2 = FUN_14058e4d0(uVar1);
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0xba) = *(byte *)(lVar2 + 0xba) & 0xfd;
        *(byte *)(lVar2 + 0x24c) = *(byte *)(lVar2 + 0x24c) | 0x1c;
        *(undefined1 *)(lVar2 + 0x2e0) = 0;
        puVar3 = (undefined8 *)FUN_14059d7c0(lVar4,local_18);
        local_28 = *puVar3;
        local_20 = *(undefined4 *)(puVar3 + 1);
        FUN_1423990b0(lVar2,&local_28,0,0,0);
        *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
        local_res8 = lVar4;
        FUN_1405acf40(lVar2,&local_res8);
        FUN_14234b270(lVar2,*(undefined8 *)(lVar4 + 200));
      }
    }
  }
  if (lVar4 != 0) {
    FUN_1405a53f0(lVar4);
  }
  return lVar2;
}



// FUNCTION 14059af80 thunk_FUN_14059ae60 body=5 status=ok
// SIG undefined thunk_FUN_14059ae60(void)

longlong thunk_FUN_14059ae60(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lStackX_8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 auStack_18 [16];
  
  lVar4 = *param_1;
  lVar2 = 0;
  if (((lVar4 == 0) || (param_1[1] == -1)) || (param_1[1] != *(longlong *)(lVar4 + 0xd0))) {
    lVar4 = 0;
  }
  else {
    *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
    if (((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x2d8), param_2 != '\0')) && (lVar2 == 0)) {
      uVar1 = GetTransientPackage();
      lVar2 = FUN_14058e4d0(uVar1);
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0xba) = *(byte *)(lVar2 + 0xba) & 0xfd;
        *(byte *)(lVar2 + 0x24c) = *(byte *)(lVar2 + 0x24c) | 0x1c;
        *(undefined1 *)(lVar2 + 0x2e0) = 0;
        puVar3 = (undefined8 *)FUN_14059d7c0(lVar4,auStack_18);
        uStack_28 = *puVar3;
        uStack_20 = *(undefined4 *)(puVar3 + 1);
        FUN_1423990b0(lVar2,&uStack_28,0,0,0);
        *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
        lStackX_8 = lVar4;
        FUN_1405acf40(lVar2,&lStackX_8);
        FUN_14234b270(lVar2,*(undefined8 *)(lVar4 + 200));
      }
    }
  }
  if (lVar4 != 0) {
    FUN_1405a53f0(lVar4);
  }
  return lVar2;
}



// FUNCTION 14059af90 FUN_14059af90 body=91 status=ok
// SIG undefined FUN_14059af90(void)

float FUN_14059af90(longlong param_1,bool param_2)

{
  char cVar1;
  AKRESULT AVar2;
  int local_res18 [4];
  
  if (DAT_1468536c5 != '\0') {
    cVar1 = FUN_14059ee90();
    if (cVar1 != '\0') {
      AVar2 = AK::SoundEngine::GetSourcePlayPosition(*(ulong *)(param_1 + 0x10),local_res18,param_2)
      ;
      if (AVar2 == 1) goto LAB_14059afd1;
    }
  }
  local_res18[0] = -1;
LAB_14059afd1:
  return (float)local_res18[0] * 0.001;
}



// FUNCTION 14059aff0 FUN_14059aff0 body=377 status=ok
// SIG undefined FUN_14059aff0(void)

float FUN_14059aff0(longlong param_1,int param_2,undefined1 *param_3)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != 0) {
    for (lVar4 = *(longlong *)(param_1 + 0xe0); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
      if (param_2 == *(int *)(lVar4 + 0x20)) {
        if (((*(uint *)(lVar4 + 0x24) & 0x4000000) != 0) && (*(int *)(lVar4 + 0x38) != 0)) {
          lVar5 = *(longlong *)(lVar4 + 0x30);
          lVar4 = lVar5 + (longlong)*(int *)(lVar4 + 0x38) * 0x18;
          fVar6 = 0.0;
          while (fVar7 = fVar6, lVar5 != lVar4) {
            pfVar1 = (float *)(lVar5 + 0xc);
            lVar5 = lVar5 + 0x18;
            fVar6 = *pfVar1;
            if (*pfVar1 <= fVar7) {
              fVar6 = fVar7;
            }
          }
          fVar7 = fVar7 * *(float *)(param_1 + 0x2a4);
          goto LAB_14059b033;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        lVar4 = FWeakObjectPtr::Get(lVar4 + 0x18);
        if (lVar4 != 0) {
          lVar5 = UPawnAction_Sequence::StaticClass();
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
            if ((*(float *)(lVar4 + 0x38) != 0.0) &&
               (iVar3 = _finite((double)*(float *)(lVar4 + 0x38)), iVar3 != 0)) {
              fVar7 = SQRT(*(float *)(param_1 + 300)) * (1.0 / *(float *)(lVar4 + 0x38));
              fVar6 = 0.0;
              if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
                fVar6 = 1.0;
              }
              fVar6 = 1.0 - fVar6;
              fVar7 = fVar6 * fVar6 * fVar6 * *(float *)(param_1 + 0x2a4);
              goto LAB_14059b033;
            }
          }
        }
        fVar7 = *(float *)(param_1 + 0x2a4);
        goto LAB_14059b033;
      }
    }
  }
  fVar7 = 0.0;
LAB_14059b033:
  if (param_1 != 0) {
    FUN_1405a53f0(param_1);
  }
  return fVar7;
}



// FUNCTION 14059b170 FUN_14059b170 body=53 status=ok
// SIG undefined FUN_14059b170(void)

undefined8 FUN_14059b170(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    uVar2 = FUN_14059aff0(lVar1,(int)param_1[2],param_2);
    return uVar2;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}



// FUNCTION 14059b1b0 FUN_14059b1b0 body=450 status=ok
// SIG undefined FUN_14059b1b0(void)

longlong * FUN_14059b1b0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint local_res18 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_res18[0] = 0;
  if (DAT_1468536c5 != '\0') {
    AK::SoundEngine::GetSpeakerConfiguration((__uint64)local_res18);
    if ((char)local_res18[0] != '\0') {
      uVar4 = local_res18[0] >> 0xc;
      bVar8 = (uVar4 & 8) != 0;
      iVar7 = (uint)((uVar4 & 0x4000) != 0) + (uint)((uVar4 & 0x2000) != 0) +
              (uint)((uVar4 & 0x1000) != 0) + (uint)((uVar4 & 0x800) != 0) +
              (uint)((uVar4 & 0x20000) != 0) + (uint)((uVar4 & 0x10000) != 0) +
              (uint)((uVar4 & 0x8000) != 0);
      if (iVar7 + (uint)bVar8 < (local_res18[0] & 0xff)) {
        iVar6 = (local_res18[0] & 0xff) - (iVar7 + (uint)bVar8);
        bVar9 = iVar7 == 0;
        if (bVar9) {
          FString::PrintfImpl(local_38,L"%d.%d",iVar6,bVar8);
          plVar5 = local_38;
        }
        else {
          FString::PrintfImpl(local_28,L"%d.%d.%d",iVar6,iVar7,bVar8);
          plVar5 = local_28;
        }
        lVar2 = *plVar5;
        *plVar5 = 0;
        lVar3 = plVar5[1];
        uVar1 = *(undefined4 *)((longlong)plVar5 + 0xc);
        plVar5[1] = 0;
        if (bVar9) {
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
        if ((!bVar9) && (local_28[0] != 0)) {
          FMemory::Free();
        }
        *param_2 = lVar2;
        *(int *)(param_2 + 1) = (int)lVar3;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Unknown",0x10);
  return param_2;
}



// FUNCTION 14059b380 FUN_14059b380 body=679 status=ok
// SIG undefined FUN_14059b380(void)

ulonglong FUN_14059b380(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uVar10 = 0;
  fVar16 = -1.0;
  plVar2 = (longlong *)(param_1 + 0x130);
  uVar3 = *(uint *)(param_1 + 0x158);
  puVar1 = (uint *)(param_1 + 0x140);
  uStack_b4 = 1;
  local_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    uVar8 = uVar10;
    uVar11 = uVar10;
    while (uVar4 == 0) {
      iVar5 = (int)uVar8;
      uStack_a0 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_a0;
      local_b8 = iVar5 + 1;
      uVar8 = (ulonglong)local_b8;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar5) goto LAB_14059b46d;
      uVar4 = puVar12[(longlong)iVar5 + 1];
    }
    uStack_b4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (uStack_a0 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_14059b46d:
      uStack_a4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x158);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = CONCAT44(uStack_9c,uStack_a0);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uVar7 = uVar4 & 0xffffffe0;
  uStack_80 = local_b8;
  uStack_7c = uStack_b4;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_a4 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar5 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar7 = uVar7 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar5) goto LAB_14059b531;
      uVar9 = puVar12[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar5 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (uVar7 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_14059b531:
      uStack_a4 = uVar3;
    }
  }
  while ((uStack_6c != uStack_a4 || (local_78 != puVar1))) {
    uVar8 = *(ulonglong *)(*plVar2 + (longlong)(int)uStack_6c * 0x10);
    lVar6 = *(longlong *)(uVar8 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(uVar8);
    }
    if ((lVar6 == param_2) &&
       ((fVar15 = (float)((ulonglong)*(undefined8 *)(uVar8 + 0x2e0) >> 0x20) - param_3[1],
        fVar14 = (float)*(undefined8 *)(uVar8 + 0x2e0) - *param_3,
        fVar13 = *(float *)(uVar8 + 0x2e8) - param_3[2],
        fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13, uVar10 == 0 ||
        (fVar13 < fVar16)))) {
      uVar10 = uVar8;
      fVar16 = fVar13;
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  if ((uVar10 != 0) && (param_4 != (float *)0x0)) {
    *param_4 = fVar16;
  }
  return uVar10;
}



// FUNCTION 14059b630 FUN_14059b630 body=77 status=ok
// SIG undefined FUN_14059b630(void)

undefined4 FUN_14059b630(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if ((lVar1 == 0) ||
     (*(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1, *(int *)(lVar1 + 0x118) == 0)) {
    uVar2 = 0x54800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 300);
  }
  if (lVar1 != 0) {
    FUN_1405a53f0();
  }
  return uVar2;
}



// FUNCTION 14059b680 FUN_14059b680 body=155 status=ok
// SIG undefined FUN_14059b680(void)

void FUN_14059b680(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x148))();
  }
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    lVar3 = FUN_14059b380(DAT_1468536c8,uVar2,param_2,local_res8);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x2e8);
      *param_3 = *(undefined8 *)(lVar3 + 0x2e0);
      *(undefined4 *)(param_3 + 1) = uVar1;
      *param_4 = 1;
      return;
    }
  }
  *param_4 = 0;
  return;
}



// FUNCTION 14059b720 GetClosestSnapPosition body=178 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined1
UInterpTrackAkAudioEvent::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x98);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_14059b7b2;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x90));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_14059b7b2:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 14059b7e0 FUN_14059b7e0 body=1004 status=ok
// SIG undefined FUN_14059b7e0(void)

longlong FUN_14059b7e0(longlong *param_1,char param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  float fVar14;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  float local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  if ((DAT_146b17150 != 0) && (param_1 != (longlong *)0x0)) {
    iVar9 = *(int *)((longlong)param_1 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar10 = iVar9 >> 0x1f & 0xffff;
      uVar3 = iVar9 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      uVar4 = FUN_1405b9600();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
        return lVar6;
      }
      plVar5 = param_1 + 0x56;
      local_c8 = 0;
      uVar3 = *(uint *)(param_1 + 0x5b);
      puVar1 = (uint *)(param_1 + 0x58);
      uStack_c4 = 1;
      uStack_b4 = 0;
      iStack_b0 = 0;
      if (uVar3 != 0) {
        puVar13 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar10 = *puVar13;
        iStack_b0 = 0;
        local_c8 = 0;
        while (uVar10 == 0) {
          lVar6 = (longlong)local_c8;
          iStack_b0 = iStack_b0 + 0x20;
          iVar9 = local_c8 + 1;
          bVar2 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar9;
          if (bVar2) goto LAB_14059b93d;
          uVar10 = puVar13[lVar6 + 1];
        }
        uStack_c4 = uVar10 - 1 & uVar10 ^ uVar10;
        iVar9 = 0x1f;
        if (uStack_c4 != 0) {
          for (; uStack_c4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uStack_c4 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_b4 = (iStack_b0 - iVar9) + 0x1f;
        if ((int)uVar3 < (int)uStack_b4) {
LAB_14059b93d:
          uStack_b4 = uVar3;
        }
      }
      uVar10 = *(uint *)(param_1 + 0x5b);
      uStack_80 = 0xffffffff;
      uStack_7c = uStack_b4;
      local_78 = CONCAT44(uStack_ac,iStack_b0);
      uStack_68 = CONCAT44(uStack_c4,local_c8);
      uVar12 = uVar10 & 0xffffffe0;
      iStack_90 = local_c8;
      uStack_8c = uStack_c4;
      local_88 = puVar1;
      local_70 = plVar5;
      puStack_60 = puVar1;
      uStack_50 = local_78;
      local_98 = plVar5;
      uStack_58 = uStack_80;
      uStack_54 = uStack_7c;
      uStack_b4 = uVar10;
      if (uVar10 != uVar3) {
        puVar13 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar11 = puVar13[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
        iVar9 = (int)uVar10 >> 5;
        while (uVar11 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_14059ba15;
          uVar11 = puVar13[(longlong)iVar9 + 1];
          iVar9 = iVar9 + 1;
        }
        uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
        iVar9 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar11 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_b4 = (uVar12 - iVar9) + 0x1f;
        if ((int)uVar3 < (int)uStack_b4) {
LAB_14059ba15:
          uStack_b4 = uVar3;
        }
      }
      while( true ) {
        if ((uStack_7c == uStack_b4) && (local_88 == puVar1)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (local_98 == plVar5)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        lVar6 = *(longlong *)(*local_98 + (longlong)(int)uStack_7c * 0x10);
        if (lVar6 != 0) {
          lVar7 = AUGDoor::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && ((*(byte *)(lVar6 + 0xb8) & 1) != 0)) &&
             (*(char *)(lVar6 + 0x2e0) == '\x01')) {
            return lVar6;
          }
        }
        uStack_80 = uStack_80 & ~uStack_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
      }
      if (param_2 != '\0') {
        lVar6 = FUN_14058e4d0(param_1);
        if (lVar6 == 0) {
          return 0;
        }
        *(undefined1 *)(lVar6 + 0x2e0) = 1;
        (**(code **)(*param_1 + 0x578))(param_1,&local_res18,local_res20);
        pfVar8 = (float *)FUN_14222dc50(param_1,local_a8);
        fVar14 = ABS(pfVar8[1]);
        if (ABS(pfVar8[1]) <= ABS(*pfVar8)) {
          fVar14 = ABS(*pfVar8);
        }
        if (fVar14 <= ABS(pfVar8[2])) {
          fVar14 = ABS(pfVar8[2]);
        }
        local_a0 = ((float)local_res18 / fVar14) * 0.02;
        if (local_a0 <= 0.01) {
          local_a0 = 0.01;
        }
        *(ulonglong *)(lVar6 + 0x204) = CONCAT44(local_a0,local_a0);
        *(float *)(lVar6 + 0x20c) = local_a0;
        local_res18 = 0;
        FUN_142399e30(lVar6,param_1[0x2d],0);
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        FUN_14234b270(lVar6,uVar4);
        return lVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 14059bbd0 GetStats body=62 status=ok
// SIG undefined GetStats(void)

undefined8 * FWebMMediaPlayer::GetStats(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"AudiokineticTools.InterpTrackAkAudioEventHelper",0x60);
  return param_2;
}



// FUNCTION 14059bc10 FUN_14059bc10 body=62 status=ok
// SIG undefined FUN_14059bc10(void)

undefined8 * FUN_14059bc10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"AudiokineticTools.InterpTrackAkAudioRTPCHelper",0x5e);
  return param_2;
}



// FUNCTION 14059bc50 FUN_14059bc50 body=102 status=ok
// SIG undefined FUN_14059bc50(void)

undefined4 FUN_14059bc50(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + -0x10) != 0) && (param_2 != 0)) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar1 != '\0') {
      cVar1 = FUN_14058c1e0(param_1 + 8,param_2);
      if (cVar1 != '\0') {
        return *(undefined4 *)(param_1 + -8);
      }
    }
  }
  return 0;
}



// FUNCTION 14059bcc0 FUN_14059bcc0 body=166 status=ok
// SIG undefined FUN_14059bcc0(void)

undefined8 FUN_14059bcc0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + -0x10) != 0) && (param_2 != 0)) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_2 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_2);
      }
      lVar3 = FWeakObjectPtr::Get(param_1 + 8);
      if (lVar2 == lVar3) {
        local_18 = *(undefined8 *)(param_2 + 0x2e0);
        local_10 = *(undefined4 *)(param_2 + 0x2e8);
        uVar4 = FUN_14059bd70(param_1 + -0x38,&local_18);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14059bd70 FUN_14059bd70 body=160 status=ok
// SIG undefined FUN_14059bd70(void)

float FUN_14059bd70(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_2[1] - *(float *)(param_1 + 0x4c);
  fVar2 = *param_2 - *(float *)(param_1 + 0x48);
  fVar1 = param_2[2] - *(float *)(param_1 + 0x50);
  fVar3 = 0.0;
  fVar1 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1);
  if (*(float *)(param_1 + 0x54) <= fVar1) {
    fVar2 = *(float *)(param_1 + 0x58);
    if ((fVar1 < fVar2 + *(float *)(param_1 + 0x54)) && (0.0001 < fVar2)) {
      fVar2 = (fVar1 - *(float *)(param_1 + 0x54)) / fVar2;
      if (0.0 <= fVar2) {
        if (1.0 <= fVar2) {
          fVar2 = 1.0;
        }
      }
      else {
        fVar2 = 0.0;
      }
      fVar3 = 1.0 - fVar2;
    }
  }
  else {
    fVar3 = 1.0;
  }
  fVar3 = fVar3 * *(float *)(param_1 + 0x30);
  if (fVar3 < 0.0) {
    return 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  return fVar3;
}



// FUNCTION 14059be10 FUN_14059be10 body=77 status=ok
// SIG undefined FUN_14059be10(void)

void FUN_14059be10(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x28);
  }
  return;
}



// FUNCTION 14059be60 FUN_14059be60 body=175 status=ok
// SIG undefined FUN_14059be60(void)

float FUN_14059be60(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  
  lVar2 = *param_1;
  if (((lVar2 == 0) || (param_1[1] == -1)) || (param_1[1] != *(longlong *)(lVar2 + 0xd0))) {
    return 0.0;
  }
  lVar4 = param_1[2];
  *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
  if ((int)lVar4 != 0) {
    for (lVar3 = *(longlong *)(lVar2 + 0xe0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
      if ((int)lVar4 == *(int *)(lVar3 + 0x20)) {
        lVar6 = *(longlong *)(lVar3 + 0x30);
        lVar4 = lVar6 + (longlong)*(int *)(lVar3 + 0x38) * 0x18;
        fVar5 = 0.0;
        while (fVar7 = fVar5, lVar6 != lVar4) {
          pfVar1 = (float *)(lVar6 + 0x10);
          lVar6 = lVar6 + 0x18;
          fVar5 = *pfVar1;
          if (*pfVar1 <= fVar7) {
            fVar5 = fVar7;
          }
        }
        goto LAB_14059bec1;
      }
    }
  }
  fVar7 = 0.0;
LAB_14059bec1:
  FUN_1405a53f0(lVar2);
  return fVar7;
}



// FUNCTION 14059bf10 FUN_14059bf10 body=164 status=ok
// SIG undefined FUN_14059bf10(void)

longlong FUN_14059bf10(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  if (param_2 != 0) {
    for (lVar2 = *(longlong *)(param_1 + 0xe0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      if (param_2 == *(int *)(lVar2 + 0x20)) {
        lVar2 = FWeakObjectPtr::Get(lVar2 + 0x18);
        if (lVar2 != 0) {
          lVar3 = UPawnAction_Sequence::StaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_14059bf99;
        }
        break;
      }
    }
  }
  lVar2 = 0;
LAB_14059bf99:
  if (param_1 != 0) {
    FUN_1405a53f0(param_1);
  }
  return lVar2;
}



// FUNCTION 14059bfc0 FUN_14059bfc0 body=19 status=ok
// SIG undefined FUN_14059bfc0(void)

longlong FUN_14059bfc0(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 == 0) {
    return 0;
  }
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
  }
  if (param_2 != 0) {
    for (lVar3 = *(longlong *)(lVar1 + 0xe0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
      if (param_2 == *(int *)(lVar3 + 0x20)) {
        lVar3 = FWeakObjectPtr::Get(lVar3 + 0x18);
        if (lVar3 != 0) {
          lVar4 = UPawnAction_Sequence::StaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_14059bf99;
        }
        break;
      }
    }
  }
  lVar3 = 0;
LAB_14059bf99:
  if (lVar1 != 0) {
    FUN_1405a53f0(lVar1);
  }
  return lVar3;
}



// FUNCTION 14059bfe0 FUN_14059bfe0 body=833 status=ok
// SIG undefined FUN_14059bfe0(void)

undefined8
FUN_14059bfe0(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,undefined2 **param_5
             )

{
  void *_Src;
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined2 *puVar5;
  short *psVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *_Src_00;
  uint uVar11;
  int iVar12;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  
  iVar12 = *(int *)(param_2 + 1);
  if (iVar12 < 2) {
    return 0x1f;
  }
  iVar9 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar9 = 0;
  }
  if (0x103 < iVar9) {
    return 0x1f;
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 4) != 0xe)) {
    FString::operator=(param_5,param_1 + 0x10);
  }
  if (((param_3 == 0) || (param_4 != 0)) || (*(char *)(param_3 + 0x18) == '\0')) goto LAB_14059c26a;
  pwVar3 = AK::StreamMgr::GetCurrentLanguage();
  lVar8 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (pwVar3[lVar4] != L'\0');
  if (lVar4 == 0) goto LAB_14059c26a;
  iVar9 = iVar9 + 1 + (int)lVar4;
  if (0x103 < iVar9) {
    return 2;
  }
  pwVar3 = AK::StreamMgr::GetCurrentLanguage();
  local_48 = (undefined2 *)0x0;
  puVar10 = (undefined2 *)0x0;
  if ((pwVar3 == (wchar_t *)0x0) || (*pwVar3 == L'\0')) {
LAB_14059c119:
    puVar5 = &DAT_143f3eda8;
  }
  else {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar3[lVar4] != L'\0');
    uVar7 = (int)lVar4 + 1;
    local_40 = (ulonglong)uVar7;
    uVar11 = uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar11 = (uint)local_40;
    }
    puVar5 = local_48;
    FGenericPlatformString::Memcpy(local_48,pwVar3,(longlong)(int)uVar7 * 2);
    puVar10 = puVar5;
    if (uVar11 == 0) goto LAB_14059c119;
  }
  local_38 = &DAT_143f3eda8;
  if (*(int *)(param_5 + 1) != 0) {
    local_38 = *param_5;
  }
  _Src_00 = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  local_30 = puVar5;
  FPaths::CombineInternal(&local_48,&local_38,2);
  if (param_5 == &local_48) {
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_5 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_5 = local_48;
    *(uint *)(param_5 + 1) = (uint)local_40;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_40._4_4_;
  }
  psVar6 = (short *)FUN_1415a96e0();
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar6[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_40 = (ulonglong)uVar7;
    uVar11 = uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar11 = (uint)local_40;
    }
    _Src_00 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar6,(longlong)(int)uVar7 * 2);
    if ((uVar11 != 0) && (iVar12 = uVar11 - 1, iVar12 != 0)) {
      iVar2 = *(int *)(param_5 + 1);
      iVar1 = (uint)(iVar2 == 0) + iVar2 + iVar12;
      *(int *)(param_5 + 1) = iVar1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
      }
      puVar5 = *param_5;
      _guard_xfg_dispatch_icall_nop
                (puVar5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),_Src_00,(longlong)iVar12 * 2);
      (puVar5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar12] = 0;
    }
  }
  if (_Src_00 != (undefined2 *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
LAB_14059c26a:
  iVar12 = *(int *)(param_5 + 1);
  iVar2 = iVar12 + -1 + iVar9;
  if (iVar12 == 0) {
    iVar2 = iVar9;
  }
  if (0x103 < iVar2) {
    return 2;
  }
  _Src = (void *)*param_2;
  iVar9 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    iVar2 = (uint)(iVar12 == 0) + iVar12 + iVar9;
    *(int *)(param_5 + 1) = iVar2;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar12);
    }
    puVar10 = *param_5;
    _guard_xfg_dispatch_icall_nop
              (puVar10 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)),_Src,(longlong)iVar9 * 2);
    (puVar10 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)))[iVar9] = 0;
  }
  return 1;
}



// FUNCTION 14059c330 FUN_14059c330 body=946 status=ok
// SIG undefined FUN_14059c330(void)

undefined8
FUN_14059c330(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,longlong *param_5
             )

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  short *psVar4;
  longlong lVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  void *local_48;
  ulonglong local_40;
  
  if ((param_3 != (uint *)0x0) && (*param_3 < 2)) {
    pvVar12 = (void *)0x0;
    pvVar7 = (void *)(ulonglong)(*(int *)(param_1 + 0x18) - 1);
    if (*(int *)(param_1 + 0x18) == 0) {
      pvVar7 = pvVar12;
    }
    uVar10 = (ulonglong)(int)pvVar7;
    FString::operator=(param_5,param_1 + 0x10);
    if ((char)param_3[6] != '\0') {
      pwVar3 = AK::StreamMgr::GetCurrentLanguage();
      lVar11 = -1;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar3[lVar5] != L'\0');
      if (lVar5 != 0) {
        uVar10 = uVar10 + 1 + lVar5;
        if (0x103 < uVar10) {
          return 0x1f;
        }
        local_48 = (void *)0x0;
        local_40 = 0;
        if ((pwVar3 != (wchar_t *)0x0) && (*pwVar3 != L'\0')) {
          lVar5 = -1;
          do {
            lVar5 = lVar5 + 1;
          } while (pwVar3[lVar5] != L'\0');
          uVar6 = (int)lVar5 + 1;
          local_40 = (ulonglong)uVar6;
          uVar8 = uVar6;
          if (0 < (int)uVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
            uVar8 = (uint)local_40;
          }
          pvVar12 = local_48;
          FGenericPlatformString::Memcpy(local_48,pwVar3,(longlong)(int)uVar6 * 2);
          if ((uVar8 != 0) && (iVar9 = uVar8 - 1, iVar9 != 0)) {
            iVar1 = (int)param_5[1];
            iVar2 = (uint)(iVar1 == 0) + iVar9 + iVar1;
            *(int *)(param_5 + 1) = iVar2;
            if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
            }
            pvVar7 = (void *)(*param_5 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar7,pvVar12,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)pvVar7 + (longlong)iVar9 * 2) = 0;
          }
        }
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
        psVar4 = (short *)FUN_1415a96e0();
        local_48 = (void *)0x0;
        local_40 = 0;
        pvVar12 = (void *)0x0;
        if ((psVar4 != (short *)0x0) && (pvVar12 = (void *)0x0, *psVar4 != 0)) {
          do {
            lVar11 = lVar11 + 1;
          } while (psVar4[lVar11] != 0);
          uVar6 = (int)lVar11 + 1;
          local_40 = (ulonglong)uVar6;
          uVar8 = uVar6;
          if (0 < (int)uVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
            uVar8 = (uint)local_40;
          }
          pvVar12 = local_48;
          FGenericPlatformString::Memcpy(local_48,psVar4,(longlong)(int)uVar6 * 2);
          if ((uVar8 != 0) && (iVar9 = uVar8 - 1, iVar9 != 0)) {
            iVar1 = (int)param_5[1];
            iVar2 = (uint)(iVar1 == 0) + iVar9 + iVar1;
            *(int *)(param_5 + 1) = iVar2;
            if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
            }
            pvVar7 = (void *)(*param_5 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar7,pvVar12,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)pvVar7 + (longlong)iVar9 * 2) = 0;
          }
        }
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
      }
    }
    if (uVar10 + 0xf < 0x105) {
      FString::PrintfImpl(&local_48,&DAT_143fc8868,param_2);
      pvVar12 = local_48;
      if ((uint)local_40 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (uint)local_40 + -1;
      }
      if (iVar9 != 0) {
        iVar1 = (int)param_5[1];
        iVar2 = (uint)(iVar1 == 0) + iVar9 + iVar1;
        *(int *)(param_5 + 1) = iVar2;
        if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
        }
        pvVar7 = (void *)(*param_5 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar7,pvVar12,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)pvVar7 + (longlong)iVar9 * 2) = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      local_48 = (void *)0x0;
      local_40 = 5;
      if (param_3[1] == 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        pwVar3 = L".bnk";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        pwVar3 = L".wem";
      }
      pvVar12 = local_48;
      FGenericPlatformString::Memcpy(local_48,pwVar3,10);
      if (((uint)local_40 != 0) && (iVar9 = (uint)local_40 + -1, iVar9 != 0)) {
        iVar1 = (int)param_5[1];
        iVar2 = (uint)(iVar1 == 0) + iVar9 + iVar1;
        *(int *)(param_5 + 1) = iVar2;
        if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
        }
        pvVar7 = (void *)(*param_5 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar7,pvVar12,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)pvVar7 + (longlong)iVar9 * 2) = 0;
      }
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
      return 1;
    }
  }
  return 0x1f;
}



// FUNCTION 14059c710 FUN_14059c710 body=11 status=ok
// SIG undefined FUN_14059c710(void)

undefined8 * FUN_14059c710(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



// FUNCTION 14059c720 ToBool body=26 status=ok
// SIG undefined ToBool(void)

void FString::ToBool(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 0) {
    AK::SoundEngine::GetIDFromString((wchar_t *)*param_1);
    return;
  }
  AK::SoundEngine::GetIDFromString(L"");
  return;
}



// FUNCTION 14059c780 FUN_14059c780 body=625 status=ok
// SIG undefined FUN_14059c780(void)

void FUN_14059c780(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uVar10 = 0;
  uStack_b4 = 1;
  plVar2 = (longlong *)(param_1 + 0x130);
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0x158);
  puVar1 = (uint *)(param_1 + 0x140);
  local_8c = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    uVar7 = uVar10;
    uVar11 = uVar10;
    while (uVar4 == 0) {
      iVar5 = (int)uVar7;
      uStack_a0 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_a0;
      local_b8 = iVar5 + 1;
      uVar7 = (ulonglong)local_b8;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14059c86c;
      uVar4 = puVar13[(longlong)iVar5 + 1];
    }
    uStack_b4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (uStack_a0 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_14059c86c:
      uStack_a4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x158);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = CONCAT44(uStack_9c,uStack_a0);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uVar12 = uVar4 & 0xffffffe0;
  uStack_80 = local_b8;
  uStack_7c = uStack_b4;
  uVar7 = uVar10;
  uVar11 = uVar10;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = plVar2;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_a4 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar5 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14059c932;
      uVar8 = puVar13[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (uVar12 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_14059c932:
      uStack_a4 = uVar3;
    }
  }
  while( true ) {
    iVar5 = (int)uVar10;
    if (((uStack_6c == uStack_a4) && (local_78 == puVar1)) && (local_88 == plVar2)) break;
    plVar9 = (longlong *)((longlong)(int)uStack_6c * 0x10 + *local_88);
    lVar6 = *plVar9;
    if (lVar6 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x120);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0();
      }
      if (lVar6 == param_3) {
        local_90 = iVar5 + 1;
        if ((int)uVar11 < (int)local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,uVar10);
          uVar11 = (ulonglong)local_8c;
          uVar7 = local_98;
        }
        uVar10 = (ulonglong)local_90;
        *(longlong *)(uVar7 + (longlong)iVar5 * 8) = *plVar9;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  *param_2 = uVar7;
  *(int *)(param_2 + 1) = iVar5;
  *(int *)((longlong)param_2 + 0xc) = (int)uVar11;
  return;
}



// FUNCTION 14059ca00 FUN_14059ca00 body=577 status=ok
// SIG undefined FUN_14059ca00(void)

float FUN_14059ca00(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  float local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  fVar17 = 0.0;
  fVar14 = 0.0;
  do {
    fVar5 = fVar14;
    if (lVar1 == 0) {
      uVar2 = *(ulonglong *)(param_1 + 0x40);
      fVar16 = 0.0;
      uVar12 = (longlong)(int)-(uint)(uVar2 == 0) & param_1 | uVar2;
      uVar13 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + uVar12;
      uVar11 = uVar12;
      fVar14 = fVar16;
      if (uVar12 != uVar13) {
        do {
          uVar8 = uVar11 + 0x40;
          fVar14 = *(float *)(uVar11 + 0x20);
          if (*(float *)(uVar11 + 0x20) <= fVar16) {
            fVar14 = fVar16;
          }
          uVar11 = uVar8;
          fVar16 = fVar14;
          fVar15 = fVar17;
        } while (uVar8 != uVar13);
        while (fVar17 = fVar15, uVar12 != uVar13) {
          uVar3 = *(undefined8 *)(uVar12 + 0x10);
          uStack_30 = *(undefined8 *)(uVar12 + 0x18);
          if (*(int *)(param_1 + 0x50) == 0) {
            lVar1 = *(longlong *)(param_1 + 0x2d8);
            if (lVar1 == 0) {
              local_60 = 0;
              puVar9 = &local_60;
              local_58 = 0;
            }
            else {
              puVar9 = (undefined8 *)&local_6c;
              local_6c = *(undefined4 *)(lVar1 + 0x220);
              local_64 = *(undefined4 *)(lVar1 + 0x228);
              uStack_68 = *(undefined4 *)(lVar1 + 0x224);
            }
            local_4c = *(undefined4 *)(puVar9 + 1);
            puVar10 = &local_54;
            local_54 = *puVar9;
          }
          else {
            puVar10 = (undefined8 *)&local_78;
            uVar11 = (longlong)(int)-(uint)(uVar2 == 0) & param_1 | uVar2;
            local_78 = *(undefined4 *)(uVar11 + 0x10);
            local_70 = *(undefined4 *)(uVar11 + 0x18);
            uStack_74 = *(undefined4 *)(uVar11 + 0x14);
          }
          uVar12 = uVar12 + 0x40;
          local_40 = *(float *)(puVar10 + 1);
          local_38._0_4_ = (float)uVar3;
          local_38._0_4_ = (float)*puVar10 - (float)local_38;
          local_38._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          local_38._4_4_ = (float)((ulonglong)*puVar10 >> 0x20) - local_38._4_4_;
          fVar15 = SQRT((float)local_38 * (float)local_38 + local_38._4_4_ * local_38._4_4_ +
                        (local_40 - (float)uStack_30) * (local_40 - (float)uStack_30));
          local_38 = uVar3;
          if (fVar15 <= fVar17) {
            fVar15 = fVar17;
          }
        }
      }
      fVar16 = *(float *)(param_1 + 0x68);
      FUN_1405a53f0(param_1);
      return fVar5 * fVar16 + fVar14 + fVar17;
    }
    lVar6 = FWeakObjectPtr::Get(lVar1 + 0x18);
    if (lVar6 == 0) {
LAB_14059ca8a:
      fVar14 = 0.0;
    }
    else {
      lVar7 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14059ca8a;
      fVar14 = *(float *)(lVar6 + 0x38);
    }
    lVar1 = *(longlong *)(lVar1 + 8);
    if (fVar14 <= fVar5) {
      fVar14 = fVar5;
    }
  } while( true );
}



// FUNCTION 14059cc50 FUN_14059cc50 body=20 status=ok
// SIG undefined FUN_14059cc50(void)

float FUN_14059cc50(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  float fStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar3 = *(ulonglong *)(param_1 + 0x378);
  if (uVar3 == 0) {
    return 0.0;
  }
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x2e4) = *(int *)(uVar3 + 0x2e4) + 1;
  }
  lVar1 = *(longlong *)(uVar3 + 0xe0);
  fVar18 = 0.0;
  fVar15 = 0.0;
  do {
    fVar6 = fVar15;
    if (lVar1 == 0) {
      uVar2 = *(ulonglong *)(uVar3 + 0x40);
      fVar17 = 0.0;
      uVar13 = (longlong)(int)-(uint)(uVar2 == 0) & uVar3 | uVar2;
      uVar14 = (longlong)*(int *)(uVar3 + 0x50) * 0x40 + uVar13;
      uVar12 = uVar13;
      fVar15 = fVar17;
      if (uVar13 != uVar14) {
        do {
          uVar9 = uVar12 + 0x40;
          fVar15 = *(float *)(uVar12 + 0x20);
          if (*(float *)(uVar12 + 0x20) <= fVar17) {
            fVar15 = fVar17;
          }
          uVar12 = uVar9;
          fVar17 = fVar15;
          fVar16 = fVar18;
        } while (uVar9 != uVar14);
        while (fVar18 = fVar16, uVar13 != uVar14) {
          uVar4 = *(undefined8 *)(uVar13 + 0x10);
          uStack_30 = *(undefined8 *)(uVar13 + 0x18);
          if (*(int *)(uVar3 + 0x50) == 0) {
            lVar1 = *(longlong *)(uVar3 + 0x2d8);
            if (lVar1 == 0) {
              uStack_60 = 0;
              puVar10 = &uStack_60;
              uStack_58 = 0;
            }
            else {
              puVar10 = (undefined8 *)&uStack_6c;
              uStack_6c = *(undefined4 *)(lVar1 + 0x220);
              uStack_64 = *(undefined4 *)(lVar1 + 0x228);
              uStack_68 = *(undefined4 *)(lVar1 + 0x224);
            }
            uStack_4c = *(undefined4 *)(puVar10 + 1);
            puVar11 = &uStack_54;
            uStack_54 = *puVar10;
          }
          else {
            puVar11 = (undefined8 *)&uStack_78;
            uVar12 = (longlong)(int)-(uint)(uVar2 == 0) & uVar3 | uVar2;
            uStack_78 = *(undefined4 *)(uVar12 + 0x10);
            uStack_70 = *(undefined4 *)(uVar12 + 0x18);
            uStack_74 = *(undefined4 *)(uVar12 + 0x14);
          }
          uVar13 = uVar13 + 0x40;
          fStack_40 = *(float *)(puVar11 + 1);
          uStack_38._0_4_ = (float)uVar4;
          uStack_38._0_4_ = (float)*puVar11 - (float)uStack_38;
          uStack_38._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          uStack_38._4_4_ = (float)((ulonglong)*puVar11 >> 0x20) - uStack_38._4_4_;
          fVar16 = SQRT((float)uStack_38 * (float)uStack_38 + uStack_38._4_4_ * uStack_38._4_4_ +
                        (fStack_40 - (float)uStack_30) * (fStack_40 - (float)uStack_30));
          uStack_38 = uVar4;
          if (fVar16 <= fVar18) {
            fVar16 = fVar18;
          }
        }
      }
      fVar17 = *(float *)(uVar3 + 0x68);
      FUN_1405a53f0(uVar3);
      return fVar6 * fVar17 + fVar15 + fVar18;
    }
    lVar7 = FWeakObjectPtr::Get(lVar1 + 0x18);
    if (lVar7 == 0) {
LAB_14059ca8a:
      fVar15 = 0.0;
    }
    else {
      lVar8 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14059ca8a;
      fVar15 = *(float *)(lVar7 + 0x38);
    }
    lVar1 = *(longlong *)(lVar1 + 8);
    if (fVar15 <= fVar6) {
      fVar15 = fVar6;
    }
  } while( true );
}



// FUNCTION 14059cc70 FUN_14059cc70 body=480 status=ok
// SIG undefined FUN_14059cc70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14059cc70(longlong param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *plStack_50;
  undefined8 *local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  ppuVar1 = (undefined8 **)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    puVar9 = (undefined8 *)operator_new(0x38);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      uVar4 = *(undefined1 *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 8);
      *puVar9 = &PTR_FUN_143fcfe18;
      puVar9[1] = uVar5;
      puVar9[2] = 0;
      puVar9[3] = 0xffffffffffffffff;
      *(undefined4 *)(puVar9 + 4) = 0;
      *(undefined1 *)(puVar9 + 5) = 0;
      *(uint *)(puVar9 + 5) = *(uint *)(puVar9 + 5) & 0xff;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = 0;
      *(undefined1 *)((longlong)puVar9 + 0x34) = 0;
      *(undefined1 *)((longlong)puVar9 + 0x35) = uVar4;
    }
    plVar11 = (longlong *)0x0;
    local_48 = puVar9;
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *plVar10 = (longlong)&PTR_FUN_143fd0100;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      plVar10[2] = (longlong)puVar9;
      plVar11 = plVar10;
    }
    plStack_40 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_48,puVar9,puVar9);
    local_58 = local_48;
    plStack_50 = plStack_40;
    uVar6 = (undefined4)((ulonglong)local_48 >> 0x20);
    uVar7 = (undefined4)((ulonglong)plStack_40 >> 0x20);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    if (&local_58 != ppuVar1) {
      local_58 = *ppuVar1;
      plStack_50 = *(longlong **)(param_1 + 0x38);
      *(int *)ppuVar1 = (int)local_48;
      *(undefined4 *)(param_1 + 0x34) = uVar6;
      *(int *)(param_1 + 0x38) = (int)plStack_40;
      *(undefined4 *)(param_1 + 0x3c) = uVar7;
      local_38 = (int)local_48;
      uStack_34 = uVar6;
      uStack_30 = (int)plStack_40;
      uStack_2c = uVar7;
    }
    plVar11 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_50 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar11 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_40 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
  *param_2 = (longlong)*ppuVar1;
  lVar8 = *(longlong *)(param_1 + 0x38);
  param_2[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14059ce50 FUN_14059ce50 body=529 status=ok
// SIG undefined FUN_14059ce50(void)

longlong * FUN_14059ce50(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_28 [8];
  longlong local_20;
  
  if ((DAT_1468536c6 == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    }
    iVar6 = *(int *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x10);
    iVar8 = *(int *)(param_1 + 0x18) + -1;
    lVar2 = *(longlong *)(lVar1 + -8 + (longlong)iVar6 * 8);
    iVar5 = (iVar6 - iVar8) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)iVar8 * 8),
                 (void *)(lVar1 + (longlong)*(int *)(param_1 + 0x18) * 8),(longlong)iVar5 << 3);
      iVar6 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar6 + -1;
    iVar6 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar6 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar6);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 8) = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    }
    *(undefined1 *)(lVar2 + 0x2e0) = 1;
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    lVar1 = DAT_1468536c8;
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      uVar7 = DAT_1461fd070;
      uVar3 = DAT_1461fd070 + 1;
      if ((DAT_1461fd070 & 3) == 0) {
        uVar7 = DAT_1461fd070 + 1;
        uVar3 = DAT_1461fd070 + 2;
      }
      DAT_1461fd070 = uVar3;
      local_20 = lVar2;
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      }
      FUN_14058c5a0(lVar1 + 0xe0,local_28,&local_20,0);
      AK::SoundEngine::RegisterGameObj(uVar7);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      *(longlong *)(lVar2 + 0xc0) = lVar1;
      *(ulonglong *)(lVar2 + 0xd0) = uVar7;
      *(undefined8 *)(lVar2 + 200) = param_3;
      if (DAT_1468536c5 != '\0') {
        FUN_1405aa4d0(lVar1 + 0x1e8,lVar2);
      }
    }
    FUN_1405a53f0(lVar2);
    if (*(longlong *)(lVar2 + 0xc0) != 0) {
      *param_2 = lVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      return param_2;
    }
    FUN_1405a53f0(lVar2);
    FUN_1405a8cc0(param_1,lVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14059d090 FUN_14059d090 body=76 status=ok
// SIG undefined FUN_14059d090(void)

undefined4 FUN_14059d090(longlong param_1,bool param_2)

{
  char cVar1;
  AKRESULT AVar2;
  long local_res18 [4];
  
  if (((DAT_1468536c5 != '\0') && (cVar1 = FUN_14059ee90(), cVar1 != '\0')) &&
     (AVar2 = AK::SoundEngine::GetSourcePlayPosition(*(ulong *)(param_1 + 0x10),local_res18,param_2)
     , AVar2 == 1)) {
    return local_res18[0];
  }
  return 0xffffffff;
}



// FUNCTION 14059d0e0 FUN_14059d0e0 body=45 status=ok
// SIG undefined FUN_14059d0e0(void)

undefined8 FUN_14059d0e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) &&
     ((int)param_1[2] != 0)) {
    uVar2 = FUN_14059bf10(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14059d110 FUN_14059d110 body=596 status=ok
// SIG undefined FUN_14059d110(void)

undefined8 * FUN_14059d110(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_48;
  uint local_40;
  uint uStack_3c;
  longlong *local_38;
  ulonglong local_30;
  
  plVar14 = (longlong *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x378);
  if (lVar2 == 0) {
    local_30 = 0;
    pplVar7 = &local_38;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    lVar3 = *(longlong *)(lVar2 + 0xe0);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uStack_3c = 0;
    plVar8 = plVar14;
    plVar13 = plVar14;
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
      lVar9 = -1;
      if (*(longlong *)(lVar2 + 0xd0) != -1) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + 1;
        lVar9 = *(longlong *)(lVar2 + 0xd0);
      }
      lVar10 = (longlong)(int)plVar8;
      local_40 = (int)plVar8 + 1;
      if ((int)plVar13 < (int)local_40) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_48,plVar8);
        plVar13 = (longlong *)(ulonglong)uStack_3c;
        plVar14 = local_48;
      }
      plVar8 = (longlong *)(ulonglong)local_40;
      lVar6 = -1;
      if (*(longlong *)(lVar2 + 0xd0) != -1) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + 1;
        lVar6 = *(longlong *)(lVar2 + 0xd0);
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x20);
      plVar14[lVar10 * 3] = lVar2;
      plVar14[lVar10 * 3 + 1] = -1;
      if (*(longlong *)(lVar2 + 0xd0) != -1) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + 1;
        plVar14[lVar10 * 3 + 1] = *(longlong *)(lVar2 + 0xd0);
      }
      *(undefined4 *)(plVar14 + lVar10 * 3 + 2) = uVar1;
      if ((lVar6 != -1) && (lVar6 == *(longlong *)(lVar2 + 0xd0))) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
      }
      if ((lVar9 != -1) && (lVar9 == *(longlong *)(lVar2 + 0xd0))) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
      }
    }
    FUN_1405a53f0(lVar2);
    pplVar7 = &local_48;
    bVar5 = true;
    bVar4 = false;
  }
  *pplVar7 = (longlong *)0x0;
  uVar1 = *(undefined4 *)(pplVar7 + 1);
  *param_2 = plVar14;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)pplVar7 + 0xc);
  pplVar7[1] = (longlong *)0x0;
  if (bVar4) {
    uVar12 = local_30 & 0xffffffff;
    plVar14 = local_38;
    uVar11 = (uint)local_30;
    while (uVar11 != 0) {
      lVar2 = *plVar14;
      if (((lVar2 != 0) && (plVar14[1] != -1)) && (plVar14[1] == *(longlong *)(lVar2 + 0xd0))) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
        *plVar14 = 0;
        plVar14[1] = -1;
      }
      plVar14 = plVar14 + 3;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  plVar14 = local_48;
  uVar11 = local_40;
  if (bVar5) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      lVar2 = *plVar14;
      if (((lVar2 != 0) && (plVar14[1] != -1)) && (plVar14[1] == *(longlong *)(lVar2 + 0xd0))) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
        *plVar14 = 0;
        plVar14[1] = -1;
      }
      plVar14 = plVar14 + 3;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return param_2;
}



// FUNCTION 14059d370 FUN_14059d370 body=322 status=ok
// SIG undefined FUN_14059d370(void)

longlong FUN_14059d370(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res18 [16];
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = UWorld::GetWorldSettings(param_1,0,1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)UWorld::GetWorldSettings(param_1,0,1);
    uVar3 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar1 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar1 == 0) {
      plVar2 = (longlong *)FName::FName(local_res18,"WwiseWorldComponentPool",1);
      lVar1 = *plVar2;
      uVar3 = UWorld::GetWorldSettings(param_1,0,1);
      if (lVar1 == 0) {
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar4 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
      lVar1 = FUN_1417985e0(uVar4,uVar3,lVar1,0x40,0,0,0,0,0);
      FUN_14234b270(lVar1,param_1);
      if (lVar1 == 0) {
        return 0;
      }
    }
    if (*(int *)(lVar1 + 0x178) == 0) {
      lVar5 = FUN_14058e3a0();
      iVar6 = 0x80;
      if (lVar5 != 0) {
        iVar6 = 0x80;
        if (0 < *(int *)(lVar5 + 0x118)) {
          iVar6 = *(int *)(lVar5 + 0x118);
        }
      }
      *(int *)(lVar1 + 0x178) = iVar6;
      FUN_14059dff0(lVar1,iVar6);
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 14059d4c0 FUN_14059d4c0 body=400 status=ok
// SIG undefined FUN_14059d4c0(void)

longlong * FUN_14059d4c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res8;
  
  if ((0 < *(int *)(param_1 + 0x188)) && (**(longlong **)(param_1 + 0x180) == 0)) {
    local_res8 = 0;
    TArray<FName,FDefaultAllocator>::Remove((undefined8 *)(param_1 + 0x180),&local_res8);
  }
  iVar3 = *(int *)(param_1 + 0x198);
  if ((0 < iVar3) && (**(longlong **)(param_1 + 400) == 0)) {
    local_res8 = 0;
    TArray<FName,FDefaultAllocator>::Remove((undefined8 *)(param_1 + 400),&local_res8);
    iVar3 = *(int *)(param_1 + 0x198);
  }
  if (((*(int *)(param_1 + 0x178) <= iVar3) && (*(char *)(param_1 + 0x17c) == '\x01')) &&
     (lVar1 = **(longlong **)(param_1 + 400), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 0x378) != 0) {
      FUN_1405ac930();
    }
    *(undefined1 *)(lVar1 + 0x403) = 0;
  }
  if (*(int *)(param_1 + 0x188) < 1) {
    if (*(int *)(param_1 + 0x178) <= *(int *)(param_1 + 0x198)) {
      return (longlong *)0x0;
    }
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    plVar2 = (longlong *)FUN_14059d650(lVar1);
  }
  else {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0x180) + -8 + (longlong)*(int *)(param_1 + 0x188) * 8);
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
  }
  if (plVar2 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(plVar2 + 0x7e,param_1);
    if ((plVar2[0x6f] != 0) || (FUN_1405930a0(plVar2), plVar2[0x6f] != 0)) {
      (**(code **)(*plVar2 + 0x280))(plVar2,0);
    }
    iVar3 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar3 + 1;
    if (*(int *)(param_1 + 0x19c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 400,iVar3);
    }
    *(longlong **)(*(longlong *)(param_1 + 400) + (longlong)iVar3 * 8) = plVar2;
    return plVar2;
  }
  return (longlong *)0x0;
}



// FUNCTION 14059d650 FUN_14059d650 body=221 status=ok
// SIG undefined FUN_14059d650(void)

longlong * FUN_14059d650(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res8;
  
  if ((param_1 == 0) || (lVar1 = FUN_14059d370(param_1,1), lVar1 == 0)) {
    return (longlong *)0x0;
  }
  iVar2 = *(int *)(lVar1 + 0x188);
  if (iVar2 == 0) {
    FUN_14059dff0(lVar1,1);
    iVar2 = *(int *)(lVar1 + 0x188);
  }
  plVar3 = (longlong *)0x0;
  if (0 < iVar2) {
    if (**(longlong **)(lVar1 + 0x180) == 0) {
      local_res8 = 0;
      TArray<FName,FDefaultAllocator>::Remove(lVar1 + 0x180,&local_res8);
      iVar2 = *(int *)(lVar1 + 0x188);
    }
    if (0 < iVar2) {
      plVar3 = *(longlong **)
                (*(longlong *)(lVar1 + 0x180) + -8 + (longlong)*(int *)(lVar1 + 0x188) * 8);
      *(int *)(lVar1 + 0x188) = *(int *)(lVar1 + 0x188) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
      if (plVar3 != (longlong *)0x0) {
        if ((plVar3[0x6f] == 0) && (FUN_1405930a0(plVar3), plVar3[0x6f] == 0)) {
          return plVar3;
        }
        (**(code **)(*plVar3 + 0x280))(plVar3,0);
      }
    }
  }
  return plVar3;
}



// FUNCTION 14059d730 FUN_14059d730 body=132 status=ok
// SIG undefined FUN_14059d730(void)

undefined8 * FUN_14059d730(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x378);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1, lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x118) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0x110);
    if (*(longlong **)(lVar2 + 0x110) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar2 + 0x100);
    }
    uVar1 = *(undefined4 *)(*plVar3 + 0x2e8);
    *param_2 = *(undefined8 *)(*plVar3 + 0x2e0);
    *(undefined4 *)(param_2 + 1) = uVar1;
    FUN_1405a53f0();
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (lVar2 != 0) {
    FUN_1405a53f0();
  }
  return param_2;
}



// FUNCTION 14059d7c0 FUN_14059d7c0 body=179 status=ok
// SIG undefined FUN_14059d7c0(void)

undefined8 * FUN_14059d7c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  puVar2 = &local_28;
  if (*(int *)(param_1 + 0x50) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x2d8);
    if (lVar3 == 0) {
      local_28 = 0;
      local_20 = 0;
    }
    else {
      local_20 = *(undefined4 *)(lVar3 + 0x228);
      local_28 = *(undefined8 *)(lVar3 + 0x220);
    }
    local_14 = local_20;
    puVar2 = &local_1c;
    local_1c = local_28;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    local_20 = *(undefined4 *)(lVar3 + 0x18);
    local_28 = *(undefined8 *)(lVar3 + 0x10);
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_2 = *puVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14059d880 FUN_14059d880 body=43 status=ok
// SIG undefined FUN_14059d880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14059d880(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(param_1 + 0x230) & _DAT_1468537c0;
  uVar6 = *(uint *)(param_1 + 0x234) & uRam00000001468537c4;
  uVar7 = *(uint *)(param_1 + 0x238) & uRam00000001468537c8;
  uVar8 = *(uint *)(param_1 + 0x23c) & uRam00000001468537cc;
  auVar2._4_4_ = uVar6;
  auVar2._0_4_ = uVar5;
  auVar2._8_4_ = uVar7;
  auVar2._12_4_ = uVar8;
  auVar3._4_4_ = uVar7;
  auVar3._0_4_ = uVar6;
  auVar3._8_4_ = uVar5;
  auVar3._12_4_ = uVar8;
  auVar3 = minps(auVar2,auVar3);
  auVar1._4_4_ = uVar5;
  auVar1._0_4_ = uVar7;
  auVar1._8_4_ = uVar6;
  auVar1._12_4_ = uVar8;
  auVar3 = minps(auVar3,auVar1);
  auVar4._4_12_ = auVar3._4_12_;
  auVar4._0_4_ = auVar3._0_4_ * 50.0;
  return auVar4._0_8_;
}



// FUNCTION 14059d8b0 GetName body=75 status=ok
// SIG undefined GetName(void)

undefined8 * UStrategyManager::GetName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,0x11,"WwiseEmitterPool",0x11,0x3f);
  return param_2;
}



// FUNCTION 14059d910 FUN_14059d910 body=185 status=ok
// SIG undefined FUN_14059d910(void)

int FUN_14059d910(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
    lVar2 = *(longlong *)(param_1 + 0x3e0);
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      lVar2 = param_1 + 0x3d8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 1000) - 1U &
                             (longlong)*(int *)(param_2 + 0x28)) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x3a0));
        if (*piVar4 == *(int *)(param_2 + 0x28)) {
          if (iVar1 != -1) goto LAB_14059d9a1;
          break;
        }
        iVar1 = piVar4[2];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_14059d9a1:
  piVar3 = piVar4 + 1;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return *(int *)(param_2 + 0x38);
  }
  return *piVar3;
}



// FUNCTION 14059d9f0 FUN_14059d9f0 body=112 status=ok
// SIG undefined FUN_14059d9f0(void)

undefined1 * FUN_14059d9f0(undefined8 param_1,undefined1 *param_2)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x126,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::GetSectionBoundaries");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x126,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::GetSectionBoundaries");
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 14059da60 GetStats body=62 status=ok
// SIG undefined GetStats(void)

undefined8 * FWebMMediaPlayer::GetStats(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"AudiokineticTools.InterpTrackAkAudioEventHelper",0x60);
  return param_2;
}



// FUNCTION 14059daa0 FUN_14059daa0 body=62 status=ok
// SIG undefined FUN_14059daa0(void)

undefined8 * FUN_14059daa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"AudiokineticTools.InterpTrackAkAudioRTPCHelper",0x5e);
  return param_2;
}



// FUNCTION 14059dae0 GetSnapTimes body=138 status=ok
// SIG undefined GetSnapTimes(void)

void UMovieSceneSection::GetSnapTimes(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x90) != '\x02') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x94);
    }
    if (*(char *)(param_1 + 0x98) != '\x02') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  return;
}



// FUNCTION 14059dc10 FUN_14059dc10 body=205 status=ok
// SIG undefined FUN_14059dc10(void)

void FUN_14059dc10(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  float fVar8;
  
  if ((((*(longlong *)(param_1 + -0x10) != 0) && (param_3 != 0)) &&
      (cVar6 = FWeakObjectPtr::IsValid(param_1 + 8), cVar6 != '\0')) &&
     (cVar6 = FUN_14058c1e0(param_1 + 8,param_3), cVar6 != '\0')) {
    fVar1 = *(float *)(param_1 + -8);
    fVar8 = 0.0;
    if ((0.0 <= fVar1) && (fVar8 = fVar1, 1.0 <= fVar1)) {
      fVar8 = 1.0;
    }
    lVar4 = *(longlong *)(param_1 + -0x10);
    iVar2 = (int)param_4[1];
    lVar7 = (longlong)iVar2;
    *(int *)(param_4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar2 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
    }
    lVar5 = *param_4;
    uVar3 = *(undefined4 *)(lVar4 + 0x28);
    *(float *)(lVar5 + 4 + lVar7 * 0xc) = fVar8;
    *(float *)(lVar5 + 8 + lVar7 * 0xc) = 1.0 - fVar8;
    *(undefined4 *)(lVar5 + lVar7 * 0xc) = uVar3;
  }
  return;
}



// FUNCTION 14059dce0 FUN_14059dce0 body=260 status=ok
// SIG undefined FUN_14059dce0(void)

void FUN_14059dce0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((((*(longlong *)(param_1 + -0x10) != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 8), cVar4 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 8);
    lVar6 = *(longlong *)(param_3 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_3);
    }
    if (lVar5 == lVar6) {
      local_38 = *(undefined8 *)(param_3 + 0x2e0);
      local_30 = *(undefined4 *)(param_3 + 0x2e8);
      fVar7 = (float)FUN_14059bd70(param_1 + -0x38,&local_38);
      iVar1 = (int)param_4[1];
      lVar5 = (longlong)iVar1;
      lVar6 = *(longlong *)(param_1 + -0x10);
      *(int *)(param_4 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar1);
      }
      lVar3 = *param_4;
      uVar2 = *(undefined4 *)(lVar6 + 0x28);
      *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar7;
      *(float *)(lVar3 + 8 + lVar5 * 0xc) = 1.0 - fVar7;
      *(undefined4 *)(lVar3 + lVar5 * 0xc) = uVar2;
    }
  }
  return;
}



// FUNCTION 14059ddf0 FUN_14059ddf0 body=501 status=ok
// SIG undefined FUN_14059ddf0(void)

undefined8 * FUN_14059ddf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int local_res18 [4];
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  plVar2 = (longlong *)FUN_1405b9970();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  pwVar4 = (wchar_t *)0x0;
  if (lVar3 == 0) {
LAB_14059dfa7:
    *param_1 = 0;
    param_1[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"English(US)",0x18);
  }
  else {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x58,local_res18,param_2);
    pwVar8 = pwVar4;
    if (local_res18[0] != -1) {
      pwVar8 = (wchar_t *)(*(longlong *)(lVar3 + 0x58) + (longlong)local_res18[0] * 0x28);
    }
    pwVar6 = pwVar8 + 8;
    if (pwVar8 == (wchar_t *)0x0) {
      pwVar6 = pwVar4;
    }
    if (pwVar6 == (wchar_t *)0x0) {
      iVar1 = *(int *)(param_2 + 1);
      if (iVar1 == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)*param_2;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if (2 < iVar5) {
        iVar5 = 2;
      }
      local_30 = iVar5 + 1;
      if (iVar5 == 0) {
        local_30 = 0;
      }
      pwVar7 = pwVar4;
      if ((0 < local_30) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), pwVar7 = local_38,
         0 < local_30)) {
        wcsncpy(local_38,pwVar8,(longlong)iVar5);
        pwVar7[iVar5] = L'\0';
      }
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x58,local_res18,&local_38);
      pwVar8 = pwVar4;
      if (local_res18[0] != -1) {
        pwVar8 = (wchar_t *)(*(longlong *)(lVar3 + 0x58) + (longlong)local_res18[0] * 0x28);
      }
      pwVar6 = pwVar8 + 8;
      if (pwVar8 == (wchar_t *)0x0) {
        pwVar6 = pwVar4;
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      if (pwVar6 == (wchar_t *)0x0) goto LAB_14059dfa7;
    }
    plVar2 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
    if (plVar2 != (longlong *)0x0) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0xa8,local_res18,pwVar6);
      if ((local_res18[0] != -1) &&
         (lVar3 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0xa8), lVar3 != 0)) {
        pwVar4 = (wchar_t *)(ulonglong)*(uint *)(lVar3 + 0x10);
      }
      iVar1 = (**(code **)(*plVar2 + 8))(plVar2,pwVar4);
      if (1 < iVar1 - 2U) goto LAB_14059dfa7;
    }
    FString::FString(param_1,pwVar6);
  }
  return param_1;
}



// FUNCTION 14059dff0 FUN_14059dff0 body=390 status=ok
// SIG undefined FUN_14059dff0(void)

void FUN_14059dff0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if (((*(longlong *)(param_1 + 0x120) != 0) || (lVar2 = FUN_1423407b0(), lVar2 != 0)) &&
     (0 < (int)param_2)) {
    do {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar3 = AUGDoor::GetPrivateStaticClass();
      plVar4 = (longlong *)FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
      if (plVar4 != (longlong *)0x0) {
        *(byte *)((longlong)plVar4 + 0xba) = *(byte *)((longlong)plVar4 + 0xba) & 0xfd;
        *(undefined1 *)(plVar4 + 0x5c) = 3;
        lVar2 = *(longlong *)(param_1 + 0x120);
        if (lVar2 == 0) {
          lVar2 = FUN_1423407b0(param_1);
        }
        FUN_14234b270(plVar4,lVar2);
        lVar2 = plVar4[0x6f];
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
          FUN_140596c00(lVar2);
          FUN_1405a53f0(lVar2);
        }
        if (plVar4[0x6f] != 0) {
          FUN_1405a53f0();
          plVar4[0x6f] = 0;
        }
        (**(code **)(*plVar4 + 0x288))(plVar4);
        *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
        iVar1 = *(int *)(param_1 + 0x188);
        *(int *)(param_1 + 0x188) = iVar1 + 1;
        if (*(int *)(param_1 + 0x18c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x180,iVar1);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x180) + (longlong)iVar1 * 8) = plVar4;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14059e180 FUN_14059e180 body=526 status=ok
// SIG undefined FUN_14059e180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14059e180(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  float local_b0;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((DAT_1468c21ae != '\0') && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    FWeakObjectPtr::operator=(&local_c8,param_1);
    uVar2 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 2);
    uVar4 = *(undefined8 *)(param_3 + 4);
    uVar5 = *(undefined8 *)(param_3 + 6);
    iVar1 = param_3[8];
    local_78 = 0;
    local_68 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x38,local_98);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143fcfe38;
      *(undefined4 *)(puVar7 + 1) = local_c8;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_c4;
      *(undefined8 *)((longlong)puVar7 + 0x14) = uVar2;
      *(undefined8 *)((longlong)puVar7 + 0x1c) = uVar3;
      *(int *)(puVar7 + 2) = param_2;
      *(undefined8 *)((longlong)puVar7 + 0x24) = uVar4;
      *(undefined8 *)((longlong)puVar7 + 0x2c) = uVar5;
      *(int *)((longlong)puVar7 + 0x34) = iVar1;
    }
    local_a8[0] = FUN_140595b20;
    FUN_14158fcd0(2,local_a8);
    return;
  }
  if (param_2 == 0x80) {
    if (*(int *)(param_1 + 0x330) < 1) {
      return;
    }
    param_1 = param_1 + 0x328;
  }
  else {
    if (param_2 == 0x100) {
      if (*(int *)(param_1 + 0x340) < 1) {
        return;
      }
      fStack_54 = (float)param_3[5];
      if (fStack_54 <= 0.0) {
        return;
      }
      if ((float)param_3[6] <= 0.0) {
        return;
      }
      param_1 = param_1 + 0x338;
      pfVar8 = &local_58;
      local_b0 = 1.0 / fStack_54;
      fStack_50 = local_b0 * (float)param_3[6];
      local_58 = (float)*param_3 * 0.001 * local_b0;
      fStack_4c = (float)param_3[2] * 0.001 * local_b0;
      local_b0 = local_b0 * (float)param_3[7];
      local_48 = local_b0;
      goto LAB_14059e36e;
    }
    if (param_2 != 0x4000) {
      return;
    }
    if (*(int *)(param_1 + 0x350) < 1) {
      return;
    }
    param_1 = param_1 + 0x348;
  }
  pfVar8 = (float *)0x0;
LAB_14059e36e:
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,pfVar8);
  return;
}



// FUNCTION 14059e390 FUN_14059e390 body=552 status=ok
// SIG undefined FUN_14059e390(void)

void FUN_14059e390(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x41) == 1) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (*(int *)((longlong)param_1 + 0x1e4) < *(int *)(param_1 + 8)) {
        FUN_1405a8700(param_1 + 0x13);
      }
      puVar3 = (undefined8 *)param_1[7];
      if ((undefined8 *)param_1[7] == (undefined8 *)0x0) {
        puVar3 = param_1 + 1;
      }
      puVar1 = puVar3 + (longlong)*(int *)(param_1 + 8) * 3;
      if (puVar3 != puVar1) {
        puVar5 = puVar3 + 1;
        do {
          local_38 = 0x3f800000;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          local_28 = 0;
          local_20 = 1;
          if (((DAT_1468537d8 != 0) && (DAT_1468537d0 != (longlong *)0x0)) &&
             (cVar2 = (**(code **)(*DAT_1468537d0 + 0x18))(), cVar2 != '\0')) {
            local_40 = *(undefined4 *)(puVar5 + 1);
            local_48 = *puVar5;
            plVar4 = (longlong *)0x0;
            if (DAT_1468537d8 != 0) {
              plVar4 = DAT_1468537d0;
            }
            cVar2 = (**(code **)(*plVar4 + 0x38))
                              ((int)local_48,*param_1,*puVar3,&local_48,param_1 + 0xb,&local_38,
                               param_1 + 0xf,*(undefined1 *)(param_1 + 0x12));
            if (cVar2 != '\0') {
              FUN_14058cfa0(param_1 + 0x13,puVar3,&local_38);
            }
          }
          puVar3 = puVar3 + 3;
          puVar5 = puVar5 + 3;
        } while (puVar3 != puVar1);
      }
    }
    else if (*(int *)(param_1 + 0x41) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if ((*(int *)((longlong)param_1 + 0x1e4) < 0) && (*(int *)((longlong)param_1 + 0x1e4) != 0)) {
        FUN_1405a8700(param_1 + 0x13,0);
      }
      if (((DAT_1468537e8 != 0) && (DAT_1468537e0 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*DAT_1468537e0 + 0x18))(), cVar2 != '\0')) {
        plVar4 = (longlong *)0x0;
        if (DAT_1468537e8 != 0) {
          plVar4 = DAT_1468537e0;
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,*param_1,param_1 + 1,param_1 + 0x3d,param_1 + 0x3f);
      }
    }
    if ((param_2 != '\0') &&
       (puVar3 = (undefined8 *)operator_new(0x10), puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
      puVar3[1] = param_1;
      *DAT_146853700 = puVar3;
      DAT_146853700 = puVar3;
    }
  }
  return;
}



// FUNCTION 14059e5c0 GetStaticSwitchParameterValue body=85 status=ok
// SIG undefined GetStaticSwitchParameterValue(void)

undefined1 UMaterialInterface::GetStaticSwitchParameterValue(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x12e,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSection::HasSection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x12e,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSection::HasSection");
  return 0;
}



// FUNCTION 14059e650 HashCombine body=122 status=ok
// SIG undefined HashCombine(void)

uint HashCombine(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 - param_2 ^ param_2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar1) - param_2 ^ uVar1 << 8;
  uVar2 = (param_2 - uVar3) - uVar1 ^ uVar3 >> 0xd;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 5;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 10;
  return (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xf;
}



// FUNCTION 14059e6d0 FUN_14059e6d0 body=170 status=ok
// SIG undefined FUN_14059e6d0(void)

int FUN_14059e6d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
  }
  uVar2 = param_2[1];
  puVar7 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x10);
  *puVar7 = *param_2;
  puVar7[1] = uVar2;
  lVar1 = *param_1;
  iVar5 = (int)param_1[1] + -1;
  while( true ) {
    if (iVar5 < 1) {
      return iVar5;
    }
    puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + lVar1);
    iVar6 = (iVar5 + -1) / 2;
    puVar7 = (undefined8 *)((longlong)iVar6 * 0x10 + lVar1);
    if ((double)puVar7[1] < (double)puVar8[1] || (double)puVar7[1] == (double)puVar8[1]) break;
    iVar5 = iVar6;
    if (puVar8 != puVar7) {
      uVar2 = puVar7[1];
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar2;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
    }
  }
  return iVar5;
}



// FUNCTION 14059e780 FUN_14059e780 body=85 status=ok
// SIG undefined FUN_14059e780(void)

void FUN_14059e780(longlong *param_1)

{
  (**(code **)(*param_1 + 0x358))(param_1,0);
  if (*(char *)((longlong)param_1 + 0x401) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x401) = 1;
    if ((param_1[0x6f] != 0) && (*(longlong *)(param_1[0x6f] + 0xe0) != 0)) {
      FUN_1405acdf0(param_1);
      FUN_1405b17d0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14059e7e0 FUN_14059e7e0 body=174 status=ok
// SIG undefined FUN_14059e7e0(void)

void FUN_14059e7e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((DAT_1468536c6 != '\0') || (lVar2 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    lVar2 = 0;
  }
  lVar3 = lVar2 + 0x218;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    if (*param_1 == 0) {
      return;
    }
    if (*(longlong *)(*param_1 + 0xe0) != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(int *)(lVar3 + 0x18) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x1c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x10,iVar1);
      }
      lVar2 = *param_1;
      *(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1 * 8) = lVar2;
      if (lVar2 != 0) {
        *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
      }
    }
  }
  if (*param_1 != 0) {
    FUN_1405a53f0();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14059e8a0 FUN_14059e8a0 body=374 status=ok
// SIG undefined FUN_14059e8a0(void)

undefined8 FUN_14059e8a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  uVar2 = FUN_140598ba0();
  if ((char)uVar2 != '\0') {
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535808,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
      iVar1 = DAT_146535810;
      lVar4 = (longlong)DAT_146535810;
      DAT_146535810 = DAT_146535810 + 1;
      if (DAT_146535814 < DAT_146535810) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535808,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_146535808);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    puVar5 = (undefined8 *)0x0;
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)FUN_1405a1000;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
      iVar1 = DAT_1465357b0;
      lVar4 = (longlong)DAT_1465357b0;
      DAT_1465357b0 = DAT_1465357b0 + 1;
      if (DAT_1465357b4 < DAT_1465357b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1465357a8);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 14059ea40 FUN_14059ea40 body=62 status=ok
// SIG undefined FUN_14059ea40(void)

undefined8 * FUN_14059ea40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__143fca660;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14059ea80 FUN_14059ea80 body=362 status=ok
// SIG undefined FUN_14059ea80(void)

undefined8 FUN_14059ea80(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (((*(int *)((longlong)param_1 + 0x52c) == 0) && (param_1[0x8c] != 0)) &&
     (lVar3 = *(longlong *)(param_1[0x8c] + 0x378), lVar3 != 0)) {
    plVar10 = (longlong *)
              ((ulonglong)(*(longlong *)(lVar3 + 0x110) != 0) - 1 & lVar3 + 0x100U |
              *(ulonglong *)(lVar3 + 0x110));
    plVar1 = plVar10 + *(int *)(lVar3 + 0x118);
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      lVar3 = *plVar10;
      local_38 = *(undefined8 *)(lVar3 + 0x2e0);
      local_18 = *(float *)(lVar3 + 0x210);
      fStack_14 = *(float *)(lVar3 + 0x214);
      fStack_10 = *(float *)(lVar3 + 0x218);
      fStack_c = *(float *)(lVar3 + 0x21c);
      local_30 = *(undefined4 *)(lVar3 + 0x2e8);
      auVar5._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != fStack_14);
      auVar5._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != local_18);
      auVar5._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_10);
      auVar5._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_c);
      iVar7 = movmskps(local_30,auVar5);
      if (iVar7 != 0) {
        *(float *)(lVar3 + 0x250) = local_18;
        *(float *)(lVar3 + 0x254) = fStack_14;
        *(float *)(lVar3 + 600) = fStack_10;
        *(float *)(lVar3 + 0x25c) = fStack_c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar3 + 0x260) = *puVar8;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      cVar6 = (**(code **)(*param_1 + 0x6e8))(param_1,&local_38);
      if (cVar6 != '\0') {
        return 1;
      }
      plVar9 = (longlong *)param_1[0x8f];
      plVar2 = plVar9 + (int)param_1[0x90];
      for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        plVar4 = (longlong *)*plVar9;
        if (((plVar4 != (longlong *)0x0) && ((char)plVar4[0xa6] != '\0')) &&
           (cVar6 = (**(code **)(*plVar4 + 0x6e8))(plVar4,&local_38), cVar6 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14059ebf0 thunk_FUN_14059ee00 body=5 status=ok
// SIG undefined thunk_FUN_14059ee00(void)

undefined8 thunk_FUN_14059ee00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  iVar1 = (int)param_1[2];
  if ((((iVar1 != 0) && (lVar2 = *param_1, lVar2 != 0)) && (param_1[1] != -1)) &&
     (param_1[1] == *(longlong *)(lVar2 + 0xd0))) {
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    if (iVar1 != 0) {
      for (lVar2 = *(longlong *)(lVar2 + 0xe0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
        if (iVar1 == *(int *)(lVar2 + 0x20)) {
          cVar3 = *(char *)(lVar2 + 0x40);
          goto LAB_14059ee54;
        }
      }
    }
    cVar3 = '\0';
LAB_14059ee54:
    FUN_1405a53f0();
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14059ec00 thunk_FUN_14059ee90 body=5 status=ok
// SIG undefined thunk_FUN_14059ee90(void)

undefined8 thunk_FUN_14059ee90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[2];
  if ((((iVar1 != 0) && (lVar2 = *param_1, lVar2 != 0)) && (param_1[1] != -1)) &&
     (param_1[1] == *(longlong *)(lVar2 + 0xd0))) {
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    if (iVar1 != 0) {
      for (lVar2 = *(longlong *)(lVar2 + 0xe0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
        if (iVar1 == *(int *)(lVar2 + 0x20)) goto LAB_14059eee4;
      }
    }
    lVar2 = 0;
LAB_14059eee4:
    FUN_1405a53f0();
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14059ec10 IsEmpty body=85 status=ok
// SIG undefined IsEmpty(void)

undefined1 UMovieSceneTrack::IsEmpty(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0xe9,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::IsEmpty");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0xe9,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::IsEmpty");
  return 1;
}



// FUNCTION 14059ec80 FUN_14059ec80 body=164 status=ok
// SIG undefined FUN_14059ec80(void)

bool FUN_14059ec80(longlong param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 0x60) & 2) != 0)) &&
      (0.0001 < *(float *)(param_1 + 0x4c))) &&
     ((iVar1 = _finite((double)*(float *)(param_1 + 0x38)), iVar1 != 0 &&
      (0.0001 < *(float *)(param_1 + 0x38))))) {
    param_4 = *(float *)(param_1 + 0x38) * param_3 + *(float *)(param_1 + 0x4c) * 1000.0 + param_4;
    return param_2 < param_4 * param_4;
  }
  return true;
}



// FUNCTION 14059ed30 FUN_14059ed30 body=55 status=ok
// SIG undefined FUN_14059ed30(void)

bool FUN_14059ed30(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    LOCK();
    bVar2 = *(int *)(param_1 + 0x54) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0x54) = 0;
    }
    UNLOCK();
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      return *(int *)(param_1 + 0x50) == 2;
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x54) = 0;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return *(int *)(param_1 + 0x50) == 2;
}



// FUNCTION 14059ed70 FUN_14059ed70 body=135 status=ok
// SIG undefined FUN_14059ed70(void)

undefined8 FUN_14059ed70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar4 + *(int *)(param_1 + 0x28);
  while( true ) {
    if (plVar4 == plVar1) {
      return 0;
    }
    lVar2 = *plVar4;
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x530) != '\0')) &&
       (cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x458) + 0x10))
                          ((longlong *)(lVar2 + 0x458),param_2,param_3,param_4), cVar3 != '\0'))
    break;
    plVar4 = plVar4 + 1;
  }
  return 1;
}



// FUNCTION 14059ee00 FUN_14059ee00 body=118 status=ok
// SIG undefined FUN_14059ee00(void)

undefined8 FUN_14059ee00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  iVar1 = (int)param_1[2];
  if ((((iVar1 != 0) && (lVar2 = *param_1, lVar2 != 0)) && (param_1[1] != -1)) &&
     (param_1[1] == *(longlong *)(lVar2 + 0xd0))) {
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    if (iVar1 != 0) {
      for (lVar2 = *(longlong *)(lVar2 + 0xe0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
        if (iVar1 == *(int *)(lVar2 + 0x20)) {
          cVar3 = *(char *)(lVar2 + 0x40);
          goto LAB_14059ee54;
        }
      }
    }
    cVar3 = '\0';
LAB_14059ee54:
    FUN_1405a53f0();
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14059ee80 FUN_14059ee80 body=12 status=ok
// SIG undefined FUN_14059ee80(void)

bool FUN_14059ee80(longlong param_1)

{
  return *(longlong *)(param_1 + 0xe0) != 0;
}



// FUNCTION 14059ee90 FUN_14059ee90 body=113 status=ok
// SIG undefined FUN_14059ee90(void)

undefined8 FUN_14059ee90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[2];
  if ((((iVar1 != 0) && (lVar2 = *param_1, lVar2 != 0)) && (param_1[1] != -1)) &&
     (param_1[1] == *(longlong *)(lVar2 + 0xd0))) {
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    if (iVar1 != 0) {
      for (lVar2 = *(longlong *)(lVar2 + 0xe0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
        if (iVar1 == *(int *)(lVar2 + 0x20)) goto LAB_14059eee4;
      }
    }
    lVar2 = 0;
LAB_14059eee4:
    FUN_1405a53f0();
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14059ef10 FUN_14059ef10 body=25 status=ok
// SIG undefined FUN_14059ef10(void)

undefined8 FUN_14059ef10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0xe0) != 0);
  }
  return 0;
}



// FUNCTION 14059ef30 FUN_14059ef30 body=303 status=ok
// SIG undefined FUN_14059ef30(void)

ulonglong FUN_14059ef30(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_2 == 0) || (lVar1 = *(longlong *)(param_1 + 0x378), lVar1 == 0)) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    if (*(char *)(param_1 + 0x400) != '\0') {
      FUN_1405b0f30();
    }
    lVar5 = *(longlong *)(param_1 + 0x378);
    lVar4 = *(longlong *)(lVar5 + 0x40);
    if (*(longlong *)(lVar5 + 0x40) == 0) {
      lVar4 = lVar5;
    }
    lVar5 = (longlong)*(int *)(lVar5 + 0x50) * 0x40 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
      fVar6 = *(float *)(lVar4 + 0x10) - (float)*(undefined8 *)(lVar1 + 0x120);
      fVar7 = *(float *)(lVar4 + 0x18) - *(float *)(lVar1 + 0x128);
      fVar8 = *(float *)(lVar4 + 0x14) - (float)((ulonglong)*(undefined8 *)(lVar1 + 0x120) >> 0x20);
      cVar2 = FUN_14059ec80(param_2,CONCAT44(*(float *)(lVar4 + 0x14),
                                             fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7),param_3,
                            0x42480000);
      if (cVar2 != '\0') {
        uVar3 = 1;
        goto LAB_14059f02d;
      }
    }
    uVar3 = 0;
LAB_14059f02d:
    FUN_1405a53f0(lVar1);
  }
  return uVar3;
}



// FUNCTION 14059f060 FUN_14059f060 body=157 status=ok
// SIG undefined FUN_14059f060(void)

undefined8
FUN_14059f060(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    if ((DAT_1468536c6 == '\0') && ((DAT_1468536c5 != '\0' && (DAT_1468536c8 != 0)))) {
      lVar3 = FUN_14059b380(DAT_1468536c8,uVar2,param_3,local_res8);
      if (lVar3 != 0) {
        cVar1 = FUN_14059ec80(param_2,local_res8[0],param_4,param_5);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14059f100 FUN_14059f100 body=44 status=ok
// SIG undefined FUN_14059f100(void)

undefined8 FUN_14059f100(void)

{
  AKRESULT AVar1;
  undefined4 extraout_var;
  ulong local_res10 [6];
  
  AK::GetWindowsDeviceName(-1,local_res10,0xf);
  AVar1 = AK::SoundEngine::GetDeviceSpatialAudioSupport(local_res10[0]);
  return CONCAT71((int7)(CONCAT44(extraout_var,AVar1) >> 8),AVar1 == 1);
}



// FUNCTION 14059f130 FUN_14059f130 body=33 status=ok
// SIG undefined FUN_14059f130(void)

ulonglong FUN_14059f130(longlong *param_1)

{
  ulonglong in_RAX;
  
  if (((*param_1 != 0) && (in_RAX = param_1[1], in_RAX != 0xffffffffffffffff)) &&
     (in_RAX == *(ulonglong *)(*param_1 + 0xd0))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14059f160 FUN_14059f160 body=39 status=ok
// SIG undefined FUN_14059f160(void)

ulonglong FUN_14059f160(longlong *param_1)

{
  ulonglong in_RAX;
  
  if ((((*param_1 != 0) && (in_RAX = param_1[1], in_RAX != 0xffffffffffffffff)) &&
      (in_RAX == *(ulonglong *)(*param_1 + 0xd0))) && ((int)param_1[2] != 0)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14059f190 FUN_14059f190 body=321 status=ok
// SIG undefined FUN_14059f190(void)

void FUN_14059f190(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0x5c] != '\x03') {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x40;
    *(undefined1 *)(param_1 + 0x5c) = 2;
    if (param_1[0x23] != 0) {
      lVar1 = AActor::GetWorldSettings();
      if (lVar1 != 0) {
        (**(code **)(*param_1 + 0x138))(param_1,0,lVar1,5);
      }
    }
  }
  (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
  if ((((param_1[0x6f] != 0) && ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0)) &&
      (*(char *)((longlong)param_1 + 0x401) != '\0')) &&
     (*(char *)((longlong)param_1 + 0x402) == '\0')) {
    FUN_1405a6580(DAT_1468536c8,param_1);
    *(undefined1 *)((longlong)param_1 + 0x401) = 0;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    if ((char)param_1[0x80] == '\0') {
      lVar1 = param_1[0x6f];
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
      }
      FUN_1405ae630(lVar1,0);
      if (lVar1 != 0) {
        FUN_1405a53f0(lVar1);
      }
    }
    else {
      FUN_1405b0f30(param_1);
    }
    FUN_1405a1640(param_1);
    FUN_1405b1ab0(param_1,0);
    if ((param_1[0x60] != 0) && (param_1[0x61] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014059f2c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14059f2e0 FUN_14059f2e0 body=213 status=ok
// SIG undefined FUN_14059f2e0(void)

ulonglong FUN_14059f2e0(longlong param_1)

{
  uint uVar1;
  AKRESULT AVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined4 extraout_var;
  bool bVar4;
  
  if ((((DAT_1468b616c != '\0') || (DAT_1468536c6 != '\0')) || (DAT_1468536c5 == '\0')) ||
     (DAT_1468536c8 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    AVar2 = AK::SoundEngine::LoadBank(*(ulong *)(param_1 + 0x28),-1);
    uVar3 = CONCAT44(extraout_var,AVar2);
    if (AVar2 == 1) {
      *(undefined4 *)(param_1 + 0x50) = 2;
    }
  }
  else if (uVar1 == 1) {
    uVar3 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x54);
    bVar4 = uVar1 == 0;
    if (bVar4) {
      *(uint *)(param_1 + 0x54) = 0;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
    while (!bVar4) {
      FUN_1416b1760(0);
      uVar3 = 0;
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x54);
      bVar4 = uVar1 == 0;
      if (bVar4) {
        *(uint *)(param_1 + 0x54) = 0;
      }
      else {
        uVar3 = (ulonglong)uVar1;
      }
      UNLOCK();
    }
  }
  if (*(int *)(param_1 + 0x50) == 1) {
    uVar3 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x54);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0x54) = 0;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      return CONCAT71((int7)(uVar3 >> 8),*(int *)(param_1 + 0x50) == 2);
    }
    uVar3 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x54);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0x54) = 0;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
    if ((int)uVar3 == -1) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),*(int *)(param_1 + 0x50) == 2);
}



// FUNCTION 14059f3c0 FUN_14059f3c0 body=493 status=ok
// SIG undefined FUN_14059f3c0(void)

void FUN_14059f3c0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulong uVar4;
  AKRESULT AVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong local_res10 [6];
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  cVar3 = FUN_140598ba0();
  if (cVar3 != '\0') {
    uVar4 = AK::SoundEngine::GetIDFromString("Init");
    AVar5 = AK::SoundEngine::LoadBank(uVar4,-1);
    if ((AVar5 == 1) || (AVar5 = AK::SoundEngine::LoadBank("Init",-1,local_res10), AVar5 == 1))
    goto LAB_14059f418;
  }
  FUN_140598ba0(param_1);
LAB_14059f418:
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar6 = FUN_1405b5d80();
  FUN_1417a5560(uVar6,&local_28,1,0x10,0);
  uVar8 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar7 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)uVar8 <= local_18)) break;
    lVar1 = *(longlong *)(lVar7 + (longlong)local_18 * 8);
    if ((*(char *)(lVar1 + 0x30) != '\0') || (0 < *(int *)(lVar1 + 0x4c))) {
      FUN_14059f2e0(lVar1);
      uVar8 = local_20 & 0xffffffff;
      lVar7 = local_28;
    }
    do {
      local_18 = local_18 + 1;
      if ((int)uVar8 <= local_18) break;
    } while (*(longlong *)(lVar7 + (longlong)local_18 * 8) == 0);
  } while( true );
  if (lVar7 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar6 = UPawnAction_Sequence::StaticClass();
  FUN_1417a5560(uVar6,&local_28,1,0x10,0);
  uVar8 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar7 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar8 <= local_18)) {
        if (lVar7 != 0) {
          FMemory::Free();
        }
        return;
      }
      lVar1 = *(longlong *)(lVar7 + (longlong)local_18 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x30);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x4a) != '\0')) && (*(char *)(lVar2 + 0x4b) != '\0'))
      {
        *(undefined4 *)(lVar1 + 100) = 0;
        FUN_1405a32b0(lVar1,*(undefined1 *)(lVar1 + 0x68),CONCAT71((int7)(uVar8 >> 8),1));
        uVar8 = local_20 & 0xffffffff;
        lVar7 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar8 <= local_18);
    do {
      if (*(longlong *)(lVar7 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar8);
  } while( true );
}



// FUNCTION 14059f5b0 FUN_14059f5b0 body=10 status=ok
// SIG undefined FUN_14059f5b0(void)

ulonglong FUN_14059f5b0(longlong param_1)

{
  uint uVar1;
  AKRESULT AVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  ulonglong in_RAX;
  bool bVar4;
  
  if (param_1 == 0) {
    return in_RAX;
  }
  if ((((DAT_1468b616c == '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
     (DAT_1468536c8 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x50);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      AVar2 = AK::SoundEngine::LoadBank(*(ulong *)(param_1 + 0x28),-1);
      uVar3 = CONCAT44(extraout_var,AVar2);
      if (AVar2 == 1) {
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
    }
    else if (uVar1 == 1) {
      uVar3 = 0;
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x54);
      bVar4 = uVar1 == 0;
      if (bVar4) {
        *(uint *)(param_1 + 0x54) = 0;
      }
      else {
        uVar3 = (ulonglong)uVar1;
      }
      UNLOCK();
      while (!bVar4) {
        FUN_1416b1760(0);
        uVar3 = 0;
        LOCK();
        uVar1 = *(uint *)(param_1 + 0x54);
        bVar4 = uVar1 == 0;
        if (bVar4) {
          *(uint *)(param_1 + 0x54) = 0;
        }
        else {
          uVar3 = (ulonglong)uVar1;
        }
        UNLOCK();
      }
    }
    if (*(int *)(param_1 + 0x50) == 1) {
      uVar3 = 0;
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x54);
      if (uVar1 == 0) {
        *(uint *)(param_1 + 0x54) = 0;
      }
      else {
        uVar3 = (ulonglong)uVar1;
      }
      UNLOCK();
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x50) = 2;
        return CONCAT71((int7)(uVar3 >> 8),*(int *)(param_1 + 0x50) == 2);
      }
      uVar3 = 0;
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x54);
      if (uVar1 == 0) {
        *(uint *)(param_1 + 0x54) = 0;
      }
      else {
        uVar3 = (ulonglong)uVar1;
      }
      UNLOCK();
      if ((int)uVar3 == -1) {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    return CONCAT71((int7)(uVar3 >> 8),*(int *)(param_1 + 0x50) == 2);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14059f5c0 FUN_14059f5c0 body=440 status=ok
// SIG undefined FUN_14059f5c0(void)

void FUN_14059f5c0(longlong *param_1,uint param_2,int param_3,uint param_4,float param_5,
                  float param_6,longlong param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  int local_34;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  int iStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_35 = (undefined1)param_3;
  if ((((param_2 < 0x80) && (param_3 - 1U < 0x7f)) && (param_4 < 0x10)) &&
     ((0.0 <= param_5 && (0.0 <= param_6)))) {
    lVar8 = 0;
    if ((DAT_1468536c6 != '\0') || (lVar7 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      lVar7 = lVar8;
    }
    if ((param_7 != 0) && (lVar7 != 0)) {
      uVar2 = *(undefined4 *)(param_7 + 0x28);
      local_38 = 0x90;
      local_37 = (undefined1)param_4;
      local_36 = (undefined1)param_2;
      local_30 = 0x80;
      local_34 = (int)((float)*(int *)(lVar7 + 0x1d8) * param_6);
      uStack_2d = 0;
      iStack_2c = (int)((float)*(int *)(lVar7 + 0x1d8) * param_5) + local_34;
      uStack_2f = local_37;
      uStack_2e = local_36;
      uVar6 = (**(code **)(*param_1 + 0x548))(param_1);
      if (DAT_1468536c5 != '\0') {
        BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
        if (BVar5 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
        }
        do {
          iVar4 = DAT_1468537f8;
          lVar7 = (longlong)DAT_1468537f8;
          uStack_1c = (undefined4)*(undefined8 *)(&local_38 + lVar8 * 8);
          uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(&local_38 + lVar8 * 8) >> 0x20);
          DAT_1468537f8 = DAT_1468537f8 + 1;
          local_28 = uVar6;
          uStack_20 = uVar2;
          if (DAT_1468537fc < DAT_1468537f8) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&DAT_1468537f0,iVar4);
          }
          lVar3 = DAT_1468537f0;
          lVar8 = lVar8 + 1;
          puVar1 = (undefined4 *)(DAT_1468537f0 + lVar7 * 0x18);
          *puVar1 = (undefined4)local_28;
          puVar1[1] = local_28._4_4_;
          puVar1[2] = uStack_20;
          puVar1[3] = uStack_1c;
          *(ulonglong *)(lVar3 + 0x10 + lVar7 * 0x18) = CONCAT44(uStack_14,uStack_18);
        } while (lVar8 < 2);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
      }
    }
  }
  return;
}



// FUNCTION 14059f780 FUN_14059f780 body=99 status=ok
// SIG undefined FUN_14059f780(void)

void FUN_14059f780(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x530) != '\0') {
    FUN_140597570();
    lVar1 = *(longlong *)(param_1 + 0x460);
    if (lVar1 != 0) {
      FUN_1405acdf0(lVar1);
      *(undefined8 *)(lVar1 + 0x2d0) = 0;
    }
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  if (*(char *)(param_1 + 0x470) != '\0') {
    FUN_1405aba50(param_1);
    return;
  }
  return;
}



// FUNCTION 14059f7f0 FUN_14059f7f0 body=242 status=ok
// SIG undefined FUN_14059f7f0(void)

void FUN_14059f7f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    lVar3 = FUN_14059d370(lVar3,0);
    if (lVar3 != 0) {
      iVar5 = 0;
      iVar4 = *(int *)(lVar3 + 0x188);
      if (0 < iVar4) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(lVar3 + 0x180);
          if (*(longlong *)(lVar6 + lVar1) == param_1) {
            iVar2 = (iVar4 - iVar5) + -1;
            if (0 < iVar2) {
              iVar2 = 1;
            }
            if (iVar2 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar1 + (longlong)iVar5 * 8),
                         (void *)(lVar1 + (longlong)(iVar4 - iVar2) * 8),(longlong)iVar2 << 3);
              iVar4 = *(int *)(lVar3 + 0x188);
            }
            *(int *)(lVar3 + 0x188) = iVar4 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(lVar3 + 0x180));
            iVar4 = *(int *)(lVar3 + 0x188);
            iVar5 = iVar5 + -1;
            lVar6 = lVar6 + -8;
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar5 < iVar4);
      }
      *(int *)(lVar3 + 0x17c) = *(int *)(lVar3 + 0x17c) + -1;
    }
  }
  return;
}



// FUNCTION 14059f8f0 FUN_14059f8f0 body=281 status=ok
// SIG undefined FUN_14059f8f0(void)

void FUN_14059f8f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *local_res8;
  
  local_res8 = param_2;
  iVar1 = FUN_14058eb70(param_1 + 0xe8,&local_res8);
  if (iVar1 != 0) {
    lVar3 = param_1 + 0xc0;
    if (param_1 == 0) {
      lVar3 = 0;
    }
    FUN_1405adfe0((int)param_2[2],lVar3);
    lVar3 = DAT_1468536c8;
    if ((((*(int *)(param_1 + 0xf0) == 0) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
       ((DAT_1468536c8 != 0 &&
        (local_res8 = (longlong *)(param_1 + 200), local_res8 != (longlong *)0x0)))) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_1468536c8 + 0x180));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x180));
      }
      TArray<FName,FDefaultAllocator>::Remove(lVar3 + 0x1a8,&local_res8);
      TArray<FName,FDefaultAllocator>::Remove(lVar3 + 0x1b8,&local_res8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x180));
    }
  }
  lVar3 = *param_2;
  if (((lVar3 != 0) && (param_2[1] != -1)) && (param_2[1] == *(longlong *)(lVar3 + 0xd0))) {
    *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + -1;
    *param_2 = 0;
    param_2[1] = -1;
  }
  return;
}



// FUNCTION 14059fa50 FUN_14059fa50 body=502 status=ok
// SIG undefined FUN_14059fa50(void)

void FUN_14059fa50(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0xe0);
  uVar3 = *(uint *)(param_1 + 0x108);
  puVar1 = (uint *)(param_1 + 0xf0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_14059fb1d;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14059fb1d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x108);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
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
    puVar10 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14059fbe3;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14059fbe3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_14059fc50(*(undefined8 *)(*plVar2 + (longlong)(int)uStack_4c * 0x10));
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14059fc50 FUN_14059fc50 body=503 status=ok
// SIG undefined FUN_14059fc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14059fc50(ulonglong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_38;
  float fStack_34;
  float fStack_30;
  
  if ((param_1 != 0) &&
     (*(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1, DAT_1468536c5 != '\0')) {
    FUN_1405aa4d0(*(longlong *)(param_1 + 0xc0) + 0x1e8,param_1);
  }
  uVar5 = 0;
  fVar14 = 0.0;
  uVar10 = *(ulonglong *)(param_1 + 0x40);
  if (*(ulonglong *)(param_1 + 0x40) == 0) {
    uVar10 = param_1;
  }
  uVar7 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + uVar10;
  uVar8 = uVar5;
  if (uVar10 < uVar7) {
    puVar6 = *(ulonglong **)(param_1 + 0x110);
    if (*(ulonglong **)(param_1 + 0x110) == (ulonglong *)0x0) {
      puVar6 = (ulonglong *)(param_1 + 0x100);
    }
    uVar9 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
    if (puVar6 + *(int *)(param_1 + 0x118) < puVar6) {
      uVar9 = uVar5;
    }
    do {
      if (uVar9 != 0) {
        fStack_30 = (float)*(undefined8 *)(uVar10 + 0x18);
        fStack_34 = (float)((ulonglong)*(undefined8 *)(uVar10 + 0x10) >> 0x20);
        local_38 = (float)*(undefined8 *)(uVar10 + 0x10);
        uVar3 = uVar5;
        puVar4 = puVar6;
        do {
          uVar2 = *puVar4;
          fVar12 = local_38 - (float)*(undefined8 *)(uVar2 + 0x2e0);
          fVar13 = fStack_34 - (float)((ulonglong)*(undefined8 *)(uVar2 + 0x2e0) >> 0x20);
          fVar11 = fStack_30 - *(float *)(uVar2 + 0x2e8);
          fVar11 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
          if ((uVar8 == 0) || (fVar11 < fVar14)) {
            uVar8 = uVar2;
            fVar14 = fVar11;
          }
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar9);
      }
      uVar10 = uVar10 + 0x40;
    } while (uVar10 < uVar7);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x120) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x128) = DAT_1468b5d98;
  if (uVar8 != 0) {
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(uVar8 + 0x2e0);
    uVar1 = *(undefined4 *)(uVar8 + 0x2e8);
    *(float *)(param_1 + 300) = fVar14;
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *(undefined1 *)(param_1 + 0x2a1) = *(undefined1 *)(param_1 + 0x2a0);
    FUN_1405a6ba0(param_1);
  }
  FUN_1405a53f0(param_1);
  return;
}



// FUNCTION 14059fe50 FUN_14059fe50 body=199 status=ok
// SIG undefined FUN_14059fe50(void)

void FUN_14059fe50(longlong param_1)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (DAT_1468c21ae != '\0') {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_1468c21c0) {
      FWeakObjectPtr::operator=(&local_res10,param_1);
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_CopyToEmptyStorage_143fcfe50;
        *(undefined4 *)(puVar2 + 1) = local_res10;
        *(undefined4 *)((longlong)puVar2 + 0xc) = local_res14;
      }
      local_58[0] = FUN_140595ba0;
      FUN_14158fcd0(2,local_58);
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x360)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x358,0);
    return;
  }
  return;
}



// FUNCTION 14059ff20 FUN_14059ff20 body=578 status=ok
// SIG undefined FUN_14059ff20(void)

void FUN_14059ff20(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong local_res8;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_28;
  longlong *local_20;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar9;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar6 = 0;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
    local_res20 = param_1 + 0xc0;
    iVar1 = (int)param_2[2];
    if (iVar1 != 0) {
      plVar5 = (longlong *)FUN_1405ac530();
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar8 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar8 = plVar5 + 7;
        }
        iVar3 = *(int *)((longlong)plVar8 + ((longlong)(int)plVar5[9] - 1U & (longlong)iVar1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(*plVar5 + (longlong)iVar3 * 0x18) == iVar1) {
              if (iVar3 != -1) goto LAB_1405a0048;
              break;
            }
            iVar3 = *(int *)(*plVar5 + 0x10 + (longlong)iVar3 * 0x18);
          } while (iVar3 != -1);
        }
      }
      lVar6 = FUN_1405ac530();
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x50);
      BVar4 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar4 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      local_res8 = CONCAT44(local_res8._4_4_,iVar1);
      uVar7 = FUN_1405ac530();
      local_28 = &local_res8;
      local_20 = &local_res20;
      FUN_14058d980(uVar7,local_res18,&local_28,0);
      LeaveCriticalSection(lpCriticalSection);
    }
LAB_1405a0048:
    iVar1 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar1 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0xe8,iVar1);
    }
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar1 * 0x18);
    lVar6 = *param_2;
    *plVar5 = lVar6;
    plVar5[1] = -1;
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0xd0) != -1)) {
      *(int *)(lVar6 + 0x2e8) = *(int *)(lVar6 + 0x2e8) + 1;
      plVar5[1] = *(longlong *)(lVar6 + 0xd0);
    }
    *(int *)(plVar5 + 2) = (int)param_2[2];
    lVar6 = DAT_1468536c8;
    if ((((*(int *)(param_1 + 0xf0) == 1) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
       ((DAT_1468536c8 != 0 && (local_res8 = param_1 + 200, local_res8 != 0)))) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_1468536c8 + 0x180));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x180));
      }
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar6 + 0x1b8,&local_res8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x180));
    }
  }
  lVar6 = *param_2;
  if (((lVar6 != 0) && (param_2[1] != -1)) && (param_2[1] == *(longlong *)(lVar6 + 0xd0))) {
    *(int *)(lVar6 + 0x2e8) = *(int *)(lVar6 + 0x2e8) + -1;
    param_2[1] = -1;
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1405a0170 Num body=192 status=ok
// SIG undefined Num(void)

int TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
    ::Num(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>::
  ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] == 0) {
    return 0;
  }
  plVar2 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar2 = param_1 + 7;
  }
  iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_2) * 4);
  iVar3 = iVar1;
  if (iVar1 != -1) {
    do {
      iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar3 * 0x18);
      if (*(int *)(*param_1 + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  }
  do {
    if (iVar3 == -1) {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    if (iVar1 == -1) {
      return iVar4;
    }
    iVar3 = iVar1;
    do {
      iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar3 * 0x18);
      if (*(int *)(*param_1 + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  } while( true );
}



// FUNCTION 1405a0270 FUN_1405a0270 body=196 status=ok
// SIG undefined FUN_1405a0270(void)

void FUN_1405a0270(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  if (*(char *)(param_1 + 0x2e0) == '\x03') {
    lVar2 = FWeakObjectPtr::GetEvenIfUnreachable(param_1 + 0x3f0);
    if (lVar2 != 0) {
      lVar3 = FUN_1405b58b0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_res8 = param_1;
        TArray<FName,FDefaultAllocator>::Remove(lVar2 + 0x180,&local_res8);
        TArray<FName,FDefaultAllocator>::Remove(lVar2 + 400,&local_res8);
        FUN_14059f7f0(local_res8);
      }
    }
    FUN_14059f7f0(param_1);
  }
  FUN_140595fe0(param_1);
  FUN_1423931c0(param_1,param_2);
  return;
}



// FUNCTION 1405a0340 FUN_1405a0340 body=69 status=ok
// SIG undefined FUN_1405a0340(void)

void FUN_1405a0340(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1405adde0(*(longlong *)(param_1 + 0x2d8),param_1);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  FUN_1423931c0(param_1,param_2);
  return;
}



// FUNCTION 1405a0390 FUN_1405a0390 body=347 status=ok
// SIG undefined FUN_1405a0390(void)

void FUN_1405a0390(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Src;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  undefined2 *_Src_00;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  undefined2 *local_18;
  int local_10;
  
  lVar7 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar7 + 0x30);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)FCulture::GetName(uVar5);
  pvVar10 = (void *)0x0;
  iVar9 = 0;
  local_38 = (void *)0x0;
  local_30 = *(int *)(puVar8 + 1);
  lVar7 = (longlong)local_30;
  _Src = (void *)*puVar8;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar10 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 * 2);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    pvVar10 = local_38;
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      pvVar10 = local_38;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
        pvVar10 = local_38;
      }
    }
  }
  FUN_14059ddf0(&local_18,&local_38);
  local_28 = (wchar_t *)0x0;
  local_1c = 0;
  if (local_10 == 0) {
    _Src_00 = &DAT_143f3eda8;
  }
  else {
    iVar9 = local_10 + -1;
    _Src_00 = local_18;
  }
  iVar9 = iVar9 + 1;
  local_20 = iVar9;
  if (0 < iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  }
  pwVar6 = local_28;
  _guard_xfg_dispatch_icall_nop(local_28,_Src_00,(longlong)iVar9 * 2);
  AK::StreamMgr::SetCurrentLanguage(pwVar6);
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free(local_18);
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return;
}



// FUNCTION 1405a04f0 FUN_1405a04f0 body=486 status=ok
// SIG undefined FUN_1405a04f0(void)

void FUN_1405a04f0(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  if ((*(char *)((longlong)param_2 + 0x41) == '\0') || (param_3 != '\0')) {
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      *(longlong *)(param_1 + 0xe8) = *param_2;
    }
    else {
      *(longlong *)param_2[1] = *param_2;
    }
    if (*param_2 == 0) {
      *(longlong *)(param_1 + 0xe0) = param_2[1];
    }
    else {
      *(longlong *)(*param_2 + 8) = param_2[1];
    }
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
    plVar3 = DAT_1468536d0;
    if (DAT_1468536d0 != (longlong *)0x0) {
      AK::SoundEngine::CancelEventCallbackCookie(param_2);
      lVar6 = *plVar3;
      lVar4 = lVar6 + (longlong)(int)plVar3[1] * 0x48;
      for (; lVar6 != lVar4; lVar6 = lVar6 + 0x48) {
        if (*(longlong **)(lVar6 + 8) == param_2) {
          *(undefined8 *)(lVar6 + 8) = 0;
        }
      }
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar3 + 4));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar3 + 4));
      }
      lVar6 = plVar3[2];
      lVar4 = lVar6 + (longlong)(int)plVar3[3] * 0x48;
      for (; lVar6 != lVar4; lVar6 = lVar6 + 0x48) {
        if (*(longlong **)(lVar6 + 8) == param_2) {
          *(undefined8 *)(lVar6 + 8) = 0;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 4));
    }
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_2 + 3);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_30 = 0xffffffffffffffff;
        if ((param_1 != 0) && (*(longlong *)(param_1 + 0xd0) != -1)) {
          local_30 = *(undefined8 *)(param_1 + 0xd0);
          *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
        }
        lVar4 = *plVar3;
        local_38 = param_1;
        uVar5 = FUN_140590010(local_28,&local_38,(int)param_2[4]);
        (**(code **)(lVar4 + 0x280))(plVar3,uVar5);
      }
    }
    FUN_1405ae6a0(param_1);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x80,param_2);
    if (param_2[6] != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_2,0x48);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      FUN_1405a06e0(param_1);
    }
  }
  return;
}



// FUNCTION 1405a06e0 FUN_1405a06e0 body=101 status=ok
// SIG undefined FUN_1405a06e0(void)

void FUN_1405a06e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xb8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xb0);
      }
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  *(undefined1 *)(param_1 + 0x139) = 1;
  if (*(int *)(param_1 + 0x2e4) == 0) {
    FUN_140596c00(param_1);
    return;
  }
  return;
}



// FUNCTION 1405a0750 FUN_1405a0750 body=687 status=ok
// SIG undefined FUN_1405a0750(void)

void FUN_1405a0750(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar3 = (char)param_1[0x5c];
  if (cVar3 == '\x03') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x7e);
    if (lVar6 != 0) {
      lVar7 = FUN_1405b58b0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar10 = *(int *)((longlong)param_1 + 0xc);
        if (iVar10 < (int)DAT_1469e91c4) {
          uVar9 = iVar10 >> 0x1f & 0xffff;
          uVar4 = iVar10 + uVar9;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x30000000) != 0) {
          return;
        }
        plVar1 = *(longlong **)(lVar6 + 400);
        plVar11 = plVar1;
        do {
          if (plVar11 == plVar1 + *(int *)(lVar6 + 0x198)) {
LAB_1405a085f:
            (**(code **)(*param_1 + 0x288))(param_1);
            if (*(char *)(lVar6 + 0x17d) == '\0') {
              (**(code **)(*param_1 + 0x418))(param_1,&DAT_14653218c);
              FUN_142395db0(param_1);
              FUN_142397000(param_1,0,0,0);
              iVar10 = *(int *)(lVar6 + 0x188);
              *(int *)(lVar6 + 0x188) = iVar10 + 1;
              if (*(int *)(lVar6 + 0x18c) < iVar10 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (lVar6 + 0x180,iVar10);
              }
              *(longlong **)(*(longlong *)(lVar6 + 0x180) + (longlong)iVar10 * 8) = param_1;
              return;
            }
            FWeakObjectPtr::operator=(param_1 + 0x7e,0);
            FUN_1405a8f50(param_1);
            return;
          }
          if ((longlong *)*plVar11 == param_1) {
            iVar10 = (int)((longlong)plVar11 - (longlong)plVar1 >> 3);
            if (iVar10 != -1) {
              _guard_xfg_dispatch_icall_nop
                        (plVar1 + iVar10,plVar1 + iVar10 + 1,
                         (longlong)((*(int *)(lVar6 + 0x198) - iVar10) + -1) << 3);
              *(int *)(lVar6 + 0x198) = *(int *)(lVar6 + 0x198) + -1;
            }
            goto LAB_1405a085f;
          }
          plVar11 = plVar11 + 1;
        } while( true );
      }
    }
    FUN_1405a8f50(param_1);
    cVar3 = (char)param_1[0x5c];
  }
  if (cVar3 != '\x02') {
    FUN_14059e780(param_1);
    return;
  }
  if ((DAT_1468c21ae != '\0') && (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_res10 = local_res8;
    local_28 = 0;
    local_18 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_CopyToEmptyStorage_143fcfe50;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_res10._4_4_;
      *(int *)(puVar8 + 1) = (int)local_res8;
    }
    local_58[0] = FUN_140595ae0;
    FUN_14158fcd0(2,local_58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405a09de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  return;
}



// FUNCTION 1405a0a00 FUN_1405a0a00 body=689 status=ok
// SIG undefined FUN_1405a0a00(void)

void FUN_1405a0a00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [56];
  
  if ((param_2 != 0) && (lVar6 = FWeakObjectPtr::Get(param_2 + 0x18), lVar6 != 0)) {
    lVar7 = UPawnAction_Sequence::StaticClass();
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
      if ((*(byte *)(lVar6 + 0x60) & 0xf0) != 0) {
        *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + 1;
      }
      if ((*(longlong *)(lVar6 + 0x40) != 0) && (*(longlong *)(param_1 + 0x378) != 0)) {
        fVar13 = (float)FUN_14059aff0(*(longlong *)(param_1 + 0x378),*(undefined4 *)(param_2 + 0x20)
                                      ,0);
        lVar7 = FUN_14058e3a0();
        fVar14 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar7 + 0x140) * 0.05);
        if (fVar14 <= fVar13) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x378) + 0xc0);
          uVar1 = *(undefined4 *)(lVar6 + 0x4c);
          uVar8 = FUN_14058f8f0(local_88,param_1 + 0x378);
          plVar9 = (longlong *)FUN_140590010(local_60,uVar8,*(undefined4 *)(param_2 + 0x20));
          uVar8 = *(undefined8 *)(lVar6 + 0x40);
          bVar3 = false;
          *(int *)(lVar7 + 0x24c) = *(int *)(lVar7 + 0x24c) + 1;
          iVar5 = *(int *)(lVar7 + 0x24c);
          iVar10 = *(int *)(lVar7 + 0x240) + -1;
          lVar6 = (longlong)iVar10;
          if (-1 < iVar10) {
            lVar12 = lVar6 << 4;
            bVar3 = false;
            do {
              lVar2 = *(longlong *)(lVar7 + 0x238);
              if (*(int *)(lVar12 + 8 + lVar2) == 0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = *(longlong **)(lVar12 + lVar2);
              }
              if (plVar11 == (longlong *)0x0) {
LAB_1405a0bde:
                bVar3 = true;
              }
              else {
                local_78 = *plVar9;
                local_70 = 0xffffffffffffffff;
                if ((local_78 != 0) && (*(longlong *)(local_78 + 0xd0) != -1)) {
                  *(int *)(local_78 + 0x2e8) = *(int *)(local_78 + 0x2e8) + 1;
                  local_70 = *(undefined8 *)(local_78 + 0xd0);
                }
                local_68 = (undefined4)plVar9[2];
                cVar4 = (**(code **)(*plVar11 + 0x40))(plVar11,uVar8,&local_78,fVar13,uVar1);
                if (cVar4 == '\0') goto LAB_1405a0bde;
              }
              lVar12 = lVar12 + -0x10;
              lVar6 = lVar6 + -1;
            } while (-1 < lVar6);
            iVar5 = *(int *)(lVar7 + 0x24c);
          }
          *(int *)(lVar7 + 0x24c) = iVar5 + -1;
          if (bVar3) {
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                      ((longlong *)(lVar7 + 0x238),0);
          }
          lVar6 = *plVar9;
          if (((lVar6 == 0) || (plVar9[1] == -1)) || (plVar9[1] != *(longlong *)(lVar6 + 0xd0))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if ((plVar9[1] != -1) && (*(longlong *)(lVar6 + 0xd0) == plVar9[1])) {
              *(int *)(lVar6 + 0x2e8) = *(int *)(lVar6 + 0x2e8) + -1;
            }
            *plVar9 = 0;
            plVar9[1] = -1;
          }
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x401) != '\0') && (*(char *)(param_1 + 0x402) == '\0')) {
    FUN_1405b17d0(param_1);
  }
  return;
}



// FUNCTION 1405a0cc0 FUN_1405a0cc0 body=183 status=ok
// SIG undefined FUN_1405a0cc0(void)

void FUN_1405a0cc0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_2 + 0x18);
    if (lVar2 != 0) {
      lVar3 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((*(byte *)(lVar2 + 0x60) & 0xf0) != 0) {
          *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -1;
        }
        goto LAB_1405a0d29;
      }
    }
  }
  lVar2 = 0;
LAB_1405a0d29:
  if ((*(char *)(param_1 + 0x401) != '\0') && (*(char *)(param_1 + 0x402) == '\0')) {
    FUN_1405b17d0(param_1);
  }
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x370))) {
    local_18 = param_1;
    local_10 = lVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x368,&local_18);
  }
  return;
}



// FUNCTION 1405a0d80 FUN_1405a0d80 body=153 status=ok
// SIG undefined FUN_1405a0d80(void)

void FUN_1405a0d80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x300) != 0) && (*(longlong *)(param_1 + 0x308) != 0))
  goto LAB_1405a0dfb;
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) {
LAB_1405a0dc3:
    lVar3 = FUN_14238b320(param_1);
    if (lVar3 == 0) goto LAB_1405a0dfb;
    uVar1 = FUN_1405b5580();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if (lVar2 == 0) goto LAB_1405a0dfb;
  }
  else {
    uVar1 = FUN_1405b5580();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if (lVar2 == 0) goto LAB_1405a0dc3;
  }
  *(longlong *)(param_1 + 0x300) = lVar3;
  *(longlong *)(param_1 + 0x308) = lVar2;
LAB_1405a0dfb:
  if (*(char *)(param_1 + 0x2e0) != '\x03') {
    FUN_1405930a0(param_1);
  }
  FUN_142393b20(param_1);
  return;
}



// FUNCTION 1405a0e20 FUN_1405a0e20 body=334 status=ok
// SIG undefined FUN_1405a0e20(void)

void FUN_1405a0e20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  longlong *local_res18 [2];
  
  FUN_142393b20();
  FUN_1405b2210(param_1,0);
  lVar2 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    local_res18[0] = param_1;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    }
    if ((*(longlong *)(lVar2 + 0x1e8) == 0) || (param_1 == (longlong *)0x0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    }
    else {
      FUN_14058c5a0(*(longlong *)(lVar2 + 0x1e8) + 0x130,local_res10,local_res18,0);
      _Var4 = (**(code **)(*param_1 + 0x548))(param_1);
      AK::SoundEngine::RegisterGameObj(_Var4);
      _Var4 = (**(code **)(*param_1 + 0x548))(param_1);
      AK::SoundEngine::SetListeners(_Var4,(__uint64 *)(lVar2 + 0x1f0),1);
      FUN_1405ae740(lVar2 + 0x1e8);
      FUN_14059fa50(*(undefined8 *)(lVar2 + 0x1e8));
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      lVar1 = *(longlong *)(lVar2 + 0x210);
      if (lVar1 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x548))(param_1);
        FUN_1405a3d60(lVar1,uVar5);
      }
    }
    param_1[0x5b] = lVar2;
  }
  return;
}



// FUNCTION 1405a0f70 FUN_1405a0f70 body=49 status=ok
// SIG undefined FUN_1405a0f70(void)

void FUN_1405a0f70(longlong param_1)

{
  FUN_142394230();
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined1 *)(param_1 + 0x403) = 0;
  FUN_140595fe0(param_1);
  return;
}



// FUNCTION 1405a0fb0 FUN_1405a0fb0 body=53 status=ok
// SIG undefined FUN_1405a0fb0(void)

void FUN_1405a0fb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1405adde0(*(longlong *)(param_1 + 0x2d8),param_1);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  FUN_142394230(param_1);
  return;
}



// FUNCTION 1405a1000 FUN_1405a1000 body=59 status=ok
// SIG undefined FUN_1405a1000(void)

void FUN_1405a1000(void)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  FUN_1405978e0(0);
                    /* WARNING: Could not recover jumptable at 0x0001405a1034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  return;
}



// FUNCTION 1405a1040 FUN_1405a1040 body=446 status=ok
// SIG undefined FUN_1405a1040(void)

void FUN_1405a1040(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  int local_20;
  
  if (DAT_1468536c8 != 0) {
    local_28 = param_2;
    FUN_14058ed10(DAT_1468536c8 + 0x228,&local_28);
    plVar2 = (longlong *)0x0;
    local_28 = (longlong *)0x0;
    local_20 = *(int *)(DAT_1468536c8 + 0x70);
    lVar5 = (longlong)local_20;
    pvVar1 = *(void **)(DAT_1468536c8 + 0x68);
    plVar6 = plVar2;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      plVar6 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar5 << 3);
    }
    plVar4 = (longlong *)((ulonglong)((longlong)(plVar6 + local_20) + (7 - (longlong)plVar6)) >> 3);
    if (plVar6 + local_20 < plVar6) {
      plVar4 = plVar2;
    }
    plVar3 = plVar2;
    plVar7 = plVar6;
    if (plVar4 != (longlong *)0x0) {
      do {
        lVar5 = *plVar7;
        if (*(longlong **)(lVar5 + 200) == param_2) {
          FUN_1405ac930(lVar5);
          FUN_140596c00(lVar5);
        }
        plVar7 = plVar7 + 1;
        plVar3 = (longlong *)((longlong)plVar3 + 1);
      } while (plVar3 != plVar4);
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
    local_28 = (longlong *)0x0;
    local_20 = *(int *)(DAT_1468536c8 + 0x30);
    lVar5 = (longlong)local_20;
    pvVar1 = *(void **)(DAT_1468536c8 + 0x28);
    plVar6 = plVar2;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      plVar6 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar5 << 3);
    }
    plVar4 = (longlong *)((ulonglong)((longlong)(plVar6 + local_20) + (7 - (longlong)plVar6)) >> 3);
    if (plVar6 + local_20 < plVar6) {
      plVar4 = plVar2;
    }
    plVar3 = plVar6;
    if (plVar4 != (longlong *)0x0) {
      do {
        if ((*(longlong **)(*plVar3 + 200) == param_2) && (*(longlong *)(*plVar3 + 0xc0) != 0)) {
          FUN_140596c00();
        }
        plVar3 = plVar3 + 1;
        plVar2 = (longlong *)((longlong)plVar2 + 1);
      } while (plVar2 != plVar4);
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
  }
  return;
}



// FUNCTION 1405a1200 FUN_1405a1200 body=439 status=ok
// SIG undefined FUN_1405a1200(void)

longlong FUN_1405a1200(void)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_146853710;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_146853710 + 0x8430));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x8430));
  }
  if (DAT_146853710 == 0) {
    lVar4 = operator_new(0x210);
    if (lVar4 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_146853710 + 0x8430));
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x1d8) = 0;
    *(undefined8 *)(lVar4 + 0x1e0) = 0;
    *(undefined8 *)(lVar4 + 0x1e8) = 0;
    *(undefined8 *)(lVar4 + 0x1f0) = 0;
    *(undefined8 *)(lVar4 + 0x1f8) = 0;
    *(undefined8 *)(lVar4 + 0x200) = 0;
    return lVar4;
  }
  lVar4 = 0;
  LOCK();
  iVar2 = *(int *)(DAT_146853710 + 0x8408);
  if (iVar2 == 0) {
    *(int *)(DAT_146853710 + 0x8408) = 0;
    iVar2 = 0;
  }
  lVar3 = DAT_146853710;
  UNLOCK();
  if (iVar2 < 0x40) {
    LOCK();
    iVar2 = *(int *)(DAT_146853710 + 0x8408);
    if (iVar2 == 0) {
      *(int *)(DAT_146853710 + 0x8408) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    lVar4 = lVar3 + 8 + (longlong)iVar2 * 0x210;
  }
  else {
    lVar3 = operator_new(0x210);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      *(undefined8 *)(lVar3 + 0x1d8) = 0;
      *(undefined8 *)(lVar3 + 0x1e0) = 0;
      *(undefined8 *)(lVar3 + 0x1e8) = 0;
      *(undefined8 *)(lVar3 + 0x1f0) = 0;
      *(undefined8 *)(lVar3 + 0x1f8) = 0;
      *(undefined8 *)(lVar3 + 0x200) = 0;
      lVar4 = lVar3;
    }
  }
  *(longlong *)(DAT_146853710 + 0x8458) = lVar4;
  if (*(longlong *)(DAT_146853710 + 0x8458) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_146853710 + 0x8430));
  }
  return *(longlong *)(DAT_146853710 + 0x8458);
}



// FUNCTION 1405a13c0 FUN_1405a13c0 body=329 status=ok
// SIG undefined FUN_1405a13c0(void)

longlong * FUN_1405a13c0(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  
  if (param_1 != 0) {
    plVar4 = (longlong *)operator_new(0x28);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = param_1;
      *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(param_1 + 0x28);
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = *(undefined4 *)(param_2 + 0x28);
      }
      *(undefined4 *)((longlong)plVar4 + 0xc) = uVar2;
      *(undefined1 *)(plVar4 + 2) = param_3;
      QueryPerformanceCounter(&local_res8);
      dVar7 = (double)local_res8.QuadPart * DAT_1468b02f8;
      plVar4[4] = param_4;
      plVar4[3] = (longlong)(dVar7 + 16777216.0);
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
      }
      iVar1 = DAT_146853910;
      lVar6 = (longlong)DAT_146853910;
      DAT_146853910 = DAT_146853910 + 1;
      if (DAT_146853914 < DAT_146853910) {
        TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
        ::ResizeGrow(&DAT_146853888,iVar1);
      }
      puVar5 = DAT_146853908;
      if (DAT_146853908 == (undefined *)0x0) {
        puVar5 = &DAT_146853888;
      }
      *(undefined4 *)(puVar5 + lVar6 * 0x10 + 8) = 0;
      *(longlong **)(puVar5 + lVar6 * 0x10) = plVar4;
      puVar5 = DAT_146853908;
      if (DAT_146853908 == (undefined *)0x0) {
        puVar5 = &DAT_146853888;
      }
      *(undefined4 *)(puVar5 + lVar6 * 0x10 + 8) = *(undefined4 *)(param_1 + 0x28);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
    }
    return plVar4;
  }
  return (longlong *)0x0;
}



// FUNCTION 1405a1510 FUN_1405a1510 body=61 status=ok
// SIG undefined FUN_1405a1510(void)

void FUN_1405a1510(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    FUN_140599990(lVar1,(int)param_1[2],1,param_2,param_3);
  }
  return;
}



// FUNCTION 1405a1550 FUN_1405a1550 body=125 status=ok
// SIG undefined FUN_1405a1550(void)

void FUN_1405a1550(longlong *param_1,float param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((param_1[1] != -1) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
      FUN_140599990(lVar1,(int)param_1[2],1,(int)(param_2 * 1000.0),param_3);
      lVar1 = *param_1;
    }
    if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
      *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
      *param_1 = 0;
      param_1[1] = -1;
    }
  }
  return;
}



// FUNCTION 1405a15d0 FUN_1405a15d0 body=98 status=ok
// SIG undefined FUN_1405a15d0(void)

void FUN_1405a15d0(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x34) != '\0')) {
    lVar1 = *(longlong *)(lVar1 + 8);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    }
    *(undefined1 *)(lVar1 + 0x122) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
  }
  return;
}



// FUNCTION 1405a1640 FUN_1405a1640 body=220 status=ok
// SIG undefined FUN_1405a1640(void)

void FUN_1405a1640(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  
  if ((((*(char *)(param_1 + 0x403) == '\0') && (*(longlong *)(param_1 + 0x2d0) != 0)) &&
      (*(longlong *)(param_1 + 0x378) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x378) + 200) != 0)) {
    cVar1 = FUN_1428c5af0();
    if (cVar1 != '\0') {
      if ((byte)(*(char *)(param_1 + 0x2e0) - 2U) < 2) {
        *(undefined8 *)(param_1 + 0x2d0) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x403) = 1;
        lVar2 = FUN_1405a3150(param_1,&local_28,*(undefined8 *)(param_1 + 0x2d0),0);
        FUN_1405913a0(param_1 + 0x408,lVar2);
        *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar2 + 0x10);
        if (((local_28 != 0) && (local_20 != -1)) && (local_20 == *(longlong *)(local_28 + 0xd0))) {
          *(int *)(local_28 + 0x2e8) = *(int *)(local_28 + 0x2e8) + -1;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405a1720 FUN_1405a1720 body=130 status=ok
// SIG undefined FUN_1405a1720(void)

void FUN_1405a1720(longlong param_1)

{
  longlong lVar1;
  longlong local_28;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    lVar1 = FUN_1405a3150(param_1,&local_28,*(longlong *)(param_1 + 0x2d8),0);
    FUN_1405913a0(param_1 + 0x408,lVar1);
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar1 + 0x10);
    if (((local_28 != 0) && (local_20 != -1)) && (local_20 == *(longlong *)(local_28 + 0xd0))) {
      *(int *)(local_28 + 0x2e8) = *(int *)(local_28 + 0x2e8) + -1;
    }
    *(undefined1 *)(param_1 + 0x403) = 0;
  }
  return;
}



// FUNCTION 1405a17b0 FUN_1405a17b0 body=424 status=ok
// SIG undefined FUN_1405a17b0(void)

undefined8 *
FUN_1405a17b0(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4,
             undefined8 param_5,float param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res20 [8];
  float local_48;
  float fStack_44;
  float local_40;
  undefined1 local_38 [8];
  float local_30;
  
  if (((param_4 != (longlong *)0x0) ||
      ((param_3 != 0 && (param_4 = *(longlong **)(param_3 + 0x168), param_4 != (longlong *)0x0))))
     && (param_2 != 0)) {
    (**(code **)(*param_4 + 0x428))(param_4,&local_48,param_5);
    local_30 = local_40;
    uVar2 = (**(code **)(*param_4 + 0x148))(param_4);
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      lVar3 = FUN_14059b380(DAT_1468536c8,uVar2,local_38,local_res20);
      if (lVar3 != 0) {
        local_48 = local_48 - (float)*(undefined8 *)(lVar3 + 0x2e0);
        local_30 = *(float *)(lVar3 + 0x2e8);
        fStack_44 = fStack_44 - (float)((ulonglong)*(undefined8 *)(lVar3 + 0x2e0) >> 0x20);
        cVar1 = FUN_14059ec80(param_2,fStack_44 * fStack_44 + local_48 * local_48 +
                                      (local_40 - local_30) * (local_40 - local_30),0x3f800000,
                              param_6);
        if ((cVar1 != '\0') && (lVar3 = FUN_1405ab470(param_3,param_5,1,param_4), lVar3 != 0)) {
          if (0.0 < param_6) {
            FUN_1405a9420(lVar3,param_6);
          }
          FUN_1405a3150(lVar3,param_1,param_2,0);
          return param_1;
        }
      }
    }
  }
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1405a1960 FUN_1405a1960 body=67 status=ok
// SIG undefined FUN_1405a1960(void)

void FUN_1405a1960(longlong param_1,longlong param_2)

{
  if ((DAT_1468536c5 != '\0') && (param_2 != 0)) {
    AK::SoundEngine::PostEvent
              (*(ulong *)(param_2 + 0x28),*(__uint64 *)(param_1 + 0x1f0),0,
               (_func_void_AkCallbackType_AkCallbackInfo_ptr *)0x0,(void *)0x0,0,
               (AkExternalSourceInfo *)0x0,0);
  }
  return;
}



// FUNCTION 1405a19b0 FUN_1405a19b0 body=1142 status=ok
// SIG undefined FUN_1405a19b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1405a19b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  ulong uVar10;
  void **ppvVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  AkExternalSourceInfo *pAVar15;
  longlong local_res18;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  AkExternalSourceInfo *local_48;
  ulong local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  if (((DAT_1468536c5 != '\0') && (*param_2 != 0)) && ((int)param_2[2] < 0x10)) {
    iVar14 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146853a90) &&
       (_Init_thread_header(&DAT_146853a90), DAT_146853a90 == -1)) {
      DAT_146853990 = 0;
      _DAT_146853998 = 0;
      _DAT_1468539a0 = 0;
      _DAT_1468539a8 = 0;
      _DAT_1468539b0 = 0;
      _DAT_1468539b8 = 0;
      _DAT_1468539c0 = 0;
      _DAT_1468539c8 = 0;
      _DAT_1468539d0 = 0;
      _DAT_1468539d8 = 0;
      _DAT_1468539e0 = 0;
      _DAT_1468539e8 = 0;
      _DAT_1468539f0 = 0;
      _DAT_1468539f8 = 0;
      _DAT_146853a00 = 0;
      _DAT_146853a08 = 0;
      _DAT_146853a10 = 0;
      _DAT_146853a18 = 0;
      _DAT_146853a20 = 0;
      _DAT_146853a28 = 0;
      _DAT_146853a30 = 0;
      _DAT_146853a38 = 0;
      _DAT_146853a40 = 0;
      _DAT_146853a48 = 0;
      _DAT_146853a50 = 0;
      _DAT_146853a58 = 0;
      _DAT_146853a60 = 0;
      _DAT_146853a68 = 0;
      DAT_146853a70 = 0;
      _DAT_146853a78 = 0;
      DAT_146853a80 = 0;
      _DAT_146853a88 = 0;
      atexit(`FVirtualTextureSpace::ApplyUpdates'::`2'::
             _dynamic_atexit_destructor_for__ExpandedUpdates__);
      _Init_thread_footer(&DAT_146853a90);
    }
    uVar10 = *(ulong *)(param_2 + 2);
    local_48 = (AkExternalSourceInfo *)0x0;
    local_3c = 0;
    pAVar15 = local_48;
    local_40 = uVar10;
    if (0 < (int)uVar10) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(&local_48,0);
      pAVar15 = local_48;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined8 *)pAVar15 = 0;
      *(undefined8 *)(pAVar15 + 8) = 0;
      *(undefined8 *)(pAVar15 + 0x10) = 0;
      *(undefined8 *)(pAVar15 + 0x18) = 0;
      pAVar15 = pAVar15 + 0x20;
    }
    if (0 < (int)param_2[2]) {
      ppvVar11 = (void **)&DAT_146853990;
      pAVar15 = local_48 + 8;
      local_res18 = 0;
      do {
        puVar13 = (undefined4 *)(param_2[1] + local_res18);
        FString::PrintfImpl(&local_58,L"%u.wem",puVar13[1]);
        _Src = local_58;
        if (*(char *)(puVar13 + 2) == '\0') {
          if (ppvVar11 != &local_58) {
            lVar5 = (longlong)local_50;
            *(int *)(ppvVar11 + 1) = local_50;
            if ((local_50 == 0) && (*(int *)((longlong)ppvVar11 + 0xc) == 0)) {
              *(undefined4 *)((longlong)ppvVar11 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar11,local_50);
              _guard_xfg_dispatch_icall_nop(*ppvVar11,_Src,lVar5 * 2);
            }
          }
        }
        else {
          lVar5 = FInternationalization::Get();
          plVar4 = *(longlong **)(lVar5 + 0x30);
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          uVar6 = FCulture::GetName(uVar6);
          puVar7 = (undefined8 *)FUN_14059ddf0(local_38,uVar6);
          if (local_50 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = local_50 + -1;
          }
          if ((*(int *)(puVar7 + 1) != 0) || (iVar9 = 1, iVar12 + 1 == 0)) {
            iVar9 = 0;
          }
          local_68 = (void *)*puVar7;
          *puVar7 = 0;
          iVar3 = *(int *)(puVar7 + 1);
          local_60 = puVar7[1];
          puVar7[1] = 0;
          if (*(int *)((longlong)puVar7 + 0xc) < iVar9 + iVar3 + iVar12 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
          }
          FString::PathAppend(&local_68,local_58,iVar12);
          if (ppvVar11 == &local_68) {
            if (local_68 != (void *)0x0) {
              FMemory::Free();
            }
          }
          else {
            if (*ppvVar11 != (void *)0x0) {
              FMemory::Free();
            }
            *ppvVar11 = local_68;
            *(undefined4 *)(ppvVar11 + 1) = (undefined4)local_60;
            *(undefined4 *)((longlong)ppvVar11 + 0xc) = local_60._4_4_;
            local_60 = 0;
            local_68 = (void *)0x0;
          }
          if (local_38[0] != 0) {
            FMemory::Free();
          }
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        *(undefined4 *)(pAVar15 + -4) = 4;
        *(undefined4 *)(pAVar15 + -8) = *puVar13;
        if (*(int *)(ppvVar11 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *ppvVar11;
        }
        *(undefined2 **)pAVar15 = puVar8;
        if (local_58 != (void *)0x0) {
          FMemory::Free();
        }
        local_res18 = local_res18 + 0xc;
        iVar14 = iVar14 + 1;
        ppvVar11 = ppvVar11 + 2;
        pAVar15 = pAVar15 + 0x20;
      } while (iVar14 < (int)param_2[2]);
    }
    pAVar15 = local_48;
    uVar10 = AK::SoundEngine::PostEvent
                       (*(ulong *)(*param_2 + 0x28),2,0x100000,
                        (_func_void_AkCallbackType_AkCallbackInfo_ptr *)0x0,(void *)0x0,local_40,
                        local_48,0);
    if (pAVar15 != (AkExternalSourceInfo *)0x0) {
      FMemory::Free(pAVar15);
    }
    return uVar10;
  }
  return 0;
}



// FUNCTION 1405a1e30 FUN_1405a1e30 body=858 status=ok
// SIG undefined FUN_1405a1e30(void)

longlong *
FUN_1405a1e30(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,float *param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  
  if ((DAT_1468536c6 != '\0') || (lVar5 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    lVar5 = 0;
  }
  if ((param_3 == 0) || (lVar5 == 0)) {
LAB_1405a2129:
    lVar5 = DAT_1461fcfe0;
    *param_1 = DAT_1461fcfe0;
    param_1[1] = -1;
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xd0) != -1)) {
      *(int *)(lVar5 + 0x2e8) = *(int *)(lVar5 + 0x2e8) + 1;
      param_1[1] = *(longlong *)(lVar5 + 0xd0);
    }
    *(undefined4 *)(param_1 + 2) = DAT_1461fcff0;
    return param_1;
  }
  local_68 = *param_4;
  local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_4 + 1));
  if ((param_2 == (longlong *)0x0) ||
     ((((uVar3 = (**(code **)(*param_2 + 0x148))(param_2), DAT_1468536c6 != '\0' ||
        (DAT_1468536c5 == '\0')) || (DAT_1468536c8 == 0)) ||
      ((lVar4 = FUN_14059b380(DAT_1468536c8,uVar3,&local_68,&local_res18), lVar4 == 0 ||
       (cVar1 = FUN_14059ec80(param_3,local_res18,0x3f800000), cVar1 == '\0'))))))
  goto LAB_1405a2129;
  uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  FUN_14059ce50(lVar5 + 8,&local_res18,uVar3,0);
  lVar5 = CONCAT44(uStackX_1c,local_res18);
  if (lVar5 == 0) goto LAB_1405a2129;
  FUN_1405aab70(lVar5,param_4,param_6);
  fVar6 = *param_6;
  fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar7)) {
    fVar7 = fVar6;
  }
  fVar6 = fVar6 - fVar7;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 360.0;
  }
  if (fVar6 == 0.0) {
    fVar6 = param_6[1];
    fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
    if (ABS(fVar6) < ABS(fVar7)) {
      fVar7 = fVar6;
    }
    fVar6 = fVar6 - fVar7;
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + 360.0;
    }
    if (fVar6 == 0.0) {
      fVar6 = param_6[2];
      fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
      if (ABS(fVar6) < ABS(fVar7)) {
        fVar7 = fVar6;
      }
      fVar6 = fVar6 - fVar7;
      if (fVar6 < 0.0) {
        fVar6 = fVar6 + 360.0;
      }
      uVar2 = 1;
      if (fVar6 == 0.0) goto LAB_1405a206b;
    }
  }
  uVar2 = 3;
LAB_1405a206b:
  *(undefined1 *)(lVar5 + 0x62) = uVar2;
  local_68 = 0;
  local_60 = 0;
  FUN_1405a2d20(lVar5,&local_58,param_3,0,0,&local_68);
  if (((local_58 != 0) && (local_50 != -1)) &&
     ((local_50 == *(longlong *)(local_58 + 0xd0) &&
      (((local_48 != 0 && ((*(byte *)(param_3 + 0x60) & 2) != 0)) &&
       (*(float *)(param_3 + 0x4c) <= 0.25 && *(float *)(param_3 + 0x4c) != 0.25)))))) {
    *(undefined1 *)(lVar5 + 0x62) = 0;
  }
  *param_1 = local_58;
  param_1[1] = -1;
  if ((local_58 != 0) && (*(longlong *)(local_58 + 0xd0) != -1)) {
    *(int *)(local_58 + 0x2e8) = *(int *)(local_58 + 0x2e8) + 1;
    param_1[1] = *(longlong *)(local_58 + 0xd0);
  }
  *(int *)(param_1 + 2) = local_48;
  if (((local_58 != 0) && (local_50 != -1)) && (local_50 == *(longlong *)(local_58 + 0xd0))) {
    *(int *)(local_58 + 0x2e8) = *(int *)(local_58 + 0x2e8) + -1;
  }
  FUN_1405a53f0(lVar5);
  return param_1;
}



// FUNCTION 1405a2190 FUN_1405a2190 body=736 status=ok
// SIG undefined FUN_1405a2190(void)

longlong *
FUN_1405a2190(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((DAT_1468536c6 != '\0') || (lVar16 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    lVar16 = 0;
  }
  if (((param_3 != 0) && (lVar16 != 0)) && (0 < (int)param_4[1])) {
    puVar12 = (undefined8 *)*param_4;
    puVar13 = puVar12 + (longlong)(int)param_4[1] * 4;
    for (; puVar12 != puVar13; puVar12 = puVar12 + 4) {
      local_58 = *puVar12;
      uVar1 = *(undefined4 *)(puVar12 + 3);
      uVar7 = (ulonglong)uStack_50 >> 0x20;
      uStack_50 = CONCAT44((int)uVar7,*(undefined4 *)(puVar12 + 1));
      if ((((param_2 != (longlong *)0x0) &&
           (uVar9 = (**(code **)(*param_2 + 0x148))(param_2), DAT_1468536c6 == '\0')) &&
          ((DAT_1468536c5 != '\0' &&
           ((DAT_1468536c8 != 0 &&
            (lVar10 = FUN_14059b380(DAT_1468536c8,uVar9,&local_58,&local_res18), lVar10 != 0))))))
         && (cVar8 = FUN_14059ec80(param_3,local_res18,0x3f800000,uVar1), cVar8 != '\0')) {
        uVar9 = (**(code **)(*param_2 + 0x148))(param_2);
        FUN_14059ce50(lVar16 + 8,&local_res18,uVar9,0);
        lVar16 = CONCAT44(uStackX_1c,local_res18);
        if (lVar16 != 0) {
          *(undefined1 *)(lVar16 + 0x62) = 2;
          *(undefined1 *)(lVar16 + 0x60) = param_5;
          FUN_1405aa840(lVar16,(int)param_4[1],1);
          iVar15 = 0;
          if (0 < (int)param_4[1]) {
            lVar14 = 0;
            lVar10 = 0;
            do {
              lVar11 = *(longlong *)(lVar16 + 0x40);
              if (*(longlong *)(lVar16 + 0x40) == 0) {
                lVar11 = lVar16;
              }
              *(undefined4 *)(lVar11 + 0x30 + lVar14) = *(undefined4 *)(lVar10 + 0x1c + *param_4);
              lVar11 = *param_4;
              uVar1 = *(undefined4 *)(lVar10 + 0x18 + lVar11);
              FRotator::Quaternion();
              uVar2 = *(undefined4 *)(lVar10 + 8 + lVar11);
              uVar3 = *(undefined4 *)(lVar10 + 4 + lVar11);
              uVar4 = *(undefined4 *)(lVar10 + lVar11);
              lVar10 = lVar10 + 0x20;
              lVar14 = lVar14 + 0x40;
              lVar11 = *(longlong *)(lVar16 + 0x40);
              if (*(longlong *)(lVar16 + 0x40) == 0) {
                lVar11 = lVar16;
              }
              iVar15 = iVar15 + 1;
              puVar12 = (undefined8 *)(lVar11 + -0x40 + lVar14);
              *puVar12 = local_58;
              puVar12[1] = uStack_50;
              auVar6._4_4_ = uVar3;
              auVar6._0_4_ = uVar4;
              auVar6._8_4_ = uVar2;
              auVar6._12_4_ = 0;
              *(undefined1 (*) [16])(lVar11 + -0x30 + lVar14) = auVar6;
              auVar5._4_4_ = uVar1;
              auVar5._0_4_ = uVar1;
              auVar5._8_4_ = uVar1;
              auVar5._12_4_ = 0;
              *(undefined1 (*) [16])(lVar11 + -0x20 + lVar14) = auVar5;
            } while (iVar15 < (int)param_4[1]);
          }
          local_58 = 0;
          uStack_50 = 0;
          FUN_1405a2d20(lVar16,param_1,param_3,0,0,&local_58);
          FUN_1405a53f0(lVar16);
          return param_1;
        }
        break;
      }
    }
  }
  lVar16 = DAT_1461fcfe0;
  *param_1 = DAT_1461fcfe0;
  param_1[1] = -1;
  if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0xd0) != -1)) {
    *(int *)(lVar16 + 0x2e8) = *(int *)(lVar16 + 0x2e8) + 1;
    param_1[1] = *(longlong *)(lVar16 + 0xd0);
  }
  *(undefined4 *)(param_1 + 2) = DAT_1461fcff0;
  return param_1;
}



// FUNCTION 1405a2470 FUN_1405a2470 body=44 status=ok
// SIG undefined FUN_1405a2470(void)

void FUN_1405a2470(longlong *param_1)

{
  UObject::PostLoad();
  if ((int)param_1[0xf] < 1) {
                    /* WARNING: Could not recover jumptable at 0x0001405a248f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x348))(param_1);
    return;
  }
  return;
}



// FUNCTION 1405a24a0 FUN_1405a24a0 body=39 status=ok
// SIG undefined FUN_1405a24a0(void)

void FUN_1405a24a0(longlong param_1)

{
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_14059f2e0(param_1);
    return;
  }
  return;
}



// FUNCTION 1405a24d0 FUN_1405a24d0 body=70 status=ok
// SIG undefined FUN_1405a24d0(void)

void FUN_1405a24d0(longlong param_1)

{
  longlong lVar1;
  
  UObject::PostLoad();
  if ((((DAT_1468b616c == '\0') && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) &&
      (*(char *)(lVar1 + 0x4a) != '\0')) && (*(char *)(lVar1 + 0x4b) != '\0')) {
    FUN_1405a32b0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1405a2520 FUN_1405a2520 body=247 status=ok
// SIG undefined FUN_1405a2520(void)

void FUN_1405a2520(undefined8 param_1,undefined4 param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (((param_3 != 0) && (0 < param_4)) && (DAT_1468536c5 != '\0')) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
    }
    if (0 < param_4) {
      lVar7 = 0;
      do {
        iVar4 = DAT_1468537f8;
        uVar2 = *(undefined8 *)(param_3 + lVar7 * 8);
        lVar6 = (longlong)DAT_1468537f8;
        uStack_2c = (undefined4)uVar2;
        uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
        DAT_1468537f8 = DAT_1468537f8 + 1;
        if (DAT_1468537fc < DAT_1468537f8) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_1468537f0,iVar4);
        }
        lVar3 = DAT_1468537f0;
        local_38 = (undefined4)param_1;
        uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
        lVar7 = lVar7 + 1;
        puVar1 = (undefined4 *)(DAT_1468537f0 + lVar6 * 0x18);
        *puVar1 = local_38;
        puVar1[1] = uStack_34;
        puVar1[2] = param_2;
        puVar1[3] = uStack_2c;
        *(ulonglong *)(lVar3 + 0x10 + lVar6 * 0x18) = CONCAT44(uStack_24,uStack_28);
      } while (lVar7 < param_4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
  }
  return;
}



// FUNCTION 1405a2620 FUN_1405a2620 body=42 status=ok
// SIG undefined FUN_1405a2620(void)

void FUN_1405a2620(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 0x470) != '\0') {
    FUN_1405aba50(param_1);
    return;
  }
  return;
}



// FUNCTION 1405a2650 FUN_1405a2650 body=61 status=ok
// SIG undefined FUN_1405a2650(void)

void FUN_1405a2650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if ((((lVar1 != 0) && (param_2 != 0)) && (*(__uint64 *)(lVar1 + 0xd0) != 0)) &&
     ((*(longlong *)(lVar1 + 0xc0) != 0 && (*(char *)(lVar1 + 0xd8) == '\0')))) {
    AK::SoundEngine::PostTrigger(*(ulong *)(param_2 + 0x28),*(__uint64 *)(lVar1 + 0xd0));
    return;
  }
  return;
}



// FUNCTION 1405a2690 FUN_1405a2690 body=289 status=ok
// SIG undefined FUN_1405a2690(void)

ulong FUN_1405a2690(longlong param_1,longlong param_2)

{
  __uint64 _Var1;
  ulong uVar2;
  ulonglong uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (((DAT_1468536c5 != '\0') && (param_2 != 0)) && (*(int *)(param_2 + 0x28) != 0)) {
    uVar3 = DAT_1461fd070;
    _Var1 = DAT_1461fd070 + 1;
    if ((DAT_1461fd070 & 3) == 0) {
      uVar3 = DAT_1461fd070 + 1;
      _Var1 = DAT_1461fd070 + 2;
    }
    DAT_1461fd070 = _Var1;
    local_18 = 0;
    local_10 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18,0xd,"SYSTEM EVENT",0xd,0x3f);
    FUN_1405a3b90(param_1 + 0x1e8,uVar3,&local_18,0x3f800000,0xffffffffffffffff);
    uVar2 = AK::SoundEngine::PostEvent
                      (*(ulong *)(param_2 + 0x28),uVar3,0,
                       (_func_void_AkCallbackType_AkCallbackInfo_ptr *)0x0,(void *)0x0,0,
                       (AkExternalSourceInfo *)0x0,0);
    FUN_1405adce0(param_1 + 0x1e8,uVar3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1405a27c0 FUN_1405a27c0 body=1365 status=ok
// SIG undefined FUN_1405a27c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1405a27c0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  void **ppvVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  int local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong local_58;
  
  lVar5 = DAT_1461fcfe0;
  uVar10 = 0;
  local_88 = 0;
  lStack_80 = -1;
  local_78 = 0;
  if (((*(longlong *)(param_1 + 0xd0) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
     (*(char *)(param_1 + 0xd8) == '\0')) {
    if (0x10 < *(int *)(param_3 + 2)) {
      *param_2 = DAT_1461fcfe0;
      param_2[1] = -1;
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xd0) != -1)) {
        *(int *)(lVar5 + 0x2e8) = *(int *)(lVar5 + 0x2e8) + 1;
        param_2[1] = *(longlong *)(lVar5 + 0xd0);
      }
      *(undefined4 *)(param_2 + 2) = DAT_1461fcff0;
      return param_2;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146853c40) &&
       (_Init_thread_header(&DAT_146853c40), DAT_146853c40 == -1)) {
      DAT_146853b40 = 0;
      _DAT_146853b48 = 0;
      _DAT_146853b50 = 0;
      _DAT_146853b58 = 0;
      _DAT_146853b60 = 0;
      _DAT_146853b68 = 0;
      _DAT_146853b70 = 0;
      _DAT_146853b78 = 0;
      _DAT_146853b80 = 0;
      _DAT_146853b88 = 0;
      _DAT_146853b90 = 0;
      _DAT_146853b98 = 0;
      _DAT_146853ba0 = 0;
      _DAT_146853ba8 = 0;
      _DAT_146853bb0 = 0;
      _DAT_146853bb8 = 0;
      _DAT_146853bc0 = 0;
      _DAT_146853bc8 = 0;
      _DAT_146853bd0 = 0;
      _DAT_146853bd8 = 0;
      _DAT_146853be0 = 0;
      _DAT_146853be8 = 0;
      _DAT_146853bf0 = 0;
      _DAT_146853bf8 = 0;
      _DAT_146853c00 = 0;
      _DAT_146853c08 = 0;
      _DAT_146853c10 = 0;
      _DAT_146853c18 = 0;
      DAT_146853c20 = 0;
      _DAT_146853c28 = 0;
      DAT_146853c30 = 0;
      _DAT_146853c38 = 0;
      atexit(`FVirtualTextureSpace::ApplyUpdates'::`2'::
             _dynamic_atexit_destructor_for__ExpandedUpdates__);
      _Init_thread_footer(&DAT_146853c40);
    }
    iVar11 = *(int *)(param_3 + 2);
    local_a0 = (undefined8 *)0x0;
    local_94 = 0;
    puVar14 = local_a0;
    local_98 = iVar11;
    if (0 < iVar11) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(&local_a0,0);
      puVar14 = local_a0;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14 = puVar14 + 4;
    }
    local_c8 = 0;
    if (0 < *(int *)(param_3 + 2)) {
      ppvVar12 = (void **)&DAT_146853b40;
      puVar14 = local_a0 + 1;
      local_90 = 0;
      do {
        puVar13 = (undefined4 *)(param_3[1] + local_90);
        FString::PrintfImpl(&local_b0,L"%u.wem",puVar13[1]);
        _Src = local_b0;
        if (*(char *)(puVar13 + 2) == '\0') {
          if (ppvVar12 != &local_b0) {
            lVar5 = (longlong)local_a8;
            *(int *)(ppvVar12 + 1) = local_a8;
            if ((local_a8 == 0) && (*(int *)((longlong)ppvVar12 + 0xc) == 0)) {
              *(undefined4 *)((longlong)ppvVar12 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar12,local_a8);
              _guard_xfg_dispatch_icall_nop(*ppvVar12,_Src,lVar5 * 2);
            }
          }
        }
        else {
          lVar5 = FInternationalization::Get();
          plVar4 = *(longlong **)(lVar5 + 0x30);
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          uVar6 = FCulture::GetName(uVar6);
          puVar7 = (undefined8 *)FUN_14059ddf0(local_70,uVar6);
          iVar11 = 0;
          if (local_a8 != 0) {
            iVar11 = local_a8 + -1;
          }
          if ((*(int *)(puVar7 + 1) != 0) || (iVar9 = 1, iVar11 + 1 == 0)) {
            iVar9 = 0;
          }
          local_c0 = (void *)*puVar7;
          *puVar7 = 0;
          iVar3 = *(int *)(puVar7 + 1);
          local_b8 = puVar7[1];
          puVar7[1] = 0;
          if (*(int *)((longlong)puVar7 + 0xc) < iVar9 + iVar3 + iVar11 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c0);
          }
          FString::PathAppend(&local_c0,local_b0,iVar11);
          if (ppvVar12 == &local_c0) {
            if (local_c0 != (void *)0x0) {
              FMemory::Free();
            }
          }
          else {
            if (*ppvVar12 != (void *)0x0) {
              FMemory::Free();
            }
            *ppvVar12 = local_c0;
            *(undefined4 *)(ppvVar12 + 1) = (undefined4)local_b8;
            *(undefined4 *)((longlong)ppvVar12 + 0xc) = local_b8._4_4_;
            local_b8 = 0;
            local_c0 = (void *)0x0;
          }
          if (local_70[0] != 0) {
            FMemory::Free();
          }
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        *(undefined4 *)((longlong)puVar14 + -4) = 4;
        *(undefined4 *)(puVar14 + -1) = *puVar13;
        if (*(int *)(ppvVar12 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *ppvVar12;
        }
        *puVar14 = puVar8;
        if (local_b0 != (void *)0x0) {
          FMemory::Free();
        }
        local_c8 = local_c8 + 1;
        local_90 = local_90 + 0xc;
        ppvVar12 = ppvVar12 + 2;
        puVar14 = puVar14 + 4;
      } while (local_c8 < *(int *)(param_3 + 2));
    }
    puVar14 = local_a0;
    lVar5 = FUN_1405a2d20(param_1,&local_60,*param_3,param_4,0,&local_a0);
    FUN_1405913a0(&local_88,lVar5);
    uVar10 = *(undefined4 *)(lVar5 + 0x10);
    if (((local_60 != 0) && (local_58 != -1)) && (local_58 == *(longlong *)(local_60 + 0xd0))) {
      *(int *)(local_60 + 0x2e8) = *(int *)(local_60 + 0x2e8) + -1;
    }
    if (puVar14 != (undefined8 *)0x0) {
      FMemory::Free(puVar14);
    }
  }
  *param_2 = local_88;
  param_2[1] = -1;
  if ((local_88 != 0) && (*(longlong *)(local_88 + 0xd0) != -1)) {
    *(int *)(local_88 + 0x2e8) = *(int *)(local_88 + 0x2e8) + 1;
    param_2[1] = *(longlong *)(local_88 + 0xd0);
  }
  *(undefined4 *)(param_2 + 2) = uVar10;
  if (((local_88 != 0) && (lStack_80 != -1)) && (lStack_80 == *(longlong *)(local_88 + 0xd0))) {
    *(int *)(local_88 + 0x2e8) = *(int *)(local_88 + 0x2e8) + -1;
  }
  return param_2;
}



// FUNCTION 1405a2d20 FUN_1405a2d20 body=1067 status=ok
// SIG undefined FUN_1405a2d20(void)

undefined8 *
FUN_1405a2d20(AkExternalSourceInfo *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
             ulong param_5,undefined8 *param_6)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  AkExternalSourceInfo *pAVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  AkExternalSourceInfo *pAVar13;
  AkExternalSourceInfo *pAVar14;
  float fVar15;
  float fVar16;
  AkExternalSourceInfo *local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  pAVar13 = (AkExternalSourceInfo *)0x0;
  lVar12 = -1;
  if (param_3 != 0) {
    if (((*(longlong *)(param_1 + 0xd0) == 0) || (*(longlong *)(param_1 + 0xc0) == 0)) ||
       (param_1[0xd8] != (AkExternalSourceInfo)0x0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(longlong *)(param_1 + 200) == 0 || (cVar3 = FUN_1428c5af0(), cVar3 != '\0')))
       ) {
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
      if (param_1[0x138] != (AkExternalSourceInfo)0x0) {
        FUN_1405b0a40(param_1,1);
      }
      pAVar5 = (AkExternalSourceInfo *)operator_new(0x48);
      pAVar14 = pAVar13;
      if (pAVar5 != (AkExternalSourceInfo *)0x0) {
        *(undefined8 *)pAVar5 = 0;
        *(undefined8 *)(pAVar5 + 8) = 0;
        *(undefined4 *)(pAVar5 + 0x18) = 0xffffffff;
        *(undefined8 *)(pAVar5 + 0x1c) = 0;
        *(undefined4 *)(pAVar5 + 0x24) = 0;
        pAVar5[0x28] = (AkExternalSourceInfo)0x1;
        *(undefined8 *)(pAVar5 + 0x30) = 0;
        *(undefined8 *)(pAVar5 + 0x38) = 0;
        *(undefined2 *)(pAVar5 + 0x40) = 0;
        pAVar14 = pAVar5;
      }
      *(AkExternalSourceInfo **)(pAVar14 + 0x10) = param_1;
      FWeakObjectPtr::operator=(pAVar14 + 0x18,param_3);
      uVar4 = *(ulong *)(param_6 + 1);
      pAVar5 = pAVar13;
      if (uVar4 != 0) {
        pAVar5 = (AkExternalSourceInfo *)*param_6;
      }
      uVar11 = 0x3000001;
      if (((*(byte *)(param_3 + 0x60) & 8) != 0) || (uVar4 != 0)) {
        uVar11 = 0x7000005;
      }
      uVar10 = uVar11 | 4;
      if ((param_4 & 1) == 0) {
        uVar10 = uVar11;
      }
      uVar11 = uVar10 | 8;
      if ((param_4 & 2) == 0) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11 | 0x100000;
      if ((param_4 & 4) == 0) {
        uVar10 = uVar11;
      }
      uVar1 = uVar10 | 0x7f00;
      if ((param_4 & 8) == 0) {
        uVar1 = uVar10;
      }
      uVar4 = AK::SoundEngine::PostEvent
                        (*(ulong *)(param_3 + 0x28),*(__uint64 *)(param_1 + 0xd0),uVar1,
                         FUN_1405ac110,pAVar14,uVar4,pAVar5,param_5);
      *(ulong *)(pAVar14 + 0x20) = uVar4;
      *(ulong *)(pAVar14 + 0x24) = uVar1;
      if (uVar4 == 0) {
        if (*(longlong *)(pAVar14 + 0x30) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(pAVar14,0x48);
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0xd0);
        lVar8 = lVar12;
        if ((lVar7 == -1) ||
           (*(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1, lVar8 = lVar7, lVar7 == -1))
        {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar12 = lVar8, pAVar13 = param_1, lVar7 != -1)) {
          *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
        }
        if ((lVar8 == -1) || (lVar8 != lVar7)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (lVar8 != -1)) && (lVar7 == lVar8)) {
          *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + -1;
        }
        pAVar14[0x41] = (AkExternalSourceInfo)0x0;
        fVar15 = (float)FUN_14059ca00(param_1);
        fVar16 = *(float *)(param_1 + 300);
        *(undefined8 *)pAVar14 = *(undefined8 *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          *(AkExternalSourceInfo **)(param_1 + 0xe0) = pAVar14;
        }
        else {
          *(AkExternalSourceInfo **)(*(longlong *)(param_1 + 0xe8) + 8) = pAVar14;
        }
        *(AkExternalSourceInfo **)(param_1 + 0xe8) = pAVar14;
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
        if ((fVar15 * fVar15 < fVar16) &&
           (fVar16 = (float)FUN_14059ca00(param_1), *(float *)(param_1 + 300) <= fVar16 * fVar16)) {
          param_1[0x139] = (AkExternalSourceInfo)0x1;
        }
        plVar6 = (longlong *)FWeakObjectPtr::Get(pAVar14 + 0x18);
        if (plVar6 != (longlong *)0x0) {
          lVar7 = UPawnAction_Sequence::StaticClass();
          lVar8 = FWeakObjectPtr::Get(pAVar14 + 0x18);
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
            local_50 = 0xffffffffffffffff;
            if (*(longlong *)(param_1 + 0xd0) != -1) {
              local_50 = *(undefined8 *)(param_1 + 0xd0);
              *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
            }
            lVar7 = *plVar6;
            local_58 = param_1;
            uVar9 = FUN_140590010(local_48,&local_58,*(undefined4 *)(pAVar14 + 0x20));
            (**(code **)(lVar7 + 0x278))(plVar6,uVar9);
          }
        }
        if (param_1[0x139] != (AkExternalSourceInfo)0x0) {
          FUN_1405b1860(param_1,0);
        }
        TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x70,pAVar14);
        if (((pAVar13 == (AkExternalSourceInfo *)0x0) || (lVar12 == -1)) ||
           (lVar12 != *(longlong *)(pAVar13 + 0xd0))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (pAVar13 != (AkExternalSourceInfo *)0x0) {
            *(int *)(pAVar13 + 0x2e4) = *(int *)(pAVar13 + 0x2e4) + 1;
          }
          for (lVar7 = *(longlong *)(pAVar13 + 0xe0);
              (lVar7 != 0 && (uVar4 != *(ulong *)(lVar7 + 0x20))); lVar7 = *(longlong *)(lVar7 + 8))
          {
          }
          FUN_1405a53f0(pAVar13);
        }
      }
      *param_2 = pAVar13;
      param_2[1] = 0xffffffffffffffff;
      if ((pAVar13 != (AkExternalSourceInfo *)0x0) && (*(longlong *)(pAVar13 + 0xd0) != -1)) {
        *(int *)(pAVar13 + 0x2e8) = *(int *)(pAVar13 + 0x2e8) + 1;
        param_2[1] = *(undefined8 *)(pAVar13 + 0xd0);
      }
      *(ulong *)(param_2 + 2) = uVar4;
      FUN_1405a53f0(param_1);
      if (((pAVar13 == (AkExternalSourceInfo *)0x0) || (lVar12 == -1)) ||
         (lVar12 != *(longlong *)(pAVar13 + 0xd0))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return param_2;
      }
      if (lVar12 == -1) {
        return param_2;
      }
      if (*(longlong *)(pAVar13 + 0xd0) != lVar12) {
        return param_2;
      }
      *(int *)(pAVar13 + 0x2e8) = *(int *)(pAVar13 + 0x2e8) + -1;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 1405a3150 FUN_1405a3150 body=351 status=ok
// SIG undefined FUN_1405a3150(void)

longlong * FUN_1405a3150(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  longlong local_20;
  longlong local_18;
  
  lVar5 = DAT_1461fcfe0;
  if (*(longlong *)(param_1 + 0x378) == 0) {
    local_38 = DAT_1461fcfe0;
    local_30 = -1;
    if ((DAT_1461fcfe0 != 0) && (plVar4 = (longlong *)(DAT_1461fcfe0 + 0xd0), *plVar4 != -1)) {
      *(int *)(DAT_1461fcfe0 + 0x2e8) = *(int *)(DAT_1461fcfe0 + 0x2e8) + 1;
      local_30 = *plVar4;
    }
    plVar4 = &local_38;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
    local_28 = DAT_1461fcff0;
    lVar6 = lVar5;
  }
  else {
    local_38 = 0;
    local_30 = 0;
    plVar4 = (longlong *)
             FUN_1405a2d20(*(longlong *)(param_1 + 0x378),&local_20,param_3,param_4,0,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    lVar5 = *plVar4;
    lVar6 = 0;
  }
  *param_2 = lVar5;
  param_2[1] = -1;
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xd0) != -1)) {
    *(int *)(lVar5 + 0x2e8) = *(int *)(lVar5 + 0x2e8) + 1;
    param_2[1] = *(longlong *)(lVar5 + 0xd0);
  }
  *(int *)(param_2 + 2) = (int)plVar4[2];
  if ((((bVar1) && (local_38 != 0)) && (local_30 != -1)) &&
     (local_30 == *(longlong *)(local_38 + 0xd0))) {
    *(int *)(local_38 + 0x2e8) = *(int *)(local_38 + 0x2e8) + -1;
  }
  if (bVar2) {
    if (((local_20 != 0) && (local_18 != -1)) && (local_18 == *(longlong *)(local_20 + 0xd0))) {
      *(int *)(local_20 + 0x2e8) = *(int *)(local_20 + 0x2e8) + -1;
      local_20 = 0;
      local_18 = -1;
    }
  }
  if ((bVar3) && (lVar6 != 0)) {
    FMemory::Free(lVar6);
  }
  return param_2;
}



// FUNCTION 1405a32b0 FUN_1405a32b0 body=206 status=ok
// SIG undefined FUN_1405a32b0(void)

void FUN_1405a32b0(longlong param_1,bool param_2,char param_3)

{
  longlong *plVar1;
  void *pvVar2;
  ulong local_res8 [2];
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4a) != '\0')) {
    if (DAT_1468536c5 == '\0') {
      *(bool *)(param_1 + 0x68) = param_2;
      return;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (*(int *)(param_1 + 100) == 1) {
      plVar1 = (longlong *)0x0;
      if (param_3 != '\0') {
        plVar1 = (longlong *)FUN_1415ab270(0);
      }
      pvVar2 = (void *)FUN_1405a13c0(param_1,0,1,plVar1);
      if (pvVar2 != (void *)0x0) {
        local_res8[0] = *(ulong *)(param_1 + 0x28);
        AK::SoundEngine::PrepareEvent(0,local_res8,1,FUN_1405a3380,pvVar2,param_2);
        *(bool *)(param_1 + 0x68) = param_2;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
          FUN_1415b5910(plVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405a3380 FUN_1405a3380 body=140 status=ok
// SIG undefined FUN_1405a3380(void)

void FUN_1405a3380(void)

{
  longlong *plVar1;
  LARGE_INTEGER in_stack_00000028;
  longlong local_18 [2];
  
  if ((in_stack_00000028.QuadPart != 0) &&
     (plVar1 = (longlong *)FUN_1405961a0(), plVar1 != (longlong *)0x0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    if (*plVar1 != 0) {
      in_stack_00000028 = *(LARGE_INTEGER *)(*plVar1 + 0x18);
      FName::ToString(&stack0x00000028,local_18);
    }
    QueryPerformanceCounter(&stack0x00000028);
    if ((longlong *)plVar1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[4] + 0x10))();
    }
    FMemory::operator_delete(plVar1,0x28);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405a3410 FUN_1405a3410 body=151 status=ok
// SIG undefined FUN_1405a3410(void)

bool FUN_1405a3410(longlong param_1)

{
  BOOL BVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4a) == '\0')) {
    return false;
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
  }
  puVar3 = DAT_146853908;
  if (DAT_146853908 == (undefined *)0x0) {
    puVar3 = &DAT_146853888;
  }
  puVar2 = puVar3 + (longlong)DAT_146853910 * 0x10;
  for (; puVar3 != puVar2; puVar3 = puVar3 + 0x10) {
    if (*(int *)(puVar3 + 8) == *(int *)(param_1 + 0x28)) goto LAB_1405a3486;
  }
  puVar3 = (undefined *)0x0;
LAB_1405a3486:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
  return puVar3 != (undefined *)0x0;
}



// FUNCTION 1405a34b0 FUN_1405a34b0 body=372 status=ok
// SIG undefined FUN_1405a34b0(void)

void FUN_1405a34b0(longlong param_1,longlong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  int *piVar6;
  int local_res8 [2];
  ulong local_res18 [2];
  int *local_res20;
  
  if (((((*(longlong *)(param_1 + 0x30) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4a) != '\0')) && (*(int *)(param_1 + 100) != 0)
       ) && ((*(char *)(param_1 + 0x68) == '\0' && (param_2 != 0)))) &&
     ((*(longlong *)(param_2 + 0x30) != 0 && (DAT_1468536c5 != '\0')))) {
    local_res8[0] =
         HashCombine(*(undefined4 *)(param_2 + 0x28),
                     *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x28));
    if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar4 = param_1 + 0xa8;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)local_res8[0]) *
                               4);
      if (iVar3 != -1) {
        do {
          piVar6 = (int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar3 * 0x10);
          if (*piVar6 == local_res8[0]) {
            if ((iVar3 != -1) && (piVar6 != (int *)0x0)) goto LAB_1405a35b0;
            break;
          }
          iVar3 = piVar6[2];
        } while (iVar3 != -1);
      }
    }
    local_res20 = local_res8;
    FUN_14058d450(param_1 + 0x70,local_res18,&local_res20,0);
    piVar6 = (int *)((longlong)(int)local_res18[0] * 0x10 + *(longlong *)(param_1 + 0x70));
LAB_1405a35b0:
    piVar6[1] = piVar6[1] + 1;
    if (piVar6[1] == 1) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      uVar2 = *(ulong *)(*(longlong *)(param_2 + 0x30) + 0x28);
      local_res18[0] = *(ulong *)(param_2 + 0x28);
      pvVar5 = (void *)FUN_1405a13c0(param_1,param_2,1,0);
      if (pvVar5 != (void *)0x0) {
        AK::SoundEngine::PrepareGameSyncs(0,0,uVar2,local_res18,1,FUN_1405a3630,pvVar5,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 1405a3630 FUN_1405a3630 body=125 status=ok
// SIG undefined FUN_1405a3630(void)

void FUN_1405a3630(void)

{
  longlong *plVar1;
  LARGE_INTEGER in_stack_00000028;
  longlong local_18 [2];
  
  if ((in_stack_00000028.QuadPart != 0) &&
     (plVar1 = (longlong *)FUN_1405961a0(), plVar1 != (longlong *)0x0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    if (*plVar1 != 0) {
      in_stack_00000028 = *(LARGE_INTEGER *)(*plVar1 + 0x18);
      FName::ToString(&stack0x00000028,local_18);
    }
    QueryPerformanceCounter(&stack0x00000028);
    FMemory::operator_delete(plVar1,0x28);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405a36f0 FUN_1405a36f0 body=945 status=ok
// SIG undefined FUN_1405a36f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405a36f0(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  
  FUN_140599cc0();
  piVar13 = (int *)*param_1;
  piVar1 = piVar13 + (longlong)*(int *)(param_1 + 1) * 0x12;
  if (piVar13 != piVar1) {
    do {
      lVar14 = *(longlong *)(piVar13 + 2);
      if (lVar14 != 0) {
        iVar5 = *piVar13;
        if (iVar5 < 0x7f01) {
          if (iVar5 == 0x7f00) {
            lVar11 = *(longlong *)(lVar14 + 0x10);
            if (lVar11 != 0) {
              *(int *)(lVar11 + 0x2e4) = *(int *)(lVar11 + 0x2e4) + 1;
              lVar14 = *(longlong *)(piVar13 + 2);
            }
            lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x2d8);
            if (lVar14 != 0) {
              FUN_14059e180(lVar14,piVar13[7],piVar13 + 8);
            }
          }
          else if (iVar5 == 1) {
            lVar11 = *(longlong *)(lVar14 + 0x10);
            if (lVar11 != 0) {
              *(int *)(lVar11 + 0x2e4) = *(int *)(lVar11 + 0x2e4) + 1;
              lVar14 = *(longlong *)(piVar13 + 2);
            }
            FUN_1405a04f0(*(undefined8 *)(lVar14 + 0x10),lVar14,0);
          }
          else {
            if (iVar5 != 4) {
              if (iVar5 == 8) {
                lVar7 = *(longlong *)(lVar14 + 0x30);
                lVar11 = lVar7 + (longlong)*(int *)(lVar14 + 0x38) * 0x18;
                if (lVar7 != lVar11) {
                  do {
                    if (*(int *)(lVar7 + 4) == piVar13[6]) goto LAB_1405a37c9;
                    lVar7 = lVar7 + 0x18;
                  } while (lVar7 != lVar11);
                }
                iVar5 = TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed(lVar14 + 0x30,1);
                lVar7 = *(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 0x18;
LAB_1405a37c9:
                *(float *)(lVar7 + 0x10) = (float)piVar13[8] * 0.001;
              }
              goto LAB_1405a3a63;
            }
            lVar11 = *(longlong *)(lVar14 + 0x10);
            if (lVar11 != 0) {
              *(int *)(lVar11 + 0x2e4) = *(int *)(lVar11 + 0x2e4) + 1;
              lVar14 = *(longlong *)(piVar13 + 2);
            }
            lVar14 = *(longlong *)(lVar14 + 0x10);
            uVar3 = *(undefined8 *)(piVar13 + 4);
            iVar5 = piVar13[9];
            iVar9 = piVar13[8];
            if (((*(int *)(lVar14 + 0x98) != 0) &&
                (*(longlong **)(lVar14 + 0x90) != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(**(longlong **)(lVar14 + 0x90) + 0x18))(), cVar4 != '\0')) {
              if (*(int *)(lVar14 + 0x98) == 0) {
                (**(code **)(_DAT_00000000 + 0x40))(0,iVar9,iVar5,uVar3);
              }
              else {
                (**(code **)(**(longlong **)(lVar14 + 0x90) + 0x40))
                          (*(longlong **)(lVar14 + 0x90),iVar9,iVar5,uVar3);
              }
            }
          }
LAB_1405a3a56:
          if (lVar11 != 0) {
            FUN_1405a53f0(lVar11);
          }
        }
        else if (iVar5 == 0x1000000) {
          if ((*(uint *)(lVar14 + 0x24) & 0x4000008) != 0) {
            iVar5 = *(int *)(lVar14 + 0x38);
            lVar11 = (longlong)iVar5;
            *(int *)(lVar14 + 0x38) = iVar5 + 1;
            if (*(int *)(lVar14 + 0x3c) < iVar5 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(lVar14 + 0x30,iVar5);
            }
            lVar14 = *(longlong *)(lVar14 + 0x30);
            *(undefined8 *)(lVar14 + lVar11 * 0x18) = 0;
            *(undefined8 *)(lVar14 + 8 + lVar11 * 0x18) = 0;
            *(undefined8 *)(lVar14 + 0x10 + lVar11 * 0x18) = 0;
            *(int *)(*(longlong *)(*(longlong *)(piVar13 + 2) + 0x30) + lVar11 * 0x18) = piVar13[6];
            *(int *)(*(longlong *)(*(longlong *)(piVar13 + 2) + 0x30) + 4 + lVar11 * 0x18) =
                 piVar13[7];
            lVar14 = *(longlong *)(piVar13 + 2);
          }
          if (*(char *)(lVar14 + 0x28) != '\0') {
            lVar11 = *(longlong *)(lVar14 + 0x10);
            if (lVar11 != 0) {
              *(int *)(lVar11 + 0x2e4) = *(int *)(lVar11 + 0x2e4) + 1;
              lVar14 = *(longlong *)(piVar13 + 2);
            }
            lVar14 = *(longlong *)(lVar14 + 0x10);
            if (lVar14 != 0) {
              *(int *)(lVar14 + 0x2e4) = *(int *)(lVar14 + 0x2e4) + 1;
            }
            FUN_1405ae6a0(lVar14);
            if (lVar14 != 0) {
              FUN_1405a53f0(lVar14);
            }
            *(undefined1 *)(*(longlong *)(piVar13 + 2) + 0x28) = 0;
            goto LAB_1405a3a56;
          }
        }
        else if (iVar5 == 0x2000000) {
          if (((*(uint *)(lVar14 + 0x24) & 0x4000008) != 0) &&
             (iVar5 = *(int *)(lVar14 + 0x38), uVar10 = 0, uVar12 = 0, 0 < iVar5)) {
            do {
              lVar11 = *(longlong *)(lVar14 + 0x30);
              iVar9 = (int)uVar10;
              if (*(int *)(lVar11 + uVar12) == piVar13[6]) {
                iVar6 = (iVar5 - iVar9) + -1;
                if (0 < iVar6) {
                  iVar6 = 1;
                }
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar11 + (longlong)iVar9 * 0x18),
                             (void *)(lVar11 + (longlong)(iVar5 - iVar6) * 0x18),
                             (longlong)iVar6 * 0x18);
                  iVar5 = *(int *)(lVar14 + 0x38);
                }
                iVar5 = iVar5 + -1;
                *(int *)(lVar14 + 0x38) = iVar5;
              }
              else {
                uVar10 = (ulonglong)(iVar9 + 1);
                uVar12 = uVar12 + 0x18;
              }
            } while ((int)uVar10 < iVar5);
          }
        }
        else if (iVar5 == 0x4000000) {
          piVar8 = *(int **)(lVar14 + 0x30);
          piVar2 = piVar8 + (longlong)*(int *)(lVar14 + 0x38) * 6;
          if (piVar8 != piVar2) {
            do {
              if (*piVar8 == piVar13[6]) {
                piVar8[2] = piVar13[7];
                piVar8[3] = piVar13[8];
                *(char *)(piVar8 + 5) = (char)piVar13[9];
                break;
              }
              piVar8 = piVar8 + 6;
            } while (piVar8 != piVar2);
          }
        }
LAB_1405a3a63:
        piVar13[2] = 0;
        piVar13[3] = 0;
      }
      piVar13 = piVar13 + 0x12;
    } while (piVar13 != piVar1);
  }
  return;
}



// FUNCTION 1405a3ab0 FUN_1405a3ab0 body=218 status=ok
// SIG undefined FUN_1405a3ab0(void)

void FUN_1405a3ab0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x418))(param_1,&DAT_14653218c);
    FUN_142395db0(param_1);
    FUN_142397000(param_1,0,0,0);
    if (param_2 != '\0') {
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      *(undefined1 *)((longlong)param_1 + 0x311) = 1;
      *(undefined4 *)(param_1 + 0x5e) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2f4)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x5d,0);
      }
      lVar1 = param_1[0x6f];
      *(undefined1 *)(param_1 + 0x5f) = 1;
      *(undefined1 *)(param_1 + 0x62) = 0;
      *(undefined4 *)((longlong)param_1 + 0x314) = 0;
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
        FUN_140596c00(lVar1);
        FUN_1405a53f0(lVar1);
      }
      if (param_1[0x6f] != 0) {
        FUN_1405a53f0();
        param_1[0x6f] = 0;
      }
    }
  }
  return;
}



// FUNCTION 1405a3b90 FUN_1405a3b90 body=184 status=ok
// SIG undefined FUN_1405a3b90(void)

void FUN_1405a3b90(longlong param_1,__uint64 param_2,longlong *param_3,float param_4,
                  __uint64 param_5)

{
  int iVar1;
  
  if (param_2 != 0xffffffffffffffff) {
    AK::SoundEngine::RegisterGameObj(param_2);
    if (param_5 == 0xffffffffffffffff) {
      param_5 = *(__uint64 *)(param_1 + 8);
    }
    AK::SoundEngine::SetListeners(param_2,&param_5,1);
    AK::SoundEngine::SetGameObjectOutputBusVolume(param_2,param_5,param_4);
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
    }
    *(__uint64 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = param_2;
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405a3c50 FUN_1405a3c50 body=103 status=ok
// SIG undefined FUN_1405a3c50(void)

void FUN_1405a3c50(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (DAT_1468536c5 != '\0')) {
    local_res10[0] = param_2;
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x1b8,local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  }
  return;
}



// FUNCTION 1405a3cc0 FUN_1405a3cc0 body=157 status=ok
// SIG undefined FUN_1405a3cc0(void)

void FUN_1405a3cc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    FUN_1405b9b40();
    lVar4 = UObjectBaseUtility::GetInterfaceAddress(param_2);
    if ((lVar4 != 0) && (lVar1 = *(longlong *)(param_1 + 0x210), lVar1 != 0)) {
      lVar5 = (longlong)*(int *)(lVar1 + 0x18);
      iVar3 = *(int *)(lVar1 + 0x18) + 1;
      *(int *)(lVar1 + 0x18) = iVar3;
      if (*(int *)(lVar1 + 0x1c) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar1 + 0x10);
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      *(undefined8 *)(lVar2 + lVar5 * 0x10) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar5 * 0x10) = 0;
      lVar1 = *(longlong *)(lVar1 + 0x10);
      *(longlong *)(lVar1 + lVar5 * 0x10) = param_2;
      *(longlong *)(lVar1 + 8 + lVar5 * 0x10) = lVar4;
    }
  }
  return;
}



// FUNCTION 1405a3d60 FUN_1405a3d60 body=443 status=ok
// SIG undefined FUN_1405a3d60(void)

void FUN_1405a3d60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  short *psVar7;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  undefined8 local_48;
  ulonglong local_40;
  short *local_38;
  int local_30;
  
  uVar6 = DAT_1461fd070;
  uVar2 = DAT_1461fd070 + 1;
  if ((DAT_1461fd070 & 3) == 0) {
    uVar6 = DAT_1461fd070 + 1;
    uVar2 = DAT_1461fd070 + 2;
  }
  DAT_1461fd070 = uVar2;
  local_res10 = param_2;
  FString::PrintfImpl(&local_38,L"~Acoustics_%d",param_2);
  psVar7 = &DAT_143f3eda8;
  if (local_30 != 0) {
    psVar7 = local_38;
  }
  local_40 = 0;
  local_48 = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar7[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_40 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar7,(longlong)(int)uVar4 * 2);
  }
  FUN_1405a3b90(*(longlong *)(param_1 + 8) + 0x1e8,uVar6,&local_48,0x3f800000,0xffffffffffffffff);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar5 = param_1 + 0xb8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)
                              ((int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 200) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar3 * 0x18;
        if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x18) == local_res10) {
          if ((iVar3 != -1) && (lVar5 != 0)) goto LAB_1405a3ef3;
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = &local_res10;
  FUN_14058d2a0(plVar1,local_res8,local_res18,0);
  lVar5 = *plVar1 + (longlong)local_res8[0] * 0x18;
LAB_1405a3ef3:
  *(ulonglong *)(lVar5 + 8) = uVar6;
  FUN_1405af2e0(param_1,1);
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405a3f20 FUN_1405a3f20 body=216 status=ok
// SIG undefined FUN_1405a3f20(void)

void FUN_1405a3f20(int param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int *local_18;
  undefined8 *local_10;
  
  if (param_1 != 0) {
    local_res10 = param_2;
    plVar3 = (longlong *)FUN_1405ac530();
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar6 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar6 = plVar3 + 7;
      }
      iVar1 = *(int *)((longlong)plVar6 + ((longlong)(int)plVar3[9] - 1U & (longlong)param_1) * 4);
      if (iVar1 != -1) {
        do {
          if (*(int *)(*plVar3 + (longlong)iVar1 * 0x18) == param_1) {
            if (iVar1 != -1) {
              return;
            }
            break;
          }
          iVar1 = *(int *)(*plVar3 + 0x10 + (longlong)iVar1 * 0x18);
        } while (iVar1 != -1);
      }
    }
    lVar4 = FUN_1405ac530();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x50);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_res8[0] = param_1;
    uVar5 = FUN_1405ac530();
    local_18 = local_res8;
    local_10 = &local_res10;
    FUN_14058d980(uVar5,local_res18,&local_18,0);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1405a4000 FUN_1405a4000 body=427 status=ok
// SIG undefined FUN_1405a4000(void)

void FUN_1405a4000(longlong param_1,longlong *param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int local_res10 [4];
  undefined8 **local_res20;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 == (longlong *)0x0) {
    lVar6 = *param_3;
  }
  else {
    FUN_1405ae0b0();
    if (0 < (int)param_3[1]) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 600);
      BVar4 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar4 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      FWeakObjectPtr::operator=(&local_res20,param_2);
      local_48 = (undefined8 ***)local_res20;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x280,local_res10,&local_48);
      if ((local_res10[0] == -1) ||
         (lVar6 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x280), lVar6 == 0)) {
        local_48 = &local_res20;
        FUN_14058d050(param_1 + 0x280,local_res10,&local_48,0);
        lVar6 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x280);
      }
      uVar5 = 0;
      puVar8 = (undefined4 *)*param_3;
      uVar7 = (longlong)(int)param_3[1] & 0x3fffffffffffffff;
      if (puVar8 + (int)param_3[1] < puVar8) {
        uVar7 = uVar5;
      }
      if (uVar7 != 0) {
        uStack_3c = 0;
        do {
          uVar2 = *puVar8;
          local_48 = (undefined8 ***)(**(code **)(*param_2 + 0x548))(param_2);
          iVar3 = *(int *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x10) = iVar3 + 1;
          uStack_40 = uVar2;
          if (*(int *)(lVar6 + 0x14) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 8,iVar3);
          }
          puVar8 = puVar8 + 1;
          uVar5 = uVar5 + 1;
          puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar3 * 0x10);
          *puVar1 = (undefined4)local_48;
          puVar1[1] = local_48._4_4_;
          puVar1[2] = uStack_40;
          puVar1[3] = uStack_3c;
        } while (uVar5 != uVar7);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    lVar6 = *param_3;
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405a41b0 FUN_1405a41b0 body=545 status=ok
// SIG undefined FUN_1405a41b0(void)

void FUN_1405a41b0(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int local_res18 [2];
  int *local_res20;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar3 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x3a0);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset(plVar1)
    ;
    uVar9 = 0;
    plVar10 = (longlong *)*param_2;
    uVar6 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_2[1] < plVar10) {
      uVar6 = uVar9;
    }
    if (uVar6 != 0) {
      do {
        lVar8 = *plVar10;
        if (lVar8 != 0) {
          if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
            iVar2 = *(int *)(lVar8 + 0x28);
            lVar5 = *(longlong *)(param_1 + 0x3e0);
            if (*(longlong *)(param_1 + 0x3e0) == 0) {
              lVar5 = param_1 + 0x3d8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 1000) - 1U & (longlong)iVar2) * 4
                            );
            if (iVar4 != -1) {
              do {
                piVar7 = (int *)((longlong)iVar4 * 0x10 + *plVar1);
                if (*piVar7 == iVar2) {
                  if ((iVar4 != -1) && (piVar7 != (int *)0x0)) goto LAB_1405a42e8;
                  break;
                }
                iVar4 = piVar7[2];
              } while (iVar4 != -1);
            }
          }
          local_res20 = (int *)(lVar8 + 0x28);
          FUN_14058d450(plVar1,local_res18,&local_res20,0);
          piVar7 = (int *)((longlong)local_res18[0] * 0x10 + *plVar1);
LAB_1405a42e8:
          piVar7[1] = *(int *)(lVar8 + 0x38);
        }
        plVar10 = plVar10 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
    }
    if (*(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4) < 1) {
      FUN_1405ae0b0(lVar3,param_1);
    }
    else {
      local_58 = (void *)0x0;
      local_50 = 0;
      TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
      GenerateKeyArray<TSizedDefaultAllocator<32>_>(plVar1,&local_58);
      _Src = local_58;
      lVar8 = (longlong)(int)local_50;
      local_48 = (void *)0x0;
      local_40 = (int)local_50;
      if ((int)local_50 == 0) {
        local_3c = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar8 << 2);
      }
      FUN_1405a4000(lVar3,param_1,&local_48);
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
    uVar6 = *param_2;
  }
  else {
    uVar6 = *param_2;
  }
  if (uVar6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405a43e0 Rehash body=631 status=ok
// SIG undefined Rehash(void)

void TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1405a451f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_1405a451f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x10 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0xc) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 1) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a4660 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1405a479f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1405a479f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[3] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[2] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a4870 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1405a49af;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1405a49af:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x70 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x1b] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x1a] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a4a80 Rehash body=522 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_1405a4bbf;
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
LAB_1405a4bbf:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[7] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[6] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a4c90 Rehash body=531 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_1405a4dcf;
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
LAB_1405a4dcf:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (~puVar12[1] ^ puVar12[2] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[7] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[6] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a4eb0 Rehash body=653 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piVar16;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1405a4fef;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1405a4fef:
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
        piVar16 = (int *)((longlong)iStack_1c * 0x148 + *param_1);
        uVar10 = piVar16[1];
        uVar12 = *piVar16 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar16[0x51] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar16[0x50] =
             *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a5140 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_1405a527f;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1405a527f:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405a5360 FUN_1405a5360 body=131 status=ok
// SIG undefined FUN_1405a5360(void)

void FUN_1405a5360(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  ulong local_res8 [8];
  
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4a) != '\0')) && (*(int *)(param_1 + 100) != 0))
     && ((DAT_1468536c5 != '\0' &&
         (iVar1 = *(int *)(param_1 + 100) + -1, *(int *)(param_1 + 100) = iVar1, iVar1 == 0)))) {
    pvVar2 = (void *)FUN_1405a13c0(param_1,0,0,0);
    if (pvVar2 != (void *)0x0) {
      local_res8[0] = *(ulong *)(param_1 + 0x28);
      AK::SoundEngine::PrepareEvent(1,local_res8,1,FUN_1405a3380,pvVar2,*(bool *)(param_1 + 0x68));
      *(undefined1 *)(param_1 + 0x68) = 0;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1 + 0x70);
    }
  }
  return;
}



// FUNCTION 1405a53f0 FUN_1405a53f0 body=278 status=ok
// SIG undefined FUN_1405a53f0(void)

void FUN_1405a53f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  piVar1 = (int *)(param_1 + 0x2e4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (((*(longlong *)(param_1 + 0xd0) == 0) || (lVar4 = *(longlong *)(param_1 + 0xc0), lVar4 == 0)
        ) || (*(char *)(param_1 + 0xd8) != '\0')) {
      if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
        FUN_1405a8cc0(DAT_1468536c8 + 8,param_1);
        return;
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        FUN_140596c00();
        return;
      }
      plVar5 = *(longlong **)(lVar4 + 0x68);
      iVar3 = *(int *)(lVar4 + 0x70);
      plVar2 = plVar5 + iVar3;
      for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_1) {
          return;
        }
      }
      *(int *)(lVar4 + 0x70) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x74) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x68);
      }
      local_18[1] = 0;
      *(longlong *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar3 * 8) = param_1;
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
      local_18[0] = param_1;
      FUN_14059e6d0(lVar4 + 0x58,local_18);
    }
  }
  return;
}



// FUNCTION 1405a5510 FUN_1405a5510 body=354 status=ok
// SIG undefined FUN_1405a5510(void)

void FUN_1405a5510(longlong param_1,longlong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  int *piVar6;
  int local_res8 [2];
  ulong local_res18 [2];
  int *local_res20;
  
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4a) != '\0')) && (param_2 != 0)) &&
     ((*(longlong *)(param_2 + 0x30) != 0 && (DAT_1468536c5 != '\0')))) {
    local_res8[0] =
         HashCombine(*(undefined4 *)(param_2 + 0x28),
                     *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x28));
    if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar4 = param_1 + 0xa8;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)local_res8[0]) *
                               4);
      if (iVar3 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x70));
          if (*piVar6 == local_res8[0]) {
            if ((iVar3 != -1) && (piVar6 != (int *)0x0)) goto LAB_1405a5600;
            break;
          }
          iVar3 = piVar6[2];
        } while (iVar3 != -1);
      }
    }
    local_res20 = local_res8;
    FUN_14058d450(param_1 + 0x70,local_res18,&local_res20,0);
    piVar6 = (int *)((longlong)(int)local_res18[0] * 0x10 + *(longlong *)(param_1 + 0x70));
LAB_1405a5600:
    piVar6 = piVar6 + 1;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      uVar2 = *(ulong *)(*(longlong *)(param_2 + 0x30) + 0x28);
      local_res18[0] = *(ulong *)(param_2 + 0x28);
      pvVar5 = (void *)FUN_1405a13c0(param_1,param_2,0,0);
      if (pvVar5 != (void *)0x0) {
        AK::SoundEngine::PrepareGameSyncs(1,0,uVar2,local_res18,1,FUN_1405a3630,pvVar5,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 1405a5680 Remove body=258 status=ok
// SIG undefined Remove(void)

int TArray<FName,FDefaultAllocator>::Remove(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  bVar8 = *(longlong *)*param_1 != *param_2;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar6) {
      plVar2 = (longlong *)(*param_1 + lVar3 * 8);
      do {
        if (bVar8 != (*plVar2 != *param_2)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < lVar6);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar4) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar7 * 8),(void *)(*param_1 + (longlong)iVar4 * 8)
                   ,(longlong)(iVar5 - iVar4) << 3);
      }
      iVar7 = iVar7 + (iVar5 - iVar4);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar4 = iVar5;
    if (lVar6 <= lVar3) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 1405a5790 Remove body=432 status=ok
// SIG undefined Remove(void)

undefined8
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
          (longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar12 = (int)(param_2 >> 4);
  uVar8 = (longlong)(int)param_1[9] - 1;
  uVar10 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar7 = -(uVar10 + iVar12) ^ uVar10 >> 0xd;
  uVar13 = (iVar12 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar13 = (uVar13 - uVar10) - uVar7 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 10;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar9 +
                   (((longlong)(int)((uVar7 - uVar10) - uVar13) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar8) * 4);
  if (iVar12 != -1) {
    lVar3 = *param_1;
    do {
      lVar11 = (longlong)iVar12;
      if (*(ulonglong *)(lVar3 + lVar11 * 0x10) == param_2) {
        uVar8 = (longlong)*(int *)(lVar3 + 0xc + lVar11 * 0x10) & uVar8;
        piVar6 = (int *)((longlong)plVar9 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar8 * 4);
        goto joined_r0x0001405a58a1;
      }
      iVar12 = *(int *)(lVar3 + 8 + lVar11 * 0x10);
    } while (iVar12 != -1);
  }
  return 0;
joined_r0x0001405a58a1:
  if (iVar2 == -1) {
LAB_1405a58c2:
    bVar4 = (byte)iVar12 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar12;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar11 * 0x10) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar11 * 0x10) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar12;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 +
                     (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar12) {
    *piVar6 = *(int *)(lVar3 + lVar11 * 0x10 + 8);
    goto LAB_1405a58c2;
  }
  piVar6 = (int *)(lVar3 + 8 + (longlong)iVar2 * 0x10);
  iVar2 = *piVar6;
  goto joined_r0x0001405a58a1;
}



// FUNCTION 1405a5940 Remove body=224 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>::
Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(int *)(lVar5 + lVar8 * 0x18) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x14 + lVar8 * 0x18) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001405a59d2;
      }
      iVar3 = *(int *)(lVar5 + 0x10 + lVar8 * 0x18);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001405a59d2:
  if (iVar4 == -1) {
LAB_1405a59f7:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar8 * 0x18 + 0x10);
    goto LAB_1405a59f7;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001405a59d2;
}



// FUNCTION 1405a5a20 FUN_1405a5a20 body=273 status=ok
// SIG undefined FUN_1405a5a20(void)

undefined8 FUN_1405a5a20(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x70;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x70;
        uVar7 = (longlong)*(int *)(lVar3 + 0x6c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001405a5ab4;
      }
      iVar5 = *(int *)(lVar3 + 0x68 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001405a5ab4:
  if (iVar1 == -1) {
LAB_1405a5ae0:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x60) = 0;
    if (*(longlong *)(lVar3 + 0x58) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 0x18);
    TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x68);
    goto LAB_1405a5ae0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x70 + 0x68 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001405a5ab4;
}



// FUNCTION 1405a5b40 Remove body=373 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar6 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar4 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + *param_1);
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar3 != '\0') break;
    iVar1 = puVar8[6];
    piVar7 = puVar8 + 6;
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x20;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x1c + lVar6));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x18 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar7;
    }
  }
  if (*(longlong *)((longlong)iVar1 * 0x20 + *param_1 + 8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 1405a5cc0 FUN_1405a5cc0 body=361 status=ok
// SIG undefined FUN_1405a5cc0(void)

undefined8 FUN_1405a5cc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar11 = (longlong)(int)param_1[9] - 1;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar10 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar11) * 4
                  );
  if (iVar9 != -1) {
    lVar4 = *param_1;
    do {
      lVar7 = (longlong)iVar9;
      if (*(longlong *)(lVar4 + lVar7 * 0x90) == param_2) {
        lVar1 = lVar4 + lVar7 * 0x90;
        uVar11 = (longlong)*(int *)(lVar1 + 0x8c) & uVar11;
        piVar8 = (int *)((longlong)plVar10 + uVar11 * 4);
        iVar3 = *(int *)((longlong)plVar10 + uVar11 * 4);
        goto joined_r0x0001405a5d72;
      }
      iVar9 = *(int *)(lVar4 + 0x88 + lVar7 * 0x90);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001405a5d72:
  if (iVar3 == -1) {
LAB_1405a5d9d:
    bVar5 = (byte)iVar9 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x90) = iVar9;
    }
    lVar4 = *param_1;
    uVar6 = 0xffffffff;
    *(undefined4 *)(lVar4 + lVar7 * 0x90) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar6 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar4 + 4 + lVar7 * 0x90) = uVar6;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar9;
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    puVar2 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
    return 1;
  }
  if (iVar3 == iVar9) {
    *piVar8 = *(int *)(lVar1 + 0x88);
    goto LAB_1405a5d9d;
  }
  piVar8 = (int *)((longlong)iVar3 * 0x90 + 0x88 + lVar4);
  iVar3 = *piVar8;
  goto joined_r0x0001405a5d72;
}



// FUNCTION 1405a5e30 FUN_1405a5e30 body=348 status=ok
// SIG undefined FUN_1405a5e30(void)

undefined8 FUN_1405a5e30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar11 = (longlong)(int)param_1[9] - 1;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar10 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar11) * 4
                  );
  if (iVar9 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar9;
      if (*(longlong *)(lVar5 + lVar8 * 0x28) == param_2) {
        lVar8 = lVar8 * 0x28;
        uVar11 = (longlong)*(int *)(lVar8 + 0x24 + lVar5) & uVar11;
        puVar2 = (undefined4 *)((longlong)plVar10 + uVar11 * 4);
        iVar4 = *(int *)((longlong)plVar10 + uVar11 * 4);
        goto joined_r0x0001405a5edf;
      }
      iVar9 = *(int *)(lVar5 + 0x20 + lVar8 * 0x28);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001405a5edf:
  if (iVar4 == -1) {
LAB_1405a5f04:
    bVar6 = (byte)iVar9 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar9;
    }
    lVar5 = *param_1;
    uVar7 = 0xffffffff;
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar7 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar5 + lVar8))[1] = uVar7;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar9;
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    puVar3 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
    return 1;
  }
  if (iVar4 == iVar9) {
    *puVar2 = *(undefined4 *)(lVar8 + lVar5 + 0x20);
    goto LAB_1405a5f04;
  }
  lVar1 = (longlong)iVar4 * 5 + 4;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001405a5edf;
}



// FUNCTION 1405a5f90 FUN_1405a5f90 body=406 status=ok
// SIG undefined FUN_1405a5f90(void)

undefined8 FUN_1405a5f90(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar9 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar10) * 4
                  );
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x60;
      if (*(longlong *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar8 * 0x60;
        uVar10 = (longlong)*(int *)(lVar6 + 0x5c + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x0001405a6045;
      }
      iVar8 = *(int *)(lVar6 + 0x58 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001405a6045:
  if (iVar2 == -1) {
LAB_1405a6070:
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x50 + lVar6) = 0;
    if (*(longlong *)(lVar3 + 0x48 + lVar6) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8 + lVar6);
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar3 + lVar6))[1] = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar8) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x58);
    goto LAB_1405a6070;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x60 + 0x58 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x0001405a6045;
}



// FUNCTION 1405a6130 Remove body=240 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar3 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar7) * 4)
  ;
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(longlong *)(lVar5 + lVar8 * 0x18) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x14 + lVar8 * 0x18) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001405a61d2;
      }
      iVar3 = *(int *)(lVar5 + 0x10 + lVar8 * 0x18);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001405a61d2:
  if (iVar4 == -1) {
LAB_1405a61f7:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar8 * 0x18 + 0x10);
    goto LAB_1405a61f7;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001405a61d2;
}



// FUNCTION 1405a6220 FUN_1405a6220 body=180 status=ok
// SIG undefined FUN_1405a6220(void)

void FUN_1405a6220(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)((longlong)param_1 + 0x30) != '\0') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x4c) < 1) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x4c) + -1;
  *(int *)((longlong)param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (DAT_1468b616c != '\0') {
    return;
  }
  if (DAT_1468536c6 != '\0') {
    return;
  }
  if (DAT_1468536c5 == '\0') {
    return;
  }
  if (DAT_1468536c8 == 0) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x50);
  if (iVar1 == 1) {
    AK::SoundEngine::CancelBankCallbackCookie(param_1);
    if (*(int *)((longlong)param_1 + 0x50) == 1) {
      LOCK();
      bVar2 = *(int *)((longlong)param_1 + 0x54) == 0;
      if (bVar2) {
        *(int *)((longlong)param_1 + 0x54) = 0;
      }
      UNLOCK();
      if (bVar2) {
        *(undefined4 *)((longlong)param_1 + 0x50) = 2;
      }
      else {
        LOCK();
        iVar1 = *(int *)((longlong)param_1 + 0x54);
        if (iVar1 == 0) {
          *(int *)((longlong)param_1 + 0x54) = 0;
          iVar1 = 0;
        }
        UNLOCK();
        if (iVar1 == -1) {
          *(undefined4 *)((longlong)param_1 + 0x50) = 0;
        }
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0x50);
    if (iVar1 != 2) goto LAB_1405a62c6;
  }
  if (iVar1 == 0) {
    return;
  }
  AK::SoundEngine::UnloadBank
            (*(ulong *)((longlong)param_1 + 0x28),(void *)0x0,
             (_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *)0x0,(void *)0x0);
LAB_1405a62c6:
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1405a62e0 FUN_1405a62e0 body=140 status=ok
// SIG undefined FUN_1405a62e0(void)

void FUN_1405a62e0(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x40 + lVar3),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + lVar3),(longlong)iVar2 << 6);
      iVar1 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x50) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1405a6370 RemoveAtUninitialized body=177 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar11 = uVar9 << 4;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar8;
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
      lVar11 = lVar11 + 0x10;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405a6430 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x70;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x70;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405a64e0 FUN_1405a64e0 body=159 status=ok
// SIG undefined FUN_1405a64e0(void)

void FUN_1405a64e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_res8;
  
  if ((DAT_1468536c6 != '\0') || (lVar1 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    lVar1 = 0;
  }
  lVar2 = lVar1 + 0x218;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if ((((lVar2 != 0) && (*param_1 != 0)) && (param_1[1] != -1)) &&
     (param_1[1] == *(longlong *)(*param_1 + 0xd0))) {
    local_res8 = param_1;
    FUN_14058e9c0(lVar2,&local_res8);
  }
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 1405a6580 FUN_1405a6580 body=655 status=ok
// SIG undefined FUN_1405a6580(void)

void FUN_1405a6580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
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
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  uVar2 = *(uint *)(param_1 + 0xa8);
  local_68 = (uint *)(param_1 + 0x90);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  uStack_94 = 1;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar13 = local_68;
    }
    uVar3 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1405a665c;
      uVar3 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1405a665c:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xa8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_50 = plVar1;
  puStack_40 = local_68;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar13 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar13 = local_68;
    }
    uVar7 = puVar13[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1405a6722;
      uVar7 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1405a6722:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == (uint *)(param_1 + 0x90))) break;
    iVar11 = 0;
    lVar9 = (longlong)(int)uStack_5c * 0x20 + *plVar1;
    iVar6 = *(int *)(lVar9 + 0x10);
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(lVar9 + 8);
        if (*(longlong *)(lVar4 + lVar10) == param_2) {
          iVar8 = (iVar6 - iVar11) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + (longlong)iVar11 * 0x18),
                       (void *)(lVar4 + (longlong)(iVar6 - iVar8) * 0x18),(longlong)iVar8 * 0x18);
            iVar6 = *(int *)(lVar9 + 0x10);
          }
          *(int *)(lVar9 + 0x10) = iVar6 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(lVar9 + 8);
          iVar6 = *(int *)(lVar9 + 0x10);
        }
        else {
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 0x18;
        }
      } while (iVar11 < iVar6);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1405a6810 RemoveKeyframe body=143 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackAkAudioEvent::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x98))) {
    plVar1 = (longlong *)(param_1 + 0x90);
    if (*(longlong *)((longlong)param_2 * 0x20 + 0x10 + *plVar1) != 0) {
      FMemory::Free();
    }
    iVar3 = *(int *)(param_1 + 0x98);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + 1) * 0x20 + *plVar1),(longlong)iVar2 << 5);
      iVar3 = *(int *)(param_1 + 0x98);
    }
    *(int *)(param_1 + 0x98) = iVar3 + -1;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 1405a68a0 InvalidateRecursiveAsset body=83 status=ok
// SIG undefined InvalidateRecursiveAsset(void)

void UAnimCompositeBase::InvalidateRecursiveAsset(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x135,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSection::RemoveSection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x135,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSection::RemoveSection");
  return;
}



// FUNCTION 1405a6900 FUN_1405a6900 body=235 status=ok
// SIG undefined FUN_1405a6900(void)

void FUN_1405a6900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x60) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x68) = iVar6;
  }
  return;
}



// FUNCTION 1405a69f0 RemoveSingleSwap body=194 status=ok
// SIG undefined RemoveSingleSwap(void)

undefined8
TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
          (longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = (longlong *)*param_1;
  iVar5 = (int)param_1[1];
  if (plVar1 != plVar1 + iVar5) {
    plVar3 = plVar1;
    do {
      if (*plVar3 == *param_2) {
        iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
        if (iVar2 == -1) {
          return 0;
        }
        iVar4 = (iVar5 - iVar2) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        if (param_3 != '\0') {
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
        }
        return 1;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + iVar5);
  }
  return 0;
}



// FUNCTION 1405a6ac0 FUN_1405a6ac0 body=208 status=ok
// SIG undefined FUN_1405a6ac0(void)

void FUN_1405a6ac0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *_Src;
  longlong *_Dst;
  
  if (((param_1 != 0) && (0 < (int)param_2[7])) &&
     (plVar3 = (longlong *)FUN_1405a1200(), plVar3 != (longlong *)0x0)) {
    *plVar3 = param_1;
    plVar1 = plVar3 + 1;
    *(undefined4 *)(plVar3 + 0x41) = 0;
    if (plVar1 != param_2) {
      iVar2 = (int)param_2[7];
      _Src = (longlong *)param_2[6];
      *(int *)(plVar3 + 8) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)plVar3 + 0x44) == 0)) {
        *(undefined4 *)((longlong)plVar3 + 0x44) = 0;
      }
      else {
        TArray<FMovieSceneObjectBindingID,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
                  (plVar1,iVar2);
        if (_Src == (longlong *)0x0) {
          _Src = param_2;
        }
        _Dst = (longlong *)plVar3[7];
        if ((longlong *)plVar3[7] == (longlong *)0x0) {
          _Dst = plVar1;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 0x18);
      }
    }
    FUN_1405960b0(plVar3);
  }
  return;
}



// FUNCTION 1405a6ba0 FUN_1405a6ba0 body=2206 status=ok
// SIG undefined FUN_1405a6ba0(void)

void FUN_1405a6ba0(longlong param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  longlong *plVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    return;
  }
  if (DAT_1468537d8 == 0) {
    return;
  }
  if (DAT_1468537d0 == (longlong *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*DAT_1468537d0 + 0x18))();
  if (cVar6 == '\0') {
    return;
  }
  fVar24 = (float)FUN_14059ca00(param_1);
  fVar24 = fVar24 * fVar24;
  if (fVar24 < *(float *)(param_1 + 300) || fVar24 == *(float *)(param_1 + 300)) {
    return;
  }
  uVar22 = 0;
  lVar12 = param_1 + 0x2c0;
  if (*(char *)(param_1 + 0x62) == '\x04') {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    if ((*(int *)(param_1 + 0x2d4) < 0) && (*(int *)(param_1 + 0x2d4) != 0)) {
      TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(lVar12,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    if (*(int *)(param_1 + 0x2d4) < *(int *)(param_1 + 0x50)) {
      TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(lVar12);
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      uVar14 = uVar22;
      uVar21 = uVar22;
      do {
        lVar11 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar11 = param_1;
        }
        bVar5 = false;
        pfVar2 = (float *)(lVar11 + 0x10 + uVar21);
        plVar13 = *(longlong **)(param_1 + 0x110);
        if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
          plVar13 = (longlong *)(param_1 + 0x100);
        }
        uVar20 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
        if (plVar13 + *(int *)(param_1 + 0x118) < plVar13) {
          uVar20 = uVar22;
        }
        uVar18 = uVar22;
        if (uVar20 != 0) {
          do {
            if ((bVar5) ||
               (uVar10 = *(undefined8 *)(*plVar13 + 0x2e0), fVar30 = *pfVar2 - (float)uVar10,
               fVar28 = pfVar2[1] - (float)((ulonglong)uVar10 >> 0x20),
               fVar31 = pfVar2[2] - *(float *)(*plVar13 + 0x2e8),
               fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31 < fVar24)) {
              bVar5 = true;
            }
            plVar13 = plVar13 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar20);
          if (bVar5) {
            iVar15 = *(int *)(param_1 + 0x2d0);
            iVar7 = iVar15 + 1;
            *(int *)(param_1 + 0x2d0) = iVar7;
            if (*(int *)(param_1 + 0x2d4) < iVar7) {
              TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow(lVar12);
            }
            lVar11 = *(longlong *)(param_1 + 0x2c8);
            if (*(longlong *)(param_1 + 0x2c8) == 0) {
              lVar11 = lVar12;
            }
            *(int *)(lVar11 + (longlong)iVar15 * 4) = (int)uVar14;
          }
        }
        uVar19 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar19;
        uVar21 = uVar21 + 0x40;
      } while ((int)uVar19 < *(int *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x2d0) == 0) {
      return;
    }
  }
  fVar31 = 0.5;
  fVar24 = (float)FUN_14059ca00(param_1);
  if (0.0 < fVar24) {
    fVar24 = (float)FUN_14059ca00(param_1);
    if (fVar24 <= 1000.0) {
      fVar24 = 1000.0;
    }
    fVar31 = SQRT(*(float *)(param_1 + 300)) * (1.0 / fVar24);
    if (0.0 <= fVar31) {
      if (1.0 <= fVar31) {
        fVar31 = 1.0;
      }
    }
    else {
      fVar31 = 0.0;
    }
  }
  fVar24 = *(float *)(*(longlong *)(param_1 + 0xc0) + 0x1d4);
  if (0.5 <= fVar24) {
    fVar24 = 0.5;
  }
  fVar30 = 0.0166;
  if ((0.0166 <= fVar24) && (fVar30 = fVar24, 0.1 <= fVar24)) {
    fVar30 = 0.1;
  }
  *(float *)(param_1 + 0x13c) = (fVar30 * 8.0 - (fVar30 + fVar30)) * fVar31 + fVar30 + fVar30;
  puVar9 = (undefined8 *)FUN_1405a1200();
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)(puVar9 + 0x41) = 1;
  puVar1 = puVar9 + 1;
  *(undefined1 *)(param_1 + 0x2a0) = 1;
  *(bool *)(puVar9 + 0x12) = (*(char *)(param_1 + 0x62) - 2U & 0xfd) == 0;
  iVar15 = *(int *)(param_1 + 0x118);
  *(undefined4 *)(puVar9 + 8) = 0;
  if (*(int *)((longlong)puVar9 + 0x44) < iVar15) {
    FUN_1405a8780(puVar1);
  }
  plVar13 = *(longlong **)(param_1 + 0x110);
  if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
    plVar13 = (longlong *)(param_1 + 0x100);
  }
  uVar14 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(param_1 + 0x118) < plVar13) {
    uVar14 = uVar22;
  }
  uVar21 = uVar22;
  if (uVar14 != 0) {
    do {
      plVar3 = (longlong *)*plVar13;
      uVar10 = (**(code **)(*plVar3 + 0x548))(plVar3);
      lVar12 = plVar3[0x5c];
      lVar11 = plVar3[0x5d];
      iVar15 = *(int *)(puVar9 + 8);
      *(int *)(puVar9 + 8) = iVar15 + 1;
      if (*(int *)((longlong)puVar9 + 0x44) < iVar15 + 1) {
        TArray<FCompactPose,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(puVar1,iVar15);
      }
      local_98 = (undefined4)uVar10;
      uStack_94 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_90 = (undefined4)lVar12;
      uStack_8c = (undefined4)((ulonglong)lVar12 >> 0x20);
      puVar16 = (undefined8 *)puVar9[7];
      if ((undefined8 *)puVar9[7] == (undefined8 *)0x0) {
        puVar16 = puVar1;
      }
      plVar13 = plVar13 + 1;
      uVar21 = uVar21 + 1;
      puVar17 = puVar16 + (longlong)iVar15 * 3;
      *(undefined4 *)puVar17 = local_98;
      *(undefined4 *)((longlong)puVar17 + 4) = uStack_94;
      *(undefined4 *)(puVar17 + 1) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_8c;
      puVar16[(longlong)iVar15 * 3 + 2] = CONCAT44(uStack_84,(int)lVar11);
    } while (uVar21 != uVar14);
  }
  if (*(char *)(puVar9 + 0x12) == '\0') {
    if (*(int *)(param_1 + 0x2b8) == 0) {
      iVar15 = *(int *)(param_1 + 0x50);
      lVar12 = param_1 + 0x2a8;
      iVar7 = *(int *)(param_1 + 0x2b8);
      iVar8 = iVar15 + iVar7;
      *(int *)(param_1 + 0x2b8) = iVar8;
      if (*(int *)(param_1 + 700) < iVar8) {
        TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow(lVar12);
      }
      lVar11 = *(longlong *)(param_1 + 0x2b0);
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        lVar11 = lVar12;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 + (longlong)iVar7 * 4),0,(longlong)iVar15 << 2);
      if (((*(int *)(param_1 + 0x50) != 0) && (*(char *)(param_1 + 0x62) != '\x03')) &&
         (0 < *(int *)(param_1 + 0x50))) {
        uVar14 = uVar22;
        uVar21 = uVar22;
        uVar20 = uVar22;
        do {
          lVar11 = *(longlong *)(param_1 + 0x40);
          if (*(longlong *)(param_1 + 0x40) == 0) {
            lVar11 = param_1;
          }
          pfVar2 = (float *)(lVar11 + uVar20);
          fVar24 = *pfVar2;
          fVar31 = pfVar2[1];
          fVar30 = pfVar2[2];
          fVar28 = pfVar2[3];
          fVar25 = fVar31 * 0.0 - fVar30 * 0.0;
          fVar26 = fVar30 * 1.0 - fVar24 * 0.0;
          fVar27 = fVar24 * 0.0 - fVar31 * 1.0;
          fVar25 = fVar25 + fVar25;
          fVar26 = fVar26 + fVar26;
          fVar27 = fVar27 + fVar27;
          fVar29 = (fVar27 * fVar31 - fVar26 * fVar30) + fVar28 * fVar25 + 1.0;
          fVar30 = (fVar25 * fVar30 - fVar27 * fVar24) + fVar28 * fVar26 + 0.0;
          fVar24 = (fVar26 * fVar24 - fVar25 * fVar31) + fVar28 * fVar27 + 0.0;
          if (fVar29 <= 0.0) {
            iVar15 = 0;
            if (fVar29 < 0.0) {
              iVar15 = 8;
            }
          }
          else {
            iVar15 = 1;
          }
          if (fVar30 <= 0.0) {
            iVar7 = 0;
            if (fVar30 < 0.0) {
              iVar7 = 0x10;
            }
          }
          else {
            iVar7 = 2;
          }
          if (fVar24 <= 0.0) {
            iVar8 = 0;
            if (fVar24 < 0.0) {
              iVar8 = 0x20;
            }
          }
          else {
            iVar8 = 4;
          }
          lVar11 = *(longlong *)(param_1 + 0x2b0);
          if (*(longlong *)(param_1 + 0x2b0) == 0) {
            lVar11 = lVar12;
          }
          uVar19 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar19;
          uVar20 = uVar20 + 0x40;
          *(int *)(lVar11 + uVar21) = iVar15 + iVar8 + iVar7;
          uVar21 = uVar21 + 4;
        } while ((int)uVar19 < *(int *)(param_1 + 0x50));
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if ((*(int *)(param_1 + 700) < 0) && (*(int *)(param_1 + 700) != 0)) {
      TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(param_1 + 0x2a8,0);
    }
  }
  puVar1 = puVar9 + 0xb;
  *(undefined4 *)(puVar9 + 0xe) = 0;
  if ((*(int *)((longlong)puVar9 + 0x74) < 0) && (*(int *)((longlong)puVar9 + 0x74) != 0)) {
    TArray<PropertyTemplate::TCachedValue<unsigned_char>,TInlineAllocator<1,FDefaultAllocator>_>::
    ResizeTo(puVar1,0);
  }
  puVar16 = puVar9 + 0xf;
  *(undefined4 *)(puVar9 + 0x11) = 0;
  if ((*(int *)((longlong)puVar9 + 0x8c) < 0) && (*(int *)((longlong)puVar9 + 0x8c) != 0)) {
    TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(puVar16,0);
  }
  if (*(char *)(param_1 + 0x62) == '\x04') {
    iVar15 = *(int *)(puVar9 + 0xe);
    *(int *)(puVar9 + 0xe) = iVar15 + 1;
    if (*(int *)((longlong)puVar9 + 0x74) < iVar15 + 1) {
      FUN_1405a81a0(puVar1,iVar15);
    }
    puVar16 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar16 = puVar1;
    }
    *(undefined8 *)((longlong)puVar16 + (longlong)iVar15 * 0xc) = *(undefined8 *)(param_1 + 0x120);
    *(undefined4 *)((longlong)puVar16 + (longlong)iVar15 * 0xc + 8) =
         *(undefined4 *)(param_1 + 0x128);
  }
  else {
    piVar23 = *(int **)(param_1 + 0x2c8);
    if (*(int **)(param_1 + 0x2c8) == (int *)0x0) {
      piVar23 = (int *)(param_1 + 0x2c0);
    }
    uVar14 = (longlong)*(int *)(param_1 + 0x2d0) & 0x3fffffffffffffff;
    if (piVar23 + *(int *)(param_1 + 0x2d0) < piVar23) {
      uVar14 = uVar22;
    }
    if (uVar14 != 0) {
      do {
        iVar15 = *piVar23;
        iVar7 = *(int *)(puVar9 + 0xe);
        lVar12 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar12 = param_1;
        }
        puVar17 = (undefined8 *)(lVar12 + 0x10 + (longlong)iVar15 * 0x40);
        uVar10 = *puVar17;
        uVar4 = *(undefined4 *)(puVar17 + 1);
        *(int *)(puVar9 + 0xe) = iVar7 + 1;
        if (*(int *)((longlong)puVar9 + 0x74) < iVar7 + 1) {
          FUN_1405a81a0(puVar1,iVar7);
        }
        puVar17 = (undefined8 *)puVar9[0xd];
        if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
          puVar17 = puVar1;
        }
        *(undefined8 *)((longlong)puVar17 + (longlong)iVar7 * 0xc) = uVar10;
        *(undefined4 *)((longlong)puVar17 + (longlong)iVar7 * 0xc + 8) = uVar4;
        if (*(char *)(puVar9 + 0x12) == '\0') {
          iVar7 = *(int *)(puVar9 + 0x11);
          lVar12 = *(longlong *)(param_1 + 0x2b0);
          *(int *)(puVar9 + 0x11) = iVar7 + 1;
          if (*(int *)((longlong)puVar9 + 0x8c) < iVar7 + 1) {
            TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow(puVar16,iVar7);
          }
          if (lVar12 == 0) {
            lVar12 = param_1 + 0x2a8;
          }
          puVar17 = (undefined8 *)puVar9[0x10];
          if ((undefined8 *)puVar9[0x10] == (undefined8 *)0x0) {
            puVar17 = puVar16;
          }
          *(undefined4 *)((longlong)puVar17 + (longlong)iVar7 * 4) =
               *(undefined4 *)(lVar12 + (longlong)iVar15 * 4);
        }
        piVar23 = piVar23 + 1;
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar14);
    }
  }
  *puVar9 = *(undefined8 *)(param_1 + 200);
  lVar12 = -1;
  if (*(longlong *)(param_1 + 0xd0) != -1) {
    *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
    lVar12 = *(longlong *)(param_1 + 0xd0);
  }
  lVar11 = puVar9[9];
  if ((lVar11 != param_1) || (puVar9[10] != lVar12)) {
    if ((lVar11 != 0) && ((puVar9[10] != -1 && (puVar9[10] == *(longlong *)(lVar11 + 0xd0))))) {
      *(int *)(lVar11 + 0x2e8) = *(int *)(lVar11 + 0x2e8) + -1;
      puVar9[9] = 0;
      puVar9[10] = 0xffffffffffffffff;
    }
    if (lVar12 == -1) goto LAB_1405a73ea;
    if (lVar12 == *(longlong *)(param_1 + 0xd0)) {
      puVar9[9] = param_1;
      puVar9[10] = lVar12;
      if (*(longlong *)(param_1 + 0xd0) != -1) {
        *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
      }
    }
  }
  if ((lVar12 != -1) && (lVar12 == *(longlong *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + -1;
  }
LAB_1405a73ea:
  FUN_1405960b0(puVar9);
  return;
}



// FUNCTION 1405a7440 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
               (longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1405a74f0 FUN_1405a74f0 body=104 status=ok
// SIG undefined FUN_1405a74f0(void)

void FUN_1405a74f0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x144)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x138,0);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001405a7551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  return;
}



// FUNCTION 1405a7560 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<2,FDefaultAllocator>::
     ForElementType<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 1405a7600 FUN_1405a7600 body=161 status=ok
// SIG undefined FUN_1405a7600(void)

void FUN_1405a7600(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 1405a76b0 FUN_1405a76b0 body=163 status=ok
// SIG undefined FUN_1405a76b0(void)

void FUN_1405a76b0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x140);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x28);
    pvVar1 = *(void **)((longlong)param_1 + 0x140);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x140) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x28);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar2;
  return;
}



// FUNCTION 1405a7760 FUN_1405a7760 body=151 status=ok
// SIG undefined FUN_1405a7760(void)

void FUN_1405a7760(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x30) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
  return;
}



// FUNCTION 1405a7800 ResizeAllocation body=151 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<1,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<unsigned_char,FName>_>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xc);
    pvVar1 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xc);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 1405a78a0 FUN_1405a78a0 body=149 status=ok
// SIG undefined FUN_1405a78a0(void)

void FUN_1405a78a0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 6);
    pvVar1 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 6);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 1405a7940 FUN_1405a7940 body=139 status=ok
// SIG undefined FUN_1405a7940(void)

void FUN_1405a7940(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      uVar2 = (uint)(uVar3 >> 3);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_1405a79b8;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_1405a79b8;
      lVar5 = (longlong)(int)uVar2 << 3;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
LAB_1405a79b8:
  *(uint *)(param_1 + 0x4c) = uVar2;
  return;
}



// FUNCTION 1405a79d0 ResizeForCopy body=129 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FMovieSceneObjectBindingID,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar2 = 2;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    FUN_1405a7760(param_1,0,iVar2,0x18);
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  return;
}



// FUNCTION 1405a7a60 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 5,0);
    iVar1 = (int)(uVar2 >> 5);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 5,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 1405a7ad0 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
    iVar2 = 1;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
            (param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 1405a7b60 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 3) {
    iVar2 = 2;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  TInlineAllocator<2,FDefaultAllocator>::
  ForElementType<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*>::ResizeAllocation
            (param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 1405a7bf0 FUN_1405a7bf0 body=138 status=ok
// SIG undefined FUN_1405a7bf0(void)

void FUN_1405a7bf0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x148,0);
  iVar4 = (int)(uVar3 / 0x148);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x148,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1405a7c80 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x70,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 6);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x70,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1405a7d20 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  FUN_1405a7600(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1405a7db0 FUN_1405a7db0 body=157 status=ok
// SIG undefined FUN_1405a7db0(void)

void FUN_1405a7db0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (uVar1 < 9) {
    iVar4 = 8;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x14c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x28,0);
    iVar4 = (int)(uVar3 / 0x28);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14c) = iVar4;
  FUN_1405a76b0(param_1,param_2,iVar4,0x28);
  return;
}



// FUNCTION 1405a7e50 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x88);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x8c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x80);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
  return;
}



// FUNCTION 1405a7f60 ResizeGrow body=148 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCompactPose,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x3c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar4;
  FUN_1405a7760(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 1405a8000 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xb0,0);
  iVar4 = (int)(uVar3 / 0xb0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xb0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1405a8090 ResizeGrow body=258 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x68);
  uVar5 = 4;
  if (4 < uVar4) {
    if ((*(int *)((longlong)param_1 + 0x6c) != 0) || (4 < uVar4)) {
      uVar5 = (longlong)(int)uVar4 + 0x10 + ((ulonglong)((longlong)(int)uVar4 * 3) >> 3);
    }
    uVar1 = FMemory::QuantizeSize(uVar5 * 0x18,0);
    uVar5 = uVar1 / 0x18 & 0xffffffff;
    if ((int)(uVar1 / 0x18) < (int)uVar4) {
      uVar5 = 0x7fffffff;
    }
  }
  uVar4 = (uint)uVar5;
  *(uint *)((longlong)param_1 + 0x6c) = uVar4;
  pvVar2 = *(void **)((longlong)param_1 + 0x60);
  if (uVar4 < 5) {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar2,(longlong)param_2 * 0x18);
    pvVar2 = *(void **)((longlong)param_1 + 0x60);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
      if (uVar4 != 0) {
        pvVar2 = (void *)FMemory::Realloc(0,(longlong)(int)uVar4 * 0x18,0);
        *(void **)((longlong)param_1 + 0x60) = pvVar2;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar2,param_1,(longlong)param_2 * 0x18);
      return;
    }
    lVar6 = (longlong)(int)uVar4 * 0x18;
  }
  uVar3 = FMemory::Realloc(pvVar2,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar3;
  return;
}



// FUNCTION 1405a81a0 FUN_1405a81a0 body=148 status=ok
// SIG undefined FUN_1405a81a0(void)

void FUN_1405a81a0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 2) {
    iVar4 = 1;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0xc,0);
    iVar4 = (int)(uVar3 / 0xc);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar4;
  TInlineAllocator<1,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<unsigned_char,FName>_>::
  ResizeAllocation(param_1,param_2,iVar4,0xc);
  return;
}



// FUNCTION 1405a8240 FUN_1405a8240 body=151 status=ok
// SIG undefined FUN_1405a8240(void)

void FUN_1405a8240(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x2f0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x5c9882b931057263) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 9);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x2f0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1405a82e0 FUN_1405a82e0 body=128 status=ok
// SIG undefined FUN_1405a82e0(void)

void FUN_1405a82e0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 < 2) {
    iVar2 = 1;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x54) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 6,0);
    iVar2 = (int)(uVar3 >> 6);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x54) = iVar2;
  FUN_1405a78a0(param_1,param_2,iVar2,0x40);
  return;
}



// FUNCTION 1405a8360 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x2c,0);
  iVar4 = (int)(uVar3 / 0x2c);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2c,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1405a83f0 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
     ::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (uVar2 < 9) {
    uVar2 = 8;
    goto LAB_1405a8462;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 4)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 4,0);
        uVar3 = *(uint *)(param_1 + 0x8c);
        uVar2 = (uint)(uVar1 >> 4);
      }
      goto LAB_1405a8462;
    }
    if (uVar2 == 0) goto LAB_1405a8462;
  }
  uVar2 = uVar3;
LAB_1405a8462:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x8c) = uVar2;
    FUN_1405a7600(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 1405a8490 ResizeShrink body=144 status=ok
// SIG undefined ResizeShrink(void)

void TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<1,FDefaultAllocator>_>
     ::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar2 < 2) {
    uVar2 = 1;
    goto LAB_1405a84f9;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 6)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 6,0);
        uVar3 = *(uint *)(param_1 + 0x54);
        uVar2 = (uint)(uVar1 >> 6);
      }
      goto LAB_1405a84f9;
    }
    if (uVar2 == 0) goto LAB_1405a84f9;
  }
  uVar2 = uVar3;
LAB_1405a84f9:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x54) = uVar2;
    FUN_1405a78a0(param_1,*(undefined4 *)(param_1 + 0x50),uVar2,0x40);
    return;
  }
  return;
}



// FUNCTION 1405a8520 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x10),iVar1,4);
  }
  return;
}



// FUNCTION 1405a8590 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
     ::ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar1;
    TInlineAllocator<2,FDefaultAllocator>::
    ForElementType<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x18),iVar1,8);
  }
  return;
}



// FUNCTION 1405a8600 ResizeTo body=124 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x70,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 6);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x70,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1405a8680 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x90,0);
    iVar3 = (int)(uVar1 / 0x90);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x90,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1405a8700 FUN_1405a8700 body=127 status=ok
// SIG undefined FUN_1405a8700(void)

void FUN_1405a8700(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x14c)) {
    *(int *)(param_1 + 0x14c) = iVar2;
    FUN_1405a76b0(param_1,*(undefined4 *)(param_1 + 0x148),iVar2,0x28);
  }
  return;
}



// FUNCTION 1405a8780 FUN_1405a8780 body=118 status=ok
// SIG undefined FUN_1405a8780(void)

void FUN_1405a8780(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar2 = 2;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar2;
    FUN_1405a7760(param_1,*(undefined4 *)(param_1 + 0x38),iVar2,0x18);
  }
  return;
}


