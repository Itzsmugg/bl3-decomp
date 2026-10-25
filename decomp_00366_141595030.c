// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141595030 FUN_141595030 body=1537 status=ok
// SIG undefined FUN_141595030(void)

void FUN_141595030(DWORD *param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *lpTlsValue;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  bool bVar12;
  
  piVar2 = TlsGetValue(*param_1);
  lpTlsValue = (int *)0x0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)operator_new(0xc);
    if (piVar2 != (int *)0x0) {
      piVar2[0] = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      lpTlsValue = piVar2;
    }
    TlsSetValue(*param_1,lpTlsValue);
    piVar2 = lpTlsValue;
  }
  uVar6 = piVar2[1];
  if (uVar6 == 0) {
    if (*piVar2 == 0) {
      iVar1 = FUN_141594c40(param_1 + 2);
      piVar2[1] = iVar1;
      uVar6 = DAT_1468a8170;
      if (iVar1 == 0) {
        LOCK();
        uVar8 = DAT_1468a8170 + 0x40;
        UNLOCK();
        uVar9 = DAT_1468a8170 + 0x40;
        DAT_1468a8170 = uVar8;
        if (0x4000000 < uVar9) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x30,L"Consumed %d lock free links; there are no more.",0x4000000);
          FDebug::AssertFailed
                    (&DAT_144c921b2,"Unknown",0x30,
                     L"Consumed %d lock free links; there are no more.",0x4000000);
        }
        if (uVar6 < uVar9) {
          uVar11 = (ulonglong)uVar6;
          uVar8 = uVar6;
          do {
            uVar3 = uVar11 >> 0xe;
            uVar7 = (ulonglong)(uVar8 & 0x3fff);
            if ((&DAT_1468a81f8)[uVar3] == 0) {
              lVar4 = FMemory::Malloc(0x60000);
              LOCK();
              bVar12 = (&DAT_1468a81f8)[uVar3] == 0;
              if (bVar12) {
                (&DAT_1468a81f8)[uVar3] = lVar4;
              }
              UNLOCK();
              if (!bVar12) {
                FMemory::Free();
              }
            }
            lVar4 = (&DAT_1468a81f8)[uVar3];
            uVar8 = uVar8 + 1;
            uVar11 = uVar11 + 1;
            *(undefined8 *)(lVar4 + uVar7 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 8 + uVar7 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18) = 0;
          } while (uVar8 < uVar9);
        }
        puVar10 = (undefined8 *)0x0;
        uVar6 = uVar6 + 2;
        lVar4 = 4;
        do {
          uVar9 = uVar6 - 2;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 - 1;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          puVar5 = puVar10;
          if (uVar6 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          uVar9 = uVar6 + 1;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar6;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 2;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 3;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 4;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 5;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 6;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 7;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 8;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 9;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 10;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 0xb;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 0xc;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          uVar9 = uVar6 + 0xd;
          puVar5 = puVar10;
          if (uVar9 != 0) {
            puVar5 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
          }
          *puVar5 = 0;
          uVar6 = uVar6 + 0x10;
          *(undefined4 *)(puVar5 + 2) = 0;
          puVar5[1] = (ulonglong)(uint)piVar2[1];
          piVar2[1] = uVar9;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      piVar2[1] = *piVar2;
      *piVar2 = 0;
    }
    uVar6 = piVar2[1];
    piVar2[2] = 0x40;
  }
  lVar4 = 0;
  if (uVar6 != 0) {
    lVar4 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
  }
  iVar1 = *(int *)(lVar4 + 8);
  piVar2[2] = piVar2[2] + -1;
  piVar2[1] = iVar1;
  *(undefined8 *)(lVar4 + 8) = 0;
  return;
}



// FUNCTION 141595640 PopAll body=477 status=ok
// SIG undefined PopAll(void)

void FLockFreePointerFIFOBase<FTestStruct,1,1>::PopAll(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  while( true ) {
    do {
      while( true ) {
        do {
          LOCK();
          uVar6 = *(ulonglong *)(param_1 + 8);
          if (uVar6 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar6 = 0;
          }
          UNLOCK();
          LOCK();
          uVar2 = *(ulonglong *)(param_1 + 0x18);
          if (uVar2 == 0) {
            *(ulonglong *)(param_1 + 0x18) = 0;
            uVar2 = 0;
          }
          UNLOCK();
          uVar8 = (uint)uVar6 & 0x3ffffff;
          puVar4 = (ulonglong *)0x0;
          if ((uVar6 & 0x3ffffff) != 0) {
            puVar4 = (ulonglong *)
                     ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)((uint)uVar6 & 0x3fff) * 0x18);
          }
          LOCK();
          uVar7 = *puVar4;
          if (uVar7 == 0) {
            *puVar4 = 0;
            uVar7 = 0;
          }
          UNLOCK();
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
        } while (uVar6 != uVar3);
        uVar5 = (uint)uVar7;
        if (uVar8 != ((uint)uVar2 & 0x3ffffff)) break;
        if ((uVar7 & 0x3ffffff) == 0) {
          return;
        }
        uVar6 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
        if (uVar6 < (uVar2 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        if (uVar2 == *(ulonglong *)(param_1 + 0x18)) {
          *(ulonglong *)(param_1 + 0x18) = uVar5 & 0x3ffffff | uVar6;
        }
        UNLOCK();
      }
      puVar4 = (ulonglong *)0x0;
      if ((uVar7 & 0x3ffffff) != 0) {
        puVar4 = (ulonglong *)
                 ((&DAT_1468a81f8)[(uVar5 & 0x3ffffff) >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18)
        ;
      }
      uVar2 = puVar4[1];
      uVar7 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
      if (uVar7 < (uVar6 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      bVar9 = uVar6 == *(ulonglong *)(param_1 + 8);
      if (bVar9) {
        *(ulonglong *)(param_1 + 8) = uVar5 & 0x3ffffff | uVar7;
      }
      UNLOCK();
    } while (!bVar9);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
    if (uVar2 == 0) break;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 141595820 PopAll body=477 status=ok
// SIG undefined PopAll(void)

void FLockFreePointerFIFOBase<FTestStruct,1,16>::PopAll(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  while( true ) {
    do {
      while( true ) {
        do {
          LOCK();
          uVar6 = *(ulonglong *)(param_1 + 8);
          if (uVar6 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar6 = 0;
          }
          UNLOCK();
          LOCK();
          uVar2 = *(ulonglong *)(param_1 + 0x18);
          if (uVar2 == 0) {
            *(ulonglong *)(param_1 + 0x18) = 0;
            uVar2 = 0;
          }
          UNLOCK();
          uVar8 = (uint)uVar6 & 0x3ffffff;
          puVar4 = (ulonglong *)0x0;
          if ((uVar6 & 0x3ffffff) != 0) {
            puVar4 = (ulonglong *)
                     ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)((uint)uVar6 & 0x3fff) * 0x18);
          }
          LOCK();
          uVar7 = *puVar4;
          if (uVar7 == 0) {
            *puVar4 = 0;
            uVar7 = 0;
          }
          UNLOCK();
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
        } while (uVar6 != uVar3);
        uVar5 = (uint)uVar7;
        if (uVar8 != ((uint)uVar2 & 0x3ffffff)) break;
        if ((uVar7 & 0x3ffffff) == 0) {
          return;
        }
        uVar6 = (uVar2 & 0xfffffffffc000000) + 0x40000000;
        if (uVar6 < (uVar2 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        if (uVar2 == *(ulonglong *)(param_1 + 0x18)) {
          *(ulonglong *)(param_1 + 0x18) = uVar5 & 0x3ffffff | uVar6;
        }
        UNLOCK();
      }
      puVar4 = (ulonglong *)0x0;
      if ((uVar7 & 0x3ffffff) != 0) {
        puVar4 = (ulonglong *)
                 ((&DAT_1468a81f8)[(uVar5 & 0x3ffffff) >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18)
        ;
      }
      uVar2 = puVar4[1];
      uVar7 = (uVar6 & 0xfffffffffc000000) + 0x40000000;
      if (uVar7 < (uVar6 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      bVar9 = uVar6 == *(ulonglong *)(param_1 + 8);
      if (bVar9) {
        *(ulonglong *)(param_1 + 8) = uVar5 & 0x3ffffff | uVar7;
      }
      UNLOCK();
    } while (!bVar9);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
    if (uVar2 == 0) break;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 141595a00 PopAll body=267 status=ok
// SIG undefined PopAll(void)

void FLockFreePointerListLIFOBase<FTestStruct,1,1>::PopAll(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  LOCK();
  uVar5 = *(ulonglong *)(param_1 + 8);
  if (uVar5 == 0) {
    *(ulonglong *)(param_1 + 8) = 0;
    uVar5 = 0;
  }
  UNLOCK();
  uVar7 = (uint)uVar5;
  while (uVar7 = uVar7 & 0x3ffffff, (uVar5 & 0x3ffffff) != 0) {
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 8);
    if (bVar8) {
      *(ulonglong *)(param_1 + 8) = uVar6;
    }
    UNLOCK();
    if (bVar8) break;
    LOCK();
    uVar5 = *(ulonglong *)(param_1 + 8);
    if (uVar5 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    uVar7 = (uint)uVar5;
  }
  while (uVar7 != 0) {
    iVar1 = (int)param_2[1];
    lVar3 = (&DAT_1468a81f8)[uVar7 >> 0xe];
    uVar4 = *(undefined8 *)(lVar3 + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar7 & 0x3fff) * 0x18 + 0x10);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
    uVar7 = uVar2;
  }
  return;
}



// FUNCTION 141595b10 PopAll body=267 status=ok
// SIG undefined PopAll(void)

void FLockFreePointerListLIFOBase<FTestStruct,1,16>::PopAll(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  LOCK();
  uVar5 = *(ulonglong *)(param_1 + 8);
  if (uVar5 == 0) {
    *(ulonglong *)(param_1 + 8) = 0;
    uVar5 = 0;
  }
  UNLOCK();
  uVar7 = (uint)uVar5;
  while (uVar7 = uVar7 & 0x3ffffff, (uVar5 & 0x3ffffff) != 0) {
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x40000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 8);
    if (bVar8) {
      *(ulonglong *)(param_1 + 8) = uVar6;
    }
    UNLOCK();
    if (bVar8) break;
    LOCK();
    uVar5 = *(ulonglong *)(param_1 + 8);
    if (uVar5 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    uVar7 = (uint)uVar5;
  }
  while (uVar7 != 0) {
    iVar1 = (int)param_2[1];
    lVar3 = (&DAT_1468a81f8)[uVar7 >> 0xe];
    uVar4 = *(undefined8 *)(lVar3 + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar7 & 0x3fff) * 0x18 + 0x10);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
    uVar7 = uVar2;
  }
  return;
}



// FUNCTION 141595c20 PrintfImpl body=353 status=ok
// SIG undefined PrintfImpl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FString::PrintfImpl(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int iVar2;
  ulonglong *puVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined8 *local_450;
  short local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  iVar6 = 0x200;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar3 = (ulonglong *)__local_stdio_printf_options();
  psVar4 = (short *)0x0;
  local_458 = 0;
  local_450 = &local_res18;
  iVar2 = __stdio_common_vswprintf(*puVar3 | 1,local_448,0x1ff,param_2);
  lVar5 = -1;
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  psVar1 = local_448;
  if (0x1ff < iVar2) goto LAB_141595cb0;
  while (iVar2 == -1) {
LAB_141595cb0:
    do {
      iVar6 = iVar6 * 2;
      psVar4 = (short *)FMemory::Realloc(psVar4,(longlong)iVar6 * 2,0);
      local_450 = &local_res18;
      local_458 = 0;
      iVar2 = __stdio_common_vswprintf(*puVar3 | 1,psVar4,(longlong)(iVar6 + -1),param_2);
      if (iVar2 < 0) {
        iVar2 = -1;
      }
      psVar1 = psVar4;
    } while (iVar6 <= iVar2);
  }
  psVar1[iVar2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    iVar2 = (int)lVar5 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  if (iVar6 != 0x200) {
    FMemory::Free(psVar1);
  }
  return param_1;
}



// FUNCTION 141595d90 FUN_141595d90 body=321 status=ok
// SIG undefined FUN_141595d90(void)

void FUN_141595d90(longlong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  bVar1 = false;
  do {
    while( true ) {
      if ((DAT_1468e22d0 != 0) && (DAT_1468e22c8 != (longlong *)0x0)) {
        cVar2 = (**(code **)(*DAT_1468e22c8 + 0x18))();
        if (cVar2 != '\0') {
          plVar5 = (longlong *)0x0;
          if (DAT_1468e22d0 != 0) {
            plVar5 = DAT_1468e22c8;
          }
          (**(code **)(*plVar5 + 0x40))();
        }
      }
      uVar3 = *(int *)(param_1 + 0x10) - *(int *)(DAT_1468a80e8 + 0x7bc);
      plVar5 = (longlong *)
               FUN_141594d40(DAT_1468a80e8 + 0x7e8 +
                             (longlong)(int)(uVar3 / *(uint *)(DAT_1468a80e8 + 0x7c4)) * 0x538,
                             (ulonglong)uVar3 % (ulonglong)*(uint *)(DAT_1468a80e8 + 0x7c4),1);
      if (plVar5 == (longlong *)0x0) break;
      FUN_1415a0880(local_res8,0);
      if ((!bVar1) && (*(int *)(param_1 + 0x70) == 2)) {
        FUN_1416b1760(0);
      }
      bVar1 = false;
      (**(code **)(*plVar5 + 8))(plVar5,param_1 + 0x20,*(undefined4 *)(param_1 + 0x10));
      if (*(char *)(param_1 + 0x45) != '\0') {
        BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
        if (BVar4 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
      }
      FUN_1415a0ec0(local_res8);
    }
    cVar2 = FUN_1415bac00();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                (*(longlong **)(param_1 + 0x38),0xffffffff,1);
      bVar1 = true;
    }
    if (*(char *)(param_1 + 0x44) != '\0') break;
    cVar2 = FUN_1415bac00();
  } while (cVar2 != '\0');
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  return;
}



// FUNCTION 141595ee0 FUN_141595ee0 body=975 status=ok
// SIG undefined FUN_141595ee0(void)

void FUN_141595ee0(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_70 [48];
  
  lVar9 = (longlong)param_2 * 0x3b8;
  if (*(char *)(lVar9 + 0x3e4 + param_1) != '\0') {
    return;
  }
  lVar8 = param_1 + 0x38 + lVar9;
LAB_141595f57:
  do {
    iVar12 = 0;
    LOCK();
    uVar5 = *(ulonglong *)(lVar8 + 800);
    if (uVar5 == 0) {
      *(ulonglong *)(lVar8 + 800) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    do {
      lVar13 = (longlong)iVar12 * 400 + lVar8;
      do {
        while( true ) {
          do {
            puVar4 = (ulonglong *)0x0;
            LOCK();
            uVar10 = *(ulonglong *)(lVar13 + 0x80);
            if (uVar10 == 0) {
              *(ulonglong *)(lVar13 + 0x80) = 0;
              uVar10 = 0;
            }
            UNLOCK();
            LOCK();
            uVar11 = *(ulonglong *)(lVar13 + 0x108);
            if (uVar11 == 0) {
              *(ulonglong *)(lVar13 + 0x108) = 0;
              uVar11 = 0;
            }
            UNLOCK();
            uVar14 = (uint)uVar10 & 0x3ffffff;
            puVar6 = puVar4;
            if ((uVar10 & 0x3ffffff) != 0) {
              puVar6 = (ulonglong *)
                       ((&DAT_1468a81f8)[uVar14 >> 0xe] + (ulonglong)((uint)uVar10 & 0x3fff) * 0x18)
              ;
            }
            LOCK();
            uVar2 = *puVar6;
            if (uVar2 == 0) {
              *puVar6 = 0;
              uVar2 = 0;
            }
            UNLOCK();
            LOCK();
            uVar3 = *(ulonglong *)(lVar13 + 0x80);
            if (uVar3 == 0) {
              *(ulonglong *)(lVar13 + 0x80) = 0;
              uVar3 = 0;
            }
            UNLOCK();
          } while (uVar10 != uVar3);
          uVar7 = (uint)uVar2;
          if (uVar14 != ((uint)uVar11 & 0x3ffffff)) break;
          if ((uVar2 & 0x3ffffff) == 0) goto LAB_1415960e9;
          uVar10 = (uVar11 & 0xfffffffffc000000) + 0x4000000;
          if (uVar10 < (uVar11 & 0xfffffffffc000000)) {
            FUN_1416b1760(0x3a83126f);
          }
          LOCK();
          if (uVar11 == *(ulonglong *)(lVar13 + 0x108)) {
            *(ulonglong *)(lVar13 + 0x108) = uVar7 & 0x3ffffff | uVar10;
          }
          UNLOCK();
        }
        if ((uVar2 & 0x3ffffff) != 0) {
          puVar4 = (ulonglong *)
                   ((&DAT_1468a81f8)[(uVar7 & 0x3ffffff) >> 0xe] +
                   (ulonglong)(uVar7 & 0x3fff) * 0x18);
        }
        plVar1 = (longlong *)puVar4[1];
        uVar11 = (uVar10 & 0xfffffffffc000000) + 0x4000000;
        if (uVar11 < (uVar10 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar15 = uVar10 == *(ulonglong *)(lVar13 + 0x80);
        if (bVar15) {
          *(ulonglong *)(lVar13 + 0x80) = uVar7 & 0x3ffffff | uVar11;
        }
        UNLOCK();
      } while (!bVar15);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar14);
      if (plVar1 != (longlong *)0x0) goto LAB_1415961c1;
LAB_1415960e9:
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    if (param_3 == '\0') {
      return;
    }
    uVar10 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar10 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar15 = uVar5 == *(ulonglong *)(lVar8 + 800);
    if (bVar15) {
      *(ulonglong *)(lVar8 + 800) = (ulonglong)((uint)uVar5 & 0x3fffffe) | 1 | uVar10;
    }
    UNLOCK();
  } while (!bVar15);
  if (param_3 == '\0') {
    return;
  }
  plVar1 = *(longlong **)(lVar9 + 1000 + param_1);
  (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
  if (*(char *)(lVar9 + 0x3e5 + param_1) != '\0') {
    return;
  }
  goto LAB_141596265;
LAB_1415961c1:
  while( true ) {
    uVar10 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar10 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar15 = uVar5 == *(ulonglong *)(lVar8 + 800);
    if (bVar15) {
      *(ulonglong *)(lVar8 + 800) = (uint)uVar5 & 0x3ffffff | uVar10;
    }
    UNLOCK();
    if (bVar15) break;
    LOCK();
    uVar5 = *(ulonglong *)(lVar8 + 800);
    if (uVar5 == 0) {
      *(ulonglong *)(lVar8 + 800) = 0;
      uVar5 = 0;
    }
    UNLOCK();
  }
  FUN_1415a0880(local_70,0);
  (**(code **)(*plVar1 + 8))(plVar1,param_1 + 0x20,param_2 << 8 | *(uint *)(param_1 + 0x10));
  FUN_1415a0ec0(local_70);
LAB_141596265:
  if (*(char *)(lVar9 + 0x3e4 + param_1) != '\0') {
    return;
  }
  goto LAB_141595f57;
}



// FUNCTION 1415962b0 ProcessTasksUntilIdle body=52 status=ok
// SIG undefined ProcessTasksUntilIdle(void)

void FNamedTaskThread::ProcessTasksUntilIdle(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2 * 0x3b8 + param_1;
  *(undefined1 *)(lVar1 + 0x3e4) = 0;
  *(int *)(lVar1 + 0x3e0) = *(int *)(lVar1 + 0x3e0) + 1;
  FUN_141595ee0(param_1,param_2,0);
  *(int *)(lVar1 + 0x3e0) = *(int *)(lVar1 + 0x3e0) + -1;
  return;
}



// FUNCTION 1415962f0 FUN_1415962f0 body=37 status=ok
// SIG undefined FUN_1415962f0(void)

void FUN_1415962f0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1415bac00();
  if (cVar1 == '\0') {
    FUN_141595d90(param_1);
    return;
  }
  return;
}



// FUNCTION 141596320 ProcessTasksUntilQuit body=119 status=ok
// SIG undefined ProcessTasksUntilQuit(void)

void FNamedTaskThread::ProcessTasksUntilQuit(longlong param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2 * 0x3b8;
  *(undefined1 *)(lVar4 + 0x3e4 + param_1) = 0;
  piVar1 = (int *)(lVar4 + 0x3e0 + param_1);
  *piVar1 = *piVar1 + 1;
  do {
    uVar2 = FUN_1415bac00();
    FUN_141595ee0(param_1,param_2,uVar2);
    if ((*(char *)(lVar4 + 0x3e4 + param_1) != '\0') || (*(char *)(lVar4 + 0x3e5 + param_1) != '\0')
       ) break;
    cVar3 = FUN_1415bac00();
  } while (cVar3 != '\0');
  piVar1 = (int *)(lVar4 + 0x3e0 + param_1);
  *piVar1 = *piVar1 + -1;
  return;
}



// FUNCTION 1415963a0 FUN_1415963a0 body=350 status=ok
// SIG undefined FUN_1415963a0(void)

void FUN_1415963a0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 0x70) != 2) {
    FMemory::SetupTLSCachesOnCurrentThread();
  }
  do {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    bVar1 = false;
    do {
      while( true ) {
        if (((DAT_1468e22d0 != 0) && (DAT_1468e22c8 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*DAT_1468e22c8 + 0x18))(), cVar2 != '\0')) {
          plVar5 = (longlong *)0x0;
          if (DAT_1468e22d0 != 0) {
            plVar5 = DAT_1468e22c8;
          }
          (**(code **)(*plVar5 + 0x40))();
        }
        uVar3 = *(int *)(param_1 + 0x10) - *(int *)(DAT_1468a80e8 + 0x7bc);
        plVar5 = (longlong *)
                 FUN_141594d40(DAT_1468a80e8 + 0x7e8 +
                               (longlong)(int)(uVar3 / *(uint *)(DAT_1468a80e8 + 0x7c4)) * 0x538,
                               (ulonglong)uVar3 % (ulonglong)*(uint *)(DAT_1468a80e8 + 0x7c4),1);
        if (plVar5 == (longlong *)0x0) break;
        FUN_1415a0880(local_res8,0);
        if ((!bVar1) && (*(int *)(param_1 + 0x70) == 2)) {
          FUN_1416b1760(0);
        }
        bVar1 = false;
        (**(code **)(*plVar5 + 8))(plVar5,param_1 + 0x20,*(undefined4 *)(param_1 + 0x10));
        if (*(char *)(param_1 + 0x45) != '\0') {
          BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
          if (BVar4 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
        }
        FUN_1415a0ec0(local_res8);
      }
      cVar2 = FUN_1415bac00();
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                  (*(longlong **)(param_1 + 0x38),0xffffffff,1);
        bVar1 = true;
      }
      cVar2 = *(char *)(param_1 + 0x44);
      if (cVar2 != '\0') goto LAB_141596470;
      cVar2 = FUN_1415bac00();
    } while (cVar2 != '\0');
    cVar2 = *(char *)(param_1 + 0x44);
LAB_141596470:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    if (cVar2 != '\0') {
      return;
    }
    cVar2 = FUN_1415bac00();
    if (cVar2 == '\0') {
      return;
    }
  } while( true );
}



// FUNCTION 141596560 FUN_141596560 body=451 status=ok
// SIG undefined FUN_141596560(void)

ulonglong FUN_141596560(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = FUN_141595030(&DAT_1468a7fd8);
  puVar4 = (ulonglong *)0x0;
  if (uVar2 != 0) {
    puVar4 = (ulonglong *)((&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18);
  }
  puVar4[1] = param_2;
  do {
    while( true ) {
      do {
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 0x18);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 0x18) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        puVar4 = (ulonglong *)0x0;
        if ((uVar3 & 0x3ffffff) != 0) {
          puVar4 = (ulonglong *)
                   ((&DAT_1468a81f8)[((uint)uVar3 & 0x3ffffff) >> 0xe] +
                   (ulonglong)((uint)uVar3 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar5 = *puVar4;
        if (uVar5 == 0) {
          *puVar4 = 0;
          uVar5 = 0;
        }
        UNLOCK();
        LOCK();
        uVar6 = *(ulonglong *)(param_1 + 0x18);
        if (uVar6 == 0) {
          *(ulonglong *)(param_1 + 0x18) = 0;
          uVar6 = 0;
        }
        UNLOCK();
      } while (uVar6 != uVar3);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar6 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
      if (uVar6 < (uVar3 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      if (uVar3 == *(ulonglong *)(param_1 + 0x18)) {
        *(ulonglong *)(param_1 + 0x18) = (uint)uVar5 & 0x3ffffff | uVar6;
      }
      UNLOCK();
    }
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    uVar1 = *puVar4;
    if (uVar5 == uVar1) {
      *puVar4 = uVar2 | uVar6;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
    FUN_1416b1760(0x3a83126f);
  }
  LOCK();
  uVar6 = *(ulonglong *)(param_1 + 0x18);
  if (uVar3 == uVar6) {
    *(ulonglong *)(param_1 + 0x18) = uVar2 | uVar5;
    uVar6 = uVar3;
  }
  UNLOCK();
  return uVar6;
}



// FUNCTION 141596730 FUN_141596730 body=451 status=ok
// SIG undefined FUN_141596730(void)

ulonglong FUN_141596730(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = FUN_141595030(&DAT_1468a7fd8);
  puVar4 = (ulonglong *)0x0;
  if (uVar2 != 0) {
    puVar4 = (ulonglong *)((&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18);
  }
  puVar4[1] = param_2;
  do {
    while( true ) {
      do {
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 0x18);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 0x18) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        puVar4 = (ulonglong *)0x0;
        if ((uVar3 & 0x3ffffff) != 0) {
          puVar4 = (ulonglong *)
                   ((&DAT_1468a81f8)[((uint)uVar3 & 0x3ffffff) >> 0xe] +
                   (ulonglong)((uint)uVar3 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar5 = *puVar4;
        if (uVar5 == 0) {
          *puVar4 = 0;
          uVar5 = 0;
        }
        UNLOCK();
        LOCK();
        uVar6 = *(ulonglong *)(param_1 + 0x18);
        if (uVar6 == 0) {
          *(ulonglong *)(param_1 + 0x18) = 0;
          uVar6 = 0;
        }
        UNLOCK();
      } while (uVar6 != uVar3);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar6 = (uVar3 & 0xfffffffffc000000) + 0x40000000;
      if (uVar6 < (uVar3 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      if (uVar3 == *(ulonglong *)(param_1 + 0x18)) {
        *(ulonglong *)(param_1 + 0x18) = (uint)uVar5 & 0x3ffffff | uVar6;
      }
      UNLOCK();
    }
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x40000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    uVar1 = *puVar4;
    if (uVar5 == uVar1) {
      *puVar4 = uVar2 | uVar6;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar3 & 0xfffffffffc000000) + 0x40000000;
  if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
    FUN_1416b1760(0x3a83126f);
  }
  LOCK();
  uVar6 = *(ulonglong *)(param_1 + 0x18);
  if (uVar3 == uVar6) {
    *(ulonglong *)(param_1 + 0x18) = uVar2 | uVar5;
    uVar6 = uVar3;
  }
  UNLOCK();
  return uVar6;
}



// FUNCTION 141596900 FUN_141596900 body=463 status=ok
// SIG undefined FUN_141596900(void)

ulonglong FUN_141596900(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = FUN_141595030(&DAT_1468a7fd8);
  puVar4 = (ulonglong *)0x0;
  if (uVar2 != 0) {
    puVar4 = (ulonglong *)((&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18);
  }
  puVar4[1] = param_2;
  do {
    while( true ) {
      do {
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 0x108);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 0x108) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        puVar4 = (ulonglong *)0x0;
        if ((uVar3 & 0x3ffffff) != 0) {
          puVar4 = (ulonglong *)
                   ((&DAT_1468a81f8)[((uint)uVar3 & 0x3ffffff) >> 0xe] +
                   (ulonglong)((uint)uVar3 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar5 = *puVar4;
        if (uVar5 == 0) {
          *puVar4 = 0;
          uVar5 = 0;
        }
        UNLOCK();
        LOCK();
        uVar6 = *(ulonglong *)(param_1 + 0x108);
        if (uVar6 == 0) {
          *(ulonglong *)(param_1 + 0x108) = 0;
          uVar6 = 0;
        }
        UNLOCK();
      } while (uVar6 != uVar3);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar6 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
      if (uVar6 < (uVar3 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      if (uVar3 == *(ulonglong *)(param_1 + 0x108)) {
        *(ulonglong *)(param_1 + 0x108) = (uint)uVar5 & 0x3ffffff | uVar6;
      }
      UNLOCK();
    }
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    uVar1 = *puVar4;
    if (uVar5 == uVar1) {
      *puVar4 = uVar2 | uVar6;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
    FUN_1416b1760(0x3a83126f);
  }
  LOCK();
  uVar6 = *(ulonglong *)(param_1 + 0x108);
  if (uVar3 == uVar6) {
    *(ulonglong *)(param_1 + 0x108) = uVar2 | uVar5;
    uVar6 = uVar3;
  }
  UNLOCK();
  return uVar6;
}



// FUNCTION 141596ad0 FUN_141596ad0 body=265 status=ok
// SIG undefined FUN_141596ad0(void)

void FUN_141596ad0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = FUN_141595030(&DAT_1468a7fd8);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar2 + 8) = param_2;
  do {
    LOCK();
    uVar3 = *(ulonglong *)(param_1 + 8);
    if (uVar3 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar4 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 < (uVar3 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
    }
    *(uint *)(lVar2 + 0x10) = (uint)uVar3 & 0x3ffffff;
    LOCK();
    bVar5 = uVar3 == *(ulonglong *)(param_1 + 8);
    if (bVar5) {
      *(ulonglong *)(param_1 + 8) = uVar4 | uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return;
}



// FUNCTION 141596be0 FUN_141596be0 body=265 status=ok
// SIG undefined FUN_141596be0(void)

void FUN_141596be0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = FUN_141595030(&DAT_1468a7fd8);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar2 + 8) = param_2;
  do {
    LOCK();
    uVar3 = *(ulonglong *)(param_1 + 8);
    if (uVar3 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar4 = (uVar3 & 0xfffffffffc000000) + 0x40000000;
    if (uVar4 < (uVar3 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
    }
    *(uint *)(lVar2 + 0x10) = (uint)uVar3 & 0x3ffffff;
    LOCK();
    bVar5 = uVar3 == *(ulonglong *)(param_1 + 8);
    if (bVar5) {
      *(ulonglong *)(param_1 + 8) = uVar4 | uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return;
}



// FUNCTION 141596cf0 Push body=421 status=ok
// SIG undefined Push(void)

int FStallingTaskQueue<FBaseGraphTask,128,2>::Push
              (longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  
  LOCK();
  uVar5 = *(ulonglong *)(param_1 + 800);
  if (uVar5 == 0) {
    *(ulonglong *)(param_1 + 800) = 0;
    uVar5 = 0;
  }
  UNLOCK();
  FUN_141596900((param_3 & 0xffffffff) * 400 + param_1);
  uVar2 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
  if (uVar2 < (uVar5 & 0xfffffffffc000000)) {
    FUN_1416b1760(0x3a83126f);
  }
  iVar6 = -1;
  uVar7 = (ulonglong)((uint)uVar5 & 0x3ffffff);
  uVar4 = uVar7;
  iVar1 = 0;
  uVar3 = uVar5;
  if (uVar7 != 0) {
    while (iVar6 = iVar1, (uVar3 & 1) == 0) {
      uVar4 = uVar4 >> 1;
      iVar1 = iVar6 + 1;
      uVar3 = uVar4;
    }
  }
  if (-1 < iVar6) {
    uVar7 = uVar7 & ~(1L << ((longlong)iVar6 & 0x3fU));
  }
  LOCK();
  bVar8 = uVar5 == *(ulonglong *)(param_1 + 800);
  if (bVar8) {
    *(ulonglong *)(param_1 + 800) = uVar7 | uVar2;
  }
  UNLOCK();
  while (!bVar8) {
    LOCK();
    uVar5 = *(ulonglong *)(param_1 + 800);
    if (uVar5 == 0) {
      *(ulonglong *)(param_1 + 800) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    uVar2 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar2 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    iVar6 = -1;
    uVar7 = (ulonglong)((uint)uVar5 & 0x3ffffff);
    uVar4 = uVar7;
    iVar1 = 0;
    uVar3 = uVar5;
    if (uVar7 != 0) {
      while (iVar6 = iVar1, (uVar3 & 1) == 0) {
        uVar4 = uVar4 >> 1;
        iVar1 = iVar6 + 1;
        uVar3 = uVar4;
      }
    }
    if (-1 < iVar6) {
      uVar7 = uVar7 & ~(1L << ((longlong)iVar6 & 0x3fU));
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 800);
    if (bVar8) {
      *(ulonglong *)(param_1 + 800) = uVar7 | uVar2;
    }
    UNLOCK();
  }
  return iVar6;
}



// FUNCTION 141596ea0 FUN_141596ea0 body=421 status=ok
// SIG undefined FUN_141596ea0(void)

int FUN_141596ea0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  
  LOCK();
  uVar5 = *(ulonglong *)(param_1 + 0x4b0);
  if (uVar5 == 0) {
    *(ulonglong *)(param_1 + 0x4b0) = 0;
    uVar5 = 0;
  }
  UNLOCK();
  FUN_141596900((param_3 & 0xffffffff) * 400 + param_1);
  uVar2 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
  if (uVar2 < (uVar5 & 0xfffffffffc000000)) {
    FUN_1416b1760(0x3a83126f);
  }
  iVar6 = -1;
  uVar7 = (ulonglong)((uint)uVar5 & 0x3ffffff);
  uVar4 = uVar7;
  iVar1 = 0;
  uVar3 = uVar5;
  if (uVar7 != 0) {
    while (iVar6 = iVar1, (uVar3 & 1) == 0) {
      uVar4 = uVar4 >> 1;
      iVar1 = iVar6 + 1;
      uVar3 = uVar4;
    }
  }
  if (-1 < iVar6) {
    uVar7 = uVar7 & ~(1L << ((longlong)iVar6 & 0x3fU));
  }
  LOCK();
  bVar8 = uVar5 == *(ulonglong *)(param_1 + 0x4b0);
  if (bVar8) {
    *(ulonglong *)(param_1 + 0x4b0) = uVar7 | uVar2;
  }
  UNLOCK();
  while (!bVar8) {
    LOCK();
    uVar5 = *(ulonglong *)(param_1 + 0x4b0);
    if (uVar5 == 0) {
      *(ulonglong *)(param_1 + 0x4b0) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    uVar2 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar2 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    iVar6 = -1;
    uVar7 = (ulonglong)((uint)uVar5 & 0x3ffffff);
    uVar4 = uVar7;
    iVar1 = 0;
    uVar3 = uVar5;
    if (uVar7 != 0) {
      while (iVar6 = iVar1, (uVar3 & 1) == 0) {
        uVar4 = uVar4 >> 1;
        iVar1 = iVar6 + 1;
        uVar3 = uVar4;
      }
    }
    if (-1 < iVar6) {
      uVar7 = uVar7 & ~(1L << ((longlong)iVar6 & 0x3fU));
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 0x4b0);
    if (bVar8) {
      *(ulonglong *)(param_1 + 0x4b0) = uVar7 | uVar2;
    }
    UNLOCK();
  }
  return iVar6;
}



// FUNCTION 141597050 FUN_141597050 body=369 status=ok
// SIG undefined FUN_141597050(void)

void FUN_141597050(longlong param_1,longlong param_2,ulonglong param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = (uint)param_3 & 0xff;
  param_3 = param_3 & 0xffffffff;
  uVar7 = 0xff;
  if (uVar4 != 0xff) {
    uVar7 = uVar4;
  }
  if (uVar7 == 0xff) {
    cVar3 = FUN_1415bac00();
    if (cVar3 != '\0') {
      uVar4 = *(int *)(param_2 + 8) >> 9 & 3;
      uVar7 = *(int *)(param_2 + 8) >> 0xb & 3;
      if (uVar7 == 2) {
        if ((*(char *)(param_1 + 0x7c9) == '\0') || (DAT_1464a8208 == 0)) {
          uVar4 = 0;
          uVar7 = uVar4;
        }
      }
      else if ((uVar7 == 1) && ((*(char *)(param_1 + 0x7c8) == '\0' || (DAT_1464a820c == 0)))) {
        uVar7 = 0;
        uVar4 = 1;
      }
      iVar5 = FUN_141596ea0((ulonglong)uVar7 * 0x538 + 0x7e8 + param_1,param_2,2 - uVar4);
      if (iVar5 < 0) {
        return;
      }
      (**(code **)(**(longlong **)
                     (*(longlong *)
                       (param_1 + 8 +
                       (longlong)
                       (int)(iVar5 + *(int *)(param_1 + 0x7c4) * uVar7 + *(int *)(param_1 + 0x7bc))
                       * 0x18) + 0x38) + 0x10))();
      return;
    }
    param_3 = 2;
  }
  param_4 = param_4 & 0xff;
  uVar7 = 0xff;
  if (param_4 != 0xff) {
    uVar7 = param_4;
  }
  if (uVar7 == 0xff) {
    param_4 = FUN_141593180(param_1);
  }
  else if (param_4 == 0xff) {
    param_4 = 0xff;
  }
  uVar6 = 0xff;
  if ((int)(param_3 & 0xff) != 0xff) {
    uVar6 = param_3 & 0xff;
  }
  plVar1 = *(longlong **)(param_1 + 8 + uVar6 * 0x18);
  lVar2 = *plVar1;
  uVar7 = 0xff;
  if ((param_4 & 0xff) != 0xff) {
    uVar7 = param_4 & 0xff;
  }
  if ((uint)uVar6 == uVar7) {
    (**(code **)(lVar2 + 0x40))();
  }
  else {
    (**(code **)(lVar2 + 0x50))(plVar1,(int)param_3 >> 8 & 1,param_2);
  }
  return;
}



// FUNCTION 1415971d0 Recycle body=167 status=ok
// SIG undefined Recycle(void)

void FGraphEvent::Recycle(undefined8 *param_1)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14158cb50(param_1 + 3);
  lpTlsValue = TlsGetValue(DAT_1468a7e70);
  plVar2 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      lpTlsValue = plVar1;
    }
    TlsSetValue(DAT_1468a7e70,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar2 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7e78);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar2;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141597280 RegisterModularFeature body=62 status=ok
// SIG undefined RegisterModularFeature(void)

void FModularFeatures::RegisterModularFeature
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
  ::EmplaceUnique<FName_const_&,IModularFeature_*_const_&>(param_1 + 8,&local_res10,local_res18);
  TBaseMulticastDelegate<void,FName_const_&,IModularFeature_*>::Broadcast
            (param_1 + 0x58,&local_res10,local_res18[0]);
  return;
}



// FUNCTION 1415972c0 Release body=200 status=ok
// SIG undefined Release(void)

int FGraphEvent::Release(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *lpTlsValue;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  LOCK();
  piVar1 = (int *)(param_1 + 9);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar4 = iVar2 + -1;
  if (iVar4 == 0) {
    FUN_14158cb50(param_1 + 3);
    lpTlsValue = TlsGetValue(DAT_1468a7e70);
    plVar5 = (longlong *)0x0;
    if (lpTlsValue == (longlong *)0x0) {
      plVar3 = (longlong *)operator_new(iVar2 + 0x17);
      lpTlsValue = plVar5;
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = 0;
        plVar3[1] = 0;
        *(undefined4 *)(plVar3 + 2) = 0;
        lpTlsValue = plVar3;
      }
      TlsSetValue(DAT_1468a7e70,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x20) {
      plVar5 = (longlong *)lpTlsValue[1];
    }
    else {
      if (*lpTlsValue != 0) {
        TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7e78);
      }
      *lpTlsValue = lpTlsValue[1];
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
    }
    *param_1 = plVar5;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
    lpTlsValue[1] = (longlong)param_1;
  }
  return iVar4;
}



// FUNCTION 141597390 RemoveFromEnd body=180 status=ok
// SIG undefined RemoveFromEnd(void)

undefined8 FString::RemoveFromEnd(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((1 < *(int *)(param_2 + 8)) && (cVar1 = EndsWith(), cVar1 != '\0')) {
    iVar5 = *(int *)(param_2 + 8);
    iVar3 = (int)param_1[1];
    iVar4 = iVar5 + -1;
    iVar2 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
      iVar2 = 0;
    }
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    iVar5 = iVar5 - iVar2;
    if (iVar4 != 0) {
      iVar2 = (iVar3 - iVar4) - iVar5;
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar5 * 2),
                   (void *)(*param_1 + (longlong)(iVar4 + iVar5) * 2),(longlong)iVar2 * 2);
        iVar3 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar3 - iVar4;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141597450 RemoveFromStart body=120 status=ok
// SIG undefined RemoveFromStart(void)

undefined8 FString::RemoveFromStart(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (1 < *(int *)(param_2 + 8)) {
    cVar1 = StartsWith();
    if (cVar1 != '\0') {
      iVar3 = *(int *)(param_2 + 8) + -1;
      if (*(int *)(param_2 + 8) == 0) {
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        iVar2 = *(int *)(param_1 + 1);
        if (iVar2 - iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)*param_1,(void *)((longlong)*param_1 + (longlong)iVar3 * 2),
                     (longlong)(iVar2 - iVar3) * 2);
          iVar2 = *(int *)(param_1 + 1);
        }
        *(int *)(param_1 + 1) = iVar2 - iVar3;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415974d0 RemoveSpacesInline body=96 status=ok
// SIG undefined RemoveSpacesInline(void)

void FString::RemoveSpacesInline(undefined8 *param_1)

{
  short *psVar1;
  longlong lVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    psVar1 = (short *)*param_1;
    iVar4 = 0;
    if (0 < iVar5) {
      lVar2 = 0;
      psVar3 = psVar1;
      do {
        if (psVar1[lVar2] != 0x20) {
          iVar4 = iVar4 + 1;
          *psVar3 = psVar1[lVar2];
          psVar3 = psVar3 + 1;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar5);
    }
    if (iVar4 <= iVar5) {
      psVar1[iVar4] = 0;
    }
  }
  return;
}



// FUNCTION 141597530 FUN_141597530 body=512 status=ok
// SIG undefined FUN_141597530(void)

void FUN_141597530(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar5) {
    do {
      uVar3 = uVar6;
      if ((*(int *)(*(longlong *)(param_1 + 8) + 0x18 + uVar9) != 0) &&
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10 + uVar9),
         plVar1 != (longlong *)0x0)) {
        puVar2 = (ulonglong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
        iVar5 = *(int *)(param_1 + 0x10);
        uVar3 = *puVar2;
      }
      iVar7 = (int)uVar8;
      if (uVar3 == param_2) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>
                  (*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar7 * 0x28);
        iVar5 = *(int *)(param_1 + 0x10);
        iVar4 = (iVar5 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 8)),
                     (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar5 - iVar4) * 0x28),
                     (longlong)iVar4 * 0x28);
          iVar5 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar5 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0x10);
      }
      else {
        uVar8 = (ulonglong)(iVar7 + 1);
        uVar9 = uVar9 + 0x28;
      }
    } while ((int)uVar8 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x20);
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar5) {
    do {
      uVar3 = uVar6;
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0x18 + uVar9) != 0) &&
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar9),
         plVar1 != (longlong *)0x0)) {
        puVar2 = (ulonglong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
        iVar5 = *(int *)(param_1 + 0x20);
        uVar3 = *puVar2;
      }
      iVar7 = (int)uVar8;
      if (uVar3 == param_2) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>
                  (*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)iVar7 * 0x28);
        iVar5 = *(int *)(param_1 + 0x20);
        iVar4 = (iVar5 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x18)),
                     (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar5 - iVar4) * 0x28),
                     (longlong)iVar4 * 0x28);
          iVar5 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar5 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0x18);
        iVar5 = *(int *)(param_1 + 0x20);
      }
      else {
        uVar8 = (ulonglong)(iVar7 + 1);
        uVar9 = uVar9 + 0x28;
      }
    } while ((int)uVar8 < iVar5);
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    if ((*(int *)(param_1 + 0x40) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
      puVar2 = (ulonglong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
      uVar6 = *puVar2;
    }
    if (uVar6 == param_2) {
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
  }
  return;
}



// FUNCTION 141597730 Replace body=681 status=ok
// SIG undefined Replace(void)

longlong *
FString::Replace(undefined8 *param_1,longlong *param_2,wchar_t *param_3,void *param_4,int param_5)

{
  void *pvVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *_Str;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong local_68;
  longlong local_60;
  int local_58;
  int local_54;
  
  if (((1 < *(int *)(param_1 + 1)) && (param_3 != (wchar_t *)0x0)) && (*param_3 != L'\0')) {
    _Str = (wchar_t *)*param_1;
    local_68 = -1;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_3[lVar6] != L'\0');
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(short *)((longlong)param_4 + lVar8 * 2) != 0);
    iVar4 = 0;
    iVar7 = (int)lVar8;
    local_60 = 0;
    local_54 = 0;
    iVar5 = iVar4;
    while( true ) {
      if (param_5 == 1) {
        pwVar2 = (wchar_t *)TCString<wchar_t>::Stristr();
      }
      else {
        pwVar2 = ::_guard_xfg_dispatch_icall_nop(_Str,param_3);
      }
      if (pwVar2 == (wchar_t *)0x0) break;
      iVar3 = (int)((longlong)pwVar2 - (longlong)_Str >> 1);
      iVar9 = iVar4;
      if (iVar3 != 0) {
        local_58 = (uint)(iVar4 == 0) + iVar4 + iVar3;
        if (iVar5 < local_58) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar4);
          iVar5 = local_54;
        }
        iVar9 = local_58;
        pvVar1 = (void *)(local_60 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,_Str,(longlong)iVar3 * 2);
        *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar1) = 0;
      }
      iVar4 = iVar9;
      if (iVar7 != 0) {
        local_58 = iVar9 + (uint)(iVar9 == 0) + iVar7;
        if (iVar5 < local_58) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar9);
          iVar5 = local_54;
        }
        iVar4 = local_58;
        pvVar1 = (void *)(local_60 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,param_4,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      _Str = pwVar2 + (int)lVar6;
    }
    do {
      local_68 = local_68 + 1;
    } while (_Str[local_68] != L'\0');
    iVar9 = (int)local_68;
    iVar7 = local_54;
    iVar5 = iVar4;
    if (iVar9 != 0) {
      local_58 = iVar4 + (uint)(iVar4 == 0) + iVar9;
      if (local_54 < local_58) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar4);
      }
      iVar7 = local_54;
      iVar5 = local_58;
      pvVar1 = (void *)(local_60 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,_Str,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
    }
    *param_2 = local_60;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
    return param_2;
  }
  FString(param_2,param_1);
  return param_2;
}



// FUNCTION 1415979e0 ReplaceCharWithEscapedChar body=290 status=ok
// SIG undefined ReplaceCharWithEscapedChar(void)

undefined8 *
FString::ReplaceCharWithEscapedChar(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  void *_Src;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  undefined **ppuVar5;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_10;
  iVar2 = local_10 + -1;
  if (local_10 == 0) {
    iVar2 = 0;
  }
  if ((iVar2 < 1) || ((param_3 != (undefined8 *)0x0 && (*(int *)(param_3 + 1) < 1)))) {
    FString(param_2,param_1);
    return param_2;
  }
  _Src = (void *)*param_1;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 * 2);
  }
  ppuVar5 = &PTR_DAT_1464a8220;
  lVar4 = 6;
  do {
    if (param_3 == (undefined8 *)0x0) {
LAB_141597a91:
      ReplaceInline(&local_18,*ppuVar5,ppuVar5[1],1);
    }
    else {
      psVar3 = (short *)*param_3;
      psVar1 = psVar3 + *(int *)(param_3 + 1);
      if (psVar3 != psVar1) {
        do {
          if (*psVar3 == *(short *)*ppuVar5) goto LAB_141597a91;
          psVar3 = psVar3 + 1;
        } while (psVar3 != psVar1);
      }
    }
    ppuVar5 = ppuVar5 + 2;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      *param_2 = local_18;
      *(int *)(param_2 + 1) = local_10;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
      return param_2;
    }
  } while( true );
}



// FUNCTION 141597b10 ReplaceEscapedCharWithChar body=291 status=ok
// SIG undefined ReplaceEscapedCharWithChar(void)

undefined8 *
FString::ReplaceEscapedCharWithChar(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  void *_Src;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  undefined **ppuVar5;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_10;
  iVar2 = local_10 + -1;
  if (local_10 == 0) {
    iVar2 = 0;
  }
  if ((iVar2 < 1) || ((param_3 != (undefined8 *)0x0 && (*(int *)(param_3 + 1) < 1)))) {
    FString(param_2,param_1);
    return param_2;
  }
  _Src = (void *)*param_1;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 * 2);
  }
  ppuVar5 = &PTR_DAT_1464a8270;
  do {
    if (param_3 == (undefined8 *)0x0) {
LAB_141597bc3:
      ReplaceInline(&local_18,ppuVar5[1],*ppuVar5,1);
    }
    else {
      psVar3 = (short *)*param_3;
      psVar1 = psVar3 + *(int *)(param_3 + 1);
      if (psVar3 != psVar1) {
        do {
          if (*psVar3 == *(short *)*ppuVar5) goto LAB_141597bc3;
          psVar3 = psVar3 + 1;
        } while (psVar3 != psVar1);
      }
    }
    ppuVar5 = ppuVar5 + -2;
    if ((longlong)ppuVar5 < 0x1464a8220) {
      *param_2 = local_18;
      *(int *)(param_2 + 1) = local_10;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
      return param_2;
    }
  } while( true );
}



// FUNCTION 141597c40 ReplaceInline body=1061 status=ok
// SIG undefined ReplaceInline(void)

int FString::ReplaceInline(longlong *param_1,wchar_t *param_2,void *param_3,int param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  void *pvVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int local_res8;
  wchar_t *local_50;
  int local_48;
  
  iVar13 = 0;
  local_res8 = 0;
  iVar4 = (int)param_1[1];
  iVar8 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  if ((((0 < iVar8) && (param_2 != (wchar_t *)0x0)) && (*param_2 != L'\0')) &&
     (param_3 != (void *)0x0)) {
    if (param_4 != 1) {
      pwVar5 = param_2;
      do {
        wVar1 = *pwVar5;
        wVar2 = *(wchar_t *)((longlong)pwVar5 + ((longlong)param_3 - (longlong)param_2));
        if (wVar1 != wVar2) break;
        pwVar5 = pwVar5 + 1;
      } while (wVar2 != L'\0');
      if (wVar1 == wVar2) {
        return 0;
      }
    }
    lVar10 = -1;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (param_2[lVar12] != L'\0');
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(short *)((longlong)param_3 + lVar9 * 2) != 0);
    iVar11 = (int)lVar12;
    iVar8 = (int)lVar9;
    if (iVar8 == iVar11) {
      if (param_4 == 1) {
        pwVar5 = (wchar_t *)TCString<wchar_t>::Stristr();
      }
      else {
        pwVar5 = ::_guard_xfg_dispatch_icall_nop((wchar_t *)*param_1,param_2);
      }
      if (pwVar5 != (wchar_t *)0x0) {
        do {
          iVar13 = iVar13 + 1;
          if (0 < (longlong)iVar8) {
            pwVar6 = pwVar5;
            lVar10 = (longlong)iVar8;
            do {
              *pwVar6 = *(wchar_t *)((longlong)pwVar6 + ((longlong)param_3 - (longlong)pwVar5));
              pwVar6 = pwVar6 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          if ((int)param_1[1] == 0) {
            puVar7 = &DAT_143f3eda8;
            iVar4 = 0;
          }
          else {
            puVar7 = (undefined2 *)*param_1;
            iVar4 = (int)param_1[1] + -1;
          }
          if ((longlong)iVar4 <= ((longlong)iVar11 * 2 - (longlong)puVar7) + (longlong)pwVar5 >> 1)
          {
            return iVar13;
          }
          if (param_4 == 1) {
            pwVar5 = (wchar_t *)TCString<wchar_t>::Stristr();
          }
          else {
            pwVar5 = ::_guard_xfg_dispatch_icall_nop(pwVar5 + iVar11,param_2);
          }
        } while (pwVar5 != (wchar_t *)0x0);
      }
    }
    else {
      puVar7 = &DAT_143f3eda8;
      if (iVar4 == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)*param_1;
      }
      if (param_4 == 1) {
        pwVar5 = (wchar_t *)TCString<wchar_t>::Stristr();
      }
      else {
        pwVar5 = ::_guard_xfg_dispatch_icall_nop(pwVar5,param_2);
      }
      if (pwVar5 != (wchar_t *)0x0) {
        local_48 = (int)param_1[1];
        lVar12 = (longlong)local_48;
        if (local_48 != 0) {
          puVar7 = (undefined2 *)*param_1;
        }
        if ((int)((longlong)pwVar5 - (longlong)puVar7 >> 1) != -1) {
          pvVar3 = (void *)*param_1;
          pwVar5 = (wchar_t *)0x0;
          local_50 = (wchar_t *)0x0;
          if (local_48 == 0) {
            iVar8 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
            pwVar5 = local_50;
            ::_guard_xfg_dispatch_icall_nop(local_50,pvVar3,lVar12 * 2);
            iVar8 = (int)param_1[1];
          }
          iVar4 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar4 = 0;
          }
          *(undefined4 *)(param_1 + 1) = 0;
          if (*(int *)((longlong)param_1 + 0xc) != iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
          }
          if (param_4 == 1) {
            pwVar6 = (wchar_t *)TCString<wchar_t>::Stristr();
          }
          else {
            pwVar6 = ::_guard_xfg_dispatch_icall_nop(pwVar5,param_2);
          }
          if (pwVar6 != (wchar_t *)0x0) {
            do {
              local_res8 = local_res8 + 1;
              *pwVar6 = L'\0';
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (pwVar5[lVar12] != L'\0');
              iVar8 = (int)lVar12;
              if (iVar8 != 0) {
                iVar4 = (int)param_1[1];
                iVar13 = (uint)(iVar4 == 0) + iVar4 + iVar8;
                *(int *)(param_1 + 1) = iVar13;
                if (*(int *)((longlong)param_1 + 0xc) < iVar13) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
                }
                pvVar3 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
                ::_guard_xfg_dispatch_icall_nop(pvVar3,pwVar5,(longlong)iVar8 * 2);
                *(undefined2 *)((longlong)pvVar3 + (longlong)iVar8 * 2) = 0;
              }
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (*(short *)((longlong)param_3 + lVar12 * 2) != 0);
              iVar8 = (int)lVar12;
              if (iVar8 != 0) {
                iVar4 = (int)param_1[1];
                iVar13 = (uint)(iVar4 == 0) + iVar4 + iVar8;
                *(int *)(param_1 + 1) = iVar13;
                if (*(int *)((longlong)param_1 + 0xc) < iVar13) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
                }
                pvVar3 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
                ::_guard_xfg_dispatch_icall_nop(pvVar3,param_3,(longlong)iVar8 * 2);
                *(undefined2 *)((longlong)pvVar3 + (longlong)iVar8 * 2) = 0;
              }
              pwVar5 = pwVar6 + iVar11;
              *pwVar6 = *param_2;
              if (param_4 == 1) {
                pwVar6 = (wchar_t *)TCString<wchar_t>::Stristr();
              }
              else {
                pwVar6 = ::_guard_xfg_dispatch_icall_nop(pwVar5,param_2);
              }
            } while (pwVar6 != (wchar_t *)0x0);
          }
          do {
            lVar10 = lVar10 + 1;
          } while (pwVar5[lVar10] != L'\0');
          iVar8 = (int)lVar10;
          if (iVar8 != 0) {
            iVar4 = (int)param_1[1];
            iVar13 = (uint)(iVar4 == 0) + iVar4 + iVar8;
            *(int *)(param_1 + 1) = iVar13;
            if (*(int *)((longlong)param_1 + 0xc) < iVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
            }
            pvVar3 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar3,pwVar5,(longlong)iVar8 * 2);
            *(undefined2 *)((longlong)pvVar3 + (longlong)iVar8 * 2) = 0;
          }
          iVar13 = local_res8;
          if (local_50 != (wchar_t *)0x0) {
            FMemory::Free(local_50);
          }
        }
      }
    }
  }
  return iVar13;
}



// FUNCTION 141598070 ReplaceQuotesWithEscapedQuotes body=419 status=ok
// SIG undefined ReplaceQuotesWithEscapedQuotes(void)

longlong * FString::ReplaceQuotesWithEscapedQuotes(undefined8 *param_1,longlong *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  longlong local_28;
  int local_20;
  int local_1c;
  
  psVar8 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*param_1;
  }
  pwVar4 = ::_guard_xfg_dispatch_icall_nop(pwVar4,L"\"");
  if (pwVar4 != (wchar_t *)0x0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    if ((int)((longlong)pwVar4 - (longlong)puVar6 >> 1) != -1) {
      local_1c = 0;
      lVar7 = 0;
      local_28 = 0;
      iVar10 = 0;
      if (*(int *)(param_1 + 1) != 0) {
        psVar8 = (short *)*param_1;
      }
      bVar3 = false;
      sVar2 = *psVar8;
      iVar5 = 0;
      while (sVar2 != 0) {
        if (bVar3) {
          bVar3 = false;
        }
        else if (sVar2 == 0x5c) {
          bVar3 = true;
        }
        else if (sVar2 == 0x22) {
          iVar9 = iVar5 + -1;
          if (iVar5 < 1) {
            iVar9 = 0;
          }
          local_20 = (iVar5 < 1) + 1 + iVar5;
          if (iVar10 < local_20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar5);
            lVar7 = local_28;
            iVar10 = local_1c;
          }
          *(undefined4 *)(lVar7 + (longlong)iVar9 * 2) = 0x5c;
          iVar5 = local_20;
        }
        sVar2 = *psVar8;
        local_20 = iVar5;
        if (sVar2 != 0) {
          iVar9 = iVar5 + -1;
          if (iVar5 < 1) {
            iVar9 = 0;
          }
          local_20 = (iVar5 < 1) + 1 + iVar5;
          if (iVar10 < local_20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar5);
            lVar7 = local_28;
            iVar10 = local_1c;
          }
          *(short *)(lVar7 + (longlong)iVar9 * 2) = sVar2;
          *(undefined2 *)(lVar7 + 2 + (longlong)iVar9 * 2) = 0;
        }
        psVar1 = psVar8 + 1;
        psVar8 = psVar8 + 1;
        iVar5 = local_20;
        sVar2 = *psVar1;
      }
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = iVar5;
      *(int *)((longlong)param_2 + 0xc) = iVar10;
      return param_2;
    }
  }
  FString(param_2,param_1);
  return param_2;
}



// FUNCTION 141598220 RequestQuit body=89 status=ok
// SIG undefined RequestQuit(void)

void FNamedTaskThread::RequestQuit(longlong param_1,int param_2)

{
  if (*(longlong **)(param_1 + 1000) != (longlong *)0x0) {
    if (param_2 == -1) {
      *(undefined1 *)(param_1 + 0x3e5) = 1;
      *(undefined1 *)(param_1 + 0x79d) = 1;
      (**(code **)(**(longlong **)(param_1 + 1000) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014159825d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x10))();
      return;
    }
    *(undefined1 *)((longlong)param_2 * 0x3b8 + 0x3e4 + param_1) = 1;
  }
  return;
}



// FUNCTION 1415982c0 Reverse body=116 status=ok
// SIG undefined Reverse(void)

undefined8 * FString::Reverse(undefined8 param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  
  FString(param_2,param_1);
  iVar2 = *(int *)(param_2 + 1);
  iVar5 = iVar2 + -1;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = -1;
    iVar3 = -1;
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    puVar4 = (undefined2 *)*param_2;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    puVar6 = puVar4 + (longlong)iVar5 + -1;
    do {
      uVar1 = *puVar4;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + -1;
    } while (puVar4 < puVar6);
  }
  return param_2;
}



// FUNCTION 141598340 ReverseString body=92 status=ok
// SIG undefined ReverseString(void)

void FString::ReverseString(undefined8 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar2 = *(int *)(param_1 + 1);
  iVar5 = iVar2 + -1;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = -1;
    iVar3 = -1;
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    puVar4 = (undefined2 *)*param_1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    puVar6 = puVar4 + (longlong)iVar5 + -1;
    do {
      uVar1 = *puVar4;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + -1;
    } while (puVar4 < puVar6);
  }
  return;
}



// FUNCTION 1415983a0 RightPad body=479 status=ok
// SIG undefined RightPad(void)

undefined8 * FString::RightPad(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *_Src_00;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  
  puVar6 = (undefined2 *)0x0;
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar3 = iVar7;
  }
  param_3 = param_3 - iVar3;
  if (0 < param_3) {
    local_30 = param_3 + 1;
    local_38 = (undefined2 *)0x0;
    local_2c = 0;
    _Src_00 = puVar6;
    if (0 < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      _Src_00 = local_38;
    }
    if (0 < param_3) {
      puVar5 = _Src_00;
      for (lVar2 = (longlong)param_3; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = 0x20;
        puVar5 = puVar5 + 1;
      }
    }
    _Src_00[param_3] = 0;
    iVar3 = *(int *)(param_1 + 1);
    if (iVar3 < 2) {
      *param_2 = _Src_00;
      *(int *)(param_2 + 1) = local_30;
      *(int *)((longlong)param_2 + 0xc) = local_2c;
      return param_2;
    }
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = iVar7;
    }
    if ((iVar3 != 0) || (iVar1 = 1, iVar4 == 0)) {
      iVar1 = iVar7;
    }
    _Src = (void *)*param_1;
    local_38 = (undefined2 *)0x0;
    local_30 = iVar3;
    if ((iVar3 == 0) && (iVar1 + iVar4 == 0)) {
      local_2c = 0;
      iVar3 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3 + iVar1 + iVar4,0);
      puVar6 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
      iVar3 = local_30;
    }
    iVar7 = iVar3;
    iVar1 = local_2c;
    if (iVar4 != 0) {
      local_30 = iVar3 + (uint)(iVar3 == 0) + iVar4;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
        puVar6 = local_38;
      }
      iVar1 = local_2c;
      iVar7 = local_30;
      ::_guard_xfg_dispatch_icall_nop
                (puVar6 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)),_Src_00,(longlong)iVar4 * 2);
      (puVar6 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)))[iVar4] = 0;
    }
    *param_2 = puVar6;
    *(int *)(param_2 + 1) = iVar7;
    *(int *)((longlong)param_2 + 0xc) = iVar1;
    if (_Src_00 != (undefined2 *)0x0) {
      FMemory::Free(_Src_00);
    }
    return param_2;
  }
  FString(param_2,param_1);
  return param_2;
}



// FUNCTION 141598580 Run body=24 status=ok
// SIG undefined Run(void)

undefined8 FTaskThreadBase::Run(longlong *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,0);
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  return 0;
}



// FUNCTION 1415985a0 SanitizeFloat body=565 status=ok
// SIG undefined SanitizeFloat(void)

undefined8 * FString::SanitizeFloat(undefined8 *param_1,double param_2,int param_3)

{
  wint_t *pwVar1;
  bool bVar2;
  wint_t _C;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  wint_t *pwVar12;
  wint_t *pwVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  wint_t *local_28;
  int local_20;
  int local_1c;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = SUB84(param_2,0);
  if (param_2 == 0.0) {
    uVar14 = 0;
    uVar15 = 0;
  }
  PrintfImpl(&local_28,&DAT_144c9218c,CONCAT44(uVar15,uVar14));
  iVar6 = local_20;
  pwVar13 = local_28;
  if (1 < local_20) {
    _C = *local_28;
    if ((_C == 0x2d) || (pwVar12 = local_28, _C == 0x2b)) {
      _C = local_28[1];
      pwVar12 = local_28 + 1;
    }
    bVar2 = false;
    while (_C != 0) {
      if (_C == 0x2e) {
        if (bVar2) goto LAB_1415987aa;
        bVar2 = true;
      }
      else {
        iVar4 = iswdigit(_C);
        if (iVar4 == 0) goto LAB_1415987aa;
      }
      pwVar1 = pwVar12 + 1;
      pwVar12 = pwVar12 + 1;
      _C = *pwVar1;
    }
    iVar9 = -1;
    iVar3 = 0;
    iVar4 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar4 = iVar3;
    }
    iVar4 = iVar4 + -1;
    lVar5 = (longlong)iVar4;
    iVar7 = -1;
    iVar10 = -1;
    if (-1 < iVar4) {
      do {
        iVar10 = iVar9;
        if (pwVar13[lVar5] == 0x2e) {
          iVar7 = iVar4;
          iVar10 = iVar4;
          if (iVar4 <= iVar9) {
            iVar10 = iVar9;
          }
          break;
        }
        if ((iVar9 == -1) && (pwVar13[lVar5] != 0x30)) {
          iVar10 = iVar4 + 1;
        }
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -1;
        iVar7 = -1;
        iVar9 = iVar10;
      } while (-1 < lVar5);
    }
    iVar4 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar4 = iVar3;
    }
    if (iVar4 - iVar10 != 0) {
      iVar6 = iVar6 - (iVar4 - iVar10);
      local_20 = iVar6;
      if (iVar6 - iVar10 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (pwVar13 + iVar10,pwVar13 + iVar4,(longlong)(iVar6 - iVar10) * 2);
      }
    }
    if (0 < param_3) {
      if (iVar10 == iVar7) {
        iVar4 = iVar6 + -1;
        if (iVar6 < 1) {
          iVar4 = iVar3;
        }
        local_20 = (iVar6 < 1) + 1 + iVar6;
        if (local_1c < local_20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
          pwVar13 = local_28;
        }
        (pwVar13 + iVar4)[0] = 0x2e;
        (pwVar13 + iVar4)[1] = 0;
        iVar6 = local_20;
      }
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = iVar3;
      }
      uVar11 = param_3 + 1 + (iVar7 - iVar4);
      if (0 < (int)uVar11) {
        iVar4 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar4 = iVar3;
        }
        if (local_1c < (int)(uVar11 + 1 + iVar4)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
          pwVar13 = local_28;
          iVar6 = local_20;
        }
        if (0 < (int)uVar11) {
          uVar8 = (ulonglong)uVar11;
          do {
            iVar4 = iVar6 + -1;
            if (iVar6 < 1) {
              iVar4 = iVar3;
            }
            local_20 = (iVar6 < 1) + 1 + iVar6;
            iVar6 = local_20;
            if (local_1c < local_20) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
              pwVar13 = local_28;
              iVar6 = local_20;
            }
            (pwVar13 + iVar4)[0] = 0x30;
            (pwVar13 + iVar4)[1] = 0;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
    }
  }
LAB_1415987aa:
  *param_1 = pwVar13;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(int *)(param_1 + 1) = iVar6;
  return param_1;
}



// FUNCTION 1415987e0 SetTaskThreadPriority body=317 status=ok
// SIG undefined SetTaskThreadPriority(void)

void SetTaskThreadPriority(undefined8 *param_1)

{
  wchar_t _C;
  longlong lVar1;
  wint_t wVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  wint_t *pwVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  
  puVar7 = &DAT_143f3eda8;
  iVar8 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 1) != 0) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)*param_1;
    }
    pwVar4 = L"abovenormal";
    do {
      _C = *(wchar_t *)((longlong)(puVar10 + -0xa264a718) + (longlong)pwVar4);
      if ((_C == L'\0') && (*pwVar4 == L'\0')) goto LAB_14159886b;
      if (_C != *pwVar4) {
        wVar2 = towlower(_C);
        wVar3 = towlower(*pwVar4);
        if (wVar2 != wVar3) goto LAB_141598861;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
LAB_141598873:
  if (*(int *)(param_1 + 1) != 0) {
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar7 = *(undefined2 **)*param_1;
    }
    pwVar5 = &DAT_144c94f18;
    do {
      wVar2 = *(wint_t *)((longlong)(puVar7 + -0xa264a78c) + (longlong)pwVar5);
      if ((wVar2 == 0) && (*pwVar5 == 0)) goto LAB_1415988ca;
      if (wVar2 != *pwVar5) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar5);
        if (wVar2 != wVar3) goto LAB_1415988c0;
      }
      pwVar5 = pwVar5 + 1;
    } while( true );
  }
LAB_1415988d0:
  lVar1 = DAT_1468a80e8;
  if (0 < *(int *)(DAT_1468a80e8 + 0x7b8)) {
    puVar6 = (undefined8 *)(DAT_1468a80e8 + 0x10);
    do {
      if (*(int *)(lVar1 + 0x7cc) < iVar8) {
        (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,uVar9);
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar8 < *(int *)(lVar1 + 0x7b8));
  }
  return;
LAB_141598861:
  if (wVar2 == wVar3) {
LAB_14159886b:
    uVar9 = 1;
    goto LAB_1415988d0;
  }
  goto LAB_141598873;
LAB_1415988c0:
  if (wVar2 == wVar3) {
LAB_1415988ca:
    uVar9 = 2;
  }
  goto LAB_1415988d0;
}



// FUNCTION 141598920 FUN_141598920 body=644 status=ok
// SIG undefined FUN_141598920(void)

void FUN_141598920(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_141598aea;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_141598aea:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141598bb0 FUN_141598bb0 body=660 status=ok
// SIG undefined FUN_141598bb0(void)

void FUN_141598bb0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  uVar2 = 0x10ff;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar2 = 0xff;
  }
  iVar10 = 0;
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar11 = iVar10;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_a8);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar8 = uVar6 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar8 & 1);
      local_70 = param_1;
      uVar3 = FUN_14043a6c0(&local_78);
      while (uVar3 != 0) {
        uVar7 = (ulonglong)uVar3;
        uVar9 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar9 >> 0x1a < uVar8) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar3 == 0) {
          uVar8 = 0;
          uVar7 = uVar8;
        }
        else {
          uVar8 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar8 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar12 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar12) {
          *(ulonglong *)(lVar5 + 8) = uVar9 | uVar7;
        }
        UNLOCK();
        if (bVar12) {
          bVar12 = true;
          goto LAB_141598d8a;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar8 = uVar6 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar8 & 1);
        uVar3 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar12 = false;
LAB_141598d8a:
      iVar4 = iVar11 + 1;
      if (bVar12) {
        iVar4 = iVar11;
      }
      local_a8 = local_a8 + 8;
      iVar10 = iVar10 + 1;
      iVar11 = iVar4;
    } while (iVar10 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar10 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar10 == (uint)local_res20 + iVar4) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141598e50 FUN_141598e50 body=647 status=ok
// SIG undefined FUN_141598e50(void)

void FUN_141598e50(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = 0xff;
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_14159901a;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_14159901a:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 1415990e0 FUN_1415990e0 body=644 status=ok
// SIG undefined FUN_1415990e0(void)

void FUN_1415990e0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x60);
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_1415992aa;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_1415992aa:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141599370 FUN_141599370 body=647 status=ok
// SIG undefined FUN_141599370(void)

void FUN_141599370(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = 0xaff;
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_14159953a;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_14159953a:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141599600 FUN_141599600 body=644 status=ok
// SIG undefined FUN_141599600(void)

void FUN_141599600(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_1415997ca;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_1415997ca:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141599890 FUN_141599890 body=647 status=ok
// SIG undefined FUN_141599890(void)

void FUN_141599890(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 8) = 0xff;
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_141599a5a;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_141599a5a:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141599b20 FUN_141599b20 body=647 status=ok
// SIG undefined FUN_141599b20(void)

void FUN_141599b20(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 8) = 0x102;
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_141599cea;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_141599cea:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 141599db0 FUN_141599db0 body=644 status=ok
// SIG undefined FUN_141599db0(void)

void FUN_141599db0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_b8 [2];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
  iVar3 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_90 = local_res8;
    local_98 = &LAB_14043a650;
    local_a8 = 0;
    iVar10 = iVar9;
    do {
      local_78 = &local_88;
      local_68 = local_b8;
      lVar4 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar4 = local_res10;
      }
      local_res8[0] = 0;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = (undefined4)uStack_90;
      uStack_7c = uStack_90._4_4_;
      local_b8[0] = 0;
      lVar4 = *(longlong *)(lVar4 + local_a8);
      LOCK();
      uVar5 = *(ulonglong *)(lVar4 + 8);
      if (uVar5 == 0) {
        *(ulonglong *)(lVar4 + 8) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      uVar7 = uVar5 >> 0x1a;
      local_b0 = (ulonglong)((uint)uVar7 & 1);
      local_70 = param_1;
      uVar2 = FUN_14043a6c0(&local_78);
      while (uVar2 != 0) {
        uVar6 = (ulonglong)uVar2;
        uVar8 = (uVar5 & 0xfffffffffc000000) + 0x8000000;
        if (uVar8 >> 0x1a < uVar7) {
          FUN_1416b1760(0x3a83126f);
        }
        if (uVar2 == 0) {
          uVar7 = 0;
          uVar6 = uVar7;
        }
        else {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar7 + 0x10) = (uint)uVar5 & 0x3ffffff;
        LOCK();
        bVar11 = uVar5 == *(ulonglong *)(lVar4 + 8);
        if (bVar11) {
          *(ulonglong *)(lVar4 + 8) = uVar8 | uVar6;
        }
        UNLOCK();
        if (bVar11) {
          bVar11 = true;
          goto LAB_141599f7a;
        }
        LOCK();
        uVar5 = *(ulonglong *)(lVar4 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(lVar4 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        uVar7 = uVar5 >> 0x1a;
        local_b0 = (ulonglong)((uint)uVar7 & 1);
        uVar2 = FUN_14043a6c0(&local_78);
      }
      if (local_b8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar11 = false;
LAB_141599f7a:
      iVar3 = iVar10 + 1;
      if (bVar11) {
        iVar3 = iVar10;
      }
      local_a8 = local_a8 + 8;
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    } while (iVar9 < *(int *)(local_res10 + 0x28));
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar3);
  UNLOCK();
  if (iVar9 == (uint)local_res20 + iVar3) {
    (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,param_1,*(undefined4 *)(param_1 + 8),local_res18);
  }
  return;
}



// FUNCTION 14159a040 Shutdown body=43 status=ok
// SIG undefined Shutdown(void)

void FTaskGraphInterface::Shutdown(void)

{
  if (DAT_1468a80e8 != (longlong *)0x0) {
    (**(code **)(*DAT_1468a80e8 + 8))(DAT_1468a80e8,1);
  }
  DAT_1468a80e8 = (longlong *)0x0;
  return;
}



// FUNCTION 14159a070 StartsWith body=143 status=ok
// SIG undefined StartsWith(void)

ulonglong FString::StartsWith(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar4 = iVar1 + -1;
  if (param_3 == 1) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) goto LAB_14159a0f8;
    pwVar2 = L"";
    if (iVar1 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_2;
    }
    if (*(int *)(param_1 + 1) != 0) {
      pwVar2 = (wchar_t *)*param_1;
    }
    iVar1 = _wcsnicmp(pwVar2,pwVar3,(longlong)iVar4);
    param_1 = (undefined8 *)CONCAT44(extraout_var,iVar1);
  }
  else {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) goto LAB_14159a0f8;
    pwVar2 = L"";
    if (iVar1 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_2;
    }
    if (*(int *)(param_1 + 1) != 0) {
      pwVar2 = (wchar_t *)*param_1;
    }
    iVar1 = wcsncmp(pwVar2,pwVar3,(longlong)iVar4);
    param_1 = (undefined8 *)CONCAT44(extraout_var_00,iVar1);
  }
  if ((int)param_1 == 0) {
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
LAB_14159a0f8:
  return (ulonglong)param_1 & 0xffffffffffffff00;
}



// FUNCTION 14159a100 StartsWith body=153 status=ok
// SIG undefined StartsWith(void)

ulonglong FString::StartsWith(undefined8 *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  wchar_t *_Str1;
  
  if (param_3 == 1) {
    if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) goto LAB_14159a192;
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != L'\0');
    if (*(int *)(param_1 + 1) == 0) {
      iVar1 = _wcsnicmp(L"",param_2,(longlong)(int)lVar2);
      in_RAX = CONCAT44(extraout_var_00,iVar1);
    }
    else {
      iVar1 = _wcsnicmp((wchar_t *)*param_1,param_2,(longlong)(int)lVar2);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
  }
  else {
    if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) goto LAB_14159a192;
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != L'\0');
    if (*(int *)(param_1 + 1) == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)*param_1;
    }
    iVar1 = wcsncmp(_Str1,param_2,(longlong)(int)lVar2);
    in_RAX = CONCAT44(extraout_var_01,iVar1);
  }
  if ((int)in_RAX == 0) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_14159a192:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14159a1a0 FUN_14159a1a0 body=44 status=ok
// SIG undefined FUN_14159a1a0(void)

void FUN_14159a1a0(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1790);
  if (lVar1 != 0) {
    FUN_14158bd50(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14159a1e0 FUN_14159a1e0 body=4672 status=ok
// SIG undefined FUN_14159a1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014159a7cc) */
/* WARNING: Removing unreachable block (ram,0x00014159a7dc) */
/* WARNING: Removing unreachable block (ram,0x00014159a4ab) */
/* WARNING: Removing unreachable block (ram,0x00014159a4bb) */
/* WARNING: Removing unreachable block (ram,0x00014159b127) */
/* WARNING: Removing unreachable block (ram,0x00014159b138) */

void FUN_14159a1e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  wchar_t _C;
  longlong lVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong lVar15;
  undefined2 *puVar16;
  undefined1 auStack_588 [32];
  int local_568;
  undefined4 local_564;
  undefined1 local_560 [8];
  int local_558 [2];
  undefined8 local_550;
  longlong local_548;
  longlong local_540;
  longlong local_538;
  longlong local_530;
  longlong local_528;
  longlong local_520;
  longlong local_518;
  undefined8 local_510;
  longlong local_508;
  longlong local_500;
  longlong *local_4f8;
  longlong *local_4f0;
  longlong *local_4e8;
  longlong local_4e0;
  int *local_4d8;
  undefined4 *local_4d0;
  code *local_4c8;
  int **ppiStack_4c0;
  undefined1 *local_4b8;
  longlong **pplStack_4b0;
  undefined1 *local_4a8;
  longlong **pplStack_4a0;
  undefined1 *local_498;
  longlong **pplStack_490;
  int *local_488;
  undefined4 *local_480;
  code *local_478;
  int **ppiStack_470;
  undefined1 *local_468;
  undefined1 *puStack_460;
  int *local_458;
  undefined4 *local_450;
  code *local_448;
  int **ppiStack_440;
  int *local_438;
  undefined4 *local_430;
  code *local_428;
  int **ppiStack_420;
  int *local_418;
  undefined4 *local_410;
  code *local_408;
  int **ppiStack_400;
  int *local_3f8;
  undefined4 *local_3f0;
  code *local_3e8;
  int **ppiStack_3e0;
  int *local_3d8;
  undefined4 *local_3d0;
  LARGE_INTEGER local_3c8;
  LARGE_INTEGER local_3c0;
  LARGE_INTEGER local_3b8;
  LARGE_INTEGER local_3b0;
  LARGE_INTEGER local_3a8;
  LARGE_INTEGER local_3a0;
  LARGE_INTEGER local_398;
  LARGE_INTEGER local_390;
  LARGE_INTEGER local_388;
  LARGE_INTEGER local_380;
  LARGE_INTEGER local_378;
  LARGE_INTEGER local_370;
  LARGE_INTEGER local_368;
  LARGE_INTEGER local_360;
  LARGE_INTEGER local_358;
  LARGE_INTEGER local_350;
  LARGE_INTEGER local_348;
  LARGE_INTEGER local_340;
  undefined8 local_338;
  undefined8 local_330;
  LARGE_INTEGER local_320;
  LARGE_INTEGER local_318;
  LARGE_INTEGER local_310;
  LARGE_INTEGER local_308;
  LARGE_INTEGER local_300;
  LARGE_INTEGER local_2f8;
  LARGE_INTEGER local_2f0;
  LARGE_INTEGER local_2e8;
  LARGE_INTEGER local_2e0;
  LARGE_INTEGER local_2d8;
  LARGE_INTEGER local_2d0;
  LARGE_INTEGER local_2c8;
  LARGE_INTEGER local_2c0;
  LARGE_INTEGER local_2b8;
  LARGE_INTEGER local_2b0 [2];
  LARGE_INTEGER local_2a0;
  LARGE_INTEGER local_298;
  LARGE_INTEGER local_290;
  LARGE_INTEGER local_288 [2];
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  LARGE_INTEGER local_268;
  LARGE_INTEGER local_260;
  LARGE_INTEGER local_258;
  LARGE_INTEGER local_250;
  LARGE_INTEGER local_248 [2];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  longlong local_120 [4];
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0 [4];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0 [4];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90 [4];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60 [4];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  longlong *plVar14;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_588;
  plVar14 = (longlong *)0x0;
  local_558[0] = 0;
  lVar7 = FUN_1415dcd20();
  if (lVar7 != 0) {
    FUN_1415e70c0(lVar7);
  }
  local_568 = 0;
  local_564 = 0;
  cVar3 = FUN_1415bac00();
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 1) == 1) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = *(undefined2 **)*param_1;
      }
      pwVar13 = L"infinite";
      do {
        _C = *(wchar_t *)((longlong)pwVar13 + (longlong)(puVar16 + -0xa2649a10));
        if ((_C == L'\0') && (*pwVar13 == L'\0')) {
          do {
            QueryPerformanceCounter(&local_2c8);
            local_4d8 = &local_568;
            local_4c8 = UE4Function_Private::
                        TFunctionRefCaller<<lambda_3ad33dfaaba89c9916be9600dca62930>,void___cdecl(int)>
                        ::Call;
            local_4d0 = &local_564;
            ppiStack_4c0 = &local_4d8;
            local_238 = 0x41590ec0;
            uStack_234 = 1;
            uStack_230 = ppiStack_4c0;
            FUN_1406a7b10(1000,&local_238,0);
            QueryPerformanceCounter(&local_2c0);
            (**(code **)(*DAT_1468a80e8 + 0x30))(DAT_1468a80e8,0x102);
            QueryPerformanceCounter(&local_2b8);
          } while( true );
        }
        if (_C != *pwVar13) {
          wVar4 = towlower(_C);
          wVar5 = towlower(*pwVar13);
          if (wVar4 != wVar5) break;
        }
        pwVar13 = pwVar13 + 1;
      } while( true );
    }
    QueryPerformanceCounter(local_2b0);
    local_100 = (longlong *)0x0;
    local_f8 = 0;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
              (local_120,1000);
    lVar7 = 1000;
    do {
      plVar8 = TlsGetValue(DAT_1468a7c78);
      if (plVar8 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        plVar8 = plVar14;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar8 = plVar9;
        }
        TlsSetValue(DAT_1468a7c78,plVar8);
      }
      plVar9 = (longlong *)plVar8[1];
      if (plVar9 == (longlong *)0x0) {
        if (*plVar8 == 0) {
          lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
          plVar8[1] = lVar11;
          if (lVar11 == 0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar11 = 0x1f;
            do {
              puVar1 = puVar10 + 0x20;
              *puVar10 = puVar1;
              lVar11 = lVar11 + -1;
              puVar10 = puVar1;
            } while (lVar11 != 0);
            *puVar1 = 0;
          }
        }
        else {
          plVar8[1] = *plVar8;
          *plVar8 = 0;
        }
        plVar9 = (longlong *)plVar8[1];
        iVar6 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar6 = (int)plVar8[2];
      }
      plVar8[1] = *plVar9;
      *(int *)(plVar8 + 2) = iVar6 + -1;
      plVar8 = (longlong *)FUN_1415914c0(&local_520);
      lVar11 = *plVar8;
      *plVar8 = 0;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144c95808;
      *(undefined1 *)((longlong)plVar9 + 0x14) = 0;
      plVar9[3] = lVar11;
      local_550 = 0;
      if (local_520 != 0) {
        FGraphEvent::Release();
      }
      *(undefined4 *)(plVar9 + 2) = 0xff;
      lVar11 = plVar9[3];
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
        UNLOCK();
      }
      local_518 = lVar11;
      FUN_141599db0(plVar9,0,2,1);
      lVar15 = (longlong)(int)local_f8;
      iVar6 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,iVar6);
      if (local_f8._4_4_ < iVar6) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_120);
      }
      plVar8 = local_120;
      if (local_100 != (longlong *)0x0) {
        plVar8 = local_100;
      }
      plVar8[lVar15] = lVar11;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    QueryPerformanceCounter(&local_2a0);
    plVar8 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_198,local_120,2);
    *(undefined4 *)(*plVar8 + 0x10) = 0xff;
    lVar7 = *plVar8;
    lVar2 = plVar8[2];
    lVar11 = plVar8[1];
    lVar15 = *(longlong *)(lVar7 + 0x18);
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
      UNLOCK();
    }
    local_548 = lVar15;
    FUN_141599db0(lVar7,lVar11,(int)lVar2,1);
    QueryPerformanceCounter(&local_298);
    FTaskGraphInterface::WaitUntilTaskCompletes(DAT_1468a80e8,&local_548,0x102);
    QueryPerformanceCounter(&local_290);
    if (lVar15 != 0) {
      FGraphEvent::Release(lVar15);
    }
    plVar8 = local_120;
    iVar6 = (int)local_f8;
    if (local_100 != (longlong *)0x0) {
      plVar8 = local_100;
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_100 != (longlong *)0x0) {
      FMemory::Free();
    }
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(local_288);
    local_d0 = (longlong *)0x0;
    local_c8 = 0;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
              (local_f0,1000);
    lVar7 = 1000;
    do {
      plVar8 = TlsGetValue(DAT_1468a7c78);
      if (plVar8 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        plVar8 = plVar14;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar8 = plVar9;
        }
        TlsSetValue(DAT_1468a7c78,plVar8);
      }
      plVar9 = (longlong *)plVar8[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar8;
        if (plVar9 == (longlong *)0x0) {
          uVar12 = FUN_141594c40(&DAT_1468a7c80);
          plVar9 = plVar14;
          if (uVar12 != 0) {
            plVar9 = *(longlong **)
                      ((&DAT_1468a81f8)[uVar12 >> 0xe] + 8 + (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FLockFreeLinkPolicy::FreeLockFreeLink(uVar12);
          }
          plVar8[1] = (longlong)plVar9;
          if (plVar9 == (longlong *)0x0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar11 = 0x1f;
            do {
              puVar1 = puVar10 + 0x20;
              *puVar10 = puVar1;
              lVar11 = lVar11 + -1;
              puVar10 = puVar1;
            } while (lVar11 != 0);
            *puVar1 = 0;
            plVar9 = (longlong *)plVar8[1];
          }
          *(undefined4 *)(plVar8 + 2) = 0x20;
          iVar6 = 0x20;
        }
        else {
          plVar8[1] = (longlong)plVar9;
          iVar6 = 0x20;
          *plVar8 = 0;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
      }
      else {
        iVar6 = (int)plVar8[2];
      }
      plVar8[1] = *plVar9;
      *(int *)(plVar8 + 2) = iVar6 + -1;
      plVar8 = (longlong *)FUN_1415914c0(&local_508);
      lVar11 = *plVar8;
      *plVar8 = 0;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144c95498;
      *(undefined1 *)(plVar9 + 5) = 0;
      plVar9[6] = lVar11;
      local_510 = 0;
      if (local_508 != 0) {
        FGraphEvent::Release();
      }
      *(undefined4 *)(plVar9 + 4) = 1000;
      plVar9[2] = (longlong)&local_568;
      plVar9[3] = (longlong)&local_564;
      lVar11 = plVar9[6];
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
        UNLOCK();
      }
      local_500 = lVar11;
      FUN_141599890(plVar9,0,2,1);
      lVar15 = (longlong)(int)local_c8;
      iVar6 = (int)local_c8 + 1;
      local_c8 = CONCAT44(local_c8._4_4_,iVar6);
      if (local_c8._4_4_ < iVar6) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_f0);
      }
      plVar8 = local_f0;
      if (local_d0 != (longlong *)0x0) {
        plVar8 = local_d0;
      }
      plVar8[lVar15] = lVar11;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    QueryPerformanceCounter(&local_278);
    plVar8 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_180,local_f0,2);
    *(undefined4 *)(*plVar8 + 0x10) = 0xff;
    lVar7 = *plVar8;
    lVar2 = plVar8[2];
    lVar11 = plVar8[1];
    lVar15 = *(longlong *)(lVar7 + 0x18);
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
      UNLOCK();
    }
    local_540 = lVar15;
    FUN_141599db0(lVar7,lVar11,(int)lVar2,1);
    QueryPerformanceCounter(&local_270);
    FTaskGraphInterface::WaitUntilTaskCompletes(DAT_1468a80e8,&local_540,0x102);
    QueryPerformanceCounter(&local_268);
    if (lVar15 != 0) {
      FGraphEvent::Release(lVar15);
    }
    plVar8 = local_f0;
    iVar6 = (int)local_c8;
    if (local_d0 != (longlong *)0x0) {
      plVar8 = local_d0;
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_d0 != (longlong *)0x0) {
      FMemory::Free();
    }
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_260);
    local_a0 = (longlong *)0x0;
    local_98 = 1000;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_c0);
    plVar8 = local_c0;
    if (local_a0 != (longlong *)0x0) {
      plVar8 = local_a0;
    }
    _guard_xfg_dispatch_icall_nop(plVar8,0,8000);
    local_4f8 = local_c0;
    pplStack_4b0 = &local_4f8;
    local_4b8 = &LAB_141590f40;
    local_228 = 0x41590f40;
    uStack_224 = 1;
    uStack_220 = pplStack_4b0;
    FUN_1406a7b10(1000,&local_228,0);
    QueryPerformanceCounter(&local_258);
    plVar8 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_168,local_c0,2);
    *(undefined4 *)(*plVar8 + 0x10) = 0xff;
    lVar7 = *plVar8;
    lVar2 = plVar8[2];
    lVar11 = plVar8[1];
    lVar15 = *(longlong *)(lVar7 + 0x18);
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
      UNLOCK();
    }
    local_538 = lVar15;
    FUN_141599db0(lVar7,lVar11,(int)lVar2,1);
    QueryPerformanceCounter(&local_250);
    FTaskGraphInterface::WaitUntilTaskCompletes(DAT_1468a80e8,&local_538,0x102);
    QueryPerformanceCounter(local_248);
    if (lVar15 != 0) {
      FGraphEvent::Release(lVar15);
    }
    plVar8 = local_c0;
    iVar6 = (int)local_98;
    if (local_a0 != (longlong *)0x0) {
      plVar8 = local_a0;
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_a0 != (longlong *)0x0) {
      FMemory::Free();
    }
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_3c8);
    local_70 = (longlong *)0x0;
    local_68 = 10;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_90);
    plVar8 = local_90;
    if (local_70 != (longlong *)0x0) {
      plVar8 = local_70;
    }
    _guard_xfg_dispatch_icall_nop(plVar8,0,0x50);
    local_4f0 = local_90;
    pplStack_4a0 = &local_4f0;
    local_4a8 = &LAB_141590d90;
    local_218 = 0x41590d90;
    uStack_214 = 1;
    uStack_210 = pplStack_4a0;
    FUN_1406a7b10(10,&local_218);
    QueryPerformanceCounter(&local_3c0);
    plVar8 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_150,local_90,2);
    *(undefined4 *)(*plVar8 + 0x10) = 0xff;
    lVar7 = *plVar8;
    lVar2 = plVar8[2];
    lVar11 = plVar8[1];
    lVar15 = *(longlong *)(lVar7 + 0x18);
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
      UNLOCK();
    }
    local_530 = lVar15;
    FUN_141599db0(lVar7,lVar11,(int)lVar2,1);
    QueryPerformanceCounter(&local_3b8);
    FTaskGraphInterface::WaitUntilTaskCompletes(DAT_1468a80e8,&local_530,0x102);
    QueryPerformanceCounter(&local_3b0);
    if (lVar15 != 0) {
      FGraphEvent::Release(lVar15);
    }
    plVar8 = local_90;
    iVar6 = (int)local_68;
    if (local_70 != (longlong *)0x0) {
      plVar8 = local_70;
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_70 != (longlong *)0x0) {
      FMemory::Free();
    }
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_3a8);
    local_40 = (longlong *)0x0;
    local_38 = 100;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_60);
    plVar8 = local_60;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    _guard_xfg_dispatch_icall_nop(plVar8,0,800);
    local_4e8 = local_60;
    pplStack_490 = &local_4e8;
    local_498 = &LAB_141590d80;
    local_208 = 0x41590d80;
    uStack_204 = 1;
    uStack_200 = pplStack_490;
    FUN_1406a7b10(100,&local_208);
    QueryPerformanceCounter(&local_3a0);
    plVar8 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_138,local_60,2);
    *(undefined4 *)(*plVar8 + 0x10) = 0xff;
    lVar7 = *plVar8;
    lVar2 = plVar8[2];
    lVar11 = plVar8[1];
    lVar15 = *(longlong *)(lVar7 + 0x18);
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
      UNLOCK();
    }
    local_528 = lVar15;
    FUN_141599db0(lVar7,lVar11,(int)lVar2,1);
    QueryPerformanceCounter(&local_398);
    FTaskGraphInterface::WaitUntilTaskCompletes(DAT_1468a80e8,&local_528,0x102);
    QueryPerformanceCounter(&local_390);
    if (lVar15 != 0) {
      FGraphEvent::Release(lVar15);
    }
    plVar8 = local_60;
    iVar6 = (int)local_38;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_40 != (longlong *)0x0) {
      FMemory::Free();
    }
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_388);
    local_488 = &local_568;
    local_480 = &local_564;
    local_478 = UE4Function_Private::
                TFunctionRefCaller<<lambda_80d8c48f91200a07e34c550365bb5c93>,void___cdecl(int)>::
                Call;
    local_1f8 = 0x41590e40;
    uStack_1f4 = 1;
    ppiStack_470 = &local_488;
    uStack_1f0 = &local_488;
    FUN_1406a7b10(1000,&local_1f8,0);
    QueryPerformanceCounter(&local_380);
    LOCK();
    if (local_568 == 0) {
      local_568 = 0;
    }
    UNLOCK();
    while (local_568 < 1000) {
      LOCK();
      if (local_568 == 0) {
        local_568 = 0;
      }
      UNLOCK();
    }
    QueryPerformanceCounter(&local_378);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_370);
    _guard_xfg_dispatch_icall_nop(&DAT_1468a7880,0,1000);
    puStack_460 = local_560;
    local_560[0] = 0;
    local_468 = &LAB_141590da0;
    local_1e8 = 0x41590da0;
    uStack_1e4 = 1;
    uStack_1e0 = puStack_460;
    FUN_1406a7b10(1000,&local_1e8,0);
    QueryPerformanceCounter(&local_368);
    plVar8 = plVar14;
    do {
      cVar3 = (char)plVar8[0x28d14f10];
      while (cVar3 == '\0') {
        FUN_1416b1760(0);
        cVar3 = (char)plVar8[0x28d14f10];
      }
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while ((longlong)plVar8 < 1000);
    QueryPerformanceCounter(&local_360);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_358);
    local_458 = &local_568;
    local_450 = &local_564;
    ppiStack_440 = &local_458;
    local_448 = UE4Function_Private::
                TFunctionRefCaller<<lambda_eeb6078671a6e13d6c21bc5017366713>,void___cdecl(int)>::
                Call;
    local_1d8 = 0x41590db0;
    uStack_1d4 = 1;
    uStack_1d0 = ppiStack_440;
    FUN_1406a7b10(1000,&local_1d8,0);
    QueryPerformanceCounter(&local_350);
    LOCK();
    if (local_568 == 0) {
      local_568 = 0;
    }
    UNLOCK();
    while (local_568 < 1000) {
      FUN_1416b1760(0);
      LOCK();
      if (local_568 == 0) {
        local_568 = 0;
      }
      UNLOCK();
    }
    QueryPerformanceCounter(&local_348);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_340);
    local_338 = 0;
    local_330 = 0;
    lVar7 = 1000;
    do {
      plVar8 = TlsGetValue(DAT_1468a7c78);
      if (plVar8 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        plVar8 = plVar14;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar8 = plVar9;
        }
        TlsSetValue(DAT_1468a7c78,plVar8);
      }
      plVar9 = (longlong *)plVar8[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar8;
        if (plVar9 == (longlong *)0x0) {
          uVar12 = FUN_141594c40(&DAT_1468a7c80);
          plVar9 = plVar14;
          if (uVar12 != 0) {
            plVar9 = *(longlong **)
                      ((&DAT_1468a81f8)[uVar12 >> 0xe] + 8 + (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FLockFreeLinkPolicy::FreeLockFreeLink(uVar12);
          }
          plVar8[1] = (longlong)plVar9;
          if (plVar9 == (longlong *)0x0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar11 = 0x1f;
            do {
              puVar1 = puVar10 + 0x20;
              *puVar10 = puVar1;
              lVar11 = lVar11 + -1;
              puVar10 = puVar1;
            } while (lVar11 != 0);
            *puVar1 = 0;
            plVar9 = (longlong *)plVar8[1];
          }
          *(undefined4 *)(plVar8 + 2) = 0x20;
          iVar6 = 0x20;
        }
        else {
          plVar8[1] = (longlong)plVar9;
          iVar6 = 0x20;
          *plVar8 = 0;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
      }
      else {
        iVar6 = (int)plVar8[2];
      }
      plVar8[1] = *plVar9;
      *(int *)(plVar8 + 2) = iVar6 + -1;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144c95488;
      *(undefined1 *)(plVar9 + 5) = 0;
      plVar9[6] = 0;
      *(undefined4 *)(plVar9 + 4) = 1000;
      plVar9[2] = (longlong)&local_568;
      plVar9[3] = (longlong)&local_564;
      lVar11 = plVar9[6];
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
        UNLOCK();
      }
      local_4e0 = lVar11;
      FUN_141599890(plVar9,0,2,1);
      if (lVar11 != 0) {
        FGraphEvent::Release(lVar11);
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    QueryPerformanceCounter(&local_320);
    LOCK();
    if (local_568 == 0) {
      local_568 = 0;
    }
    UNLOCK();
    while (local_568 < 1000) {
      FUN_1416b1760(0);
      LOCK();
      if (local_568 == 0) {
        local_568 = 0;
      }
      UNLOCK();
    }
    QueryPerformanceCounter(&local_318);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_310);
    local_438 = &local_568;
    local_430 = &local_564;
    ppiStack_420 = &local_438;
    local_428 = UE4Function_Private::
                TFunctionRefCaller<<lambda_3ad33dfaaba89c9916be9600dca62930>,void___cdecl(int)>::
                Call;
    local_1c8 = 0x41590ec0;
    uStack_1c4 = 1;
    uStack_1c0 = ppiStack_420;
    FUN_1406a7b10(1000,&local_1c8,0);
    QueryPerformanceCounter(&local_308);
    (**(code **)(*DAT_1468a80e8 + 0x30))(DAT_1468a80e8,0x102);
    QueryPerformanceCounter(&local_300);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_2f8);
    local_418 = &local_568;
    local_410 = &local_564;
    ppiStack_400 = &local_418;
    local_408 = AK::MemoryMgr::StartProfileThreadUsage;
    local_1b8 = 0x40437760;
    uStack_1b4 = 1;
    uStack_1b0 = ppiStack_400;
    FUN_1406a7b10(1000,&local_1b8,0);
    QueryPerformanceCounter(&local_2f0);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_2e8);
    local_3f8 = &local_568;
    local_3f0 = &local_564;
    ppiStack_3e0 = &local_3f8;
    local_3e8 = FUN_141590e30;
    local_1a8 = 0x41590e30;
    uStack_1a4 = 1;
    uStack_1a0 = ppiStack_3e0;
    FUN_1406a7b10(1000,&local_1a8,0);
    QueryPerformanceCounter(&local_2e0);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_2d8);
    local_3d8 = &local_568;
    local_3d0 = &local_564;
    do {
      local_558[0] = (int)plVar14;
      FUN_141590e30(&local_3d8,local_558);
      uVar12 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < 1000);
    QueryPerformanceCounter(&local_2d0);
    LOCK();
    local_568 = 0;
    UNLOCK();
    LOCK();
    local_564 = 0;
    UNLOCK();
  }
  lVar7 = FUN_1415dcd20();
  if (lVar7 != 0) {
    FUN_1415e5410(lVar7);
  }
  return;
}



// FUNCTION 14159b430 FUN_14159b430 body=3320 status=ok
// SIG undefined FUN_14159b430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14159b430(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  undefined8 local_430;
  undefined8 *local_428;
  undefined8 local_420;
  int local_410;
  int local_40c;
  int local_408;
  undefined1 *local_3f8 [2];
  longlong local_3e8 [4];
  longlong *local_3c8;
  int local_3b8;
  undefined1 *local_3a8 [2];
  longlong local_398 [4];
  longlong *local_378;
  int local_368;
  undefined1 local_358 [128];
  ulonglong local_2d8;
  ulonglong local_250;
  ulonglong local_1c0;
  ulonglong local_1b0;
  ulonglong local_198;
  ulonglong local_188;
  undefined1 local_178 [128];
  ulonglong local_f8;
  ulonglong local_68;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_408 = param_1;
  lVar5 = FUN_1415dcd20();
  if (lVar5 != 0) {
    FUN_1415e70c0(lVar5);
  }
  cVar3 = FUN_1415bac00();
  if ((cVar3 != '\0') && (local_40c = 0, 0 < param_1)) {
    do {
      local_2d8 = 0;
      local_250 = 0;
      uVar4 = FUN_141595030(&DAT_1468a7fd8);
      local_1c0 = 0;
      local_2d8 = local_2d8 & 0xfffffffffc000000 | (ulonglong)uVar4;
      local_1b0 = 0;
      local_250 = local_250 & 0xfffffffffc000000 | (ulonglong)uVar4;
      uVar4 = FUN_141595030(&DAT_1468a7fd8);
      local_198 = 0;
      local_1c0 = local_1c0 & 0xfffffffffc000000 | (ulonglong)uVar4;
      local_188 = 0;
      local_1b0 = local_1b0 & 0xfffffffffc000000 | (ulonglong)uVar4;
      uVar4 = FUN_141595030(&DAT_1468a7fd8);
      local_410 = 0;
      local_198 = local_198 & 0xfffffffffc000000 | (ulonglong)uVar4;
      local_188 = local_188 & 0xfffffffffc000000 | (ulonglong)uVar4;
      do {
        iVar15 = local_410;
        piVar8 = (int *)0x0;
        piVar6 = (int *)operator_new(8);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar15;
          piVar6[1] = -0x1fa5433;
          piVar8 = piVar6;
        }
        uVar4 = FUN_141595030(&DAT_1468a7fd8);
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(int **)(lVar5 + 8) = piVar8;
        do {
          while( true ) {
            do {
              puVar9 = (ulonglong *)0x0;
              LOCK();
              if (local_250 == 0) {
                local_250 = 0;
              }
              uVar14 = local_250;
              UNLOCK();
              if ((local_250 & 0x3ffffff) != 0) {
                puVar9 = (ulonglong *)
                         ((&DAT_1468a81f8)[((uint)local_250 & 0x3ffffff) >> 0xe] +
                         (ulonglong)((uint)local_250 & 0x3fff) * 0x18);
              }
              LOCK();
              uVar11 = *puVar9;
              if (uVar11 == 0) {
                *puVar9 = 0;
                uVar11 = 0;
              }
              UNLOCK();
              LOCK();
              if (local_250 == 0) {
                local_250 = 0;
              }
              UNLOCK();
            } while (local_250 != uVar14);
            if ((uVar11 & 0x3ffffff) == 0) break;
            uVar13 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
            if (uVar13 < (uVar14 & 0xfffffffffc000000)) {
              FUN_1416b1760(0x3a83126f);
            }
            LOCK();
            uVar11 = (uint)uVar11 & 0x3ffffff | uVar13;
            if (uVar14 != local_250) {
              uVar11 = local_250;
            }
            local_250 = uVar11;
            UNLOCK();
          }
          uVar13 = (uVar11 & 0xfffffffffc000000) + 0x4000000;
          if (uVar13 < (uVar11 & 0xfffffffffc000000)) {
            FUN_1416b1760(0x3a83126f);
          }
          iVar15 = local_410;
          LOCK();
          uVar1 = *puVar9;
          if (uVar11 == uVar1) {
            *puVar9 = uVar4 | uVar13;
          }
          UNLOCK();
        } while (uVar11 != uVar1);
        uVar11 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
        if (uVar11 < (uVar14 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        uVar11 = uVar4 | uVar11;
        if (uVar14 != local_250) {
          uVar11 = local_250;
        }
        local_250 = uVar11;
        UNLOCK();
        local_410 = iVar15 + 1;
      } while (local_410 < 1000);
      local_3c8 = (longlong *)0x0;
      local_3b8 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_3e8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77b70;
        puVar7[1] = local_358;
      }
      local_3f8[0] = &LAB_141590f50;
      FUN_141590030(1,0,0,local_3f8);
      local_428 = (undefined8 *)0x0;
      local_420 = 0;
      while( true ) {
        while( true ) {
          do {
            LOCK();
            if (local_2d8 == 0) {
              local_2d8 = 0;
            }
            uVar14 = local_2d8;
            UNLOCK();
            LOCK();
            if (local_250 == 0) {
              local_250 = 0;
            }
            uVar11 = local_250;
            UNLOCK();
            uVar4 = (uint)local_2d8 & 0x3ffffff;
            if ((local_2d8 & 0x3ffffff) == 0) {
              puVar9 = (ulonglong *)0x0;
            }
            else {
              puVar9 = (ulonglong *)
                       ((&DAT_1468a81f8)[uVar4 >> 0xe] +
                       (ulonglong)((uint)local_2d8 & 0x3fff) * 0x18);
            }
            LOCK();
            uVar13 = *puVar9;
            if (uVar13 == 0) {
              *puVar9 = 0;
              uVar13 = 0;
            }
            UNLOCK();
            LOCK();
            if (local_2d8 == 0) {
              local_2d8 = 0;
            }
            UNLOCK();
          } while (uVar14 != local_2d8);
          uVar10 = (uint)uVar13;
          if (uVar4 == ((uint)local_250 & 0x3ffffff)) break;
          if ((uVar13 & 0x3ffffff) == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (&DAT_1468a81f8)[(uVar10 & 0x3ffffff) >> 0xe] +
                    (ulonglong)(uVar10 & 0x3fff) * 0x18;
          }
          lVar5 = *(longlong *)(lVar5 + 8);
          uVar11 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
          if (uVar11 < (uVar14 & 0xfffffffffc000000)) {
            FUN_1416b1760(0x3a83126f);
          }
          LOCK();
          bVar18 = uVar14 == local_2d8;
          if (bVar18) {
            local_2d8 = uVar10 & 0x3ffffff | uVar11;
          }
          UNLOCK();
          if (bVar18) {
            FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
            uVar14 = local_420;
            if (lVar5 == 0) goto LAB_14159b960;
            lVar12 = (longlong)(int)local_420;
            iVar15 = (int)local_420 + 1;
            local_420 = CONCAT44(local_420._4_4_,iVar15);
            if (local_420._4_4_ < iVar15) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_428,uVar14 & 0xffffffff);
            }
            local_428[lVar12] = lVar5;
          }
        }
        if ((uVar13 & 0x3ffffff) == 0) break;
        uVar14 = (local_250 & 0xfffffffffc000000) + 0x4000000;
        if (uVar14 < (local_250 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        if (uVar11 == local_250) {
          local_250 = uVar10 & 0x3ffffff | uVar14;
        }
        UNLOCK();
      }
LAB_14159b960:
      do {
        LOCK();
        if (local_1c0 == 0) {
          local_1c0 = 0;
        }
        uVar14 = local_1c0;
        UNLOCK();
        LOCK();
        if (local_1b0 == 0) {
          local_1b0 = 0;
        }
        uVar11 = local_1b0;
        UNLOCK();
        uVar4 = (uint)local_1c0 & 0x3ffffff;
        if ((local_1c0 & 0x3ffffff) == 0) {
          puVar9 = (ulonglong *)0x0;
        }
        else {
          puVar9 = (ulonglong *)
                   ((&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)((uint)local_1c0 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar13 = *puVar9;
        if (uVar13 == 0) {
          *puVar9 = 0;
          uVar13 = 0;
        }
        UNLOCK();
        LOCK();
        if (local_1c0 == 0) {
          local_1c0 = 0;
        }
        UNLOCK();
      } while (uVar14 != local_1c0);
      uVar10 = (uint)uVar13;
      if (uVar4 != ((uint)local_1b0 & 0x3ffffff)) {
        if ((uVar13 & 0x3ffffff) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[(uVar10 & 0x3ffffff) >> 0xe] +
                  (ulonglong)(uVar10 & 0x3fff) * 0x18;
        }
        lVar5 = *(longlong *)(lVar5 + 8);
        uVar11 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
        if (uVar11 < (uVar14 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar18 = uVar14 == local_1c0;
        if (bVar18) {
          local_1c0 = uVar10 & 0x3ffffff | uVar11;
        }
        UNLOCK();
        if (bVar18) {
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
          uVar14 = local_420;
          if (lVar5 == 0) goto LAB_14159bae0;
          lVar12 = (longlong)(int)local_420;
          iVar15 = (int)local_420 + 1;
          local_420 = CONCAT44(local_420._4_4_,iVar15);
          if (local_420._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_428,uVar14 & 0xffffffff);
          }
          local_428[lVar12] = lVar5;
        }
        goto LAB_14159b960;
      }
      if ((uVar13 & 0x3ffffff) != 0) {
        uVar14 = (local_1b0 & 0xfffffffffc000000) + 0x4000000;
        if (uVar14 < (local_1b0 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        if (uVar11 == local_1b0) {
          local_1b0 = uVar10 & 0x3ffffff | uVar14;
        }
        UNLOCK();
        goto LAB_14159b960;
      }
LAB_14159bae0:
      do {
        LOCK();
        if (local_198 == 0) {
          local_198 = 0;
        }
        uVar14 = local_198;
        UNLOCK();
        LOCK();
        if (local_188 == 0) {
          local_188 = 0;
        }
        uVar11 = local_188;
        UNLOCK();
        uVar4 = (uint)local_198 & 0x3ffffff;
        if ((local_198 & 0x3ffffff) == 0) {
          puVar9 = (ulonglong *)0x0;
        }
        else {
          puVar9 = (ulonglong *)
                   ((&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)((uint)local_198 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar13 = *puVar9;
        if (uVar13 == 0) {
          *puVar9 = 0;
          uVar13 = 0;
        }
        UNLOCK();
        LOCK();
        if (local_198 == 0) {
          local_198 = 0;
        }
        UNLOCK();
      } while (uVar14 != local_198);
      uVar10 = (uint)uVar13;
      if (uVar4 != ((uint)local_188 & 0x3ffffff)) {
        if ((uVar13 & 0x3ffffff) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[(uVar10 & 0x3ffffff) >> 0xe] +
                  (ulonglong)(uVar10 & 0x3fff) * 0x18;
        }
        lVar5 = *(longlong *)(lVar5 + 8);
        uVar11 = (uVar14 & 0xfffffffffc000000) + 0x40000000;
        if (uVar11 < (uVar14 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar18 = uVar14 == local_198;
        if (bVar18) {
          local_198 = uVar10 & 0x3ffffff | uVar11;
        }
        UNLOCK();
        if (bVar18) {
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
          uVar14 = local_420;
          if (lVar5 == 0) goto LAB_14159bc5d;
          lVar12 = (longlong)(int)local_420;
          iVar15 = (int)local_420 + 1;
          local_420 = CONCAT44(local_420._4_4_,iVar15);
          if (local_420._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_428,uVar14 & 0xffffffff);
          }
          local_428[lVar12] = lVar5;
        }
        goto LAB_14159bae0;
      }
      if ((uVar13 & 0x3ffffff) != 0) {
        uVar14 = (local_188 & 0xfffffffffc000000) + 0x40000000;
        if (uVar14 < (local_188 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        if (uVar11 == local_188) {
          local_188 = uVar10 & 0x3ffffff | uVar14;
        }
        UNLOCK();
        goto LAB_14159bae0;
      }
LAB_14159bc5d:
      puVar7 = local_428;
      uVar14 = 0;
      uVar11 = (ulonglong)((longlong)(local_428 + (int)local_420) + (7 - (longlong)local_428)) >> 3;
      if (local_428 + (int)local_420 < local_428) {
        uVar11 = 0;
      }
      puVar16 = local_428;
      if (uVar11 != 0) {
        do {
          FMemory::operator_delete(*puVar16,8);
          uVar14 = uVar14 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar14 != uVar11);
      }
      if (puVar7 != (undefined8 *)0x0) {
        FMemory::Free(puVar7);
      }
      if (local_3b8 != 0) {
        plVar17 = local_3e8;
        if (local_3c8 != (longlong *)0x0) {
          plVar17 = local_3c8;
        }
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x10))(plVar17,0);
        }
      }
      if (local_3c8 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_f8 = 0;
      iVar15 = 0;
      local_68 = 0;
      local_50 = 0;
      do {
        piVar8 = (int *)operator_new(8);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar15;
          piVar8[1] = -0x1fa5433;
        }
        uVar4 = FUN_141595030(&DAT_1468a7fd8);
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(int **)(lVar5 + 8) = piVar8;
        FLockFreePointerListLIFORoot<128,1>::Push(local_178);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 1000);
      local_378 = (longlong *)0x0;
      local_368 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77b70;
        puVar7[1] = local_178;
      }
      local_3a8[0] = &LAB_141590f90;
      FUN_141590030(1,0,0,local_3a8);
      local_438 = (undefined8 *)0x0;
      local_430 = 0;
      LOCK();
      if (local_f8 == 0) {
        local_f8 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_f8;
      uVar14 = local_f8;
      while (uVar4 = uVar4 & 0x3ffffff, local_f8 = uVar14, (uVar14 & 0x3ffffff) != 0) {
        if ((uVar14 + 0x4000000 & 0xfffffffffc000000) < (uVar14 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar18 = uVar14 == local_f8;
        if (bVar18) {
          local_f8 = uVar14 + 0x4000000 & 0xfffffffffc000000;
        }
        UNLOCK();
        if (bVar18) break;
        LOCK();
        if (local_f8 == 0) {
          local_f8 = 0;
        }
        UNLOCK();
        uVar4 = (uint)local_f8;
        uVar14 = local_f8;
      }
      while (uVar4 != 0) {
        lVar12 = (longlong)(int)local_430;
        lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe];
        uVar2 = *(undefined8 *)(lVar5 + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
        iVar15 = (int)local_430 + 1;
        local_430._4_4_ = (int)((ulonglong)local_430 >> 0x20);
        local_430 = CONCAT44(local_430._4_4_,iVar15);
        if (local_430._4_4_ < iVar15) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_438);
        }
        local_438[lVar12] = uVar2;
        uVar10 = *(uint *)(lVar5 + (ulonglong)(uVar4 & 0x3fff) * 0x18 + 0x10);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
        uVar4 = uVar10;
      }
      LOCK();
      if (local_68 == 0) {
        local_68 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_68;
      uVar14 = local_68;
      while (uVar4 = uVar4 & 0x3ffffff, local_68 = uVar14, (uVar14 & 0x3ffffff) != 0) {
        if ((uVar14 + 0x4000000 & 0xfffffffffc000000) < (uVar14 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar18 = uVar14 == local_68;
        if (bVar18) {
          local_68 = uVar14 + 0x4000000 & 0xfffffffffc000000;
        }
        UNLOCK();
        if (bVar18) break;
        LOCK();
        if (local_68 == 0) {
          local_68 = 0;
        }
        UNLOCK();
        uVar4 = (uint)local_68;
        uVar14 = local_68;
      }
      while (uVar4 != 0) {
        lVar12 = (longlong)(int)local_430;
        lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe];
        uVar2 = *(undefined8 *)(lVar5 + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
        iVar15 = (int)local_430 + 1;
        local_430._4_4_ = (int)((ulonglong)local_430 >> 0x20);
        local_430 = CONCAT44(local_430._4_4_,iVar15);
        if (local_430._4_4_ < iVar15) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_438);
        }
        local_438[lVar12] = uVar2;
        uVar10 = *(uint *)(lVar5 + (ulonglong)(uVar4 & 0x3fff) * 0x18 + 0x10);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
        uVar4 = uVar10;
      }
      LOCK();
      if (local_50 == 0) {
        local_50 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_50;
      uVar14 = local_50;
      while (uVar4 = uVar4 & 0x3ffffff, puVar7 = local_438, local_50 = uVar14,
            (uVar14 & 0x3ffffff) != 0) {
        if ((uVar14 + 0x40000000 & 0xfffffffffc000000) < (uVar14 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar18 = uVar14 == local_50;
        if (bVar18) {
          local_50 = uVar14 + 0x40000000 & 0xfffffffffc000000;
        }
        UNLOCK();
        puVar7 = local_438;
        if (bVar18) break;
        LOCK();
        if (local_50 == 0) {
          local_50 = 0;
        }
        UNLOCK();
        uVar4 = (uint)local_50;
        uVar14 = local_50;
      }
      while (uVar4 != 0) {
        lVar12 = (longlong)(int)local_430;
        lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe];
        uVar2 = *(undefined8 *)(lVar5 + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
        iVar15 = (int)local_430 + 1;
        local_430._4_4_ = (int)((ulonglong)local_430 >> 0x20);
        local_430 = CONCAT44(local_430._4_4_,iVar15);
        if (local_430._4_4_ < iVar15) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_438);
          puVar7 = local_438;
        }
        puVar7[lVar12] = uVar2;
        uVar10 = *(uint *)(lVar5 + (ulonglong)(uVar4 & 0x3fff) * 0x18 + 0x10);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
        uVar4 = uVar10;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)((longlong)(puVar7 + (int)local_430) + (7 - (longlong)puVar7)) >> 3;
      if (puVar7 + (int)local_430 < puVar7) {
        uVar11 = 0;
      }
      puVar16 = puVar7;
      if (uVar11 != 0) {
        do {
          FMemory::operator_delete(*puVar16);
          uVar14 = uVar14 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar14 != uVar11);
      }
      if (puVar7 != (undefined8 *)0x0) {
        FMemory::Free(puVar7);
      }
      if (local_368 != 0) {
        plVar17 = local_398;
        if (local_378 != (longlong *)0x0) {
          plVar17 = local_378;
        }
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      if (local_378 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_40c = local_40c + 1;
    } while (local_40c < local_408);
  }
  lVar5 = FUN_1415dcd20();
  if (lVar5 != 0) {
    FUN_1415e5410(lVar5);
  }
  return;
}



// FUNCTION 14159c140 TestLowToHighPri body=291 status=ok
// SIG undefined TestLowToHighPri(void)

void TestLowToHighPri(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar2 = TlsGetValue(DAT_1468a7c78);
  plVar5 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar5 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar5);
    plVar2 = plVar5;
  }
  plVar5 = (longlong *)plVar2[1];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)*plVar2;
    if (plVar5 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 0x20;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar5 = (longlong *)plVar2[1];
      iVar6 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar6 = 0x20;
      plVar2[1] = (longlong)plVar5;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar6 = (int)plVar2[2];
  }
  plVar2[1] = *plVar5;
  *(int *)(plVar2 + 2) = iVar6 + -1;
  *(undefined4 *)(plVar5 + 1) = 0xff;
  *plVar5 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
  *plVar5 = (longlong)&PTR_FUN_144c954f0;
  *(undefined1 *)((longlong)plVar5 + 0x11) = 0;
  plVar5[3] = 0;
  FUN_141598bb0(plVar5,0,0xff,1);
  return;
}



// FUNCTION 14159c270 ThreadSwitchForABTest body=119 status=ok
// SIG undefined ThreadSwitchForABTest(void)

void ThreadSwitchForABTest(longlong *param_1)

{
  int iVar1;
  wchar_t *_Str;
  wchar_t *_Str_00;
  
  if ((int)param_1[1] == 2) {
    _Str_00 = L"";
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    DAT_1464a820c = (uint)(iVar1 != 0);
    if (*(int *)(*param_1 + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar1 = _wtoi(_Str_00);
    DAT_1464a8208 = (uint)(iVar1 != 0);
  }
  return;
}



// FUNCTION 14159c300 FUN_14159c300 body=766 status=ok
// SIG undefined FUN_14159c300(void)

void FUN_14159c300(double *param_1,float param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  undefined8 local_58;
  undefined4 local_50;
  double local_48;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar6 = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = 1;
    *param_1 = (double)param_2 + *param_1;
    do {
      dVar8 = param_1[1];
      lVar11 = (longlong)*(int *)(param_1 + 2);
      dVar5 = *(double *)((longlong)dVar8 + -0x28 + lVar11 * 0x28);
      lVar15 = (longlong)dVar8 + -0x18 + lVar11 * 0x28;
      uVar4 = *(undefined4 *)((longlong)dVar8 + -0x20 + lVar11 * 0x28);
      local_58 = 0;
      local_50 = 0;
      if (dVar5 < *param_1 || dVar5 == *param_1) {
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,lVar15);
        local_48 = *(double *)((longlong)dVar8 + -8 + lVar11 * 0x28);
        iVar7 = *(int *)(param_1 + 2);
        iVar14 = iVar7 + -1;
        TBaseDelegate<FText>::~TBaseDelegate<FText>
                  ((longlong)param_1[1] + 0x10 + (longlong)iVar14 * 0x28);
        iVar10 = *(int *)(param_1 + 2);
        iVar12 = (iVar10 - iVar14) + -1;
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)param_1[1] + (longlong)iVar14 * 0x28),
                     (void *)((longlong)param_1[1] + (longlong)iVar7 * 0x28),(longlong)iVar12 * 0x28
                    );
          iVar10 = *(int *)(param_1 + 2);
        }
        *(int *)(param_1 + 2) = iVar10 + -1;
        param_1[5] = dVar5;
        *(undefined4 *)(param_1 + 6) = uVar4;
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 7,&local_58);
        param_1[9] = local_48;
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
        *(undefined1 *)((longlong)param_1 + 0x51) = 0;
        if (((*(int *)(param_1 + 8) != 0) && ((longlong *)param_1[7] != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(*(longlong *)param_1[7] + 0x18))(), cVar9 != '\0')) {
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_1 + 8) != 0) {
            plVar13 = (longlong *)param_1[7];
          }
          cVar9 = (**(code **)(*plVar13 + 0x38))(plVar13,param_2);
          if ((cVar9 != '\0') && (*(char *)((longlong)param_1 + 0x51) == '\0')) {
            param_1[5] = (double)*(float *)(param_1 + 6) + *param_1;
            iVar7 = *(int *)(param_1 + 4);
            lVar15 = (longlong)iVar7;
            *(int *)(param_1 + 4) = iVar7 + 1;
            if (*(int *)((longlong)param_1 + 0x24) < iVar7 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar7);
            }
            dVar5 = param_1[3];
            *(double *)((longlong)dVar5 + lVar15 * 0x28) = param_1[5];
            pdVar3 = (double *)((longlong)dVar5 + 0x10 + lVar15 * 0x28);
            *(undefined4 *)((longlong)dVar5 + 8 + lVar15 * 0x28) = *(undefined4 *)(param_1 + 6);
            *pdVar3 = 0.0;
            *(undefined4 *)(pdVar3 + 1) = 0;
            if (((param_1 + 7 != pdVar3) && (*(int *)(param_1 + 8) != 0)) &&
               (plVar13 = (longlong *)param_1[7], plVar13 != (longlong *)0x0)) {
              (**(code **)(*plVar13 + 0x30))();
            }
            *(double *)((longlong)dVar5 + 0x20 + lVar15 * 0x28) = param_1[9];
          }
        }
      }
      else {
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_58,lVar15);
        local_48 = *(double *)((longlong)dVar8 + -8 + lVar11 * 0x28);
        iVar7 = *(int *)(param_1 + 2);
        iVar14 = iVar7 + -1;
        TBaseDelegate<FText>::~TBaseDelegate<FText>
                  ((longlong)param_1[1] + 0x10 + (longlong)iVar14 * 0x28);
        iVar10 = *(int *)(param_1 + 2);
        iVar12 = (iVar10 - iVar14) + -1;
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)param_1[1] + (longlong)iVar14 * 0x28),
                     (void *)((longlong)param_1[1] + (longlong)iVar7 * 0x28),(longlong)iVar12 * 0x28
                    );
          iVar10 = *(int *)(param_1 + 2);
        }
        *(int *)(param_1 + 2) = iVar10 + -1;
        iVar7 = *(int *)(param_1 + 4);
        lVar15 = (longlong)iVar7;
        *(int *)(param_1 + 4) = iVar7 + 1;
        if (*(int *)((longlong)param_1 + 0x24) < iVar7 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar7);
        }
        dVar8 = param_1[3];
        *(double *)((longlong)dVar8 + lVar15 * 0x28) = dVar5;
        puVar2 = (undefined8 *)((longlong)dVar8 + 0x10 + lVar15 * 0x28);
        *(undefined4 *)((longlong)dVar8 + 8 + lVar15 * 0x28) = uVar4;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        TBaseDelegate<FSlateBrush_const_*>::operator=(puVar2,&local_58);
        *(double *)((longlong)dVar8 + 0x20 + lVar15 * 0x28) = local_48;
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
      }
    } while (*(int *)(param_1 + 2) != 0);
    pdVar3 = param_1 + 1;
    pdVar1 = param_1 + 3;
    if (pdVar1 != pdVar3) {
      dVar5 = *pdVar1;
      dVar8 = param_1[4];
      *pdVar1 = *pdVar3;
      param_1[4] = param_1[2];
      *pdVar3 = dVar5;
      param_1[2] = dVar8;
    }
    *(undefined1 *)(param_1 + 10) = uVar6;
  }
  return;
}



// FUNCTION 14159c600 ToBool body=26 status=ok
// SIG undefined ToBool(void)

void FString::ToBool(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 0) {
    FToBoolHelper::FromCStringWide(*param_1);
    return;
  }
  FToBoolHelper::FromCStringWide(&DAT_143f3eda8);
  return;
}



// FUNCTION 14159c620 ToHexBlob body=224 status=ok
// SIG undefined ToHexBlob(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FString::ToHexBlob(longlong *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  wchar_t local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  iVar3 = (int)param_1[1];
  uVar4 = (ulonglong)(iVar3 - 1);
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
    iVar1 = -1;
  }
  uVar5 = 0;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  if ((uint)(iVar1 / 2) <= param_3) {
    if (iVar3 == 0) {
      uVar4 = uVar5;
    }
    if ((uVar4 & 1) == 0) {
      local_2c = 0;
      local_38 = (wchar_t *)0x0;
      uVar4 = uVar5;
      while( true ) {
        iVar1 = (int)param_1[1];
        iVar3 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar3 = 0;
        }
        if (iVar3 <= (int)uVar4) break;
        local_30 = *(wchar_t *)(uVar5 + *param_1);
        local_2e = *(undefined2 *)(*param_1 + 2 + uVar5);
        uVar2 = wcstoul(&local_30,&local_38,0x10);
        uVar4 = (ulonglong)((int)uVar4 + 2);
        uVar5 = uVar5 + 4;
        *param_2 = (char)uVar2;
        param_2 = param_2 + 1;
      }
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  return (ulonglong)(uint3)(iVar1 - (iVar1 >> 0x1f) >> 9) << 8;
}



// FUNCTION 14159c700 ToLower body=113 status=ok
// SIG undefined ToLower(void)

longlong * FString::ToLower(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  
  FString(param_2,param_1);
  lVar4 = 0;
  lVar1 = *param_2;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    do {
      wVar2 = towlower(*(wint_t *)(lVar1 + lVar4 * 2));
      *(wint_t *)(lVar1 + lVar4 * 2) = wVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return param_2;
}



// FUNCTION 14159c780 ToLower body=144 status=ok
// SIG undefined ToLower(void)

longlong * FString::ToLower(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar1 = *param_1;
  iVar3 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    do {
      wVar2 = towlower(*(wint_t *)(lVar1 + lVar4 * 2));
      *(wint_t *)(lVar1 + lVar4 * 2) = wVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *param_2 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(int *)(param_2 + 1) = (int)param_1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14159c810 ToLowerInline body=76 status=ok
// SIG undefined ToLowerInline(void)

void FString::ToLowerInline(longlong *param_1)

{
  longlong lVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar1 = *param_1;
  iVar3 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    do {
      wVar2 = towlower(*(wint_t *)(lVar1 + lVar4 * 2));
      *(wint_t *)(lVar1 + lVar4 * 2) = wVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 14159c860 ToUpper body=113 status=ok
// SIG undefined ToUpper(void)

longlong * FString::ToUpper(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  
  FString(param_2,param_1);
  lVar4 = 0;
  lVar1 = *param_2;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    do {
      wVar2 = towupper(*(wint_t *)(lVar1 + lVar4 * 2));
      *(wint_t *)(lVar1 + lVar4 * 2) = wVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return param_2;
}



// FUNCTION 14159c8e0 ToLower body=144 status=ok
// SIG undefined ToLower(void)

longlong * FString::ToLower(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar1 = *param_1;
  iVar3 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    do {
      wVar2 = towupper(*(wint_t *)(lVar1 + lVar4 * 2));
      *(wint_t *)(lVar1 + lVar4 * 2) = wVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *param_2 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(int *)(param_2 + 1) = (int)param_1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14159c970 ToLowerInline body=76 status=ok
// SIG undefined ToLowerInline(void)

void FString::ToLowerInline(longlong *param_1)

{
  longlong lVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar1 = *param_1;
  iVar3 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    do {
      wVar2 = towupper(*(wint_t *)(lVar1 + lVar4 * 2));
      *(wint_t *)(lVar1 + lVar4 * 2) = wVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 14159c9c0 FUN_14159c9c0 body=497 status=ok
// SIG undefined FUN_14159c9c0(void)

void FUN_14159c9c0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong local_res18 [2];
  
  iVar10 = *(int *)(param_3 + 0x28);
  plVar9 = (longlong *)0x0;
  if (iVar10 < 9) {
LAB_14159ca3b:
    plVar5 = TlsGetValue(DAT_1468a7c78);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar9 = plVar5;
      }
      TlsSetValue(DAT_1468a7c78,plVar9);
      plVar5 = plVar9;
    }
    plVar9 = (longlong *)plVar5[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar5;
      if (plVar9 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar6 = lVar6 + -1;
            puVar7 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar5[1];
        iVar8 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar8 = 0x20;
        plVar5[1] = (longlong)plVar9;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar8 = (int)plVar5[2];
    }
    plVar5[1] = *plVar9;
    *(int *)(plVar5 + 2) = iVar8 + -1;
    plVar5 = (longlong *)FUN_1415914c0(local_res18);
    lVar6 = *plVar5;
    *plVar5 = 0;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    *(int *)((longlong)plVar9 + 0xc) = iVar10 + 1;
    *plVar9 = (longlong)&PTR__scalar_deleting_destructor__144c957e8;
    *(undefined1 *)(plVar9 + 3) = 0;
    plVar9[4] = lVar6;
    if (local_res18[0] != 0) {
      FGraphEvent::Release();
    }
    plVar9[2] = (longlong)param_2;
    lVar3 = plVar9[4];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141599370(plVar9,param_3,param_4,1,lVar3,lVar6);
    if (lVar3 != 0) {
      FGraphEvent::Release(lVar3);
    }
    return;
  }
  plVar5 = plVar9;
  plVar12 = plVar9;
  if (0 < iVar10) {
    do {
      lVar6 = *(longlong *)(param_3 + 0x20);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        lVar6 = param_3;
      }
      puVar1 = (ulonglong *)(*(longlong *)(lVar6 + (longlong)plVar5) + 8);
      LOCK();
      uVar4 = *puVar1;
      if (uVar4 == 0) {
        *puVar1 = 0;
        uVar4 = 0;
      }
      UNLOCK();
      iVar10 = *(int *)(param_3 + 0x28);
      if ((uVar4 >> 0x1a & 1) == 0) goto LAB_14159ca3b;
      uVar11 = (int)plVar12 + 1;
      plVar5 = plVar5 + 1;
      plVar12 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < iVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014159ca37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}



// FUNCTION 14159cbc0 FUN_14159cbc0 body=506 status=ok
// SIG undefined FUN_14159cbc0(void)

void FUN_14159cbc0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong local_res18 [2];
  
  iVar10 = *(int *)(param_3 + 0x28);
  plVar9 = (longlong *)0x0;
  if (iVar10 < 9) {
LAB_14159cc3b:
    plVar5 = TlsGetValue(DAT_1468a7c78);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar9 = plVar5;
      }
      TlsSetValue(DAT_1468a7c78,plVar9);
      plVar5 = plVar9;
    }
    plVar9 = (longlong *)plVar5[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar5;
      if (plVar9 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar6 = lVar6 + -1;
            puVar7 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar5[1];
        iVar8 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar8 = 0x20;
        plVar5[1] = (longlong)plVar9;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar8 = (int)plVar5[2];
    }
    plVar5[1] = *plVar9;
    *(int *)(plVar5 + 2) = iVar8 + -1;
    plVar5 = (longlong *)FUN_1415914c0(local_res18);
    lVar6 = *plVar5;
    *plVar5 = 0;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    *(int *)((longlong)plVar9 + 0xc) = iVar10 + 1;
    *plVar9 = (longlong)&PTR__scalar_deleting_destructor__144c957f8;
    *(undefined1 *)(plVar9 + 4) = 0;
    plVar9[5] = lVar6;
    if (local_res18[0] != 0) {
      FGraphEvent::Release();
    }
    plVar9[2] = (longlong)param_2;
    *(undefined4 *)(plVar9 + 3) = param_4;
    lVar3 = plVar9[5];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141599600(plVar9,param_3,param_5,1,lVar3,lVar6);
    if (lVar3 != 0) {
      FGraphEvent::Release(lVar3);
    }
    return;
  }
  plVar5 = plVar9;
  plVar12 = plVar9;
  if (0 < iVar10) {
    do {
      lVar6 = *(longlong *)(param_3 + 0x20);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        lVar6 = param_3;
      }
      puVar1 = (ulonglong *)(*(longlong *)(lVar6 + (longlong)plVar5) + 8);
      LOCK();
      uVar4 = *puVar1;
      if (uVar4 == 0) {
        *puVar1 = 0;
        uVar4 = 0;
      }
      UNLOCK();
      iVar10 = *(int *)(param_3 + 0x28);
      if ((uVar4 >> 0x1a & 1) == 0) goto LAB_14159cc3b;
      uVar11 = (int)plVar12 + 1;
      plVar5 = plVar5 + 1;
      plVar12 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < iVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014159cc37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}



// FUNCTION 14159cdc0 TrimEnd body=37 status=ok
// SIG undefined TrimEnd(void)

undefined8 FString::TrimEnd(undefined8 param_1,undefined8 param_2)

{
  FString(param_2,param_1);
  TrimEndInline(param_2);
  return param_2;
}



// FUNCTION 14159cdf0 TrimEnd body=56 status=ok
// SIG undefined TrimEnd(void)

undefined8 * FString::TrimEnd(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  TrimEndInline(param_2);
  return param_2;
}



// FUNCTION 14159ce30 TrimEndInline body=169 status=ok
// SIG undefined TrimEndInline(void)

void FString::TrimEndInline(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar6 = 0;
  }
  lVar5 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      iVar1 = iswspace(*(wint_t *)(*param_1 + -2 + lVar5 * 2));
      if (iVar1 == 0) break;
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
  }
  iVar2 = (int)param_1[1];
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  iVar4 = iVar1 - iVar6;
  if (iVar4 != 0) {
    iVar3 = (iVar2 - iVar4) - iVar6;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar6 * 2),(void *)(*param_1 + (longlong)iVar1 * 2),
                 (longlong)iVar3 * 2);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - iVar4;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
  }
  return;
}



// FUNCTION 14159cee0 FUN_14159cee0 body=312 status=ok
// SIG undefined FUN_14159cee0(void)

undefined8 * FUN_14159cee0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  wchar_t *_Dest;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  undefined2 *puVar10;
  
  uVar9 = 0;
  bVar8 = false;
  iVar7 = *(int *)(param_1 + 1);
  uVar4 = iVar7 - 1;
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    uVar4 = 0xffffffff;
    iVar3 = 0;
  }
  uVar5 = uVar9;
  if (0 < iVar3) {
    bVar8 = *(short *)*param_1 == 0x22;
    iVar1 = iVar3 + -1;
    if (!bVar8) {
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    uVar5 = (uint)bVar8;
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    if ((1 < (int)uVar4) && (((short *)*param_1)[(longlong)(int)uVar4 + -1] == 0x22)) {
      iVar3 = iVar3 + -1;
      bVar8 = true;
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = bVar8;
    iVar7 = *(int *)(param_1 + 1);
  }
  uVar4 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar4 = 0;
  }
  uVar2 = iVar3 + uVar5;
  if (uVar5 < uVar4) {
    uVar4 = uVar5;
  }
  uVar5 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar5 = uVar9;
  }
  uVar6 = uVar4;
  if ((uVar4 <= uVar2) && (uVar6 = uVar5, uVar2 < uVar5)) {
    uVar6 = uVar2;
  }
  if (iVar7 == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_1;
  }
  iVar7 = uVar6 - uVar4;
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  uVar5 = iVar7 + 1;
  if (iVar7 == 0) {
    uVar5 = uVar9;
  }
  *(uint *)(param_2 + 1) = uVar5;
  if ((0 < (int)uVar5) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0), 0 < *(int *)(param_2 + 1))) {
    _Dest = (wchar_t *)*param_2;
    wcsncpy(_Dest,puVar10 + (int)uVar4,(longlong)iVar7);
    _Dest[iVar7] = L'\0';
  }
  return param_2;
}



// FUNCTION 14159d020 TrimStart body=37 status=ok
// SIG undefined TrimStart(void)

undefined8 FString::TrimStart(undefined8 param_1,undefined8 param_2)

{
  FString(param_2,param_1);
  TrimStartInline(param_2);
  return param_2;
}



// FUNCTION 14159d050 TrimStart body=56 status=ok
// SIG undefined TrimStart(void)

undefined8 * FString::TrimStart(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  TrimStartInline(param_2);
  return param_2;
}



// FUNCTION 14159d090 TrimStartAndEnd body=45 status=ok
// SIG undefined TrimStartAndEnd(void)

undefined8 FString::TrimStartAndEnd(undefined8 param_1,undefined8 param_2)

{
  FString(param_2,param_1);
  TrimEndInline(param_2);
  TrimStartInline(param_2);
  return param_2;
}



// FUNCTION 14159d0c0 TrimStartAndEnd body=64 status=ok
// SIG undefined TrimStartAndEnd(void)

undefined8 * FString::TrimStartAndEnd(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  TrimEndInline(param_2);
  TrimStartInline(param_2);
  return param_2;
}



// FUNCTION 14159d100 TrimStartAndEndInline body=27 status=ok
// SIG undefined TrimStartAndEndInline(void)

void FString::TrimStartAndEndInline(undefined8 param_1)

{
  TrimEndInline();
  TrimStartInline(param_1);
  return;
}



// FUNCTION 14159d120 TrimStartInline body=143 status=ok
// SIG undefined TrimStartInline(void)

void FString::TrimStartInline(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  while( true ) {
    iVar1 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar1 = 0;
    }
    if (iVar1 <= iVar2) break;
    iVar1 = iswspace(*(wint_t *)(lVar3 + *param_1));
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 2;
  }
  if (iVar2 != 0) {
    iVar1 = (int)param_1[1];
    if (iVar1 - iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)*param_1,(void *)(*param_1 + (longlong)iVar2 * 2),
                 (longlong)(iVar1 - iVar2) * 2);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - iVar2;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
  }
  return;
}



// FUNCTION 14159d1b0 TrimToNullTerminator body=55 status=ok
// SIG undefined TrimToNullTerminator(void)

void FString::TrimToNullTerminator(longlong *param_1)

{
  longlong lVar1;
  int iVar3;
  longlong lVar2;
  
  if ((int)param_1[1] != 0) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(short *)(*param_1 + lVar1 * 2) != 0);
    iVar3 = (int)lVar2 + 2;
    if ((int)lVar1 < 1) {
      iVar3 = 0;
    }
    if ((int)param_1[1] != iVar3) {
      *(int *)(param_1 + 1) = iVar3;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink();
      return;
    }
  }
  return;
}



// FUNCTION 14159d1f0 UnregisterModularFeature body=292 status=ok
// SIG undefined UnregisterModularFeature(void)

void FModularFeatures::UnregisterModularFeature(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong local_res10;
  int local_20;
  
  local_res10 = param_2;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1 + 8,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c),0);
  if (*(int *)(param_1 + 0x50) != 0) {
    local_20 = (int)param_2;
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar1 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar1 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + local_20) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    iVar3 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x18) == param_2) break;
        iVar3 = iVar2;
      } while (iVar2 != -1);
    }
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 8);
      do {
        if (*(longlong *)(lVar1 + 8 + (longlong)iVar3 * 0x18) == param_3) {
          TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
          ::Remove(param_1 + 8);
          break;
        }
        iVar3 = iVar2;
        if (iVar2 == -1) break;
        do {
          iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
          if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x18) == param_2) break;
          iVar3 = iVar2;
        } while (iVar2 != -1);
      } while (iVar3 != -1);
    }
  }
  TBaseMulticastDelegate<void,FName_const_&,IModularFeature_*>::Broadcast
            (param_1 + 0x70,&local_res10,param_3);
  return;
}



// FUNCTION 14159d320 FUN_14159d320 body=718 status=ok
// SIG undefined FUN_14159d320(void)

void FUN_14159d320(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 local_res20;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  uVar11 = (uint)param_3 & 0xff;
  uVar13 = param_3 & 0xffffffff;
  uVar16 = 0xff;
  if (uVar11 != 0xff) {
    uVar16 = uVar11;
  }
  if (uVar16 == 0xff) {
    bVar3 = FUN_141593180();
    uVar11 = 0xff;
    if (bVar3 != 0xff) {
      uVar11 = (uint)bVar3;
    }
    uVar13 = (ulonglong)(-(uint)((param_3 & 0x600) != 0) & 0x200 | (uint)param_3 & 0x1800 | uVar11);
  }
  if ((uVar11 != 0xff) && ((int)uVar11 < *(int *)(param_1 + 0x7bc))) {
    uVar5 = 0xff;
    if ((int)(uVar13 & 0xff) != 0xff) {
      uVar5 = uVar13 & 0xff;
    }
    uVar16 = (int)uVar13 >> 8 & 1;
    plVar12 = *(longlong **)(param_1 + 8 + uVar5 * 0x18);
    cVar4 = (**(code **)(*plVar12 + 0x60))(plVar12,uVar16);
    if (cVar4 == '\0') {
      iVar14 = *(int *)(param_2 + 0x28);
      plVar12 = (longlong *)0x0;
      if (8 < iVar14) {
        plVar7 = plVar12;
        plVar15 = plVar12;
        if (iVar14 < 1) {
          return;
        }
        while( true ) {
          lVar8 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar8 = param_2;
          }
          puVar1 = (ulonglong *)(*(longlong *)(lVar8 + (longlong)plVar15) + 8);
          LOCK();
          uVar6 = *puVar1;
          if (uVar6 == 0) {
            *puVar1 = 0;
            uVar6 = 0;
          }
          UNLOCK();
          iVar14 = *(int *)(param_2 + 0x28);
          if ((uVar6 >> 0x1a & 1) == 0) break;
          uVar11 = (int)plVar7 + 1;
          plVar7 = (longlong *)(ulonglong)uVar11;
          plVar15 = plVar15 + 1;
          if (iVar14 <= (int)uVar11) {
            return;
          }
        }
      }
      plVar7 = TlsGetValue(DAT_1468a7c78);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar12 = plVar7;
        }
        TlsSetValue(DAT_1468a7c78,plVar12);
        plVar7 = plVar12;
      }
      plVar12 = (longlong *)plVar7[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar7;
        if (plVar12 == (longlong *)0x0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
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
          plVar12 = (longlong *)plVar7[1];
          iVar10 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar10 = 0x20;
          plVar7[1] = (longlong)plVar12;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar10 = (int)plVar7[2];
      }
      plVar7[1] = *plVar12;
      *(int *)(plVar7 + 2) = iVar10 + -1;
      plVar7 = (longlong *)FUN_1415914c0(&local_48);
      local_38 = *plVar7;
      *plVar7 = 0;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      *(int *)((longlong)plVar12 + 0xc) = iVar14 + 1;
      *plVar12 = (longlong)&PTR_FUN_143f3f038;
      *(undefined1 *)((longlong)plVar12 + 0x14) = 0;
      plVar12[3] = local_38;
      if (local_48 != 0) {
        FGraphEvent::Release();
      }
      *(int *)(plVar12 + 2) = (int)uVar13;
      lVar8 = plVar12[3];
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
        UNLOCK();
      }
      local_40 = lVar8;
      FUN_1404458a0(plVar12,param_2,uVar13,1);
      if (lVar8 != 0) {
        FGraphEvent::Release(lVar8);
      }
      plVar12 = *(longlong **)(param_1 + uVar5 * 0x18 + 8);
      (**(code **)(*plVar12 + 0x30))(plVar12,uVar16);
      return;
    }
  }
  FScopedEvent::FScopedEvent(&local_res20);
  FUN_14159c9c0(param_1,local_res20,param_2,uVar11);
  FScopedEvent::~FScopedEvent(&local_res20);
  return;
}



// FUNCTION 14159d600 FUN_14159d600 body=58 status=ok
// SIG undefined FUN_14159d600(void)

void FUN_14159d600(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144c9ff10;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144c9ff58;
  }
  return;
}



// FUNCTION 14159d650 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_1415ab910();
  return 1;
}



// FUNCTION 14159d660 FUN_14159d660 body=58 status=ok
// SIG undefined FUN_14159d660(void)

void FUN_14159d660(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0020;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0068;
  }
  return;
}



// FUNCTION 14159d6b0 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_1415ae040();
  return 1;
}



// FUNCTION 14159d6c0 FUN_14159d6c0 body=236 status=ok
// SIG undefined FUN_14159d6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14159d6c0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  wchar_t *_Source;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  wchar_t *_Dest;
  undefined1 auStack_58 [48];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  puVar5 = auStack_58;
  puVar4 = auStack_58;
  local_20 = DAT_1468387a8 ^ (ulonglong)local_28;
  _Source = (wchar_t *)*param_2;
  lVar2 = param_2[1] - (longlong)_Source >> 1;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = lVar2 + 1;
    _Dest = (wchar_t *)0x0;
    lVar1 = lVar2 * 2;
    if (lVar1 != 0) {
      uVar3 = lVar1 + 0x1e;
      if (uVar3 <= lVar1 + 0xfU) {
        uVar3 = 0xffffffffffffff0;
      }
      puVar4 = auStack_58 + -(uVar3 & 0xfffffffffffffff0);
      _Dest = (wchar_t *)((longlong)&local_20 + -(uVar3 & 0xfffffffffffffff0));
    }
    lVar2 = (longlong)(int)lVar2;
    *(undefined8 *)(puVar4 + -8) = 0x14159d757;
    wcsncpy(_Dest,_Source,lVar2 - 1);
    *(undefined4 *)(puVar4 + 0x28) = 0xffffffff;
    _Dest[lVar2 + -1] = L'\0';
    puVar4[0x20] = 1;
    *(undefined8 *)(puVar4 + -8) = 0x14159d77a;
    FName::Init(param_1,_Dest,0,param_3);
    puVar5 = puVar4;
  }
  *(undefined8 *)(puVar5 + -8) = 0x14159d796;
  return param_1;
}



// FUNCTION 14159d7b0 FUN_14159d7b0 body=177 status=ok
// SIG undefined FUN_14159d7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14159d7b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_258 [32];
  undefined1 local_238 [544];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14159fa40(local_238);
  *param_2 = *param_1;
  FUN_14159f990(param_2 + 1,uVar1);
  lVar3 = 4;
  plVar2 = (longlong *)&stack0x00000048;
  do {
    lVar3 = lVar3 + -1;
    *(undefined4 *)(plVar2 + -0xe) = 0;
    if (plVar2[-0xf] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar2 + -0x17);
    plVar2 = plVar2 + -0xf;
  } while (lVar3 != 0);
  return param_2;
}



// FUNCTION 14159d870 AddCrashProperty<bool> body=213 status=ok
// SIG undefined AddCrashProperty<bool>(void)

void FGenericCrashContext::AddCrashProperty<bool>
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  wchar_t *_Src;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *local_28;
  ulonglong local_20;
  
  _Src = L"false";
  if (*param_3 != '\0') {
    _Src = L"true";
  }
  puVar4 = (undefined2 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  if (*_Src != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (_Src[lVar2] != L'\0');
    uVar1 = (int)lVar2 + 1;
    local_20 = (ulonglong)uVar1;
    uVar3 = uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      uVar3 = (uint)local_20;
    }
    puVar4 = local_28;
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)(int)uVar1 * 2);
    puVar5 = puVar4;
    if (uVar3 != 0) goto LAB_14159d913;
  }
  puVar5 = &DAT_143f3eda8;
LAB_14159d913:
  FUN_1415a2820(param_1,param_2,puVar5);
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
    return;
  }
  return;
}



// FUNCTION 14159d950 Emplace<TTuple<unsigned_int,FVulkanRenderPass_*>_const_&> body=386 status=ok
// SIG undefined Emplace<TTuple<unsigned_int,FVulkanRenderPass_*>_const_&>(void)

int * TSet<TTuple<unsigned_int,FVulkanRenderPass_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPass_*,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<unsigned_int,FVulkanRenderPass_*>_const_&>
                (longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar9 = false;
  uVar5 = *param_3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_2 = local_38[0];
  *local_30 = uVar5;
  local_30[1] = uVar1;
  local_30[2] = uVar2;
  local_30[3] = uVar3;
  local_30[4] = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x18) == *local_30) goto LAB_14159da0b;
          iVar7 = *(int *)(*param_1 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_14159da0b:
    bVar9 = iVar7 != -1;
    if (bVar9) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar7;
      goto LAB_14159daaa;
    }
  }
  cVar4 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar4 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[5] = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    local_30[4] = *(uint *)((longlong)plVar6 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14159daaa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 14159dae0 Emplace<TTuple<FName,FConfigValue>_const_&> body=257 status=ok
// SIG undefined Emplace<TTuple<FName,FConfigValue>_const_&>(void)

undefined4 *
TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
::Emplace<TTuple<FName,FConfigValue>_const_&>
          (longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  FString::FString(local_20 + 1,param_3 + 1);
  FString::FString(local_20 + 3,param_3 + 3);
  *(undefined4 *)(local_20 + 5) = 0xffffffff;
  cVar1 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34));
  if (cVar1 == '\0') {
    uVar3 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & *(int *)(param_1 + 0x48) - 1U;
    *(uint *)((longlong)local_20 + 0x2c) = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(local_20 + 5) =
         *(undefined4 *)
          (lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 14159dbf0 FUN_14159dbf0 body=720 status=ok
// SIG undefined FUN_14159dbf0(void)

int * FUN_14159dbf0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar6 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar12 + lVar4);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = *param_3;
  lVar7 = (longlong)iVar10 * 0x10;
  plVar12 = (longlong *)(*param_1 + lVar7);
  *plVar12 = lVar1;
  *(undefined4 *)(plVar12 + 1) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar9 = iVar15;
    if (uVar13 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x10) == lVar1) break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    bVar16 = iVar9 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),plVar12,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar12 + lVar4);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14159de95;
    }
  }
  if (3 < uVar13) {
    uVar3 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar15;
    }
    uVar3 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar12 >> 0x20) * 0x17 + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0xc) = uVar13;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_1415b32e0(param_1);
  }
LAB_14159de95:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 14159dec0 Emplace<TKeyInitializer<int_const_&>_> body=391 status=ok
// SIG undefined Emplace<TKeyInitializer<int_const_&>_>(void)

int * TSet<TTuple<int,FVisitedCoordinates_*>,TDefaultMapHashableKeyFuncs<int,FVisitedCoordinates_*,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x18) == *local_30) goto LAB_14159df7b;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14159df7b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_14159e01f;
    }
  }
  cVar2 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[5] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[4] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14159e01f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14159e050 FUN_14159e050 body=752 status=ok
// SIG undefined FUN_14159e050(void)

int * FUN_14159e050(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  uint uVar10;
  void *_Dst;
  int iVar11;
  bool local_res8;
  
  iVar11 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FPrimitiveUniformShaderParameters,TSizedDefaultAllocator<32>_>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x230 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x230 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  plVar8 = (longlong *)((longlong)iVar6 * 0x230 + *param_1);
  FUN_14159d7b0(param_3,plVar8);
  *(undefined4 *)(plVar8 + 0x45) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar10 != 1) {
    lVar7 = *plVar8;
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar7 >> 0x20) * 0x17 + (int)lVar7) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x230 + *param_1) == lVar7) goto LAB_14159e1c1;
          iVar6 = *(int *)((longlong)iVar6 * 0x230 + 0x228 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14159e1c1:
    local_res8 = iVar6 != -1;
    if (local_res8) {
      lVar7 = 4;
      _Dst = (void *)((longlong)iVar6 * 0x230 + *param_1);
      plVar5 = (longlong *)((longlong)_Dst + 0x288);
      do {
        lVar7 = lVar7 + -1;
        *(undefined4 *)(plVar5 + -0xe) = 0;
        if (plVar5[-0xf] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar5 + -0x17);
        plVar5 = plVar5 + -0xf;
      } while (lVar7 != 0);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar8,0x228);
      FUN_1415b38a0(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_14159e31a;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar11;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar8 >> 0x20) * 0x17 + (int)*plVar8 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar8 + 0x22c) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 0x45) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_1415b30c0(param_1);
  }
LAB_14159e31a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14159e340 Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_> body=407 status=ok
// SIG undefined Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>(void)

int * TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar5;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x18) == *local_30) goto LAB_14159e40b;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14159e40b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_14159e4af;
    }
  }
  cVar2 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[5] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[4] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14159e4af:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14159e4e0 FUN_14159e4e0 body=727 status=ok
// SIG undefined FUN_14159e4e0(void)

int * FUN_14159e4e0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  bool local_res8;
  
  iVar6 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar1 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar12 = *puVar12 | 1 << ((byte)iVar8 & 0x1f);
  puVar12 = (uint *)((longlong)iVar8 * 0x20 + *param_1);
  uVar2 = param_3[1];
  *puVar12 = *(uint *)*param_3;
  FString::FString(puVar12 + 2,uVar2);
  puVar12[6] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar11 != 1) {
    iVar8 = iVar13;
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x20 + *param_1) == *puVar12) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar13;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar7[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar5 +
                        (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14159e78e;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar13;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar12;
    puVar12[7] = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar12[6] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14159e78e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14159e7c0 Emplace<TPairInitializer<FString_const_&,FConfigSection_const_&>_> body=402 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,FConfigSection_const_&>_>(void)

int * TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FConfigSection_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  FConfigSection::FConfigSection(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 0x16) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
      FConfigSection::~FConfigSection(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0xb0);
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14159e92d;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0xb4) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x16) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_14159e92d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14159e960 FUN_14159e960 body=674 status=ok
// SIG undefined FUN_14159e960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14159e960(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar10 = 0;
  puStack_a8 = (uint *)(param_1 + 2);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar2 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puStack_a8;
    }
    uVar1 = *puVar11;
    uVar9 = uVar10;
    uVar13 = uVar10;
    while (uVar1 == 0) {
      iVar7 = (int)uVar9;
      uStack_d0 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar7 + 1;
      uVar9 = (ulonglong)(uint)local_e8;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14159ea70;
      uVar1 = puVar11[(longlong)iVar7 + 1];
    }
    local_e8._4_4_ = -uVar1 & uVar1;
    iVar7 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_d8._4_4_ = (uStack_d0 - iVar7) + 0x1f;
    if (iVar2 < local_d8._4_4_) {
LAB_14159ea70:
      local_d8._4_4_ = iVar2;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  uStack_98 = uStack_d0;
  uStack_b0 = (uint)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar5 = iVar2 <= local_d8._4_4_;
  uVar9 = uVar10;
  uVar13 = uVar10;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar5) {
LAB_14159eb9d:
    lVar3 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar3;
  }
  do {
    plVar6 = local_e8;
    lVar12 = (longlong)iStack_cc * 0x230;
    lVar3 = *local_e8;
    lVar4 = *(longlong *)(lVar3 + lVar12);
    if ((int)uVar9 != (int)uVar10) {
      puVar8 = local_50;
      if (local_48 != 0) {
        puVar8 = (undefined1 *)0x0;
      }
      for (iVar2 = *(int *)(((ulonglong)puVar8 | local_48) +
                           (longlong)
                           (int)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4 &
                                (int)uVar13 - 1U) * 4); iVar2 != -1;
          iVar2 = *(int *)(local_88 + 8 + (longlong)iVar2 * 0x10)) {
        if (*(longlong *)(local_88 + (longlong)iVar2 * 0x10) == lVar4) {
          if (iVar2 != -1) goto LAB_14159eb67;
          break;
        }
      }
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar12 + lVar3);
    FUN_14159dbf0(&local_88,local_c0,*plVar6 + lVar12,0);
LAB_14159eb67:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_14159eb9d;
    uVar10 = (ulonglong)local_54;
    uVar9 = local_80 & 0xffffffff;
    uVar13 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 14159ec10 FUN_14159ec10 body=905 status=ok
// SIG undefined FUN_14159ec10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14159ec10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar8 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
      plVar7 = plVar8;
      if (local_338 != 0) {
LAB_14159ece0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          plVar11 = plVar13 + 1;
          lVar1 = plVar7[lVar9 >> 1];
          plVar7[lVar9 >> 1] = *plVar7;
          *plVar7 = lVar1;
          plVar8 = plVar7;
LAB_14159ed10:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar13) goto code_r0x00014159ed19;
          goto LAB_14159ed30;
        }
        for (; plVar11 = plVar7, plVar8 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar12 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar13) {
            plVar11 = plVar8;
            if (*(int *)(*plVar12 + 0x30) <= *(int *)(*plVar8 + 0x30)) {
              plVar11 = plVar12;
            }
          }
          lVar9 = *plVar12;
          *plVar12 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_14159eef8;
      }
LAB_14159ede4:
      iVar5 = (int)lVar9;
      iVar3 = (iVar5 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar6 = iVar3;
joined_r0x00014159edfd:
        do {
          if (iVar4 < iVar5) {
            iVar4 = iVar3 * 2;
            iVar10 = iVar4 + 1;
            if (iVar4 + 2 < iVar5) {
              if (*(int *)(plVar8[iVar10] + 0x30) < *(int *)(plVar8[(longlong)iVar4 + 2] + 0x30)) {
                iVar10 = iVar4;
              }
              iVar10 = iVar10 + 1;
            }
            lVar9 = plVar8[iVar3];
            if (*(int *)(plVar8[iVar10] + 0x30) < *(int *)(lVar9 + 0x30)) {
              iVar4 = iVar10 * 2 + 1;
              plVar8[iVar3] = plVar8[iVar10];
              plVar8[iVar10] = lVar9;
              iVar3 = iVar10;
              goto joined_r0x00014159edfd;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar6 + -1;
          iVar2 = iVar4;
          iVar6 = iVar3;
        } while (-1 < iVar3);
      }
      iVar5 = iVar5 + -1;
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        do {
          iVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = plVar8[lVar9];
          plVar8[lVar9] = lVar1;
          if (1 < iVar5) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar5) {
                if (*(int *)(plVar8[iVar4] + 0x30) < *(int *)(plVar8[(longlong)iVar2 + 2] + 0x30)) {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar8[iVar3];
              if (*(int *)(lVar1 + 0x30) <= *(int *)(plVar8[iVar4] + 0x30)) break;
              plVar8[iVar3] = plVar8[iVar4];
              plVar8[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar5);
          }
          iVar5 = iVar5 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_14159eef8:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x00014159ed19:
  if (*(int *)(*plVar7 + 0x30) <= *(int *)(*plVar8 + 0x30)) goto LAB_14159ed10;
LAB_14159ed30:
  do {
    plVar12 = plVar11;
    lVar9 = plVar12[-1];
    plVar11 = plVar12 + -1;
    if (plVar11 <= plVar7) break;
  } while (*(int *)(lVar9 + 0x30) <= *(int *)(*plVar7 + 0x30));
  if (plVar8 <= plVar11) {
    lVar1 = *plVar8;
    *plVar8 = lVar9;
    *plVar11 = lVar1;
    goto LAB_14159ed10;
  }
  lVar1 = *plVar7;
  *plVar7 = lVar9;
  *plVar11 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar11 + (-8 - (longlong)plVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar13) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar11 <= plVar7 + 1) goto LAB_14159eef8;
    plVar13 = plVar12 + -2;
    plVar8 = plVar7;
  }
  else {
    if (plVar7 + 1 < plVar11) {
      *plVar14 = (longlong)plVar7;
      plVar14[1] = (longlong)(plVar12 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar8) goto LAB_14159eef8;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
  plVar7 = plVar8;
  if (local_338 == 0) goto LAB_14159ede4;
  goto LAB_14159ece0;
}



// FUNCTION 14159efa0 LogBogusChars<char,wchar_t> body=481 status=ok
// SIG undefined LogBogusChars<char,wchar_t>(void)

void FGenericPlatformString::LogBogusChars<char,wchar_t>(short *param_1,int param_2)

{
  void *_Dst;
  short sVar1;
  bool bVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong local_48;
  int local_40;
  int local_3c;
  void *local_38;
  int local_30;
  
  bVar2 = false;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    do {
      sVar1 = *param_1;
      param_1 = param_1 + 1;
      if (((char)sVar1 == sVar1) && (-1 < (char)sVar1)) {
        if ((((ushort)(sVar1 - 10U) < 4) || (sVar1 == 0x85)) || ((ushort)(sVar1 + 0xdfd8U) < 2)) {
          if (bVar2) {
            FString::TrimStartInline(&local_48);
          }
          bVar2 = false;
          local_40 = 0;
          iVar3 = 0;
          if (local_3c != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0);
            iVar3 = local_40;
          }
        }
        else if (sVar1 != 0) {
          iVar4 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar4 = 0;
          }
          local_40 = (iVar3 < 1) + 1 + iVar3;
          if (local_3c < local_40) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
          }
          *(short *)(local_48 + (longlong)iVar4 * 2) = sVar1;
          *(undefined2 *)(local_48 + 2 + (longlong)iVar4 * 2) = 0;
          iVar3 = local_40;
        }
      }
      else {
        FString::PrintfImpl(&local_38,L"[0x%X]",sVar1);
        _Src = local_38;
        iVar3 = local_40;
        iVar4 = 0;
        if (local_30 != 0) {
          iVar4 = local_30 + -1;
        }
        if (iVar4 != 0) {
          lVar5 = (longlong)local_40;
          local_40 = (uint)(local_40 == 0) + local_40 + iVar4;
          if (local_3c < local_40) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
          }
          _Dst = (void *)(local_48 + (lVar5 - (ulonglong)(iVar3 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
        }
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        bVar2 = true;
        iVar3 = local_40;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (bVar2) {
      FString::TrimStartInline(&local_48);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14159f190 LogBogusChars<wchar_t,char> body=433 status=ok
// SIG undefined LogBogusChars<wchar_t,char>(void)

void FGenericPlatformString::LogBogusChars<wchar_t,char>(char *param_1,int param_2)

{
  void *_Dst;
  char cVar1;
  bool bVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong local_38;
  int local_30;
  int local_2c;
  void *local_28;
  int local_20;
  
  bVar2 = false;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      if (cVar1 < '\0') {
        FString::PrintfImpl(&local_28,L"[0x%X]",(int)cVar1);
        _Src = local_28;
        iVar3 = local_30;
        iVar4 = 0;
        if (local_20 != 0) {
          iVar4 = local_20 + -1;
        }
        if (iVar4 != 0) {
          lVar5 = (longlong)local_30;
          local_30 = (uint)(local_30 == 0) + local_30 + iVar4;
          if (local_2c < local_30) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
          }
          _Dst = (void *)(local_38 + (lVar5 - (ulonglong)(iVar3 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
        }
        if (local_28 != (void *)0x0) {
          FMemory::Free(local_28);
        }
        bVar2 = true;
        iVar3 = local_30;
      }
      else if (((byte)(cVar1 - 10U) < 4) || (cVar1 == -0x7b)) {
        if (bVar2) {
          FString::TrimStartInline(&local_38);
        }
        bVar2 = false;
        local_30 = 0;
        iVar3 = 0;
        if (local_2c != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0);
          iVar3 = local_30;
        }
      }
      else if (cVar1 != '\0') {
        iVar4 = iVar3 + -1;
        if (iVar3 < 1) {
          iVar4 = 0;
        }
        local_30 = (iVar3 < 1) + 1 + iVar3;
        if (local_2c < local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
        }
        *(short *)(local_38 + (longlong)iVar4 * 2) = (short)cVar1;
        *(undefined2 *)(local_38 + 2 + (longlong)iVar4 * 2) = 0;
        iVar3 = local_30;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (bVar2) {
      FString::TrimStartInline(&local_38);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14159f350 StrCrc32<char> body=119 status=ok
// SIG undefined StrCrc32<char>(void)

uint FCrc::StrCrc32<char>(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  param_2 = ~param_2;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    uVar2 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(((int)cVar1 ^ param_2) & 0xff) * 4) ^
            param_2 >> 8;
    uVar2 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    param_2 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    cVar1 = *param_1;
  }
  return ~param_2;
}



// FUNCTION 14159f3d0 FUN_14159f3d0 body=893 status=ok
// SIG undefined FUN_14159f3d0(void)

undefined8 * FUN_14159f3d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  return param_1;
}



// FUNCTION 14159f750 FConfigSection body=124 status=ok
// SIG undefined FConfigSection(void)

undefined8 * FConfigSection::FConfigSection(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::operator=();
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=(param_1 + 10,param_2 + 0x50);
  return param_1;
}



// FUNCTION 14159f7d0 FUN_14159f7d0 body=436 status=ok
// SIG undefined FUN_14159f7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14159f7d0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar3 = (undefined8 *)operator_new(0x28,param_1);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_GetPoolName_143f3f4f8;
    puVar3[2] = FUN_1415bb140;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[4] = uVar4;
  }
  param_1[2] = 0;
  param_1[3] = 0xbff0000000000000;
  FUN_14159fa40(param_1 + 4);
  FUN_14159fa40(param_1 + 0x48);
  plVar1 = param_1 + 0x8c;
  lVar5 = 4;
  puVar3 = param_1 + 0x8e;
  *plVar1 = 0;
  param_1[0x8d] = 0;
  lVar6 = (longlong)param_1 + 0x49c;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 10;
    *(undefined8 *)(lVar6 + -0x24) = 0;
    *(undefined8 *)(lVar6 + -0xc) = 0;
    *(undefined8 *)(lVar6 + -4) = 0;
    *(undefined4 *)(lVar6 + 4) = 0xffffffff;
    *(undefined4 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x14) = 0;
    *(undefined4 *)(lVar6 + 0x1c) = 0;
    lVar6 = lVar6 + 0x50;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0xb6] = 0;
  lVar6 = 0x32;
  param_1[0xb7] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 1;
  do {
    lVar5 = operator_new(0x220);
    uVar4 = 0;
    if (lVar5 != 0) {
      uVar4 = FUN_14159fa40(lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x8d);
    *(int *)(param_1 + 0x8d) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x46c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar4 = FUN_14164ab60();
  FUN_14158f860(uVar4,local_res8,param_1,L"FGbxCoreStat_Tick",0);
  _DAT_1468b0290 = 0;
  _DAT_1468b0298 = 0;
  return param_1;
}



// FUNCTION 14159f990 FUN_14159f990 body=170 status=ok
// SIG undefined FUN_14159f990(void)

longlong FUN_14159f990(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x38);
  lVar1 = param_1 + 0x8c;
  lVar2 = 4;
  do {
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined4 *)(lVar1 + -0x3c) = 0;
    *puVar3 = 0;
    *(undefined8 *)(lVar1 + -0x4c) = 0;
    *(undefined8 *)(lVar1 + -0x44) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::Empty(lVar1 + -0x2c,*(int *)(lVar1 + -0x24) - *(int *)(lVar1 + 8));
    puVar3 = puVar3 + 0xf;
    lVar1 = lVar1 + 0x78;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1415a4ef0(param_1,param_2);
  return param_1;
}



// FUNCTION 14159fa40 FUN_14159fa40 body=169 status=ok
// SIG undefined FUN_14159fa40(void)

longlong FUN_14159fa40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x38);
  lVar1 = param_1 + 0x8c;
  lVar2 = 4;
  do {
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined4 *)(lVar1 + -0x3c) = 0;
    *puVar3 = 0;
    *(undefined8 *)(lVar1 + -0x4c) = 0;
    *(undefined8 *)(lVar1 + -0x44) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::Empty(lVar1 + -0x2c,*(int *)(lVar1 + -0x24) - *(int *)(lVar1 + 8));
    puVar3 = puVar3 + 0xf;
    lVar1 = lVar1 + 0x78;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1415b4e30(param_1);
  return param_1;
}



// FUNCTION 14159faf0 FUN_14159faf0 body=213 status=ok
// SIG undefined FUN_14159faf0(void)

undefined8 *
FUN_14159faf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             char param_5,longlong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_58 [80];
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = AK::MemoryMgr::StartProfileThreadUsage;
  *(bool *)((longlong)param_1 + 0x75) = param_6 != 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(char *)((longlong)param_1 + 0x74) = param_5;
  if (param_4 != 0) {
    uVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_4);
    TFunction<void___cdecl(int)>::operator=(param_1 + 4,uVar1);
    param_5 = *(char *)((longlong)param_1 + 0x74);
  }
  lVar2 = -1;
  if (param_5 == '\0') {
    lVar2 = param_6;
  }
  param_1[2] = lVar2;
  *param_1 = &PTR__scalar_deleting_destructor__144ca0718;
  param_1[0x11] = param_3;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  return param_1;
}



// FUNCTION 14159fbd0 FUN_14159fbd0 body=70 status=ok
// SIG undefined FUN_14159fbd0(void)

undefined8 * FUN_14159fbd0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ca06b0;
  param_1[2] = 0;
  param_1[3] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,0x8001);
  *(int *)(param_1 + 4) = DAT_1468b02a4;
  DAT_1468b02a4 = DAT_1468b02a4 + 1;
  return param_1;
}



// FUNCTION 14159fc20 FUN_14159fc20 body=520 status=ok
// SIG undefined FUN_14159fc20(void)

undefined8 * FUN_14159fc20(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 local_b8 [144];
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca0818;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[0xb] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  lVar4 = FUN_1416a13c0(local_b8);
  iVar1 = *(int *)(lVar4 + 0x10);
  if (*(int *)(lVar4 + 0x10) == 0) {
    iVar1 = 0x10000;
  }
  uVar5 = FWindowsPlatformMemory::BinnedAllocFromOS(iVar1 + 0x1fffffU & -iVar1);
  param_1[7] = uVar5;
  uVar2 = FUN_1415aaf40(param_1);
  lVar4 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar2);
  param_1[9] = lVar4;
  if ((lVar4 == 0) || (param_1[7] == 0)) {
    FWindowsPlatformMisc::LocalPrint(L"Memory pools allocations failed, exiting...\n");
    FUN_1416a8180(1);
  }
  if (((*(byte *)(param_1 + 7) & 0xf) != 0) || ((*(byte *)(param_1 + 9) & 0xf) != 0)) {
    FWindowsPlatformMisc::LocalPrint
              (L"OS allocations must be aligned to a value multiple of 16, exiting...\n");
    FUN_1416a8180(1);
  }
  lVar4 = 0xe;
  puVar13 = param_1 + 0xc;
  do {
    puVar11 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)operator_new(0x4020);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      *(int *)(puVar6 + 2) =
           *(int *)(((longlong)&DAT_1464a8c70 - (longlong)param_1) + (longlong)puVar13) + 0x10;
      iVar1 = *(int *)((longlong)puVar13 + (0x1464a8c74 - (longlong)param_1));
      *(int *)(puVar6 + 0x803) = iVar1;
      uVar8 = 0;
      if (iVar1 != 0) {
        do {
          uVar8 = *(uint *)(param_1 + 10);
          uVar12 = *(int *)(puVar6 + 2) + uVar8;
          uVar3 = FUN_1415aaf40(param_1);
          if (uVar3 < uVar12) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            *(uint *)(param_1 + 10) = uVar12;
            puVar7 = (undefined8 *)((ulonglong)uVar8 + param_1[9]);
          }
          *puVar7 = 0;
          puVar7[1] = puVar7 + 2;
          uVar3 = (int)puVar11 + 1;
          puVar6[(longlong)puVar11 + 3] = puVar7;
          uVar8 = *(uint *)(puVar6 + 0x803);
          puVar11 = (undefined8 *)(ulonglong)uVar3;
        } while (uVar3 < uVar8);
      }
      if (uVar8 < 0x800) {
        lVar10 = (ulonglong)uVar8 * 8 + 0x18;
        uVar9 = (ulonglong)(0x800 - uVar8);
        do {
          *(undefined8 *)(lVar10 + (longlong)puVar6) = 0;
          lVar10 = lVar10 + 8;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        uVar8 = *(uint *)(puVar6 + 0x803);
      }
      *(uint *)((longlong)puVar6 + 0x401c) = *(int *)(puVar6 + 2) * uVar8 + 0x4000;
      puVar11 = puVar6;
    }
    *puVar13 = puVar11;
    puVar13 = puVar13 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return param_1;
}



// FUNCTION 14159fe30 FUN_14159fe30 body=117 status=ok
// SIG undefined FUN_14159fe30(void)

undefined8 * FUN_14159fe30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14169dad0();
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[6] = puVar1[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(puVar1 + 7);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 14159feb0 FUN_14159feb0 body=525 status=ok
// SIG undefined FUN_14159feb0(void)

longlong *
FUN_14159feb0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,size_t param_8,int param_9)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  void *_Dst;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  FUN_14159faf0(param_1,param_3,param_4,param_5,0,param_6);
  _Dst = (void *)0x0;
  *param_1 = (longlong)&PTR__scalar_deleting_destructor__144ca0770;
  param_1[0x12] = param_2;
  param_1[0x13] = param_7;
  param_1[0x14] = param_8;
  *(int *)(param_1 + 0x15) = param_9;
  if (0 < param_9) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 0x30);
    pvVar2 = (void *)param_1[2];
    BVar5 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar5 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar9 = *(longlong **)(param_2 + 0x20);
    plVar1 = plVar9 + *(int *)(param_2 + 0x28);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar3 = *plVar9;
      lVar10 = *(longlong *)(lVar3 + 0x98);
      if ((((param_7 < lVar10) ||
           (*(longlong *)(lVar3 + 0xa0) + lVar10 < (longlong)(param_7 + param_8))) ||
          (*(char *)(lVar3 + 0x71) == '\0')) || (lVar8 = *(longlong *)(lVar3 + 0x10), lVar8 == 0)) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = pvVar2;
        if (pvVar2 == (void *)0x0) {
          _Dst = (void *)FMemory::Malloc(param_8,0);
          lVar8 = *(longlong *)(lVar3 + 0x10);
          lVar10 = *(longlong *)(lVar3 + 0x98);
        }
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)((lVar8 - lVar10) + param_7),param_8);
        if (_Dst != (void *)0x0) break;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (_Dst != (void *)0x0) {
      param_1[2] = (longlong)_Dst;
      IAsyncReadRequest::SetComplete(param_1);
      return param_1;
    }
  }
  puVar7 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)operator_new(0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_Abandon_144ca0738;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar7 = puVar6;
  }
  param_1[0xf] = (longlong)puVar7;
  cVar4 = FUN_1415bac00();
  if (cVar4 == '\0') {
    FAsyncTask<FGenericReadRequestWorker>::Start(param_1[0xf],1,DAT_1468b5010);
    (**(code **)(*param_1 + 8))(param_1,0);
  }
  else {
    FAsyncTask<FGenericReadRequestWorker>::Start(param_1[0xf],0,DAT_1468b5018);
  }
  return param_1;
}



// FUNCTION 1415a00c0 FBehaviorTreeInstanceId body=36 status=ok
// SIG undefined FBehaviorTreeInstanceId(void)

undefined8 * FBehaviorTreeInstanceId::FBehaviorTreeInstanceId(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return param_1;
}



// FUNCTION 1415a00f0 FUN_1415a00f0 body=1931 status=ok
// SIG undefined FUN_1415a00f0(void)

longlong * FUN_1415a00f0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined1 local_e8 [8];
  longlong *local_e0;
  int local_d8;
  undefined8 local_d0;
  uint *puStack_c8;
  undefined4 local_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_40;
  longlong *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  local_a8 = param_1;
  FUN_1415a62c0(param_1,0);
  plVar13 = param_1 + 3;
  *plVar13 = 0;
  param_1[4] = 0;
  local_38 = plVar13;
  plVar9 = (longlong *)FConfigCacheIni::FindConfigFile(DAT_1468b6148,&DAT_1468e2360);
  if (plVar9 != (longlong *)0x0) {
    local_b0 = -1;
    do {
      local_b0 = local_b0 + 1;
    } while (L"PiecewiseInterp."[local_b0] != L'\0');
    iVar14 = (int)plVar9[5];
    puStack_c8 = (uint *)(plVar9 + 2);
    uVar20 = 0;
    local_d0 = (uint *)0x100000000;
    uStack_bc = 0;
    if (iVar14 != 0) {
      puVar22 = (uint *)plVar9[4];
      if ((uint *)plVar9[4] == (uint *)0x0) {
        puVar22 = puStack_c8;
      }
      uVar4 = *puVar22;
      iVar5 = 0;
      while (uVar4 == 0) {
        uVar20 = uVar20 + 0x20;
        uStack_bc = (ulonglong)uVar20 << 0x20;
        uVar23 = (ulonglong)local_d0 >> 0x20;
        local_d0 = (uint *)CONCAT44((int)uVar23,iVar5 + 1);
        if ((int)((iVar14 + -1 >> 0x1f & 0x1fU) + iVar14 + -1) >> 5 <= iVar5) goto LAB_1415a0230;
        uVar4 = puVar22[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_d0 = (uint *)CONCAT44(uVar4,SUB84(local_d0,0));
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iVar5 = (uVar20 - iVar5) + 0x1f;
      uStack_bc._4_4_ = (undefined4)((ulonglong)uStack_bc >> 0x20);
      uStack_bc = CONCAT44(uStack_bc._4_4_,iVar5);
      if (iVar14 < iVar5) {
LAB_1415a0230:
        uStack_bc = CONCAT44(uStack_bc._4_4_,iVar14);
      }
    }
    local_c0 = 0xffffffff;
    uStack_88 = CONCAT44((int)uStack_bc,0xffffffff);
    uStack_80 = CONCAT44(uStack_b4,uStack_bc._4_4_);
    puStack_98 = local_d0;
    uStack_60 = local_d0;
    local_48 = uStack_bc._4_4_;
    uStack_44 = uStack_b4;
    uStack_50 = uStack_88;
    iVar5 = (int)uStack_bc;
    local_a0 = plVar9;
    uStack_90 = puStack_c8;
    local_68 = plVar9;
    local_58 = puStack_c8;
    if ((int)uStack_bc < iVar14) {
      do {
        plVar13 = local_68;
        puVar17 = (undefined8 *)(*local_68 + (longlong)iVar5 * 0xb8);
        iVar14 = *(int *)(puVar17 + 1) + -1;
        if (*(int *)(puVar17 + 1) == 0) {
          iVar14 = 0;
        }
        if (((int)local_b0 < iVar14) &&
           (cVar3 = FString::StartsWith(puVar17,L"PiecewiseInterp.",1), cVar3 != '\0')) {
          puVar22 = (uint *)*puVar17;
          iVar7 = -1;
          iVar14 = *(int *)(puVar17 + 1);
          iVar6 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar6 = 0;
          }
          puVar16 = (uint *)((longlong)puVar22 + (longlong)iVar6 * 2);
          for (puVar10 = puVar22; (puVar10 != puVar16 && ((short)*puVar10 != 0x40));
              puVar10 = (uint *)((longlong)puVar10 + 2)) {
          }
          if (puVar10 == puVar16) {
            puVar16 = (uint *)&DAT_143f3eda8;
            if (iVar14 != 0) {
              puVar16 = puVar22;
            }
            FName::FName(&local_40,puVar16,1);
            lVar12 = local_40;
          }
          else {
            local_d0 = puVar22;
            puStack_c8 = puVar10;
            plVar9 = (longlong *)FUN_14159d6c0(&local_e0,&local_d0,1);
            lVar12 = *plVar9;
            iVar7 = _wtoi((wchar_t *)((longlong)puVar10 + 2));
          }
          lVar21 = 0;
          iVar14 = (int)param_1[2];
          plVar9 = (longlong *)*param_1;
          iVar6 = 0;
          iVar8 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar8 = iVar6;
          }
          plVar18 = plVar9 + iVar8 / 0x12;
          if (plVar9 != (longlong *)0x0) {
            lVar21 = *plVar9;
          }
          if ((iVar14 == 0) || (iVar6 = iVar14 / 0x12, iVar14 != iVar6 * 0x12)) {
            uVar23 = 0;
          }
          else {
            uVar23 = 1;
          }
          plVar1 = plVar9 + ((uVar23 ^ 1) - 1) + (longlong)iVar6;
          if (plVar1 == (longlong *)0x0) {
            lVar15 = 0;
          }
          else if ((char)uVar23 == '\0') {
            lVar15 = (longlong)(iVar14 + iVar6 * -0x12) * 0x38 + *plVar1;
          }
          else {
            lVar15 = *plVar1 + 0x3f0;
          }
          while (lVar21 != lVar15) {
            if ((*(longlong *)(lVar21 + 0x28) == lVar12) && (*(int *)(lVar21 + 0x30) == iVar7))
            goto LAB_1415a0644;
            lVar21 = lVar21 + 0x38;
            if ((plVar9 != plVar18) && (lVar21 == *plVar9 + 0x3f0)) {
              lVar21 = plVar9[1];
              plVar9 = plVar9 + 1;
            }
          }
          uStack_90 = (uint *)0x0;
          uStack_80 = 0;
          local_a0 = (longlong *)0x0;
          puStack_98 = (uint *)0x0;
          uStack_88 = 0;
          local_78 = lVar12;
          local_70 = iVar7;
          cVar3 = FUN_1415abbe0(&local_a0,*plVar13 + 0x10 + (longlong)iVar5 * 0xb8);
          lVar12 = uStack_88;
          puVar22 = puStack_98;
          if (cVar3 != '\0') {
            iVar14 = (int)param_1[2];
            if (iVar14 == (iVar14 / 0x12) * 0x12) {
              uVar11 = FMemory::Malloc(0x3f0,0);
              iVar5 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar5 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
              }
              *(undefined8 *)((longlong)iVar5 * 8 + *param_1) = uVar11;
              if (*(longlong *)((longlong)iVar5 * 8 + *param_1) != 0) {
                FUN_14159f3d0();
              }
            }
            plVar13 = local_38;
            *(int *)(param_1 + 2) = (int)param_1[2] + 1;
            puVar17 = (undefined8 *)
                      ((ulonglong)(uint)(iVar14 % 0x12) * 0x38 +
                      *(longlong *)(*param_1 + (longlong)(iVar14 / 0x12) * 8));
            if (puVar17 == (undefined8 *)0x0) {
              puVar17 = (undefined8 *)0x0;
              lVar12 = uStack_88;
              puVar22 = puStack_98;
            }
            else {
              *puVar17 = local_a0;
              puVar17[1] = puStack_98;
              *(undefined4 *)(puVar17 + 2) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)puVar17 + 0x14) = uStack_90._4_4_;
              puVar17[3] = uStack_88;
              *(undefined4 *)(puVar17 + 4) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_80._4_4_;
              puVar17[5] = local_78;
              *(int *)(puVar17 + 6) = local_70;
              lVar12 = 0;
              puVar22 = (uint *)0x0;
            }
            plVar18 = (longlong *)*local_38;
            iVar14 = (int)local_38[1];
            plVar9 = plVar18 + (longlong)iVar14 * 2;
            if (plVar18 != plVar9) {
              do {
                if (puVar17[5] == *(longlong *)(*(longlong *)*plVar18 + 0x28)) {
                  iVar14 = (int)plVar18[1];
                  *(int *)(plVar18 + 1) = iVar14 + 1;
                  if (*(int *)((longlong)plVar18 + 0xc) < iVar14 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar18,iVar14);
                  }
                  *(undefined8 **)(*plVar18 + (longlong)iVar14 * 8) = puVar17;
                  goto LAB_1415a0626;
                }
                plVar18 = plVar18 + 2;
              } while (plVar18 != plVar9);
            }
            *(int *)(local_38 + 1) = iVar14 + 1;
            if (*(int *)((longlong)local_38 + 0xc) < iVar14 + 1) {
              TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
              ResizeGrow(local_38,iVar14);
            }
            puVar19 = (undefined8 *)(*plVar13 + (longlong)iVar14 * 0x10);
            *puVar19 = 0;
            puVar19[1] = 1;
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar19,0);
            *(undefined8 **)*puVar19 = puVar17;
          }
LAB_1415a0626:
          if (lVar12 != 0) {
            FMemory::Free(lVar12);
          }
          param_1 = local_a8;
          if (puVar22 != (uint *)0x0) {
            FMemory::Free(puVar22);
            param_1 = local_a8;
          }
        }
LAB_1415a0644:
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_60._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
        iVar5 = uStack_50._4_4_;
      } while (uStack_50._4_4_ < (int)local_58[6]);
      plVar13 = param_1 + 3;
    }
    uVar2 = local_e8[0];
    plVar9 = (longlong *)*plVar13;
    plVar13 = plVar9 + (longlong)(int)plVar13[1] * 2;
    for (; plVar9 != plVar13; plVar9 = plVar9 + 2) {
      if (1 < (int)plVar9[1]) {
        local_e8[0] = 0;
        FUN_14159ec10(*plVar9,(longlong)(int)plVar9[1],uVar2,local_e8);
        if ((int)plVar9[1] == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(*plVar9 + -8 + (longlong)(int)plVar9[1] * 8);
        }
        iVar14 = 0;
        for (iVar5 = 0; (iVar6 = iVar14 + 1, -1 < iVar5 && (iVar5 < (int)plVar9[1]));
            iVar5 = iVar5 + 1) {
          lVar21 = *(longlong *)((longlong)iVar5 * 8 + *plVar9);
          if ((lVar21 != lVar12) && (cVar3 = FUN_1415a7040(lVar21,lVar12), cVar3 == '\0')) {
            iVar7 = (int)plVar9[1];
            iVar8 = (iVar7 - iVar5) + -1;
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar9 + (longlong)iVar5 * 8),
                         (void *)(*plVar9 + (longlong)iVar6 * 8),(longlong)iVar8 << 3);
              iVar7 = (int)plVar9[1];
            }
            *(int *)(plVar9 + 1) = iVar7 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar9);
            iVar5 = iVar5 + -1;
            iVar6 = iVar14;
          }
          iVar14 = iVar6;
        }
      }
      param_1 = local_a8;
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  lVar12 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DetailMode");
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[5] = lVar12;
  FUN_1415af000(param_1,lVar12);
  local_e0 = (longlong *)0x0;
  plVar13 = (longlong *)FMemory::Realloc(0,0x30);
  local_d8 = 3;
  local_e0 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = (longlong)param_1;
    *plVar13 = (longlong)&PTR_GetPoolName_1446fea78;
    plVar13[2] = (longlong)FUN_1415af000;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar13[4] = lVar12;
    *plVar13 = (longlong)&PTR_GetPoolName_1446feac0;
  }
  (**(code **)(*(longlong *)param_1[5] + 0x80))((longlong *)param_1[5],&local_e0);
  if (local_d8 != 0) {
    if (local_e0 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_e0 + 0x28))(local_e0,0);
    if (local_e0 != (longlong *)0x0) {
      local_e0 = (longlong *)FMemory::Realloc(local_e0,0,0);
    }
    local_d8 = 0;
  }
  if (local_e0 != (longlong *)0x0) {
    FMemory::Free(local_e0);
  }
  return param_1;
}



// FUNCTION 1415a0880 FUN_1415a0880 body=135 status=ok
// SIG undefined FUN_1415a0880(void)

DWORD * FUN_1415a0880(DWORD *param_1,char param_2)

{
  longlong lVar1;
  LARGE_INTEGER local_res8;
  char local_res10 [8];
  undefined1 *local_18;
  char *pcStack_10;
  
  QueryPerformanceCounter(&local_res8);
  *param_1 = local_res8.s.LowPart;
  *(char *)(param_1 + 1) = param_2;
  if (param_2 == '\0') {
    pcStack_10 = local_res10;
    local_18 = &LAB_1415a3fa0;
    local_res10[0] = param_2;
    lVar1 = FUN_1415d8310(&local_18,&DAT_1464a8d70);
    if (*(char *)(lVar1 + 0x54) != '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
    *(undefined1 *)(lVar1 + 0x54) = 1;
  }
  return param_1;
}



// FUNCTION 1415a0910 FUN_1415a0910 body=843 status=ok
// SIG undefined FUN_1415a0910(void)

longlong * FUN_1415a0910(longlong *param_1)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong *local_58;
  undefined4 local_50;
  
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x100);
  plVar12 = (longlong *)param_1[0xe];
  uVar13 = (undefined4)DAT_1468e2430;
  plVar7 = plVar12 + (int)param_1[0xf];
joined_r0x0001415a097a:
  if (plVar12 != plVar7) {
    lVar6 = *plVar12;
    if (*(int *)(lVar6 + 0x10) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(lVar6 + 8);
    }
    pwVar10 = L"EngineInitialization";
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa265031c) + (longlong)pwVar10);
      if ((wVar1 == L'\0') && (*pwVar10 == L'\0')) goto LAB_1415a09e1;
      if (wVar1 != *pwVar10) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar10);
        if (wVar2 != wVar3) goto LAB_1415a09d3;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
  puVar11 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)operator_new(0x48);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
    *(undefined8 *)(puVar5 + 4) = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar5 + 2,0);
    builtin_wcsncpy(*(wchar_t **)(puVar5 + 2),L"EngineInitialization",0x15);
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 8) = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar5 + 6,0);
    builtin_wcsncpy(*(wchar_t **)(puVar5 + 6),L"EngineInitialization",0x15);
    FString::FString(puVar5 + 10,param_1 + 0x10);
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puVar11 = puVar5;
  }
  iVar4 = (int)param_1[0xf];
  *(int *)(param_1 + 0xf) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x7c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,iVar4);
  }
  *(undefined4 **)(param_1[0xe] + (longlong)iVar4 * 8) = puVar11;
  lVar6 = *(longlong *)(param_1[0xe] + (longlong)iVar4 * 8);
LAB_1415a0b7e:
  lVar6 = FUN_1415aad90(param_1,lVar6,L"PreInit");
  *param_1 = lVar6;
  **(undefined4 **)(lVar6 + 0x60) = 0xffffffff;
  FUN_1415af320(*param_1,uVar13);
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  local_50 = 2;
  local_58 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_144ca0a78;
    plVar7[1] = (longlong)FUN_1415b4710;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar6;
    *plVar7 = (longlong)&PTR_GetPoolName_144ca0ac0;
  }
  FUN_1415a2a90(param_1,&local_58);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar6 = FMemory::Realloc(plVar7,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return param_1;
LAB_1415a09d3:
  if (wVar2 == wVar3) {
LAB_1415a09e1:
    if (*(int *)(lVar6 + 0x20) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(lVar6 + 0x18);
    }
    pwVar10 = L"EngineInitialization";
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa265031c) + (longlong)pwVar10);
      if ((wVar1 == L'\0') && (*pwVar10 == L'\0')) goto LAB_1415a0a3b;
      if (wVar1 != *pwVar10) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar10);
        if (wVar2 != wVar3) goto LAB_1415a0a31;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
  goto LAB_1415a0a75;
LAB_1415a0a31:
  if (wVar2 == wVar3) {
LAB_1415a0a3b:
    if ((int)param_1[0x11] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)param_1[0x10];
    }
    if (*(int *)(lVar6 + 0x30) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar6 + 0x28);
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar4 == 0) goto LAB_1415a0b7e;
  }
LAB_1415a0a75:
  plVar12 = plVar12 + 1;
  goto joined_r0x0001415a097a;
}



// FUNCTION 1415a0c60 FUN_1415a0c60 body=95 status=ok
// SIG undefined FUN_1415a0c60(void)

void FUN_1415a0c60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x68);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    lVar2 = lVar2 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x60);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415a0cc0 ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=219 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c;
      lVar1 = *local_38;
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1415a0da0 ~FConfigSection body=148 status=ok
// SIG undefined ~FConfigSection(void)

void FConfigSection::~FConfigSection(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415a0e40 ~FGenericBaseRequest body=126 status=ok
// SIG undefined ~FGenericBaseRequest(void)

void FGenericBaseRequest::~FGenericBaseRequest(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca0718;
  if (param_1[0xf] != 0) {
    FAsyncTask<FGenericReadRequestWorker>::EnsureCompletion(param_1[0xf],1);
    plVar1 = (longlong *)param_1[0xf];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
    }
  }
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1415a0ec0 FUN_1415a0ec0 body=388 status=ok
// SIG undefined FUN_1415a0ec0(void)

void FUN_1415a0ec0(DWORD *param_1)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined1 *local_48;
  undefined1 *puStack_40;
  
  if ((char)param_1[1] == '\0') {
    puStack_40 = local_res8;
    local_48 = &LAB_1415a3fa0;
    local_res8[0] = 0;
    lVar4 = FUN_1415d8310(&local_48,&DAT_1464a8d70);
    QueryPerformanceCounter(&local_res20);
    DVar1 = *param_1;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    }
    puStack_40 = local_res10;
    local_48 = &LAB_1415a3fa0;
    local_res10[0] = 0;
    lVar5 = FUN_1415d8310(&local_48,&DAT_1464a8d70);
    if ((*(char *)(lVar4 + 0x55) != '\0') &&
       (QueryPerformanceCounter(&local_res18),
       ((double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) * DAT_1468b02f8 + 16777216.0)
       - *(double *)(lVar5 + 0x60) < 0.1)) {
      iVar2 = *(int *)(lVar5 + 0x48);
      if (iVar2 < *(int *)(lVar5 + 0x4c) - iVar2) {
        local_res18.s.HighPart = local_res20.s.LowPart;
        *(int *)(lVar5 + 0x48) = iVar2 + 1;
        local_res18.s.LowPart = DVar1;
        if (*(int *)(lVar5 + 0x4c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x40,iVar2);
        }
        *(ulonglong *)(*(longlong *)(lVar5 + 0x40) + (longlong)iVar2 * 8) =
             CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart);
        *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + (local_res20.s.LowPart - DVar1);
      }
      else {
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    *(undefined1 *)(lVar4 + 0x54) = 0;
  }
  return;
}



// FUNCTION 1415a1050 FUN_1415a1050 body=574 status=ok
// SIG undefined FUN_1415a1050(void)

void FUN_1415a1050(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *_Dst;
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
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
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
      if (bVar5) goto LAB_1415a111c;
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
LAB_1415a111c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1415a11e2;
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
LAB_1415a11e2:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    _Dst = *(int **)(*plVar1 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (_Dst != (int *)0x0) {
      if ((*_Dst != 0) || (_Dst[1] != 0)) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x208);
      }
      FUN_1415b1b00(&DAT_1468b0dd0,_Dst);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  return;
}



// FUNCTION 1415a1290 FUN_1415a1290 body=103 status=ok
// SIG undefined FUN_1415a1290(void)

void FUN_1415a1290(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1415a1300 operator= body=98 status=ok
// SIG undefined operator=(void)

undefined8 TFunction<void___cdecl(int)>::operator=(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FGenericPlatformMemory::MemswapGreaterThan8(param_2,param_1,0x50);
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_2 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415a1370 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1415a14ad;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1415a14ad:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<FName,FConfigValue>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x30 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1415a1550 operator= body=691 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1415a162c;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415a162c:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1415a16e1;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415a16e1:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      lVar6 = (longlong)(int)uStack_3c * 0x30 + *param_1;
      if (*(longlong *)(lVar6 + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 8) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415a1810 FUN_1415a1810 body=372 status=ok
// SIG undefined FUN_1415a1810(void)

longlong * FUN_1415a1810(longlong *param_1,longlong *param_2)

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
        FUN_14158ce90(param_1,(longlong)(int)puVar6 * 0x10 + *param_2);
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
    FUN_14158ce90(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1415a1990 operator() body=773 status=ok
// SIG undefined operator()(void)

void <lambda_c6658ba91229cdb400a3c832ffd22761>::operator()(undefined8 param_1,undefined8 *param_2)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *local_48;
  int local_40;
  int local_3c;
  undefined8 *local_38;
  int local_30;
  int iStack_2c;
  
  puVar7 = (undefined8 *)0x0;
  iVar3 = 0;
  if ((*(char *)(param_2 + 4) != '\0') && ((void **)param_2 != &DAT_1468b1080)) {
    DAT_1468b1088 = *(int *)(param_2 + 1);
    lVar5 = (longlong)DAT_1468b1088;
    pvVar1 = (void *)*param_2;
    if ((DAT_1468b1088 == 0) && (DAT_1468b108c == 0)) {
      DAT_1468b108c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b1080,DAT_1468b1088);
      ::_guard_xfg_dispatch_icall_nop(DAT_1468b1080,pvVar1,lVar5 * 2);
    }
  }
  if (*(char *)((longlong)param_2 + 0x21) != '\0') {
    local_38 = (undefined8 *)0x0;
    local_30 = 5;
    iStack_2c = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    *local_38 = 0x2d003400450055;
    *(undefined2 *)(local_38 + 1) = 0;
    puVar8 = local_38;
    iVar10 = local_30;
    iVar9 = iStack_2c;
    if (DAT_146299580 != 0) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while ((&DAT_146299580)[lVar5] != 0);
      iVar2 = (int)lVar5;
      if ((local_30 != 0) || (iVar10 = 1, iVar2 == 0)) {
        iVar10 = iVar3;
      }
      local_48 = local_38;
      local_40 = local_30;
      local_3c = iStack_2c;
      if (iStack_2c < local_30 + iVar10 + iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      }
      iVar4 = local_40;
      puVar8 = local_48;
      iVar10 = local_40;
      iVar9 = local_3c;
      if (iVar2 != 0) {
        lVar5 = (longlong)local_40;
        local_40 = local_40 + (uint)(local_40 == 0) + iVar2;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar4);
        }
        iVar9 = local_3c;
        iVar10 = local_40;
        puVar8 = local_48;
        pvVar1 = (void *)((longlong)local_48 + (lVar5 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,&DAT_146299580,(longlong)iVar2 * 2);
        *(undefined2 *)((longlong)iVar2 * 2 + (longlong)pvVar1) = 0;
      }
    }
    iVar2 = *(int *)(param_2 + 3);
    if (iVar10 < 2) {
      pvVar1 = (void *)param_2[2];
      local_38 = (undefined8 *)0x0;
      puVar6 = puVar7;
      local_30 = iVar2;
      if (iVar2 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar2,0);
        puVar6 = local_38;
        ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,(longlong)iVar2 * 2);
        iVar2 = local_30;
        iVar3 = iStack_2c;
      }
    }
    else {
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = iVar3;
      }
      if ((iVar10 != 0) || (iVar2 = 1, iVar4 == 0)) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2 + iVar10 + iVar4;
      local_48 = puVar8;
      local_40 = iVar10;
      local_3c = iVar9;
      if (iVar9 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar3);
      }
      iVar10 = local_40;
      pvVar1 = (void *)param_2[2];
      puVar6 = local_48;
      puVar8 = puVar7;
      iVar2 = local_40;
      iVar3 = local_3c;
      if (iVar4 != 0) {
        lVar5 = (longlong)local_40;
        local_40 = local_40 + (uint)(local_40 == 0) + iVar4;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar10);
        }
        iVar3 = local_3c;
        iVar2 = local_40;
        puVar6 = local_48;
        _Dst = (void *)((longlong)local_48 + (lVar5 - (ulonglong)(iVar10 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar4 * 2) = 0;
      }
    }
    if (DAT_1468b0f40 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b0f40 = puVar6;
    DAT_1468b0f48._0_4_ = iVar2;
    DAT_1468b0f48._4_4_ = iVar3;
    if (puVar8 != (undefined8 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  return;
}



// FUNCTION 1415a1ca0 FUN_1415a1ca0 body=120 status=ok
// SIG undefined FUN_1415a1ca0(void)

void FUN_1415a1ca0(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  
  if ((void **)param_2 != &DAT_1468b1060) {
    DAT_1468b1068 = *(int *)(param_2 + 1);
    lVar1 = (longlong)DAT_1468b1068;
    _Src = (void *)*param_2;
    if ((DAT_1468b1068 == 0) && (DAT_1468b106c == 0)) {
      return;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b1060,DAT_1468b1068);
    _guard_xfg_dispatch_icall_nop(DAT_1468b1060,_Src,lVar1 * 2);
  }
  return;
}



// FUNCTION 1415a1d20 FUN_1415a1d20 body=120 status=ok
// SIG undefined FUN_1415a1d20(void)

void FUN_1415a1d20(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  
  if ((void **)param_2 != &DAT_1468b1090) {
    DAT_1468b1098 = *(int *)(param_2 + 1);
    lVar1 = (longlong)DAT_1468b1098;
    _Src = (void *)*param_2;
    if ((DAT_1468b1098 == 0) && (DAT_1468b109c == 0)) {
      return;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b1090,DAT_1468b1098);
    _guard_xfg_dispatch_icall_nop(DAT_1468b1090,_Src,lVar1 * 2);
  }
  return;
}



// FUNCTION 1415a1da0 FUN_1415a1da0 body=132 status=ok
// SIG undefined FUN_1415a1da0(void)

void FUN_1415a1da0(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (DAT_1468e2448 != 0) {
    pvVar1 = TlsGetValue(DAT_1468e2448);
    TlsSetValue(DAT_1468e2448,(LPVOID)(longlong)((int)pvVar1 + 1));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar3 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar3 = param_1 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 8))();
    }
  }
  (*(code *)*param_1)(uVar2);
  if (DAT_1468e2448 != 0) {
    pvVar1 = TlsGetValue(DAT_1468e2448);
                    /* WARNING: Could not recover jumptable at 0x0001415a1e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(DAT_1468e2448,(LPVOID)(longlong)((int)pvVar1 + -1));
    return;
  }
  return;
}



// FUNCTION 1415a1e30 FUN_1415a1e30 body=369 status=ok
// SIG undefined FUN_1415a1e30(void)

undefined8 * FUN_1415a1e30(void)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 local_res10 [8];
  undefined8 *local_res18 [2];
  DWORD *local_28;
  undefined8 **local_20;
  
  puVar5 = (undefined8 *)operator_new(0x68);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5[1] = 0;
  pDVar1 = (DWORD *)(puVar5 + 2);
  *puVar5 = &PTR_FUN_1440104d0;
  DVar3 = GetCurrentThreadId();
  *pDVar1 = DVar3;
  *puVar5 = &PTR_FUN_144ca0400;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar5 + 3),4000);
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0xbff0000000000000;
  *(undefined4 *)(puVar5 + 10) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x54) = 0x100;
  puVar5[0xb] = 0x80;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  }
  if (DAT_1464a8468 != DAT_1464a8494) {
    puVar6 = DAT_1464a84a0;
    if (DAT_1464a84a0 == (undefined *)0x0) {
      puVar6 = &DAT_1464a8498;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)DAT_1464a84a8 - 1U & (longlong)(int)*pDVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)(DAT_1464a8460 + 0x10 + (longlong)iVar2 * 0x18)) {
      if (*(DWORD *)(DAT_1464a8460 + (longlong)iVar2 * 0x18) == *pDVar1) {
        if (iVar2 != -1) goto LAB_1415a1f7b;
        break;
      }
    }
  }
  local_20 = local_res18;
  local_res18[0] = puVar5;
  local_28 = pDVar1;
  FUN_14058d980(&DAT_1464a8460,local_res10,&local_28,0);
LAB_1415a1f7b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  return puVar5;
}



// FUNCTION 1415a1fb0 FUN_1415a1fb0 body=120 status=ok
// SIG undefined FUN_1415a1fb0(void)

void FUN_1415a1fb0(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  
  if ((void **)param_2 != &DAT_1468b1050) {
    DAT_1468b1058 = *(int *)(param_2 + 1);
    lVar1 = (longlong)DAT_1468b1058;
    _Src = (void *)*param_2;
    if ((DAT_1468b1058 == 0) && (DAT_1468b105c == 0)) {
      return;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b1050,DAT_1468b1058);
    _guard_xfg_dispatch_icall_nop(DAT_1468b1050,_Src,lVar1 * 2);
  }
  return;
}



// FUNCTION 1415a2030 FUN_1415a2030 body=84 status=ok
// SIG undefined FUN_1415a2030(void)

undefined8 * FUN_1415a2030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_144ca0738;
  FUN_1415b5910(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1415a2090 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 10) != 0) {
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 4;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1415a2100 FUN_1415a2100 body=97 status=ok
// SIG undefined FUN_1415a2100(void)

undefined8 * FUN_1415a2100(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ca0408;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415a2170 FUN_1415a2170 body=43 status=ok
// SIG undefined FUN_1415a2170(void)

undefined8 * FUN_1415a2170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144ca0288;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1415a21a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FExec::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415a21e0 FUN_1415a21e0 body=43 status=ok
// SIG undefined FUN_1415a21e0(void)

undefined8 * FUN_1415a21e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1415a2210 FUN_1415a2210 body=257 status=ok
// SIG undefined FUN_1415a2210(void)

undefined8 * FUN_1415a2210(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  undefined *puVar4;
  
  *param_1 = &PTR_FUN_144ca0400;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  }
  iVar1 = *(int *)(param_1 + 2);
  if (DAT_1464a8468 != DAT_1464a8494) {
    puVar4 = DAT_1464a84a0;
    if (DAT_1464a84a0 == (undefined *)0x0) {
      puVar4 = &DAT_1464a8498;
    }
    for (iVar2 = *(int *)(puVar4 + ((longlong)DAT_1464a84a8 - 1U & (longlong)iVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)(DAT_1464a8460 + 0x10 + (longlong)iVar2 * 0x18)) {
      if (*(int *)(DAT_1464a8460 + (longlong)iVar2 * 0x18) == iVar1) {
        if (iVar2 != -1) {
          TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
          ::Remove(&DAT_1464a8460,iVar1);
        }
        break;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0da8);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1415a2320 `scalar_deleting_destructor' body=225 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGenericAsyncReadFileHandle::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca0790;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  plVar4 = param_1 + 0x10;
  lVar3 = 4;
  do {
    puVar1 = (undefined8 *)*plVar4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar4 = plVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144ca06f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1415a2410 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGenericBaseRequest::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FGenericBaseRequest();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1415a2450 FUN_1415a2450 body=72 status=ok
// SIG undefined FUN_1415a2450(void)

undefined8 * FUN_1415a2450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ca06b0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1415a24a0 FUN_1415a24a0 body=43 status=ok
// SIG undefined FUN_1415a24a0(void)

undefined8 * FUN_1415a24a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fca6f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415a24d0 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGenericPlatformMallocCrash::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ca0818;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  FExec::~FExec(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1415a2540 `scalar_deleting_destructor' body=394 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGenericReadRequest::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca0770;
  if (param_1[2] != 0) {
    if (*(char *)((longlong)param_1 + 0x75) == '\0') {
      FMemory::Free();
    }
    param_1[2] = 0;
  }
  if (*(int *)(param_1 + 0x15) == 0) {
    lVar1 = param_1[0x12];
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x30);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lVar3 = (longlong)*(int *)(lVar1 + 0x28);
    if (*(int *)(lVar1 + 0x28) != 0) {
      iVar8 = 0;
      bVar9 = (undefined8 *)**(longlong **)(lVar1 + 0x20) != param_1;
      lVar7 = 0;
      iVar5 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar6 = iVar5 + 1;
        if (lVar7 < lVar3) {
          plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x20) + lVar7 * 8);
          do {
            if (bVar9 != ((undefined8 *)*plVar4 != param_1)) break;
            iVar6 = iVar6 + 1;
            lVar7 = lVar7 + 1;
            plVar4 = plVar4 + 1;
          } while (lVar7 < lVar3);
        }
        if (bVar9 != false) {
          if (iVar8 != iVar5) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar8 * 8),
                       (void *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar5 * 8),
                       (longlong)(iVar6 - iVar5) << 3);
          }
          iVar8 = iVar8 + (iVar6 - iVar5);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar5 = iVar6;
      } while (lVar7 < lVar3);
      *(int *)(lVar1 + 0x28) = iVar8;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  param_1[0x12] = 0;
  FGenericBaseRequest::~FGenericBaseRequest(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1415a26d0 `scalar_deleting_destructor' body=51 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSafeRecyclableEvent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR__purecall_144ca0288;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415a2710 FUN_1415a2710 body=43 status=ok
// SIG undefined FUN_1415a2710(void)

undefined8 * FUN_1415a2710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415a2740 FUN_1415a2740 body=43 status=ok
// SIG undefined FUN_1415a2740(void)

undefined8 * FUN_1415a2740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ca06f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415a2770 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * IAsyncReadRequest::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1415a27e0 Abandon body=50 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FGenericReadRequestWorker>::Abandon(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415a2808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1415a2820 FUN_1415a2820 body=623 status=ok
// SIG undefined FUN_1415a2820(void)

void FUN_1415a2820(longlong param_1,void *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar5 = (2 - (uint)(iVar7 != 0)) + iVar7;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  lVar9 = -1;
  lVar8 = -1;
  puVar2 = (undefined2 *)(*plVar1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar2 = 0x3c;
  puVar2[1] = 0;
  do {
    lVar8 = lVar8 + 1;
  } while (*(short *)((longlong)param_2 + lVar8 * 2) != 0);
  iVar7 = (int)lVar8;
  if (iVar7 != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    iVar6 = (uint)(iVar5 == 0) + iVar5 + iVar7;
    *(int *)(param_1 + 0x18) = iVar6;
    if (*(int *)(param_1 + 0x1c) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
    }
    pvVar3 = (void *)(*plVar1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar3,param_2,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar3) = 0;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  iVar5 = (2 - (uint)(iVar7 != 0)) + iVar7;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  puVar2 = (undefined2 *)(*plVar1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar2 = 0x3e;
  puVar2[1] = 0;
  FUN_1415a3160(plVar1,param_3);
  iVar7 = *(int *)(param_1 + 0x18);
  iVar5 = (3 - (uint)(iVar7 != 0)) + iVar7;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  puVar4 = (undefined4 *)(*plVar1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar4 = 0x2f003c;
  *(undefined2 *)(puVar4 + 1) = 0;
  do {
    lVar9 = lVar9 + 1;
  } while (*(short *)((longlong)param_2 + lVar9 * 2) != 0);
  iVar7 = (int)lVar9;
  if (iVar7 != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    iVar6 = (uint)(iVar5 == 0) + iVar5 + iVar7;
    *(int *)(param_1 + 0x18) = iVar6;
    if (*(int *)(param_1 + 0x1c) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
    }
    pvVar3 = (void *)(*plVar1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar3,param_2,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar3) = 0;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  iVar5 = (2 - (uint)(iVar7 != 0)) + iVar7;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  puVar2 = (undefined2 *)(*plVar1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar2 = 0x3e;
  puVar2[1] = 0;
  iVar7 = *(int *)(param_1 + 0x18);
  iVar5 = (3 - (uint)(iVar7 != 0)) + iVar7;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  puVar4 = (undefined4 *)(*plVar1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar4 = 0xa000d;
  *(undefined2 *)(puVar4 + 1) = 0;
  return;
}



// FUNCTION 1415a2a90 FUN_1415a2a90 body=281 status=ok
// SIG undefined FUN_1415a2a90(void)

int FUN_1415a2a90(longlong param_1,longlong **param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *local_30;
  int local_28;
  
  iVar5 = DAT_1464a8c68;
  local_30 = (longlong *)0x0;
  DAT_1464a8c68 = DAT_1464a8c68 + 1;
  local_28 = 0;
  if (((param_2 != &local_30) && (*(int *)(param_2 + 1) != 0)) &&
     (plVar4 = *param_2, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_30);
  }
  lVar1 = param_1 + 0x90;
  iVar3 = *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xfc) < iVar3 + 1) {
    TArray<FCompactPose,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar3);
  }
  lVar2 = (longlong)iVar3 * 0x18;
  lVar6 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar6 = lVar1;
  }
  pplVar7 = (longlong **)(lVar2 + 8 + lVar6);
  *(int *)(lVar6 + lVar2) = iVar5;
  *(undefined4 *)(lVar6 + 4 + lVar2) = 0;
  *pplVar7 = (longlong *)0x0;
  *(undefined4 *)(pplVar7 + 1) = 0;
  if (((&local_30 != pplVar7) && (local_28 != 0)) && (local_30 != (longlong *)0x0)) {
    (**(code **)(*local_30 + 0x30))();
  }
  lVar6 = *(longlong *)(param_1 + 0xf0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  if (lVar6 == 0) {
    lVar6 = lVar1;
  }
  FUN_1415b3960(param_1,lVar2 + lVar6);
  return iVar5;
}



// FUNCTION 1415a2bb0 FUN_1415a2bb0 body=90 status=ok
// SIG undefined FUN_1415a2bb0(void)

undefined4 FUN_1415a2bb0(undefined8 param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1415a9af0();
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  }
  uVar2 = FUN_1415a2a90(uVar3,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  return uVar2;
}



// FUNCTION 1415a2c10 FUN_1415a2c10 body=733 status=ok
// SIG undefined FUN_1415a2c10(void)

void FUN_1415a2c10(undefined8 param_1)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  
  if (DAT_1468b10b8 == 0) {
    FUN_1415a2820(param_1,L"PCallStack",&DAT_144c977dc);
    return;
  }
  local_48 = (undefined4 *)0x0;
  local_40 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  *local_48 = 0xa000d;
  *(undefined2 *)(local_48 + 1) = 0;
  iVar11 = 0;
  iVar10 = iVar11;
  for (iVar2 = iVar11; (-1 < iVar2 && (iVar2 < DAT_1468b10b8)); iVar2 = iVar2 + 1) {
    iVar4 = (int)DAT_1468b10b0[(longlong)iVar2 * 4 + 1] + -1;
    if ((int)DAT_1468b10b0[(longlong)iVar2 * 4 + 1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= iVar10) {
      iVar4 = iVar10;
    }
    iVar10 = iVar4;
  }
  puVar9 = local_48;
  iVar2 = (int)local_40;
  for (; (-1 < iVar11 && (iVar11 < DAT_1468b10b8)); iVar11 = iVar11 + 1) {
    lVar1 = (longlong)iVar11;
    if ((int)DAT_1468b10b0[lVar1 * 4 + 1] == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)DAT_1468b10b0[lVar1 * 4];
    }
    FString::PrintfImpl(&local_38,L"%-*s 0x%016llx + %-8x",iVar10 + 1,puVar8,
                        (DAT_1468b10b0 + lVar1 * 4)[2],DAT_1468b10b0[lVar1 * 4 + 3]);
    _Src = local_38;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_30 + -1;
    }
    iVar7 = iVar2;
    if (iVar4 != 0) {
      iVar7 = iVar2 + (uint)(iVar2 == 0) + iVar4;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (local_40._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
        puVar9 = local_48;
        iVar7 = (int)local_40;
      }
      puVar8 = (undefined2 *)((longlong)puVar9 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(puVar8,_Src,(longlong)iVar4 * 2);
      puVar8[iVar4] = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    iVar2 = (3 - (uint)(iVar7 != 0)) + iVar7;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (local_40._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar7);
      puVar9 = local_48;
      iVar2 = (int)local_40;
    }
    puVar3 = (undefined4 *)((longlong)puVar9 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar3 = 0xa000d;
    *(undefined2 *)(puVar3 + 1) = 0;
  }
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  puVar3 = (undefined4 *)&DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar3 = puVar9;
  }
  FUN_1415a3160(&local_48,puVar3);
  puVar3 = local_48;
  puVar5 = (undefined4 *)&DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar5 = local_48;
  }
  FUN_1415a2820(param_1,L"PCallStack",puVar5);
  plVar6 = DAT_1468b10b0;
  for (iVar2 = DAT_1468b10b8; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 4;
  }
  DAT_1468b10b8 = 0;
  if (DAT_1468b10bc != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_1468b10b0,0);
  }
  if (puVar3 != (undefined4 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (puVar9 != (undefined4 *)0x0) {
    FMemory::Free(puVar9);
  }
  return;
}



// FUNCTION 1415a2ef0 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0xb8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xb8 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 1415a2fd0 FUN_1415a2fd0 body=252 status=ok
// SIG undefined FUN_1415a2fd0(void)

ulonglong FUN_1415a2fd0(longlong param_1,float param_2,undefined8 *param_3)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar9 = *(int *)(param_1 + 0x10);
  uVar4 = (ulonglong)iVar9;
  if ((iVar9 == 0) || (*(int *)(param_3 + 1) == iVar9)) {
    iVar9 = iVar9 + 1;
    if (iVar9 <= *(int *)(param_1 + 0x20)) {
      lVar7 = (longlong)*(int *)(param_1 + 0x20) - uVar4;
      uVar4 = *(ulonglong *)(param_1 + 0x18);
      pfVar1 = (float *)(uVar4 + (lVar7 + -1) * 4);
      if ((pfVar1 != (float *)0x0) && (param_2 < *pfVar1 || param_2 == *pfVar1)) goto LAB_1415a3022;
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x20) + iVar9;
    *(int *)(param_1 + 0x20) = iVar3;
    if (*(int *)(param_1 + 0x24) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x18);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4),0,(longlong)iVar9 << 2);
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar10 = 0;
    puVar8 = (uint *)*param_3;
    *(float *)(lVar2 + lVar7 * 4) = param_2;
    puVar6 = (uint *)(lVar2 + lVar7 * 4);
    puVar5 = puVar8 + *(int *)(param_3 + 1);
    uVar4 = (longlong)*(int *)(param_3 + 1) & 0x3fffffffffffffff;
    if (puVar5 < puVar8) {
      uVar4 = uVar10;
    }
    if (uVar4 != 0) {
      do {
        puVar6 = puVar6 + 1;
        puVar5 = (uint *)(ulonglong)*puVar8;
        uVar10 = uVar10 + 1;
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
      } while (uVar10 != uVar4);
    }
    uVar4 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
  else {
LAB_1415a3022:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 1415a30d0 FUN_1415a30d0 body=8 status=ok
// SIG undefined FUN_1415a30d0(void)

undefined * FUN_1415a30d0(void)

{
  return &DAT_1464a8bb0;
}



// FUNCTION 1415a30e0 FUN_1415a30e0 body=115 status=ok
// SIG undefined FUN_1415a30e0(void)

undefined1 FUN_1415a30e0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b14c0) {
    _Init_thread_header(&DAT_1468b14c0);
    if (DAT_1468b14c0 == -1) {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"noheartbeatthread");
      DAT_1468b14bc = cVar1 == '\0';
      _Init_thread_footer(&DAT_1468b14c0);
    }
  }
  return DAT_1468b14bc;
}



// FUNCTION 1415a3160 FUN_1415a3160 body=614 status=ok
// SIG undefined FUN_1415a3160(void)

void FUN_1415a3160(longlong *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  
  if ((param_2 != (short *)0x0) && (sVar5 = *param_2, sVar5 != 0)) {
    do {
      switch(sVar5) {
      case 0xd:
        break;
      default:
        if (sVar5 != 0) {
          iVar2 = (int)param_1[1];
          iVar1 = iVar2 + -1;
          if (iVar2 < 1) {
            iVar1 = 0;
          }
          iVar2 = (iVar2 < 1) + 1 + iVar2;
          *(int *)(param_1 + 1) = iVar2;
          if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
          }
          *(short *)(*param_1 + (longlong)iVar1 * 2) = sVar5;
          *(undefined2 *)(*param_1 + 2 + (longlong)iVar1 * 2) = 0;
        }
        break;
      case 0x22:
        iVar2 = (int)param_1[1];
        iVar1 = (7 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_1 + 1) = iVar1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        lVar3 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
        lVar4 = *param_1;
        *(undefined8 *)(lVar4 + lVar3 * 2) = 0x6f007500710026;
        lVar4 = lVar4 + lVar3 * 2;
        *(undefined4 *)(lVar4 + 8) = 0x3b0074;
        *(undefined2 *)(lVar4 + 0xc) = 0;
        break;
      case 0x26:
        iVar2 = (int)param_1[1];
        iVar1 = (6 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_1 + 1) = iVar1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        lVar3 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
        lVar4 = *param_1;
        *(undefined8 *)(lVar4 + lVar3 * 2) = 0x70006d00610026;
        lVar4 = lVar4 + lVar3 * 2;
        *(undefined2 *)(lVar4 + 8) = 0x3b;
        *(undefined2 *)(lVar4 + 10) = 0;
        break;
      case 0x27:
        iVar2 = (int)param_1[1];
        iVar1 = (7 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_1 + 1) = iVar1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        lVar3 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
        lVar4 = *param_1;
        *(undefined8 *)(lVar4 + lVar3 * 2) = 0x6f007000610026;
        lVar4 = lVar4 + lVar3 * 2;
        *(undefined4 *)(lVar4 + 8) = 0x3b0073;
        *(undefined2 *)(lVar4 + 0xc) = 0;
        break;
      case 0x3c:
        iVar2 = (int)param_1[1];
        iVar1 = (5 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_1 + 1) = iVar1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        lVar4 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
        builtin_wcsncpy((wchar_t *)(*param_1 + lVar4 * 2),L"&lt;",4);
        *(undefined2 *)(*param_1 + 8 + lVar4 * 2) = 0;
        break;
      case 0x3e:
        iVar2 = (int)param_1[1];
        iVar1 = (5 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_1 + 1) = iVar1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        lVar4 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
        builtin_wcsncpy((wchar_t *)(*param_1 + lVar4 * 2),L"&gt;",4);
        *(undefined2 *)(*param_1 + 8 + lVar4 * 2) = 0;
      }
      sVar5 = param_2[1];
      param_2 = param_2 + 1;
    } while (sVar5 != 0);
  }
  return;
}



// FUNCTION 1415a3420 FUN_1415a3420 body=701 status=ok
// SIG undefined FUN_1415a3420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415a3420(undefined1 param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  DAT_1464a8758 = 1;
  if (((DAT_1468b616c == '\0') && (0 < DAT_1464a8740)) && (cVar3 = FUN_141593710(), cVar3 != '\0'))
  {
    uVar5 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar4 + 1) = param_1;
      *puVar4 = &PTR_FUN_1446e9598;
    }
    local_78[0] = FUN_1415a3fe0;
    FUN_141590030(1,1,1,local_78);
    piVar8 = DAT_1464a8b80;
    if (DAT_1464a8b80 == (int *)0x0) {
      piVar8 = (int *)&DAT_1464a8a80;
    }
    piVar6 = piVar8 + (longlong)DAT_1464a8b88 * 4;
    for (; piVar8 != piVar6; piVar8 = piVar8 + 4) {
      plVar11 = *(longlong **)(piVar8 + 2);
      lVar7 = (longlong)*piVar8 * 0x20;
      cVar3 = FUN_1415b7db0(plVar11,*(undefined8 *)(&DAT_1464a8770 + lVar7));
      if (cVar3 == '\0') {
        (**(code **)(*plVar11 + 8))(plVar11,*(undefined8 *)(&DAT_1464a8770 + lVar7));
      }
      (**(code **)*plVar11)(plVar11,*(undefined4 *)(&DAT_1464a8768 + lVar7));
    }
    bVar1 = false;
    DAT_1464a8ba4 = DAT_1464a8ba4 + 1;
    lVar7 = (longlong)(DAT_1464a8b98 + -1);
    if (-1 < DAT_1464a8b98 + -1) {
      lVar9 = lVar7 << 4;
      bVar1 = false;
      do {
        if (((*(int *)(lVar9 + 8 + DAT_1464a8b90) == 0) ||
            (*(longlong **)(lVar9 + DAT_1464a8b90) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar9 + DAT_1464a8b90) + 0x40))(), cVar3 == '\0'))
        {
          bVar1 = true;
        }
        lVar9 = lVar9 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar2 = DAT_1464a8b98;
    DAT_1464a8ba4 = DAT_1464a8ba4 + -1;
    if ((bVar1) && (DAT_1464a8ba4 < 1)) {
      uVar10 = uVar5;
      if (0 < DAT_1464a8b98) {
        do {
          if (((*(int *)(uVar10 + 8 + DAT_1464a8b90) == 0) ||
              (*(longlong **)(uVar10 + DAT_1464a8b90) == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(**(longlong **)(uVar10 + DAT_1464a8b90) + 0x10))(), cVar3 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464a8b90,uVar5,1,1);
          }
          else {
            uVar5 = (ulonglong)((int)uVar5 + 1);
            uVar10 = uVar10 + 0x10;
          }
        } while ((int)uVar5 < DAT_1464a8b98);
      }
      _DAT_1464a8ba0 = DAT_1464a8b98 * 2;
      if (_DAT_1464a8ba0 < 3) {
        _DAT_1464a8ba0 = 2;
      }
      if ((_DAT_1464a8ba0 < iVar2) && (DAT_1464a8b9c != DAT_1464a8b98)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464a8b90);
      }
    }
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
  }
  return;
}



// FUNCTION 1415a36e0 FUN_1415a36e0 body=224 status=ok
// SIG undefined FUN_1415a36e0(void)

void FUN_1415a36e0(undefined8 param_1,longlong *param_2,int *param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong local_28;
  undefined4 uStack_20;
  ulonglong local_18;
  ulonglong uStack_10;
  
  if (*param_2 != 0) {
    puVar4 = (ulonglong *)(param_2 + 1);
    plVar5 = (longlong *)0x0;
    local_28 = 0;
    uStack_20 = 2;
    if ((char)param_2[3] == '\0') {
      puVar4 = &local_28;
    }
    else if ((((int)param_2[5] != 0) && ((longlong *)param_2[4] != (longlong *)0x0)) &&
            (cVar1 = (**(code **)(*(longlong *)param_2[4] + 0x18))(), cVar1 != '\0')) {
      if ((int)param_2[5] != 0) {
        plVar5 = (longlong *)param_2[4];
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_18);
      *puVar4 = local_18;
      param_2[2] = uStack_10;
    }
    local_18 = *puVar4;
    uStack_10 = puVar4[1];
    if (local_18 != 0) {
      uVar3 = local_18;
      if (param_4 != 0) {
        uVar3 = param_4;
      }
      if (*param_3 < (int)uStack_10) {
        uVar2 = uVar3 & ~*(ulonglong *)(param_3 + 2);
        uVar3 = ~*(ulonglong *)(param_3 + 2);
        if (uVar2 != 0) {
          uVar3 = uVar2;
        }
      }
      if (uVar3 != 0) {
        (**(code **)(*(longlong *)*param_2 + 8))();
      }
    }
  }
  return;
}



// FUNCTION 1415a37c0 FUN_1415a37c0 body=432 status=ok
// SIG undefined FUN_1415a37c0(void)

undefined8 FUN_1415a37c0(longlong param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  iVar6 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,L"SetThreadAffinity",param_2,&local_28,&DAT_1468e2360);
  if (cVar1 != '\0') {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    iVar2 = FString::ParseIntoArrayWS(&local_28,&local_38,0,1);
    if (iVar2 == 0) {
      plVar3 = local_38;
      for (iVar6 = (int)local_30; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
    else {
      cVar1 = FUN_1415afe90(&DAT_1464a8740,&local_38);
      plVar3 = local_38;
      for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (cVar1 != '\0') {
        if (*(short **)(param_1 + 8) != param_2) {
          iVar2 = iVar6;
          if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
            lVar4 = -1;
            do {
              lVar4 = lVar4 + 1;
            } while (param_2[lVar4] != 0);
            iVar2 = (int)lVar4 + 1;
          }
          *(undefined4 *)(param_1 + 0x10) = 0;
          if (*(int *)(param_1 + 0x14) != iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,iVar2);
            iVar6 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar2 + iVar6;
          if (*(int *)(param_1 + 0x14) < iVar2 + iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar6);
          }
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),param_2,(longlong)iVar2 * 2);
          }
        }
        uVar5 = 1;
        goto LAB_1415a3941;
      }
    }
  }
  uVar5 = 0;
LAB_1415a3941:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 1415a3970 FUN_1415a3970 body=339 status=ok
// SIG undefined FUN_1415a3970(void)

void FUN_1415a3970(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*param_1 != 1) {
    return;
  }
  cVar2 = FUN_1415a37c0(param_1,L"Args");
  if (cVar2 != '\0') {
    DAT_1464a8740 = 2;
  }
  local_18 = 0;
  local_10 = 0;
  uVar4 = FCommandLine::Get();
  cVar2 = FParse::Value(uVar4,L"-SetThreadAffinity=",&local_18,1);
  if (cVar2 != '\0') {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    iVar3 = FString::ParseIntoArrayWS(&local_18,&local_28,0,1);
    if (iVar3 == 0) {
      plVar5 = local_28;
      for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
    else {
      cVar2 = FUN_1415afe90(&DAT_1464a8740,&local_28);
      plVar5 = local_28;
      for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      if (cVar2 != '\0') {
        bVar1 = true;
        goto LAB_1415a3a8f;
      }
    }
  }
  bVar1 = false;
LAB_1415a3a8f:
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    DAT_1464a8740 = 3;
  }
  return;
}



// FUNCTION 1415a3ad0 Atan2 body=232 status=ok
// SIG undefined Atan2(void)

undefined8 FGenericPlatformMath::Atan2(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  fVar3 = ABS((float)param_2);
  fVar5 = ABS((float)param_1);
  bVar1 = fVar3 < fVar5;
  fVar2 = fVar3;
  if (bVar1) {
    fVar2 = fVar5;
    fVar5 = fVar3;
    uVar4 = (uint)((ulonglong)param_2 >> 0x20);
  }
  uVar4 = uVar4 & 0x7fffffff;
  if (fVar2 != 0.0) {
    fVar5 = fVar5 / fVar2;
    fVar2 = fVar5 * fVar5;
    fVar5 = fVar5 * ((((((fVar2 * 0.007212885 - 0.03505968) * fVar2 + 0.08167588) * fVar2 -
                       0.13374658) * fVar2 + 0.19856563) * fVar2 - 0.33325) * fVar2 + 1.0);
    if (bVar1) {
      fVar5 = 1.5707964 - fVar5;
      uVar4 = 0;
    }
    if ((float)param_2 < 0.0) {
      fVar5 = 3.1415927 - fVar5;
      uVar4 = 0;
    }
    if ((float)param_1 < 0.0) {
      fVar5 = -fVar5;
      uVar4 = uVar4 ^ 0x80000000;
    }
    return CONCAT44(uVar4,fVar5);
  }
  return 0;
}



// FUNCTION 1415a3bc0 FUN_1415a3bc0 body=376 status=ok
// SIG undefined FUN_1415a3bc0(void)

void FUN_1415a3bc0(longlong param_1,void *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  void *_Dst;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = *(int *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar4 = (2 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar4;
  if (*(int *)(param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  lVar7 = -1;
  puVar2 = (undefined2 *)(*plVar1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar2 = 0x3c;
  puVar2[1] = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)((longlong)param_2 + lVar7 * 2) != 0);
  iVar6 = (int)lVar7;
  if (iVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar6;
    *(int *)(param_1 + 0x18) = iVar5;
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    _Dst = (void *)(*plVar1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar4 = (2 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar4;
  if (*(int *)(param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  puVar2 = (undefined2 *)(*plVar1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar2 = 0x3e;
  puVar2[1] = 0;
  iVar6 = *(int *)(param_1 + 0x18);
  iVar4 = (3 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar4;
  if (*(int *)(param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  puVar3 = (undefined4 *)(*plVar1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar3 = 0xa000d;
  *(undefined2 *)(puVar3 + 1) = 0;
  return;
}



// FUNCTION 1415a3d40 CacheLaunchDir body=307 status=ok
// SIG undefined CacheLaunchDir(void)

void FGenericPlatformMisc::CacheLaunchDir(void)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  if (DAT_1468b1484 == '\0') {
    DAT_1468b1484 = '\x01';
    plVar5 = (longlong *)FUN_1416ade20(local_18);
    lVar2 = plVar5[1];
    local_28 = *plVar5;
    *plVar5 = 0;
    local_20 = (int)plVar5[1];
    local_1c = *(int *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
    iVar6 = local_20;
    if (local_1c < (int)((2 - (uint)((int)lVar2 != 0)) + local_20)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
      iVar6 = local_20;
    }
    local_20 = (2 - (uint)(iVar6 != 0)) + iVar6;
    if (local_1c < local_20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar6);
    }
    iVar4 = local_1c;
    iVar3 = local_20;
    lVar2 = local_28;
    puVar1 = (undefined2 *)(local_28 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    *puVar1 = 0x2f;
    puVar1[1] = 0;
    plVar5 = (longlong *)FUN_1415ab890();
    if (plVar5 == &local_28) {
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    else {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      *plVar5 = lVar2;
      *(int *)(plVar5 + 1) = iVar3;
      *(int *)((longlong)plVar5 + 0xc) = iVar4;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1415a3e80 FUN_1415a3e80 body=115 status=ok
// SIG undefined FUN_1415a3e80(void)

void FUN_1415a3e80(longlong param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0d28);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0d28);
  }
  iVar2 = rand();
  iVar3 = 2;
  if ((int)((float)iVar2 * 9.155553e-05) < 3) {
    iVar3 = (int)((float)iVar2 * 9.155553e-05);
  }
  FUN_1416b1760((float)(iVar3 + -1) + **(float **)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001415a3eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0d28);
  return;
}



// FUNCTION 1415a3f00 FUN_1415a3f00 body=49 status=ok
// SIG undefined FUN_1415a3f00(void)

void FUN_1415a3f00(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = *param_3;
  lVar2 = FUN_1415a7de0(*param_1,*param_2);
  *(double *)(lVar2 + 0x10) = *(double *)(lVar2 + 0x10) - dVar1;
  return;
}



// FUNCTION 1415a3f40 FUN_1415a3f40 body=83 status=ok
// SIG undefined FUN_1415a3f40(void)

undefined8 * FUN_1415a3f40(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_144ca0248;
    *(undefined4 *)(puVar2 + 3) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415a3fb0 FUN_1415a3fb0 body=45 status=ok
// SIG undefined FUN_1415a3fb0(void)

void FUN_1415a3fb0(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = *param_3;
  lVar2 = FUN_1415a7de0(*param_1,*param_2);
  *(double *)(lVar2 + 0x10) = dVar1 + *(double *)(lVar2 + 0x10);
  return;
}



// FUNCTION 1415a3fe0 FUN_1415a3fe0 body=105 status=ok
// SIG undefined FUN_1415a3fe0(void)

void FUN_1415a3fe0(undefined8 param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  DWORD_PTR dwThreadAffinityMask;
  
  uVar2 = *param_2 & 0xff;
  uVar4 = 0xff;
  if (uVar2 != 0xff) {
    uVar4 = uVar2;
  }
  if (uVar4 == 0xff) {
    uVar4 = ((int)*param_2 >> 0xb & 3U) + 4;
  }
  uVar3 = FUN_1415d8270();
  uVar3 = LockFreeTagCounterHasOverflowed(uVar3);
  dwThreadAffinityMask = *(DWORD_PTR *)(&DAT_1464a8770 + (ulonglong)uVar4 * 0x20);
  cVar1 = FUN_1415b7db0(uVar3);
  if (cVar1 != '\0') {
    return;
  }
  FWindowsPlatformProcess::SetThreadAffinityMask
            (*(HANDLE *)(&DAT_1464a8770 + (ulonglong)uVar4 * 0x20),dwThreadAffinityMask);
  return;
}



// FUNCTION 1415a4050 FUN_1415a4050 body=22 status=ok
// SIG undefined FUN_1415a4050(void)

undefined4 FUN_1415a4050(void)

{
  undefined4 uVar1;
  
  FUN_1415b61b0();
  uVar1 = DAT_1468b0de8;
  LOCK();
  DAT_1468b0de8 = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1415a4090 CancelImpl body=118 status=ok
// SIG undefined CancelImpl(void)

void FGenericBaseRequest::CancelImpl(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    if (cVar3 != '\0') {
      LOCK();
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
      UNLOCK();
      if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x10))();
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      IAsyncReadRequest::SetComplete(param_1);
    }
  }
  return;
}



// FUNCTION 1415a4110 CleanShaderWorkingDir body=239 status=ok
// SIG undefined CleanShaderWorkingDir(void)

void FGenericPlatformProcess::CleanShaderWorkingDir(void)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  FUN_1416b1490(&local_28);
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,puVar4,0,1);
  puVar3 = (undefined8 *)FPaths::ProjectIntermediateDir(local_18);
  iVar1 = *(int *)(puVar3 + 1);
  local_38 = (undefined2 *)*puVar3;
  *puVar3 = 0;
  local_30 = *(int *)(puVar3 + 1);
  local_2c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  if (local_2c < (int)((0x1b - (uint)(iVar1 != 0)) + local_30)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
  }
  FString::PathAppend(&local_38,L"Shaders/WorkingDirectory/",0x19);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,puVar4,0,1);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415a4200 FUN_1415a4200 body=1211 status=ok
// SIG undefined FUN_1415a4200(void)

void FUN_1415a4200(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  void *pvVar12;
  void *pvVar13;
  void *local_res8;
  void *local_res10;
  void *local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  code *local_48;
  void **local_40;
  
  local_70 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  lVar11 = (longlong)local_70;
  pvVar13 = *(void **)(*(longlong *)(param_1 + 0x60) + 8);
  local_78 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_78,(2 - (uint)(local_70 != 0)) + local_70,0);
  pvVar12 = local_78;
  local_res8 = local_78;
  _guard_xfg_dispatch_icall_nop(local_78,pvVar13,lVar11 * 2);
  iVar6 = local_70;
  lVar11 = (longlong)local_70;
  local_70 = (2 - (uint)(local_70 != 0)) + local_70;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    local_res8 = local_78;
    pvVar12 = local_78;
  }
  lVar11 = lVar11 - (ulonglong)(iVar6 != 0);
  *(undefined2 *)((longlong)pvVar12 + lVar11 * 2) = 0x3a;
  *(undefined2 *)((longlong)pvVar12 + lVar11 * 2 + 2) = 0;
  lVar11 = *(longlong *)(param_1 + 0x60);
  iVar6 = *(int *)(lVar11 + 0x20);
  if (local_70 < 2) {
    pvVar13 = *(void **)(lVar11 + 0x18);
    local_78 = (void *)0x0;
    if (iVar6 == 0) {
      local_6c = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
    }
    else {
      local_70 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar6,0);
      pvVar12 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,pvVar13,(longlong)iVar6 * 2);
      local_78 = pvVar12;
    }
  }
  else {
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    if ((local_70 != 0) || (iVar6 = 1, iVar9 == 0)) {
      iVar6 = 0;
    }
    local_res8 = (void *)0x0;
    iVar7 = local_70;
    local_78 = pvVar12;
    if (local_6c < local_70 + iVar9 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      iVar7 = local_70;
    }
    pvVar13 = *(void **)(lVar11 + 0x18);
    local_70 = iVar7;
    if (iVar9 != 0) {
      local_70 = iVar7 + (uint)(iVar7 == 0) + iVar9;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar7);
      }
      iVar6 = local_70;
      pvVar1 = local_78;
      pvVar12 = (void *)((longlong)local_78 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar12,pvVar13,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar12) = 0;
      local_78 = pvVar1;
      local_70 = iVar6;
    }
  }
  iVar6 = local_70;
  if (local_6c < (int)(local_70 + 1 + (uint)(local_70 == 0))) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar6 = local_70;
  }
  local_70 = (2 - (uint)(iVar6 != 0)) + iVar6;
  pvVar13 = local_78;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    pvVar13 = local_78;
  }
  pvVar12 = (void *)0x0;
  lVar11 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  *(undefined2 *)((longlong)pvVar13 + lVar11 * 2) = 0x3a;
  *(undefined2 *)((longlong)pvVar13 + lVar11 * 2 + 2) = 0;
  iVar6 = *(int *)(param_1 + 0x58);
  if (local_70 < 2) {
    pvVar1 = *(void **)(param_1 + 0x50);
    local_78 = (void *)0x0;
    if (iVar6 == 0) {
      iVar7 = 0;
      local_70 = 0;
    }
    else {
      local_70 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar6);
      pvVar12 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)iVar6 * 2);
      iVar7 = local_6c;
    }
  }
  else {
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    if ((local_70 != 0) || (iVar6 = 1, iVar9 == 0)) {
      iVar6 = 0;
    }
    iVar7 = iVar6 + iVar9 + local_70;
    iVar6 = local_70;
    local_78 = pvVar13;
    if (local_6c < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,iVar7);
      iVar6 = local_70;
    }
    local_res10 = *(void **)(param_1 + 0x50);
    pvVar13 = pvVar12;
    pvVar12 = local_78;
    iVar7 = local_6c;
    local_70 = iVar6;
    if (iVar9 != 0) {
      local_70 = iVar6 + (uint)(iVar6 == 0) + iVar9;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6,0);
      }
      iVar7 = local_6c;
      iVar4 = local_70;
      pvVar12 = local_78;
      pvVar1 = (void *)((longlong)local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,local_res10,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
      local_70 = iVar4;
    }
  }
  iVar9 = local_70 + 4 + (uint)(local_70 == 0);
  local_78 = pvVar12;
  local_6c = iVar7;
  iVar6 = local_70;
  if (iVar7 < iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,iVar9,0);
    iVar6 = local_70;
  }
  local_70 = (5 - (uint)(iVar6 != 0)) + iVar6;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
  }
  lVar11 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)local_78 + lVar11 * 2),L":End",4);
  *(undefined2 *)((longlong)local_78 + lVar11 * 2 + 8) = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  local_68[0] = 0;
  local_60 = *(longlong *)(param_1 + 0x60) + 8;
  local_58 = *(longlong *)(param_1 + 0x60) + 0x18;
  local_res8 = (void *)(param_1 + 0x40);
  local_40 = &local_res8;
  local_48 = FUN_1415a3fb0;
  local_50 = param_1 + 0x50;
  plVar8 = (longlong *)FUN_1415a90b0();
  bVar3 = false;
  *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
  iVar6 = *(int *)((longlong)plVar8 + 0x14);
  iVar9 = (int)plVar8[1] + -1;
  lVar11 = (longlong)iVar9;
  if (-1 < iVar9) {
    lVar10 = lVar11 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar10 + 8 + *plVar8) == 0) ||
          (plVar2 = *(longlong **)(lVar10 + *plVar8), plVar2 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,local_68), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar10 = lVar10 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    iVar6 = *(int *)((longlong)plVar8 + 0x14);
  }
  *(int *)((longlong)plVar8 + 0x14) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1415a46c0 FUN_1415a46c0 body=465 status=ok
// SIG undefined FUN_1415a46c0(void)

void FUN_1415a46c0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  BOOL BVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong local_48;
  longlong local_40;
  
  plVar8 = (longlong *)FUN_1415a9af0();
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  }
  lVar3 = *plVar8;
  if ((lVar3 != 0) && (cVar6 = FUN_1415a48a0(), cVar6 != '\0')) {
    puVar4 = *(undefined4 **)(lVar3 + 0x60);
    *(int *)(plVar8 + 0xd) = (int)plVar8[0xd] + 1;
    *puVar4 = (int)plVar8[0xd];
    plVar10 = (longlong *)plVar8[0x1e];
    if ((longlong *)plVar8[0x1e] == (longlong *)0x0) {
      plVar10 = plVar8 + 0x12;
    }
    plVar1 = plVar10 + (longlong)(int)plVar8[0x1f] * 3;
    for (; plVar10 != plVar1; plVar10 = plVar10 + 3) {
      uVar11 = 0;
      puVar12 = (undefined8 *)plVar8[0xe];
      uVar13 = (longlong)(int)plVar8[0xf] & 0x1fffffffffffffff;
      if (puVar12 + (int)plVar8[0xf] < puVar12) {
        uVar13 = uVar11;
      }
      if (uVar13 != 0) {
        do {
          piVar5 = (int *)*puVar12;
          iVar2 = piVar5[0x10];
          if (((iVar2 != 0) && (*piVar5 != -1)) && (*(int *)((longlong)plVar10 + 4) < *piVar5)) {
            lVar3 = *(longlong *)(piVar5 + 0xe);
            if ((((int)plVar10[2] != 0) && ((longlong *)plVar10[1] != (longlong *)0x0)) &&
               (cVar6 = (**(code **)(*(longlong *)plVar10[1] + 0x18))(), cVar6 != '\0')) {
              if ((int)plVar10[2] == 0) {
                plVar9 = (longlong *)0x0;
              }
              else {
                plVar9 = (longlong *)plVar10[1];
              }
              local_48 = lVar3;
              local_40 = lVar3 + (longlong)iVar2 * 8;
              (**(code **)(*plVar9 + 0x40))(plVar9,piVar5 + 2,piVar5 + 6,piVar5 + 10,&local_48);
            }
          }
          puVar12 = puVar12 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar13);
      }
      *(int *)((longlong)plVar10 + 4) = (int)plVar8[0xd];
    }
    FString::operator=(plVar8 + 0x10,puVar4 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415a488a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b0e88);
  return;
}



// FUNCTION 1415a48a0 FUN_1415a48a0 body=153 status=ok
// SIG undefined FUN_1415a48a0(void)

bool FUN_1415a48a0(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  bVar3 = false;
  plVar2 = (longlong *)FUN_1415a9af0();
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    bVar3 = 0.0 < *(double *)(lVar1 + 0x80);
    if (bVar3) {
      QueryPerformanceCounter(&local_res8);
      dVar4 = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(lVar1 + 0x80)
      ;
      *(double *)(lVar1 + 0x10) = dVar4 + *(double *)(lVar1 + 0x10);
      plVar2[3] = (longlong)(dVar4 + (double)plVar2[3]);
    }
    FUN_1415a4200(lVar1);
    *plVar2 = 0;
  }
  return bVar3;
}



// FUNCTION 1415a4940 CloudDir body=237 status=ok
// SIG undefined CloudDir(void)

longlong * FGenericPlatformMisc::CloudDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14167d0d0(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((7 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (7 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  *(undefined8 *)(local_28 + lVar2 * 2) = 0x75006f006c0043;
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 8) = 0x2f0064;
  *(undefined2 *)(lVar2 + 0xc) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415a4a30 FUN_1415a4a30 body=203 status=ok
// SIG undefined FUN_1415a4a30(void)

void FUN_1415a4a30(longlong *param_1)

{
  wchar_t *_Str;
  wchar_t *_Str_00;
  double dVar1;
  int local_res8 [2];
  float local_res10 [2];
  int *local_28;
  float *local_20;
  code *local_18;
  int **ppiStack_10;
  
  local_res10[0] = 10.0;
  local_res8[0] = 2;
  if (0 < (int)param_1[1]) {
    _Str_00 = L"";
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar1 = _wtof(_Str);
    local_res10[0] = (float)dVar1;
    if (1 < (int)param_1[1]) {
      if (*(int *)(*param_1 + 0x18) != 0) {
        _Str_00 = *(wchar_t **)(*param_1 + 0x10);
      }
      local_res8[0] = _wtoi(_Str_00);
    }
  }
  local_28 = local_res8;
  local_20 = local_res10;
  ppiStack_10 = &local_28;
  local_18 = FUN_1415a3e80;
  FUN_1406a7b10(local_res8[0],&local_18,0);
  return;
}



// FUNCTION 1415a4b00 FUN_1415a4b00 body=325 status=ok
// SIG undefined FUN_1415a4b00(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1415a4b00(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_d8 [2];
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  *param_2 = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_3);
    local_d8[1] = 0;
    uVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,lVar3);
    FUN_1415a5a50(param_1,local_d8,uVar4,local_d8 + 1);
    if (*(int *)(lVar3 + 0x40) != 0) {
      plVar5 = *(longlong **)(lVar3 + 0x30);
      if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(lVar3 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      FMemory::Free();
    }
    if (param_2 == local_d8) {
      if (local_d8[0] == 0) goto LAB_1415a4bee;
      LOCK();
      piVar1 = (int *)(local_d8[0] + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar3 = local_d8[0];
    }
    else {
      lVar3 = *param_2;
      *param_2 = local_d8[0];
      if (lVar3 == 0) goto LAB_1415a4bee;
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
LAB_1415a4bee:
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_3 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415a4c50 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>::
ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      FUN_1415b2c80(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415a4d00 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
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



// FUNCTION 1415a4db0 FUN_1415a4db0 body=147 status=ok
// SIG undefined FUN_1415a4db0(void)

void FUN_1415a4db0(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res8 [16];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  code *local_28;
  undefined1 *puStack_20;
  
  cVar1 = (*(code *)*param_1)(param_1[1]);
  if (cVar1 == '\0') {
    QueryPerformanceCounter(&local_res20);
    do {
      FUN_1416b1810(param_2);
      cVar1 = (*(code *)*param_1)(param_1[1]);
    } while (cVar1 == '\0');
    puStack_20 = local_res8;
    local_res8[0] = 0;
    local_28 = FUN_1415a3f40;
    lVar2 = FUN_1415d8310(&local_28,&DAT_1464a8c00);
    QueryPerformanceCounter(&local_res18);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (local_res18.s.LowPart - local_res20._0_4_);
  }
  return;
}



// FUNCTION 1415a4e50 ConvertToAbsolutePathForExternalAppForRead body=150 status=ok
// SIG undefined ConvertToAbsolutePathForExternalAppForRead(void)

undefined8
IPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (undefined8 param_1,undefined8 param_2,short *param_3)

{
  uint uVar1;
  longlong lVar2;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    ::_guard_xfg_dispatch_icall_nop(local_18,param_3,(longlong)(int)uVar1 * 2);
  }
  FPaths::ConvertRelativePathToFull(param_2,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415a4ef0 FUN_1415a4ef0 body=561 status=ok
// SIG undefined FUN_1415a4ef0(void)

void FUN_1415a4ef0(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  uint *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  
  puVar7 = (uint *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar10 = 4;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  do {
    *(uint *)((longlong)puVar7 + (longlong)param_1 + (-0x20 - (longlong)param_2)) = puVar7[-8];
    puVar1 = puVar7 + -4;
    puVar8 = (uint *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    *(undefined8 *)((longlong)puVar7 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
         *(undefined8 *)(puVar7 + -0xe);
    *(undefined8 *)((longlong)puVar7 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
         *(undefined8 *)(puVar7 + -0xc);
    *(undefined8 *)((longlong)puVar7 + (longlong)param_1 + (-0x28 - (longlong)param_2)) =
         *(undefined8 *)(puVar7 + -10);
    if (puVar8 != puVar1) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::Empty(puVar8,puVar7[-2] - puVar7[9]);
      uVar2 = puVar7[6];
      local_98 = 0;
      uStack_94 = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar2 != 0) {
        puVar9 = *(uint **)(puVar7 + 4);
        if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
          puVar9 = puVar7;
        }
        uVar3 = *puVar9;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar3 == 0) {
          lVar6 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar5 = local_98 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar5;
          if (bVar4) goto LAB_1415a505f;
          uVar3 = puVar9[lVar6 + 1];
        }
        uStack_94 = -uVar3 & uVar3;
        iVar5 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_84 = (iStack_80 - iVar5) + 0x1f;
        if ((int)uVar2 < (int)uStack_84) {
LAB_1415a505f:
          uStack_84 = uVar2;
        }
      }
      uStack_70 = CONCAT44(uStack_94,local_98);
      uStack_38 = 0xffffffff;
      uStack_34 = uStack_84;
      iStack_30 = iStack_80;
      uStack_60 = CONCAT44(uStack_84,0xffffffff);
      local_58 = iStack_80;
      local_68 = puVar7;
      local_50 = puVar1;
      uStack_48 = uStack_70;
      puStack_40 = puVar7;
      if ((int)uStack_84 < (int)uVar2) {
        do {
          TSet<TTuple<unsigned_int,FVulkanRenderPass_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanRenderPass_*,0>,FDefaultSetAllocator>
          ::Emplace<TTuple<unsigned_int,FVulkanRenderPass_*>_const_&>
                    (puVar8,local_res8,*(longlong *)puVar1 + (longlong)(int)uStack_84 * 0x18,0);
          uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
          uStack_84 = uStack_60._4_4_;
        } while ((int)uStack_60._4_4_ < (int)local_68[6]);
      }
    }
    *(undefined8 *)((longlong)puVar7 + (longlong)param_1 + (-0x18 - (longlong)param_2)) =
         *(undefined8 *)(puVar7 + -6);
    puVar7 = puVar7 + 0x1e;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 1415a5130 FUN_1415a5130 body=499 status=ok
// SIG undefined FUN_1415a5130(void)

undefined1 FUN_1415a5130(longlong *param_1,short *param_2,short *param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *local_78;
  ulonglong local_70;
  undefined2 *local_68;
  ulonglong local_60;
  undefined **local_58;
  longlong *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined1 local_38;
  
  lVar4 = -1;
  local_78 = (undefined2 *)0x0;
  local_70 = 0;
  if ((param_2 != (short *)0x0) && (lVar6 = lVar4, *param_2 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_70 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    _guard_xfg_dispatch_icall_nop(local_78,param_2,(longlong)(int)uVar5 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_78);
  local_68 = (undefined2 *)0x0;
  local_60 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != 0);
    uVar5 = (int)lVar4 + 1;
    local_60 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    _guard_xfg_dispatch_icall_nop(local_68,param_3,(longlong)(int)uVar5 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_68);
  puVar3 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar3 = local_68;
  }
  cVar1 = (**(code **)(*param_1 + 0xd0))(param_1,puVar3);
  if (cVar1 == '\0') {
LAB_1415a52e8:
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar3 = local_78;
    }
    cVar1 = (**(code **)(*param_1 + 0xd0))(param_1,puVar3);
    if (cVar1 == '\0') {
      puVar3 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar3 = local_78;
      }
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,puVar3);
      if (cVar1 == '\0') goto LAB_1415a52e8;
    }
    local_58 = &PTR_FUN_144ca0808;
    local_40 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      local_40 = local_78;
    }
    local_48 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      local_48 = local_68;
    }
    local_50 = param_1;
    local_38 = param_4;
    uVar2 = (**(code **)(*param_1 + 0x128))(param_1,local_48,&local_58);
    local_58 = &PTR_FUN_143f47c98;
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1415a5330 CopyFile body=278 status=ok
// SIG undefined CopyFile(void)

undefined8
IPlatformFile::CopyFile
          (longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,byte param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,param_3,param_4 & 1);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 200))(param_1,param_2,0,param_5 & 1);
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
    if (0 < lVar3) {
      lVar6 = lVar3;
      if (0xfffff < lVar3) {
        lVar6 = 0x100000;
      }
      uVar4 = FMemory::Malloc((longlong)(int)lVar6,0);
      do {
        lVar5 = lVar3;
        if (lVar6 <= lVar3) {
          lVar5 = lVar6;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar4,lVar5);
        (**(code **)(*plVar2 + 0x28))(plVar2,uVar4,lVar5);
        lVar3 = lVar3 - lVar5;
      } while (lVar3 != 0);
      FMemory::Free(uVar4);
    }
    uVar4 = 1;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  (**(code **)*plVar1)(plVar1,1);
  return uVar4;
}



// FUNCTION 1415a5450 FUN_1415a5450 body=154 status=ok
// SIG undefined FUN_1415a5450(void)

undefined8 * FUN_1415a5450(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_140438ef0();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = &PTR_FUN_144ca0a60;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(param_1 + 0x20);
    }
    if (puVar3 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar3)();
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar1[2] = *(undefined8 *)(param_1 + 0x10);
      return puVar1;
    }
  }
  puVar1[2] = AK::MemoryMgr::StartProfileThreadUsage;
  return puVar1;
}



// FUNCTION 1415a5500 FUN_1415a5500 body=58 status=ok
// SIG undefined FUN_1415a5500(void)

void FUN_1415a5500(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0d88;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0dd0;
  }
  return;
}



// FUNCTION 1415a5540 FUN_1415a5540 body=58 status=ok
// SIG undefined FUN_1415a5540(void)

void FUN_1415a5540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0c68;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0cb0;
  }
  return;
}



// FUNCTION 1415a5580 FUN_1415a5580 body=58 status=ok
// SIG undefined FUN_1415a5580(void)

void FUN_1415a5580(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0cf8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0d40;
  }
  return;
}



// FUNCTION 1415a55c0 FUN_1415a55c0 body=58 status=ok
// SIG undefined FUN_1415a55c0(void)

void FUN_1415a55c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0bd8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0c20;
  }
  return;
}



// FUNCTION 1415a5600 FUN_1415a5600 body=58 status=ok
// SIG undefined FUN_1415a5600(void)

void FUN_1415a5600(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0ea8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0ef0;
  }
  return;
}



// FUNCTION 1415a5640 FUN_1415a5640 body=58 status=ok
// SIG undefined FUN_1415a5640(void)

void FUN_1415a5640(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0e18;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144ca0e60;
  }
  return;
}



// FUNCTION 1415a5680 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0b08;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1415a56b0 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0a20;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1415a56e0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0b48;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144ca0b90;
  }
  return;
}



// FUNCTION 1415a5730 FUN_1415a5730 body=66 status=ok
// SIG undefined FUN_1415a5730(void)

void FUN_1415a5730(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ca0a78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144ca0ac0;
  }
  return;
}



// FUNCTION 1415a5780 FUN_1415a5780 body=564 status=ok
// SIG undefined FUN_1415a5780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1415a5780(longlong *param_1,short *param_2)

{
  short sVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  bool bVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 auStack_2a8 [32];
  undefined2 *local_288;
  ulonglong local_280;
  void *local_278;
  ulonglong local_270;
  undefined4 local_268;
  short local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  bVar9 = false;
  local_268 = 0;
  local_288 = (undefined2 *)0x0;
  local_280 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_280 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
    }
    _guard_xfg_dispatch_icall_nop(local_288,param_2,(longlong)(int)uVar6 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_288);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_280 != 0) {
    puVar10 = local_288;
  }
  iVar11 = 0;
  _guard_xfg_dispatch_icall_nop(local_258,0,0x208);
  psVar8 = local_258;
  do {
    sVar1 = *(short *)(((longlong)puVar10 - (longlong)local_258) + (longlong)psVar8);
    if ((sVar1 == 0x2f) || (sVar1 == 0)) {
      *psVar8 = 0;
      if (psVar8 == local_258) {
LAB_1415a58ee:
        bVar2 = false;
      }
      else {
        local_278 = (void *)0x0;
        local_270 = 0;
        if (local_258[0] != 0) {
          lVar7 = -1;
          do {
            lVar3 = lVar7 + 1;
            lVar7 = lVar7 + 1;
          } while (local_258[lVar3] != 0);
          uVar6 = (int)lVar7 + 1;
          local_270 = (ulonglong)uVar6;
          if (0 < (int)uVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
          }
          _guard_xfg_dispatch_icall_nop(local_278,local_258,(longlong)(int)uVar6 * 2);
        }
        bVar9 = true;
        cVar4 = FUN_141674b80(&local_278);
        if (cVar4 != '\0') goto LAB_1415a58ee;
        bVar2 = true;
      }
      if ((bVar9) && (bVar9 = false, local_278 != (void *)0x0)) {
        FMemory::Free();
      }
      if (((bVar2) && (cVar4 = (**(code **)(*param_1 + 0xd8))(param_1,local_258), cVar4 == '\0')) &&
         (cVar4 = (**(code **)(*param_1 + 0xd0))(param_1,local_258), cVar4 == '\0')) break;
    }
    sVar1 = *(short *)(((longlong)puVar10 - (longlong)local_258) + (longlong)psVar8);
    if (sVar1 == 0) break;
    *psVar8 = sVar1;
    iVar11 = iVar11 + 1;
    psVar8 = psVar8 + 1;
  } while (iVar11 < 0x103);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_280 != 0) {
    puVar10 = local_288;
  }
  uVar5 = (**(code **)(*param_1 + 0xd0))(param_1,puVar10);
  if (local_288 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 1415a59c0 FUN_1415a59c0 body=136 status=ok
// SIG undefined FUN_1415a59c0(void)

undefined8 FUN_1415a59c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  
  local_78[0] = 0;
  uVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,param_3);
  FUN_1415a5a50(param_1,param_2,uVar1,local_78);
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_3 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415a5a50 FUN_1415a5a50 body=936 status=ok
// SIG undefined FUN_1415a5a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1415a5a50(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 local_e8 [24];
  longlong local_d0 [4];
  longlong *local_b0;
  int local_a8;
  int local_a4;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar10 = 0;
  *param_2 = 0;
  if ((*(char *)(param_1 + 9) == '\0') || (cVar7 = FUN_1415bac00(), cVar7 == '\0')) {
    if (*(int *)(param_3 + 8) != 0) {
      plVar9 = (longlong *)param_3[6];
      if ((longlong *)param_3[6] == (longlong *)0x0) {
        plVar9 = param_3 + 2;
      }
      if (plVar9 != (longlong *)0x0) {
        uVar10 = (**(code **)(*plVar9 + 8))();
      }
    }
    (*(code *)*param_3)(uVar10);
    goto LAB_1415a5d8a;
  }
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
      UNLOCK();
    }
    local_a8 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_d0,0)
    ;
    plVar9 = local_d0;
    if (local_b0 != (longlong *)0x0) {
      plVar9 = local_b0;
    }
    *plVar9 = lVar12;
  }
  iVar2 = local_a8;
  lVar12 = *param_4;
  if (lVar12 != 0) {
    local_a8 = local_a8 + 1;
    if (local_a4 < local_a8) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_d0,iVar2);
      lVar12 = *param_4;
    }
    plVar9 = local_d0;
    if (local_b0 != (longlong *)0x0) {
      plVar9 = local_b0;
    }
    plVar9[iVar2] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
      UNLOCK();
    }
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_3);
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x60,local_128);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_144ca0a60;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_98);
  }
  uVar4 = *(undefined4 *)(param_1 + 4);
  local_138[0] = &LAB_1415a4080;
  plVar9 = (longlong *)FUN_140596960(local_e8,local_d0,0xff);
  lVar12 = *plVar9;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar12 + 0x10,local_138);
  *(undefined4 *)(lVar12 + 0x60) = uVar4;
  lVar12 = *plVar9;
  lVar6 = plVar9[2];
  lVar11 = plVar9[1];
  lVar5 = *(longlong *)(lVar12 + 0x78);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_140 = lVar5;
  FUN_1405ab110(lVar12,lVar11,(int)lVar6,1);
  if (local_f8 != 0) {
    plVar9 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar9 = local_108;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_2 == &local_140) {
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar12 = local_140;
      goto joined_r0x0001415a5c80;
    }
  }
  else {
    lVar12 = *param_2;
    *param_2 = lVar5;
    if (lVar12 != 0) {
      LOCK();
      piVar1 = (int *)(lVar12 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x0001415a5c80:
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar12);
      }
    }
  }
  if (local_58 != 0) {
    plVar9 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar9 = local_68;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar2 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (param_1 + 0x10,iVar2);
  }
  lVar12 = *param_2;
  lVar11 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar11 = param_1 + 0x10;
  }
  *(longlong *)(lVar11 + (longlong)iVar2 * 8) = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
    UNLOCK();
  }
  plVar9 = local_d0;
  iVar2 = local_a8;
  if (local_b0 != (longlong *)0x0) {
    plVar9 = local_b0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar9 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar9 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar9 = plVar9 + 1;
  }
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_1415a5d8a:
  if (*(int *)(param_3 + 8) != 0) {
    plVar9 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar9 = param_3 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_3[6] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415a5e00 DeleteDirectoryRecursively body=95 status=ok
// SIG undefined DeleteDirectoryRecursively(void)

bool IPlatformFile::DeleteDirectoryRecursively(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined **local_18;
  longlong *local_10;
  
  local_18 = &PTR_FUN_144ca07f8;
  local_10 = param_1;
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,&local_18);
  (**(code **)(*local_10 + 0xe0))(local_10,param_2);
  cVar1 = (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 1415a5e60 FUN_1415a5e60 body=394 status=ok
// SIG undefined FUN_1415a5e60(void)

void FUN_1415a5e60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = 0;
  iVar3 = 1;
  lVar8 = 0;
  lVar7 = 1;
  do {
    lVar6 = lVar7 * 0x78;
    dVar9 = *(double *)(lVar6 + 0x58 + param_1) + *(double *)(lVar6 + 0x40 + param_1);
    if (iVar3 == 3) {
      dVar9 = dVar9 * (double)*DAT_1468b0cf0;
    }
    dVar10 = *(double *)(lVar6 + 0xd0 + param_1) + *(double *)(lVar6 + 0xb8 + param_1);
    iVar1 = iVar3;
    lVar2 = lVar7;
    if (dVar9 <= *(double *)(lVar8 * 0x78 + 0x58 + param_1) +
                 *(double *)(lVar8 * 0x78 + 0x40 + param_1)) {
      iVar1 = iVar5;
      lVar2 = lVar8;
    }
    if (iVar3 == 2) {
      dVar10 = dVar10 * (double)*DAT_1468b0cf0;
    }
    dVar9 = *(double *)(lVar6 + 0x148 + param_1) + *(double *)(lVar6 + 0x130 + param_1);
    iVar4 = iVar3 + 1;
    lVar6 = lVar7 + 1;
    if (dVar10 <= *(double *)(lVar2 * 0x78 + 0x58 + param_1) +
                  *(double *)(lVar2 * 0x78 + 0x40 + param_1)) {
      iVar4 = iVar1;
      lVar6 = lVar2;
    }
    if (iVar3 == 1) {
      dVar9 = dVar9 * (double)*DAT_1468b0cf0;
    }
    lVar8 = lVar7 + 2;
    iVar5 = iVar3 + 2;
    if (dVar9 <= *(double *)(lVar6 * 0x78 + 0x58 + param_1) +
                 *(double *)(lVar6 * 0x78 + 0x40 + param_1)) {
      lVar8 = lVar6;
      iVar5 = iVar4;
    }
    iVar3 = iVar3 + 3;
    lVar7 = lVar7 + 3;
  } while (iVar3 < 4);
  dVar9 = *(double *)((longlong)iVar5 * 0x78 + 0x40 + param_1);
  if ((dVar9 + 1.0 < *(double *)(param_1 + 8)) &&
     ((double)*DAT_1468b0cd8 * dVar9 - dVar9 < *(double *)((longlong)iVar5 * 0x78 + 0x58 + param_1))
     ) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(int *)(param_1 + 0x2c) = iVar5;
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x2c) = iVar5;
  return;
}



// FUNCTION 1415a5ff0 DumpAllocatorStats body=41 status=ok
// SIG undefined DumpAllocatorStats(void)

void FMalloc::DumpAllocatorStats(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  FOutputDevice::LogfImpl(param_2,L"Allocator Stats for %s: (not implemented)",uVar1);
  return;
}



// FUNCTION 1415a6020 FUN_1415a6020 body=669 status=ok
// SIG undefined FUN_1415a6020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415a6020(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_238 [32];
  double local_218;
  double local_210;
  double local_208;
  undefined1 local_1f8 [16];
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  FUN_1416a13c0(&local_1e8);
  FName::FName(local_1f8,L"LogMemory",1);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,"WindowsNoEditor");
  local_218 = (double)local_50;
  FOutputDevice::CategorizedLogfImpl(param_1,local_1f8,5,L"Platform Memory Stats for %s");
  if (local_58 != 0) {
    FMemory::Free();
  }
  fVar1 = (float)local_190;
  if (local_190 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  fVar2 = (float)local_198;
  local_210 = (double)(fVar1 * 9.536743e-07);
  if (local_198 < 0) {
    fVar2 = fVar2 + 1.8446744e+19;
  }
  local_218 = (double)(fVar2 * 9.536743e-07);
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_1f8,5,L"Process Physical Memory: %.2f MB used, %.2f MB peak");
  fVar1 = (float)local_180;
  if (local_180 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  fVar2 = (float)local_188;
  local_210 = (double)(fVar1 * 9.536743e-07);
  if (local_188 < 0) {
    fVar2 = fVar2 + 1.8446744e+19;
  }
  local_218 = (double)(fVar2 * 9.536743e-07);
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_1f8,5,L"Process Virtual Memory: %.2f MB used, %.2f MB peak");
  fVar1 = (float)local_1e8;
  if (local_1e8 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  local_208 = (double)(fVar1 * 9.536743e-07);
  fVar1 = (float)local_1a8;
  if (local_1a8 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  local_210 = (double)(fVar1 * 9.536743e-07);
  fVar1 = (float)(local_1e8 - local_1a8);
  if (local_1e8 - local_1a8 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  local_218 = (double)(fVar1 * 9.536743e-07);
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_1f8,5,L"Physical Memory: %.2f MB used,  %.2f MB free, %.2f MB total");
  fVar1 = (float)local_1e0;
  if (local_1e0 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  local_208 = (double)(fVar1 * 9.536743e-07);
  fVar1 = (float)local_1a0;
  if (local_1a0 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  local_210 = (double)(fVar1 * 9.536743e-07);
  fVar1 = (float)(local_1e0 - local_1a0);
  if (local_1e0 - local_1a0 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  local_218 = (double)(fVar1 * 9.536743e-07);
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_1f8,5,L"Virtual Memory: %.2f MB used,  %.2f MB free, %.2f MB total");
  return;
}



// FUNCTION 1415a62c0 FUN_1415a62c0 body=182 status=ok
// SIG undefined FUN_1415a62c0(void)

void FUN_1415a62c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar5 = 0x12;
    plVar2 = (longlong *)(*plVar4 + 0x3f8);
    do {
      plVar1 = plVar2 + -5;
      plVar2 = plVar2 + -7;
      lVar5 = lVar5 + -1;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
    } while (lVar5 != 0);
    FMemory::Free(*plVar4);
    plVar4 = plVar4 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1415a6380 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1415a6440 FUN_1415a6440 body=376 status=ok
// SIG undefined FUN_1415a6440(void)

void FUN_1415a6440(longlong param_1,void *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Dst;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = *(int *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar4 = (3 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar4;
  if (*(int *)(param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  lVar7 = -1;
  puVar2 = (undefined4 *)(*plVar1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar2 = 0x2f003c;
  *(undefined2 *)(puVar2 + 1) = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)((longlong)param_2 + lVar7 * 2) != 0);
  iVar6 = (int)lVar7;
  if (iVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar6;
    *(int *)(param_1 + 0x18) = iVar5;
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    _Dst = (void *)(*plVar1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar4 = (2 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar4;
  if (*(int *)(param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  puVar3 = (undefined2 *)(*plVar1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar3 = 0x3e;
  puVar3[1] = 0;
  iVar6 = *(int *)(param_1 + 0x18);
  iVar4 = (3 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_1 + 0x18) = iVar4;
  if (*(int *)(param_1 + 0x1c) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  puVar2 = (undefined4 *)(*plVar1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar2 = 0xa000d;
  *(undefined2 *)(puVar2 + 1) = 0;
  return;
}



// FUNCTION 1415a65c0 FUN_1415a65c0 body=1062 status=ok
// SIG undefined FUN_1415a65c0(void)

undefined2 * FUN_1415a65c0(void)

{
  size_t _Size;
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  wchar_t *_Src;
  longlong lVar15;
  wchar_t *local_68;
  ulonglong local_60;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  
  puVar13 = (undefined2 *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b1468) && (_Init_thread_header(&DAT_1468b1468), DAT_1468b1468 == -1))
  {
    atexit((_func_5014 *)&LAB_143e75c70);
    _Init_thread_footer(&DAT_1468b1468);
  }
  if ((DAT_1468b1460 != 0) && (DAT_1468b1460 != 1)) goto LAB_1415a6994;
  local_68 = (wchar_t *)0x0;
  local_60 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  _Src = local_68;
  builtin_wcsncpy(local_68,L"../../../Engine/",0x11);
  FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();
  uVar6 = FPlatformFileManager::Get();
  plVar7 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar6);
  uVar4 = local_60;
  iVar3 = (int)local_60;
  lVar15 = (longlong)(int)local_60;
  local_58 = (undefined2 *)0x0;
  local_50 = (int)local_60;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_58,(10 - (uint)((int)local_60 != 0)) + (int)local_60,0);
  _Size = lVar15 * 2;
  _guard_xfg_dispatch_icall_nop(local_58,_Src,_Size);
  FString::PathAppend(&local_58,L"Binaries",8);
  puVar8 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar8 = local_58;
  }
  cVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7,puVar8);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    lVar15 = -1;
    puVar8 = local_58;
    if (PTR_u__________Engine__146299600 == (undefined *)0x0) {
LAB_1415a6849:
      bVar1 = false;
    }
    else {
      uVar6 = FPlatformFileManager::Get();
      plVar7 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar6);
      puVar2 = PTR_u__________Engine__146299600;
      iVar10 = 0;
      local_58 = (undefined2 *)0x0;
      local_4c = 0;
      iVar14 = 0;
      if ((PTR_u__________Engine__146299600 == (undefined *)0x0) ||
         (iVar14 = 0, *(short *)PTR_u__________Engine__146299600 == 0)) {
LAB_1415a67db:
        iVar11 = 10;
      }
      else {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (*(short *)(PTR_u__________Engine__146299600 + lVar12 * 2) != 0);
        iVar11 = (int)lVar12 + 1;
        local_50 = iVar11;
        if (0 < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        iVar14 = local_4c;
        iVar10 = local_50;
        puVar13 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,puVar2,(longlong)iVar11 * 2);
        iVar11 = 9;
        if (iVar10 == 0) goto LAB_1415a67db;
      }
      puVar8 = (undefined2 *)0x0;
      local_48 = puVar13;
      local_40 = iVar10;
      local_3c = iVar14;
      if (iVar14 < iVar10 + iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      }
      FString::PathAppend(&local_48,L"Binaries",8);
      puVar13 = (undefined2 *)0x3;
      puVar9 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar9 = local_48;
      }
      cVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7,puVar9);
      if (cVar5 == '\0') goto LAB_1415a6849;
      bVar1 = true;
    }
    iVar10 = 0;
    if ((((ulonglong)puVar13 & 2) != 0) &&
       (puVar13 = (undefined2 *)(ulonglong)((uint)puVar13 & 0xfffffffd),
       local_48 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((((ulonglong)puVar13 & 1) != 0) && (puVar8 != (undefined2 *)0x0)) {
      FMemory::Free(puVar8);
    }
    puVar2 = PTR_u__________Engine__146299600;
    _Src = local_68;
    if ((bVar1) && (DAT_1468b1458 != (undefined2 *)PTR_u__________Engine__146299600)) {
      if ((PTR_u__________Engine__146299600 != (undefined *)0x0) &&
         (*(short *)PTR_u__________Engine__146299600 != 0)) {
        do {
          lVar15 = lVar15 + 1;
        } while (*(short *)(PTR_u__________Engine__146299600 + lVar15 * 2) != 0);
        iVar10 = (int)lVar15 + 1;
      }
      DAT_1468b1460 = 0;
      iVar14 = 0;
      if (DAT_1468b1464 != iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1468b1458,iVar10);
        iVar14 = DAT_1468b1460;
      }
      DAT_1468b1460 = iVar10 + iVar14;
      if (DAT_1468b1464 < DAT_1468b1460) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b1458);
      }
      _Src = local_68;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop(DAT_1468b1458,puVar2,(longlong)iVar10 * 2);
        _Src = local_68;
      }
    }
  }
  else {
    DAT_1468b1460 = iVar3;
    if ((iVar3 == 0) && (DAT_1468b1464 == 0)) {
      DAT_1468b1464 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b1458,uVar4 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(DAT_1468b1458,_Src,_Size);
    }
  }
  if ((DAT_1468b1460 == 0) || (DAT_1468b1460 == 1)) {
    DAT_1468b1460 = iVar3;
    if ((iVar3 == 0) && (DAT_1468b1464 == 0)) {
      DAT_1468b1464 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&DAT_1468b1458,uVar4 & 0xffffffff,DAT_1468b1464);
      _guard_xfg_dispatch_icall_nop(DAT_1468b1458,_Src,_Size);
    }
  }
  if (_Src != (wchar_t *)0x0) {
    FMemory::Free(_Src);
  }
LAB_1415a6994:
  puVar13 = &DAT_143f3eda8;
  if (DAT_1468b1460 != 0) {
    puVar13 = DAT_1468b1458;
  }
  return puVar13;
}



// FUNCTION 1415a69f0 EnsureCompletion body=150 status=ok
// SIG undefined EnsureCompletion(void)

void FAsyncTask<FGenericReadRequestWorker>::EnsureCompletion(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 == (longlong *)0x0) {
      LOCK();
      bVar3 = *(int *)(param_1 + 0x10) == 0;
      if (bVar3) {
        *(int *)(param_1 + 0x10) = 0;
      }
      UNLOCK();
      if (!bVar3) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        UNLOCK();
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        UNLOCK();
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
          *(undefined8 *)(param_1 + 0x20) = 0;
          return;
        }
        goto LAB_1415a6a77;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0xffffffff,0)
  ;
LAB_1415a6a77:
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1415a6a90 Exec body=85 status=ok
// SIG undefined Exec(void)

undefined1 FExec::Exec(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Core\\Public\\Misc/Exec.h",0x17,
             L"Pure virtual not implemented (%s)",L"FExec::Exec");
  FDebug::AssertFailed
            (&DAT_143f3f584,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Core\\Public\\Misc/Exec.h",0x17
             ,L"Pure virtual not implemented (%s)",L"FExec::Exec");
  return 0;
}



// FUNCTION 1415a6b50 FUN_1415a6b50 body=66 status=ok
// SIG undefined FUN_1415a6b50(void)

undefined8 FUN_1415a6b50(void)

{
  LARGE_INTEGER local_res18 [2];
  
  QueryPerformanceCounter(local_res18);
  DAT_1468b110c =
       (int)(((double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430);
  return CONCAT71((uint7)(uint3)((uint)DAT_1468b110c >> 8),1);
}



// FUNCTION 1415a6ba0 FUN_1415a6ba0 body=91 status=ok
// SIG undefined FUN_1415a6ba0(void)

undefined8 FUN_1415a6ba0(void)

{
  undefined1 local_98 [64];
  ulonglong local_58;
  
  if ((((DAT_1468b02a2 == '\0') && (DAT_1468b0308 != 0)) &&
      (FUN_1416a13c0(local_98), local_58 < DAT_1468b0308)) && (DAT_1468b02a2 == '\0')) {
    DAT_1464a837c = DAT_1464a837c + 1;
    DAT_1468b02a2 = 1;
    return 1;
  }
  return 1;
}



// FUNCTION 1415a6c00 FUN_1415a6c00 body=32 status=ok
// SIG undefined FUN_1415a6c00(void)

void FUN_1415a6c00(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),&local_18);
  return;
}



// FUNCTION 1415a6c20 FUN_1415a6c20 body=82 status=ok
// SIG undefined FUN_1415a6c20(void)

void FUN_1415a6c20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_5;
  local_10 = param_5[1];
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,&local_18);
  return;
}



// FUNCTION 1415a6c80 FUN_1415a6c80 body=268 status=ok
// SIG undefined FUN_1415a6c80(void)

void FUN_1415a6c80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  float fVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    local_res8[0] = 0x1e;
  }
  else {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)*param_2;
    }
    FParse::Value(puVar4,L"delay=",local_res8);
  }
  uVar2 = FUN_14164ab60();
  FUN_141597530(uVar2,*(undefined8 *)(param_1 + 0x30));
  uVar2 = FUN_14164ab60();
  FUN_141597530(uVar2,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (local_res8[0] != 0) {
    if (local_res8[0] < 10) {
      iVar1 = 10;
    }
    else {
      iVar1 = 300;
      if (local_res8[0] < 300) {
        iVar1 = local_res8[0];
      }
    }
    local_res8[0] = iVar1;
    uVar2 = FUN_14164ab60();
    puVar3 = (undefined8 *)
             FUN_14158f860(uVar2,local_res10,param_1 + 0x10,L"FCPUTimeDump_OnAddCPUTime",0);
    fVar5 = (float)local_res8[0];
    *(undefined8 *)(param_1 + 0x30) = *puVar3;
    uVar2 = FUN_14164ab60();
    puVar3 = (undefined8 *)
             FUN_14158f860(uVar2,local_res10,param_1 + 0x20,L"FCPUTimeDump_OnCPUTimeDump",fVar5);
    *(undefined8 *)(param_1 + 0x38) = *puVar3;
  }
  return;
}



// FUNCTION 1415a6d90 ExecuteIfSafe body=20 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),<lambda_c6658ba91229cdb400a3c832ffd22761>_>
::ExecuteIfSafe(longlong param_1)

{
  <lambda_c6658ba91229cdb400a3c832ffd22761>::operator()(param_1 + 8);
  return 1;
}



// FUNCTION 1415a6db0 FUN_1415a6db0 body=20 status=ok
// SIG undefined FUN_1415a6db0(void)

undefined1 FUN_1415a6db0(longlong param_1)

{
  FUN_1415a1ca0(param_1 + 8);
  return 1;
}



// FUNCTION 1415a6dd0 FUN_1415a6dd0 body=20 status=ok
// SIG undefined FUN_1415a6dd0(void)

undefined1 FUN_1415a6dd0(longlong param_1)

{
  FUN_1415a1d20(param_1 + 8);
  return 1;
}



// FUNCTION 1415a6df0 FUN_1415a6df0 body=20 status=ok
// SIG undefined FUN_1415a6df0(void)

undefined1 FUN_1415a6df0(longlong param_1)

{
  FUN_1415a1fb0(param_1 + 8);
  return 1;
}



// FUNCTION 1415a6e10 FUN_1415a6e10 body=23 status=ok
// SIG undefined FUN_1415a6e10(void)

undefined1 FUN_1415a6e10(void)

{
  FUN_1415a3970(&DAT_1464a8740);
  return 1;
}



// FUNCTION 1415a6e40 FUN_1415a6e40 body=34 status=ok
// SIG undefined FUN_1415a6e40(void)

undefined8 FUN_1415a6e40(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),&local_18);
  return 1;
}



// FUNCTION 1415a6e70 FUN_1415a6e70 body=84 status=ok
// SIG undefined FUN_1415a6e70(void)

undefined8
FUN_1415a6e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_5;
  local_10 = param_5[1];
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,&local_18);
  return 1;
}



// FUNCTION 1415a6ed0 FUN_1415a6ed0 body=356 status=ok
// SIG undefined FUN_1415a6ed0(void)

void FUN_1415a6ed0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (((DAT_1468e2448 == 0) || (pvVar5 = TlsGetValue(DAT_1468e2448), (int)pvVar5 == 0)) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  FUN_1415afbd0();
  LOCK();
  DAT_1468b0288 = DAT_1468b0288 + 1;
  UNLOCK();
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  lVar3 = DAT_1468b0da0;
  plVar9 = (longlong *)0x0;
  if (((DAT_1468e2448 == 0) || (pvVar5 = TlsGetValue(DAT_1468e2448), (int)pvVar5 == 0)) &&
     (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    plVar7 = (longlong *)&DAT_00000004;
    if (DVar4 != DAT_1468c21c0) goto LAB_1415a6f60;
  }
  plVar7 = plVar9;
LAB_1415a6f60:
  if (*(int *)((longlong)plVar7 + lVar3) == 1) {
    FUN_141591a60(param_1[3],param_2,param_3);
  }
  *param_1 = &PTR_FUN_144ca0408;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    plVar7 = plVar9;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar7 = plVar8;
    }
    TlsSetValue(*pDVar6,plVar7);
  }
  if ((int)plVar7[2] < 0x20) {
    plVar9 = (longlong *)plVar7[1];
  }
  else {
    if (*plVar7 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar6 + 2);
    }
    *plVar7 = plVar7[1];
    plVar7[1] = 0;
    *(undefined4 *)(plVar7 + 2) = 0;
  }
  *param_1 = plVar9;
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  plVar7[1] = (longlong)param_1;
  return;
}



// FUNCTION 1415a7040 FUN_1415a7040 body=973 status=ok
// SIG undefined FUN_1415a7040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1415a7040(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong *puVar6;
  void *pvVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined1 auStack_1e8 [32];
  byte local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  undefined1 local_1a8 [64];
  undefined1 *local_168;
  undefined8 local_160;
  undefined4 local_158 [64];
  undefined4 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1c8 = 1;
  if (param_1 != param_2) {
    iVar5 = *(int *)(param_1 + 0x10);
    lVar18 = (longlong)iVar5;
    local_1c8 = iVar5 == *(int *)(param_2 + 0x10);
    if ((bool)local_1c8) {
      plVar1 = (longlong *)(param_2 + 8);
      iVar12 = *(int *)(param_1 + 0x10);
      plVar2 = (longlong *)(param_1 + 8);
      if (iVar12 == *(int *)(param_2 + 0x10)) {
        plVar9 = (longlong *)*plVar1;
        if (iVar12 != 0) {
          lVar16 = *plVar2 - (longlong)plVar9;
          do {
            if (*(longlong *)(lVar16 + (longlong)plVar9) != *plVar9) goto LAB_1415a70d7;
            plVar9 = plVar9 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      else {
LAB_1415a70d7:
        local_168 = (undefined1 *)0x0;
        local_160 = 0;
        local_1c0 = param_1;
        if (0 < iVar5) {
          TArray<FMovieSceneSequenceID,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo(local_1a8)
          ;
        }
        puVar14 = (ulonglong *)*plVar1;
        puVar3 = puVar14 + *(int *)(param_2 + 0x10);
        for (; puVar14 != puVar3; puVar14 = puVar14 + 1) {
          puVar6 = (ulonglong *)*plVar2;
          local_1b8 = *puVar14;
          puVar13 = puVar6;
          while( true ) {
            if (puVar13 == puVar6 + *(int *)(param_1 + 0x10)) goto LAB_1415a713e;
            if (*puVar13 == local_1b8) break;
            puVar13 = puVar13 + 1;
          }
          iVar12 = (int)((longlong)puVar13 - (longlong)puVar6 >> 3);
          if (iVar12 == -1) {
LAB_1415a713e:
            if (local_168 != (undefined1 *)0x0) {
              local_1b8 = FMemory::Free(local_168);
            }
            return local_1b8 & 0xffffffffffffff00;
          }
          lVar16 = (longlong)(int)local_160;
          iVar8 = (int)local_160 + 1;
          local_160._4_4_ = (int)((ulonglong)local_160 >> 0x20);
          local_160 = CONCAT44(local_160._4_4_,iVar8);
          if (local_160._4_4_ < iVar8) {
            TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_1a8);
          }
          puVar11 = local_1a8;
          if (local_168 != (undefined1 *)0x0) {
            puVar11 = local_168;
          }
          *(int *)(puVar11 + lVar16 * 4) = iVar12;
        }
        if (plVar2 != plVar1) {
          iVar12 = *(int *)(param_2 + 0x10);
          pvVar7 = (void *)*plVar1;
          *(int *)(param_1 + 0x10) = iVar12;
          if ((iVar12 == 0) && (*(int *)(param_1 + 0x14) == 0)) {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar2,iVar12);
            _guard_xfg_dispatch_icall_nop((void *)*plVar2,pvVar7,(longlong)iVar12 << 3);
          }
        }
        lVar16 = local_1c0;
        local_58 = (undefined4 *)0x0;
        local_50 = *(int *)(local_1c0 + 0x20);
        lVar15 = (longlong)local_50;
        pvVar7 = *(void **)(local_1c0 + 0x18);
        if (local_50 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1415b5390(local_158,local_50,0);
          puVar10 = local_158;
          if (local_58 != (undefined4 *)0x0) {
            puVar10 = local_58;
          }
          _guard_xfg_dispatch_icall_nop(puVar10,pvVar7,lVar15 << 2);
        }
        *(undefined4 *)(lVar16 + 0x20) = 0;
        if (0x7fffffff < *(uint *)(lVar16 + 0x24)) {
          TArray<float,FDefaultAllocator>::ResizeTo(lVar16 + 0x18);
        }
        iVar12 = *(int *)(lVar16 + 0x20);
        lVar15 = (longlong)local_50;
        iVar8 = local_50 + iVar12;
        *(int *)(lVar16 + 0x20) = iVar8;
        if (*(int *)(lVar16 + 0x24) < iVar8) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar16 + 0x18);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar12 * 4),0,lVar15 << 2);
        puVar10 = *(undefined4 **)(lVar16 + 0x18);
        puVar17 = local_158;
        if (local_58 != (undefined4 *)0x0) {
          puVar17 = local_58;
        }
        puVar4 = puVar10 + *(int *)(lVar16 + 0x20);
        if (puVar10 < puVar4) {
          do {
            *puVar10 = *puVar17;
            puVar10 = puVar10 + 1;
            lVar16 = 0;
            if (3 < lVar18) {
              do {
                puVar11 = local_1a8;
                if (local_168 != (undefined1 *)0x0) {
                  puVar11 = local_168;
                }
                *puVar10 = puVar17[(longlong)*(int *)(puVar11 + lVar16 * 4) + 1];
                puVar11 = local_1a8;
                if (local_168 != (undefined1 *)0x0) {
                  puVar11 = local_168;
                }
                puVar10[1] = puVar17[(longlong)*(int *)(puVar11 + lVar16 * 4 + 4) + 1];
                puVar11 = local_1a8;
                if (local_168 != (undefined1 *)0x0) {
                  puVar11 = local_168;
                }
                puVar10[2] = puVar17[(longlong)*(int *)(puVar11 + lVar16 * 4 + 8) + 1];
                puVar11 = local_1a8;
                if (local_168 != (undefined1 *)0x0) {
                  puVar11 = local_168;
                }
                lVar15 = lVar16 * 4;
                lVar16 = lVar16 + 4;
                puVar10[3] = puVar17[(longlong)*(int *)(puVar11 + lVar15 + 0xc) + 1];
                puVar10 = puVar10 + 4;
              } while (lVar16 < lVar18 + -3);
            }
            for (; lVar16 < lVar18; lVar16 = lVar16 + 1) {
              puVar11 = local_1a8;
              if (local_168 != (undefined1 *)0x0) {
                puVar11 = local_168;
              }
              *puVar10 = puVar17[(longlong)*(int *)(puVar11 + lVar16 * 4) + 1];
              puVar10 = puVar10 + 1;
            }
            puVar17 = puVar17 + (iVar5 + 1);
          } while (puVar10 < puVar4);
        }
        if (local_58 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        if (local_168 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return (ulonglong)local_1c8;
}



// FUNCTION 1415a7410 FUN_1415a7410 body=1881 status=ok
// SIG undefined FUN_1415a7410(void)

void FUN_1415a7410(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  int local_f8;
  uint uStack_f4;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  
  puVar12 = (uint *)(param_2 + 0xe);
  lVar16 = 4;
  local_res18 = 4;
  do {
    puVar12[-6] = 0;
    puVar12[-5] = 0;
    uVar17 = puVar12[6];
    local_f8 = 0;
    uStack_f4 = 1;
    uStack_e4 = 0;
    iStack_e0 = 0;
    if (uVar17 != 0) {
      puVar14 = *(uint **)(puVar12 + 4);
      if (*(uint **)(puVar12 + 4) == (uint *)0x0) {
        puVar14 = puVar12;
      }
      uVar2 = *puVar14;
      iStack_e0 = 0;
      local_f8 = 0;
      while (uVar2 == 0) {
        lVar10 = (longlong)local_f8;
        iStack_e0 = iStack_e0 + 0x20;
        iVar7 = local_f8 + 1;
        bVar4 = (int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
        local_f8 = iVar7;
        if (bVar4) goto LAB_1415a7514;
        uVar2 = puVar14[lVar10 + 1];
      }
      uStack_f4 = -uVar2 & uVar2;
      iVar7 = 0x1f;
      if (uStack_f4 != 0) {
        for (; uStack_f4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_f4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_e4 = (iStack_e0 - iVar7) + 0x1f;
      if ((int)uVar17 < (int)uStack_e4) {
LAB_1415a7514:
        uStack_e4 = uVar17;
      }
    }
    uStack_c0 = 0xffffffff;
    uStack_bc = uStack_e4;
    local_b8 = CONCAT44(uStack_dc,iStack_e0);
    puVar14 = puVar12 + -4;
    uStack_a8 = CONCAT44(uStack_f4,local_f8);
    uVar2 = puVar12[6];
    uVar13 = uVar17 & 0xffffffe0;
    iStack_d0 = local_f8;
    uStack_cc = uStack_f4;
    local_c8 = puVar12;
    local_b0 = puVar14;
    puStack_a0 = puVar12;
    uStack_90 = local_b8;
    uStack_98 = uStack_c0;
    uStack_94 = uStack_bc;
    uStack_e4 = uVar17;
    if (uVar17 != uVar2) {
      puVar15 = *(uint **)(puVar12 + 4);
      if (*(uint **)(puVar12 + 4) == (uint *)0x0) {
        puVar15 = puVar12;
      }
      uVar9 = puVar15[(int)uVar17 >> 5] & -1 << ((byte)uVar17 & 0x1f);
      iVar7 = (int)uVar17 >> 5;
      while (uVar9 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1415a75f7;
        uVar9 = puVar15[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_e4 = (uVar13 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_e4) {
LAB_1415a75f7:
        uStack_e4 = uVar2;
      }
    }
    while ((uStack_bc != uStack_e4 || (local_c8 != puVar12))) {
      uStack_c0 = uStack_c0 & ~uStack_cc;
      *(double *)(puVar12 + -6) =
           *(double *)(*(longlong *)puVar14 + 8 + (longlong)(int)uStack_bc * 0x18) +
           *(double *)(puVar12 + -6);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    }
    puVar12 = puVar12 + 0x1e;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  QueryPerformanceCounter(&local_res20);
  *(double *)(param_1 + 0x18) = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
  dVar19 = (double)FUN_1415ab450(param_1,param_2);
  param_2[4] = dVar19;
  param_2[4] = dVar19 - (double)param_2[8];
  dVar19 = (dVar19 - (double)param_2[8]) - (double)param_2[0x17];
  param_2[4] = dVar19;
  param_2[4] = dVar19 - (double)param_2[0x26];
  FUN_1415a5e60(param_2);
  if (DAT_1464a8330 == '\0') {
    fVar22 = *DAT_1468b0d08;
  }
  else {
    fVar22 = 1.0;
  }
  puVar12 = (uint *)(param_1 + 0x2c8);
  do {
    uStack_f4 = 1;
    dVar19 = (double)(1.0 - fVar22);
    local_c8 = puVar12 + -6;
    local_f8 = 0;
    uStack_e4 = 0;
    iStack_e0 = 0;
    dVar21 = (double)fVar22;
    *(double *)(puVar12 + -0x14) =
         dVar21 * *(double *)((longlong)param_2 + (-0x290 - param_1) + (longlong)puVar12) +
         dVar19 * *(double *)(puVar12 + -0x14);
    *(double *)(puVar12 + -0x12) =
         dVar21 * *(double *)((longlong)param_2 + (-0x288 - param_1) + (longlong)puVar12) +
         dVar19 * *(double *)(puVar12 + -0x12);
    *(double *)(puVar12 + -0x10) =
         dVar21 * *(double *)((longlong)param_2 + (-0x280 - param_1) + (longlong)puVar12) +
         dVar19 * *(double *)(puVar12 + -0x10);
    *(double *)(puVar12 + -0xc) =
         dVar21 * *(double *)((longlong)param_2 + (-0x270 - param_1) + (longlong)puVar12) +
         dVar19 * *(double *)(puVar12 + -0xc);
    puVar12[-0xe] = *(uint *)((longlong)param_2 + (-0x278 - param_1) + (longlong)puVar12);
    uVar17 = *puVar12;
    if (uVar17 != 0) {
      puVar14 = *(uint **)(puVar12 + -2);
      if (*(uint **)(puVar12 + -2) == (uint *)0x0) {
        puVar14 = local_c8;
      }
      uVar2 = *puVar14;
      while (uVar2 == 0) {
        lVar16 = (longlong)local_f8;
        iStack_e0 = iStack_e0 + 0x20;
        iVar7 = local_f8 + 1;
        bVar4 = (int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
        local_f8 = iVar7;
        if (bVar4) goto LAB_1415a7844;
        uVar2 = puVar14[lVar16 + 1];
      }
      uStack_f4 = -uVar2 & uVar2;
      iVar7 = 0x1f;
      if (uStack_f4 != 0) {
        for (; uStack_f4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_f4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_e4 = (iStack_e0 - iVar7) + 0x1f;
      if ((int)uVar17 < (int)uStack_e4) {
LAB_1415a7844:
        uStack_e4 = uVar17;
      }
    }
    iStack_d0 = local_f8;
    uStack_cc = uStack_f4;
    uStack_c0 = 0xffffffff;
    uStack_bc = uStack_e4;
    local_b8 = CONCAT44(uStack_dc,iStack_e0);
    uVar2 = *puVar12;
    uVar13 = uVar17 & 0xffffffe0;
    if (uVar17 != uVar2) {
      puVar14 = *(uint **)(puVar12 + -2);
      if (*(uint **)(puVar12 + -2) == (uint *)0x0) {
        puVar14 = puVar12 + -6;
      }
      uVar9 = puVar14[(int)uVar17 >> 5] & -1 << ((byte)uVar17 & 0x1f);
      iVar7 = (int)uVar17 >> 5;
      while (uVar9 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1415a790c;
        uVar9 = puVar14[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uVar17 = (uVar13 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uVar17) {
LAB_1415a790c:
        uVar17 = uVar2;
      }
    }
    local_b0 = puVar12 + -10;
    puStack_a0 = local_c8;
    uStack_90 = local_b8;
    uStack_a8._0_4_ = iStack_d0;
    uStack_a8._4_4_ = uStack_cc;
    uStack_98 = uStack_c0;
    uStack_94 = uStack_bc;
    while ((lVar16 = (longlong)(int)uStack_bc, uStack_bc != uVar17 || (local_c8 != puVar12 + -6))) {
      lVar10 = *(longlong *)(puVar12 + -10);
      uVar18 = 0;
      uVar20 = 0;
      if (*(int *)((longlong)param_2 + (-0x260 - param_1) + (longlong)puVar12) !=
          *(int *)((longlong)param_2 + (-0x234 - param_1) + (longlong)puVar12)) {
        lVar11 = *(longlong *)((longlong)param_2 + (-0x228 - param_1) + (longlong)puVar12);
        iVar7 = *(int *)(lVar10 + lVar16 * 0x18);
        if (lVar11 == 0) {
          lVar11 = (longlong)param_2 + (-0x230 - param_1) + (longlong)puVar12;
        }
        iVar5 = *(int *)(lVar11 + ((longlong)
                                   *(int *)((longlong)param_2 + (-0x220 - param_1) +
                                           (longlong)puVar12) - 1U & (longlong)iVar7) * 4);
        if (iVar5 != -1) {
          lVar11 = *(longlong *)((longlong)param_2 + (-0x268 - param_1) + (longlong)puVar12);
          do {
            puVar8 = (undefined8 *)(lVar11 + (longlong)iVar5 * 0x18);
            if (*(int *)(lVar11 + (longlong)iVar5 * 0x18) == iVar7) {
              if (iVar5 != -1) goto LAB_1415a79b3;
              break;
            }
            iVar5 = *(int *)(puVar8 + 2);
          } while (iVar5 != -1);
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_1415a79b3:
      puVar6 = puVar8 + 1;
      if (puVar8 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        uVar18 = (undefined4)*puVar6;
        uVar20 = (undefined4)((ulonglong)*puVar6 >> 0x20);
      }
      uStack_c0 = uStack_c0 & ~uStack_cc;
      *(double *)(lVar10 + 8 + lVar16 * 0x18) =
           dVar21 * (double)CONCAT44(uVar20,uVar18) +
           dVar19 * *(double *)(lVar10 + 8 + lVar16 * 0x18);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    }
    puVar12 = puVar12 + 0x1e;
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      dVar21 = (double)(1.0 - fVar22);
      dVar19 = (double)fVar22;
      *(double *)(param_1 + 0x248) =
           dVar19 * (double)param_2[1] + dVar21 * *(double *)(param_1 + 0x248);
      *(double *)(param_1 + 0x250) =
           dVar19 * (double)param_2[2] + dVar21 * *(double *)(param_1 + 0x250);
      *(double *)(param_1 + 600) = dVar19 * (double)param_2[3] + dVar21 * *(double *)(param_1 + 600)
      ;
      *(double *)(param_1 + 0x260) =
           dVar21 * *(double *)(param_1 + 0x260) + dVar19 * (double)param_2[4];
      FUN_1415a5e60(param_1 + 0x240);
      DAT_1464a8330 = 0;
      plVar1 = (longlong *)(param_1 + 0x460);
      *(undefined1 *)(param_2 + 5) = 1;
      puVar8 = (undefined8 *)*plVar1;
      *(undefined8 *)(param_1 + 0x10) = *param_2;
      iVar7 = *(int *)(param_1 + 0x468);
      uVar3 = *puVar8;
      if (iVar7 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(puVar8,puVar8 + 1,(longlong)(iVar7 + -1) << 3);
        iVar7 = *(int *)(param_1 + 0x468);
      }
      *(int *)(param_1 + 0x468) = iVar7;
      if (*(int *)(param_1 + 0x46c) < iVar7) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(undefined8 *)(*plVar1 + -8 + (longlong)iVar7 * 8) = uVar3;
      FUN_1415a4ef0(uVar3,param_2);
      FUN_1415b3670(param_1 + 0x5b0,*param_2);
      FUN_1415a4ef0(param_1 + 0x20,param_2);
      TBaseMulticastDelegate<void>::Broadcast(&DAT_1464a84c8);
      return;
    }
  } while( true );
}



// FUNCTION 1415a7b70 FUN_1415a7b70 body=175 status=ok
// SIG undefined FUN_1415a7b70(void)

longlong FUN_1415a7b70(longlong param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = FUN_1415a8c60();
  plVar4 = *(longlong **)(lVar3 + 0x18);
  plVar5 = plVar4 + (longlong)*(int *)(lVar3 + 0x20) * 2;
  while( true ) {
    if (plVar4 == plVar5) {
      return 0;
    }
    plVar2 = (longlong *)*plVar4;
    if (param_1 == *(longlong *)(*plVar2 + 0x28)) break;
    plVar4 = plVar4 + 2;
  }
  iVar1 = (int)plVar4[1];
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 < 0x80000000) && (plVar4 = plVar2, plVar2 != plVar2 + iVar1)) {
    do {
      if (*(int *)(*plVar4 + 0x30) <= (int)param_2) {
        return *plVar4;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + iVar1);
    return plVar2[(longlong)iVar1 + -1];
  }
  return plVar2[(longlong)iVar1 + -1];
}



// FUNCTION 1415a7c20 FindFiles body=95 status=ok
// SIG undefined FindFiles(void)

void IPlatformFile::FindFiles
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined **local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_38 = &PTR_FUN_144ca07e8;
  if (param_4 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(short *)(param_4 + lVar1 * 2) != 0);
    local_18 = (undefined4)lVar1;
  }
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_4;
  (**(code **)(*param_1 + 0xf0))(param_1,param_3,&local_38);
  return;
}



// FUNCTION 1415a7c80 FUN_1415a7c80 body=95 status=ok
// SIG undefined FUN_1415a7c80(void)

void FUN_1415a7c80(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined **local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_38 = &PTR_FUN_144ca07e8;
  if (param_4 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(short *)(param_4 + lVar1 * 2) != 0);
    local_18 = (undefined4)lVar1;
  }
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_4;
  (**(code **)(*param_1 + 0x128))(param_1,param_3,&local_38);
  return;
}



// FUNCTION 1415a7ce0 FindId body=242 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0xb8;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0xb0 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1415a7de0 FUN_1415a7de0 body=547 status=ok
// SIG undefined FUN_1415a7de0(void)

undefined8 * FUN_1415a7de0(longlong *param_1,short *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  puVar7 = (undefined8 *)*param_1;
  puVar9 = puVar7 + (longlong)(int)param_1[1] * 3;
  for (; puVar7 != puVar9; puVar7 = puVar7 + 3) {
    if (*(int *)(puVar7 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar7;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,param_2);
    if (iVar2 == 0) {
      return puVar7;
    }
  }
  puVar3 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  lVar10 = -1;
  local_2c = 0;
  iVar2 = 0;
  if ((param_2 != (short *)0x0) && (lVar8 = lVar10, iVar2 = 0, *param_2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    iVar6 = (int)lVar8 + 1;
    local_30 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar2 = local_30;
    puVar3 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,param_2,(longlong)iVar6 * 2);
  }
  puVar7 = DAT_1468b0e78;
  puVar11 = DAT_1468b0e78 + (longlong)DAT_1468b0e80 * 2;
  puVar9 = DAT_1468b0e78;
  do {
    if (puVar9 == puVar11) {
LAB_1415a7f03:
      iVar6 = DAT_1468b0e80;
      lVar8 = (longlong)DAT_1468b0e80;
      DAT_1468b0e80 = DAT_1468b0e80 + 1;
      if (DAT_1468b0e84 < DAT_1468b0e80) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468b0e78,iVar6);
      }
      puVar9 = DAT_1468b0e78 + lVar8 * 2;
      *puVar9 = puVar3;
      *(int *)(puVar9 + 1) = iVar2;
      *(undefined4 *)((longlong)puVar9 + 0xc) = local_2c;
LAB_1415a7f45:
      iVar2 = (int)param_1[1];
      lVar8 = (longlong)iVar2;
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar2);
      }
      lVar1 = *param_1;
      *(undefined8 *)(lVar1 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar1 + 8 + lVar8 * 0x18) = 0;
      puVar9 = (undefined8 *)(lVar1 + lVar8 * 0x18);
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar10 = lVar10 + 1;
        } while (param_2[lVar10] != 0);
        iVar2 = (int)lVar10 + 1;
        *(int *)(puVar9 + 1) = iVar2;
        if (0 < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar9,0);
        }
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,param_2,(longlong)iVar2 * 2);
      }
      puVar9[2] = 0;
      return (undefined8 *)(*param_1 + lVar8 * 0x18);
    }
    puVar5 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar5 = puVar3;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar9;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar6 == 0) {
      if ((int)((longlong)puVar9 - (longlong)puVar7 >> 4) != -1) {
        if (puVar3 != (undefined2 *)0x0) {
          FMemory::Free(puVar3);
        }
        goto LAB_1415a7f45;
      }
      goto LAB_1415a7f03;
    }
    puVar9 = puVar9 + 2;
  } while( true );
}



// FUNCTION 1415a8010 FUN_1415a8010 body=148 status=ok
// SIG undefined FUN_1415a8010(void)

undefined8 * FUN_1415a8010(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((DAT_1468b02d8 != 0) && (DAT_1468b0c78 != 0)) && (DAT_1468b0c70 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_1468b0c70 + 0x18))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)0x0;
      if (DAT_1468b0c78 != 0) {
        plVar2 = DAT_1468b0c70;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_18,param_2);
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = local_10;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
      return param_1;
    }
  }
  FString::FString(param_1,param_2);
  return param_1;
}



// FUNCTION 1415a80b0 Free body=237 status=ok
// SIG undefined Free(void)

void FGenericPlatformMallocCrash::Free(longlong param_1,void *param_2)

{
  int *piVar1;
  size_t *psVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x30) != DVar3) {
    FWindowsPlatformProcess::SleepInfinite();
    return;
  }
  if ((*(void **)(param_1 + 0x48) <= param_2) &&
     (uVar4 = FUN_1415aaf40(param_1),
     param_2 < (void *)((ulonglong)uVar4 + *(longlong *)(param_1 + 0x48)))) {
    puVar6 = (undefined8 *)(param_1 + 0x60);
    uVar4 = 0;
    while (piVar1 = (int *)*puVar6, piVar1[4] - 0x10U < *(uint *)((longlong)param_2 + -0x10)) {
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
      if (0xd < uVar4) {
        return;
      }
    }
    uVar5 = 0;
    if (piVar1[0x1006] != 0) {
      while( true ) {
        psVar2 = *(size_t **)(piVar1 + uVar5 * 2 + 6);
        if ((void *)psVar2[1] == param_2) break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if ((uint)piVar1[0x1006] <= uVar4) {
          return;
        }
      }
      ::_guard_xfg_dispatch_icall_nop((void *)psVar2[1],0xcd,*psVar2);
      *psVar2 = 0;
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}



// FUNCTION 1415a81a0 FUN_1415a81a0 body=432 status=ok
// SIG undefined FUN_1415a81a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1415a81a0(void)

{
  int iVar1;
  short *_Src;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *local_18;
  int local_10;
  undefined4 local_c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b14b8) && (_Init_thread_header(&DAT_1468b14b8), DAT_1468b14b8 == -1))
  {
    atexit((_func_5014 *)&LAB_143e75d60);
    _Init_thread_footer(&DAT_1468b14b8);
  }
  if ((DAT_1468b14b0 == 0) || (DAT_1468b14b0 == 1)) {
    _Src = (short *)FUN_1415b0fe0();
    local_18 = (undefined2 *)0x0;
    local_c = 0;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (_Src[lVar4] != 0);
      iVar3 = (int)lVar4 + 1;
      local_10 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      iVar1 = local_10;
      puVar2 = local_18;
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar3 * 2);
      if ((iVar1 != 0) && (0 < iVar1 + -1)) {
        local_18 = (undefined2 *)0x0;
        local_10 = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar1 + 0x16,0);
        _guard_xfg_dispatch_icall_nop(local_18,puVar2,(longlong)iVar1 * 2);
        FString::PathAppend(&local_18,L"PersistentDownloadDir",0x15);
        if (DAT_1468b14a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        DAT_1468b14a8 = local_18;
        DAT_1468b14b0 = local_10;
        _DAT_1468b14b4 = local_c;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
    }
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_1468b14b0 != 0) {
    puVar2 = DAT_1468b14a8;
  }
  return puVar2;
}



// FUNCTION 1415a8350 FUN_1415a8350 body=1448 status=ok
// SIG undefined FUN_1415a8350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415a8350(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  void *pvVar12;
  char *pcVar13;
  short *_Src;
  int iVar14;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_148 [32];
  undefined2 local_128;
  undefined2 *local_118;
  int local_110;
  int local_108;
  void *local_100;
  int local_f8;
  undefined4 uStack_f4;
  int local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8 [2];
  longlong local_c8;
  int local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108 = FWindowsPlatformStackWalk::GetProcessModuleCount();
  if (local_108 == 0) {
    return;
  }
  local_100 = (void *)0x0;
  uStack_f4 = 0;
  local_f8 = local_108;
  if (0 < local_108) {
    TArray<FStackWalkModuleInfo,FDefaultAllocator>::ResizeGrow(&local_100,0);
  }
  iVar14 = local_f8;
  pvVar4 = local_100;
  local_108 = local_f8;
  FUN_1416ae540(local_100,uStack_f4);
  FWindowsPlatformStackWalk::GetStack(&local_c8,param_1,param_2,param_3);
  local_f0 = 0;
  local_68 = 0xffffffff;
  local_98 = 0;
  local_58 = (undefined1 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_50 = 0;
LAB_1415a841b:
  iVar17 = 0;
  if ((local_f0 < 0) || (local_c0 <= local_f0)) {
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    if (local_c8 != 0) {
      FMemory::Free();
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  }
  lVar7 = (longlong)local_f0;
  local_e8 = 0;
  local_e0 = 0;
  pcVar13 = (char *)(local_c8 + lVar7 * 0xc18);
  if ((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) {
    lVar8 = -1;
    do {
      lVar3 = lVar8 + 1;
      lVar8 = lVar8 + 1;
    } while (pcVar13[lVar3] != '\0');
    uVar16 = (int)lVar8 + 1;
    local_e0 = (ulonglong)uVar16;
    if (0 < (int)uVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    }
    local_128 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_e8,uVar16,pcVar13,uVar16);
  }
  FUN_141671940(&local_118,&local_e8,1);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if ((int)local_90 != local_64) {
    puVar11 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar11 = local_118;
    }
    uVar16 = FUN_140438070(puVar11);
    puVar10 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    iVar1 = *(int *)(puVar10 + (longlong)(int)(local_50 - 1U & uVar16) * 4);
    while (iVar1 != -1) {
      lVar8 = (longlong)iVar1 * 0x20;
      if (*(int *)(lVar8 + 8 + local_98) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(lVar8 + local_98);
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
      if (iVar6 == 0) {
        if (iVar1 != -1) goto LAB_1415a8664;
        break;
      }
      iVar1 = *(int *)(lVar8 + 0x18 + local_98);
    }
  }
  do {
    if ((iVar17 < 0) || (iVar14 <= iVar17)) goto LAB_1415a8664;
    local_f8 = 0;
    uStack_f4 = 0;
    local_100 = (void *)0x0;
    _Src = (short *)((longlong)pvVar4 + (longlong)iVar17 * 0x468 + 0x50);
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar8 = -1;
      do {
        lVar3 = lVar8 + 1;
        lVar8 = lVar8 + 1;
      } while (_Src[lVar3] != 0);
      iVar14 = (int)lVar8 + 1;
      uStack_f4 = 0;
      local_f8 = iVar14;
      if (0 < iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
      }
      _guard_xfg_dispatch_icall_nop(local_100,_Src,(longlong)iVar14 * 2);
    }
    FUN_141671940(local_d8,&local_100,1);
    if (local_100 != (void *)0x0) {
      FMemory::Free();
    }
    puVar11 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar11 = local_118;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
    if (iVar14 == 0) break;
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    iVar17 = iVar17 + 1;
    iVar14 = local_108;
  } while( true );
  FUN_14056a990(&local_98,&local_118,(void *)((longlong)iVar17 * 0x468 + (longlong)pvVar4));
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
LAB_1415a8664:
  pvVar15 = (void *)0x0;
  uVar18 = 0xffffffffffffffff;
  if ((int)local_90 != local_64) {
    puVar11 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar11 = local_118;
    }
    uVar16 = FUN_140438070(puVar11);
    puVar10 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    iVar14 = *(int *)(puVar10 + (longlong)(int)(local_50 - 1U & uVar16) * 4);
    while (iVar14 != -1) {
      lVar8 = (longlong)iVar14 * 0x20;
      if (*(int *)(lVar8 + 8 + local_98) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(lVar8 + local_98);
      }
      iVar17 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
      if (iVar17 == 0) {
        if (iVar14 != -1) {
          pvVar12 = pvVar15;
          if ((int)local_90 == local_64) goto LAB_1415a87aa;
          puVar11 = &DAT_143f3eda8;
          if (local_110 != 0) {
            puVar11 = local_118;
          }
          uVar16 = FUN_140438070(puVar11);
          puVar10 = local_60;
          if (local_58 != (undefined1 *)0x0) {
            puVar10 = local_58;
          }
          iVar14 = *(int *)(puVar10 + (longlong)(int)(local_50 - 1U & uVar16) * 4);
          goto joined_r0x0001415a8759;
        }
        break;
      }
      iVar14 = *(int *)(lVar8 + 0x18 + local_98);
    }
  }
LAB_1415a87ae:
  puVar11 = local_118;
  lVar8 = (longlong)local_110;
  local_b8 = (void *)0x0;
  uVar2 = *(ulonglong *)(lVar7 * 0xc18 + 0xc10 + local_c8);
  local_b0 = local_110;
  lVar7 = -1;
  if (uVar18 < uVar2) {
    lVar7 = uVar2 - uVar18;
  }
  local_ac = 0;
  if (local_110 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_110,0);
    pvVar15 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_b8,puVar11,lVar8 * 2);
  }
  uVar5 = local_ac;
  iVar14 = local_b0;
  lVar8 = (longlong)DAT_1468b10b8;
  DAT_1468b10b8 = DAT_1468b10b8 + 1;
  if (DAT_1468b10bc < DAT_1468b10b8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&DAT_1468b10b0);
  }
  plVar9 = (longlong *)(lVar8 * 0x20 + DAT_1468b10b0);
  *plVar9 = (longlong)pvVar15;
  *(int *)(plVar9 + 1) = iVar14;
  *(undefined4 *)((longlong)plVar9 + 0xc) = uVar5;
  plVar9[2] = uVar18;
  plVar9[3] = lVar7;
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_f0 = local_f0 + 1;
  iVar14 = local_108;
  goto LAB_1415a841b;
joined_r0x0001415a8759:
  if (iVar14 == -1) goto LAB_1415a87aa;
  lVar8 = (longlong)iVar14 * 0x20;
  if (*(int *)(lVar8 + 8 + local_98) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = *(undefined2 **)(lVar8 + local_98);
  }
  iVar17 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
  if (iVar17 == 0) {
    if (iVar14 != -1) {
      pvVar12 = (void *)(local_98 + lVar8);
    }
    goto LAB_1415a87aa;
  }
  iVar14 = *(int *)(lVar8 + 0x18 + local_98);
  goto joined_r0x0001415a8759;
LAB_1415a87aa:
  uVar18 = *(ulonglong *)((longlong)pvVar12 + 0x10);
  goto LAB_1415a87ae;
}



// FUNCTION 1415a8900 GenericPlatformMisc_GetProjectFilePathProjectDir body=449 status=ok
// SIG undefined GenericPlatformMisc_GetProjectFilePathProjectDir(void)

void GenericPlatformMisc_GetProjectFilePathProjectDir
               (undefined2 **param_1,undefined8 param_2,LPBYTE param_3,int param_4)

{
  int iVar1;
  char cVar2;
  LPPOINT apt;
  undefined2 **ppuVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  apt = (LPPOINT)FUN_141672e70(local_18);
  FPaths::GetPath((HDC)&local_28,apt,param_3,param_4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FPaths::NormalizeFilename(&local_28);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  ppuVar3 = (undefined2 **)FUN_1415c0f30(local_18,puVar4);
  if (&local_28 != ppuVar3) {
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_28 = *ppuVar3;
    *ppuVar3 = (undefined2 *)0x0;
    local_20 = *(int *)(ppuVar3 + 1);
    local_1c = *(int *)((longlong)ppuVar3 + 0xc);
    ppuVar3[1] = (undefined2 *)0x0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],2,&DAT_144c97cfc,2,0x3f);
  cVar2 = FString::EndsWith(&local_28,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  iVar1 = local_20;
  if (cVar2 == '\0') {
    lVar5 = (longlong)local_20;
    local_20 = (2 - (uint)(local_20 != 0)) + local_20;
    if (local_1c < local_20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar1);
    }
    local_28[lVar5 - (ulonglong)(iVar1 != 0)] = 0x2f;
    (local_28 + (lVar5 - (ulonglong)(iVar1 != 0)))[1] = 0;
  }
  puVar4 = local_28;
  if (param_1 != &local_28) {
    lVar5 = (longlong)local_20;
    *(int *)(param_1 + 1) = local_20;
    if ((local_20 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_20);
      _guard_xfg_dispatch_icall_nop(*param_1,puVar4,lVar5 * 2);
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1415a8ad0 FUN_1415a8ad0 body=119 status=ok
// SIG undefined FUN_1415a8ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a8ad0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1f28) {
    _Init_thread_header(&DAT_1468b1f28);
    if (DAT_1468b1f28 == -1) {
      _DAT_1468b1ea0 = 0;
      atexit((_func_5014 *)&DAT_143e761c0);
      _Init_thread_footer(&DAT_1468b1f28);
      return &DAT_1468b1e20;
    }
  }
  return &DAT_1468b1e20;
}



// FUNCTION 1415a8b50 FUN_1415a8b50 body=119 status=ok
// SIG undefined FUN_1415a8b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a8b50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1e18) {
    _Init_thread_header(&DAT_1468b1e18);
    if (DAT_1468b1e18 == -1) {
      _DAT_1468b1d90 = 0;
      atexit((_func_5014 *)&DAT_143e761d0);
      _Init_thread_footer(&DAT_1468b1e18);
      return &DAT_1468b1d10;
    }
  }
  return &DAT_1468b1d10;
}



// FUNCTION 1415a8bd0 FUN_1415a8bd0 body=129 status=ok
// SIG undefined FUN_1415a8bd0(void)

undefined * FUN_1415a8bd0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1430) {
    _Init_thread_header(&DAT_1468b1430);
    if (DAT_1468b1430 == -1) {
      FUN_14159fc20(&DAT_1468b1360,param_1);
      atexit(`FGenericPlatformMallocCrash::Get'::`2'::_dynamic_atexit_destructor_for__CrashMalloc__)
      ;
      _Init_thread_footer(&DAT_1468b1430);
      return &DAT_1468b1360;
    }
  }
  return &DAT_1468b1360;
}



// FUNCTION 1415a8c60 FUN_1415a8c60 body=123 status=ok
// SIG undefined FUN_1415a8c60(void)

undefined8 * FUN_1415a8c60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1320) {
    _Init_thread_header(&DAT_1468b1320);
    if (DAT_1468b1320 == -1) {
      FUN_1415a00f0(&DAT_1468b12e8);
      atexit(FUN_143e76020);
      _Init_thread_footer(&DAT_1468b1320);
      return &DAT_1468b12e8;
    }
  }
  return &DAT_1468b12e8;
}



// FUNCTION 1415a8ce0 GetAbsoluteLogFilename body=926 status=ok
// SIG undefined GetAbsoluteLogFilename(void)

undefined8 * FGenericPlatformOutputDevices::GetAbsoluteLogFilename(undefined8 *param_1)

{
  short sVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  wint_t *pwVar14;
  undefined2 *puVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  undefined8 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  uVar18 = 0;
  lVar17 = -1;
  if (DAT_1468b0310 == 0) {
    puVar7 = (undefined8 *)FPaths::ProjectLogDir(local_38);
    if (*(int *)(puVar7 + 1) == 0) {
      psVar10 = &DAT_143f3eda8;
    }
    else {
      psVar10 = (short *)*puVar7;
    }
    lVar11 = (longlong)&DAT_1468b0310 - (longlong)psVar10;
    do {
      sVar1 = *psVar10;
      *(short *)((longlong)psVar10 + lVar11) = sVar1;
      psVar10 = psVar10 + 1;
    } while (sVar1 != 0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    uVar8 = FCommandLine::Get();
    cVar4 = FParse::Value(uVar8,L"LOG=",&local_58,1);
    if (cVar4 == '\0') {
      uVar8 = FCommandLine::Get();
      cVar4 = FParse::Value(uVar8,L"ABSLOG=",&local_58,1);
      if (cVar4 != '\0') {
        DAT_1468b0310 = 0;
      }
    }
    FUN_141672300(&local_48,&local_58,0);
    pwVar14 = &DAT_144c9d988;
    puVar15 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar15 = local_48;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar15 + -0xa264ecc4) + (longlong)pwVar14);
      lVar11 = lVar17;
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_1415a8e89;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1415a8e16;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
  goto LAB_1415a9029;
LAB_1415a8e69:
  if (wVar5 == wVar6) goto LAB_1415a8e89;
  uVar2 = local_50 >> 0x20;
  local_50 = local_50 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    goto LAB_1415a8e89;
  }
LAB_1415a8ea3:
  do {
    lVar11 = lVar11 + 1;
  } while ((&DAT_146299580)[lVar11] != 0);
  uVar3 = local_50._4_4_;
  if ((int)lVar11 == 0) {
    if (local_58 != &DAT_144c9d998) {
      bVar19 = local_50._4_4_ != 4;
      local_50 = (ulonglong)local_50._4_4_ << 0x20;
      if (bVar19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,4);
        uVar18 = (uint)local_50;
      }
      local_50 = CONCAT44(local_50._4_4_,uVar18 + 4);
      if ((int)local_50._4_4_ < (int)(uVar18 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
      }
      *local_58 = 0x3400450055;
    }
  }
  else if ((short *)local_58 != &DAT_146299580) {
    lVar11 = lVar17;
    uVar13 = uVar18;
    if (DAT_146299580 != 0) {
      do {
        lVar11 = lVar11 + 1;
      } while ((&DAT_146299580)[lVar11] != 0);
      uVar13 = (int)lVar11 + 1;
    }
    local_50 = local_50 & 0xffffffff00000000;
    if (uVar3 != uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,uVar13);
      uVar18 = (uint)local_50;
    }
    local_50 = CONCAT44(local_50._4_4_,uVar18 + uVar13);
    if ((int)local_50._4_4_ < (int)(uVar18 + uVar13)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    if (uVar13 != 0) {
      ::_guard_xfg_dispatch_icall_nop(local_58,&DAT_146299580,(longlong)(int)uVar13 * 2);
    }
  }
  iVar16 = (uint)local_50;
  lVar11 = (longlong)(int)(uint)local_50;
  iVar9 = (5 - (uint)((uint)local_50 != 0)) + (uint)local_50;
  local_50 = CONCAT44(local_50._4_4_,iVar9);
  if ((int)local_50._4_4_ < iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  lVar11 = lVar11 - (ulonglong)(iVar16 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)local_58 + lVar11 * 2),L".log",4);
  *(undefined2 *)((longlong)local_58 + lVar11 * 2 + 8) = 0;
  goto LAB_1415a8fbb;
LAB_1415a8e16:
  if (wVar5 != wVar6) {
    pwVar14 = &DAT_144c9d990;
    puVar15 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar15 = local_48;
    }
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar15 + -0xa264ecc8));
      if ((wVar5 == 0) && (*pwVar14 == 0)) break;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1415a8e69;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1415a8e89:
  if (((uint)local_50 == 0) || ((uint)local_50 == 1)) goto LAB_1415a8ea3;
LAB_1415a8fbb:
  lVar11 = 0x1468b030e;
  puVar7 = (undefined8 *)&DAT_143f3eda8;
  if ((uint)local_50 != 0) {
    puVar7 = local_58;
  }
  do {
    psVar10 = (short *)(lVar11 + 2);
    lVar11 = lVar11 + 2;
  } while (*psVar10 != 0);
  lVar12 = 0;
  do {
    sVar1 = *(short *)((longlong)puVar7 + lVar12 * 2);
    *(short *)(lVar11 + lVar12 * 2) = sVar1;
    lVar12 = lVar12 + 1;
  } while (sVar1 != 0);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
LAB_1415a9029:
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_1468b0310 != 0) {
    do {
      lVar17 = lVar17 + 1;
    } while ((&DAT_1468b0310)[lVar17] != 0);
    iVar16 = (int)lVar17 + 1;
    *(int *)(param_1 + 1) = iVar16;
    if (0 < iVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,&DAT_1468b0310,(longlong)iVar16 * 2);
  }
  return param_1;
}



// FUNCTION 1415a9080 FUN_1415a9080 body=19 status=ok
// SIG undefined FUN_1415a9080(void)

undefined8 FUN_1415a9080(int param_1)

{
  return *(undefined8 *)(&DAT_1464a8850 + (longlong)param_1 * 0x20);
}



// FUNCTION 1415a90b0 FUN_1415a90b0 body=108 status=ok
// SIG undefined FUN_1415a90b0(void)

undefined * FUN_1415a90b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b11d0) {
    _Init_thread_header(&DAT_1468b11d0);
    if (DAT_1468b11d0 == -1) {
      atexit((_func_5014 *)&LAB_143e75530);
      _Init_thread_footer(&DAT_1468b11d0);
      return &DAT_1464a8c50;
    }
  }
  return &DAT_1464a8c50;
}



// FUNCTION 1415a9130 FUN_1415a9130 body=484 status=ok
// SIG undefined FUN_1415a9130(void)

longlong FUN_1415a9130(longlong param_1,short *param_2,short *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x70);
  plVar1 = (longlong *)(param_1 + 0x70);
  plVar2 = plVar9 + *(int *)(param_1 + 0x78);
  do {
    if (plVar9 == plVar2) {
      puVar4 = (undefined4 *)operator_new(0x48);
      puVar10 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        lVar7 = -1;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        if ((param_2 != (short *)0x0) && (lVar8 = lVar7, *param_2 != 0)) {
          do {
            lVar8 = lVar8 + 1;
          } while (param_2[lVar8] != 0);
          iVar3 = (int)lVar8 + 1;
          puVar4[4] = iVar3;
          if (0 < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar4 + 2,0);
          }
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 2),param_2,(longlong)iVar3 * 2);
        }
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
          do {
            lVar7 = lVar7 + 1;
          } while (param_3[lVar7] != 0);
          iVar3 = (int)lVar7 + 1;
          puVar4[8] = iVar3;
          if (0 < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar4 + 6,0);
          }
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 6),param_3,(longlong)iVar3 * 2);
        }
        FString::FString(puVar4 + 10,param_1 + 0x80);
        *(undefined8 *)(puVar4 + 0xe) = 0;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        puVar10 = puVar4;
      }
      iVar3 = *(int *)(param_1 + 0x78);
      *(int *)(param_1 + 0x78) = iVar3 + 1;
      if (*(int *)(param_1 + 0x7c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      *(undefined4 **)((longlong)iVar3 * 8 + *plVar1) = puVar10;
      return *(longlong *)((longlong)iVar3 * 8 + *plVar1);
    }
    lVar7 = *plVar9;
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(lVar7 + 8);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,param_2);
    if (iVar3 == 0) {
      if (*(int *)(lVar7 + 0x20) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(lVar7 + 0x18);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,param_3);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x88) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(param_1 + 0x80);
        }
        if (*(int *)(lVar7 + 0x30) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + 0x28);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar3 == 0) {
          return lVar7;
        }
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 1415a9320 FUN_1415a9320 body=308 status=ok
// SIG undefined FUN_1415a9320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1415a9320(void)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 *local_20;
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b1338) && (_Init_thread_header(&DAT_1468b1338), DAT_1468b1338 == -1))
  {
    atexit((_func_5014 *)&LAB_143e75ac0);
    _Init_thread_footer(&DAT_1468b1338);
  }
  if (DAT_1468b1330 < 2) {
    puVar1 = &DAT_143f3eda8;
    if (DAT_1468b1048 != 0) {
      puVar1 = DAT_1468b1040;
    }
    local_28 = FUN_1415a9460();
    local_18 = PTR_u_CrashReportClient_ini_1464a8350;
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    local_20 = puVar1;
    FPaths::CombineInternal(&local_38,&local_28,3);
    if (DAT_1468b1328 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b1328 = local_38;
    DAT_1468b1330 = (int)local_30;
    _DAT_1468b1334 = local_30._4_4_;
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_1468b1330 != 0) {
    puVar1 = DAT_1468b1328;
  }
  return puVar1;
}



// FUNCTION 1415a9460 FUN_1415a9460 body=305 status=ok
// SIG undefined FUN_1415a9460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1415a9460(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b1350) {
    _Init_thread_header(&DAT_1468b1350);
    if (DAT_1468b1350 == -1) {
      atexit((_func_5014 *)&LAB_143e75ae0);
      _Init_thread_footer(&DAT_1468b1350);
    }
  }
  if (DAT_1468b1348 < 2) {
    puVar1 = (undefined8 *)FPaths::GeneratedConfigDir(local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      local_28 = &DAT_143f3eda8;
    }
    else {
      local_28 = (undefined2 *)*puVar1;
    }
    local_38 = (undefined2 *)0x0;
    local_20 = L"CrashReportClient";
    local_30 = 0;
    FPaths::CombineInternal(&local_38,&local_28,2);
    if (DAT_1468b1340 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1468b1348 = (int)local_30;
    DAT_1468b1340 = local_38;
    _DAT_1468b134c = local_30._4_4_;
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_1468b1348 != 0) {
    puVar2 = DAT_1468b1340;
  }
  return puVar2;
}



// FUNCTION 1415a95a0 FUN_1415a95a0 body=112 status=ok
// SIG undefined FUN_1415a95a0(void)

undefined8 * FUN_1415a95a0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = 0;
  uVar1 = DAT_1468b0f48;
  _Src = DAT_1468b0f40;
  iVar2 = (int)DAT_1468b0f48;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 1415a9610 GetDefaultLocale body=203 status=ok
// SIG undefined GetDefaultLocale(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FGenericPlatformMisc::GetDefaultLocale(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_1c8 [32];
  undefined2 local_1a8;
  undefined1 local_198 [40];
  char *local_170;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  uVar1 = FUN_143a8b650();
  FUN_143a8a610(local_198,uVar1);
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_170 != (char *)0x0) && (*local_170 != '\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (local_170[lVar3] != '\0');
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    local_1a8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(*param_1,iVar2,local_170,iVar2);
  }
  FUN_143a8acf0(local_198);
  return param_1;
}



// FUNCTION 1415a96e0 FUN_1415a96e0 body=8 status=ok
// SIG undefined FUN_1415a96e0(void)

undefined * FUN_1415a96e0(void)

{
  return &DAT_144c990ec;
}



// FUNCTION 1415a9700 GetDeviceId body=23 status=ok
// SIG undefined GetDeviceId(void)

undefined8 FGenericPlatformMisc::GetDeviceId(undefined8 param_1)

{
  GetHashedMacAddressString();
  return param_1;
}



// FUNCTION 1415a9720 FUN_1415a9720 body=123 status=ok
// SIG undefined FUN_1415a9720(void)

undefined * FUN_1415a9720(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b11cc) {
    _Init_thread_header(&DAT_1468b11cc);
    if (DAT_1468b11cc == -1) {
      FUN_1415bb7c0(&DAT_1464a8c08);
      atexit(FUN_143e760a0);
      _Init_thread_footer(&DAT_1468b11cc);
      return &DAT_1464a8c08;
    }
  }
  return &DAT_1464a8c08;
}


