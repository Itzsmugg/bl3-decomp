// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143266240 can_play_anim body=23 status=ok
// SIG undefined can_play_anim(void)

undefined8 fx::actor_state::can_play_anim(longlong param_1,longlong param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x50) >> 8),
                  *(longlong *)(**(longlong **)(param_2 + 0x20) + 0x18) ==
                  *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18));
}



// FUNCTION 143266260 FUN_143266260 body=489 status=ok
// SIG undefined FUN_143266260(void)

void FUN_143266260(longlong param_1,longlong param_2)

{
  float *pfVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar17 = 0;
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar4 = *(longlong *)(param_1 + 0x78);
  lVar5 = *(longlong *)(param_2 + 0x98);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x50) + 0x20);
  uVar12 = (ulonglong)uVar2;
  if (uVar12 != 0) {
    if (7 < uVar12) {
      pauVar13 = (undefined1 (*) [16])(lVar5 + 0x10);
      do {
        auVar25 = pauVar13[-1];
        pfVar11 = (float *)((lVar3 - lVar5) + (longlong)pauVar13);
        uVar17 = uVar17 + 8;
        pfVar1 = (float *)((lVar3 - lVar5) + -0x10 + (longlong)pauVar13);
        fVar22 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar6 = pfVar1[3];
        auVar24 = minps(*(undefined1 (*) [16])((longlong)pauVar13 + (lVar4 - lVar5) + -0x10),auVar25
                       );
        uVar18 = -(uint)(*pfVar1 <= auVar25._0_4_);
        uVar19 = -(uint)(fVar22 <= auVar25._4_4_);
        uVar20 = -(uint)(fVar23 <= auVar25._8_4_);
        uVar21 = -(uint)(fVar6 <= auVar25._12_4_);
        fVar7 = *pfVar11;
        fVar8 = pfVar11[1];
        fVar9 = pfVar11[2];
        fVar10 = pfVar11[3];
        *(uint *)pauVar13[-1] = auVar24._0_4_ & uVar18 | ~uVar18 & (uint)*pfVar1;
        *(uint *)(pauVar13[-1] + 4) = auVar24._4_4_ & uVar19 | ~uVar19 & (uint)fVar22;
        *(uint *)(pauVar13[-1] + 8) = auVar24._8_4_ & uVar20 | ~uVar20 & (uint)fVar23;
        *(uint *)(pauVar13[-1] + 0xc) = auVar24._12_4_ & uVar21 | ~uVar21 & (uint)fVar6;
        auVar25 = *pauVar13;
        uVar18 = -(uint)(fVar7 <= auVar25._0_4_);
        uVar19 = -(uint)(fVar8 <= auVar25._4_4_);
        uVar20 = -(uint)(fVar9 <= auVar25._8_4_);
        uVar21 = -(uint)(fVar10 <= auVar25._12_4_);
        auVar25 = minps(*(undefined1 (*) [16])((longlong)pfVar11 + (lVar4 - lVar3)),auVar25);
        *(uint *)*pauVar13 = auVar25._0_4_ & uVar18 | ~uVar18 & (uint)fVar7;
        *(uint *)(*pauVar13 + 4) = auVar25._4_4_ & uVar19 | ~uVar19 & (uint)fVar8;
        *(uint *)(*pauVar13 + 8) = auVar25._8_4_ & uVar20 | ~uVar20 & (uint)fVar9;
        *(uint *)(*pauVar13 + 0xc) = auVar25._12_4_ & uVar21 | ~uVar21 & (uint)fVar10;
        pauVar13 = pauVar13 + 2;
      } while (uVar17 < ((ulonglong)uVar2 & 0xfffffffffffffff8));
    }
    if (uVar17 < uVar12) {
      if (3 < uVar12 - uVar17) {
        pfVar11 = (float *)(lVar5 + 4 + uVar17 * 4);
        lVar16 = lVar3 - lVar5;
        lVar14 = lVar4 - lVar5;
        lVar15 = ((uVar12 - uVar17) - 4 >> 2) + 1;
        uVar17 = uVar17 + lVar15 * 4;
        do {
          fVar22 = *(float *)(lVar16 + -4 + (longlong)pfVar11);
          fVar23 = pfVar11[-1];
          if ((fVar22 <= fVar23) &&
             (fVar22 = *(float *)(lVar14 + -4 + (longlong)pfVar11), fVar23 <= fVar22)) {
            fVar22 = fVar23;
          }
          fVar23 = *pfVar11;
          pfVar11[-1] = fVar22;
          fVar22 = *(float *)(lVar14 + (longlong)pfVar11 + (lVar3 - lVar4));
          if ((fVar22 <= fVar23) &&
             (fVar22 = *(float *)(lVar14 + (longlong)pfVar11), fVar23 <= fVar22)) {
            fVar22 = fVar23;
          }
          fVar23 = pfVar11[1];
          *pfVar11 = fVar22;
          fVar22 = *(float *)(lVar16 + 4 + (longlong)pfVar11);
          if ((fVar22 <= fVar23) &&
             (fVar22 = *(float *)(lVar14 + 4 + (longlong)pfVar11), fVar23 <= fVar22)) {
            fVar22 = fVar23;
          }
          fVar23 = pfVar11[2];
          pfVar11[1] = fVar22;
          fVar22 = *(float *)(lVar16 + 8 + (longlong)pfVar11);
          if ((fVar22 <= fVar23) &&
             (fVar22 = *(float *)(lVar14 + 8 + (longlong)pfVar11), fVar23 <= fVar22)) {
            fVar22 = fVar23;
          }
          pfVar11[2] = fVar22;
          pfVar11 = pfVar11 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (uVar17 < uVar12) {
        pfVar11 = (float *)(lVar5 + uVar17 * 4);
        lVar14 = uVar12 - uVar17;
        do {
          fVar22 = *pfVar11;
          pfVar1 = (float *)((lVar4 - lVar5) + (longlong)pfVar11);
          fVar23 = *(float *)((longlong)pfVar1 + (lVar3 - lVar4));
          if ((fVar23 <= fVar22) && (fVar23 = *pfVar1, fVar22 <= fVar23)) {
            fVar23 = fVar22;
          }
          *pfVar11 = fVar23;
          pfVar11 = pfVar11 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143266450 FUN_143266450 body=275 status=ok
// SIG undefined FUN_143266450(void)

void FUN_143266450(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20);
  uVar3 = 0;
  uVar5 = uVar3;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      FUN_143266e30(*(longlong *)(param_1 + 0x68) + uVar5,uVar1,param_2,param_4,uVar7);
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 0x60;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x60));
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar6 = *(longlong *)(param_1 + 0x60) * 0x60 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x60) {
    if (lVar4 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar4);
    }
  }
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x68),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x68) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x70),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x70) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x78),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  return;
}



// FUNCTION 143266570 FUN_143266570 body=765 status=ok
// SIG undefined FUN_143266570(void)

void FUN_143266570(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar3 = _Mtx_lock();
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  *(ulonglong *)(param_1 + 0x60) = param_2;
  plVar1 = (longlong *)(param_1 + 0x68);
  lVar4 = (*(code *)*param_3)(param_2 * 0x60,0,param_3[2]);
  if (lVar4 == 0) {
    uVar5 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar5 = std::operator<<<std::char_traits<char>_>
                      (uVar5,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar5,", line ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar7,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *plVar1 = lVar4;
  uVar8 = 0;
  uVar9 = uVar8;
  if (param_2 != 0) {
    do {
      if (uVar9 * 0x60 + *plVar1 != 0) {
        FUN_143266df0();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
  }
  uVar11 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x20);
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      FUN_143266ee0(*plVar1 + uVar10,uVar11,param_3);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 0x60;
    } while (uVar9 < *(ulonglong *)(param_1 + 0x60));
  }
  lVar4 = (*(code *)*param_3)(uVar11 * 4,0,param_3[2]);
  if (lVar4 != 0) {
    *(longlong *)(param_1 + 0x70) = lVar4;
    lVar4 = (*(code *)*param_3)(uVar11 * 4,0,param_3[2]);
    if (lVar4 != 0) {
      *(longlong *)(param_1 + 0x78) = lVar4;
      if (3 < uVar11) {
        uVar9 = uVar8;
        do {
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(*(longlong *)(param_1 + 0x70) + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x30 + uVar9);
          *(undefined4 *)(*(longlong *)(param_1 + 0x78) + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x34 + uVar9);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 4 + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x40 + uVar9);
          *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 4 + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x44 + uVar9);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 8 + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x50 + uVar9);
          *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8 + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x54 + uVar9);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xc + uVar8 * 4) =
               *(undefined4 *)(uVar9 + 0x60 + lVar4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc + uVar8 * 4) =
               *(undefined4 *)(uVar9 + 100 + lVar4);
          uVar8 = uVar8 + 4;
          uVar9 = uVar9 + 0x40;
        } while (uVar8 < uVar11 - 3);
      }
      if (uVar8 < uVar11) {
        lVar4 = uVar8 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(*(longlong *)(param_1 + 0x70) + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x30 + lVar2);
          *(undefined4 *)(*(longlong *)(param_1 + 0x78) + uVar8 * 4) =
               *(undefined4 *)(lVar4 + 0x34 + lVar2);
          uVar8 = uVar8 + 1;
          lVar4 = lVar4 + 0x10;
        } while (uVar8 < uVar11);
      }
      iVar3 = _Mtx_unlock(param_1);
      if (iVar3 != 0) {
        std::_Throw_C_error(iVar3);
      }
      return;
    }
    uVar5 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar5 = std::operator<<<std::char_traits<char>_>
                      (uVar5,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar5,", line ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar7,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = std::operator<<<std::char_traits<char>_>
                    (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
  uVar5 = std::operator<<<std::char_traits<char>_>
                    (uVar5,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar5,", line ");
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,0x15);
  std::operator<<<std::char_traits<char>_>(pbVar7,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 143266870 FUN_143266870 body=127 status=ok
// SIG undefined FUN_143266870(void)

bool FUN_143266870(longlong param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  bVar2 = (*(uint *)(param_1 + 0x80) >> 1 & 1) == 0;
  if (bVar2) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
    *(undefined4 *)(param_1 + 0x84) = param_2;
  }
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return bVar2;
}



// FUNCTION 1432668f0 FUN_1432668f0 body=229 status=ok
// SIG undefined FUN_1432668f0(void)

undefined8 FUN_1432668f0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  if (*param_3 == 0xffffffffffffffff) {
    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x60) != 0) {
      uVar4 = uVar2;
      do {
        if (*(longlong *)(uVar2 + *(longlong *)(param_1 + 0x68)) == 0) {
          FUN_143267300(uVar2 + *(longlong *)(param_1 + 0x68),param_2,
                        *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20),param_4,uVar5);
          *param_3 = uVar4;
          goto LAB_1432669a1;
        }
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 + 0x60;
      } while (uVar4 < *(ulonglong *)(param_1 + 0x60));
    }
  }
  else {
    plVar3 = (longlong *)(*param_3 * 0x60 + *(longlong *)(param_1 + 0x68));
    if (*plVar3 == 0) {
      FUN_143267300(plVar3,param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20),param_4,
                    uVar5);
LAB_1432669a1:
      uVar5 = 1;
      goto LAB_1432669a7;
    }
  }
  uVar5 = 0;
LAB_1432669a7:
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return uVar5;
}



// FUNCTION 1432669e0 FUN_1432669e0 body=135 status=ok
// SIG undefined FUN_1432669e0(void)

void FUN_1432669e0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  cVar1 = FUN_143266a70(param_1,param_2,param_3,param_4,uVar3);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x80) & 1) != 0)) {
    FUN_143266260(param_1,param_3);
  }
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  return;
}



// FUNCTION 143266a70 FUN_143266a70 body=532 status=ok
// SIG undefined FUN_143266a70(void)

byte FUN_143266a70(longlong param_1,undefined4 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) {
    puVar7 = *(undefined4 **)(param_3 + 0x88);
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) {
    puVar8 = *(undefined8 **)(param_3 + 0x90);
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  bVar11 = ~(byte)(*(uint *)(param_1 + 0x80) >> 1) & 1;
  if (bVar11 == 0) {
    uVar5 = 0;
    uVar6 = uVar5;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_3 + 0x88) + uVar6 * 4);
        *puVar1 = *puVar1 | 4;
        if (*(longlong *)(uVar5 + *(longlong *)(param_1 + 0x68)) != 0) {
          *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
          *(undefined8 *)(*(longlong *)(param_3 + 0x90) + uVar6 * 8) =
               *(undefined8 *)(uVar5 + 8 + *(longlong *)(param_1 + 0x68));
          puVar1 = (uint *)(*(longlong *)(param_3 + 0x88) + uVar6 * 4);
          *puVar1 = *puVar1 | 1;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + 0x60;
      } while (uVar6 < *(ulonglong *)(param_1 + 0x60));
    }
  }
  else {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffe;
    puVar7 = *(undefined4 **)(param_3 + 0x98);
    uVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x20);
    uVar6 = uVar5;
    puVar9 = puVar7;
    if (uVar5 != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    uVar10 = 0;
    uVar6 = uVar10;
    uVar12 = uVar10;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      do {
        if (*(longlong *)(uVar12 + *(longlong *)(param_1 + 0x68)) != 0) {
          *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
          *(undefined8 *)(*(longlong *)(param_3 + 0x90) + uVar6 * 8) =
               *(undefined8 *)(uVar12 + 8 + *(longlong *)(param_1 + 0x68));
          uVar3 = FUN_143267620(*(longlong *)(param_1 + 0x68) + uVar12,param_2,uVar5);
          *(undefined4 *)(*(longlong *)(param_3 + 0x88) + uVar6 * 4) = uVar3;
        }
        uVar6 = uVar6 + 1;
        uVar12 = uVar12 + 0x60;
      } while (uVar6 < *(ulonglong *)(param_1 + 0x60));
    }
    if (((*(byte *)(param_1 + 0x80) & 1) != 0) &&
       (uVar6 = uVar10, *(longlong *)(param_1 + 0x60) != 0)) {
      do {
        uVar2 = *(uint *)(*(longlong *)(param_3 + 0x88) + uVar10 * 4);
        if (((uVar2 & 1) != 0) &&
           (FUN_143267510(uVar6 + *(longlong *)(param_1 + 0x68),puVar7,uVar5), (uVar2 & 0x10) != 0))
        {
          FUN_143267300(uVar6 + *(longlong *)(param_1 + 0x68),0,uVar5);
        }
        uVar10 = uVar10 + 1;
        uVar6 = uVar6 + 0x60;
      } while (uVar10 < *(ulonglong *)(param_1 + 0x60));
    }
  }
  *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)(param_1 + 0x80);
  if ((*(uint *)(param_1 + 0x80) & 4) != 0) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffb;
  }
  return bVar11;
}



// FUNCTION 143266c90 FUN_143266c90 body=187 status=ok
// SIG undefined FUN_143266c90(void)

undefined8 FUN_143266c90(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  if ((*(uint *)(param_1 + 0x80) >> 1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x84);
    uVar4 = 0;
    uVar5 = uVar4;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x68) + uVar4);
        if (*plVar3 != 0) {
          FUN_1432672e0(plVar3,param_2 - fVar1,param_3,param_4,uVar6);
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 + 0x60;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x60));
    }
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffd;
    uVar6 = 1;
  }
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  return uVar6;
}



// FUNCTION 143266d50 FUN_143266d50 body=158 status=ok
// SIG undefined FUN_143266d50(void)

void FUN_143266d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x68) + uVar3);
      if (*plVar2 != 0) {
        FUN_143267300(plVar2,0,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20),param_4,uVar5);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x60;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x60));
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffc;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return;
}



// FUNCTION 143266df0 FUN_143266df0 body=58 status=ok
// SIG undefined FUN_143266df0(void)

undefined8 * FUN_143266df0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xcf000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 143266e30 FUN_143266e30 body=175 status=ok
// SIG undefined FUN_143266e30(void)

void FUN_143266e30(longlong param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x18),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x18) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x20) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x28) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x38) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x40),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x40) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x48),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x48) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x50),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 143266ee0 FUN_143266ee0 body=1006 status=ok
// SIG undefined FUN_143266ee0(void)

void FUN_143266ee0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  lVar6 = param_2 * 4;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
  lVar1 = (*(code *)*param_3)(lVar6,0,param_3[2]);
  if (lVar1 == 0) {
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
    uVar2 = std::operator<<<std::char_traits<char>_>
                      (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
    pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(uVar2,", line ");
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
    std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(longlong *)(param_1 + 0x48) = lVar1;
  puVar5 = (undefined4 *)(*(code *)*param_3)(lVar6,0,param_3[2]);
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x50) = puVar5;
    if (param_2 != 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x18);
      for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      if (param_2 != 0) {
        puVar7 = *(undefined4 **)(param_1 + 0x20);
        for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        if (param_2 != 0) {
          puVar7 = *(undefined4 **)(param_1 + 0x28);
          for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          if (param_2 != 0) {
            puVar7 = *(undefined4 **)(param_1 + 0x30);
            for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            if (param_2 != 0) {
              puVar7 = *(undefined4 **)(param_1 + 0x38);
              for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              if (param_2 != 0) {
                puVar7 = *(undefined4 **)(param_1 + 0x40);
                for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
                if (param_2 != 0) {
                  puVar7 = *(undefined4 **)(param_1 + 0x48);
                  for (lVar6 = param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                  if (param_2 != 0) {
                    for (; param_2 != 0; param_2 = param_2 + -1) {
                      *puVar5 = 0;
                      puVar5 = puVar5 + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  uVar2 = std::operator<<<std::char_traits<char>_>
                    (cerr_exref,"FACEFX FATAL ERROR: OUT OF MEMORY (file ");
  uVar2 = std::operator<<<std::char_traits<char>_>
                    (uVar2,"C:\\Users\\jcr\\Code\\facefx-runtime\\facefx/src/memory.hpp");
  pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(uVar2,", line ");
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,0x15);
  std::operator<<<std::char_traits<char>_>(pbVar4,&DAT_145af0b78);
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 1432672e0 FUN_1432672e0 body=26 status=ok
// SIG undefined FUN_1432672e0(void)

void FUN_1432672e0(longlong param_1,float param_2)

{
  if (*(float *)(param_1 + 0x14) != -2.1474836e+09) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + param_2;
  }
  return;
}



// FUNCTION 143267300 FUN_143267300 body=516 status=ok
// SIG undefined FUN_143267300(void)

void FUN_143267300(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  lVar11 = *param_1;
  if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
    LOCK();
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
    UNLOCK();
  }
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + 0x18))) {
    LOCK();
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    UNLOCK();
  }
  pfVar14 = (float *)param_1[4];
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xcf000000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_2 + 0x20);
    param_1[1] = *(longlong *)(*plVar8 + 0x10);
    lVar11 = *plVar8;
    iVar6 = *(int *)(lVar11 + 0x20);
    uVar1 = *(undefined4 *)(lVar11 + 0x24);
    uVar2 = *(undefined4 *)(lVar11 + ((longlong)(iVar6 + -1) + 3) * 0xc);
    uVar15 = 0;
    if (param_3 != 0) {
      lVar11 = param_1[3] - (longlong)pfVar14;
      lVar13 = param_1[5] - (longlong)pfVar14;
      lVar12 = param_1[6] - (longlong)pfVar14;
      lVar18 = param_1[7] - (longlong)pfVar14;
      lVar19 = param_1[8] - (longlong)pfVar14;
      iVar16 = 0;
      lVar17 = param_1[9] - (longlong)pfVar14;
      do {
        if (iVar16 < iVar6) {
          lVar9 = *plVar8;
          lVar10 = (longlong)iVar16 + 3;
          if (*(ushort *)(lVar9 + 10 + lVar10 * 0xc) != uVar15) goto LAB_1432674bc;
          *(undefined4 *)(lVar11 + (longlong)pfVar14) = *(undefined4 *)(lVar9 + lVar10 * 0xc);
          sVar3 = *(short *)(lVar9 + 4 + lVar10 * 0xc);
          sVar4 = *(short *)(lVar9 + 8 + lVar10 * 0xc);
          *(int *)(param_1 + 2) = iVar16 + 1;
          lVar9 = *plVar8;
          lVar10 = (longlong)(iVar16 + 1) + 3;
          iVar16 = iVar16 + 2;
          uVar7 = *(undefined4 *)(lVar9 + lVar10 * 0xc);
          *pfVar14 = (float)(int)sVar3 * 0.00390625;
          *(undefined4 *)(lVar12 + (longlong)pfVar14) = uVar7;
          sVar3 = *(short *)(lVar9 + 4 + lVar10 * 0xc);
          sVar5 = *(short *)(lVar9 + 6 + lVar10 * 0xc);
          *(float *)(lVar13 + (longlong)pfVar14) = (float)(int)sVar4 * 0.00390625;
          sVar4 = *(short *)(lVar9 + 8 + lVar10 * 0xc);
          *(float *)(lVar18 + (longlong)pfVar14) = (float)(int)sVar3 * 0.00390625;
          *(int *)(param_1 + 2) = iVar16;
          *(float *)(lVar19 + (longlong)pfVar14) = (float)(int)sVar5 * 0.00390625;
          *(float *)(lVar17 + (longlong)pfVar14) = (float)(int)sVar4 * 0.00390625;
        }
        else {
LAB_1432674bc:
          *(undefined4 *)(lVar12 + (longlong)pfVar14) = uVar2;
          *(undefined4 *)(lVar11 + (longlong)pfVar14) = uVar1;
          *(undefined4 *)(lVar17 + (longlong)pfVar14) = 0;
          *(undefined4 *)(lVar19 + (longlong)pfVar14) = 0;
          *(undefined4 *)(lVar18 + (longlong)pfVar14) = 0;
          *(undefined4 *)(lVar13 + (longlong)pfVar14) = 0;
          *pfVar14 = 0.0;
        }
        uVar15 = uVar15 + 1;
        pfVar14 = pfVar14 + 1;
      } while (uVar15 < param_3);
    }
  }
  return;
}



// FUNCTION 143267510 FUN_143267510 body=261 status=ok
// SIG undefined FUN_143267510(void)

void FUN_143267510(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar5 = *(longlong *)(param_1 + 0x50);
  uVar12 = 0;
  if (param_3 != 0) {
    if (7 < param_3) {
      pfVar11 = (float *)(param_2 + 0x10);
      do {
        uVar12 = uVar12 + 8;
        pfVar2 = (float *)((lVar5 - param_2) + -0x10 + (longlong)pfVar11);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar6 = pfVar2[3];
        pfVar1 = (float *)((lVar5 - param_2) + (longlong)pfVar11);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar11[-4] = *pfVar2 + pfVar11[-4];
        pfVar11[-3] = fVar3 + pfVar11[-3];
        pfVar11[-2] = fVar4 + pfVar11[-2];
        pfVar11[-1] = fVar6 + pfVar11[-1];
        *pfVar11 = fVar7 + *pfVar11;
        pfVar11[1] = fVar8 + pfVar11[1];
        pfVar11[2] = fVar9 + pfVar11[2];
        pfVar11[3] = fVar10 + pfVar11[3];
        pfVar11 = pfVar11 + 8;
      } while (uVar12 < (param_3 & 0xfffffffffffffff8));
    }
    if (uVar12 < param_3) {
      if (3 < param_3 - uVar12) {
        pfVar11 = (float *)(param_2 + 4 + uVar12 * 4);
        lVar14 = lVar5 - param_2;
        lVar13 = ((param_3 - uVar12) - 4 >> 2) + 1;
        uVar12 = uVar12 + lVar13 * 4;
        do {
          fVar3 = *(float *)((longlong)pfVar11 + lVar14);
          pfVar11[-1] = *(float *)(lVar14 + -4 + (longlong)pfVar11) + pfVar11[-1];
          fVar4 = *(float *)(lVar14 + 4 + (longlong)pfVar11);
          *pfVar11 = fVar3 + *pfVar11;
          fVar3 = *(float *)(lVar14 + 8 + (longlong)pfVar11);
          pfVar11[1] = fVar4 + pfVar11[1];
          pfVar11[2] = fVar3 + pfVar11[2];
          pfVar11 = pfVar11 + 4;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (uVar12 < param_3) {
        pfVar11 = (float *)(param_2 + uVar12 * 4);
        lVar13 = param_3 - uVar12;
        do {
          *pfVar11 = *(float *)((lVar5 - param_2) + (longlong)pfVar11) + *pfVar11;
          pfVar11 = pfVar11 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143267620 FUN_143267620 body=1984 status=ok
// SIG undefined FUN_143267620(void)

uint FUN_143267620(longlong *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  short sVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  void *_Src;
  longlong lVar12;
  longlong lVar13;
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
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float *pfVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  undefined1 auVar39 [16];
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
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar58 [16];
  float fVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar65;
  
  uVar34 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  plVar7 = *(longlong **)(*param_1 + 0x20);
  uVar38 = 3;
  uVar6 = *(uint *)(*plVar7 + 0x20);
  if (*(float *)((longlong)param_1 + 0x14) == -2.1474836e+09) {
    *(float *)((longlong)param_1 + 0x14) = param_2;
  }
  fVar65 = (param_2 - *(float *)((longlong)param_1 + 0x14)) + *(float *)(*plVar7 + 0x24);
  if ((0.0 <= fVar65) && ((char)param_1[0xb] == '\0')) {
    uVar38 = 0xb;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  lVar8 = param_1[3];
  lVar9 = param_1[4];
  lVar10 = param_1[5];
  lVar11 = param_1[6];
  _Src = (void *)param_1[7];
  lVar12 = param_1[8];
  lVar13 = param_1[10];
  uVar36 = uVar34;
  if (param_3 != 0) {
    do {
      pfVar30 = (float *)(lVar11 + uVar36 * 4);
      if (*pfVar30 <= fVar65 && fVar65 != *pfVar30) {
        do {
          lVar26 = param_1[2];
          uVar32 = (ulonglong)(int)lVar26;
          if (uVar6 <= uVar32) {
            _guard_xfg_dispatch_icall_nop((void *)param_1[10],_Src,param_3 << 2);
            *(undefined4 *)(param_1 + 2) = 0xffffffff;
            return uVar38 & 0xfffffffd | 0x10;
          }
          lVar27 = *plVar7;
          uVar35 = (ulonglong)*(ushort *)(lVar27 + 0x2e + uVar32 * 0xc);
          *(undefined4 *)(lVar8 + uVar35 * 4) = *(undefined4 *)(lVar11 + uVar35 * 4);
          *(undefined4 *)(lVar9 + uVar35 * 4) = *(undefined4 *)((longlong)_Src + uVar35 * 4);
          *(undefined4 *)(lVar10 + uVar35 * 4) = *(undefined4 *)(param_1[9] + uVar35 * 4);
          *(undefined4 *)(lVar11 + uVar35 * 4) = *(undefined4 *)(lVar27 + 0x24 + uVar32 * 0xc);
          sVar5 = *(short *)(lVar27 + 0x2a + uVar32 * 0xc);
          lVar28 = param_1[8];
          *(float *)((longlong)_Src + uVar35 * 4) =
               (float)(int)*(short *)(lVar27 + 0x28 + uVar32 * 0xc) * 0.00390625;
          *(float *)(lVar28 + uVar35 * 4) = (float)(int)sVar5 * 0.00390625;
          *(float *)(param_1[9] + uVar35 * 4) =
               (float)(int)*(short *)(lVar27 + 0x2c + uVar32 * 0xc) * 0.00390625;
          *(int *)(param_1 + 2) = (int)lVar26 + 1;
          while( true ) {
            if (param_3 <= uVar36) goto LAB_1432677f3;
            pfVar30 = (float *)(lVar11 + uVar36 * 4);
            if (*pfVar30 <= fVar65 && fVar65 != *pfVar30) break;
            uVar36 = uVar36 + 1;
          }
        } while( true );
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 < param_3);
LAB_1432677f3:
    if (param_3 != 0) {
      if (7 < param_3) {
        pfVar30 = (float *)(lVar11 + 0x10);
        do {
          pfVar1 = (float *)((lVar8 - lVar11) + -0x10 + (longlong)pfVar30);
          uVar34 = uVar34 + 8;
          pfVar2 = (float *)((lVar9 - lVar11) + -0x10 + (longlong)pfVar30);
          fVar55 = *pfVar2;
          fVar62 = pfVar2[1];
          fVar41 = pfVar2[2];
          fVar47 = pfVar2[3];
          pfVar3 = (float *)(((longlong)_Src - lVar11) + -0x10 + (longlong)pfVar30);
          fVar44 = pfVar3[1];
          fVar40 = pfVar3[2];
          fVar45 = pfVar3[3];
          pfVar2 = (float *)((lVar10 - lVar11) + -0x10 + (longlong)pfVar30);
          pfVar4 = (float *)((longlong)pfVar30 + (lVar12 - lVar11) + -0x10);
          fVar46 = pfVar4[1];
          fVar56 = pfVar4[2];
          fVar57 = pfVar4[3];
          auVar39._0_4_ = pfVar30[-4] - *pfVar1;
          auVar39._4_4_ = pfVar30[-3] - pfVar1[1];
          auVar39._8_4_ = pfVar30[-2] - pfVar1[2];
          auVar39._12_4_ = pfVar30[-1] - pfVar1[3];
          auVar60._0_4_ = fVar65 - *pfVar1;
          auVar60._4_4_ = fVar65 - pfVar1[1];
          auVar60._8_4_ = fVar65 - pfVar1[2];
          auVar60._12_4_ = fVar65 - pfVar1[3];
          auVar58 = divps(auVar60,auVar39);
          fVar42 = *pfVar2 * auVar39._0_4_;
          fVar48 = pfVar2[1] * auVar39._4_4_;
          fVar50 = pfVar2[2] * auVar39._8_4_;
          fVar52 = pfVar2[3] * auVar39._12_4_;
          pfVar1 = (float *)((lVar8 - lVar11) + (longlong)pfVar30);
          fVar54 = auVar58._0_4_;
          fVar61 = auVar58._4_4_;
          fVar63 = auVar58._8_4_;
          fVar64 = auVar58._12_4_;
          auVar58._0_4_ = *pfVar30 - *pfVar1;
          auVar58._4_4_ = pfVar30[1] - pfVar1[1];
          auVar58._8_4_ = pfVar30[2] - pfVar1[2];
          auVar58._12_4_ = pfVar30[3] - pfVar1[3];
          pfVar2 = (float *)((longlong)pfVar30 + (lVar12 - lVar11));
          fVar14 = *pfVar2;
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar2 = (float *)(((longlong)_Src - lVar11) + (longlong)pfVar30);
          fVar18 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar2 = (float *)((lVar10 - lVar11) + (longlong)pfVar30);
          fVar43 = *pfVar2 * auVar58._0_4_;
          fVar49 = pfVar2[1] * auVar58._4_4_;
          fVar51 = pfVar2[2] * auVar58._8_4_;
          fVar53 = pfVar2[3] * auVar58._12_4_;
          auVar59._0_4_ = fVar65 - *pfVar1;
          auVar59._4_4_ = fVar65 - pfVar1[1];
          auVar59._8_4_ = fVar65 - pfVar1[2];
          auVar59._12_4_ = fVar65 - pfVar1[3];
          pfVar1 = (float *)((lVar9 - lVar11) + (longlong)pfVar30);
          fVar22 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          auVar60 = divps(auVar59,auVar58);
          pfVar1 = (float *)((lVar13 - lVar11) + -0x10 + (longlong)pfVar30);
          *pfVar1 = ((((fVar55 * 2.0 - *pfVar3 * 2.0) + fVar42 + *pfVar4 * auVar39._0_4_) * fVar54 +
                     (((*pfVar3 * 3.0 - fVar55 * 3.0) - fVar42 * 2.0) - *pfVar4 * auVar39._0_4_)) *
                     fVar54 + fVar42) * fVar54 + fVar55;
          pfVar1[1] = ((((fVar62 * 2.0 - fVar44 * 2.0) + fVar48 + fVar46 * auVar39._4_4_) * fVar61 +
                       (((fVar44 * 3.0 - fVar62 * 3.0) - fVar48 * 2.0) - fVar46 * auVar39._4_4_)) *
                       fVar61 + fVar48) * fVar61 + fVar62;
          pfVar1[2] = ((((fVar41 * 2.0 - fVar40 * 2.0) + fVar50 + fVar56 * auVar39._8_4_) * fVar63 +
                       (((fVar40 * 3.0 - fVar41 * 3.0) - fVar50 * 2.0) - fVar56 * auVar39._8_4_)) *
                       fVar63 + fVar50) * fVar63 + fVar41;
          pfVar1[3] = ((((fVar47 * 2.0 - fVar45 * 2.0) + fVar52 + fVar57 * auVar39._12_4_) * fVar64
                       + (((fVar45 * 3.0 - fVar47 * 3.0) - fVar52 * 2.0) - fVar57 * auVar39._12_4_))
                       * fVar64 + fVar52) * fVar64 + fVar47;
          fVar55 = auVar60._0_4_;
          fVar62 = auVar60._4_4_;
          fVar41 = auVar60._8_4_;
          fVar47 = auVar60._12_4_;
          pfVar1 = (float *)((lVar13 - lVar11) + (longlong)pfVar30);
          *pfVar1 = ((((fVar22 * 2.0 - fVar18 * 2.0) + fVar43 + fVar14 * auVar58._0_4_) * fVar55 +
                     (((fVar18 * 3.0 - fVar22 * 3.0) - fVar43 * 2.0) - fVar14 * auVar58._0_4_)) *
                     fVar55 + fVar43) * fVar55 + fVar22;
          pfVar1[1] = ((((fVar23 * 2.0 - fVar19 * 2.0) + fVar49 + fVar15 * auVar58._4_4_) * fVar62 +
                       (((fVar19 * 3.0 - fVar23 * 3.0) - fVar49 * 2.0) - fVar15 * auVar58._4_4_)) *
                       fVar62 + fVar49) * fVar62 + fVar23;
          pfVar1[2] = ((((fVar24 * 2.0 - fVar20 * 2.0) + fVar51 + fVar16 * auVar58._8_4_) * fVar41 +
                       (((fVar20 * 3.0 - fVar24 * 3.0) - fVar51 * 2.0) - fVar16 * auVar58._8_4_)) *
                       fVar41 + fVar51) * fVar41 + fVar24;
          pfVar1[3] = ((((fVar25 * 2.0 - fVar21 * 2.0) + fVar53 + fVar17 * auVar58._12_4_) * fVar47
                       + (((fVar21 * 3.0 - fVar25 * 3.0) - fVar53 * 2.0) - fVar17 * auVar58._12_4_))
                       * fVar47 + fVar53) * fVar47 + fVar25;
          pfVar30 = pfVar30 + 8;
        } while (uVar34 < (param_3 & 0xfffffffffffffff8));
      }
      if (uVar34 < param_3) {
        if (3 < param_3 - uVar34) {
          pfVar30 = (float *)(lVar11 + 4 + uVar34 * 4);
          lVar26 = lVar10 - lVar11;
          lVar37 = lVar8 - lVar11;
          lVar31 = lVar9 - lVar11;
          lVar33 = (longlong)_Src - lVar11;
          lVar27 = lVar12 - lVar11;
          lVar28 = lVar13 - lVar11;
          lVar29 = ((param_3 - uVar34) - 4 >> 2) + 1;
          uVar34 = uVar34 + lVar29 * 4;
          do {
            fVar55 = *(float *)(lVar31 + -4 + (longlong)pfVar30);
            fVar62 = *(float *)((longlong)pfVar30 + lVar33 + -4);
            fVar44 = pfVar30[-1] - *(float *)(lVar37 + -4 + (longlong)pfVar30);
            fVar56 = (fVar65 - *(float *)(lVar37 + -4 + (longlong)pfVar30)) / fVar44;
            fVar45 = fVar44 * *(float *)(lVar27 + -4 + (longlong)pfVar30);
            fVar44 = fVar44 * *(float *)(lVar26 + -4 + (longlong)pfVar30);
            fVar46 = *pfVar30 - *(float *)(lVar37 + (longlong)pfVar30);
            fVar41 = *(float *)((longlong)pfVar30 + lVar33);
            fVar40 = fVar46 * *(float *)(lVar26 + (longlong)pfVar30);
            fVar47 = *(float *)(lVar31 + (longlong)pfVar30);
            fVar57 = (fVar65 - *(float *)(lVar37 + (longlong)pfVar30)) / fVar46;
            fVar46 = fVar46 * *(float *)(lVar27 + (longlong)pfVar30);
            *(float *)(lVar28 + -4 + (longlong)pfVar30) =
                 (((((fVar55 + fVar55) - (fVar62 + fVar62)) + fVar44 + fVar45) * fVar56 +
                  (((fVar62 * 3.0 - fVar55 * 3.0) - (fVar44 + fVar44)) - fVar45)) * fVar56 + fVar44)
                 * fVar56 + fVar55;
            fVar45 = pfVar30[1] - *(float *)(lVar37 + 4 + (longlong)pfVar30);
            fVar55 = *(float *)((longlong)pfVar30 + lVar33 + 4);
            fVar44 = fVar45 * *(float *)(lVar26 + 4 + (longlong)pfVar30);
            fVar62 = *(float *)(lVar31 + 4 + (longlong)pfVar30);
            fVar56 = (fVar65 - *(float *)(lVar37 + 4 + (longlong)pfVar30)) / fVar45;
            fVar45 = fVar45 * *(float *)(lVar27 + 4 + (longlong)pfVar30);
            *(float *)(lVar28 + (longlong)pfVar30) =
                 (((((fVar47 + fVar47) - (fVar41 + fVar41)) + fVar40 + fVar46) * fVar57 +
                  (((fVar41 * 3.0 - fVar47 * 3.0) - (fVar40 + fVar40)) - fVar46)) * fVar57 + fVar40)
                 * fVar57 + fVar47;
            fVar46 = pfVar30[2] - *(float *)(lVar37 + 8 + (longlong)pfVar30);
            fVar41 = *(float *)((longlong)pfVar30 + lVar33 + 8);
            fVar40 = fVar46 * *(float *)(lVar26 + 8 + (longlong)pfVar30);
            fVar47 = *(float *)(lVar31 + 8 + (longlong)pfVar30);
            fVar57 = (fVar65 - *(float *)(lVar37 + 8 + (longlong)pfVar30)) / fVar46;
            fVar46 = fVar46 * *(float *)(lVar27 + 8 + (longlong)pfVar30);
            *(float *)(lVar28 + 4 + (longlong)pfVar30) =
                 (((((fVar62 + fVar62) - (fVar55 + fVar55)) + fVar44 + fVar45) * fVar56 +
                  (((fVar55 * 3.0 - fVar62 * 3.0) - (fVar44 + fVar44)) - fVar45)) * fVar56 + fVar44)
                 * fVar56 + fVar62;
            *(float *)(lVar28 + 8 + (longlong)pfVar30) =
                 (((((fVar47 + fVar47) - (fVar41 + fVar41)) + fVar40 + fVar46) * fVar57 +
                  (((fVar41 * 3.0 - fVar47 * 3.0) - (fVar40 + fVar40)) - fVar46)) * fVar57 + fVar40)
                 * fVar57 + fVar47;
            pfVar30 = pfVar30 + 4;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
        }
        if (uVar34 < param_3) {
          pfVar30 = (float *)(lVar11 + uVar34 * 4);
          lVar26 = param_3 - uVar34;
          do {
            fVar55 = *(float *)((lVar9 - lVar11) + (longlong)pfVar30);
            fVar62 = *(float *)(((longlong)_Src - lVar11) + (longlong)pfVar30);
            fVar47 = *pfVar30 - *(float *)((lVar8 - lVar11) + (longlong)pfVar30);
            fVar41 = fVar47 * *(float *)((longlong)pfVar30 + (lVar10 - lVar11));
            fVar44 = (fVar65 - *(float *)((lVar8 - lVar11) + (longlong)pfVar30)) / fVar47;
            fVar47 = fVar47 * *(float *)((lVar12 - lVar11) + (longlong)pfVar30);
            *(float *)((lVar13 - lVar11) + (longlong)pfVar30) =
                 (((((fVar55 + fVar55) - (fVar62 + fVar62)) + fVar41 + fVar47) * fVar44 +
                  (((fVar62 * 3.0 - fVar55 * 3.0) - (fVar41 + fVar41)) - fVar47)) * fVar44 + fVar41)
                 * fVar44 + fVar55;
            pfVar30 = pfVar30 + 1;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
      }
    }
  }
  return uVar38;
}



// FUNCTION 143267de0 DelayLoad_PxConstructSolverBodies body=12 status=ok
// SIG undefined DelayLoad_PxConstructSolverBodies(void)

void DelayLoad_PxConstructSolverBodies(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267dec FUN_143267dec body=121 status=ok
// SIG undefined FUN_143267dec(void)

void FUN_143267dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de068);
                    /* WARNING: Could not recover jumptable at 0x000143267e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143267e65 DelayLoad_PxConstructStaticSolverBody body=12 status=ok
// SIG undefined DelayLoad_PxConstructStaticSolverBody(void)

void DelayLoad_PxConstructStaticSolverBody(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267e71 DelayLoad_PxBatchConstraints body=12 status=ok
// SIG undefined DelayLoad_PxBatchConstraints(void)

void DelayLoad_PxBatchConstraints(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267e7d DelayLoad_PxCreateContactConstraints body=12 status=ok
// SIG undefined DelayLoad_PxCreateContactConstraints(void)

void DelayLoad_PxCreateContactConstraints(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267e89 DelayLoad_PxCreateJointConstraints body=12 status=ok
// SIG undefined DelayLoad_PxCreateJointConstraints(void)

void DelayLoad_PxCreateJointConstraints(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267e95 DelayLoad_PxSolveConstraints body=12 status=ok
// SIG undefined DelayLoad_PxSolveConstraints(void)

void DelayLoad_PxSolveConstraints(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267ea1 DelayLoad_PxIntegrateSolverBodies body=12 status=ok
// SIG undefined DelayLoad_PxIntegrateSolverBodies(void)

void DelayLoad_PxIntegrateSolverBodies(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267ead DelayLoad_PxGenerateContacts body=12 status=ok
// SIG undefined DelayLoad_PxGenerateContacts(void)

void DelayLoad_PxGenerateContacts(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267eb9 DelayLoad_PxRegisterArticulations body=12 status=ok
// SIG undefined DelayLoad_PxRegisterArticulations(void)

void DelayLoad_PxRegisterArticulations(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267ec5 DelayLoad_PxRegisterHeightFields body=12 status=ok
// SIG undefined DelayLoad_PxRegisterHeightFields(void)

void DelayLoad_PxRegisterHeightFields(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267ed1 DelayLoad_PxRegisterLegacyHeightFields body=12 status=ok
// SIG undefined DelayLoad_PxRegisterLegacyHeightFields(void)

void DelayLoad_PxRegisterLegacyHeightFields(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267edd DelayLoad_PxRegisterCloth body=12 status=ok
// SIG undefined DelayLoad_PxRegisterCloth(void)

void DelayLoad_PxRegisterCloth(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267ee9 DelayLoad_PxRegisterParticles body=12 status=ok
// SIG undefined DelayLoad_PxRegisterParticles(void)

void DelayLoad_PxRegisterParticles(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267ef5 DelayLoad_PxCreateBasePhysics body=12 status=ok
// SIG undefined DelayLoad_PxCreateBasePhysics(void)

void DelayLoad_PxCreateBasePhysics(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143267f10 updateMassAndInertia body=39 status=ok
// SIG undefined updateMassAndInertia(void)

void physx::PxRigidBodyExt::updateMassAndInertia
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5)

{
  ::updateMassAndInertia(1,param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143267f40 updateMassAndInertia body=46 status=ok
// SIG undefined updateMassAndInertia(void)

void physx::PxRigidBodyExt::updateMassAndInertia
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  ::updateMassAndInertia(0,param_1,local_res10,1,param_3,param_4);
  return;
}



// FUNCTION 143267f80 setMassAndUpdateInertia body=39 status=ok
// SIG undefined setMassAndUpdateInertia(void)

void physx::PxRigidBodyExt::setMassAndUpdateInertia
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5)

{
  ::setMassAndUpdateInertia(1,param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143267fb0 setMassAndUpdateInertia body=46 status=ok
// SIG undefined setMassAndUpdateInertia(void)

void physx::PxRigidBodyExt::setMassAndUpdateInertia
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  ::setMassAndUpdateInertia(0,param_1,local_res10,1,param_3,param_4);
  return;
}



// FUNCTION 143267ff0 computeMassPropertiesFromShapes body=640 status=ok
// SIG undefined computeMassPropertiesFromShapes(void)

undefined8
physx::PxRigidBodyExt::computeMassPropertiesFromShapes
          (undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  PxAllocatorCallback *pPVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  undefined1 local_590 [56];
  undefined1 local_558 [448];
  undefined1 local_398;
  undefined1 *local_390;
  uint local_388;
  uint local_384;
  undefined1 local_378 [832];
  undefined1 local_38;
  undefined1 *local_30;
  uint local_28;
  uint local_24;
  
  local_30 = local_378;
  uVar9 = (ulonglong)param_3;
  local_28 = 0;
  local_38 = 1;
  local_24 = 0x10;
  if (0x10 < param_3) {
    shdfnd::
    Array<physx::PxMassProperties,physx::shdfnd::InlineAllocator<832,physx::shdfnd::ReflectionAllocator<physx::PxMassProperties>_>_>
    ::recreate(local_378,uVar9);
  }
  local_388 = 0;
  local_390 = local_558;
  local_398 = 1;
  local_384 = 0x10;
  if (0x10 < param_3) {
    shdfnd::
    Array<physx::PxTransform,physx::shdfnd::InlineAllocator<448,physx::shdfnd::ReflectionAllocator<physx::PxTransform>_>_>
    ::recreate(local_558,uVar9);
  }
  uVar8 = uVar9;
  if (param_3 != 0) {
    do {
      plVar1 = (longlong *)*param_2;
      uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,local_590);
      FUN_14326b0b0(&local_5c8,uVar3);
      if (local_28 < (local_24 & 0x7fffffff)) {
        puVar7 = (undefined8 *)(local_30 + (ulonglong)local_28 * 0x34);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = local_5c8;
          puVar7[1] = uStack_5c0;
          puVar7[2] = local_5b8;
          puVar7[3] = uStack_5b0;
          puVar7[4] = local_5a8;
          puVar7[5] = uStack_5a0;
          *(undefined4 *)(puVar7 + 6) = local_598;
        }
        local_28 = local_28 + 1;
      }
      else {
        shdfnd::
        Array<physx::PxMassProperties,physx::shdfnd::InlineAllocator<832,physx::shdfnd::ReflectionAllocator<physx::PxMassProperties>_>_>
        ::growAndPushBack(local_378,&local_5c8);
      }
      puVar4 = (undefined4 *)(**(code **)(*plVar1 + 0x90))(plVar1,local_590);
      if (local_388 < (local_384 & 0x7fffffff)) {
        puVar6 = (undefined4 *)(local_390 + (ulonglong)local_388 * 0x1c);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
          puVar6[2] = puVar4[2];
          puVar6[3] = puVar4[3];
          puVar6[4] = puVar4[4];
          puVar6[5] = puVar4[5];
          puVar6[6] = puVar4[6];
        }
        local_388 = local_388 + 1;
      }
      else {
        shdfnd::
        Array<physx::PxTransform,physx::shdfnd::InlineAllocator<448,physx::shdfnd::ReflectionAllocator<physx::PxTransform>_>_>
        ::growAndPushBack(local_558,puVar4);
      }
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  PxMassProperties::sum(param_1,local_30,local_390,uVar9);
  puVar2 = local_390;
  if (((local_384 & 0x7fffffff) != 0) && (-1 < (int)local_384)) {
    if (local_390 == local_558) {
      local_398 = 0;
    }
    else if (local_390 != (undefined1 *)0x0) {
      pPVar5 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,puVar2);
    }
  }
  puVar2 = local_30;
  if (((((local_24 & 0x7fffffff) != 0) && (-1 < (int)local_24)) && (local_30 != local_378)) &&
     (local_30 != (undefined1 *)0x0)) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,puVar2);
  }
  return param_1;
}



// FUNCTION 143268280 addForceAtPos body=14 status=ok
// SIG undefined addForceAtPos(void)

void physx::PxRigidBodyExt::addForceAtPos(void)

{
  addForceAtPosInternal();
  return;
}



// FUNCTION 1432682a0 addForceAtLocalPos body=450 status=ok
// SIG undefined addForceAtLocalPos(void)

void physx::PxRigidBodyExt::addForceAtLocalPos
               (longlong *param_1,undefined8 param_2,float *param_3,undefined4 param_4,
               undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [144];
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0xa0))(param_1,local_98);
  fVar10 = *param_3 + *param_3;
  fVar7 = param_3[1] + param_3[1];
  fVar1 = pfVar5[3];
  fVar9 = param_3[2] + param_3[2];
  fVar2 = pfVar5[1];
  fVar3 = *pfVar5;
  fVar4 = pfVar5[2];
  fVar8 = fVar1 * fVar1 - 0.5;
  fVar6 = fVar3 * fVar10 + fVar2 * fVar7 + fVar4 * fVar9;
  local_a8 = (fVar2 * fVar9 - fVar4 * fVar7) * fVar1 + fVar8 * fVar10 + fVar3 * fVar6 + pfVar5[4];
  local_a0 = (fVar3 * fVar7 - fVar2 * fVar10) * fVar1 + fVar8 * fVar9 + fVar4 * fVar6 + pfVar5[6];
  local_a4 = (fVar4 * fVar10 - fVar3 * fVar9) * fVar1 + fVar8 * fVar7 + fVar2 * fVar6 + pfVar5[5];
  addForceAtPosInternal(param_1,param_2,&local_a8,param_4,param_5);
  return;
}



// FUNCTION 143268470 addLocalForceAtPos body=434 status=ok
// SIG undefined addLocalForceAtPos(void)

void physx::PxRigidBodyExt::addLocalForceAtPos
               (longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4,
               undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [144];
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0xa0))(param_1,local_98);
  fVar10 = *param_2 + *param_2;
  fVar9 = param_2[1] + param_2[1];
  fVar1 = pfVar5[3];
  fVar7 = param_2[2] + param_2[2];
  fVar2 = pfVar5[1];
  fVar3 = *pfVar5;
  fVar4 = pfVar5[2];
  fVar8 = fVar1 * fVar1 - 0.5;
  fVar6 = fVar3 * fVar10 + fVar2 * fVar9 + fVar4 * fVar7;
  local_a0 = (fVar3 * fVar9 - fVar2 * fVar10) * fVar1 + fVar8 * fVar7 + fVar4 * fVar6;
  local_a4 = (fVar4 * fVar10 - fVar3 * fVar7) * fVar1 + fVar8 * fVar9 + fVar2 * fVar6;
  local_a8 = (fVar2 * fVar7 - fVar4 * fVar9) * fVar1 + fVar8 * fVar10 + fVar3 * fVar6;
  addForceAtPosInternal(param_1,&local_a8,param_3,param_4,param_5);
  return;
}



// FUNCTION 143268630 addLocalForceAtLocalPos body=708 status=ok
// SIG undefined addLocalForceAtLocalPos(void)

void physx::PxRigidBodyExt::addLocalForceAtLocalPos
               (longlong *param_1,float *param_2,float *param_3,undefined4 param_4,
               undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  
  (**(code **)(*param_1 + 0xa0))(param_1,&local_a8);
  fVar4 = *param_3 + *param_3;
  fVar2 = param_3[1] + param_3[1];
  fVar3 = param_3[2] + param_3[2];
  fVar5 = local_9c * local_9c - 0.5;
  fVar1 = local_a4 * fVar2 + local_a8 * fVar4 + local_a0 * fVar3;
  local_c8 = local_98 +
             (local_a4 * fVar3 - local_a0 * fVar2) * local_9c + fVar5 * fVar4 + local_a8 * fVar1;
  local_c4 = local_94 +
             (local_a0 * fVar4 - local_a8 * fVar3) * local_9c + fVar5 * fVar2 + local_a4 * fVar1;
  local_c0 = local_90 +
             (local_a8 * fVar2 - local_a4 * fVar4) * local_9c + fVar5 * fVar3 + local_a0 * fVar1;
  fVar4 = *param_2 + *param_2;
  fVar1 = param_2[1] + param_2[1];
  fVar3 = param_2[2] + param_2[2];
  fVar2 = local_a4 * fVar1 + local_a8 * fVar4 + local_a0 * fVar3;
  local_b8 = (local_a4 * fVar3 - local_a0 * fVar1) * local_9c + fVar5 * fVar4 + local_a8 * fVar2;
  local_b4 = (local_a0 * fVar4 - local_a8 * fVar3) * local_9c + fVar5 * fVar1 + local_a4 * fVar2;
  local_b0 = (local_a8 * fVar1 - local_a4 * fVar4) * local_9c + fVar5 * fVar3 + local_a0 * fVar2;
  addForceAtPosInternal(param_1,&local_b8,&local_c8,param_4,param_5);
  return;
}



// FUNCTION 143268900 getVelocityAtPos body=491 status=ok
// SIG undefined getVelocityAtPos(void)

undefined8
physx::PxRigidBodyExt::getVelocityAtPos(undefined8 param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [32];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  (**(code **)(*param_2 + 0xa0))(param_2,&local_98);
  lVar1 = (**(code **)(*param_2 + 0xf0))(param_2,local_b8);
  fVar6 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar3 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar5 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar4 = local_8c * local_8c - 0.5;
  fVar2 = local_94 * fVar3 + local_98 * fVar6 + local_90 * fVar5;
  local_c8 = *param_3 -
             (local_88 +
             (local_94 * fVar5 - local_90 * fVar3) * local_8c + fVar4 * fVar6 + local_98 * fVar2);
  local_c4 = param_3[1] -
             (local_84 +
             (local_90 * fVar6 - local_98 * fVar5) * local_8c + fVar4 * fVar3 + local_94 * fVar2);
  local_c0 = param_3[2] -
             (local_80 +
             (local_98 * fVar3 - local_94 * fVar6) * local_8c + fVar4 * fVar5 + local_90 * fVar2);
  getVelocityAtPosInternal(param_1,param_2,&local_c8);
  return param_1;
}



// FUNCTION 143268b00 getLocalVelocityAtLocalPos body=794 status=ok
// SIG undefined getLocalVelocityAtLocalPos(void)

undefined8
physx::PxRigidBodyExt::getLocalVelocityAtLocalPos
          (undefined8 param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  
  (**(code **)(*param_2 + 0xa0))(param_2,&local_c8);
  lVar1 = (**(code **)(*param_2 + 0xf0))(param_2,local_e8);
  fVar9 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar5 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar7 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar10 = local_bc * local_bc - 0.5;
  fVar3 = local_c4 * fVar5 + local_c8 * fVar9 + local_c0 * fVar7;
  fVar2 = param_3[1] + param_3[1];
  fVar8 = *param_3 + *param_3;
  fVar6 = param_3[2] + param_3[2];
  fVar4 = local_c4 * fVar2 + local_c8 * fVar8 + local_c0 * fVar6;
  local_f8 = (local_b8 +
             (local_c4 * fVar6 - local_c0 * fVar2) * local_bc + fVar10 * fVar8 + local_c8 * fVar4) -
             (local_b8 +
             (local_c4 * fVar7 - local_c0 * fVar5) * local_bc + fVar10 * fVar9 + local_c8 * fVar3);
  local_f4 = (local_b4 +
             (local_c0 * fVar8 - local_c8 * fVar6) * local_bc + fVar10 * fVar2 + local_c4 * fVar4) -
             (local_b4 +
             (local_c0 * fVar9 - local_c8 * fVar7) * local_bc + fVar10 * fVar5 + local_c4 * fVar3);
  local_f0 = (local_b0 +
             (local_c8 * fVar2 - local_c4 * fVar8) * local_bc + fVar10 * fVar6 + local_c0 * fVar4) -
             (local_b0 +
             (local_c8 * fVar5 - local_c4 * fVar9) * local_bc + fVar10 * fVar7 + local_c0 * fVar3);
  getVelocityAtPosInternal(param_1,param_2,&local_f8);
  return param_1;
}



// FUNCTION 143268e20 getVelocityAtOffset body=461 status=ok
// SIG undefined getVelocityAtOffset(void)

undefined8
physx::PxRigidBodyExt::getVelocityAtOffset(undefined8 param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 local_98 [144];
  
  (**(code **)(*param_2 + 0xa0))(param_2,&local_b8);
  lVar1 = (**(code **)(*param_2 + 0xf0))(param_2,local_98);
  fVar6 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar3 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar5 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar4 = local_ac * local_ac - 0.5;
  fVar2 = local_b4 * fVar3 + local_b8 * fVar6 + local_b0 * fVar5;
  local_c8 = *param_3 -
             ((local_b4 * fVar5 - local_b0 * fVar3) * local_ac + fVar4 * fVar6 + local_b8 * fVar2);
  local_c4 = param_3[1] -
             ((local_b0 * fVar6 - local_b8 * fVar5) * local_ac + fVar4 * fVar3 + local_b4 * fVar2);
  local_c0 = param_3[2] -
             ((local_b8 * fVar3 - local_b4 * fVar6) * local_ac + fVar4 * fVar5 + local_b0 * fVar2);
  getVelocityAtPosInternal(param_1,param_2,&local_c8);
  return param_1;
}



// FUNCTION 143269000 linearSweepSingle body=637 status=ok
// SIG undefined linearSweepSingle(void)

bool physx::PxRigidBodyExt::linearSweepSingle
               (longlong *param_1,longlong *param_2,undefined8 param_3,float param_4,
               undefined2 *param_5,undefined8 *param_6,uint *param_7,int *param_8,undefined8 param_9
               ,undefined8 param_10,undefined4 param_11)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  undefined2 local_res20 [4];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined2 local_118;
  undefined8 local_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 local_f8;
  char local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [96];
  
  puVar1 = param_7;
  *param_7 = 0xffffffff;
  uVar4 = (**(code **)(*param_1 + 200))();
  uVar3 = param_11;
  piVar2 = param_8;
  uVar6 = 0;
  fVar7 = param_4;
  if (uVar4 != 0) {
    do {
      param_7 = (uint *)0x0;
      (**(code **)(*param_1 + 0xd0))(param_1,&param_7,1,uVar6);
      PxShapeExt::getGlobalPose(local_c8,param_7,param_1);
      uStack_150 = 0;
      local_158 = 0;
      local_146 = 0;
      local_148 = (undefined2)piVar2[4];
      if (((piVar2[2] == 0 && *piVar2 == 0) && piVar2[3] == 0) && piVar2[1] == 0) {
        puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_7 + 0xb0))(param_7,local_a8);
      }
      else {
        puVar5 = &local_d8;
        local_d8 = *(undefined8 *)piVar2;
        uStack_d0 = *(undefined8 *)(piVar2 + 2);
      }
      local_158 = *puVar5;
      uStack_150 = puVar5[1];
      (**(code **)(*(longlong *)param_7 + 0x40))(param_7,local_98);
      local_130 = 0;
      uStack_128 = 0;
      local_118 = 0;
      local_114 = 0;
      uStack_10c = 0;
      local_f0 = '\0';
      local_e8 = 0;
      local_e0 = 0;
      local_138 = &PTR_CanBeUsedOnAnyThread_14503d308;
      local_120 = 0xffffffff;
      local_res20[0] = *param_5;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      fStack_fc = 3.4028235e+38;
      (**(code **)(*param_2 + 0x2f8))
                (param_2,local_98,local_c8,param_3,param_4,&local_138,local_res20,&local_158,param_9
                 ,param_10,uVar3);
      if ((local_f0 != '\0') && (fStack_fc < fVar7)) {
        *param_6 = local_130;
        param_6[1] = uStack_128;
        param_6[2] = CONCAT44(uStack_11c,local_120);
        *(undefined2 *)(param_6 + 3) = local_118;
        *(undefined8 *)((longlong)param_6 + 0x1c) = local_114;
        *(ulonglong *)((longlong)param_6 + 0x24) = CONCAT44(uStack_108,uStack_10c);
        *(undefined4 *)((longlong)param_6 + 0x2c) = uStack_104;
        *(undefined4 *)(param_6 + 6) = uStack_100;
        *(float *)((longlong)param_6 + 0x34) = fStack_fc;
        *(undefined4 *)(param_6 + 7) = local_f8;
        *puVar1 = uVar6;
        fVar7 = fStack_fc;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  return *puVar1 != 0xffffffff;
}



// FUNCTION 143269290 linearSweepMultiple body=1523 status=ok
// SIG undefined linearSweepMultiple(void)

ulonglong physx::PxRigidBodyExt::linearSweepMultiple
                    (longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                    undefined2 *param_5,longlong param_6,undefined4 *param_7,uint param_8,
                    undefined8 *param_9,int *param_10,byte *param_11,int *param_12,
                    undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined2 local_res20 [4];
  longlong *local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined2 local_158;
  undefined8 local_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  undefined4 local_138;
  char local_130;
  undefined8 *local_128;
  uint local_120;
  uint local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined2 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [88];
  
  *param_11 = 0;
  *param_10 = -1;
  if (param_8 != 0) {
    puVar12 = param_7;
    for (uVar6 = (ulonglong)param_8; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
  }
  uVar10 = 0;
  local_1a0 = (**(code **)(*param_1 + 200))(param_1);
  uVar6 = uVar10;
  if (local_1a0 != 0) {
    do {
      iVar16 = (int)uVar10;
      local_1a8 = (longlong *)0x0;
      (**(code **)(*param_1 + 0xd0))(param_1,&local_1a8,1,uVar10);
      PxShapeExt::getGlobalPose(local_c8,local_1a8,param_1);
      uStack_190 = 0;
      local_198 = 0;
      local_186 = 0;
      local_188 = (undefined2)param_12[4];
      if (((param_12[3] == 0 && param_12[2] == 0) && param_12[1] == 0) && *param_12 == 0) {
        puVar5 = (undefined8 *)(**(code **)(*local_1a8 + 0xb0))(local_1a8,local_a8);
      }
      else {
        puVar5 = &local_118;
        local_118 = *(undefined8 *)param_12;
        uStack_110 = *(undefined8 *)(param_12 + 2);
      }
      local_198 = *puVar5;
      uStack_190 = puVar5[1];
      (**(code **)(*local_1a8 + 0x40))();
      local_d4 = 0x7f7fffff;
      local_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_ec = 0;
      local_f8 = 0xffffffff;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      iVar17 = (int)uVar6;
      uVar9 = param_8 - iVar17;
      if (uVar9 == 0) {
        local_128 = &local_108;
        local_120 = 1;
      }
      else {
        local_128 = (undefined8 *)((longlong)iVar17 * 0x40 + param_6);
        local_120 = uVar9;
      }
      local_170 = 0;
      uStack_168 = 0;
      local_158 = 0;
      local_154 = 0;
      uStack_14c = 0;
      local_130 = '\0';
      local_11c = 0;
      local_178 = &PTR_CanBeUsedOnAnyThread_14503d308;
      local_res20[0] = *param_5;
      local_160 = 0xffffffff;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      fStack_13c = 3.4028235e+38;
      (**(code **)(*param_2 + 0x2f8))
                (param_2,local_98,local_c8,param_3,param_4,&local_178,local_res20,&local_198,
                 param_13,param_14,param_15);
      uVar10 = (ulonglong)local_11c;
      *param_11 = *param_11 | uVar9 <= local_11c;
      if (uVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar8 = uVar10;
        if (local_11c != 0) {
          do {
            if ((uint)uVar6 < param_8) {
              param_7[uVar6] = iVar16;
            }
            uVar6 = (ulonglong)((uint)uVar6 + 1);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      iVar14 = (int)uVar10;
      if (local_130 != '\0') {
        if ((*param_10 == -1) || (fStack_13c < *(float *)((longlong)param_9 + 0x34))) {
          *param_10 = iVar16;
          *param_9 = local_170;
          param_9[1] = uStack_168;
          param_9[2] = CONCAT44(uStack_15c,local_160);
          *(undefined2 *)(param_9 + 3) = local_158;
          *(undefined8 *)((longlong)param_9 + 0x1c) = local_154;
          *(ulonglong *)((longlong)param_9 + 0x24) = CONCAT44(uStack_148,uStack_14c);
          *(undefined4 *)((longlong)param_9 + 0x2c) = uStack_144;
          *(undefined4 *)(param_9 + 6) = uStack_140;
          *(float *)((longlong)param_9 + 0x34) = fStack_13c;
          *(undefined4 *)(param_9 + 7) = local_138;
        }
        lVar13 = (longlong)(iVar17 + -1);
        if (-1 < iVar17 + -1) {
          if (3 < (longlong)(lVar13 + 1U)) {
            uVar6 = lVar13 + 1U >> 2;
            puVar11 = (undefined4 *)(param_6 + -0x1c + lVar13 * 0x40);
            lVar18 = (longlong)iVar17;
            lVar15 = (longlong)iVar14;
            puVar12 = param_7 + lVar13 + -2;
            lVar13 = lVar13 + uVar6 * -4;
            do {
              if (fStack_13c < (float)puVar11[0x14]) {
                lVar1 = lVar18 + lVar15;
                uVar10 = (ulonglong)((int)uVar10 - 1);
                puVar7 = (undefined4 *)((lVar1 + -1) * 0x40 + param_6);
                lVar15 = lVar15 + -1;
                uVar2 = puVar7[1];
                uVar3 = puVar7[2];
                uVar4 = puVar7[3];
                puVar11[7] = *puVar7;
                puVar11[8] = uVar2;
                puVar11[9] = uVar3;
                puVar11[10] = uVar4;
                *(undefined8 *)(puVar11 + 0xb) = *(undefined8 *)(puVar7 + 4);
                *(undefined2 *)(puVar11 + 0xd) = *(undefined2 *)(puVar7 + 6);
                puVar11[0xe] = puVar7[7];
                puVar11[0xf] = puVar7[8];
                puVar11[0x10] = puVar7[9];
                puVar11[0x11] = puVar7[10];
                puVar11[0x12] = puVar7[0xb];
                puVar11[0x13] = puVar7[0xc];
                puVar11[0x14] = puVar7[0xd];
                puVar11[0x15] = puVar7[0xe];
                puVar12[2] = param_7[lVar1 + -1];
              }
              if (fStack_13c < (float)puVar11[4]) {
                lVar1 = lVar18 + lVar15;
                uVar10 = (ulonglong)((int)uVar10 - 1);
                puVar7 = (undefined4 *)((lVar1 + -1) * 0x40 + param_6);
                lVar15 = lVar15 + -1;
                uVar2 = puVar7[1];
                uVar3 = puVar7[2];
                uVar4 = puVar7[3];
                puVar11[-9] = *puVar7;
                puVar11[-8] = uVar2;
                puVar11[-7] = uVar3;
                puVar11[-6] = uVar4;
                *(undefined8 *)(puVar11 + -5) = *(undefined8 *)(puVar7 + 4);
                *(undefined2 *)(puVar11 + -3) = *(undefined2 *)(puVar7 + 6);
                puVar11[-2] = puVar7[7];
                puVar11[-1] = puVar7[8];
                *puVar11 = puVar7[9];
                puVar11[1] = puVar7[10];
                puVar11[2] = puVar7[0xb];
                puVar11[3] = puVar7[0xc];
                puVar11[4] = puVar7[0xd];
                puVar11[5] = puVar7[0xe];
                puVar12[1] = param_7[lVar1 + -1];
              }
              if (fStack_13c < (float)puVar11[-0xc]) {
                lVar1 = lVar18 + lVar15;
                uVar10 = (ulonglong)((int)uVar10 - 1);
                puVar7 = (undefined4 *)((lVar1 + -1) * 0x40 + param_6);
                lVar15 = lVar15 + -1;
                uVar2 = puVar7[1];
                uVar3 = puVar7[2];
                uVar4 = puVar7[3];
                puVar11[-0x19] = *puVar7;
                puVar11[-0x18] = uVar2;
                puVar11[-0x17] = uVar3;
                puVar11[-0x16] = uVar4;
                *(undefined8 *)(puVar11 + -0x15) = *(undefined8 *)(puVar7 + 4);
                *(undefined2 *)(puVar11 + -0x13) = *(undefined2 *)(puVar7 + 6);
                puVar11[-0x12] = puVar7[7];
                puVar11[-0x11] = puVar7[8];
                puVar11[-0x10] = puVar7[9];
                puVar11[-0xf] = puVar7[10];
                puVar11[-0xe] = puVar7[0xb];
                puVar11[-0xd] = puVar7[0xc];
                puVar11[-0xc] = puVar7[0xd];
                puVar11[-0xb] = puVar7[0xe];
                *puVar12 = param_7[lVar1 + -1];
              }
              if (fStack_13c < (float)puVar11[-0x1c]) {
                lVar1 = lVar18 + lVar15;
                uVar10 = (ulonglong)((int)uVar10 - 1);
                puVar7 = (undefined4 *)((lVar1 + -1) * 0x40 + param_6);
                lVar15 = lVar15 + -1;
                uVar2 = puVar7[1];
                uVar3 = puVar7[2];
                uVar4 = puVar7[3];
                puVar11[-0x29] = *puVar7;
                puVar11[-0x28] = uVar2;
                puVar11[-0x27] = uVar3;
                puVar11[-0x26] = uVar4;
                *(undefined8 *)(puVar11 + -0x25) = *(undefined8 *)(puVar7 + 4);
                *(undefined2 *)(puVar11 + -0x23) = *(undefined2 *)(puVar7 + 6);
                puVar11[-0x22] = puVar7[7];
                puVar11[-0x21] = puVar7[8];
                puVar11[-0x20] = puVar7[9];
                puVar11[-0x1f] = puVar7[10];
                puVar11[-0x1e] = puVar7[0xb];
                puVar11[-0x1d] = puVar7[0xc];
                puVar11[-0x1c] = puVar7[0xd];
                puVar11[-0x1b] = puVar7[0xe];
                puVar12[-1] = param_7[lVar1 + -1];
              }
              puVar12 = puVar12 + -4;
              puVar11 = puVar11 + -0x40;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          iVar14 = (int)uVar10;
          if (-1 < lVar13) {
            puVar12 = (undefined4 *)(param_6 + 0x24 + lVar13 * 0x40);
            lVar15 = (longlong)iVar14;
            do {
              if (fStack_13c < (float)puVar12[4]) {
                lVar18 = iVar17 + lVar15;
                uVar10 = (ulonglong)((int)uVar10 - 1);
                puVar11 = (undefined4 *)((lVar18 + -1) * 0x40 + param_6);
                lVar15 = lVar15 + -1;
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                puVar12[-9] = *puVar11;
                puVar12[-8] = uVar2;
                puVar12[-7] = uVar3;
                puVar12[-6] = uVar4;
                *(undefined8 *)(puVar12 + -5) = *(undefined8 *)(puVar11 + 4);
                *(undefined2 *)(puVar12 + -3) = *(undefined2 *)(puVar11 + 6);
                puVar12[-2] = puVar11[7];
                puVar12[-1] = puVar11[8];
                *puVar12 = puVar11[9];
                puVar12[1] = puVar11[10];
                puVar12[2] = puVar11[0xb];
                puVar12[3] = puVar11[0xc];
                puVar12[4] = puVar11[0xd];
                puVar12[5] = puVar11[0xe];
                param_7[lVar13] = param_7[lVar18 + -1];
              }
              iVar14 = (int)uVar10;
              puVar12 = puVar12 + -0x10;
              lVar13 = lVar13 + -1;
            } while (-1 < lVar13);
          }
        }
      }
      uVar10 = (ulonglong)(iVar16 + 1U);
      uVar6 = (ulonglong)(uint)(iVar17 + iVar14);
    } while (iVar16 + 1U < local_1a0);
  }
  return uVar6;
}



// FUNCTION 143269890 computeVelocityDeltaFromImpulse body=967 status=ok
// SIG undefined computeVelocityDeltaFromImpulse(void)

void physx::PxRigidBodyExt::computeVelocityDeltaFromImpulse
               (longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  undefined1 local_e8 [200];
  
  fVar3 = (float)(**(code **)(*param_1 + 0x108))();
  fVar1 = param_2[1];
  fVar6 = param_2[2];
  *param_4 = fVar3 * *param_2;
  param_4[1] = fVar3 * fVar1;
  param_4[2] = fVar3 * fVar6;
  (**(code **)(*param_1 + 0xa0))(param_1,local_e8);
  (**(code **)(*param_1 + 0xf0))(param_1,local_108);
  pfVar2 = (float *)PxQuat::operator*(local_e8,local_118,local_108);
  fVar1 = pfVar2[2];
  fVar6 = *pfVar2;
  fVar3 = pfVar2[1];
  fVar7 = pfVar2[3];
  fVar9 = fVar6 + fVar6;
  fVar4 = fVar3 + fVar3;
  fVar18 = 1.0 - fVar6 * fVar9;
  fVar8 = fVar7 * (fVar1 + fVar1);
  fVar19 = fVar18 - fVar3 * fVar4;
  fVar6 = fVar1 * (fVar1 + fVar1);
  fVar5 = fVar1 * fVar4 + fVar7 * fVar9;
  fVar15 = fVar8 + fVar3 * fVar9;
  fVar8 = fVar3 * fVar9 - fVar8;
  fVar13 = fVar1 * fVar4 - fVar7 * fVar9;
  fVar17 = fVar1 * fVar9 - fVar7 * fVar4;
  fVar12 = (1.0 - fVar3 * fVar4) - fVar6;
  fVar18 = fVar18 - fVar6;
  fVar16 = fVar7 * fVar4 + fVar1 * fVar9;
  (**(code **)(*param_1 + 0x120))(param_1,&local_128);
  fVar10 = fVar8 * local_124;
  fVar4 = fVar16 * local_120;
  fVar14 = fVar12 * local_128;
  fVar7 = fVar15 * fVar14 + fVar18 * fVar10 + fVar13 * fVar4;
  fVar1 = param_3[2];
  fVar11 = fVar5 * fVar10 + fVar17 * fVar14 + fVar19 * fVar4;
  fVar6 = param_3[1];
  fVar9 = fVar5 * fVar18 * local_124 + fVar17 * fVar15 * local_128 + fVar19 * fVar13 * local_120;
  fVar3 = *param_3;
  *param_5 = fVar11 * fVar1 +
             (fVar8 * fVar10 + fVar12 * fVar14 + fVar16 * fVar4) * fVar3 + fVar7 * fVar6;
  param_5[2] = (fVar5 * local_124 * fVar5 + fVar17 * local_128 * fVar17 +
               fVar19 * local_120 * fVar19) * fVar1 + fVar11 * fVar3 + fVar9 * fVar6;
  param_5[1] = fVar9 * fVar1 +
               fVar7 * fVar3 +
               (fVar15 * fVar15 * local_128 + fVar18 * fVar18 * local_124 +
               fVar13 * fVar13 * local_120) * fVar6;
  return;
}



// FUNCTION 143269c60 computeVelocityDeltaFromImpulse body=1092 status=ok
// SIG undefined computeVelocityDeltaFromImpulse(void)

void physx::PxRigidBodyExt::computeVelocityDeltaFromImpulse
               (longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
               float param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_c8 [176];
  
  lVar5 = (**(code **)(*param_1 + 0xf0))(param_1,&local_118);
  fVar8 = param_2[3];
  fVar14 = param_2[1];
  fVar18 = *param_2;
  fVar1 = param_2[2];
  fVar16 = *(float *)(lVar5 + 0x10) + *(float *)(lVar5 + 0x10);
  fVar12 = *(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 0x14);
  fVar15 = *(float *)(lVar5 + 0x18) + *(float *)(lVar5 + 0x18);
  fVar13 = fVar8 * fVar8 - 0.5;
  fVar9 = fVar18 * fVar16 + fVar14 * fVar12 + fVar1 * fVar15;
  fVar10 = param_2[4];
  fVar2 = param_2[6];
  fVar3 = param_2[5];
  fVar7 = (float)(**(code **)(*param_1 + 0x108))(param_1);
  fVar7 = fVar7 * param_5;
  pfVar6 = (float *)(**(code **)(*param_1 + 0x120))(param_1,local_c8);
  fVar11 = param_2[1];
  fVar4 = *param_2;
  fVar19 = fVar11 + fVar11;
  local_128 = param_6 * *pfVar6;
  local_124 = param_6 * pfVar6[1];
  local_120 = param_6 * pfVar6[2];
  fVar17 = fVar4 + fVar4;
  local_118 = param_2[2];
  local_10c = param_2[3];
  local_110 = fVar17 * local_118 - fVar19 * local_10c;
  local_100 = fVar19 * local_10c + fVar17 * local_118;
  local_104 = fVar19 * local_118 + fVar17 * local_10c;
  local_fc = fVar19 * local_118 - fVar17 * local_10c;
  local_10c = (local_118 + local_118) * local_10c;
  local_118 = (local_118 + local_118) * local_118;
  local_f8 = 1.0 - fVar17 * fVar4;
  local_114 = local_10c + fVar17 * fVar11;
  local_10c = fVar17 * fVar11 - local_10c;
  local_108 = local_f8 - local_118;
  local_118 = (1.0 - fVar19 * fVar11) - local_118;
  local_f8 = local_f8 - fVar19 * fVar11;
  Cm::transformInertiaTensor(&local_128,&local_118,&local_f0);
  fVar11 = param_4[1];
  fVar4 = param_4[2];
  *param_7 = fVar7 * *param_4;
  param_7[1] = fVar7 * fVar11;
  param_7[2] = fVar7 * fVar4;
  fVar11 = *param_3 -
           ((fVar14 * fVar15 - fVar1 * fVar12) * fVar8 + fVar13 * fVar16 + fVar18 * fVar9 + fVar10);
  fVar10 = param_3[1] -
           ((fVar1 * fVar16 - fVar18 * fVar15) * fVar8 + fVar13 * fVar12 + fVar14 * fVar9 + fVar3);
  fVar8 = param_3[2] -
          ((fVar18 * fVar12 - fVar14 * fVar16) * fVar8 + fVar13 * fVar15 + fVar1 * fVar9 + fVar2);
  fVar14 = param_4[1] * fVar11 - *param_4 * fVar10;
  fVar18 = param_4[2] * fVar10 - param_4[1] * fVar8;
  fVar8 = *param_4 * fVar8 - param_4[2] * fVar11;
  *param_8 = local_f0 * fVar18 + local_e4 * fVar8 + local_d8 * fVar14;
  param_8[1] = local_ec * fVar18 + local_e0 * fVar8 + local_d4 * fVar14;
  param_8[2] = local_e8 * fVar18 + local_dc * fVar8 + local_d0 * fVar14;
  return;
}



// FUNCTION 14326a0b0 computeLinearAngularImpulse body=578 status=ok
// SIG undefined computeLinearAngularImpulse(void)

void physx::PxRigidBodyExt::computeLinearAngularImpulse
               (longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
               float param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_98 [144];
  
  lVar8 = (**(code **)(*param_1 + 0xf0))(param_1,local_98);
  fVar9 = param_2[1];
  fVar1 = param_2[3];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar12 = *(float *)(lVar8 + 0x14) + *(float *)(lVar8 + 0x14);
  fVar16 = *(float *)(lVar8 + 0x10) + *(float *)(lVar8 + 0x10);
  fVar15 = *(float *)(lVar8 + 0x18) + *(float *)(lVar8 + 0x18);
  fVar14 = fVar1 * fVar1 - 0.5;
  fVar10 = fVar2 * fVar16 + fVar9 * fVar12 + fVar3 * fVar15;
  fVar4 = param_2[4];
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar11 = param_2[5];
  fVar7 = param_2[6];
  *param_7 = param_5 * *param_4;
  param_7[1] = param_5 * fVar5;
  param_7[2] = param_5 * fVar6;
  fVar13 = *param_3 -
           ((fVar9 * fVar15 - fVar3 * fVar12) * fVar1 + fVar14 * fVar16 + fVar2 * fVar10 + fVar4);
  fVar4 = param_4[2];
  fVar5 = *param_4;
  fVar11 = param_3[1] -
           ((fVar3 * fVar16 - fVar2 * fVar15) * fVar1 + fVar14 * fVar12 + fVar9 * fVar10 + fVar11);
  fVar6 = param_4[1];
  fVar9 = param_3[2] -
          ((fVar2 * fVar12 - fVar9 * fVar16) * fVar1 + fVar14 * fVar15 + fVar3 * fVar10 + fVar7);
  *param_8 = (fVar4 * fVar11 - fVar6 * fVar9) * param_6;
  param_8[1] = (fVar5 * fVar9 - fVar4 * fVar13) * param_6;
  param_8[2] = (fVar6 * fVar13 - fVar5 * fVar11) * param_6;
  return;
}



// FUNCTION 14326a3a0 translate body=1491 status=ok
// SIG undefined translate(void)

void physx::Ext::InertiaTensorComputer::translate(float *param_1,float *param_2)

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
  float fVar12;
  
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    fVar1 = param_1[9];
    fVar8 = *param_2 + fVar1;
    fVar2 = param_1[10];
    fVar11 = -fVar1;
    fVar9 = fVar2 + param_2[1];
    fVar3 = param_1[0xb];
    fVar12 = -fVar2;
    fVar4 = fVar3 + param_2[2];
    fVar10 = -fVar3;
    if (((fVar8 == 0.0) && (fVar9 == 0.0)) && (fVar4 == 0.0)) {
      fVar4 = param_1[0xc];
      *param_1 = (fVar10 * fVar3 + fVar2 * fVar12) * fVar4 + *param_1;
      param_1[2] = (fVar1 * fVar3 + fVar12 * 0.0 + fVar12 * 0.0) * fVar4 + param_1[2];
      param_1[1] = (fVar11 * fVar12 + fVar3 * 0.0 + fVar3 * 0.0) * fVar4 + param_1[1];
      param_1[3] = (fVar2 * fVar1 + fVar10 * 0.0 + fVar10 * 0.0) * fVar4 + param_1[3];
      param_1[4] = (fVar10 * fVar3 + fVar11 * fVar1) * fVar4 + param_1[4];
      param_1[5] = (fVar10 * fVar12 + fVar1 * 0.0 + fVar1 * 0.0) * fVar4 + param_1[5];
      param_1[6] = (fVar11 * fVar10 + fVar2 * 0.0 + fVar2 * 0.0) * fVar4 + param_1[6];
      param_1[7] = (fVar2 * fVar3 + fVar11 * 0.0 + fVar11 * 0.0) * fVar4 + param_1[7];
      param_1[8] = (fVar2 * fVar12 + fVar11 * fVar1) * fVar4 + param_1[8];
    }
    else {
      fVar5 = -fVar4;
      fVar7 = -fVar9;
      fVar6 = -fVar8;
      fVar3 = param_1[0xc];
      *param_1 = ((fVar10 * param_1[0xb] + fVar2 * fVar12) - (fVar7 * fVar9 + fVar5 * fVar4)) *
                 fVar3 + *param_1;
      param_1[1] = ((fVar11 * fVar12 + param_1[0xb] * 0.0 + param_1[0xb] * 0.0) -
                   (fVar6 * fVar7 + fVar4 * 0.0 + fVar4 * 0.0)) * fVar3 + param_1[1];
      param_1[2] = ((fVar1 * param_1[0xb] + fVar12 * 0.0 + fVar12 * 0.0) -
                   (fVar7 * 0.0 + fVar7 * 0.0 + fVar8 * fVar4)) * fVar3 + param_1[2];
      param_1[3] = ((fVar2 * fVar1 + fVar10 * 0.0 + fVar10 * 0.0) -
                   (fVar5 * 0.0 + fVar5 * 0.0 + fVar8 * fVar9)) * fVar3 + param_1[3];
      param_1[4] = ((fVar10 * param_1[0xb] + fVar11 * fVar1) - (fVar5 * fVar4 + fVar6 * fVar8)) *
                   fVar3 + param_1[4];
      param_1[5] = ((fVar10 * fVar12 + fVar1 * 0.0 + fVar1 * 0.0) -
                   (fVar8 * 0.0 + fVar5 * fVar7 + fVar8 * 0.0)) * fVar3 + param_1[5];
      param_1[6] = ((fVar11 * fVar10 + fVar2 * 0.0 + fVar2 * 0.0) -
                   (fVar9 * 0.0 + fVar6 * fVar5 + fVar9 * 0.0)) * fVar3 + param_1[6];
      param_1[7] = ((fVar2 * param_1[0xb] + fVar11 * 0.0 + fVar11 * 0.0) -
                   (fVar4 * fVar9 + fVar6 * 0.0 + fVar6 * 0.0)) * fVar3 + param_1[7];
      param_1[8] = fVar3 * ((fVar2 * fVar12 + fVar11 * fVar1) - (fVar7 * fVar9 + fVar6 * fVar8)) +
                   param_1[8];
    }
    param_1[9] = param_1[9] + *param_2;
    param_1[10] = param_2[1] + param_1[10];
    param_1[0xb] = param_2[2] + param_1[0xb];
  }
  return;
}



// FUNCTION 14326ab50 setCapsule body=292 status=ok
// SIG undefined setCapsule(void)

void physx::Ext::InertiaTensorComputer::setCapsule
               (float *param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_3 * param_3 * param_3 * 0.53333336;
  fVar4 = param_3 * 3.1415927 * param_3;
  fVar3 = param_4 * param_4 * param_4;
  fVar1 = param_3 * param_4 * param_3;
  param_1[0xc] = param_3 * 4.1887903 * param_3 * param_3 + (param_4 + param_4) * fVar4;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar5 = (fVar2 + fVar1) * fVar4;
  fVar4 = (param_4 * param_4 * param_3 * 1.3333334 + fVar1 * 1.5 + fVar2 +
          fVar3 * 0.33333334 + fVar3 * 0.33333334) * fVar4;
  if (param_2 == 0) {
    *param_1 = fVar5;
    param_1[4] = fVar4;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
  }
  else {
    *param_1 = fVar4;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    if (param_2 != 1) {
      param_1[4] = fVar4;
      param_1[8] = fVar5;
      goto LAB_14326ac56;
    }
    param_1[4] = fVar5;
  }
  param_1[8] = fVar4;
LAB_14326ac56:
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  return;
}



// FUNCTION 14326ac80 setEllipsoid body=151 status=ok
// SIG undefined setEllipsoid(void)

void physx::Ext::InertiaTensorComputer::setEllipsoid
               (float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_2 != 0.0) {
    fVar2 = param_2;
  }
  if (param_3 != 0.0) {
    fVar2 = fVar2 * param_3;
  }
  if (param_4 != 0.0) {
    fVar2 = fVar2 * param_4;
  }
  fVar1 = fVar2 * 4.1887903 * 0.4;
  param_1[0xc] = fVar2 * 4.1887903;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_1 = param_3 * param_4 * fVar1;
  param_1[3] = 0.0;
  param_1[4] = param_2 * param_4 * fVar1;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = param_2 * param_3 * fVar1;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return;
}



// FUNCTION 14326b0b0 FUN_14326b0b0 body=1581 status=ok
// SIG undefined FUN_14326b0b0(void)

float * FUN_14326b0b0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d0;
  undefined1 local_c8 [192];
  
  switch(*param_2) {
  case 0:
    fVar4 = (float)param_2[1];
    fVar4 = fVar4 * 4.1887903 * fVar4 * fVar4;
    param_1[0xc] = fVar4;
    fVar4 = fVar4 * 0.4 * (float)param_2[1] * (float)param_2[1];
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    *param_1 = fVar4;
    param_1[4] = fVar4;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[8] = fVar4;
    param_1[7] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    break;
  case 2:
    fVar4 = (float)param_2[1];
    fVar7 = (float)param_2[2];
    fVar12 = fVar4 * fVar4 * fVar4 * 0.53333336;
    param_1[0xc] = (fVar7 * 3.1415927 + fVar7 * 3.1415927 + fVar4 * 4.1887903) * fVar4 * fVar4;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    fVar8 = fVar7 * fVar4 * fVar4;
    *param_1 = (fVar8 + fVar12) * 3.1415927 * fVar4 * fVar4;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    fVar4 = (fVar8 * 1.5 + fVar12 + fVar7 * fVar7 * fVar4 * 1.3333334 +
            fVar7 * fVar7 * fVar7 * 0.6666667) * 3.1415927 * fVar4 * fVar4;
    param_1[4] = fVar4;
    param_1[8] = fVar4;
    param_1[7] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    break;
  case 3:
    fVar6 = (float)param_2[2] * (float)param_2[1] * (float)param_2[3] * 8.0;
    param_1[0xc] = fVar6;
    fVar6 = fVar6 * 0.33333334;
    fVar8 = (float)param_2[3] * (float)param_2[3];
    fVar12 = (float)param_2[2] * (float)param_2[2];
    fVar4 = (float)param_2[1] * (float)param_2[1];
    fVar7 = fVar6 * 0.0;
    param_1[1] = fVar7;
    param_1[2] = fVar7;
    *param_1 = (fVar8 + fVar12) * fVar6;
    param_1[3] = fVar7;
    param_1[5] = fVar7;
    param_1[4] = (fVar8 + fVar4) * fVar6;
    param_1[6] = fVar7;
    param_1[7] = fVar7;
    param_1[8] = (fVar12 + fVar4) * fVar6;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    break;
  case 4:
    (**(code **)(**(longlong **)(param_2 + 8) + 0x60))
              (*(longlong **)(param_2 + 8),local_res8,&local_f0,&local_128);
    local_118 = local_f0 - (local_124 * local_124 + local_120 * local_120) * local_res8[0];
    local_108 = local_e0 - (local_128 * local_128 + local_120 * local_120) * local_res8[0];
    local_114 = local_128 * local_124 * local_res8[0] + local_ec;
    local_f8 = local_d0 - (local_128 * local_128 + local_124 * local_124) * local_res8[0];
    local_104 = local_120 * local_124 * local_res8[0] + local_dc;
    local_110 = local_128 * local_120 * local_res8[0] + local_e8;
    local_128 = local_128 * 2.0;
    param_1[0xc] = local_res8[0] * (float)param_2[1] * (float)param_2[2] * (float)param_2[3];
    fVar4 = (float)param_2[7];
    fVar7 = (float)param_2[5];
    fVar8 = (float)param_2[4];
    fVar12 = (float)param_2[6];
    local_124 = local_124 * 2.0;
    fVar11 = fVar4 * fVar4 - 0.5;
    local_120 = local_120 * 2.0;
    fVar6 = (float)param_2[6];
    fVar5 = fVar8 * local_128 + fVar7 * local_124 + fVar12 * local_120;
    fVar1 = (float)param_2[4];
    fVar10 = ((fVar11 * local_128 - (fVar7 * local_120 - fVar12 * local_124) * fVar4) +
             fVar8 * fVar5) * (float)param_2[1] * 2.0;
    fVar2 = (float)param_2[5];
    fVar9 = ((fVar11 * local_124 - (fVar12 * local_128 - fVar8 * local_120) * fVar4) + fVar7 * fVar5
            ) * (float)param_2[2] * 2.0;
    fVar12 = ((fVar11 * local_120 - (fVar8 * local_124 - fVar7 * local_128) * fVar4) +
             fVar12 * fVar5) * (float)param_2[3] * 2.0;
    fVar8 = fVar4 * fVar4 - 0.5;
    fVar7 = fVar1 * fVar10 + fVar2 * fVar9 + fVar6 * fVar12;
    param_1[9] = (fVar2 * fVar12 - fVar6 * fVar9) * fVar4 + fVar8 * fVar10 + fVar1 * fVar7;
    param_1[10] = (fVar6 * fVar10 - fVar1 * fVar12) * fVar4 + fVar8 * fVar9 + fVar2 * fVar7;
    param_1[0xb] = (fVar1 * fVar9 - fVar2 * fVar10) * fVar4 + fVar8 * fVar12 + fVar6 * fVar7;
    local_10c = local_114;
    local_100 = local_110;
    local_fc = local_104;
    pfVar3 = (float *)physx::PxMassProperties::scaleInertia(local_c8,&local_118);
    *param_1 = *pfVar3;
    param_1[1] = pfVar3[1];
    param_1[2] = pfVar3[2];
    param_1[3] = pfVar3[3];
    param_1[4] = pfVar3[4];
    param_1[5] = pfVar3[5];
    param_1[6] = pfVar3[6];
    param_1[7] = pfVar3[7];
    param_1[8] = pfVar3[8];
    break;
  case 0xffffffff:
  case 1:
  case 5:
  case 6:
  case 7:
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xc] = 1.0;
  }
  return param_1;
}



// FUNCTION 14326b710 addForceAtPosInternal body=684 status=ok
// SIG undefined addForceAtPosInternal(void)

void addForceAtPosInternal
               (longlong *param_1,float *param_2,float *param_3,int param_4,undefined1 param_5)

{
  longlong lVar1;
  Foundation *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [32];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  if (param_4 - 2U < 2) {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRigidBodyExt.cpp"
               ,0x191,
               "PxRigidBodyExt::addForce methods do not support eACCELERATION or eVELOCITY_CHANGE modes"
              );
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,&local_98);
    lVar1 = (**(code **)(*param_1 + 0xf0))(param_1,local_b8);
    fVar8 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
    fVar5 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
    fVar7 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
    fVar6 = local_8c * local_8c - 0.5;
    fVar2 = local_94 * fVar5 + local_98 * fVar8 + local_90 * fVar7;
    fVar4 = *param_3 -
            (local_88 +
            (local_94 * fVar7 - local_90 * fVar5) * local_8c + fVar6 * fVar8 + local_98 * fVar2);
    fVar3 = param_3[1] -
            (local_84 +
            (local_90 * fVar8 - local_98 * fVar7) * local_8c + fVar6 * fVar5 + local_94 * fVar2);
    fVar2 = param_3[2] -
            (local_80 +
            (local_98 * fVar5 - local_94 * fVar8) * local_8c + fVar6 * fVar7 + local_90 * fVar2);
    local_c8 = param_2[2] * fVar3 - param_2[1] * fVar2;
    local_c0 = param_2[1] * fVar4 - *param_2 * fVar3;
    local_c4 = *param_2 * fVar2 - param_2[2] * fVar4;
    (**(code **)(*param_1 + 0x148))(param_1,param_2,param_4,param_5);
    (**(code **)(*param_1 + 0x150))(param_1,&local_c8,param_4,param_5);
  }
  return;
}



// FUNCTION 14326b9c0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a4c8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14326ba60 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxMassProperties>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a498,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14326bb00 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxTransform>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a470,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14326bba0 computeMassAndDiagInertia body=1154 status=ok
// SIG undefined computeMassAndDiagInertia(void)

undefined8
computeMassAndDiagInertia
          (ulonglong *param_1,float *param_2,undefined8 *param_3,float *param_4,uint *param_5,
          char param_6,longlong *param_7,undefined8 param_8)

{
  uint uVar1;
  ulonglong uVar2;
  float *pfVar3;
  Foundation *this;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  undefined1 local_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  
  if (param_6 == '\0') {
    uVar2 = param_1[5];
    uVar1 = *(uint *)((longlong)param_1 + 0x2c);
    *param_5 = *(uint *)((longlong)param_1 + 0x24);
    param_5[1] = (uint)uVar2;
    param_5[2] = uVar1;
    local_100 = *(uint *)((longlong)param_1 + 0x24);
    local_f8 = *(uint *)((longlong)param_1 + 0x2c);
    local_fc = (uint)param_1[5];
  }
  else {
    local_100 = *param_5;
    local_f8 = param_5[2];
    local_fc = param_5[1];
  }
  local_100 = local_100 ^ 0x80000000;
  local_fc = local_fc ^ 0x80000000;
  local_f8 = local_f8 ^ 0x80000000;
  physx::Ext::InertiaTensorComputer::translate(local_fc,&local_100);
  *param_4 = *(float *)(param_1 + 6);
  local_128 = *param_1;
  uStack_120 = param_1[1];
  local_118 = param_1[2];
  uStack_110 = param_1[3];
  local_108 = (undefined4)param_1[4];
  pfVar3 = (float *)physx::PxDiagonalize((PxMat33 *)&local_100,(PxQuat *)&local_128);
  *param_2 = *pfVar3;
  param_2[1] = pfVar3[1];
  fVar4 = pfVar3[2];
  param_2[2] = fVar4;
  if (((*param_2 <= 0.0) || (param_2[1] <= 0.0)) || (fVar4 <= 0.0)) {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,2,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRigidBodyExt.cpp"
               ,0x58,
               "%s: inertia tensor has negative components (ill-conditioned input expected). Approximation for inertia tensor will be used instead."
               ,param_8);
    (**(code **)(*param_7 + 0x48))(param_7,local_e8,0x3f8147ae);
    (**(code **)(*param_7 + 0xa0))(param_7,&local_c8);
    fVar8 = -local_b8 * 2.0;
    fVar6 = -local_b4 * 2.0;
    fVar5 = -local_b0 * 2.0;
    fVar4 = local_c4 * fVar6 + local_c8 * fVar8 + local_c0 * fVar5;
    fVar7 = local_bc * local_bc - 0.5;
    local_128 = CONCAT44(local_c4,local_c8) ^ 0x8000000080000000;
    uStack_120 = CONCAT44(local_bc,local_c0) ^ 0x80000000;
    local_118 = CONCAT44((fVar7 * fVar6 - (local_c0 * fVar8 - local_c8 * fVar5) * local_bc) +
                         local_c4 * fVar4,
                         (fVar7 * fVar8 - (local_c4 * fVar5 - local_c0 * fVar6) * local_bc) +
                         local_c8 * fVar4);
    uStack_110 = CONCAT44(uStack_110._4_4_,
                          (fVar7 * fVar5 - (local_c8 * fVar6 - local_c4 * fVar8) * local_bc) +
                          local_c0 * fVar4);
    pfVar3 = (float *)physx::PxBounds3::transformFast(&local_100,&local_128,local_e8);
    fVar7 = (pfVar3[3] - *pfVar3) * 0.5;
    fVar5 = (pfVar3[4] - pfVar3[1]) * 0.5;
    fVar6 = (pfVar3[5] - pfVar3[2]) * 0.5;
    fVar4 = 1.0;
    if (fVar7 != 0.0) {
      fVar4 = fVar7;
    }
    if (fVar5 != 0.0) {
      fVar4 = fVar4 * fVar5;
    }
    if (fVar6 != 0.0) {
      fVar4 = fVar4 * fVar6;
    }
    fVar8 = fVar4 * 8.0 * 0.33333334;
    fVar4 = *param_4 / (fVar4 * 8.0);
    *param_2 = (fVar6 * fVar6 + fVar5 * fVar5) * fVar8 * fVar4;
    param_2[1] = (fVar6 * fVar6 + fVar7 * fVar7) * fVar8 * fVar4;
    param_2[2] = (fVar5 * fVar5 + fVar7 * fVar7) * fVar8 * fVar4;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0x3f800000;
  }
  return 1;
}



// FUNCTION 14326c030 FUN_14326c030 body=3421 status=ok
// SIG undefined FUN_14326c030(void)

undefined8
FUN_14326c030(char param_1,longlong *param_2,float *param_3,float *param_4,uint param_5,char param_6
             ,float *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  Foundation *pFVar3;
  char *pcVar4;
  byte *pbVar5;
  float *pfVar6;
  undefined1 *puVar7;
  PxAllocatorCallback *pPVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
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
  undefined8 local_res10;
  float local_res18;
  float *local_res20;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  float local_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined8 local_1c4;
  float local_1bc;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined2 local_1af;
  undefined1 local_1ad;
  undefined1 local_1a8 [48];
  undefined1 local_178 [128];
  undefined1 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  uint local_e4;
  
  uVar10 = 0;
  local_f0 = local_178;
  local_res18 = 0.0;
  local_2a8 = 0.0;
  fStack_2a4 = 0.0;
  fStack_2a0 = 0.0;
  fStack_29c = 0.0;
  local_e8 = 0;
  local_298 = 0.0;
  fStack_294 = 0.0;
  fStack_290 = 0.0;
  fStack_28c = 0.0;
  local_f8 = 1;
  local_288 = 0.0;
  fStack_284 = 0.0;
  fStack_280 = 0.0;
  fStack_27c = 0.0;
  local_e4 = 0x10;
  local_res10 = 0;
  local_res20 = param_4;
  uVar1 = (**(code **)(*param_2 + 200))(param_2);
  physx::shdfnd::
  Array<physx::PxShape_*___ptr64,physx::shdfnd::InlineAllocator<128,physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>_>_>
  ::resize(local_178,uVar1,&local_res10);
  (**(code **)(*param_2 + 0xd0))(param_2,local_f0,local_e8,0);
  if (param_3 != (float *)0x0) {
    param_4 = param_3;
  }
  fVar25 = *param_4;
  uVar2 = _fpclass((double)fVar25);
  if ((uVar2 & 0x207) == 0) {
    fVar13 = fStack_27c;
    fVar15 = fStack_280;
    fVar17 = local_298;
    fVar19 = fStack_29c;
    fVar21 = fStack_284;
    fVar16 = local_288;
    fVar18 = fStack_28c;
    fVar20 = fStack_290;
    fVar22 = fStack_294;
    fVar23 = fStack_2a0;
    fVar14 = fStack_2a4;
    fVar24 = local_2a8;
    if (local_e8 != 0) {
      local_260 = fStack_27c;
      local_25c = fStack_280;
      local_258 = fStack_284;
      local_254 = local_298;
      local_268 = local_2a8;
      local_22c = local_288;
      local_230 = fStack_28c;
      local_234 = fStack_290;
      local_238 = fStack_294;
      local_250 = fStack_29c;
      local_270 = fStack_2a0;
      local_26c = fStack_2a4;
      uVar11 = uVar10;
      do {
        pbVar5 = (byte *)(**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x108))
                                   (*(longlong **)(local_f0 + uVar11 * 8),&local_res10);
        if (((*pbVar5 & 1) != 0) || (param_6 != '\0')) {
          if (param_1 != '\0') {
            if (param_5 <= (uint)uVar10) {
              pFVar3 = physx::shdfnd::Foundation::getInstance();
              iVar12 = 0x9d;
              pcVar4 = 
              "computeMassAndInertia: Not enough mass/density values provided for all (simulation) shapes"
              ;
              goto LAB_14326cbd4;
            }
            fVar25 = param_4[uVar10];
            uVar2 = _fpclass((double)fVar25);
            if ((uVar2 & 0x207) != 0) {
              pFVar3 = physx::shdfnd::Foundation::getInstance();
              iVar12 = 0x96;
              pcVar4 = "computeMassAndInertia: Provided mass or density has no valid value";
              goto LAB_14326cbd4;
            }
          }
          uVar1 = (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x30))();
          switch(uVar1) {
          case 0:
            local_200 = 0;
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x50))
                      (*(longlong **)(local_f0 + uVar11 * 8),&local_200);
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x90))
                      (*(longlong **)(local_f0 + uVar11 * 8),local_1a8);
            local_278 = local_200._4_4_ * 4.1887903 * local_200._4_4_ * local_200._4_4_;
            local_2a8 = local_278 * local_200._4_4_ * local_200._4_4_ * 0.4;
            local_298 = local_2a8;
            local_288 = local_2a8;
            break;
          case 2:
            local_1f8 = 2;
            local_1f0 = 0.0;
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x58))
                      (*(longlong **)(local_f0 + uVar11 * 8),&local_1f8);
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x90))
                      (*(longlong **)(local_f0 + uVar11 * 8),local_1a8);
            fVar13 = local_1f0 * local_1f0 * local_1f0;
            fVar17 = local_1f8._4_4_ * local_1f0 * local_1f8._4_4_;
            fVar19 = local_1f8._4_4_ * 3.1415927 * local_1f8._4_4_;
            fVar15 = local_1f8._4_4_ * local_1f8._4_4_ * local_1f8._4_4_ * 0.53333336;
            local_2a8 = (fVar17 + fVar15) * fVar19;
            local_298 = (fVar17 * 1.5 + fVar15 + local_1f0 * local_1f0 * local_1f8._4_4_ * 1.3333334
                        + fVar13 * 0.33333334 + fVar13 * 0.33333334) * fVar19;
            local_278 = local_1f8._4_4_ * 4.1887903 * local_1f8._4_4_ * local_1f8._4_4_ +
                        local_1f0 * 2.0 * fVar19;
            local_288 = local_298;
            break;
          case 3:
            local_1e8 = 3;
            local_1e0 = 0;
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x48))
                      (*(longlong **)(local_f0 + uVar11 * 8),&local_1e8);
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x90))
                      (*(longlong **)(local_f0 + uVar11 * 8),local_1a8);
            local_278 = 1.0;
            if (local_1e8._4_4_ != 0.0) {
              local_278 = local_1e8._4_4_;
            }
            if ((float)local_1e0 != 0.0) {
              local_278 = local_278 * (float)local_1e0;
            }
            if (local_1e0._4_4_ != 0.0) {
              local_278 = local_278 * local_1e0._4_4_;
            }
            local_278 = local_278 * 8.0;
            local_288 = local_278 * 0.33333334;
            local_298 = local_288 *
                        (local_1e0._4_4_ * local_1e0._4_4_ + local_1e8._4_4_ * local_1e8._4_4_);
            local_2a8 = local_288 *
                        (local_1e0._4_4_ * local_1e0._4_4_ + (float)local_1e0 * (float)local_1e0);
            local_288 = local_288 *
                        ((float)local_1e0 * (float)local_1e0 + local_1e8._4_4_ * local_1e8._4_4_);
            break;
          case 4:
            local_1d8 = 4;
            local_1b8 = (longlong *)0x0;
            local_1b0 = 0;
            local_1af = 0;
            local_1ad = 0;
            local_1d4 = 1.0;
            fStack_1d0 = 1.0;
            fStack_1cc = 1.0;
            fStack_1c8 = 0.0;
            local_1c4 = 0;
            local_1bc = 1.0;
            (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x68))
                      (*(longlong **)(local_f0 + uVar11 * 8),&local_1d8);
            (**(code **)(*local_1b8 + 0x60))(local_1b8,&local_264,&local_228,&local_248);
            local_24c = local_1d4;
            if (((local_1d4 != 1.0) || (fStack_1d0 != 1.0)) || (fStack_1cc != 1.0)) {
              fVar17 = local_1bc * local_1bc - 0.5;
              local_264 = local_264 * fStack_1d0 * local_1d4 * fStack_1cc;
              local_244 = local_244 * 2.0;
              local_240 = local_240 * 2.0;
              local_248 = local_248 * 2.0;
              fVar13 = local_244 * (float)local_1c4 + local_248 * fStack_1c8 +
                       local_240 * local_1c4._4_4_;
              fVar15 = local_1d4 *
                       ((local_240 * (float)local_1c4 - local_244 * local_1c4._4_4_) * local_1bc +
                        fVar17 * local_248 + fVar13 * fStack_1c8) * 2.0;
              fVar19 = fStack_1d0 *
                       ((local_248 * local_1c4._4_4_ - local_240 * fStack_1c8) * local_1bc +
                        fVar17 * local_244 + fVar13 * (float)local_1c4) * 2.0;
              fVar21 = fStack_1cc *
                       ((local_244 * fStack_1c8 - local_248 * (float)local_1c4) * local_1bc +
                        fVar17 * local_240 + fVar13 * local_1c4._4_4_) * 2.0;
              fVar13 = fVar19 * (float)local_1c4 + fVar15 * fStack_1c8 + fVar21 * local_1c4._4_4_;
              local_248 = (fVar17 * fVar15 -
                          (fVar21 * (float)local_1c4 - fVar19 * local_1c4._4_4_) * local_1bc) +
                          fVar13 * fStack_1c8;
              local_244 = (fVar17 * fVar19 -
                          (fVar15 * local_1c4._4_4_ - fVar21 * fStack_1c8) * local_1bc) +
                          fVar13 * (float)local_1c4;
              local_240 = (fVar17 * fVar21 -
                          (fVar19 * fStack_1c8 - fVar15 * (float)local_1c4) * local_1bc) +
                          fVar13 * local_1c4._4_4_;
              pfVar6 = (float *)physx::PxMassProperties::scaleInertia
                                          (local_1a8,&local_228,&fStack_1c8,&local_1d4);
              local_228 = *pfVar6;
              local_224 = pfVar6[1];
              local_220 = pfVar6[2];
              local_21c = pfVar6[3];
              local_218 = pfVar6[4];
              local_214 = pfVar6[5];
              local_210 = pfVar6[6];
              local_20c = pfVar6[7];
              local_208 = pfVar6[8];
            }
            fStack_284 = local_248;
            fStack_280 = local_244;
            fStack_27c = local_240;
            local_278 = local_264;
            local_2a8 = local_228;
            fStack_2a4 = local_224;
            fStack_2a0 = local_220;
            fStack_29c = local_21c;
            local_298 = local_218;
            fStack_294 = local_214;
            fStack_290 = local_210;
            fStack_28c = local_20c;
            local_288 = local_208;
            puVar7 = (undefined1 *)
                     (**(code **)(**(longlong **)(local_f0 + uVar11 * 8) + 0x90))
                               (*(longlong **)(local_f0 + uVar11 * 8),local_1a8);
            goto LAB_14326c8f3;
          case 0xffffffff:
          case 1:
          case 5:
          case 6:
          case 7:
            pFVar3 = physx::shdfnd::Foundation::getInstance();
            physx::shdfnd::Foundation::error
                      (pFVar3,4,
                       "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRigidBodyExt.cpp"
                       ,0xeb,"computeMassAndInertia: Dynamic actor with illegal collision shapes");
            uVar9 = 0;
            goto LAB_14326ccc6;
          default:
            goto switchD_14326c2d9_default;
          }
          fStack_29c = 0.0;
          puVar7 = local_1a8;
          fStack_2a4 = 0.0;
          fStack_2a0 = 0.0;
          fStack_28c = 0.0;
          fStack_294 = 0.0;
          fStack_290 = 0.0;
          fStack_284 = 0.0;
          fStack_280 = 0.0;
          fStack_27c = 0.0;
LAB_14326c8f3:
          physx::Ext::InertiaTensorComputer::transform(&local_2a8,puVar7);
switchD_14326c2d9_default:
          if (param_3 == (float *)0x0) {
            fVar13 = local_278;
            fVar15 = local_2a8;
            fVar17 = fStack_2a4;
            fVar19 = fStack_2a0;
            fVar21 = fStack_29c;
            fVar23 = local_298;
            fVar22 = fStack_294;
            fVar20 = fStack_290;
            fVar18 = fStack_28c;
            fVar16 = local_288;
            if (param_1 != '\0') {
              fVar13 = fVar25 / local_278;
              fVar15 = local_2a8 * fVar13;
              fVar17 = fStack_2a4 * fVar13;
              fVar19 = fStack_2a0 * fVar13;
              fVar21 = fStack_29c * fVar13;
              fVar23 = local_298 * fVar13;
              fVar22 = fStack_294 * fVar13;
              fVar20 = fStack_290 * fVar13;
              fVar18 = fStack_28c * fVar13;
              fVar16 = local_288 * fVar13;
              fVar13 = local_278 * fVar13;
            }
          }
          else {
            fVar13 = local_278 * fVar25;
            fVar15 = local_2a8 * fVar25;
            fVar17 = fStack_2a4 * fVar25;
            fVar19 = fStack_2a0 * fVar25;
            fVar21 = fStack_29c * fVar25;
            fVar23 = local_298 * fVar25;
            fVar22 = fStack_294 * fVar25;
            fVar20 = fStack_290 * fVar25;
            fVar18 = fStack_28c * fVar25;
            fVar16 = local_288 * fVar25;
          }
          local_24c = fVar13 + local_res18;
          uVar10 = (ulonglong)((uint)uVar10 + 1);
          fVar14 = 1.0 / local_24c;
          local_258 = fVar14 * (local_res18 * local_258 + fVar13 * fStack_284);
          local_25c = fVar14 * (local_res18 * local_25c + fVar13 * fStack_280);
          local_268 = local_268 + fVar15;
          local_260 = fVar14 * (local_res18 * local_260 + fVar13 * fStack_27c);
          fVar16 = local_22c + fVar16;
          local_250 = local_250 + fVar21;
          fVar22 = local_238 + fVar22;
          local_26c = local_26c + fVar17;
          fVar18 = local_230 + fVar18;
          local_270 = local_270 + fVar19;
          fVar20 = local_234 + fVar20;
          local_254 = local_254 + fVar23;
          local_res18 = local_24c;
          local_238 = fVar22;
          local_234 = fVar20;
          local_230 = fVar18;
          local_22c = fVar16;
        }
        uVar2 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar2;
      } while (uVar2 < local_e8);
      fVar13 = local_260;
      fVar15 = local_25c;
      fVar17 = local_254;
      fVar19 = local_250;
      fVar21 = local_258;
      fVar23 = local_270;
      fVar14 = local_26c;
      fVar24 = local_268;
      if ((((int)uVar10 != 0) && (local_res20 != (float *)0x0)) && (param_1 == '\0')) {
        fVar25 = fVar25 / local_res18;
        local_res18 = local_res18 * fVar25;
        fVar17 = local_254 * fVar25;
        fVar19 = local_250 * fVar25;
        fVar16 = fVar16 * fVar25;
        fVar18 = fVar18 * fVar25;
        fVar20 = fVar20 * fVar25;
        fVar22 = fVar22 * fVar25;
        fVar23 = local_270 * fVar25;
        fVar14 = local_26c * fVar25;
        fVar24 = local_268 * fVar25;
      }
    }
    uVar9 = 1;
    *param_7 = fVar24;
    param_7[1] = fVar14;
    param_7[2] = fVar23;
    param_7[3] = fVar19;
    param_7[4] = fVar17;
    param_7[5] = fVar22;
    param_7[6] = fVar20;
    param_7[7] = fVar18;
    param_7[8] = fVar16;
    param_7[9] = fVar21;
    param_7[10] = fVar15;
    param_7[0xb] = fVar13;
    param_7[0xc] = local_res18;
  }
  else {
    pFVar3 = physx::shdfnd::Foundation::getInstance();
    iVar12 = 0x84;
    pcVar4 = "computeMassAndInertia: Provided mass or density has no valid value";
LAB_14326cbd4:
    physx::shdfnd::Foundation::error
              (pFVar3,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRigidBodyExt.cpp"
               ,iVar12,pcVar4);
    uVar9 = 0;
  }
LAB_14326ccc6:
  puVar7 = local_f0;
  if ((((local_e4 & 0x7fffffff) != 0) && (-1 < (int)local_e4)) &&
     ((local_f0 != local_178 && (local_f0 != (undefined1 *)0x0)))) {
    pPVar8 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar8 + 0x10))(pPVar8,puVar7);
  }
  return uVar9;
}



// FUNCTION 14326cdc0 copy body=585 status=ok
// SIG undefined copy(void)

void physx::shdfnd::
     Array<physx::PxMassProperties,physx::shdfnd::InlineAllocator<832,physx::shdfnd::ReflectionAllocator<physx::PxMassProperties>_>_>
     ::copy(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 < param_2) {
    if (0xcf < (ulonglong)((longlong)param_2 + (0x33 - (longlong)param_1))) {
      puVar2 = param_1 + 0x12;
      puVar1 = param_3 + 0x12;
      do {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = *param_3;
          puVar2[-0x11] = puVar1[-0x11];
          puVar2[-0x10] = puVar1[-0x10];
          puVar2[-0xf] = puVar1[-0xf];
          puVar2[-0xe] = puVar1[-0xe];
          puVar2[-0xd] = puVar1[-0xd];
          puVar2[-0xc] = puVar1[-0xc];
          puVar2[-0xb] = puVar1[-0xb];
          puVar2[-10] = puVar1[-10];
          puVar2[-9] = puVar1[-9];
          puVar2[-8] = puVar1[-8];
          puVar2[-7] = puVar1[-7];
          puVar2[-6] = puVar1[-6];
        }
        if (puVar2 + -5 != (undefined4 *)0x0) {
          puVar2[-5] = puVar1[-5];
          puVar2[-4] = puVar1[-4];
          puVar2[-3] = puVar1[-3];
          puVar2[-2] = puVar1[-2];
          puVar2[-1] = puVar1[-1];
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2[2] = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[4] = puVar1[4];
          puVar2[5] = puVar1[5];
          puVar2[6] = puVar1[6];
          puVar2[7] = puVar1[7];
        }
        if (puVar2 + 8 != (undefined4 *)0x0) {
          puVar2[8] = puVar1[8];
          puVar2[9] = puVar1[9];
          puVar2[10] = puVar1[10];
          puVar2[0xb] = puVar1[0xb];
          puVar2[0xc] = puVar1[0xc];
          puVar2[0xd] = puVar1[0xd];
          puVar2[0xe] = puVar1[0xe];
          puVar2[0xf] = puVar1[0xf];
          puVar2[0x10] = puVar1[0x10];
          puVar2[0x11] = puVar1[0x11];
          puVar2[0x12] = puVar1[0x12];
          puVar2[0x13] = puVar1[0x13];
          puVar2[0x14] = puVar1[0x14];
        }
        if (puVar2 + 0x15 != (undefined4 *)0x0) {
          puVar2[0x15] = puVar1[0x15];
          puVar2[0x16] = puVar1[0x16];
          puVar2[0x17] = puVar1[0x17];
          puVar2[0x18] = puVar1[0x18];
          puVar2[0x19] = puVar1[0x19];
          puVar2[0x1a] = puVar1[0x1a];
          puVar2[0x1b] = puVar1[0x1b];
          puVar2[0x1c] = puVar1[0x1c];
          puVar2[0x1d] = puVar1[0x1d];
          puVar2[0x1e] = puVar1[0x1e];
          puVar2[0x1f] = puVar1[0x1f];
          puVar2[0x20] = puVar1[0x20];
          puVar2[0x21] = puVar1[0x21];
        }
        param_3 = param_3 + 0x34;
        puVar1 = puVar1 + 0x34;
        param_1 = param_1 + 0x34;
        puVar2 = puVar2 + 0x34;
      } while (param_1 < param_2 + -0x27);
    }
    if (param_1 < param_2) {
      puVar2 = param_1 + 5;
      puVar1 = param_3 + 5;
      do {
        puVar3 = (undefined4 *)((longlong)param_1 + (-0x14 - (longlong)param_3) + (longlong)puVar1);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = puVar1[-5];
          puVar2[-4] = puVar1[-4];
          puVar2[-3] = puVar1[-3];
          puVar2[-2] = puVar1[-2];
          puVar2[-1] = puVar1[-1];
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2[2] = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[4] = puVar1[4];
          puVar2[5] = puVar1[5];
          puVar2[6] = puVar1[6];
          puVar2[7] = puVar1[7];
        }
        puVar1 = puVar1 + 0xd;
        puVar2 = puVar2 + 0xd;
      } while ((undefined4 *)((longlong)param_1 + (-0x14 - (longlong)param_3) + (longlong)puVar1) <
               param_2);
    }
  }
  return;
}



// FUNCTION 14326d010 copy body=405 status=ok
// SIG undefined copy(void)

void physx::shdfnd::
     Array<physx::PxTransform,physx::shdfnd::InlineAllocator<448,physx::shdfnd::ReflectionAllocator<physx::PxTransform>_>_>
     ::copy(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 < param_2) {
    if (0x6f < (ulonglong)((longlong)param_2 + (0x1b - (longlong)param_1))) {
      puVar1 = param_3 + 6;
      puVar2 = param_1 + 0xd;
      do {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = *param_3;
          puVar2[-0xc] = puVar1[-5];
          puVar2[-0xb] = puVar1[-4];
          puVar2[-10] = puVar1[-3];
          puVar2[-9] = puVar1[-2];
          puVar2[-8] = puVar1[-1];
          puVar2[-7] = *puVar1;
        }
        if (puVar2 + -6 != (undefined4 *)0x0) {
          puVar2[-6] = puVar1[1];
          puVar2[-5] = puVar1[2];
          puVar2[-4] = puVar1[3];
          puVar2[-3] = puVar1[4];
          puVar2[-2] = puVar1[5];
          puVar2[-1] = puVar1[6];
          *puVar2 = puVar1[7];
        }
        if (puVar2 + 1 != (undefined4 *)0x0) {
          puVar2[1] = puVar1[8];
          puVar2[2] = puVar1[9];
          puVar2[3] = puVar1[10];
          puVar2[4] = puVar1[0xb];
          puVar2[5] = puVar1[0xc];
          puVar2[6] = puVar1[0xd];
          puVar2[7] = puVar1[0xe];
        }
        if (puVar2 + 8 != (undefined4 *)0x0) {
          puVar2[8] = puVar1[0xf];
          puVar2[9] = puVar1[0x10];
          puVar2[10] = puVar1[0x11];
          puVar2[0xb] = puVar1[0x12];
          puVar2[0xc] = puVar1[0x13];
          puVar2[0xd] = puVar1[0x14];
          puVar2[0xe] = puVar1[0x15];
        }
        param_3 = param_3 + 0x1c;
        puVar1 = puVar1 + 0x1c;
        param_1 = param_1 + 0x1c;
        puVar2 = puVar2 + 0x1c;
      } while (param_1 < param_2 + -0x15);
    }
    if (param_1 < param_2) {
      puVar2 = param_1 + 6;
      puVar1 = param_3 + 6;
      do {
        puVar3 = (undefined4 *)((longlong)puVar1 + (longlong)param_1 + (-0x18 - (longlong)param_3));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = puVar1[-6];
          puVar2[-5] = puVar1[-5];
          puVar2[-4] = puVar1[-4];
          puVar2[-3] = puVar1[-3];
          puVar2[-2] = puVar1[-2];
          puVar2[-1] = puVar1[-1];
          *puVar2 = *puVar1;
        }
        puVar2 = puVar2 + 7;
        puVar3 = (undefined4 *)((longlong)puVar1 + (longlong)param_1 + (4 - (longlong)param_3));
        puVar1 = puVar1 + 7;
      } while (puVar3 < param_2);
    }
  }
  return;
}



// FUNCTION 14326d1b0 getVelocityAtPosInternal body=201 status=ok
// SIG undefined getVelocityAtPosInternal(void)

float * getVelocityAtPosInternal(float *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined1 local_38 [48];
  
  (**(code **)(*param_2 + 0x128))(param_2,param_1);
  pfVar7 = (float *)(**(code **)(*param_2 + 0x138))(param_2,local_38);
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  fVar3 = *param_3;
  fVar4 = *pfVar7;
  fVar5 = pfVar7[2];
  fVar6 = pfVar7[1];
  *param_1 = (fVar1 * pfVar7[1] - fVar2 * pfVar7[2]) + *param_1;
  param_1[2] = (fVar4 * fVar2 - fVar3 * fVar6) + param_1[2];
  param_1[1] = (fVar3 * fVar5 - fVar4 * fVar1) + param_1[1];
  return param_1;
}



// FUNCTION 14326d280 growAndPushBack body=360 status=ok
// SIG undefined growAndPushBack(void)

longlong physx::shdfnd::
         Array<physx::PxMassProperties,physx::shdfnd::InlineAllocator<832,physx::shdfnd::ReflectionAllocator<physx::PxMassProperties>_>_>
         ::growAndPushBack(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  PxAllocatorCallback *pPVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 0x354) & 0x7fffffff) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = *(uint *)(param_1 + 0x354) * 2;
    if (iVar6 == 0) {
      lVar3 = 0;
      goto LAB_14326d2ed;
    }
  }
  if ((*(char *)(param_1 + 0x340) == '\0') && ((uint)(iVar6 * 0x34) < 0x341)) {
    *(undefined1 *)(param_1 + 0x340) = 1;
    lVar3 = param_1;
  }
  else {
    lVar3 = ReflectionAllocator<physx::PxMassProperties>::allocate
                      (param_1,iVar6 * 0x34,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                       ,0x25d);
  }
LAB_14326d2ed:
  copy(lVar3,(ulonglong)*(uint *)(param_1 + 0x350) * 0x34 + lVar3,*(undefined8 *)(param_1 + 0x348));
  puVar5 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 0x350) * 0x34 + lVar3);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_2;
    puVar5[1] = param_2[1];
    puVar5[2] = param_2[2];
    puVar5[3] = param_2[3];
    puVar5[4] = param_2[4];
    puVar5[5] = param_2[5];
    puVar5[6] = param_2[6];
    puVar5[7] = param_2[7];
    puVar5[8] = param_2[8];
    puVar5[9] = param_2[9];
    puVar5[10] = param_2[10];
    puVar5[0xb] = param_2[0xb];
    puVar5[0xc] = param_2[0xc];
  }
  if (-1 < *(int *)(param_1 + 0x354)) {
    lVar2 = *(longlong *)(param_1 + 0x348);
    if (lVar2 == param_1) {
      *(undefined1 *)(param_1 + 0x340) = 0;
    }
    else if (lVar2 != 0) {
      pPVar4 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar2);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x350);
  *(int *)(param_1 + 0x354) = iVar6;
  *(longlong *)(param_1 + 0x348) = lVar3;
  *(uint *)(param_1 + 0x350) = uVar1 + 1;
  return (ulonglong)uVar1 * 0x34 + lVar3;
}



// FUNCTION 14326d3f0 growAndPushBack body=318 status=ok
// SIG undefined growAndPushBack(void)

longlong physx::shdfnd::
         Array<physx::PxTransform,physx::shdfnd::InlineAllocator<448,physx::shdfnd::ReflectionAllocator<physx::PxTransform>_>_>
         ::growAndPushBack(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  PxAllocatorCallback *pPVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 0x1d4) & 0x7fffffff) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = *(uint *)(param_1 + 0x1d4) * 2;
    if (iVar6 == 0) {
      lVar3 = 0;
      goto LAB_14326d45d;
    }
  }
  if ((*(char *)(param_1 + 0x1c0) == '\0') && ((uint)(iVar6 * 0x1c) < 0x1c1)) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    lVar3 = param_1;
  }
  else {
    lVar3 = ReflectionAllocator<physx::PxTransform>::allocate
                      (param_1,iVar6 * 0x1c,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                       ,0x25d);
  }
LAB_14326d45d:
  copy(lVar3,(ulonglong)*(uint *)(param_1 + 0x1d0) * 0x1c + lVar3,*(undefined8 *)(param_1 + 0x1c8));
  puVar5 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 0x1d0) * 0x1c + lVar3);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_2;
    puVar5[1] = param_2[1];
    puVar5[2] = param_2[2];
    puVar5[3] = param_2[3];
    puVar5[4] = param_2[4];
    puVar5[5] = param_2[5];
    puVar5[6] = param_2[6];
  }
  if (-1 < *(int *)(param_1 + 0x1d4)) {
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    if (lVar2 == param_1) {
      *(undefined1 *)(param_1 + 0x1c0) = 0;
    }
    else if (lVar2 != 0) {
      pPVar4 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar2);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x1d0);
  *(int *)(param_1 + 0x1d4) = iVar6;
  *(longlong *)(param_1 + 0x1c8) = lVar3;
  *(uint *)(param_1 + 0x1d0) = uVar1 + 1;
  return (ulonglong)uVar1 * 0x1c + lVar3;
}



// FUNCTION 14326d530 recreate body=221 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxShape_*___ptr64,physx::shdfnd::InlineAllocator<128,physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x80) == '\0') && ((uint)(param_2 * 8) < 0x81)) {
    *(undefined1 *)((longlong)param_1 + 0x80) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxShape_*___ptr64>::allocate
                             (param_1,param_2 * 8,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x90) * 8)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x88),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x90) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x94)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x88);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x80) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x94) = param_2;
  *(void **)((longlong)param_1 + 0x88) = _Dst;
  return;
}



// FUNCTION 14326d610 recreate body=203 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxMassProperties,physx::shdfnd::InlineAllocator<832,physx::shdfnd::ReflectionAllocator<physx::PxMassProperties>_>_>
     ::recreate(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  PxAllocatorCallback *pPVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else if ((*(char *)(param_1 + 0x340) == '\0') && ((uint)(param_2 * 0x34) < 0x341)) {
    *(undefined1 *)(param_1 + 0x340) = 1;
    lVar2 = param_1;
  }
  else {
    lVar2 = ReflectionAllocator<physx::PxMassProperties>::allocate
                      (param_1,param_2 * 0x34,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                       ,0x25d);
  }
  copy(lVar2,(ulonglong)*(uint *)(param_1 + 0x350) * 0x34 + lVar2,*(undefined8 *)(param_1 + 0x348));
  if (-1 < *(int *)(param_1 + 0x354)) {
    lVar1 = *(longlong *)(param_1 + 0x348);
    if (lVar1 == param_1) {
      *(undefined1 *)(param_1 + 0x340) = 0;
    }
    else if (lVar1 != 0) {
      pPVar3 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
    }
  }
  *(int *)(param_1 + 0x354) = param_2;
  *(longlong *)(param_1 + 0x348) = lVar2;
  return;
}



// FUNCTION 14326d6e0 recreate body=203 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxTransform,physx::shdfnd::InlineAllocator<448,physx::shdfnd::ReflectionAllocator<physx::PxTransform>_>_>
     ::recreate(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  PxAllocatorCallback *pPVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else if ((*(char *)(param_1 + 0x1c0) == '\0') && ((uint)(param_2 * 0x1c) < 0x1c1)) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    lVar2 = param_1;
  }
  else {
    lVar2 = ReflectionAllocator<physx::PxTransform>::allocate
                      (param_1,param_2 * 0x1c,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                       ,0x25d);
  }
  copy(lVar2,(ulonglong)*(uint *)(param_1 + 0x1d0) * 0x1c + lVar2,*(undefined8 *)(param_1 + 0x1c8));
  if (-1 < *(int *)(param_1 + 0x1d4)) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == param_1) {
      *(undefined1 *)(param_1 + 0x1c0) = 0;
    }
    else if (lVar1 != 0) {
      pPVar3 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
    }
  }
  *(int *)(param_1 + 0x1d4) = param_2;
  *(longlong *)(param_1 + 0x1c8) = lVar2;
  return;
}



// FUNCTION 14326d7b0 resize body=142 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxShape_*___ptr64,physx::shdfnd::InlineAllocator<128,physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)(param_1 + 0x94) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)*(uint *)(param_1 + 0x90) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x90) = param_2;
  return;
}



// FUNCTION 14326d840 rotate body=1072 status=ok
// SIG undefined rotate(void)

void physx::Ext::InertiaTensorComputer::rotate(float *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = param_1[7];
  fVar2 = param_1[6];
  fVar3 = param_2[8];
  fVar4 = param_2[5];
  fVar5 = param_2[2];
  fVar6 = param_1[8];
  fVar7 = param_2[7];
  fVar8 = param_1[2];
  fVar12 = fVar6 * param_2[6] + fVar2 * *param_2 + fVar1 * param_2[3];
  fVar9 = param_1[4];
  fVar14 = fVar6 * fVar7 + fVar2 * param_2[1] + fVar1 * param_2[4];
  fVar16 = fVar6 * fVar3 + fVar2 * fVar5 + fVar1 * fVar4;
  fVar1 = param_1[3];
  fVar2 = param_1[5];
  fVar13 = fVar2 * param_2[6] + fVar1 * *param_2 + fVar9 * param_2[3];
  fVar6 = param_1[1];
  fVar15 = fVar2 * fVar7 + fVar1 * param_2[1] + fVar9 * param_2[4];
  fVar17 = fVar2 * fVar3 + fVar1 * fVar5 + fVar9 * fVar4;
  fVar1 = *param_1;
  fVar19 = fVar8 * param_2[6] + fVar1 * *param_2 + fVar6 * param_2[3];
  fVar18 = fVar8 * fVar7 + fVar1 * param_2[1] + fVar6 * param_2[4];
  fVar20 = fVar8 * fVar3 + fVar1 * fVar5 + fVar6 * fVar4;
  fVar1 = param_2[4];
  fVar2 = param_2[1];
  fVar6 = param_2[1];
  fVar8 = param_2[1];
  fVar9 = param_2[6];
  fVar10 = param_2[3];
  fVar11 = *param_2;
  *param_1 = fVar19 * fVar11 + fVar13 * fVar10 + fVar12 * fVar9;
  param_1[1] = fVar18 * fVar11 + fVar15 * fVar10 + fVar14 * fVar9;
  param_1[2] = fVar20 * fVar11 + fVar17 * fVar10 + fVar16 * fVar9;
  param_1[4] = fVar18 * fVar2 + fVar15 * fVar1 + fVar14 * fVar7;
  param_1[5] = fVar20 * fVar8 + fVar17 * fVar1 + fVar16 * fVar7;
  param_1[3] = fVar19 * fVar6 + fVar13 * fVar1 + fVar12 * fVar7;
  param_1[6] = fVar19 * fVar5 + fVar13 * fVar4 + fVar12 * fVar3;
  param_1[7] = fVar18 * fVar5 + fVar15 * fVar4 + fVar14 * fVar3;
  param_1[8] = fVar20 * fVar5 + fVar17 * fVar4 + fVar16 * fVar3;
  fVar1 = param_1[0xb];
  fVar2 = param_1[10];
  fVar3 = param_1[9];
  fVar4 = param_2[7];
  fVar5 = param_2[8];
  fVar6 = param_2[4];
  fVar7 = param_2[1];
  fVar8 = param_2[5];
  fVar9 = param_2[2];
  param_1[9] = fVar1 * param_2[6] + fVar3 * *param_2 + fVar2 * param_2[3];
  param_1[10] = fVar1 * fVar4 + fVar3 * fVar7 + fVar2 * fVar6;
  param_1[0xb] = fVar1 * fVar5 + fVar3 * fVar9 + fVar2 * fVar8;
  return;
}



// FUNCTION 14326dc70 setMassAndUpdateInertia body=644 status=ok
// SIG undefined setMassAndUpdateInertia(void)

undefined1
setMassAndUpdateInertia
          (undefined8 param_1,longlong *param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
          undefined1 param_6)

{
  char cVar1;
  Foundation *this;
  char *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_res10 [2];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  
  uVar5 = 0x3f800000;
  local_res10[0] = 0x3f800000;
  local_d8 = 0x3f800000;
  local_d4 = 0x3f800000;
  local_d0 = 0x3f800000;
  local_b8 = 0;
  uStack_b0 = 0x3f80000000000000;
  if (param_5 == (undefined4 *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_c0 = 0;
  }
  else {
    local_c8 = *param_5;
    uStack_c4 = param_5[1];
    local_c0 = param_5[2];
  }
  uVar8 = local_c0;
  uVar7 = uStack_c4;
  uVar6 = local_c8;
  local_e8 = local_c8;
  local_e4 = uStack_c4;
  local_e0 = local_c0;
  if ((param_3 == (undefined4 *)0x0) || (param_4 == 0)) {
    this = physx::shdfnd::Foundation::getInstance();
    iVar4 = 0x162;
    pcVar2 = "%s: No mass specified, setting mass to 1 and inertia to (1,1,1)";
  }
  else {
    local_78 = 0.0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    cVar1 = FUN_14326c030(0,0,0,param_3,param_4,param_6,&local_a8);
    if (cVar1 != '\0') {
      uVar3 = 1;
      if (local_78 != 0.0) {
        cVar1 = computeMassAndDiagInertia
                          (&local_a8,&local_d8,&local_b8,local_res10,&local_e8,
                           param_5 != (undefined4 *)0x0,param_2,
                           "PxRigidBodyExt::setMassAndUpdateInertia");
        uVar5 = local_res10[0];
        uVar6 = local_e8;
        uVar7 = local_e4;
        uVar8 = local_e0;
        uVar3 = 1;
        if (cVar1 == '\0') {
          uVar3 = 0;
        }
      }
      if (param_4 == 1) {
        uVar5 = *param_3;
      }
      goto LAB_14326de70;
    }
    this = physx::shdfnd::Foundation::getInstance();
    iVar4 = 0x15a;
    pcVar2 = "%s: Mass and inertia computation failed, setting mass to 1 and inertia to (1,1,1)";
  }
  physx::shdfnd::Foundation::error
            (this,4,
             "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRigidBodyExt.cpp"
             ,iVar4,pcVar2,"PxRigidBodyExt::setMassAndUpdateInertia");
  uVar3 = 0;
LAB_14326de70:
  (**(code **)(*param_2 + 0xf8))(param_2,uVar5);
  (**(code **)(*param_2 + 0x110))(param_2,&local_d8);
  local_a8 = local_b8;
  uStack_a0 = uStack_b0;
  local_98 = CONCAT44(uVar7,uVar6);
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
  (**(code **)(*param_2 + 0xe8))(param_2,&local_a8);
  return uVar3;
}



// FUNCTION 14326df00 transform body=378 status=ok
// SIG undefined transform(void)

void physx::Ext::InertiaTensorComputer::transform(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = param_2[3];
  local_ac = (fVar1 + fVar1) * fVar3;
  fVar5 = (fVar1 + fVar1) * fVar1;
  fVar4 = *param_2;
  fVar6 = fVar4 + fVar4;
  fVar7 = fVar2 + fVar2;
  local_b4 = local_ac + fVar6 * fVar2;
  local_ac = fVar6 * fVar2 - local_ac;
  local_b0 = fVar6 * fVar1 - fVar7 * fVar3;
  local_a8 = 1.0 - fVar4 * fVar6;
  local_a0 = fVar7 * fVar3 + fVar6 * fVar1;
  local_9c = fVar7 * fVar1 - fVar6 * fVar3;
  local_a4 = fVar7 * fVar1 + fVar6 * fVar3;
  local_98 = local_a8 - fVar7 * fVar2;
  local_b8 = (1.0 - fVar7 * fVar2) - fVar5;
  local_a8 = local_a8 - fVar5;
  rotate(local_a4,&local_b8);
  translate(param_1,param_2 + 4);
  return;
}



// FUNCTION 14326e080 transformFast body=1054 status=ok
// SIG undefined transformFast(void)

float * physx::PxBounds3::transformFast(float *param_1,float *param_2,float *param_3)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar15 = param_2[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar5 = (param_3[4] - param_3[1]) * 0.5;
  fVar19 = fVar1 + fVar1;
  fVar7 = (param_3[5] - param_3[2]) * 0.5;
  fVar3 = (param_3[3] - *param_3) * 0.5;
  fVar10 = *param_2;
  fVar11 = fVar10 + fVar10;
  fVar4 = (fVar2 + fVar2) * fVar15;
  fVar6 = (fVar2 + fVar2) * fVar2;
  fVar12 = 1.0 - fVar10 * fVar11;
  fVar18 = (*param_3 + param_3[3]) * 0.5 * 2.0;
  fVar16 = (param_3[1] + param_3[4]) * 0.5 * 2.0;
  fVar17 = (param_3[2] + param_3[5]) * 0.5 * 2.0;
  fVar9 = fVar15 * fVar15 - 0.5;
  fVar8 = fVar1 * fVar16 + fVar10 * fVar18 + fVar2 * fVar17;
  fVar14 = (fVar1 * fVar17 - fVar2 * fVar16) * fVar15 + fVar9 * fVar18 + fVar10 * fVar8 + param_2[4]
  ;
  fVar13 = (fVar2 * fVar18 - fVar10 * fVar17) * fVar15 + fVar9 * fVar16 + fVar1 * fVar8 + param_2[5]
  ;
  fVar8 = (fVar10 * fVar16 - fVar1 * fVar18) * fVar15 + fVar9 * fVar17 + fVar2 * fVar8 + param_2[6];
  fVar9 = ABS((fVar11 * fVar1 - fVar4) * fVar5) + ABS(((1.0 - fVar19 * fVar1) - fVar6) * fVar3) +
          ABS((fVar19 * fVar15 + fVar11 * fVar2) * fVar7);
  fVar10 = ABS((fVar12 - fVar6) * fVar5) + ABS((fVar4 + fVar11 * fVar1) * fVar3) +
           ABS((fVar19 * fVar2 - fVar11 * fVar15) * fVar7);
  fVar15 = ABS((fVar19 * fVar2 + fVar11 * fVar15) * fVar5) +
           ABS((fVar11 * fVar2 - fVar19 * fVar15) * fVar3) + ABS((fVar12 - fVar19 * fVar1) * fVar7);
  *param_1 = fVar14 - fVar9;
  param_1[1] = fVar13 - fVar10;
  param_1[2] = fVar8 - fVar15;
  param_1[3] = fVar14 + fVar9;
  param_1[4] = fVar13 + fVar10;
  param_1[5] = fVar8 + fVar15;
  return param_1;
}



// FUNCTION 14326e4a0 transformInertiaTensor body=383 status=ok
// SIG undefined transformInertiaTensor(void)

void physx::Cm::transformInertiaTensor(float *param_1,float *param_2,float *param_3)

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
  float fVar12;
  
  fVar12 = param_1[1];
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_2[7];
  fVar8 = param_2[8];
  fVar4 = param_2[4];
  fVar11 = *param_2 * fVar2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar9 = fVar1 * param_2[6];
  fVar10 = param_2[3] * fVar12;
  fVar7 = param_2[5];
  *param_3 = param_2[3] * fVar10 + *param_2 * fVar11 + param_2[6] * fVar9;
  param_3[4] = fVar2 * fVar5 * param_2[1] + fVar12 * fVar4 * param_2[4] + fVar1 * fVar3 * param_2[7]
  ;
  param_3[8] = fVar2 * fVar6 * param_2[2] + fVar12 * fVar7 * param_2[5] + fVar1 * fVar8 * param_2[8]
  ;
  fVar8 = fVar11 * param_2[1] + fVar10 * param_2[4] + fVar9 * param_2[7];
  param_3[1] = fVar8;
  param_3[3] = fVar8;
  fVar8 = fVar11 * param_2[2] + fVar10 * param_2[5] + fVar9 * param_2[8];
  param_3[2] = fVar8;
  param_3[6] = fVar8;
  fVar12 = fVar2 * fVar5 * param_2[2] + fVar12 * fVar4 * param_2[5] + fVar1 * fVar3 * param_2[8];
  param_3[5] = fVar12;
  param_3[7] = fVar12;
  return;
}



// FUNCTION 14326e620 updateMassAndInertia body=528 status=ok
// SIG undefined updateMassAndInertia(void)

undefined1
updateMassAndInertia
          (undefined8 param_1,longlong *param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  Foundation *this;
  char *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffff50;
  undefined7 uVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  
  local_res10[0] = 0x3f800000;
  local_88 = 0x3f800000;
  local_84 = 0x3f800000;
  local_80 = 0x3f800000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  if (param_5 == (undefined4 *)0x0) {
    local_78 = 0;
    uStack_74 = 0;
    local_70 = 0;
  }
  else {
    local_78 = *param_5;
    uStack_74 = param_5[1];
    local_70 = param_5[2];
  }
  local_98 = local_78;
  local_90 = local_70;
  local_94 = uStack_74;
  if ((param_3 == 0) || (param_4 == 0)) {
    this = physx::shdfnd::Foundation::getInstance();
    iVar4 = 0x124;
    pcVar2 = "%s: No density specified, setting mass to 1 and inertia to (1,1,1)";
LAB_14326e7a2:
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRigidBodyExt.cpp"
               ,iVar4,pcVar2,"PxRigidBodyExt::updateMassAndInertia");
  }
  else {
    local_28 = 0.0;
    uVar5 = (undefined7)((ulonglong)in_stack_ffffffffffffff50 >> 8);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    cVar1 = FUN_14326c030();
    if (cVar1 == '\0') {
      this = physx::shdfnd::Foundation::getInstance();
      iVar4 = 0x11c;
      pcVar2 = "%s: Mass and inertia computation failed, setting mass to 1 and inertia to (1,1,1)";
      goto LAB_14326e7a2;
    }
    if (local_28 != 0.0) {
      cVar1 = computeMassAndDiagInertia
                        (&local_58,&local_88,&local_68,local_res10,&local_98,
                         CONCAT71(uVar5,param_5 != (undefined4 *)0x0),param_2,
                         "PxRigidBodyExt::updateMassAndInertia");
      if (cVar1 != '\0') {
        uVar3 = 1;
        goto LAB_14326e7bb;
      }
    }
  }
  uVar3 = 0;
LAB_14326e7bb:
  (**(code **)(*param_2 + 0xf8))(param_2,local_res10[0]);
  (**(code **)(*param_2 + 0x110))(param_2,&local_88);
  local_58 = local_68;
  uStack_50 = uStack_60;
  uStack_40 = CONCAT44(uStack_40._4_4_,local_90);
  local_48 = CONCAT44(local_94,local_98);
  (**(code **)(*param_2 + 0xe8))(param_2,&local_58);
  return uVar3;
}



// FUNCTION 14326e830 PxD6JointCreate body=291 status=ok
// SIG undefined PxD6JointCreate(void)

longlong *
physx::PxD6JointCreate
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a4f0,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x78,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtD6Joint.cpp"
                     ,CONCAT44(uVar8,0x36));
  plVar3 = (longlong *)0x0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar3 = (longlong *)Ext::D6Joint::D6Joint(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  plVar7 = plVar3 + 3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_4,plVar7,&PTR_D6JointSolverPrep_1467c8ad0,
                     CONCAT44(uVar9,400));
  plVar3[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 14326e960 exportExtraData body=80 status=ok
// SIG undefined exportExtraData(void)

void physx::Ext::D6Joint::exportExtraData(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x68),400);
  }
                    /* WARNING: Could not recover jumptable at 0x00014326e9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14326ea10 FUN_14326ea10 body=45 status=ok
// SIG undefined FUN_14326ea10(void)

void FUN_14326ea10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x18,
                     &PTR_D6JointSolverPrep_1467c8ad0);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



// FUNCTION 14326ea50 createObject body=155 status=ok
// SIG undefined createObject(void)

uint * physx::Ext::D6Joint::createObject(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  puVar6 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    *(undefined2 *)((longlong)puVar5 + 10) = 2;
    *(undefined ***)puVar5 = &PTR_LAB_145af15f0;
    *(undefined ***)(puVar5 + 6) = &PTR_prepareData_145af1790;
    puVar6 = puVar5;
  }
  *param_1 = *param_1 + 0x78;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar4 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar4 + 400;
    *(ulonglong *)(puVar6 + 0x1a) = uVar4;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  puVar5 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar5 = puVar2;
  }
  *(uint **)(puVar6 + 8) = puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar3 = resolveConstraintPtr
                    (param_2,*(undefined8 *)(puVar6 + 0x18),puVar6 + 6,
                     &PTR_D6JointSolverPrep_1467c8ad0);
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  return puVar6;
}



// FUNCTION 14326eb00 D6Joint body=650 status=ok
// SIG undefined D6Joint(void)

undefined8 *
physx::Ext::D6Joint::D6Joint
          (undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  PxAllocatorCallback *pPVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  *(undefined4 *)(param_1 + 1) = 0x30105;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_145af15f0;
  param_1[0xc] = 0;
  param_1[3] = &PTR_prepareData_145af1790;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  pPVar2 = physx::shdfnd::getAllocator();
  lVar3 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,400,"NonTrackedAlloc",
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtD6Joint.cpp"
                     ,CONCAT44(uVar4,0x47));
  param_1[0xd] = lVar3;
  Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
            (param_1,lVar3,param_3,param_4,param_5,param_6);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0x3f00000000000000;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0x3fc90fdb3dcccccd;
  *(undefined8 *)(lVar3 + 0x9c) = 0x3f00000000000000;
  *(undefined8 *)(lVar3 + 0xa4) = 0;
  *(undefined4 *)(lVar3 + 0x98) = 0xbfc90fdb;
  *(undefined8 *)(lVar3 + 0xac) = 0x3fc90fdb3dcccccd;
  *(undefined4 *)(lVar3 + 0xb4) = 0x3fc90fdb;
  fVar1 = *param_2;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(ulonglong *)(lVar3 + 0x78) = CONCAT44(0x7f7fffff,fVar1 * 0.01);
  *(float *)(lVar3 + 0x17c) = *param_2 * 1e-06;
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  *(undefined8 *)(lVar3 + 200) = 0;
  *(undefined8 *)(lVar3 + 0xc0) = 0x7f7fffff;
  *(undefined8 *)(lVar3 + 0xd0) = 0x7f7fffff;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  *(undefined8 *)(lVar3 + 0xe0) = 0x7f7fffff;
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  *(undefined8 *)(lVar3 + 0xf0) = 0x7f7fffff;
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  *(undefined8 *)(lVar3 + 0x100) = 0x7f7fffff;
  *(undefined8 *)(lVar3 + 0x108) = 0;
  *(undefined8 *)(lVar3 + 0x110) = 0x7f7fffff;
  *(undefined8 *)(lVar3 + 0x118) = 0;
  *(undefined4 *)(lVar3 + 0x120) = 0;
  *(undefined8 *)(lVar3 + 0x124) = 0x3f800000;
  *(undefined8 *)(lVar3 + 300) = 0;
  *(undefined8 *)(lVar3 + 0x134) = 0;
  *(undefined8 *)(lVar3 + 0x13c) = 0;
  *(undefined8 *)(lVar3 + 0x144) = 0;
  *(undefined4 *)(lVar3 + 0x180) = 0x501502f9;
  *(undefined4 *)(lVar3 + 0x184) = 0x40490fdb;
  return param_1;
}



// FUNCTION 14326ed90 getTwist body=202 status=ok
// SIG undefined getTwist(void)

float physx::Ext::D6Joint::getTwist(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x48))(param_1,&local_28);
  fVar2 = *pfVar1;
  fStack_1c = pfVar1[3];
  if (fVar2 == 0.0) {
    local_28 = 0;
    fStack_20 = 0.0;
    fStack_1c = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fStack_1c * fStack_1c + fVar2 * fVar2);
    fStack_1c = fStack_1c * fVar3;
    fStack_20 = fVar3 * 0.0;
    local_28 = CONCAT44(fStack_20,fVar3 * fVar2);
  }
  fVar2 = fStack_1c;
  if ((float)local_28 < 0.0) {
    fVar2 = -fStack_1c;
  }
  if (fVar2 <= -1.0) {
    fVar2 = -1.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  fVar2 = ::_guard_xfg_dispatch_icall_nop(fVar2);
  fVar2 = fVar2 * 2.0;
  if (3.1415927 <= fVar2) {
    fVar2 = fVar2 - 6.2831855;
  }
  return fVar2;
}



// FUNCTION 14326ee60 getSwingYAngle body=393 status=ok
// SIG undefined getSwingYAngle(void)

float physx::Ext::D6Joint::getSwingYAngle(longlong *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float _Y;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,&local_98);
  fVar3 = *pfVar2;
  fVar1 = pfVar2[3];
  if (fVar3 == 0.0) {
    local_98 = 0.0;
    fStack_94 = 0.0;
    fStack_8c = 1.0;
  }
  else {
    fStack_8c = 1.0 / SQRT(fVar1 * fVar1 + fVar3 * fVar3);
    fStack_94 = fStack_8c * 0.0;
    local_98 = fStack_8c * fVar3;
    fStack_8c = fVar1 * fStack_8c;
  }
  _Y = (-fStack_94 * fVar1 + fStack_8c * pfVar2[1] + -local_98 * pfVar2[2]) - -fStack_94 * fVar3;
  fVar3 = ((fStack_8c * fVar1 - -local_98 * fVar3) - -fStack_94 * pfVar2[1]) -
          -fStack_94 * pfVar2[2];
  if (fVar3 < 0.0) {
    _Y = -_Y;
    fVar3 = -fVar3;
  }
  fStack_90 = fStack_94;
  fVar3 = ::_guard_xfg_dispatch_icall_nop(_Y,fVar3 + 1.0);
  return fVar3 * 4.0;
}



// FUNCTION 14326eff0 getSwingZAngle body=393 status=ok
// SIG undefined getSwingZAngle(void)

float physx::Ext::D6Joint::getSwingZAngle(longlong *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float _Y;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,&local_98);
  fVar3 = *pfVar2;
  fVar1 = pfVar2[3];
  if (fVar3 == 0.0) {
    local_98 = 0.0;
    fStack_94 = 0.0;
    fStack_8c = 1.0;
  }
  else {
    fStack_8c = 1.0 / SQRT(fVar1 * fVar1 + fVar3 * fVar3);
    fStack_94 = fStack_8c * 0.0;
    local_98 = fStack_8c * fVar3;
    fStack_8c = fVar1 * fStack_8c;
  }
  _Y = (-fStack_94 * fVar1 + fStack_8c * pfVar2[2] + -fStack_94 * fVar3) - -local_98 * pfVar2[1];
  fVar3 = ((fStack_8c * fVar1 - -local_98 * fVar3) - -fStack_94 * pfVar2[1]) -
          -fStack_94 * pfVar2[2];
  if (fVar3 < 0.0) {
    _Y = -_Y;
    fVar3 = -fVar3;
  }
  fStack_90 = fStack_94;
  fVar3 = ::_guard_xfg_dispatch_icall_nop(_Y,fVar3 + 1.0);
  return fVar3 * 4.0;
}



// FUNCTION 14326f3e0 setDrivePosition body=182 status=ok
// SIG undefined setDrivePosition(void)

void physx::Ext::D6Joint::setDrivePosition(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  lVar8 = *(longlong *)(param_1 + 0x68);
  plVar9 = *(longlong **)(param_1 + 0x60);
  fVar4 = param_2[1];
  fVar5 = param_2[6];
  fVar10 = 1.0 / SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar6 = param_2[4];
  fVar7 = param_2[5];
  *(float *)(lVar8 + 0x118) = fVar1 * fVar10;
  *(float *)(lVar8 + 0x11c) = fVar4 * fVar10;
  *(float *)(lVar8 + 0x120) = fVar2 * fVar10;
  *(float *)(lVar8 + 0x124) = fVar3 * fVar10;
  *(float *)(lVar8 + 0x128) = fVar6;
  *(float *)(lVar8 + 300) = fVar7;
  *(float *)(lVar8 + 0x130) = fVar5;
                    /* WARNING: Could not recover jumptable at 0x00014326f492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x40))();
  return;
}



// FUNCTION 14326f5d0 attach body=94 status=ok
// SIG undefined attach(void)

bool physx::Ext::D6Joint::attach
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = (**(code **)(*param_2 + 0xf0))
                    (param_2,param_3,param_4,lVar1,&PTR_D6JointSolverPrep_1467c8ad0,400);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 14326f640 prepareData body=676 status=ok
// SIG undefined prepareData(void)

undefined8 physx::Ext::D6Joint::prepareData(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x59) != '\0') {
    fVar9 = *(float *)(lVar2 + 0xb0);
    fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar9 * 0.5);
    fVar1 = *(float *)(lVar2 + 0xb4);
    *(float *)(lVar2 + 0x158) = fVar7;
    fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.5);
    fVar7 = *(float *)(lVar2 + 0xac);
    *(float *)(lVar2 + 0x15c) = fVar8;
    fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar7 * 0.5);
    *(float *)(lVar2 + 0x160) = fVar8;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar9 * 0.25);
    *(float *)(lVar2 + 0x164) = fVar9;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar1 * 0.25);
    *(float *)(lVar2 + 0x168) = fVar9;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar7 * 0.25);
    *(float *)(lVar2 + 0x16c) = fVar9;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar2 + 0x98) * 0.25);
    *(float *)(lVar2 + 0x170) = fVar9;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar2 + 0x94) * 0.25);
    *(float *)(lVar2 + 0x174) = fVar9;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar2 + 0x90) * 0.25);
    *(float *)(lVar2 + 0x178) = fVar9;
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    piVar5 = (int *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined4 *)(lVar2 + 0x14c) = 0;
    uVar3 = 1;
    lVar6 = 6;
    do {
      if (*piVar5 == 1) {
        *(uint *)(lVar2 + 0x150) = *(uint *)(lVar2 + 0x150) | uVar3;
      }
      else if (*piVar5 == 0) {
        *(uint *)(lVar2 + 0x14c) = *(uint *)(lVar2 + 0x14c) | uVar3;
      }
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      piVar5 = piVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if ((*(float *)(*(longlong *)(param_1 + 0x50) + 0xb8) != 0.0) ||
       (*(float *)(*(longlong *)(param_1 + 0x50) + 0xbc) != 0.0)) {
      uVar4 = *(undefined4 *)(lVar2 + 0x154);
      if (*(int *)(lVar2 + 0x50) != 0) {
        uVar4 = 1;
      }
      *(undefined4 *)(lVar2 + 0x154) = uVar4;
    }
    if (((*(float *)(*(longlong *)(param_1 + 0x50) + 200) != 0.0) ||
        (*(float *)(*(longlong *)(param_1 + 0x50) + 0xcc) != 0.0)) && (*(int *)(lVar2 + 0x54) != 0))
    {
      *(uint *)(lVar2 + 0x154) = *(uint *)(lVar2 + 0x154) | 2;
    }
    if (((*(float *)(*(longlong *)(param_1 + 0x50) + 0xd8) != 0.0) ||
        (*(float *)(*(longlong *)(param_1 + 0x50) + 0xdc) != 0.0)) && (*(int *)(lVar2 + 0x58) != 0))
    {
      *(uint *)(lVar2 + 0x154) = *(uint *)(lVar2 + 0x154) | 4;
    }
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (((*(float *)(lVar6 + 0x108) != 0.0) || (*(float *)(lVar6 + 0x10c) != 0.0)) &&
       ((*(int *)(lVar2 + 0x60) != 0 &&
        ((*(int *)(lVar2 + 100) != 0 && (*(int *)(lVar2 + 0x5c) != 0)))))) {
      *(uint *)(lVar2 + 0x154) = *(uint *)(lVar2 + 0x154) | 0x20;
      *(undefined1 *)(param_1 + 0x58) = 0;
      return *(undefined8 *)(param_1 + 0x50);
    }
    if (((*(float *)(lVar6 + 0xf8) != 0.0) || (*(float *)(lVar6 + 0xfc) != 0.0)) &&
       (*(int *)(lVar2 + 0x5c) != 0)) {
      *(uint *)(lVar2 + 0x154) = *(uint *)(lVar2 + 0x154) | 0x10;
    }
    if (((*(float *)(*(longlong *)(param_1 + 0x50) + 0xe8) != 0.0) ||
        (*(float *)(*(longlong *)(param_1 + 0x50) + 0xec) != 0.0)) &&
       ((*(int *)(lVar2 + 0x60) != 0 || (*(int *)(lVar2 + 100) != 0)))) {
      *(uint *)(lVar2 + 0x154) = *(uint *)(lVar2 + 0x154) | 8;
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 14326f900 FUN_14326f900 body=299 status=ok
// SIG undefined FUN_14326f900(void)

undefined8 *
FUN_14326f900(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *param_5 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 4:
    *(undefined4 *)param_1 = *param_3;
    *(undefined4 *)((longlong)param_1 + 4) = param_3[1];
    *(undefined4 *)(param_1 + 1) = param_3[2];
    *(undefined4 *)((longlong)param_1 + 0xc) = param_3[3];
    return param_1;
  case 3:
    uStack_10 = 0x3f800000;
    local_18 = 0;
    uStack_14 = 0;
    `anonymous_namespace'::project(param_1,param_3,&local_18,param_5,param_5);
    return param_1;
  case 5:
    uStack_14 = 0x3f800000;
    local_18 = 0;
    uStack_10 = 0;
    `anonymous_namespace'::project(param_1,param_3,&local_18,param_5,param_5);
    return param_1;
  case 6:
    local_18 = 0x3f800000;
    uStack_14 = 0;
    uStack_10 = 0;
    `anonymous_namespace'::project(param_1,param_3,&local_18,param_5,param_5);
    return param_1;
  case 7:
    `anonymous_namespace'::truncate(param_1,param_3,param_4);
    return param_1;
  default:
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
}



// FUNCTION 14326fa60 D6JointProject body=2564 status=ok
// SIG undefined D6JointProject(void)

void `anonymous_namespace'::D6JointProject
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
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
  float local_res8 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  undefined1 local_104 [20];
  undefined1 local_f0 [16];
  float local_e0;
  float local_dc;
  float local_d8;
  
  physx::Ext::joint::computeDerived(param_1,param_2,param_3,&local_178,&local_158,local_f0);
  uVar1 = *(uint *)(param_1 + 0x14c);
  local_130 = local_d8;
  if ((uVar1 & 4) == 0) {
    local_130 = 0.0;
  }
  local_128._4_4_ = local_dc;
  if ((uVar1 & 2) == 0) {
    local_128._4_4_ = 0.0;
  }
  local_128._0_4_ = 0.0;
  if ((uVar1 & 1) != 0) {
    local_128._0_4_ = local_e0;
  }
  fVar9 = *(float *)(param_1 + 0x180);
  local_e0 = local_e0 - (float)local_128;
  local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
  local_dc = local_dc - local_128._4_4_;
  local_d8 = local_d8 - local_130;
  fVar10 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_ +
           local_130 * local_130;
  bVar2 = fVar9 * fVar9 < fVar10;
  if (bVar2) {
    fVar10 = 1.0 / SQRT(fVar10);
    local_128._0_4_ = fVar10 * (float)local_128 * fVar9;
    local_128._4_4_ = fVar10 * local_128._4_4_ * fVar9;
    local_130 = fVar10 * local_130 * fVar9;
  }
  uStack_120 = CONCAT44(uStack_120._4_4_,local_130);
  local_138 = (float)local_128 + local_e0;
  local_134 = local_128._4_4_ + local_dc;
  local_130 = local_130 + local_d8;
  local_118 = local_138;
  local_114 = local_134;
  local_110 = local_130;
  fVar9 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x184) * 0.5);
  pfVar6 = (float *)FUN_14326f900(local_104,uVar1 >> 3,local_f0,fVar9,local_res8);
  local_128 = *(undefined8 *)pfVar6;
  uStack_120 = *(undefined8 *)(pfVar6 + 2);
  if ((bVar2) || (local_res8[0]._0_1_ != '\0')) {
    if (param_4 == '\0') {
      fVar9 = *(float *)(param_1 + 0x14);
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar12 = *(float *)(param_1 + 0x10);
      fVar22 = *(float *)(param_1 + 0x18);
      fVar13 = -*(float *)(param_1 + 0x20) * 2.0;
      fVar11 = -*(float *)(param_1 + 0x24) * 2.0;
      local_res8[0] = fVar10 * fVar10 - 0.5;
      fVar18 = -*(float *)(param_1 + 0x28) * 2.0;
      fVar17 = fVar9 * fVar11 + fVar12 * fVar13 + fVar22 * fVar18;
      fVar15 = -*pfVar6;
      local_178 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000080000000;
      uStack_170 = *(ulonglong *)(param_1 + 0x18) ^ 0x80000000;
      local_168 = (local_res8[0] * fVar13 - (fVar9 * fVar18 - fVar22 * fVar11) * fVar10) +
                  fVar12 * fVar17;
      fVar14 = -pfVar6[1];
      local_128 = CONCAT44(fVar14,fVar15);
      local_164 = (local_res8[0] * fVar11 - (fVar22 * fVar13 - fVar12 * fVar18) * fVar10) +
                  fVar9 * fVar17;
      local_160 = (local_res8[0] * fVar18 - (fVar12 * fVar11 - fVar9 * fVar13) * fVar10) +
                  fVar22 * fVar17;
      fVar9 = pfVar6[3];
      fVar18 = -pfVar6[2];
      fVar22 = (local_168 - local_138) * 2.0;
      fVar17 = (local_160 - local_130) * 2.0;
      fVar12 = fVar9 * fVar9 - 0.5;
      fVar13 = (local_164 - local_134) * 2.0;
      uStack_120 = CONCAT44(fVar9,fVar18);
      fVar10 = fVar14 * fVar13 + fVar15 * fVar22 + fVar18 * fVar17;
      fVar11 = (fVar14 * fVar17 - fVar18 * fVar13) * fVar9 + fVar12 * fVar22 + fVar15 * fVar10;
      fVar16 = (fVar15 * fVar13 - fVar14 * fVar22) * fVar9 + fVar12 * fVar17 + fVar18 * fVar10;
      fVar17 = (fVar18 * fVar22 - fVar15 * fVar17) * fVar9 + fVar12 * fVar13 + fVar14 * fVar10;
      local_108 = local_168;
      puVar7 = (undefined8 *)physx::PxQuat::operator*(&local_128,local_104,&local_178);
      local_178 = *puVar7;
      uStack_170 = puVar7[1];
      fVar13 = fVar11 + fVar11;
      fVar18 = fVar17 + fVar17;
      fVar14 = fVar16 + fVar16;
      fVar12 = uStack_150._4_4_ * uStack_150._4_4_ - 0.5;
      fVar9 = local_158._4_4_ * fVar18 + (float)local_158 * fVar13 + (float)uStack_150 * fVar14;
      fVar10 = local_148 +
               (local_158._4_4_ * fVar14 - (float)uStack_150 * fVar18) * uStack_150._4_4_ +
               fVar12 * fVar13 + (float)local_158 * fVar9;
      fVar22 = ((float)local_158 * fVar18 - local_158._4_4_ * fVar13) * uStack_150._4_4_ +
               fVar12 * fVar14 + (float)uStack_150 * fVar9 + local_140;
      fVar9 = ((float)uStack_150 * fVar13 - (float)local_158 * fVar14) * uStack_150._4_4_ +
              fVar12 * fVar18 + local_158._4_4_ * fVar9 + local_144;
      local_168 = fVar11;
      local_164 = fVar17;
      local_160 = fVar16;
      puVar8 = (undefined4 *)physx::PxQuat::operator*(&local_158,&local_128,&local_178);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *param_2 = *puVar8;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      param_2[4] = fVar10;
      param_2[5] = fVar9;
      param_2[6] = fVar22;
    }
    else {
      fVar9 = *(float *)(param_1 + 0x30);
      fVar10 = *(float *)(param_1 + 0x38);
      fVar12 = *(float *)(param_1 + 0x2c);
      fVar22 = *(float *)(param_1 + 0x34);
      local_158 = *(ulonglong *)(param_1 + 0x2c) ^ 0x8000000080000000;
      fVar13 = -*(float *)(param_1 + 0x44) * 2.0;
      fVar15 = -*(float *)(param_1 + 0x40) * 2.0;
      fVar21 = fVar10 * fVar10 - 0.5;
      fVar16 = -*(float *)(param_1 + 0x3c) * 2.0;
      fVar11 = fVar9 * fVar15 + fVar12 * fVar16 + fVar22 * fVar13;
      uStack_150 = *(ulonglong *)(param_1 + 0x34) ^ 0x80000000;
      local_148 = (fVar21 * fVar16 - (fVar9 * fVar13 - fVar22 * fVar15) * fVar10) + fVar12 * fVar11;
      fVar17 = pfVar6[1];
      fVar20 = local_148 + local_148;
      fVar18 = pfVar6[3];
      fVar14 = fVar18 * fVar18 - 0.5;
      local_144 = (fVar21 * fVar15 - (fVar22 * fVar16 - fVar12 * fVar13) * fVar10) + fVar9 * fVar11;
      fVar19 = local_144 + local_144;
      local_140 = (fVar21 * fVar13 - (fVar12 * fVar15 - fVar9 * fVar16) * fVar10) + fVar22 * fVar11;
      fVar22 = local_140 + local_140;
      fVar9 = *pfVar6;
      fVar10 = pfVar6[2];
      fVar12 = fVar17 * fVar19 + fVar9 * fVar20 + fVar10 * fVar22;
      fVar11 = (fVar17 * fVar22 - fVar10 * fVar19) * fVar18 + fVar14 * fVar20 + fVar9 * fVar12 +
               local_138;
      fVar15 = (fVar9 * fVar19 - fVar17 * fVar20) * fVar18 + fVar14 * fVar22 + fVar10 * fVar12 +
               local_130;
      fVar17 = (fVar10 * fVar20 - fVar9 * fVar22) * fVar18 + fVar14 * fVar19 + fVar17 * fVar12 +
               local_134;
      puVar7 = (undefined8 *)physx::PxQuat::operator*(&local_128,local_104,&local_158);
      local_158 = *puVar7;
      uStack_150 = puVar7[1];
      fVar13 = fVar11 + fVar11;
      fVar12 = uStack_170._4_4_ * uStack_170._4_4_ - 0.5;
      fVar18 = fVar17 + fVar17;
      fVar14 = fVar15 + fVar15;
      fVar9 = local_178._4_4_ * fVar18 + (float)local_178 * fVar13 + (float)uStack_170 * fVar14;
      fVar22 = local_168 +
               (local_178._4_4_ * fVar14 - (float)uStack_170 * fVar18) * uStack_170._4_4_ +
               fVar12 * fVar13 + (float)local_178 * fVar9;
      fVar10 = local_164 +
               ((float)uStack_170 * fVar13 - (float)local_178 * fVar14) * uStack_170._4_4_ +
               fVar12 * fVar18 + local_178._4_4_ * fVar9;
      fVar9 = local_160 +
              ((float)local_178 * fVar18 - local_178._4_4_ * fVar13) * uStack_170._4_4_ +
              fVar12 * fVar14 + (float)uStack_170 * fVar9;
      local_148 = fVar11;
      local_144 = fVar17;
      local_140 = fVar15;
      puVar8 = (undefined4 *)physx::PxQuat::operator*(&local_178,&local_128,&local_158);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *param_3 = *puVar8;
      param_3[1] = uVar3;
      param_3[2] = uVar4;
      param_3[3] = uVar5;
      param_3[4] = fVar22;
      param_3[5] = fVar10;
      param_3[6] = fVar9;
      param_2 = param_3;
    }
    physx::PxQuat::normalize(param_2);
  }
  return;
}



// FUNCTION 143270470 D6JointVisualize body=3471 status=ok
// SIG undefined D6JointVisualize(void)

void `anonymous_namespace'::D6JointVisualize
               (longlong *param_1,longlong param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
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
  float fVar30;
  float fVar31;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_dc [188];
  
  fVar20 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
  fVar26 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x28);
  fVar28 = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x20);
  fVar9 = param_3[3];
  fVar16 = param_3[1];
  fVar31 = *param_3;
  fVar17 = param_3[2];
  fVar22 = fVar9 * fVar9 - 0.5;
  fVar12 = fVar31 * fVar28 + fVar16 * fVar20 + fVar17 * fVar26;
  fVar25 = param_3[4];
  fVar30 = param_3[6];
  fVar8 = param_3[5];
  pfVar2 = (float *)physx::PxQuat::operator*(param_3,&local_128,param_2 + 0x10);
  local_150 = *pfVar2;
  local_14c = pfVar2[1];
  local_148 = pfVar2[2];
  local_144 = pfVar2[3];
  fVar15 = param_4[3];
  fVar24 = param_4[1];
  fVar7 = param_4[2];
  fVar29 = *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c);
  fVar21 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x40);
  fVar27 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x44);
  fVar10 = *param_4;
  fVar23 = fVar15 * fVar15 - 0.5;
  fVar13 = fVar10 * fVar29 + fVar24 * fVar21 + fVar7 * fVar27;
  fVar14 = param_4[4];
  fVar18 = param_4[6];
  fVar19 = param_4[5];
  local_140 = (fVar16 * fVar26 - fVar17 * fVar20) * fVar9 + fVar22 * fVar28 + fVar31 * fVar12 +
              fVar25;
  local_13c = (fVar17 * fVar28 - fVar31 * fVar26) * fVar9 + fVar22 * fVar20 + fVar16 * fVar12 +
              fVar8;
  local_138 = (fVar31 * fVar20 - fVar16 * fVar28) * fVar9 + fVar22 * fVar26 + fVar17 * fVar12 +
              fVar30;
  pfVar2 = (float *)physx::PxQuat::operator*(param_4,&local_128);
  local_108 = *pfVar2;
  local_104 = pfVar2[1];
  local_100 = pfVar2[2];
  local_fc = pfVar2[3];
  local_f8 = (fVar24 * fVar27 - fVar7 * fVar21) * fVar15 + fVar23 * fVar29 + fVar10 * fVar13 +
             fVar14;
  local_f4 = (fVar7 * fVar29 - fVar10 * fVar27) * fVar15 + fVar23 * fVar21 + fVar24 * fVar13 +
             fVar19;
  local_f0 = (fVar10 * fVar21 - fVar24 * fVar29) * fVar15 + fVar23 * fVar27 + fVar7 * fVar13 +
             fVar18;
  (**(code **)(*param_1 + 8))(param_1,&local_150,&local_108);
  fVar17 = local_144;
  fVar31 = local_148;
  fVar16 = local_14c;
  fVar9 = local_150;
  if (local_150 * local_108 + local_14c * local_104 + local_148 * local_100 + local_144 * local_fc <
      0.0) {
    local_108 = -local_108;
    local_104 = -local_104;
    local_fc = -local_fc;
    local_100 = -local_100;
  }
  fVar24 = local_fc;
  fVar15 = local_100;
  fVar8 = local_108;
  uStack_120 = CONCAT44(local_144,local_148) ^ 0x80000000;
  local_128 = CONCAT44(local_14c,local_150) ^ 0x8000000080000000;
  local_130 = local_104;
  pfVar2 = (float *)physx::PxQuat::operator*(&local_128,local_dc,&local_108);
  fVar25 = *pfVar2;
  fVar30 = pfVar2[3];
  if (fVar25 == 0.0) {
    local_128._0_4_ = 0.0;
    local_128._4_4_ = 0.0;
    uStack_120._4_4_ = 1.0;
  }
  else {
    uStack_120._4_4_ = 1.0 / SQRT(fVar30 * fVar30 + fVar25 * fVar25);
    local_128._0_4_ = fVar25 * uStack_120._4_4_;
    local_128._4_4_ = uStack_120._4_4_ * 0.0;
    uStack_120._4_4_ = fVar30 * uStack_120._4_4_;
  }
  fVar14 = -local_128._4_4_;
  fVar18 = -local_128._4_4_;
  fVar10 = -(float)local_128;
  fVar7 = pfVar2[1];
  local_12c = (fVar7 * uStack_120._4_4_ + fVar30 * fVar14 + pfVar2[2] * fVar10) - fVar25 * fVar18;
  fVar12 = (pfVar2[2] * uStack_120._4_4_ + fVar30 * fVar18 + *pfVar2 * fVar14) - fVar7 * fVar10;
  fVar19 = fVar9 + fVar9;
  fVar14 = ((fVar30 * uStack_120._4_4_ - *pfVar2 * fVar10) - fVar7 * fVar14) - pfVar2[2] * fVar18;
  fVar7 = fVar16 + fVar16;
  local_e8 = 1.0 - fVar9 * fVar19;
  local_e4 = local_e8 - fVar31 * (fVar31 + fVar31);
  local_e0 = fVar31 * fVar7 + fVar17 * fVar19;
  local_e8 = local_e8 - fVar16 * fVar7;
  fVar8 = fVar8 + fVar8;
  fVar10 = fVar24 * (fVar15 + fVar15) + local_130 * fVar8;
  fVar24 = fVar15 * fVar8 - fVar24 * (local_130 + local_130);
  fVar15 = (1.0 - local_130 * (local_130 + local_130)) - fVar15 * (fVar15 + fVar15);
  fVar25 = fVar17;
  fVar30 = fVar31;
  fVar8 = fVar16;
  uStack_120._0_4_ = local_128._4_4_;
  if ((*(byte *)(param_2 + 0x150) & 8) != 0) {
    (**(code **)(*param_1 + 0x18))
              (param_1,&local_150,*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x94),
               *(float *)(param_2 + 0x174) + *(float *)(param_2 + 0x16c) <
               ABS((float)local_128 / (uStack_120._4_4_ + 1.0)));
    fVar25 = local_144;
    fVar30 = local_148;
    fVar8 = local_14c;
    fVar9 = local_150;
  }
  fVar20 = local_138;
  fVar13 = local_13c;
  fVar18 = local_140;
  uVar1 = *(uint *)(param_2 + 0x150) >> 5;
  uVar4 = *(uint *)(param_2 + 0x150) >> 4;
  if (((uVar4 & 1) != 0) && ((uVar1 & 1) != 0)) {
    fVar9 = *(float *)(param_2 + 0x16c);
    fVar31 = ABS(fVar12 / (fVar14 + 1.0));
    fVar16 = ABS((-1.0 / (fVar14 + 1.0)) * local_12c);
    fVar31 = ((fVar9 + fVar31) / (1.0 - fVar9 * fVar31)) / *(float *)(param_2 + 0x168);
    fVar9 = ((fVar9 + fVar16) / (1.0 - fVar9 * fVar16)) / *(float *)(param_2 + 0x164);
    (**(code **)(*param_1 + 0x20))
              (param_1,&local_150,*(float *)(param_2 + 0x168),*(float *)(param_2 + 0x164),
               1.0 < fVar9 * fVar9 + fVar31 * fVar31);
    return;
  }
  if (((byte)uVar1 & 1) == ((byte)uVar4 & 1)) {
    return;
  }
  local_164 = 0x3f3504f3;
  local_160 = 0;
  local_170 = 0x80000000;
  local_16c = 0x80000000;
  local_158 = 0.0;
  local_168 = 0xbf3504f3;
  local_118 = 0;
  local_128 = 0x3f3504f300000000;
  uStack_120 = 0x3f3504f300000000;
  local_110 = 0;
  fVar21 = fVar8 * 0.0;
  fVar22 = fVar30 * 0.0;
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x14c) & 0x10) == 0) {
      fVar17 = fVar15 * (fVar16 * fVar19 - fVar17 * (fVar31 + fVar31)) + local_e4 * fVar10 +
               fVar24 * local_e0;
      fVar24 = fVar9 * 0.0;
      fVar31 = fVar24 + fVar21 + fVar22;
      fVar15 = (fVar25 * fVar25 - 0.5) * 0.0;
      fVar16 = (fVar21 - fVar22) * fVar25 + fVar15 + fVar9 * fVar31;
      fVar8 = (fVar22 - fVar24) * fVar25 + fVar15 + fVar8 * fVar31;
      fVar25 = (fVar24 - fVar21) * fVar25 + fVar15 + fVar30 * fVar31;
      puVar3 = (undefined4 *)physx::PxQuat::operator*(&local_150,local_dc,&local_170);
      local_170 = *puVar3;
      local_16c = puVar3[1];
      local_168 = puVar3[2];
      local_164 = puVar3[3];
      fVar9 = *(float *)(param_2 + 0x15c) - *(float *)(param_2 + 0x160);
      uVar11 = *(undefined4 *)(param_2 + 0xb4);
      fVar31 = ABS(fVar17 / ((1.0 - fVar17 * fVar17) + 1.0));
      bVar6 = fVar31 == fVar9;
      bVar5 = fVar31 < fVar9;
      goto LAB_14327118f;
    }
    fVar15 = fVar9 * 0.0;
    fVar31 = fVar15 + fVar21 + fVar22;
    fVar17 = (fVar25 * fVar25 - 0.5) * 0.0;
    fVar16 = (fVar21 - fVar22) * fVar25 + fVar17 + fVar9 * fVar31;
    fVar8 = (fVar22 - fVar15) * fVar25 + fVar17 + fVar8 * fVar31;
    fVar31 = (fVar15 - fVar21) * fVar25 + fVar17 + fVar30 * fVar31;
    puVar3 = (undefined4 *)physx::PxQuat::operator*(&local_150,local_dc,&local_128);
    uVar1 = *(uint *)(param_2 + 0xb4);
    local_170 = *puVar3;
    local_16c = puVar3[1];
    local_168 = puVar3[2];
    fVar9 = *(float *)(param_2 + 0x168) - *(float *)(param_2 + 0x16c);
    local_164 = puVar3[3];
    fVar17 = ABS(fVar12 / (fVar14 + 1.0));
    bVar6 = fVar17 == fVar9;
    bVar5 = fVar17 < fVar9;
  }
  else {
    if ((*(byte *)(param_2 + 0x14c) & 0x20) == 0) {
      fVar14 = fVar9 * 0.0;
      fVar15 = (fVar17 * fVar7 + fVar31 * fVar19) * fVar15 +
               fVar10 * (fVar31 * fVar7 - fVar17 * fVar19) + local_e8 * fVar24;
      fVar31 = fVar14 + fVar21 + fVar22;
      fVar17 = (fVar25 * fVar25 - 0.5) * 0.0;
      fVar16 = (fVar21 - fVar22) * fVar25 + fVar17 + fVar9 * fVar31;
      fVar8 = (fVar22 - fVar14) * fVar25 + fVar17 + fVar8 * fVar31;
      fVar25 = (fVar14 - fVar21) * fVar25 + fVar17 + fVar30 * fVar31;
      puVar3 = (undefined4 *)physx::PxQuat::operator*(&local_150,local_dc,&local_128);
      local_170 = *puVar3;
      local_16c = puVar3[1];
      local_168 = puVar3[2];
      local_164 = puVar3[3];
      fVar9 = *(float *)(param_2 + 0x158) - *(float *)(param_2 + 0x160);
      uVar11 = *(undefined4 *)(param_2 + 0xb0);
      fVar31 = ABS(fVar15 / ((1.0 - fVar15 * fVar15) + 1.0));
      bVar6 = fVar31 == fVar9;
      bVar5 = fVar31 < fVar9;
LAB_14327118f:
      local_158 = fVar25 + fVar20;
      local_160 = CONCAT44(fVar8 + fVar13,fVar18 + fVar16);
      (**(code **)(*param_1 + 0x28))(param_1,&local_170,uVar11,!bVar5 && !bVar6);
      return;
    }
    fVar15 = fVar9 * 0.0;
    fVar31 = fVar15 + fVar21 + fVar22;
    fVar17 = (fVar25 * fVar25 - 0.5) * 0.0;
    fVar16 = (fVar21 - fVar22) * fVar25 + fVar17 + fVar9 * fVar31;
    fVar8 = (fVar22 - fVar15) * fVar25 + fVar17 + fVar8 * fVar31;
    fVar31 = (fVar15 - fVar21) * fVar25 + fVar17 + fVar30 * fVar31;
    puVar3 = (undefined4 *)physx::PxQuat::operator*(&local_150,local_dc,&local_170);
    uVar1 = *(uint *)(param_2 + 0xb0);
    local_170 = *puVar3;
    local_16c = puVar3[1];
    local_168 = puVar3[2];
    local_164 = puVar3[3];
    fVar9 = *(float *)(param_2 + 0x164) - *(float *)(param_2 + 0x16c);
    fVar17 = ABS(local_12c / (fVar14 + 1.0));
    bVar6 = fVar17 == fVar9;
    bVar5 = fVar17 < fVar9;
  }
  local_158 = fVar31 + fVar20;
  local_160 = CONCAT44(fVar8 + fVar13,fVar18 + fVar16);
  (**(code **)(*param_1 + 0x18))(param_1,&local_170,uVar1 ^ 0x80000000,uVar1,!bVar5 && !bVar6);
  return;
}



// FUNCTION 143271200 ~D6Joint body=101 status=ok
// SIG undefined ~D6Joint(void)

void physx::Ext::D6Joint::~D6Joint(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af15f0;
  param_1[3] = &PTR_prepareData_145af1790;
  if (((*(byte *)((longlong)param_1 + 10) & 1) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  param_1[3] = &PTR__purecall_145af1588;
  *param_1 = &PTR__purecall_145af1560;
  return;
}



// FUNCTION 143271280 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong physx::Ext::D6Joint::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  ~D6Joint();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 1432712f0 FUN_1432712f0 body=43 status=ok
// SIG undefined FUN_1432712f0(void)

undefined8 * FUN_1432712f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1560;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143271320 FUN_143271320 body=43 status=ok
// SIG undefined FUN_143271320(void)

undefined8 * FUN_143271320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1588;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143271350 computeDerived body=1195 status=ok
// SIG undefined computeDerived(void)

void physx::Ext::joint::computeDerived
               (longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [128];
  
  fVar3 = param_2[3];
  fVar4 = param_2[1];
  fVar7 = param_2[2];
  fVar11 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x24);
  fVar13 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28);
  fVar14 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x20);
  fVar8 = *param_2;
  fVar12 = fVar3 * fVar3 - 0.5;
  fVar5 = fVar8 * fVar14 + fVar4 * fVar11 + fVar7 * fVar13;
  fVar9 = param_2[4];
  fVar10 = param_2[6];
  fVar6 = param_2[5];
  puVar2 = (undefined8 *)PxQuat::operator*(param_2,&local_98);
  uVar1 = puVar2[1];
  *(undefined8 *)param_4 = *puVar2;
  *(undefined8 *)(param_4 + 2) = uVar1;
  param_4[5] = (fVar7 * fVar14 - fVar8 * fVar13) * fVar3 + fVar12 * fVar11 + fVar4 * fVar5 + fVar6;
  param_4[4] = (fVar4 * fVar13 - fVar7 * fVar11) * fVar3 + fVar12 * fVar14 + fVar8 * fVar5 + fVar9;
  param_4[6] = (fVar8 * fVar11 - fVar4 * fVar14) * fVar3 + fVar12 * fVar13 + fVar7 * fVar5 + fVar10;
  fVar14 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  fVar5 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40);
  fVar3 = param_3[3];
  fVar4 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = *param_3;
  fVar13 = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x44);
  fVar11 = fVar3 * fVar3 - 0.5;
  fVar6 = fVar8 * fVar14 + fVar4 * fVar5 + fVar7 * fVar13;
  fVar9 = param_3[4];
  fVar10 = param_3[6];
  fVar12 = (fVar7 * fVar14 - fVar8 * fVar13) * fVar3 + fVar11 * fVar5 + fVar4 * fVar6 + param_3[5];
  puVar2 = (undefined8 *)PxQuat::operator*(param_3,&local_98);
  uVar1 = puVar2[1];
  *(undefined8 *)param_5 = *puVar2;
  *(undefined8 *)(param_5 + 2) = uVar1;
  param_5[4] = (fVar4 * fVar13 - fVar7 * fVar5) * fVar3 + fVar11 * fVar14 + fVar8 * fVar6 + fVar9;
  param_5[5] = fVar12;
  param_5[6] = (fVar8 * fVar5 - fVar4 * fVar14) * fVar3 + fVar11 * fVar13 + fVar7 * fVar6 + fVar10;
  if (param_5[1] * param_4[1] + *param_5 * *param_4 + param_5[2] * param_4[2] +
      param_5[3] * param_4[3] < 0.0) {
    *param_5 = -*param_5;
    param_5[1] = -param_5[1];
    param_5[2] = -param_5[2];
    param_5[3] = -param_5[3];
  }
  local_8c = param_4[3];
  local_98 = -*param_4;
  local_94 = -param_4[1];
  local_90 = -param_4[2];
  fVar9 = (param_5[4] - param_4[4]) * 2.0;
  fVar8 = (fVar12 - param_4[5]) * 2.0;
  fVar5 = (param_5[6] - param_4[6]) * 2.0;
  fVar7 = local_8c * local_8c - 0.5;
  fVar4 = local_94 * fVar8 + local_98 * fVar9 + local_90 * fVar5;
  fVar3 = local_98 * fVar4;
  fVar6 = (local_94 * fVar5 - local_90 * fVar8) * local_8c;
  fVar11 = local_90 * fVar4;
  fVar4 = local_94 * fVar4;
  fVar10 = (local_90 * fVar9 - local_98 * fVar5) * local_8c;
  fVar12 = (local_98 * fVar8 - local_94 * fVar9) * local_8c;
  puVar2 = (undefined8 *)PxQuat::operator*(&local_98,local_88);
  uVar1 = puVar2[1];
  *param_6 = *puVar2;
  param_6[1] = uVar1;
  *(float *)(param_6 + 2) = fVar6 + fVar7 * fVar9 + fVar3;
  *(float *)((longlong)param_6 + 0x14) = fVar10 + fVar7 * fVar8 + fVar4;
  *(float *)(param_6 + 3) = fVar12 + fVar7 * fVar5 + fVar11;
  return;
}



// FUNCTION 143271820 getBodyPose body=578 status=ok
// SIG undefined getBodyPose(void)

undefined8 *
physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::getBodyPose
          (undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_c8 [16];
  undefined1 local_b8 [28];
  undefined1 local_9c [148];
  
  if (param_3 == (longlong *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    plVar8 = (longlong *)0x0;
    if ((short)param_3[1] == 7) {
      plVar8 = param_3;
    }
    if (plVar8 == (longlong *)0x0) {
      lVar9 = (**(code **)(*param_3 + 0xf0))(param_3,local_b8);
      pfVar10 = (float *)(**(code **)(*param_3 + 0xa0))(param_3,local_9c);
      fVar16 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
      fVar13 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
      fVar1 = pfVar10[3];
      fVar15 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
      fVar2 = pfVar10[1];
      fVar3 = *pfVar10;
      fVar4 = pfVar10[2];
      fVar14 = fVar1 * fVar1 - 0.5;
      fVar12 = fVar3 * fVar16 + fVar2 * fVar13 + fVar4 * fVar15;
      fVar5 = pfVar10[4];
      fVar6 = pfVar10[6];
      fVar7 = pfVar10[5];
      puVar11 = (undefined4 *)PxQuat::operator*(pfVar10,local_c8,lVar9);
      *(undefined4 *)param_2 = *puVar11;
      *(undefined4 *)((longlong)param_2 + 4) = puVar11[1];
      *(undefined4 *)(param_2 + 1) = puVar11[2];
      *(undefined4 *)((longlong)param_2 + 0xc) = puVar11[3];
      *(float *)(param_2 + 2) =
           (fVar2 * fVar15 - fVar4 * fVar13) * fVar1 + fVar14 * fVar16 + fVar3 * fVar12 + fVar5;
      *(float *)((longlong)param_2 + 0x14) =
           (fVar4 * fVar16 - fVar3 * fVar15) * fVar1 + fVar14 * fVar13 + fVar2 * fVar12 + fVar7;
      *(float *)(param_2 + 3) =
           (fVar3 * fVar13 - fVar2 * fVar16) * fVar1 + fVar14 * fVar15 + fVar4 * fVar12 + fVar6;
    }
    else {
      (**(code **)(*param_3 + 0xa0))();
    }
  }
  return param_2;
}



// FUNCTION 143271a80 getCom body=617 status=ok
// SIG undefined getCom(void)

float * physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::getCom
                  (undefined8 param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_c8 [192];
  
  if (param_3 == (longlong *)0x0) {
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
  }
  else {
    iVar6 = (**(code **)(*param_3 + 0x28))(param_3);
    if ((iVar6 != 1) && (iVar6 = (**(code **)(*param_3 + 0x28))(param_3), iVar6 != 4)) {
      pfVar7 = (float *)(**(code **)(*param_3 + 0xa0))(param_3,local_c8);
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar4 = pfVar7[3];
      fVar8 = pfVar7[4];
      fVar9 = pfVar7[5];
      fVar5 = pfVar7[6];
      *param_2 = -fVar1;
      fVar12 = fVar4 * fVar4 - 0.5;
      param_2[1] = -fVar2;
      fVar11 = -fVar8 * 2.0;
      fVar10 = -fVar9 * 2.0;
      fVar9 = -fVar5 * 2.0;
      param_2[2] = -fVar3;
      fVar8 = fVar2 * fVar10 + fVar1 * fVar11 + fVar3 * fVar9;
      param_2[3] = fVar4;
      param_2[6] = (fVar12 * fVar9 - (fVar1 * fVar10 - fVar2 * fVar11) * fVar4) + fVar3 * fVar8;
      param_2[4] = (fVar12 * fVar11 - (fVar2 * fVar9 - fVar3 * fVar10) * fVar4) + fVar1 * fVar8;
      param_2[5] = (fVar12 * fVar10 - (fVar3 * fVar11 - fVar1 * fVar9) * fVar4) + fVar2 * fVar8;
      return param_2;
    }
    (**(code **)(*param_3 + 0xf0))(param_3,param_2);
  }
  return param_2;
}



// FUNCTION 143271d00 getConstraintFlags body=28 status=ok
// SIG undefined getConstraintFlags(void)

undefined8
physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::getConstraintFlags
          (longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))();
  return param_2;
}



// FUNCTION 143271dd0 getRelativeAngularVelocity body=629 status=ok
// SIG undefined getRelativeAngularVelocity(void)

float * physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::
        getRelativeAngularVelocity(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong *local_res8;
  longlong *local_res10;
  undefined1 local_a8 [16];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))
            (*(longlong **)(param_1 + 0x60),&local_res8,&local_res10);
  getCom(param_1,&local_98,local_res8);
  fVar4 = 0.0;
  if (local_res8 == (longlong *)0x0) {
LAB_143271e89:
    fVar3 = 0.0;
    fVar7 = 0.0;
    fVar9 = 0.0;
  }
  else {
    plVar1 = (longlong *)0x0;
    if ((short)local_res8[1] == 7) {
      plVar1 = local_res8;
    }
    if (plVar1 != (longlong *)0x0) goto LAB_143271e89;
    (**(code **)(*local_res8 + 0x128))(local_res8,local_a8);
    pfVar2 = (float *)(**(code **)(*local_res8 + 0x138))(local_res8,local_a8);
    fVar3 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar9 = pfVar2[2];
  }
  if (local_res10 != (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
    if ((short)local_res10[1] == 7) {
      plVar1 = local_res10;
    }
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x128))(local_res10,local_a8);
      pfVar2 = (float *)(**(code **)(*local_res10 + 0x138))(local_res10,local_a8);
      fVar4 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar8 = pfVar2[2];
      goto LAB_143271eed;
    }
  }
  fVar6 = 0.0;
  fVar8 = 0.0;
LAB_143271eed:
  fVar5 = ((fVar4 - fVar3) - local_88) * 2.0;
  fVar3 = local_8c * local_8c - 0.5;
  fVar7 = ((fVar6 - fVar7) - local_84) * 2.0;
  fVar9 = ((fVar8 - fVar9) - local_80) * 2.0;
  fVar4 = local_94 * fVar7 + local_98 * fVar5 + local_90 * fVar9;
  *param_2 = (fVar3 * fVar5 - (local_94 * fVar9 - local_90 * fVar7) * local_8c) + local_98 * fVar4;
  param_2[1] = (fVar3 * fVar7 - (local_90 * fVar5 - local_98 * fVar9) * local_8c) + local_94 * fVar4
  ;
  param_2[2] = (fVar3 * fVar9 - (local_98 * fVar7 - local_94 * fVar5) * local_8c) + local_90 * fVar4
  ;
  return param_2;
}



// FUNCTION 143272050 getRelativeLinearVelocity body=1564 status=ok
// SIG undefined getRelativeLinearVelocity(void)

float * physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::
        getRelativeLinearVelocity(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float local_res8;
  float local_res10;
  float local_res18;
  float local_res20;
  undefined4 local_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_f8 [16];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))
            (*(longlong **)(param_1 + 0x60),&local_120,&local_148);
  getCom(param_1,&local_118,CONCAT44(uStack_11c,local_120));
  getCom(param_1,&local_e8,CONCAT44(uStack_144,local_148));
  plVar1 = (longlong *)CONCAT44(uStack_11c,local_120);
  local_13c = 0.0;
  if (plVar1 == (longlong *)0x0) {
LAB_143272177:
    local_res18 = 0.0;
    local_res8 = 0.0;
    local_res10 = 0.0;
    local_130 = 0.0;
    local_12c = 0.0;
    local_128 = 0.0;
  }
  else {
    plVar2 = (longlong *)0x0;
    if ((short)plVar1[1] == 7) {
      plVar2 = plVar1;
    }
    if (plVar2 != (longlong *)0x0) goto LAB_143272177;
    pfVar3 = (float *)(**(code **)(*plVar1 + 0x128))(plVar1,local_f8);
    local_130 = *pfVar3;
    local_12c = pfVar3[1];
    local_128 = pfVar3[2];
    pfVar3 = (float *)(**(code **)(*plVar1 + 0x138))(plVar1,local_f8);
    local_res18 = *pfVar3;
    local_res8 = pfVar3[1];
    local_res10 = pfVar3[2];
  }
  fVar7 = 0.0;
  plVar1 = (longlong *)CONCAT44(uStack_144,local_148);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
    if ((short)plVar1[1] == 7) {
      plVar2 = plVar1;
    }
    if (plVar2 == (longlong *)0x0) {
      pfVar3 = (float *)(**(code **)(*plVar1 + 0x128))(plVar1,local_f8);
      local_13c = *pfVar3;
      local_138 = pfVar3[1];
      local_134 = pfVar3[2];
      pfVar3 = (float *)(**(code **)(*plVar1 + 0x138))(plVar1,local_f8);
      local_res20 = pfVar3[1];
      local_140 = *pfVar3;
      fVar7 = pfVar3[2];
      goto LAB_143272238;
    }
  }
  local_140 = 0.0;
  local_res20 = 0.0;
  local_138 = 0.0;
  local_134 = 0.0;
LAB_143272238:
  fVar8 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x38);
  fVar5 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  fVar6 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40);
  fVar12 = local_10c * local_10c - 0.5;
  fVar4 = local_114 * fVar5 + local_118 * fVar8 + local_110 * fVar6;
  fVar15 = (local_114 * fVar6 - local_110 * fVar5) * local_10c + fVar12 * fVar8 + local_118 * fVar4;
  fVar9 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x58);
  fVar16 = (local_110 * fVar8 - local_118 * fVar6) * local_10c + fVar12 * fVar5 + local_114 * fVar4;
  fVar13 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x54);
  fVar11 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c);
  fVar10 = local_dc * local_dc - 0.5;
  fVar14 = (local_118 * fVar5 - local_114 * fVar8) * local_10c + fVar12 * fVar6 + local_110 * fVar4;
  fVar4 = local_e4 * fVar9 + local_e8 * fVar13 + local_e0 * fVar11;
  fVar8 = (local_e4 * fVar11 - local_e0 * fVar9) * local_dc + fVar10 * fVar13 + local_e8 * fVar4;
  fVar6 = (local_e0 * fVar13 - local_e8 * fVar11) * local_dc + fVar10 * fVar9 + local_e4 * fVar4;
  fVar4 = (local_e8 * fVar9 - local_e4 * fVar13) * local_dc + fVar10 * fVar11 + local_e0 * fVar4;
  fVar5 = (((fVar14 * local_res8 - fVar16 * local_res10) +
           ((local_13c - (fVar4 * local_res20 - fVar6 * fVar7)) - local_130)) - local_108) * 2.0;
  fVar4 = (((fVar15 * local_res10 - fVar14 * local_res18) +
           ((local_138 - (fVar8 * fVar7 - fVar4 * local_140)) - local_12c)) - local_104) * 2.0;
  fVar6 = (((fVar16 * local_res18 - fVar15 * local_res8) +
           ((local_134 - (fVar6 * local_140 - fVar8 * local_res20)) - local_128)) - local_100) * 2.0
  ;
  fVar7 = local_114 * fVar4 + local_118 * fVar5 + local_110 * fVar6;
  *param_2 = (fVar12 * fVar5 - (local_114 * fVar6 - local_110 * fVar4) * local_10c) +
             local_118 * fVar7;
  param_2[1] = (fVar12 * fVar4 - (local_110 * fVar5 - local_118 * fVar6) * local_10c) +
               local_114 * fVar7;
  param_2[2] = (fVar12 * fVar6 - (local_118 * fVar4 - local_114 * fVar5) * local_10c) +
               local_110 * fVar7;
  return param_2;
}



// FUNCTION 143272670 getRelativeTransform body=1207 status=ok
// SIG undefined getRelativeTransform(void)

undefined4 *
physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::getRelativeTransform
          (longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
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
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))
            (*(longlong **)(param_1 + 0x60),&local_118,&local_110);
  pfVar2 = (float *)getBodyPose(param_1,local_f8,local_118);
  fVar23 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x38);
  fVar14 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  fVar5 = pfVar2[3];
  fVar20 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40);
  fVar6 = pfVar2[1];
  fVar7 = *pfVar2;
  fVar8 = pfVar2[2];
  fVar17 = fVar5 * fVar5 - 0.5;
  fVar9 = fVar7 * fVar23 + fVar6 * fVar14 + fVar8 * fVar20;
  fVar11 = pfVar2[4];
  fVar12 = pfVar2[6];
  fVar13 = pfVar2[5];
  pfVar2 = (float *)PxQuat::operator*(pfVar2,&local_108,param_1 + 0x28);
  fVar16 = *pfVar2;
  fVar19 = pfVar2[2];
  fVar1 = pfVar2[3];
  fVar22 = pfVar2[1];
  pfVar2 = (float *)getBodyPose(param_1,local_f8,local_110);
  fVar24 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x54);
  fVar15 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x58);
  fVar25 = pfVar2[3];
  fVar21 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c);
  fVar26 = pfVar2[1];
  fVar28 = *pfVar2;
  fVar30 = pfVar2[2];
  fVar18 = fVar25 * fVar25 - 0.5;
  fVar10 = fVar28 * fVar24 + fVar26 * fVar15 + fVar30 * fVar21;
  fVar27 = (fVar26 * fVar21 - fVar30 * fVar15) * fVar25 + fVar18 * fVar24 + fVar28 * fVar10 +
           pfVar2[4];
  fVar29 = (fVar28 * fVar15 - fVar26 * fVar24) * fVar25 + fVar18 * fVar21 + fVar30 * fVar10 +
           pfVar2[6];
  fVar25 = (fVar30 * fVar24 - fVar28 * fVar21) * fVar25 + fVar18 * fVar15 + fVar26 * fVar10 +
           pfVar2[5];
  puVar3 = (undefined8 *)PxQuat::operator*(pfVar2,&local_108,param_1 + 0x44);
  local_d8 = *puVar3;
  uStack_d0 = puVar3[1];
  local_108 = -fVar16;
  local_104 = -fVar22;
  local_100 = -fVar19;
  fVar28 = (fVar27 - ((fVar6 * fVar20 - fVar8 * fVar14) * fVar5 + fVar17 * fVar23 + fVar7 * fVar9 +
                     fVar11)) * 2.0;
  fVar30 = (fVar29 - ((fVar7 * fVar14 - fVar6 * fVar23) * fVar5 + fVar17 * fVar20 + fVar8 * fVar9 +
                     fVar12)) * 2.0;
  fVar26 = (fVar25 - ((fVar8 * fVar23 - fVar7 * fVar20) * fVar5 + fVar17 * fVar14 + fVar6 * fVar9 +
                     fVar13)) * 2.0;
  fVar11 = fVar1 * fVar1 - 0.5;
  fVar19 = local_104 * fVar30;
  fVar16 = local_100 * fVar28;
  fVar5 = local_100 * fVar26;
  fVar8 = local_104 * fVar26 + local_108 * fVar28 + local_100 * fVar30;
  fVar7 = local_108 * fVar8;
  fVar13 = local_100 * fVar8;
  fVar6 = local_108 * fVar30;
  fVar22 = local_108 * fVar26;
  fVar12 = local_104 * fVar28;
  fVar8 = local_104 * fVar8;
  local_fc = fVar1;
  local_c8 = fVar27;
  local_c4 = fVar25;
  local_c0 = fVar29;
  puVar4 = (undefined4 *)PxQuat::operator*(&local_108,local_f8,&local_d8);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  param_2[3] = puVar4[3];
  param_2[4] = (fVar19 - fVar5) * fVar1 + fVar11 * fVar28 + fVar7;
  param_2[5] = (fVar16 - fVar6) * fVar1 + fVar11 * fVar26 + fVar8;
  param_2[6] = (fVar22 - fVar12) * fVar1 + fVar11 * fVar30 + fVar13;
  return param_2;
}



// FUNCTION 143272b60 initCommonData body=1212 status=ok
// SIG undefined initCommonData(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
               (longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4,
               undefined8 param_5,float *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [176];
  
  fVar9 = *param_4;
  fVar10 = param_4[2];
  fVar11 = param_4[3];
  fVar12 = param_4[1];
  fVar13 = param_4[6];
  fVar8 = 1.0 / SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  fVar14 = param_4[5];
  fVar15 = param_4[4];
  *(float *)(param_1 + 0x28) = fVar9 * fVar8;
  *(float *)(param_1 + 0x2c) = fVar12 * fVar8;
  *(float *)(param_1 + 0x30) = fVar10 * fVar8;
  *(float *)(param_1 + 0x34) = fVar11 * fVar8;
  *(float *)(param_1 + 0x38) = fVar15;
  *(float *)(param_1 + 0x40) = fVar13;
  *(float *)(param_1 + 0x3c) = fVar14;
  fVar9 = param_6[1];
  fVar10 = *param_6;
  fVar11 = param_6[2];
  fVar12 = param_6[3];
  fVar13 = param_6[5];
  fVar14 = param_6[6];
  fVar8 = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12);
  fVar15 = param_6[4];
  *(float *)(param_1 + 0x44) = fVar10 * fVar8;
  *(float *)(param_1 + 0x4c) = fVar11 * fVar8;
  *(float *)(param_1 + 0x50) = fVar12 * fVar8;
  *(float *)(param_1 + 0x48) = fVar9 * fVar8;
  *(float *)(param_1 + 0x54) = fVar15;
  *(float *)(param_1 + 0x58) = fVar13;
  *(float *)(param_1 + 0x5c) = fVar14;
  pfVar5 = (float *)getCom(fVar15,local_b8);
  local_cc = pfVar5[3];
  local_d8 = -*pfVar5;
  local_d4 = -pfVar5[1];
  local_d0 = -pfVar5[2];
  fVar13 = (param_4[4] - pfVar5[4]) * 2.0;
  fVar12 = (param_4[5] - pfVar5[5]) * 2.0;
  fVar11 = local_cc * local_cc - 0.5;
  fVar8 = (param_4[6] - pfVar5[6]) * 2.0;
  fVar10 = local_d4 * fVar12 + local_d8 * fVar13 + local_d0 * fVar8;
  fVar9 = local_d8 * fVar10;
  fVar15 = (local_d4 * fVar8 - local_d0 * fVar12) * local_cc;
  fVar16 = local_d0 * fVar10;
  fVar10 = local_d4 * fVar10;
  fVar14 = (local_d0 * fVar13 - local_d8 * fVar8) * local_cc;
  fVar17 = (local_d8 * fVar12 - local_d4 * fVar13) * local_cc;
  puVar6 = (undefined4 *)PxQuat::operator*(&local_d8,local_c8,param_4);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  param_2[4] = *puVar6;
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = fVar15 + fVar11 * fVar13 + fVar9;
  param_2[9] = fVar14 + fVar11 * fVar12 + fVar10;
  param_2[10] = fVar17 + fVar11 * fVar8 + fVar16;
  pfVar5 = (float *)getCom(param_1,local_b8,param_5);
  local_d8 = -*pfVar5;
  local_cc = pfVar5[3];
  local_d4 = -pfVar5[1];
  local_d0 = -pfVar5[2];
  fVar13 = (param_6[4] - pfVar5[4]) * 2.0;
  fVar12 = (param_6[5] - pfVar5[5]) * 2.0;
  fVar11 = local_cc * local_cc - 0.5;
  fVar8 = (param_6[6] - pfVar5[6]) * 2.0;
  fVar10 = local_d4 * fVar12 + local_d8 * fVar13 + local_d0 * fVar8;
  fVar9 = local_d8 * fVar10;
  fVar15 = (local_d4 * fVar8 - local_d0 * fVar12) * local_cc;
  fVar16 = local_d0 * fVar10;
  fVar10 = local_d4 * fVar10;
  fVar14 = (local_d0 * fVar13 - local_d8 * fVar8) * local_cc;
  fVar17 = (local_d8 * fVar12 - local_d4 * fVar13) * local_cc;
  puVar7 = (undefined8 *)PxQuat::operator*(&local_d8,local_c8,param_6);
  uVar4 = puVar7[1];
  *(undefined8 *)(param_2 + 0xb) = *puVar7;
  *(undefined8 *)(param_2 + 0xd) = uVar4;
  param_2[0xf] = fVar15 + fVar11 * fVar13 + fVar9;
  param_2[0x10] = fVar14 + fVar11 * fVar12 + fVar10;
  param_2[0x11] = fVar17 + fVar11 * fVar8 + fVar16;
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = 0x3f800000;
  return;
}



// FUNCTION 143273050 isKindOf body=115 status=ok
// SIG undefined isKindOf(void)

undefined8 physx::PxD6Joint::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar2;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxD6Joint",param_2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = 0;
      lVar3 = lVar4 + 1;
      if ((&DAT_145af15d8)[lVar4] != param_2[lVar4]) {
        lVar4 = 0;
        do {
          lVar3 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_145af1548)[lVar4]) {
            return 0;
          }
          lVar4 = lVar3;
        } while (lVar3 != 7);
        return 1;
      }
      lVar4 = lVar3;
    } while (lVar3 != 8);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 1432730e0 normalize body=94 status=ok
// SIG undefined normalize(void)

float physx::PxQuat::normalize(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2] +
               param_1[3] * param_1[3]);
  if (fVar2 != 0.0) {
    fVar1 = 1.0 / fVar2;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    param_1[3] = fVar1 * param_1[3];
  }
  return fVar2;
}



// FUNCTION 143273140 onComShift body=541 status=ok
// SIG undefined onComShift(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::onComShift
               (longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
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
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))
            (*(longlong **)(param_1 + 0x48),&local_b8,local_b0);
  getCom(param_1 + -0x18,&local_98,(&local_b8)[param_2]);
  local_c8 = -local_98;
  local_c4 = -local_94;
  local_c0 = -local_90;
  lVar7 = (ulonglong)param_2 * 0x1c;
  fVar14 = local_8c * local_8c - 0.5;
  local_bc = local_8c;
  lVar8 = param_1 + 0x10 + lVar7;
  fVar16 = (*(float *)(lVar8 + 0x10) - local_88) * 2.0;
  fVar15 = (*(float *)(lVar8 + 0x14) - local_84) * 2.0;
  fVar19 = (*(float *)(lVar8 + 0x18) - local_80) * 2.0;
  fVar18 = local_c4 * fVar19;
  fVar17 = local_c0 * fVar16;
  fVar9 = local_c0 * fVar15;
  fVar13 = local_c4 * fVar15 + local_c8 * fVar16 + local_c0 * fVar19;
  fVar11 = local_c8 * fVar13;
  fVar10 = local_c8 * fVar19;
  fVar21 = local_c8 * fVar15;
  fVar20 = local_c4 * fVar16;
  fVar12 = local_c4 * fVar13;
  fVar13 = local_c0 * fVar13;
  puVar6 = (undefined4 *)PxQuat::operator*(&local_c8,local_a8);
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  lVar8 = *(longlong *)(param_1 + 0x50);
  puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar7);
  *puVar1 = *puVar6;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(float *)(lVar8 + 0x20 + lVar7) = (fVar18 - fVar9) * local_8c + fVar14 * fVar16 + fVar11;
  *(float *)(lVar8 + 0x24 + lVar7) = (fVar17 - fVar10) * local_8c + fVar14 * fVar15 + fVar12;
  *(float *)(lVar8 + 0x28 + lVar7) = (fVar21 - fVar20) * local_8c + fVar14 * fVar19 + fVar13;
                    /* WARNING: Could not recover jumptable at 0x000143273359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))();
  return;
}



// FUNCTION 143273360 onConstraintRelease body=80 status=ok
// SIG undefined onConstraintRelease(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::onConstraintRelease
               (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  PxAllocatorCallback *pPVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar2);
  }
  plVar1 = (longlong *)(param_1 + -0x18);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  return;
}



// FUNCTION 1432733b0 onOriginShift body=259 status=ok
// SIG undefined onOriginShift(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::onOriginShift
               (longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong local_18;
  longlong local_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))
            (*(longlong **)(param_1 + 0x48),&local_18,&local_10);
  if (local_18 == 0) {
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - *param_2;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - param_2[1];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - param_2[2];
    lVar1 = *(longlong *)(param_1 + 0x50);
    *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x20) - *param_2;
    *(float *)(lVar1 + 0x24) = *(float *)(lVar1 + 0x24) - param_2[1];
    *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x28) - param_2[2];
  }
  else {
    if (local_10 != 0) {
      return;
    }
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *param_2;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - param_2[1];
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - param_2[2];
    lVar1 = *(longlong *)(param_1 + 0x50);
    *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) - *param_2;
    *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) - param_2[1];
    *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) - param_2[2];
  }
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))();
  return;
}



// FUNCTION 1432734c0 project body=390 status=ok
// SIG undefined project(void)

undefined8
`anonymous_namespace'::project
          (undefined8 param_1,float *param_2,float *param_3,undefined4 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  
  local_58._4_4_ = *param_3 * *param_2 + param_3[1] * param_2[1] + param_3[2] * param_2[2];
  if (ABS(local_58._4_4_) < 1e-06) {
    local_58._0_4_ = 0.0;
    local_58._4_4_ = 0.0;
    uStack_50._0_4_ = 0.0;
    uStack_50._4_4_ = 1.0;
  }
  else {
    uStack_50._4_4_ = param_2[3];
    local_58._0_4_ = *param_3 * local_58._4_4_;
    uStack_50._0_4_ = param_3[2] * local_58._4_4_;
    local_58._4_4_ = param_3[1] * local_58._4_4_;
    fVar2 = 1.0 / SQRT(local_58._4_4_ * local_58._4_4_ + (float)local_58 * (float)local_58 +
                       (float)uStack_50 * (float)uStack_50 + uStack_50._4_4_ * uStack_50._4_4_);
    local_58._0_4_ = (float)local_58 * fVar2;
    local_58._4_4_ = local_58._4_4_ * fVar2;
    uStack_50._0_4_ = (float)uStack_50 * fVar2;
    uStack_50._4_4_ = uStack_50._4_4_ * fVar2;
  }
  local_48 = (float)local_58;
  local_44 = local_58._4_4_;
  local_40 = (float)uStack_50;
  local_58 = CONCAT44(local_58._4_4_,(float)local_58) ^ 0x8000000080000000;
  local_3c = uStack_50._4_4_;
  uStack_50 = CONCAT44(uStack_50._4_4_,(float)uStack_50) ^ 0x80000000;
  physx::PxQuat::operator*(param_2,local_38,&local_58);
  uVar1 = truncate(&local_58,local_38,param_4,param_5);
  physx::PxQuat::operator*(uVar1,param_1,&local_48);
  return param_1;
}



// FUNCTION 143273660 requires body=110 status=ok
// SIG undefined requires(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::requires
               (longlong param_1,longlong *param_2)

{
  longlong local_res8;
  longlong local_res10;
  
  (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x60));
  local_res8 = 0;
  local_res10 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))
            (*(longlong **)(param_1 + 0x60),&local_res8,&local_res10);
  if (local_res8 != 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (local_res10 != 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



// FUNCTION 1432736d0 setActors body=906 status=ok
// SIG undefined setActors(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::setActors
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [176];
  
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
  pfVar6 = (float *)getCom(param_1,local_b8,param_2);
  local_cc = pfVar6[3];
  local_d8 = -*pfVar6;
  local_d4 = -pfVar6[1];
  local_d0 = -pfVar6[2];
  fVar13 = (*(float *)(param_1 + 0x38) - pfVar6[4]) * 2.0;
  fVar12 = (*(float *)(param_1 + 0x3c) - pfVar6[5]) * 2.0;
  fVar11 = local_cc * local_cc - 0.5;
  fVar16 = (*(float *)(param_1 + 0x40) - pfVar6[6]) * 2.0;
  fVar10 = local_d4 * fVar12 + local_d8 * fVar13 + local_d0 * fVar16;
  fVar8 = local_d8 * fVar10;
  fVar15 = (local_d4 * fVar16 - local_d0 * fVar12) * local_cc;
  fVar14 = (local_d0 * fVar13 - local_d8 * fVar16) * local_cc;
  fVar9 = local_d4 * fVar10;
  fVar17 = (local_d8 * fVar12 - local_d4 * fVar13) * local_cc;
  fVar10 = local_d0 * fVar10;
  puVar7 = (undefined4 *)PxQuat::operator*(&local_d8,local_c8,param_1 + 0x28);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  lVar1 = *(longlong *)(param_1 + 0x68);
  *(undefined4 *)(lVar1 + 0x10) = *puVar7;
  *(undefined4 *)(lVar1 + 0x14) = uVar3;
  *(undefined4 *)(lVar1 + 0x18) = uVar4;
  *(undefined4 *)(lVar1 + 0x1c) = uVar5;
  *(float *)(lVar1 + 0x20) = fVar15 + fVar11 * fVar13 + fVar8;
  *(float *)(lVar1 + 0x24) = fVar14 + fVar11 * fVar12 + fVar9;
  *(float *)(lVar1 + 0x28) = fVar17 + fVar11 * fVar16 + fVar10;
  pfVar6 = (float *)getCom(param_1,local_b8,param_3);
  local_cc = pfVar6[3];
  local_d8 = -*pfVar6;
  local_d4 = -pfVar6[1];
  local_d0 = -pfVar6[2];
  fVar12 = (*(float *)(param_1 + 0x54) - pfVar6[4]) * 2.0;
  fVar11 = (*(float *)(param_1 + 0x58) - pfVar6[5]) * 2.0;
  fVar10 = local_cc * local_cc - 0.5;
  fVar15 = (*(float *)(param_1 + 0x5c) - pfVar6[6]) * 2.0;
  fVar9 = local_d4 * fVar11 + local_d8 * fVar12 + local_d0 * fVar15;
  fVar8 = local_d8 * fVar9;
  fVar14 = (local_d4 * fVar15 - local_d0 * fVar11) * local_cc;
  fVar16 = local_d0 * fVar9;
  fVar9 = local_d4 * fVar9;
  fVar13 = (local_d0 * fVar12 - local_d8 * fVar15) * local_cc;
  fVar17 = (local_d8 * fVar11 - local_d4 * fVar12) * local_cc;
  puVar7 = (undefined4 *)PxQuat::operator*(&local_d8,local_c8,param_1 + 0x44);
  plVar2 = *(longlong **)(param_1 + 0x60);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  lVar1 = *(longlong *)(param_1 + 0x68);
  *(undefined4 *)(lVar1 + 0x2c) = *puVar7;
  *(undefined4 *)(lVar1 + 0x30) = uVar3;
  *(undefined4 *)(lVar1 + 0x34) = uVar4;
  *(undefined4 *)(lVar1 + 0x38) = uVar5;
  *(float *)(lVar1 + 0x3c) = fVar14 + fVar10 * fVar12 + fVar8;
  *(float *)(lVar1 + 0x40) = fVar13 + fVar10 * fVar11 + fVar9;
  *(float *)(lVar1 + 0x44) = fVar17 + fVar10 * fVar15 + fVar16;
                    /* WARNING: Could not recover jumptable at 0x000143273a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))();
  return;
}



// FUNCTION 143273a80 setConstraintFlags body=32 status=ok
// SIG undefined setConstraintFlags(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::setConstraintFlags
               (longlong param_1,undefined2 *param_2)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = *param_2;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))(*(longlong **)(param_1 + 0x60),local_res8);
  return;
}



// FUNCTION 143273b20 setLocalPose body=719 status=ok
// SIG undefined setLocalPose(void)

void physx::Ext::Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::setLocalPose
               (longlong param_1,uint param_2,float *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
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
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  local_98 = *param_3;
  local_90 = param_3[2];
  local_8c = param_3[3];
  local_94 = param_3[1];
  fVar9 = param_3[5];
  fVar10 = param_3[4];
  fVar12 = param_3[6];
  lVar8 = (longlong)(int)param_2 * 0x1c;
  fVar11 = 1.0 / SQRT(local_98 * local_98 + local_94 * local_94 + local_90 * local_90 +
                      local_8c * local_8c);
  local_98 = local_98 * fVar11;
  local_94 = local_94 * fVar11;
  *(float *)(lVar8 + 0x28 + param_1) = local_98;
  local_90 = local_90 * fVar11;
  *(float *)(lVar8 + 0x2c + param_1) = local_94;
  local_8c = local_8c * fVar11;
  *(float *)(lVar8 + 0x30 + param_1) = local_90;
  *(float *)(lVar8 + 0x34 + param_1) = local_8c;
  *(float *)(lVar8 + 0x38 + param_1) = fVar10;
  *(float *)(lVar8 + 0x3c + param_1) = fVar9;
  *(float *)(lVar8 + 0x40 + param_1) = fVar12;
  local_88 = fVar10;
  local_84 = fVar9;
  local_80 = fVar12;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))
            (*(longlong **)(param_1 + 0x60),&local_d8,local_d0);
  getCom(param_1,&local_b8,(&local_d8)[param_2]);
  local_e4 = -local_b4;
  local_e8 = -local_b8;
  local_e0 = -local_b0;
  fVar19 = (fVar10 - local_a8) * 2.0;
  fVar18 = (fVar9 - local_a4) * 2.0;
  fVar20 = (fVar12 - local_a0) * 2.0;
  local_dc = local_ac;
  fVar13 = local_ac * local_ac - 0.5;
  fVar16 = local_e4 * fVar20;
  fVar15 = local_e0 * fVar19;
  fVar9 = local_e0 * fVar18;
  fVar11 = local_e4 * fVar18 + local_e8 * fVar19 + local_e0 * fVar20;
  fVar12 = local_e8 * fVar11;
  fVar17 = local_e0 * fVar11;
  fVar21 = local_e8 * fVar18;
  fVar10 = local_e8 * fVar20;
  fVar14 = local_e4 * fVar19;
  fVar11 = local_e4 * fVar11;
  puVar7 = (undefined4 *)PxQuat::operator*(&local_e8,local_c8,&local_98);
  plVar2 = *(longlong **)(param_1 + 0x60);
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  lVar3 = *(longlong *)(param_1 + 0x68);
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar8);
  *puVar1 = *puVar7;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(float *)(lVar3 + 0x20 + lVar8) = (fVar16 - fVar9) * local_ac + fVar13 * fVar19 + fVar12;
  *(float *)(lVar3 + 0x24 + lVar8) = (fVar15 - fVar10) * local_ac + fVar13 * fVar18 + fVar11;
  *(float *)(lVar3 + 0x28 + lVar8) = (fVar21 - fVar14) * local_ac + fVar13 * fVar20 + fVar17;
                    /* WARNING: Could not recover jumptable at 0x000143273deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))();
  return;
}



// FUNCTION 143273df0 truncate body=396 status=ok
// SIG undefined truncate(void)

float * `anonymous_namespace'::truncate
                  (float *param_1,float *param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float local_58;
  float fStack_54;
  float local_50;
  
  fVar1 = param_2[3];
  local_58 = *param_2;
  if (fVar1 < 0.0) {
    local_50 = -param_2[2];
    fVar1 = -fVar1;
    local_58 = -local_58;
    fStack_54 = -param_2[1];
  }
  else {
    fStack_54 = param_2[1];
    local_50 = param_2[2];
  }
  *(bool *)param_4 = fVar1 < param_3;
  if (fVar1 < param_3) {
    fVar1 = SQRT(1.0 - param_3 * param_3);
    fVar2 = fStack_54 * fStack_54 + local_58 * local_58 + local_50 * local_50;
    if (fVar2 <= 0.0) {
      local_58 = 0.0;
      fStack_54 = 0.0;
      local_50 = 0.0;
    }
    else {
      fVar2 = 1.0 / SQRT(fVar2);
      local_58 = fVar2 * local_58;
      fStack_54 = fVar2 * fStack_54;
      local_50 = fVar2 * local_50;
    }
    *param_1 = fVar1 * local_58;
    param_1[1] = fVar1 * fStack_54;
    param_1[2] = fVar1 * local_50;
    param_1[3] = param_3;
  }
  else {
    *param_1 = local_58;
    param_1[1] = fStack_54;
    param_1[2] = local_50;
    param_1[3] = fVar1;
  }
  return param_1;
}



// FUNCTION 143273f80 isSerializable body=1501 status=ok
// SIG undefined isSerializable(void)

undefined8
physx::PxSerialization::isSerializable(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  PxCollection *pPVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  PxCollection *pPVar10;
  longlong *plVar11;
  Foundation *pFVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined **local_48;
  PxCollection *local_40;
  undefined **local_38;
  PxCollection *local_30;
  
  pPVar5 = PxCreateCollection();
  uVar16 = 0;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar2 != 0) {
    do {
      lVar6 = (**(code **)(*param_1 + 0x40))(param_1,uVar16);
      plVar7 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,*(undefined2 *)(lVar6 + 8));
      cVar1 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)pPVar5 + 8))(pPVar5,lVar6,0);
      }
      if ((((param_3 != (longlong *)0x0) &&
           (lVar8 = (**(code **)(*param_1 + 0x68))(param_1,lVar6), lVar8 != 0)) &&
          (lVar9 = (**(code **)(*param_3 + 0x50))(param_3,lVar8), lVar9 != 0)) && (lVar9 != lVar6))
      {
        (**(code **)(*(longlong *)pPVar5 + 0x70))(pPVar5);
        pFVar12 = physx::shdfnd::Foundation::getInstance();
        physx::shdfnd::Foundation::error
                  (pFVar12,4,
                   "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerialization.cpp"
                   ,0x89,s_PxSerialization__isSerializable__145af18a0,lVar8);
        return 0;
      }
      uVar16 = uVar16 + 1;
      uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    } while (uVar16 < uVar3);
  }
  pPVar10 = PxCreateCollection();
  uVar16 = 0;
  local_48 = &PTR_FUN_145af1878;
  local_40 = pPVar10;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar2 != 0) {
    do {
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1,uVar16);
      plVar11 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,(short)plVar7[1]);
      (**(code **)(*plVar11 + 8))(plVar11,plVar7,&local_48);
      uVar3 = 0;
      iVar2 = (**(code **)(*(longlong *)pPVar10 + 0x38))(pPVar10);
      if (iVar2 != 0) {
        do {
          plVar11 = (longlong *)(**(code **)(*(longlong *)pPVar10 + 0x40))(pPVar10,uVar3);
          cVar1 = (**(code **)(*(longlong *)pPVar5 + 0x20))(pPVar5,plVar11);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
            if (cVar1 == '\0') {
              if (param_3 == (longlong *)0x0) {
                pFVar12 = physx::shdfnd::Foundation::getInstance();
                uVar13 = (**(code **)(*plVar11 + 8))(plVar11);
                uVar15 = (**(code **)(*plVar7 + 8))(plVar7);
                iVar2 = 0xc1;
                pcVar14 = 
                "PxSerialization::isSerializable: Object of type %s references a missing serial object of type %s. Please completed the collection or specify an externalReferences collection containing the object."
                ;
              }
              else {
                cVar1 = (**(code **)(*param_3 + 0x20))(param_3,plVar11);
                if (cVar1 != '\0') {
                  lVar6 = (**(code **)(*param_3 + 0x68))(param_3);
                  if (lVar6 == 0) {
                    pFVar12 = physx::shdfnd::Foundation::getInstance();
                    uVar13 = (**(code **)(*plVar11 + 8))(plVar11);
                    physx::shdfnd::Foundation::error
                              (pFVar12,4,
                               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerialization.cpp"
                               ,0xb8,
                               "PxSerialization::isSerializable: Object of type %s in externalReferences collection requires an id."
                               ,uVar13);
                    goto LAB_1432744e9;
                  }
                  goto LAB_143274178;
                }
                pFVar12 = physx::shdfnd::Foundation::getInstance();
                uVar13 = (**(code **)(*plVar11 + 8))(plVar11);
                uVar15 = (**(code **)(*plVar7 + 8))(plVar7);
                iVar2 = 0xb1;
                pcVar14 = 
                "PxSerialization::isSerializable: Object of type %s references a missing object of type %s. The missing object needs to be added to either the current collection or the externalReferences collection."
                ;
              }
              physx::shdfnd::Foundation::error
                        (pFVar12,4,
                         "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerialization.cpp"
                         ,iVar2,pcVar14,uVar15,uVar13);
LAB_1432744e9:
              (**(code **)(*(longlong *)pPVar5 + 0x70))(pPVar5);
              (**(code **)(*(longlong *)pPVar10 + 0x70))(pPVar10);
              return 0;
            }
          }
          else {
            (**(code **)(*(longlong *)pPVar5 + 0x18))(pPVar5);
          }
LAB_143274178:
          uVar3 = uVar3 + 1;
          uVar4 = (**(code **)(*(longlong *)pPVar10 + 0x38))(pPVar10);
        } while (uVar3 < uVar4);
      }
      if ((*(int *)(pPVar10 + 100) != 0) && (*(int *)(pPVar10 + 0x74) != 0)) {
        ::_guard_xfg_dispatch_icall_nop
                  (*(void **)(pPVar10 + 0x58),-1,(ulonglong)(uint)(*(int *)(pPVar10 + 100) * 4));
        iVar2 = *(int *)(pPVar10 + 0x60);
        uVar3 = 0;
        if (iVar2 != 1) {
          lVar6 = 0;
          do {
            uVar3 = uVar3 + 1;
            *(uint *)(*(longlong *)(pPVar10 + 0x50) + lVar6) = uVar3;
            lVar6 = lVar6 + 4;
          } while (uVar3 < iVar2 - 1U);
        }
        *(undefined4 *)
         (*(longlong *)(pPVar10 + 0x50) + (ulonglong)(*(int *)(pPVar10 + 0x60) - 1) * 4) =
             0xffffffff;
        *(undefined4 *)(pPVar10 + 0x6c) = 0;
        *(undefined4 *)(pPVar10 + 0x74) = 0;
      }
      uVar16 = uVar16 + 1;
      uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    } while (uVar16 < uVar3);
  }
  (**(code **)(*(longlong *)pPVar10 + 0x70))(pPVar10);
  uVar16 = (**(code **)(*(longlong *)pPVar5 + 0x38))(pPVar5);
  uVar3 = 0;
  if (uVar16 != 0) {
    do {
      plVar7 = (longlong *)(**(code **)(*(longlong *)pPVar5 + 0x40))(pPVar5,uVar3);
      pFVar12 = physx::shdfnd::Foundation::getInstance();
      uVar13 = (**(code **)(*plVar7 + 8))(plVar7);
      physx::shdfnd::Foundation::error
                (pFVar12,4,
                 "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerialization.cpp"
                 ,0xd5,
                 "PxSerialization::isSerializable: An object of type %s is subordinate but not required by other objects in the collection (orphan). Please remove the object from the collection or add its owner."
                 ,uVar13);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar16);
  }
  (**(code **)(*(longlong *)pPVar5 + 0x70))(pPVar5);
  if (uVar16 == 0) {
    if (param_3 != (longlong *)0x0) {
      pPVar5 = PxCreateCollection();
      local_38 = &PTR_FUN_145af1878;
      local_30 = pPVar5;
      iVar2 = (**(code **)(*param_3 + 0x38))(param_3);
      if (iVar2 != 0) {
        uVar16 = 0;
        do {
          plVar7 = (longlong *)(**(code **)(*param_3 + 0x40))(param_3,uVar16);
          plVar11 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,(short)plVar7[1]);
          (**(code **)(*plVar11 + 8))(plVar11,plVar7,&local_38);
          uVar3 = 0;
          iVar2 = (**(code **)(*(longlong *)pPVar5 + 0x38))(pPVar5);
          if (iVar2 != 0) {
            do {
              plVar11 = (longlong *)(**(code **)(*(longlong *)pPVar5 + 0x40))(pPVar5,uVar3);
              cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
              if (cVar1 != '\0') {
                (**(code **)(*(longlong *)pPVar5 + 0x70))(pPVar5);
                pFVar12 = physx::shdfnd::Foundation::getInstance();
                uVar13 = (**(code **)(*plVar11 + 8))(plVar11);
                uVar15 = (**(code **)(*plVar7 + 8))(plVar7);
                physx::shdfnd::Foundation::error
                          (pFVar12,4,
                           "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerialization.cpp"
                           ,0xf7,
                           "PxSerialization::isSerializable: Object of type %s in externalReferences references an object of type %s in collection (circular dependency)."
                           ,uVar15,uVar13);
                goto LAB_143274556;
              }
              uVar3 = uVar3 + 1;
              uVar4 = (**(code **)(*(longlong *)pPVar5 + 0x38))();
            } while (uVar3 < uVar4);
          }
          if ((*(int *)(pPVar5 + 100) != 0) && (*(int *)(pPVar5 + 0x74) != 0)) {
            ::_guard_xfg_dispatch_icall_nop
                      (*(void **)(pPVar5 + 0x58),-1,(ulonglong)(uint)(*(int *)(pPVar5 + 100) * 4));
            iVar2 = *(int *)(pPVar5 + 0x60);
            uVar3 = 0;
            if (iVar2 != 1) {
              lVar6 = 0;
              do {
                uVar3 = uVar3 + 1;
                *(uint *)(*(longlong *)(pPVar5 + 0x50) + lVar6) = uVar3;
                lVar6 = lVar6 + 4;
              } while (uVar3 < iVar2 - 1U);
            }
            *(undefined4 *)
             (*(longlong *)(pPVar5 + 0x50) + (ulonglong)(*(int *)(pPVar5 + 0x60) - 1) * 4) =
                 0xffffffff;
            *(undefined4 *)(pPVar5 + 0x6c) = 0;
            *(undefined4 *)(pPVar5 + 0x74) = 0;
          }
          uVar16 = uVar16 + 1;
          uVar3 = (**(code **)(*param_3 + 0x38))(param_3);
        } while (uVar16 < uVar3);
      }
      (**(code **)(*(longlong *)pPVar5 + 0x70))(pPVar5);
    }
    uVar13 = 1;
  }
  else {
LAB_143274556:
    uVar13 = 0;
  }
  return uVar13;
}



// FUNCTION 143274570 complete body=704 status=ok
// SIG undefined complete(void)

void physx::PxSerialization::complete
               (undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  PxCollection *pPVar6;
  PxCollection *pPVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  PxAllocatorCallback *pPVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  PxCollection *pPVar15;
  int local_78 [2];
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined **local_58;
  PxCollection *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  pPVar6 = PxCreateCollection();
  (*(code *)**(undefined8 **)pPVar6)(pPVar6,param_1);
  pPVar7 = PxCreateCollection();
  do {
    pPVar15 = pPVar6;
    pPVar6 = pPVar7;
    uVar14 = 0;
    local_58 = &PTR_FUN_145af1888;
    local_50 = pPVar6;
    local_48 = param_1;
    local_40 = param_3;
    iVar3 = (**(code **)(*(longlong *)pPVar15 + 0x38))(pPVar15);
    if (iVar3 != 0) {
      do {
        plVar8 = (longlong *)(**(code **)(*(longlong *)pPVar15 + 0x40))(pPVar15,uVar14);
        plVar9 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,(short)plVar8[1]);
        (**(code **)(*plVar9 + 8))(plVar9,plVar8,&local_58);
        if (param_4 != '\0') {
          cVar2 = (**(code **)(*plVar8 + 0x20))(plVar8,"PxRigidActor");
          plVar9 = (longlong *)0x0;
          if (cVar2 != '\0') {
            plVar9 = plVar8;
          }
          if (plVar9 != (longlong *)0x0) {
            local_70 = 0;
            uVar4 = (**(code **)(*plVar9 + 0xd8))(plVar9);
            local_68 = (undefined8 *)0x0;
            local_60 = 0;
            shdfnd::
            Array<physx::PxConstraint_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::PxConstraint_*___ptr64>_>
            ::resize(&local_68,uVar4,&local_70);
            uVar13 = local_60;
            puVar1 = local_68;
            iVar3 = (int)local_60;
            (**(code **)(*plVar9 + 0xe0))(plVar9,local_68,local_60 & 0xffffffff,0);
            if (iVar3 != 0) {
              uVar13 = uVar13 & 0xffffffff;
              puVar12 = puVar1;
              do {
                lVar10 = (**(code **)(*(longlong *)*puVar12 + 0x90))((longlong *)*puVar12,local_78);
                if (local_78[0] == 0) {
                  plVar8 = (longlong *)
                           (**(code **)(*param_2 + 0x18))(param_2,*(undefined2 *)(lVar10 + 8));
                  (**(code **)(*plVar8 + 8))(plVar8,lVar10,&local_58);
                  cVar2 = (**(code **)(*(longlong *)pPVar6 + 0x20))(pPVar6,lVar10);
                  if (cVar2 == '\0') {
                    (**(code **)(*(longlong *)pPVar6 + 8))(pPVar6,lVar10,0);
                  }
                }
                puVar12 = puVar12 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if ((((local_60 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_60)) &&
               (puVar1 != (undefined8 *)0x0)) {
              pPVar11 = physx::shdfnd::getAllocator();
              (**(code **)(*(longlong *)pPVar11 + 0x10))(pPVar11,puVar1);
            }
          }
        }
        uVar14 = uVar14 + 1;
        uVar5 = (**(code **)(*(longlong *)pPVar15 + 0x38))(pPVar15);
      } while (uVar14 < uVar5);
    }
    lVar10 = 0;
    (**(code **)*param_1)(param_1);
    if ((*(int *)(pPVar15 + 100) != 0) && (*(int *)(pPVar15 + 0x74) != 0)) {
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)(pPVar15 + 0x58),-1,(ulonglong)(uint)(*(int *)(pPVar15 + 100) * 4));
      iVar3 = *(int *)(pPVar15 + 0x60);
      uVar14 = 0;
      if (iVar3 != 1) {
        do {
          uVar14 = uVar14 + 1;
          *(uint *)(lVar10 + *(longlong *)(pPVar15 + 0x50)) = uVar14;
          lVar10 = lVar10 + 4;
        } while (uVar14 < iVar3 - 1U);
      }
      *(undefined4 *)(*(longlong *)(pPVar15 + 0x50) + (ulonglong)(*(int *)(pPVar15 + 0x60) - 1) * 4)
           = 0xffffffff;
      *(undefined4 *)(pPVar15 + 0x6c) = 0;
      *(undefined4 *)(pPVar15 + 0x74) = 0;
    }
    iVar3 = (**(code **)(*(longlong *)pPVar6 + 0x38))(pPVar6);
    pPVar7 = pPVar15;
  } while (iVar3 != 0);
  (**(code **)(*(longlong *)pPVar15 + 0x70))(pPVar15);
                    /* WARNING: Could not recover jumptable at 0x000143274833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pPVar6 + 0x70))(pPVar6);
  return;
}



// FUNCTION 143274840 createSerialObjectIds body=185 status=ok
// SIG undefined createSerialObjectIds(void)

void physx::PxSerialization::createSerialObjectIds(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
      while (lVar2 != 0) {
        param_2 = param_2 + 1;
        lVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
      }
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1,uVar4);
      lVar2 = (**(code **)(*param_1 + 0x68))(param_1,uVar3);
      if (lVar2 == 0) {
        (**(code **)(*param_1 + 0x28))(param_1,uVar3,param_2);
        param_2 = param_2 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



// FUNCTION 143274900 dumpBinaryMetaData body=693 status=ok
// SIG undefined dumpBinaryMetaData(void)

void physx::PxSerialization::dumpBinaryMetaData(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  PxAllocatorCallback *pPVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined2 local_res8 [4];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  
  uVar5 = 0;
  local_78 = &PTR_write_145af1d30;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  Sn::SerializationRegistry::getBinaryMetaData(param_2,&local_78);
  lVar1 = local_70;
  local_a8 = 0;
  local_a0 = 0;
  local_res10[0] = (uint)local_68;
  uVar8 = uVar5;
  if ((uint)local_68 != 0) {
    do {
      puVar6 = (ulonglong *)(uVar8 * 0x28 + lVar1);
      uVar2 = Sn::addToStringTable(&local_a8,*puVar6);
      *puVar6 = (ulonglong)uVar2;
      uVar2 = Sn::addToStringTable(&local_a8,puVar6[1]);
      uVar9 = (int)uVar8 + 1;
      puVar6[1] = (ulonglong)uVar2;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < local_res10[0]);
    uVar8 = local_a0 >> 0x20;
  }
  lVar7 = local_a8;
  local_84 = Sn::getBinaryPlatformTag();
  local_80 = 0x20;
  local_98 = 0x4154454d;
  local_94 = 0x3040000;
  local_90 = 0;
  local_88 = 8;
  local_8c = 0;
  (**(code **)*param_1)(param_1,&local_98,4);
  (**(code **)*param_1)(param_1,&local_94,4);
  (**(code **)*param_1)(param_1,&local_90,4);
  (**(code **)*param_1)(param_1,&local_8c,4);
  (**(code **)*param_1)(param_1,&local_88,4);
  (**(code **)*param_1)(param_1,&local_84,4);
  (**(code **)*param_1)(param_1,&local_80,4);
  (**(code **)*param_1)(param_1,local_res10,4);
  (**(code **)*param_1)(param_1,lVar1,local_res10[0] * 0x28);
  local_res18[0] = *(uint *)(param_2 + 0x44);
  (**(code **)*param_1)(param_1,local_res18,4);
  if (local_res18[0] != 0) {
    do {
      local_res8[0] = Sn::SerializationRegistry::getSerializerType(param_2,uVar5);
      uVar3 = Sn::SerializationRegistry::getSerializerName(param_2,uVar5);
      local_7c = Sn::addToStringTable(&local_a8,uVar3);
      (**(code **)*param_1)(param_1,local_res8,2);
      (**(code **)*param_1)(param_1,&local_7c,4);
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < local_res18[0]);
    uVar8 = local_a0 >> 0x20;
    lVar7 = local_a8;
  }
  local_res20[0] = (undefined4)local_a0;
  (**(code **)*param_1)(param_1,local_res20,4);
  (**(code **)*param_1)(param_1,lVar7,local_res20[0]);
  if ((((uVar8 & 0x7fffffff) != 0) && (-1 < (int)uVar8)) && (lVar7 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar7);
  }
  lVar1 = local_60;
  if ((((local_58 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_58)) && (local_60 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar1);
  }
  lVar1 = local_70;
  if ((((local_68 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_68)) && (local_70 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar1);
  }
  return;
}



// FUNCTION 143274bc0 createBinaryConverter body=120 status=ok
// SIG undefined createBinaryConverter(void)

void physx::PxSerialization::createBinaryConverter(void)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a518,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x188,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerialization.cpp"
                     ,0x1b0);
  if (lVar5 != 0) {
    Sn::ConvX::ConvX(lVar5);
    return;
  }
  return;
}



// FUNCTION 143274c40 ~MetaDataStream body=118 status=ok
// SIG undefined ~MetaDataStream(void)

void `physx::PxSerialization::dumpBinaryMetaData'::`2'::MetaDataStream::~MetaDataStream
               (undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (lVar1 = param_1[3], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  if ((((*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x14))) && (lVar1 = param_1[1], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  *param_1 = &PTR__purecall_143f3ef70;
  return;
}



// FUNCTION 143274cc0 FUN_143274cc0 body=43 status=ok
// SIG undefined FUN_143274cc0(void)

undefined8 * FUN_143274cc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af1858;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143274cf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
`physx::PxSerialization::dumpBinaryMetaData'::`2'::MetaDataStream::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~MetaDataStream();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143274d30 FUN_143274d30 body=43 status=ok
// SIG undefined FUN_143274d30(void)

undefined8 * FUN_143274d30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af1858;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143274d60 FUN_143274d60 body=43 status=ok
// SIG undefined FUN_143274d60(void)

undefined8 * FUN_143274d60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af1858;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143274d90 addNewType body=181 status=ok
// SIG undefined addNewType(void)

undefined8
`physx::PxSerialization::dumpBinaryMetaData'::`2'::MetaDataStream::addNewType
          (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_res10 [3];
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    do {
      pcVar4 = *(char **)(*(longlong *)(param_1 + 0x18) + uVar7 * 8);
      lVar5 = param_2 - (longlong)pcVar4;
      do {
        cVar2 = *pcVar4;
        cVar3 = pcVar4[lVar5];
        if (cVar2 != cVar3) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        return 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x20));
  }
  if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) <= *(uint *)(param_1 + 0x20)) {
    local_res10[0] = param_2;
    physx::shdfnd::
    Array<char_const_*___ptr64,physx::shdfnd::ReflectionAllocator<char_const_*___ptr64>_>::
    growAndPushBack(param_1 + 0x18,local_res10);
    return 1;
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 1;
}



// FUNCTION 143274e50 addToStringTable body=293 status=ok
// SIG undefined addToStringTable(void)

ulonglong physx::Sn::addToStringTable(longlong *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  
  if (param_2 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 1);
  pcVar4 = (char *)*param_1;
  uVar7 = uVar3;
  do {
    if (uVar7 == 0) {
      cVar1 = *param_2;
      while (cVar1 != '\0') {
        if (*(uint *)(param_1 + 1) < (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff)) {
          pcVar4 = (char *)((ulonglong)*(uint *)(param_1 + 1) + *param_1);
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = cVar1;
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        }
        else {
          shdfnd::Array<char,physx::shdfnd::ReflectionAllocator<char>_>::growAndPushBack
                    (param_1,param_2);
        }
        pcVar4 = param_2 + 1;
        param_2 = param_2 + 1;
        cVar1 = *pcVar4;
      }
      local_res10[0] = 0;
      if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= *(uint *)(param_1 + 1)) {
        shdfnd::Array<char,physx::shdfnd::ReflectionAllocator<char>_>::growAndPushBack
                  (param_1,local_res10);
        return (ulonglong)uVar3;
      }
      puVar6 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + *param_1);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return (ulonglong)uVar3;
    }
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[(longlong)param_2 - (longlong)pcVar4];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    pcVar5 = pcVar4;
    if (cVar1 == cVar2) {
      return (longlong)pcVar4 - *param_1;
    }
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar7 = uVar7 + ((int)pcVar4 - (int)pcVar5);
    pcVar4 = pcVar5;
  } while( true );
}



// FUNCTION 143274f80 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<char>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a588,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143275020 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxConstraint_*___ptr64>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a5a0,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432750c0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<char_const_*___ptr64>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a540,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143275160 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxMetaDataEntry>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a558,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143275200 growAndPushBack body=198 status=ok
// SIG undefined growAndPushBack(void)

longlong physx::shdfnd::Array<char,physx::shdfnd::ReflectionAllocator<char>_>::growAndPushBack
                   (longlong *param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  PxAllocatorCallback *pPVar3;
  int iVar4;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (iVar4 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14327524b;
    }
  }
  _Dst = (void *)ReflectionAllocator<char>::allocate
                           (param_1,iVar4,
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14327524b:
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 1) + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)*param_1,
               (ulonglong)
               (uint)((int)(void *)((ulonglong)*(uint *)(param_1 + 1) + (longlong)_Dst) - (int)_Dst)
              );
  }
  if ((undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + (longlong)_Dst) != (undefined1 *)0x0) {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 1) + (longlong)_Dst) = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  *param_1 = (longlong)_Dst;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  return (longlong)_Dst + (ulonglong)uVar1;
}



// FUNCTION 1432752d0 growAndPushBack body=212 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<char_const_*___ptr64,physx::shdfnd::ReflectionAllocator<char_const_*___ptr64>_>::
       growAndPushBack(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  PxAllocatorCallback *pPVar4;
  uint uVar5;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14327531f;
    }
  }
  _Dst = (void *)ReflectionAllocator<char_const_*___ptr64>::allocate
                           (param_1,(ulonglong)uVar5 << 3,
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14327531f:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) * 8));
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  *param_1 = (longlong)_Dst;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 8);
}



// FUNCTION 1432753b0 growAndPushBack body=277 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::PxMetaDataEntry>_>::
       growAndPushBack(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  PxAllocatorCallback *pPVar5;
  uint uVar6;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
      goto LAB_143275403;
    }
  }
  _Dst = (void *)ReflectionAllocator<physx::PxMetaDataEntry>::allocate
                           (param_1,(ulonglong)uVar6 * 0x28,
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_143275403:
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x28 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)*param_1,
               (ulonglong)(uint)((int)(((ulonglong)*(uint *)(param_1 + 1) * 0x28) / 0x28) * 0x28));
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    uVar4 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar4;
    puVar1[4] = param_2[4];
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  *param_1 = (longlong)_Dst;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 0x28);
}



// FUNCTION 1432754d0 process body=96 status=ok
// SIG undefined process(void)

void `anonymous_namespace'::CompleteCallback::process(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), cVar2 != '\0')) {
      return;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2,0);
    }
  }
  return;
}



// FUNCTION 143275530 process body=57 status=ok
// SIG undefined process(void)

void `anonymous_namespace'::RequiresCallback::process(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2,0);
  }
  return;
}



// FUNCTION 143275570 recreate body=173 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxConstraint_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::PxConstraint_*___ptr64>_>
     ::recreate(longlong *param_1,uint param_2)

{
  longlong lVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxConstraint_*___ptr64>::allocate
                             (param_1,(ulonglong)param_2 << 3,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
    }
    *param_1 = (longlong)_Dst;
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    return;
  }
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  *param_1 = (longlong)_Dst;
  return;
}



// FUNCTION 143275620 resize body=151 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxConstraint_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::PxConstraint_*___ptr64>_>
     ::resize(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*param_1 + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
      *(uint *)(param_1 + 1) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 1432756c0 write body=165 status=ok
// SIG int write(int _Filehandle, void * _Buf, uint _MaxCharCount)

int __cdecl
`physx::PxSerialization::dumpBinaryMetaData'::`2'::MetaDataStream::write
          (int _Filehandle,void *_Buf,uint _MaxCharCount)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 in_register_0000000c;
  longlong lVar4;
  
  lVar4 = CONCAT44(in_register_0000000c,_Filehandle);
  if (((*(uint *)((longlong)_Buf + 0x20) & 4) != 0) ||
     (((*(uint *)((longlong)_Buf + 0x20) & 1) != 0 && (*(longlong *)((longlong)_Buf + 8) == 0)))) {
    uVar3 = addNewType(lVar4,*(undefined8 *)_Buf);
    *(undefined1 *)(lVar4 + 0x28) = uVar3;
  }
  if (*(char *)(lVar4 + 0x28) != '\0') {
    if ((*(uint *)(lVar4 + 0x14) & 0x7fffffff) <= *(uint *)(lVar4 + 0x10)) {
      physx::shdfnd::
      Array<physx::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::PxMetaDataEntry>_>::
      growAndPushBack(lVar4 + 8,_Buf);
      return _MaxCharCount;
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 8) + (ulonglong)*(uint *)(lVar4 + 0x10) * 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)((longlong)_Buf + 8);
      *puVar1 = *(undefined8 *)_Buf;
      puVar1[1] = uVar2;
      uVar2 = *(undefined8 *)((longlong)_Buf + 0x18);
      puVar1[2] = *(undefined8 *)((longlong)_Buf + 0x10);
      puVar1[3] = uVar2;
      puVar1[4] = *(undefined8 *)((longlong)_Buf + 0x20);
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  return _MaxCharCount;
}



// FUNCTION 143275770 serializeCollectionToBinary body=2687 status=ok
// SIG undefined serializeCollectionToBinary(void)

undefined1
physx::PxSerialization::serializeCollectionToBinary
          (undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
          undefined1 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  PxAllocatorCallback *pPVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint local_218;
  uint local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined **local_200;
  undefined8 *local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8;
  int local_1e0;
  uint local_1dc;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8 [4];
  undefined1 local_1a8 [64];
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong local_150;
  longlong local_118;
  int local_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong local_100;
  longlong local_f8;
  uint *local_f0;
  int local_e8;
  uint local_e4;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  uint *local_b8;
  int local_b0;
  uint local_ac;
  undefined4 local_9c;
  longlong local_98;
  undefined1 local_50 [40];
  
  cVar8 = isSerializable(param_2,param_3,param_4);
  if (cVar8 == '\0') {
    return 0;
  }
  Sn::sortCollection(param_2,param_3,0);
  Sn::SerializationContext::SerializationContext(local_158,param_2,param_4);
  uVar16 = 0;
  if (*(uint *)((longlong)param_2 + 0x74) != 0) {
    uVar19 = (ulonglong)*(uint *)((longlong)param_2 + 0x74);
    uVar20 = uVar16;
    do {
      lVar21 = *(longlong *)(uVar20 + param_2[9]);
      plVar11 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3,*(undefined2 *)(lVar21 + 8));
      (**(code **)(*plVar11 + 0x28))(plVar11,lVar21,local_158);
      uVar20 = uVar20 + 0x10;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  local_200 = &PTR_registerReference_145af1e68;
  local_1f8 = &local_168;
  local_160 = 0;
  local_1e8 = param_5;
  local_214 = 0x44424553;
  local_1f0 = param_2;
  local_168 = param_1;
  `anonymous_namespace'::LegacySerialStream::writeData(&local_200,&local_214,4);
  local_218 = 0x3040000;
  (*(code *)local_200[2])(&local_200,&local_218,4);
  local_1c0 = 0;
  (*(code *)local_200[2])(&local_200,&local_1c0,4);
  local_1bc = 0;
  (*(code *)local_200[2])(&local_200,&local_1bc,4);
  local_1dc = Sn::getBinaryPlatformTag();
  (*(code *)local_200[2])(&local_200,&local_1dc,4);
  local_1e0 = 0;
  (*(code *)local_200[2])(&local_200,&local_1e0,4);
  puVar15 = local_1f8;
  uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
  ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
  if (uVar14 != 0) {
    do {
      uVar18 = 0x40;
      if ((int)uVar14 < 0x40) {
        uVar18 = uVar14;
      }
      (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
      uVar14 = uVar14 - 0x40;
      puVar15 = local_1f8;
    } while (0 < (int)uVar14);
  }
  local_1b8[0] = *(undefined4 *)((longlong)param_2 + 0x74);
  iVar9 = (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,local_1b8,4);
  local_210 = 0;
  *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar9;
  uStack_208 = 0;
  shdfnd::
  Array<physx::Sn::ManifestEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::ManifestEntry>_>::
  resize(&local_210,*(undefined4 *)((longlong)param_2 + 0x74),&local_1dc);
  lVar21 = local_210;
  local_218 = 0;
  uVar20 = uVar16;
  if (*(int *)((longlong)param_2 + 0x74) != 0) {
    do {
      uVar3 = *(undefined2 *)(*(longlong *)(param_2[9] + uVar20 * 0x10) + 8);
      plVar11 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3,uVar3);
      local_1dc = local_218;
      *(ulonglong *)(lVar21 + uVar20 * 8) = CONCAT26(uStack_1d6,CONCAT24(uVar3,local_218));
      uStack_1d8 = uVar3;
      iVar9 = (**(code **)(*plVar11 + 0x30))(plVar11);
      uVar14 = (int)uVar20 + 1;
      local_218 = local_218 + (-iVar9 & 0xfU) + iVar9;
      uVar20 = (ulonglong)uVar14;
    } while (uVar14 < *(uint *)((longlong)param_2 + 0x74));
  }
  puVar15 = local_1f8;
  uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
  ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
  if (uVar14 != 0) {
    do {
      uVar18 = 0x40;
      if ((int)uVar14 < 0x40) {
        uVar18 = uVar14;
      }
      (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
      uVar14 = uVar14 - 0x40;
      puVar15 = local_1f8;
    } while (0 < (int)uVar14);
  }
  iVar9 = (int)uStack_208;
  local_1e0 = (int)uStack_208;
  iVar10 = (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,&local_1e0,4);
  puVar7 = local_1f8;
  *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar10;
  iVar9 = (*(code *)**(undefined8 **)*local_1f8)((undefined8 *)*local_1f8,lVar21,iVar9 * 8);
  puVar15 = local_1f8;
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + iVar9;
  iVar9 = (*(code *)**(undefined8 **)*local_1f8)((undefined8 *)*local_1f8,&local_218,4);
  *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar9;
  if ((((uStack_208 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_208)) && (lVar21 != 0)) {
    pPVar12 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12);
  }
  puVar15 = local_1f8;
  uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
  ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
  if (uVar14 != 0) {
    do {
      uVar18 = 0x40;
      if ((int)uVar14 < 0x40) {
        uVar18 = uVar14;
      }
      (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
      uVar14 = uVar14 - 0x40;
      puVar15 = local_1f8;
    } while (0 < (int)uVar14);
  }
  local_1e0 = local_110;
  iVar9 = (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,&local_1e0,4);
  puVar7 = local_1f8;
  *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar9;
  iVar9 = (*(code *)**(undefined8 **)*local_1f8)((undefined8 *)*local_1f8,local_118,local_110 << 4);
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + iVar9;
  local_218 = (**(code **)(*param_2 + 0x58))(param_2);
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,0xffffffff);
  local_210 = 0;
  uStack_208 = 0;
  shdfnd::
  Array<physx::Sn::ExportReference,physx::shdfnd::ReflectionAllocator<physx::Sn::ExportReference>_>
  ::resize(&local_210,local_218,&local_1d0);
  local_218 = 0;
  iVar9 = (**(code **)(*param_2 + 0x38))(param_2);
  lVar21 = local_210;
  uVar20 = uVar16;
  if (iVar9 != 0) {
    do {
      iVar9 = (int)uVar20;
      (**(code **)(*param_2 + 0x40))(param_2,uVar20);
      lVar13 = (**(code **)(*param_2 + 0x68))(param_2);
      if (lVar13 != 0) {
        uVar20 = (ulonglong)local_218;
        local_218 = local_218 + 1;
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,iVar9);
        local_1d0._0_4_ = (undefined4)lVar13;
        local_1d0._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
        puVar1 = (undefined4 *)(lVar21 + uVar20 * 0x10);
        *puVar1 = (undefined4)local_1d0;
        puVar1[1] = local_1d0._4_4_;
        puVar1[2] = iVar9;
        puVar1[3] = uStack_1c8._4_4_;
        local_1d0 = lVar13;
      }
      uVar20 = (ulonglong)(iVar9 + 1U);
      uVar14 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (iVar9 + 1U < uVar14);
  }
  puVar15 = local_1f8;
  uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
  ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
  if (uVar14 != 0) {
    do {
      uVar18 = 0x40;
      if ((int)uVar14 < 0x40) {
        uVar18 = uVar14;
      }
      (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
      uVar14 = uVar14 - 0x40;
      puVar15 = local_1f8;
    } while (0 < (int)uVar14);
  }
  iVar9 = (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,&local_218,4);
  puVar7 = local_1f8;
  *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar9;
  iVar9 = (*(code *)**(undefined8 **)*local_1f8)
                    ((undefined8 *)*local_1f8,lVar21,(int)uStack_208 << 4);
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + iVar9;
  if ((((uStack_208 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_208)) && (lVar21 != 0)) {
    pPVar12 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12,lVar21);
  }
  uStack_208 = CONCAT44(0xffffffff,(int)uStack_208);
  local_1d0 = 0;
  uStack_1c8 = 0;
  shdfnd::
  Array<physx::Sn::InternalReference<unsigned___int64>,physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned___int64>_>_>
  ::resize(&local_1d0,local_d4,&local_210);
  lVar21 = local_1d0;
  local_218 = 0;
  if (local_e8 != 0) {
    uVar14 = *local_f0;
    uVar20 = uVar16;
    do {
      uVar19 = 0;
      if (uVar14 != 0xffffffff) {
        do {
          while( true ) {
            uVar17 = (ulonglong)uVar14;
            local_218 = (int)uVar19 + 1;
            puVar15 = (undefined8 *)(local_100 + uVar17 * 0x18);
            uVar4 = *(undefined4 *)(local_100 + 0x10 + uVar17 * 0x18);
            uVar6 = *puVar15;
            uVar5 = *(undefined4 *)(puVar15 + 1);
            local_210._0_4_ = (undefined4)uVar6;
            local_210._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            puVar1 = (undefined4 *)(local_1d0 + uVar19 * 0x10);
            *puVar1 = (undefined4)local_210;
            puVar1[1] = local_210._4_4_;
            puVar1[2] = uVar5;
            puVar1[3] = uVar4;
            uVar14 = *(uint *)(local_f8 + uVar17 * 4);
            if (uVar14 == 0xffffffff) break;
LAB_143275d80:
            uVar19 = (ulonglong)local_218;
          }
          do {
            uVar18 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar18;
            if (uVar18 == local_e4) {
              if (uVar14 != 0xffffffff) goto LAB_143275d80;
              goto LAB_143275d86;
            }
            uVar14 = local_f0[uVar20];
          } while (uVar14 == 0xffffffff);
          uVar19 = (ulonglong)local_218;
        } while( true );
      }
      uVar14 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar14;
      if (uVar14 == local_e4) break;
      uVar14 = local_f0[uVar20];
    } while( true );
  }
LAB_143275d86:
  local_1d4 = 0xffffffff;
  local_210 = 0;
  uStack_208 = 0;
  shdfnd::
  Array<physx::Sn::InternalReference<unsigned_int>,physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned_int>_>_>
  ::resize(&local_210,local_9c,&local_1dc);
  puVar15 = local_1f8;
  lVar13 = local_210;
  local_214 = 0;
  if (local_b0 == 0) {
LAB_143275e7a:
    uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
    ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
    if (uVar14 != 0) {
      do {
        uVar18 = 0x40;
        if ((int)uVar14 < 0x40) {
          uVar18 = uVar14;
        }
        (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
        uVar14 = uVar14 - 0x40;
        puVar15 = local_1f8;
      } while (0 < (int)uVar14);
    }
    iVar9 = (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,&local_218,4);
    puVar7 = local_1f8;
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar9;
    iVar9 = (*(code *)**(undefined8 **)*local_1f8)
                      ((undefined8 *)*local_1f8,lVar21,(int)uStack_1c8 << 4);
    puVar15 = local_1f8;
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + iVar9;
    iVar9 = (*(code *)**(undefined8 **)*local_1f8)((undefined8 *)*local_1f8,&local_214,4);
    puVar7 = local_1f8;
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + iVar9;
    iVar9 = (*(code *)**(undefined8 **)*local_1f8)
                      ((undefined8 *)*local_1f8,lVar13,(int)uStack_208 * 0xc);
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + iVar9;
    if ((((uStack_208 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_208)) && (lVar13 != 0))
    {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12);
    }
    if ((((uStack_1c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_1c8)) && (lVar21 != 0))
    {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12);
    }
    uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
    ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
    if (uVar14 != 0) {
      do {
        uVar18 = 0x40;
        if ((int)uVar14 < 0x40) {
          uVar18 = uVar14;
        }
        (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
        uVar14 = uVar14 - 0x40;
      } while (0 < (int)uVar14);
    }
    if (*(uint *)((longlong)param_2 + 0x74) != 0) {
      uVar20 = (ulonglong)*(uint *)((longlong)param_2 + 0x74);
      do {
        uVar6 = *(undefined8 *)(uVar16 + param_2[9]);
        plVar11 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3);
        uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
        ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
        if (uVar14 != 0) {
          do {
            uVar18 = 0x40;
            if ((int)uVar14 < 0x40) {
              uVar18 = uVar14;
            }
            (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
            uVar14 = uVar14 - 0x40;
          } while (0 < (int)uVar14);
        }
        (**(code **)(*plVar11 + 0x20))(plVar11,uVar6,&local_200);
        uVar16 = uVar16 + 0x10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    lVar21 = 0;
    if (*(uint *)((longlong)param_2 + 0x74) != 0) {
      uVar16 = (ulonglong)*(uint *)((longlong)param_2 + 0x74);
      do {
        uVar6 = *(undefined8 *)(lVar21 + param_2[9]);
        plVar11 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3);
        uVar14 = -*(int *)(local_1f8 + 1) & 0xf;
        ::_guard_xfg_dispatch_icall_nop(local_1a8,0,(ulonglong)uVar14);
        if (uVar14 != 0) {
          do {
            uVar18 = 0x40;
            if ((int)uVar14 < 0x40) {
              uVar18 = uVar14;
            }
            (*(code *)local_200[2])(&local_200,local_1a8,uVar18);
            uVar14 = uVar14 - 0x40;
          } while (0 < (int)uVar14);
        }
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,&local_200);
        lVar21 = lVar21 + 0x10;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    local_200 = &PTR__purecall_145af1d40;
    PxDefaultMemoryOutputStream::~PxDefaultMemoryOutputStream(local_50);
    if (local_98 != 0) {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12,local_98);
    }
    if (local_d0 != 0) {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12,local_d0);
    }
    if (CONCAT44(uStack_104,local_108) != 0) {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12,CONCAT44(uStack_104,local_108));
    }
    if ((((uStack_10c & 0x7fffffff) != 0) && (-1 < (int)uStack_10c)) && (local_118 != 0)) {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12,local_118);
    }
    if (local_150 != 0) {
      pPVar12 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar12 + 0x10))(pPVar12,local_150);
    }
    return 1;
  }
  uVar14 = *local_b8;
  uVar20 = uVar16;
  do {
    uVar19 = 0;
    if (uVar14 != 0xffffffff) {
      do {
        while( true ) {
          uVar17 = (ulonglong)uVar14;
          local_214 = (int)uVar19 + 1;
          lVar2 = local_c8 + uVar17 * 0x18;
          local_1dc = *(uint *)(local_c8 + uVar17 * 0x18);
          uVar4 = *(undefined4 *)(lVar2 + 0x10);
          uVar5 = *(undefined4 *)(lVar2 + 8);
          uStack_1d8 = (undefined2)uVar5;
          uStack_1d6 = (undefined2)((uint)uVar5 >> 0x10);
          *(ulonglong *)(local_210 + uVar19 * 0xc) =
               CONCAT26(uStack_1d6,CONCAT24(uStack_1d8,local_1dc));
          *(undefined4 *)(local_210 + 8 + uVar19 * 0xc) = uVar4;
          uVar14 = *(uint *)(local_c0 + uVar17 * 4);
          if (uVar14 == 0xffffffff) break;
LAB_143275e74:
          uVar19 = (ulonglong)local_214;
        }
        do {
          uVar18 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar18;
          if (uVar18 == local_ac) {
            if (uVar14 != 0xffffffff) goto LAB_143275e74;
            goto LAB_143275e7a;
          }
          uVar14 = local_b8[uVar20];
        } while (uVar14 == 0xffffffff);
        uVar19 = (ulonglong)local_214;
      } while( true );
    }
    uVar14 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar14;
    if (uVar14 == local_ac) goto LAB_143275e7a;
    uVar14 = local_b8[uVar20];
  } while( true );
}



// FUNCTION 1432761f0 SerializationContext body=413 status=ok
// SIG undefined SerializationContext(void)

undefined8 *
physx::Sn::SerializationContext::SerializationContext
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  char local_res8 [8];
  undefined8 local_res10;
  ulonglong uVar7;
  
  uVar7 = 0;
  *param_1 = &PTR_registerReference_145af1d70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned___int64_const_,unsigned_int>,unsigned___int64,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::internal::HashMapBase<unsigned___int64,unsigned_int,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(param_1 + 1,0x40);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  param_1[0x10] = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_const_,physx::Sn::SerialObjectIndex>,physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::internal::HashMapBase<physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::Sn::SerialObjectIndex,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(param_1 + 10,0x40);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  param_1[0x17] = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_const_,physx::Sn::SerialObjectIndex>,physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::internal::HashMapBase<physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::Sn::SerialObjectIndex,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(param_1 + 0x11,0x40);
  puVar1 = param_1 + 0x18;
  *puVar1 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  param_1[0x1e] = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned___int64_const_,unsigned_int>,unsigned___int64,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::internal::HashMapBase<unsigned___int64,unsigned_int,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(puVar1,0x40);
  param_1[0x1f] = param_2;
  param_1[0x20] = param_3;
  plVar2 = (longlong *)PxGetFoundation();
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
  PxDefaultMemoryOutputStream::PxDefaultMemoryOutputStream(param_1 + 0x21,uVar3);
  lVar4 = param_1[0x1f];
  if (*(int *)(lVar4 + 0x74) != 0) {
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 0x48) + uVar7 * 0x10);
      local_res10 = uVar3;
      puVar5 = (undefined8 *)
               shdfnd::internal::
               HashBase<physx::shdfnd::Pair<physx::PxBase_const_*___ptr64_const,unsigned_int>,physx::PxBase_const_*___ptr64,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_const_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
               ::create(puVar1,&local_res10,local_res8);
      if ((local_res8[0] == '\0') && (puVar5 != (undefined8 *)0x0)) {
        *puVar5 = uVar3;
        *(undefined4 *)(puVar5 + 1) = 0;
      }
      *(int *)(puVar5 + 1) = (int)uVar7;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      lVar4 = param_1[0x1f];
    } while (uVar6 < *(uint *)(lVar4 + 0x74));
  }
  return param_1;
}



// FUNCTION 143276390 ~SerializationContext body=206 status=ok
// SIG undefined ~SerializationContext(void)

void physx::Sn::SerializationContext::~SerializationContext(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  PxDefaultMemoryOutputStream::~PxDefaultMemoryOutputStream(param_1 + 0x21);
  lVar1 = param_1[0x18];
  if (lVar1 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  if ((((*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x4c))) && (lVar1 = param_1[8], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  *param_1 = &PTR__purecall_145af1d40;
  return;
}



// FUNCTION 143276460 FUN_143276460 body=43 status=ok
// SIG undefined FUN_143276460(void)

undefined8 * FUN_143276460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1d40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143276490 FUN_143276490 body=43 status=ok
// SIG undefined FUN_143276490(void)

undefined8 * FUN_143276490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1d40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432764c0 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong physx::Sn::SerializationContext::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  ~SerializationContext();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x128);
    }
  }
  return param_1;
}



// FUNCTION 143276530 alignData body=125 status=ok
// SIG undefined alignData(void)

void `anonymous_namespace'::LegacySerialStream::alignData(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_48 [64];
  
  if (param_2 != 0) {
    uVar2 = param_2 - (*(uint *)(param_1[1] + 8) & param_2 - 1U) & param_2 - 1U;
    uVar1 = 0x40;
    if ((int)uVar2 < 0x40) {
      uVar1 = uVar2;
    }
    ::_guard_xfg_dispatch_icall_nop(local_48,0,(ulonglong)uVar1);
    for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x40) {
      uVar1 = 0x40;
      if ((int)uVar2 < 0x40) {
        uVar1 = uVar2;
      }
      (**(code **)(*param_1 + 0x10))(param_1,local_48,uVar1);
    }
  }
  return;
}



// FUNCTION 1432765b0 alignData body=124 status=ok
// SIG undefined alignData(void)

void physx::Sn::SerializationContext::alignData(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_48 [64];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x108);
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = param_2 - (uVar2 & param_2 - 1U) & param_2 - 1U;
    uVar2 = 0x40;
    if ((int)uVar3 < 0x40) {
      uVar2 = uVar3;
    }
    ::_guard_xfg_dispatch_icall_nop(local_48,0,(ulonglong)uVar2);
    for (; 0 < (int)uVar3; uVar3 = uVar3 - 0x40) {
      uVar2 = 0x40;
      if ((int)uVar3 < 0x40) {
        uVar2 = uVar3;
      }
      (**(code **)*plVar1)(plVar1,local_48,uVar2);
    }
  }
  return;
}



// FUNCTION 143276630 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned_int>_>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a5d0,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432766d0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned___int64>_>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a608,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143276770 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::ExportReference>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a640,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143276810 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::ManifestEntry>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a670,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432768b0 create body=399 status=ok
// SIG undefined create(void)

longlong physx::shdfnd::internal::
         HashBase<physx::shdfnd::Pair<physx::PxBase_const_*___ptr64_const,unsigned_int>,physx::PxBase_const_*___ptr64,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_const_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
         ::create(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = *param_2;
    uVar2 = ~(lVar1 << 0x20) + lVar1;
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar2 = uVar2 + ~(uVar2 << 0xd);
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + ~(uVar2 << 0x1b);
    uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x24) - 1U);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar2 * 4);
    bVar5 = uVar3 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 0x10) == lVar1) break;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
      bVar5 = uVar3 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar4 = 0x10;
    if (uVar3 != 0) {
      uVar4 = uVar3 * 2;
    }
    if (uVar3 < uVar4) {
      HashBase<physx::shdfnd::Pair<unsigned___int64_const_,unsigned_int>,unsigned___int64,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::internal::HashMapBase<unsigned___int64,unsigned_int,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
      ::reserveInternal(param_1);
    }
    uVar2 = *param_2 + ~(*param_2 << 0x20);
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar2 = uVar2 + ~(uVar2 << 0xd);
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + ~(uVar2 << 0x1b);
    uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x24) - 1U);
  }
  uVar3 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar3 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar2 * 4) = uVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 8);
}



// FUNCTION 143276a60 recreate body=201 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::Sn::InternalReference<unsigned_int>,physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned_int>_>_>
     ::recreate(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  PxAllocatorCallback *pPVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)
             ReflectionAllocator<physx::Sn::InternalReference<unsigned_int>_>::allocate
                       (param_1,(ulonglong)param_2 * 0xc,
                        "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                        ,0x25d);
  }
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  for (puVar4 = puVar3; puVar4 < puVar3 + (ulonglong)uVar1 * 3; puVar4 = puVar4 + 3) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
    }
    puVar6 = puVar6 + 3;
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    *param_1 = (longlong)puVar3;
    return;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar2);
  }
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 143276b30 recreate body=203 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::Sn::InternalReference<unsigned___int64>,physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned___int64>_>_>
     ::recreate(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PxAllocatorCallback *pPVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             ReflectionAllocator<physx::Sn::InternalReference<unsigned___int64>_>::allocate
                       (param_1,(ulonglong)param_2 << 4,
                        "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                        ,0x25d);
  }
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  for (puVar4 = puVar3; puVar4 < puVar3 + (ulonglong)uVar1 * 2; puVar4 = puVar4 + 2) {
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *puVar6;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
    }
    puVar6 = puVar6 + 2;
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    *param_1 = (longlong)puVar3;
    return;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar2);
  }
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 143276c00 recreate body=197 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::Sn::ExportReference,physx::shdfnd::ReflectionAllocator<physx::Sn::ExportReference>_>
     ::recreate(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PxAllocatorCallback *pPVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             ReflectionAllocator<physx::Sn::ExportReference>::allocate
                       (param_1,(ulonglong)param_2 << 4,
                        "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                        ,0x25d);
  }
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  for (puVar4 = puVar3; puVar4 < puVar3 + (ulonglong)uVar1 * 2; puVar4 = puVar4 + 2) {
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *puVar6;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    }
    puVar6 = puVar6 + 2;
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    *param_1 = (longlong)puVar3;
    return;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar2);
  }
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 143276cd0 recreate body=191 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::Sn::ManifestEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::ManifestEntry>_>::
     recreate(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PxAllocatorCallback *pPVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             ReflectionAllocator<physx::Sn::ManifestEntry>::allocate
                       (param_1,(ulonglong)param_2 << 3,
                        "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                        ,0x25d);
  }
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  for (puVar4 = puVar3; puVar4 < puVar3 + uVar1; puVar4 = puVar4 + 1) {
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *puVar6;
    }
    puVar6 = puVar6 + 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    *param_1 = (longlong)puVar3;
    return;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar2);
  }
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 143276d90 registerReference body=54 status=ok
// SIG undefined registerReference(void)

void `anonymous_namespace'::LegacySerialStream::registerReference(void)

{
  Foundation *this;
  
  this = physx::shdfnd::Foundation::getInstance();
  physx::shdfnd::Foundation::error
            (this,8,
             "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnBinarySerialization.cpp"
             ,0xb4,"Cannot register references during exportData, exportExtraData.");
  return;
}



// FUNCTION 143276dd0 reserveInternal body=578 status=ok
// SIG undefined reserveInternal(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_const_,physx::Sn::SerialObjectIndex>,physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::internal::HashMapBase<physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::Sn::SerialObjectIndex,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
     ::reserveInternal(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  PxAllocatorCallback *pPVar6;
  ulonglong uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar9 = (uint)param_2;
  uVar7 = param_2 & 0xffffffff;
  if ((uVar9 == 0) || ((uVar9 & uVar9 - 1) != 0)) {
    uVar9 = (uint)(param_2 >> 1) & 0x7fffffff | uVar9;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar7 = (ulonglong)((uVar9 >> 0x10 | uVar9) + 1);
  }
  lVar5 = param_1[4];
  iVar3 = (int)uVar7;
  uVar9 = iVar3 * 4;
  pvVar8 = (void *)0x0;
  iVar4 = (int)(longlong)((float)uVar7 * *(float *)(param_1 + 5));
  iVar10 = iVar4 * 4 + uVar9;
  uVar11 = iVar10 + (-iVar10 & 0xfU);
  iVar10 = uVar11 + iVar4 * 0x18;
  _Dst = pvVar8;
  if (iVar10 != 0) {
    pPVar6 = physx::shdfnd::getAllocator();
    _Dst = (void *)(**(code **)(*(longlong *)pPVar6 + 8))
                             (pPVar6,iVar10,"NonTrackedAlloc",
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsHashInternals.h"
                              ,0x174);
  }
  lVar12 = (ulonglong)uVar11 + (longlong)_Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,-1,(ulonglong)uVar9);
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      iVar10 = *(int *)(param_1[1] + 8 + (longlong)pvVar8 * 0x18);
      uVar11 = iVar10 + ~(iVar10 << 0xf);
      lVar2 = *(longlong *)(param_1[1] + (longlong)pvVar8 * 0x18);
      uVar11 = (uVar11 >> 10 ^ uVar11) * 9;
      uVar11 = uVar11 ^ uVar11 >> 6;
      uVar11 = uVar11 + ~(uVar11 << 0xb);
      uVar7 = lVar2 + ~(lVar2 << 0x20);
      uVar7 = uVar7 ^ uVar7 >> 0x16;
      uVar7 = uVar7 + ~(uVar7 << 0xd);
      uVar7 = (uVar7 >> 8 ^ uVar7) * 9;
      uVar7 = uVar7 ^ uVar7 >> 0xf;
      uVar7 = uVar7 + ~(uVar7 << 0x1b);
      puVar1 = (undefined8 *)(lVar12 + (longlong)pvVar8 * 0x18);
      uVar7 = (ulonglong)
              ((((uint)(uVar7 >> 0x1f) ^ (uint)uVar7 ^ 0xfc955b95) * 0xf4247 ^ uVar11 >> 0x10 ^
               uVar11) & iVar3 - 1U);
      *(undefined4 *)((ulonglong)uVar9 + (longlong)_Dst + (longlong)pvVar8 * 4) =
           *(undefined4 *)((longlong)_Dst + uVar7 * 4);
      *(int *)((longlong)_Dst + uVar7 * 4) = (int)pvVar8;
      if (puVar1 != (undefined8 *)0x0) {
        lVar2 = param_1[1];
        *puVar1 = *(undefined8 *)(lVar2 + (longlong)pvVar8 * 0x18);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar2 + 8 + (longlong)pvVar8 * 0x18);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar2 + 0x10 + (longlong)pvVar8 * 0x18);
      }
      uVar11 = (int)pvVar8 + 1;
      pvVar8 = (void *)(ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0x34));
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,lVar2);
  }
  *param_1 = (longlong)_Dst;
  param_1[3] = (longlong)_Dst;
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  param_1[2] = (ulonglong)uVar9 + (longlong)_Dst;
  param_1[1] = lVar12;
  *(int *)(param_1 + 4) = iVar4;
  if (*(int *)((longlong)param_1 + 0x2c) == -1) {
    *(int *)((longlong)param_1 + 0x2c) = (int)lVar5;
  }
  return;
}



// FUNCTION 143277020 reserveInternal body=493 status=ok
// SIG undefined reserveInternal(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned___int64_const_,unsigned_int>,unsigned___int64,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::internal::HashMapBase<unsigned___int64,unsigned_int,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
     ::reserveInternal(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  PxAllocatorCallback *pPVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar10 = (uint)param_2;
  uVar5 = param_2 & 0xffffffff;
  if ((uVar10 == 0) || ((uVar10 & uVar10 - 1) != 0)) {
    uVar10 = (uint)(param_2 >> 1) & 0x7fffffff | uVar10;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar5 = (ulonglong)((uVar10 >> 0x10 | uVar10) + 1);
  }
  lVar3 = param_1[4];
  iVar2 = (int)uVar5;
  uVar11 = iVar2 * 4;
  pvVar9 = (void *)0x0;
  iVar12 = (int)(longlong)((float)uVar5 * *(float *)(param_1 + 5));
  iVar7 = uVar11 + iVar12 * 4;
  uVar10 = iVar7 + (-iVar7 & 0xfU);
  iVar7 = iVar12 * 0x10 + uVar10;
  _Dst = pvVar9;
  if (iVar7 != 0) {
    pPVar4 = physx::shdfnd::getAllocator();
    _Dst = (void *)(**(code **)(*(longlong *)pPVar4 + 8))
                             (pPVar4,iVar7,"NonTrackedAlloc",
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsHashInternals.h"
                              ,0x174);
  }
  lVar8 = (ulonglong)uVar10 + (longlong)_Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,-1,(ulonglong)uVar11);
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      lVar1 = *(longlong *)(param_1[1] + (longlong)pvVar9 * 0x10);
      uVar5 = lVar1 + ~(lVar1 << 0x20);
      uVar5 = uVar5 ^ uVar5 >> 0x16;
      uVar5 = uVar5 + ~(uVar5 << 0xd);
      uVar5 = (uVar5 >> 8 ^ uVar5) * 9;
      uVar5 = uVar5 ^ uVar5 >> 0xf;
      uVar5 = uVar5 + ~(uVar5 << 0x1b);
      uVar5 = (uVar5 >> 0x1f & 0xffffffff ^ uVar5 & 0xffffffff) & (ulonglong)(iVar2 - 1);
      *(undefined4 *)((ulonglong)uVar11 + (longlong)_Dst + (longlong)pvVar9 * 4) =
           *(undefined4 *)((longlong)_Dst + uVar5 * 4);
      *(int *)((longlong)_Dst + uVar5 * 4) = (int)pvVar9;
      puVar6 = (undefined8 *)((longlong)pvVar9 * 0x10 + lVar8);
      if (puVar6 != (undefined8 *)0x0) {
        lVar1 = param_1[1];
        *puVar6 = *(undefined8 *)(lVar1 + (longlong)pvVar9 * 0x10);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar1 + 8 + (longlong)pvVar9 * 0x10);
      }
      uVar10 = (int)pvVar9 + 1;
      pvVar9 = (void *)(ulonglong)uVar10;
    } while (uVar10 < *(uint *)((longlong)param_1 + 0x34));
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar1);
  }
  *param_1 = (longlong)_Dst;
  param_1[3] = (longlong)_Dst;
  *(int *)((longlong)param_1 + 0x24) = iVar2;
  param_1[2] = (ulonglong)uVar11 + (longlong)_Dst;
  param_1[1] = lVar8;
  *(int *)(param_1 + 4) = iVar12;
  if (*(int *)((longlong)param_1 + 0x2c) == -1) {
    *(int *)((longlong)param_1 + 0x2c) = (int)lVar3;
  }
  return;
}



// FUNCTION 143277210 resize body=117 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::Sn::InternalReference<unsigned_int>,physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned_int>_>_>
     ::resize(longlong *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  lVar1 = *param_1;
  for (puVar2 = (undefined4 *)(lVar1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc);
      puVar2 < (undefined4 *)(lVar1 + (ulonglong)param_2 * 0xc); puVar2 = puVar2 + 3) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 143277290 resize body=117 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::Sn::InternalReference<unsigned___int64>,physx::shdfnd::ReflectionAllocator<physx::Sn::InternalReference<unsigned___int64>_>_>
     ::resize(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  lVar1 = *param_1;
  for (puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
      puVar2 < (undefined8 *)((ulonglong)param_2 * 0x10 + lVar1); puVar2 = puVar2 + 2) {
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_3;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 143277310 resize body=111 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::Sn::ExportReference,physx::shdfnd::ReflectionAllocator<physx::Sn::ExportReference>_>
     ::resize(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  lVar1 = *param_1;
  for (puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1);
      puVar2 < (undefined8 *)((ulonglong)param_2 * 0x10 + lVar1); puVar2 = puVar2 + 2) {
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_3;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 143277380 resize body=103 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::Sn::ManifestEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::ManifestEntry>_>::
     resize(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  lVar1 = *param_1;
  for (puVar2 = (undefined8 *)(lVar1 + (ulonglong)*(uint *)(param_1 + 1) * 8);
      puVar2 < (undefined8 *)(lVar1 + (ulonglong)param_2 * 8); puVar2 = puVar2 + 1) {
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_3;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 1432773f0 writeData body=27 status=ok
// SIG undefined writeData(void)

void `anonymous_namespace'::LegacySerialStream::writeData(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  iVar3 = (*(code *)**(undefined8 **)*puVar2)();
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + iVar3;
  return;
}



// FUNCTION 143277420 writeName body=107 status=ok
// SIG undefined writeName(void)

void `anonymous_namespace'::LegacySerialStream::writeName(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int local_res8 [2];
  
  if ((param_2 == 0) || ((char)param_1[3] == '\0')) {
    local_res8[0] = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_res8[0] = (int)lVar1 + 1;
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_res8,4);
  if (local_res8[0] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
  }
  return;
}



// FUNCTION 143277490 writeName body=54 status=ok
// SIG undefined writeName(void)

void physx::Sn::SerializationContext::writeName(void)

{
  Foundation *this;
  
  this = physx::shdfnd::Foundation::getInstance();
  physx::shdfnd::Foundation::error
            (this,8,
             "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\binary\\SnSerializationContext.h"
             ,0x107,"Cannot export names during exportData.");
  return;
}



// FUNCTION 1432774d0 createSerializationRegistry body=140 status=ok
// SIG undefined createSerializationRegistry(void)

void physx::PxSerialization::createSerializationRegistry(undefined8 param_1)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a6a0,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x90,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
                     ,0x11b);
  if (lVar5 != 0) {
    Sn::SerializationRegistry::SerializationRegistry(lVar5,param_1);
    return;
  }
  return;
}



// FUNCTION 143277570 SerializationRegistry body=317 status=ok
// SIG undefined SerializationRegistry(void)

undefined8 *
physx::Sn::SerializationRegistry::SerializationRegistry(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *local_res8;
  
  param_1[1] = param_2;
  *param_1 = &PTR_registerSerializer_145af2040;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  param_1[8] = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(param_1 + 2,0x40);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  param_1[0xf] = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(param_1 + 9,0x40);
  plVar1 = param_1 + 0x10;
  *plVar1 = 0;
  param_1[0x11] = 0;
  ::_guard_xfg_dispatch_icall_nop(param_1);
  Ext::RegisterExtensionsSerializers(param_1);
  local_res8 = (code *)&DAT_143de3181;
  if (*(uint *)(param_1 + 0x11) < (*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff)) {
    puVar2 = (undefined8 *)(*plVar1 + (ulonglong)*(uint *)(param_1 + 0x11) * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &DAT_143de3181;
    }
    *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + 1;
  }
  else {
    shdfnd::
    Array<void_(__cdecl*)(physx::PxOutputStream_&___ptr64),physx::shdfnd::ReflectionAllocator<void_(__cdecl*)(physx::PxOutputStream_&___ptr64)>_>
    ::growAndPushBack(plVar1,&local_res8);
  }
  local_res8 = Ext::GetExtensionsBinaryMetaData;
  if ((*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) <= *(uint *)(param_1 + 0x11)) {
    shdfnd::
    Array<void_(__cdecl*)(physx::PxOutputStream_&___ptr64),physx::shdfnd::ReflectionAllocator<void_(__cdecl*)(physx::PxOutputStream_&___ptr64)>_>
    ::growAndPushBack(plVar1,&local_res8);
    return param_1;
  }
  puVar2 = (undefined8 *)(*plVar1 + (ulonglong)*(uint *)(param_1 + 0x11) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = Ext::GetExtensionsBinaryMetaData;
  }
  *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + 1;
  return param_1;
}



// FUNCTION 1432776c0 ~SerializationRegistry body=263 status=ok
// SIG undefined ~SerializationRegistry(void)

void physx::Sn::SerializationRegistry::~SerializationRegistry(undefined8 *param_1)

{
  longlong lVar1;
  Foundation *pFVar2;
  PxAllocatorCallback *pPVar3;
  
  *param_1 = &PTR_registerSerializer_145af2040;
  ::_guard_xfg_dispatch_icall_nop();
  Ext::UnregisterExtensionsSerializers(param_1);
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    pFVar2 = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (pFVar2,2,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
               ,0xa5,
               "PxSerializationRegistry::release(): some registered PxSerializer instances were not unregistered"
              );
  }
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    pFVar2 = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (pFVar2,2,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
               ,0xab,
               "PxSerializationRegistry::release(): some registered PxRepXSerializer instances were not unregistered"
              );
  }
  if ((((*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x8c))) && (lVar1 = param_1[0x10], lVar1 != 0)) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
  }
  *param_1 = &PTR__purecall_145af1ff8;
  return;
}



// FUNCTION 1432777d0 registerSerializer body=264 status=ok
// SIG undefined registerSerializer(void)

void physx::Sn::SerializationRegistry::registerSerializer
               (longlong param_1,ushort param_2,undefined8 param_3)

{
  Foundation *this;
  ushort *puVar1;
  uint uVar2;
  ushort local_res8 [4];
  char local_res10 [8];
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar2 = ~((uint)param_2 << 0xf) + (uint)param_2;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = ~(uVar2 << 0xb) + uVar2;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) +
                     (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x34) - 1U) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        if (*(ushort *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 0x10) == param_2) {
          if ((uVar2 != 0xffffffff) &&
             ((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x18) != 0)) {
            this = physx::shdfnd::Foundation::getInstance();
            physx::shdfnd::Foundation::error
                      (this,2,
                       "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
                       ,0xb4,
                       "PxSerializationRegistry::registerSerializer: Type %d has already been registered"
                       ,(uint)param_2);
          }
          break;
        }
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res8[0] = param_2;
  puVar1 = (ushort *)
           shdfnd::internal::
           HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
           ::create(param_1 + 0x10,local_res8,local_res10);
  if ((local_res10[0] == '\0') && (puVar1 != (ushort *)0x0)) {
    *puVar1 = param_2;
    *(undefined8 *)(puVar1 + 4) = param_3;
  }
  return;
}



// FUNCTION 1432778e0 unregisterSerializer body=245 status=ok
// SIG undefined unregisterSerializer(void)

undefined8 physx::Sn::SerializationRegistry::unregisterSerializer(longlong param_1,ushort param_2)

{
  char cVar1;
  Foundation *this;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort local_res10 [12];
  
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (uVar2 = (uint)param_2 + ~((uint)param_2 << 0xf), uVar2 = (uVar2 >> 10 ^ uVar2) * 9,
     uVar2 = uVar2 ^ uVar2 >> 6, uVar2 = ~(uVar2 << 0xb) + uVar2,
     uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) +
                      (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x34) - 1U) * 4),
     uVar2 != 0xffffffff)) {
    do {
      if (*(ushort *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 0x10) == param_2) {
        if ((uVar2 != 0xffffffff) &&
           (lVar3 = (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x18), lVar3 != 0)) {
          uVar4 = *(undefined8 *)(lVar3 + 8);
          goto LAB_14327796c;
        }
        break;
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 4);
    } while (uVar2 != 0xffffffff);
  }
  uVar4 = 0;
LAB_14327796c:
  local_res10[0] = param_2;
  cVar1 = shdfnd::internal::
          HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
          ::erase(param_1 + 0x10,local_res10);
  if (cVar1 == '\0') {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,2,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
               ,0xc2,
               "PxSerializationRegistry::unregisterSerializer: failed to find PxSerializer instance for type %d"
               ,(uint)param_2);
  }
  return uVar4;
}



// FUNCTION 1432779e0 registerBinaryMetaDataCallback body=77 status=ok
// SIG undefined registerBinaryMetaDataCallback(void)

void physx::Sn::SerializationRegistry::registerBinaryMetaDataCallback
               (longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
  
  if ((*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= *(uint *)(param_1 + 0x88)) {
    local_res10[0] = param_2;
    shdfnd::
    Array<void_(__cdecl*)(physx::PxOutputStream_&___ptr64),physx::shdfnd::ReflectionAllocator<void_(__cdecl*)(physx::PxOutputStream_&___ptr64)>_>
    ::growAndPushBack((longlong *)(param_1 + 0x80),local_res10);
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return;
}



// FUNCTION 143277a40 getBinaryMetaData body=71 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Sn::SerializationRegistry::getBinaryMetaData(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      (**(code **)(*(longlong *)(param_1 + 0x80) + uVar2 * 8))(param_2);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 143277b30 getSerializerName body=20 status=ok
// SIG undefined getSerializerName(void)

void physx::Sn::SerializationRegistry::getSerializerName(longlong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143277b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + (ulonglong)param_2 * 0x10))();
  return;
}



// FUNCTION 143277b50 getSerializerType body=16 status=ok
// SIG undefined getSerializerType(void)

undefined2 physx::Sn::SerializationRegistry::getSerializerType(longlong param_1,uint param_2)

{
  return *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 0x10);
}



// FUNCTION 143277b70 registerRepXSerializer body=264 status=ok
// SIG undefined registerRepXSerializer(void)

void physx::Sn::SerializationRegistry::registerRepXSerializer
               (longlong param_1,ushort param_2,undefined8 param_3)

{
  Foundation *this;
  ushort *puVar1;
  uint uVar2;
  ushort local_res8 [4];
  char local_res10 [8];
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar2 = ~((uint)param_2 << 0xf) + (uint)param_2;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = ~(uVar2 << 0xb) + uVar2;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x60) +
                     (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x6c) - 1U) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        if (*(ushort *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar2 * 0x10) == param_2) {
          if ((uVar2 != 0xffffffff) &&
             ((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x50) != 0)) {
            this = physx::shdfnd::Foundation::getInstance();
            physx::shdfnd::Foundation::error
                      (this,2,
                       "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
                       ,0xf2,
                       "PxSerializationRegistry::registerRepXSerializer: Type %d has already been registered"
                       ,(uint)param_2);
          }
          break;
        }
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res8[0] = param_2;
  puVar1 = (ushort *)
           shdfnd::internal::
           HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
           ::create(param_1 + 0x48,local_res8,local_res10);
  if ((local_res10[0] == '\0') && (puVar1 != (ushort *)0x0)) {
    *puVar1 = param_2;
    *(undefined8 *)(puVar1 + 4) = param_3;
  }
  return;
}



// FUNCTION 143277c80 getRepXSerializer body=203 status=ok
// SIG undefined getRepXSerializer(void)

undefined8 physx::Sn::SerializationRegistry::getRepXSerializer(longlong param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  uVar3 = **(uint **)(param_1 + 0x60);
  if (uVar3 == 0xffffffff) {
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (uVar4 == *(uint *)(param_1 + 0x6c)) goto joined_r0x000143277cc8;
      uVar3 = (*(uint **)(param_1 + 0x60))[uVar5];
    } while (uVar3 == 0xffffffff);
  }
LAB_143277cd0:
  do {
    do {
      pcVar2 = (char *)(**(code **)(**(longlong **)
                                      (*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)uVar3 * 0x10)
                                   + 8))();
      iVar1 = physx::shdfnd::stricmp(pcVar2,param_2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)uVar3 * 0x10);
      }
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar3 * 4);
    } while (uVar3 != 0xffffffff);
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (uVar4 == *(uint *)(param_1 + 0x6c)) goto joined_r0x000143277cc8;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + uVar5 * 4);
    } while (uVar3 == 0xffffffff);
  } while( true );
joined_r0x000143277cc8:
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  goto LAB_143277cd0;
}



// FUNCTION 143277d60 unregisterRepXSerializer body=245 status=ok
// SIG undefined unregisterRepXSerializer(void)

undefined8
physx::Sn::SerializationRegistry::unregisterRepXSerializer(longlong param_1,ushort param_2)

{
  char cVar1;
  Foundation *this;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort local_res10 [12];
  
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     (uVar2 = (uint)param_2 + ~((uint)param_2 << 0xf), uVar2 = (uVar2 >> 10 ^ uVar2) * 9,
     uVar2 = uVar2 ^ uVar2 >> 6, uVar2 = ~(uVar2 << 0xb) + uVar2,
     uVar2 = *(uint *)(*(longlong *)(param_1 + 0x60) +
                      (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x6c) - 1U) * 4),
     uVar2 != 0xffffffff)) {
    do {
      if (*(ushort *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar2 * 0x10) == param_2) {
        if ((uVar2 != 0xffffffff) &&
           (lVar3 = (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x50), lVar3 != 0)) {
          uVar4 = *(undefined8 *)(lVar3 + 8);
          goto LAB_143277dec;
        }
        break;
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar2 * 4);
    } while (uVar2 != 0xffffffff);
  }
  uVar4 = 0;
LAB_143277dec:
  local_res10[0] = param_2;
  cVar1 = shdfnd::internal::
          HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
          ::erase(param_1 + 0x48,local_res10);
  if (cVar1 == '\0') {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,2,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\SnSerializationRegistry.cpp"
               ,0x10b,
               "PxSerializationRegistry::unregisterRepXSerializer: failed to find PxRepXSerializer instance for type %d"
               ,(uint)param_2);
  }
  return uVar4;
}



// FUNCTION 143277e60 sortCollection body=195 status=ok
// SIG undefined sortCollection(void)

void physx::Sn::sortCollection(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_10;
  
  local_88 = &PTR__scalar_deleting_destructor__145af2088;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x3f400000;
  local_54 = 0xffffffff;
  local_50 = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned___int64_const_,unsigned_int>,unsigned___int64,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::internal::HashMapBase<unsigned___int64,unsigned_int,physx::shdfnd::Hash<unsigned___int64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
  ::reserveInternal(&local_80,0x40);
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_20 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_10 = param_3;
  `anonymous_namespace'::CollectionSorter::sort(&local_88);
  `anonymous_namespace'::CollectionSorter::~CollectionSorter(&local_88);
  return;
}



// FUNCTION 143277f30 copy<physx::shdfnd::ReflectionAllocator<unsigned_int>_> body=116 status=ok
// SIG undefined copy<physx::shdfnd::ReflectionAllocator<unsigned_int>_>(void)

void physx::shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
     copy<physx::shdfnd::ReflectionAllocator<unsigned_int>_>
               (undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  uint uVar2;
  void *_Dst;
  
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    *(uint *)(param_1 + 1) = uVar2;
    _Dst = (void *)ReflectionAllocator<unsigned_int>::allocate
                             (param_1,(ulonglong)uVar2 << 2,
                              "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
    *param_1 = _Dst;
    pvVar1 = (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 4);
    if (_Dst < pvVar1) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)*param_2,(ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffffc));
      return;
    }
  }
  return;
}



// FUNCTION 143277fb0 ~CollectionSorter body=176 status=ok
// SIG undefined ~CollectionSorter(void)

void `anonymous_namespace'::CollectionSorter::~CollectionSorter(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145af2088;
  if ((((*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x6c))) && (lVar1 = param_1[0xc], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  physx::shdfnd::
  Array<`anonymous_namespace'::CollectionSorter::Element,physx::shdfnd::ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>_>
  ::destroy(param_1[8],param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 0x28);
  if ((((*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x4c))) && (lVar1 = param_1[8], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  *param_1 = &PTR_FUN_145af1858;
  return;
}



// FUNCTION 143278060 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
`anonymous_namespace'::CollectionSorter::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~CollectionSorter();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1432780a0 FUN_1432780a0 body=43 status=ok
// SIG undefined FUN_1432780a0(void)

undefined8 * FUN_1432780a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1ff8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432780d0 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong physx::Sn::SerializationRegistry::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  ~SerializationRegistry();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 143278140 AddElement body=177 status=ok
// SIG undefined AddElement(void)

void `anonymous_namespace'::CollectionSorter::AddElement(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  if (*(char *)(param_2 + 4) == '\0') {
    puVar2 = (uint *)param_2[2];
    if (puVar2 != puVar2 + *(uint *)(param_2 + 3)) {
      do {
        AddElement(param_1,*(longlong *)(param_1 + 0x40) + (ulonglong)*puVar2 * 0x28);
        puVar2 = puVar2 + 1;
      } while (puVar2 != (uint *)(param_2[2] + (ulonglong)*(uint *)(param_2 + 3) * 4));
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x7fffffff) <= *(uint *)(param_1 + 0x68)) {
      physx::shdfnd::
      Array<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>,physx::shdfnd::ReflectionAllocator<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>_>_>
      ::growAndPushBack((longlong *)(param_1 + 0x60),param_2);
      *(undefined1 *)(param_2 + 4) = 1;
      return;
    }
    puVar1 = (undefined8 *)
             ((ulonglong)*(uint *)(param_1 + 0x68) * 0x10 + *(longlong *)(param_1 + 0x60));
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}



// FUNCTION 143278200 addChild body=98 status=ok
// SIG undefined addChild(void)

void `anonymous_namespace'::CollectionSorter::addChild(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar3 = physx::shdfnd::internal::
          HashBase<physx::shdfnd::Pair<physx::PxBase_*___ptr64_const,unsigned_int>,physx::PxBase_*___ptr64,physx::shdfnd::Hash<physx::PxBase_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
          ::find(param_1 + 8,local_res10);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if ((*(uint *)(lVar2 + 0x1c) & 0x7fffffff) <= *(uint *)(lVar2 + 0x18)) {
      physx::shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
      growAndPushBack(lVar2 + 0x10);
      return;
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)*(uint *)(lVar2 + 0x18) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(lVar3 + 8);
    }
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  return;
}



// FUNCTION 143278270 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<unsigned_int>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a758,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143278310 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<void_(__cdecl*)(physx::PxOutputStream_&___ptr64)>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a770,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432783b0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>_>::
allocate(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a6d8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143278450 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a718,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432784f0 copy body=131 status=ok
// SIG undefined copy(void)

void physx::shdfnd::
     Array<`anonymous_namespace'::CollectionSorter::Element,physx::shdfnd::ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>_>
     ::copy(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 < param_2) {
    lVar2 = param_3 + 0x10;
    lVar3 = param_1 + 0x10;
    do {
      puVar1 = (undefined8 *)((param_1 - param_3) + -0x10 + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar2 + -8);
        Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
        copy<physx::shdfnd::ReflectionAllocator<unsigned_int>_>(lVar3,lVar2);
        *(undefined1 *)(lVar3 + 0x10) = *(undefined1 *)(lVar2 + 0x10);
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
    } while ((param_1 - param_3) + -0x10 + lVar2 < param_2);
  }
  return;
}



// FUNCTION 143278580 create body=334 status=ok
// SIG undefined create(void)

longlong physx::shdfnd::internal::
         HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
         ::create(longlong param_1,ushort *param_2,undefined1 *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar2 = ~((uint)uVar1 << 0xf) + (uint)uVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x24) - 1U);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
    bVar5 = uVar2 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 0x10) == uVar1) break;
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      bVar5 = uVar2 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2 * 2;
    }
    if (uVar2 < uVar3) {
      reserveInternal(param_1);
    }
    uVar2 = (uint)*param_2 + ~((uint)*param_2 << 0xf);
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x24) - 1U);
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar2 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = uVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 8);
}



// FUNCTION 1432786d0 destroy body=135 status=ok
// SIG undefined destroy(void)

void physx::shdfnd::
     Array<`anonymous_namespace'::CollectionSorter::Element,physx::shdfnd::ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>_>
     ::destroy(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (param_1 < param_2) {
    puVar3 = (uint *)(param_1 + 0x1c);
    lVar4 = ((param_2 - param_1) - 1) / 0x28 + 1;
    do {
      if ((((*puVar3 & 0x7fffffff) != 0) && (-1 < (int)*puVar3)) &&
         (lVar1 = *(longlong *)(puVar3 + -3), lVar1 != 0)) {
        pPVar2 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
      }
      puVar3 = puVar3 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143278760 erase body=182 status=ok
// SIG undefined erase(void)

undefined8
physx::shdfnd::internal::
HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
::erase(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *param_2;
    uVar2 = ~((uint)uVar1 << 0xf) + (uint)uVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = ~(uVar2 << 0xb) + uVar2;
    uVar3 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x24) - 1U);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x18) + uVar3 * 4);
    if (*(int *)(*(longlong *)(param_1 + 0x18) + uVar3 * 4) != -1) {
      do {
        uVar3 = (ulonglong)*puVar4;
        if (*(ushort *)(uVar3 * 0x10 + *(longlong *)(param_1 + 8)) == uVar1) break;
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4);
      } while (*(int *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4) != -1);
      uVar2 = *puVar4;
      if (uVar2 != 0xffffffff) {
        *puVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 4);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        if (uVar2 != *(uint *)(param_1 + 0x34)) {
          replaceWithLast(param_1);
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143278820 find body=169 status=ok
// SIG undefined find(void)

longlong physx::shdfnd::internal::
         HashBase<physx::shdfnd::Pair<physx::PxBase_*___ptr64_const,unsigned_int>,physx::PxBase_*___ptr64,physx::shdfnd::Hash<physx::PxBase_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
         ::find(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar2 = *param_2;
    uVar3 = ~(lVar2 << 0x20) + lVar2;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    uVar3 = uVar3 + ~(uVar3 << 0xd);
    uVar3 = (uVar3 >> 8 ^ uVar3) * 9;
    uVar3 = uVar3 ^ uVar3 >> 0xf;
    uVar3 = uVar3 + ~(uVar3 << 0x1b);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) +
                     ((uVar3 >> 0x1f & 0xffffffff ^ uVar3 & 0xffffffff) &
                     (ulonglong)(*(int *)(param_1 + 0x24) - 1)) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        uVar3 = (ulonglong)uVar1;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar3 * 0x10) == lVar2) {
          if (uVar1 == 0xffffffff) {
            return 0;
          }
          return uVar3 * 0x10 + *(longlong *)(param_1 + 8);
        }
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4);
      } while (uVar1 != 0xffffffff);
    }
  }
  return 0;
}



// FUNCTION 1432788d0 growAndPushBack body=211 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
       growAndPushBack(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  PxAllocatorCallback *pPVar4;
  uint uVar5;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14327891f;
    }
  }
  _Dst = (void *)ReflectionAllocator<unsigned_int>::allocate
                           (param_1,(ulonglong)uVar5 << 2,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14327891f:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 4)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) * 4));
  }
  puVar1 = (undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  *param_1 = (longlong)_Dst;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 4);
}



// FUNCTION 1432789b0 growAndPushBack body=212 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<void_(__cdecl*)(physx::PxOutputStream_&___ptr64),physx::shdfnd::ReflectionAllocator<void_(__cdecl*)(physx::PxOutputStream_&___ptr64)>_>
       ::growAndPushBack(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  PxAllocatorCallback *pPVar4;
  uint uVar5;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
      goto LAB_1432789ff;
    }
  }
  _Dst = (void *)ReflectionAllocator<void_(__cdecl*)(physx::PxOutputStream_&___ptr64)>::allocate
                           (param_1,(ulonglong)uVar5 << 3,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432789ff:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) * 8));
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  *param_1 = (longlong)_Dst;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 8);
}



// FUNCTION 143278a90 growAndPushBack body=236 status=ok
// SIG undefined growAndPushBack(void)

undefined8 *
physx::shdfnd::
Array<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>,physx::shdfnd::ReflectionAllocator<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>_>_>
::growAndPushBack(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  PxAllocatorCallback *pPVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar7 == 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_143278adf;
    }
  }
  puVar3 = (undefined8 *)
           ReflectionAllocator<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>_>::
           allocate(param_1,(ulonglong)uVar7 << 4,
                    "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                    ,0x25d);
LAB_143278adf:
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  for (puVar5 = puVar3; puVar5 < puVar3 + (ulonglong)uVar1 * 2; puVar5 = puVar5 + 2) {
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
    }
    puVar6 = puVar6 + 2;
  }
  puVar6 = puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 2;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  return puVar3 + (ulonglong)uVar1 * 2;
}



// FUNCTION 143278b80 growAndPushBack body=257 status=ok
// SIG undefined growAndPushBack(void)

longlong physx::shdfnd::
         Array<`anonymous_namespace'::CollectionSorter::Element,physx::shdfnd::ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>_>
         ::growAndPushBack(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  PxAllocatorCallback *pPVar5;
  uint uVar6;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar6 == 0) {
      lVar4 = 0;
      goto LAB_143278bd1;
    }
  }
  lVar4 = ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>::allocate
                    (param_1,(ulonglong)uVar6 * 0x28,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                     ,0x25d);
LAB_143278bd1:
  copy(lVar4,lVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0x28,*param_1);
  puVar1 = (undefined8 *)(lVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
    copy<physx::shdfnd::ReflectionAllocator<unsigned_int>_>(puVar1 + 2,param_2 + 2);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  destroy(*param_1,*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = lVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return lVar4 + (ulonglong)uVar2 * 0x28;
}



// FUNCTION 143278c90 process body=157 status=ok
// SIG undefined process(void)

void `anonymous_namespace'::CollectionSorter::process(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  
  local_res8 = param_2;
  lVar3 = physx::shdfnd::internal::
          HashBase<physx::shdfnd::Pair<physx::PxBase_*___ptr64_const,unsigned_int>,physx::PxBase_*___ptr64,physx::shdfnd::Hash<physx::PxBase_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
          ::find(param_1 + 8,&local_res8);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(uint *)(lVar2 + 0x18) < (*(uint *)(lVar2 + 0x1c) & 0x7fffffff)) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)*(uint *)(lVar2 + 0x18) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(lVar3 + 8);
      }
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    }
    else {
      physx::shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
      growAndPushBack(lVar2 + 0x10);
    }
  }
  if ((*(char *)(param_1 + 0x78) != '\0') && ((short)param_2[1] == 0x10)) {
    lVar3 = (**(code **)(*param_2 + 0x1b0))(param_2);
    if (**(longlong **)(param_1 + 0x70) != lVar3) {
      addChild(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 143278d50 replaceWithLast body=193 status=ok
// SIG undefined replaceWithLast(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
     ::replaceWithLast(longlong param_1,uint param_2)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  puVar1 = (undefined2 *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x10);
  if (puVar1 != (undefined2 *)0x0) {
    puVar5 = (undefined2 *)
             ((ulonglong)*(uint *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 8));
    *puVar1 = *puVar5;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar5 + 4);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x34) * 4);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x10);
  uVar3 = (uint)uVar2 + ~((uint)uVar2 << 0xf);
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = ~(uVar3 << 0xb) + uVar3;
  uVar4 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & *(int *)(param_1 + 0x24) - 1U);
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
  if (uVar3 != *(uint *)(param_1 + 0x34)) {
    do {
      uVar4 = (ulonglong)uVar3;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4);
    } while (uVar3 != *(uint *)(param_1 + 0x34));
    *(uint *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = param_2;
    return;
  }
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = param_2;
  return;
}



// FUNCTION 143278e20 reserveInternal body=448 status=ok
// SIG undefined reserveInternal(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned_short_const_,physx::PxRepXSerializer_*___ptr64>,unsigned_short,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::internal::HashMapBase<unsigned_short,physx::PxRepXSerializer_*___ptr64,physx::shdfnd::Hash<unsigned_short>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
     ::reserveInternal(longlong *param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  PxAllocatorCallback *pPVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar11 = (uint)param_2;
  uVar6 = param_2 & 0xffffffff;
  if ((uVar11 == 0) || ((uVar11 & uVar11 - 1) != 0)) {
    uVar11 = (uint)(param_2 >> 1) & 0x7fffffff | uVar11;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar6 = (ulonglong)((uVar11 >> 0x10 | uVar11) + 1);
  }
  lVar4 = param_1[4];
  iVar3 = (int)uVar6;
  uVar12 = iVar3 * 4;
  pvVar10 = (void *)0x0;
  iVar13 = (int)(longlong)((float)uVar6 * *(float *)(param_1 + 5));
  iVar8 = uVar12 + iVar13 * 4;
  uVar11 = iVar8 + (-iVar8 & 0xfU);
  iVar8 = iVar13 * 0x10 + uVar11;
  _Dst = pvVar10;
  if (iVar8 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    _Dst = (void *)(**(code **)(*(longlong *)pPVar5 + 8))
                             (pPVar5,iVar8,"NonTrackedAlloc",
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsHashInternals.h"
                              ,0x174);
  }
  lVar9 = (ulonglong)uVar11 + (longlong)_Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,-1,(ulonglong)uVar12);
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      uVar1 = *(ushort *)(param_1[1] + (longlong)pvVar10 * 0x10);
      uVar11 = (uint)uVar1 + ~((uint)uVar1 << 0xf);
      uVar11 = (uVar11 >> 10 ^ uVar11) * 9;
      uVar11 = uVar11 ^ uVar11 >> 6;
      uVar11 = uVar11 + ~(uVar11 << 0xb);
      uVar6 = (ulonglong)((uVar11 >> 0x10 ^ uVar11) & iVar3 - 1U);
      *(undefined4 *)((ulonglong)uVar12 + (longlong)_Dst + (longlong)pvVar10 * 4) =
           *(undefined4 *)((longlong)_Dst + uVar6 * 4);
      *(int *)((longlong)_Dst + uVar6 * 4) = (int)pvVar10;
      puVar7 = (undefined2 *)((longlong)pvVar10 * 0x10 + lVar9);
      if (puVar7 != (undefined2 *)0x0) {
        lVar2 = param_1[1];
        *puVar7 = *(undefined2 *)(lVar2 + (longlong)pvVar10 * 0x10);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar2 + 8 + (longlong)pvVar10 * 0x10);
      }
      uVar11 = (int)pvVar10 + 1;
      pvVar10 = (void *)(ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0x34));
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar2);
  }
  *param_1 = (longlong)_Dst;
  param_1[3] = (longlong)_Dst;
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  param_1[2] = (ulonglong)uVar12 + (longlong)_Dst;
  param_1[1] = lVar9;
  *(int *)(param_1 + 4) = iVar13;
  if (*(int *)((longlong)param_1 + 0x2c) == -1) {
    *(int *)((longlong)param_1 + 0x2c) = (int)lVar4;
  }
  return;
}



// FUNCTION 143278fe0 sort body=979 status=ok
// SIG undefined sort(void)

/* WARNING: Removing unreachable block (ram,0x00014327938d) */
/* WARNING: Removing unreachable block (ram,0x000143279392) */
/* WARNING: Removing unreachable block (ram,0x000143279397) */

void `anonymous_namespace'::CollectionSorter::sort(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  char local_res8 [8];
  uint local_res10;
  undefined8 local_res18;
  
  local_res10 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0x74);
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0x48);
  if (local_res10 != 0) {
    uVar15 = (ulonglong)local_res10;
    do {
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      local_res18 = uVar3;
      puVar6 = (undefined8 *)
               physx::shdfnd::internal::
               HashBase<physx::shdfnd::Pair<physx::PxBase_const_*___ptr64_const,unsigned_int>,physx::PxBase_const_*___ptr64,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_const_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
               ::create(param_1 + 8,&local_res18,local_res8);
      if ((local_res8[0] == '\0') && (puVar6 != (undefined8 *)0x0)) {
        *puVar6 = uVar3;
        *(undefined4 *)(puVar6 + 1) = uVar1;
      }
      if (*(uint *)(param_1 + 0x48) < (*(uint *)(param_1 + 0x4c) & 0x7fffffff)) {
        puVar6 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x28);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = uVar3;
          puVar6[1] = uVar4;
          physx::shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
          copy<physx::shdfnd::ReflectionAllocator<unsigned_int>_>();
          *(undefined1 *)(puVar6 + 4) = 0;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
      else {
        physx::shdfnd::
        Array<`anonymous_namespace'::CollectionSorter::Element,physx::shdfnd::ReflectionAllocator<`anonymous_namespace'::CollectionSorter::Element>_>
        ::growAndPushBack();
      }
      puVar11 = puVar11 + 2;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  uVar8 = local_res10;
  uVar12 = (ulonglong)local_res10;
  lVar10 = 0;
  uVar15 = uVar12;
  if (local_res10 != 0) {
    do {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar10);
      *(longlong **)(param_1 + 0x70) = plVar7;
      plVar7 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                         (*(longlong **)(param_1 + 0x58),*(undefined2 *)(*plVar7 + 8));
      (**(code **)(*plVar7 + 8))(plVar7,**(undefined8 **)(param_1 + 0x70),param_1);
      lVar10 = lVar10 + 0x28;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (uVar8 != 0) {
      lVar10 = 0;
      do {
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar10);
        if (*(char *)(puVar11 + 4) == '\0') {
          puVar13 = (uint *)puVar11[2];
          if (puVar13 != puVar13 + *(uint *)(puVar11 + 3)) {
            do {
              AddElement(param_1,*(longlong *)(param_1 + 0x40) + (ulonglong)*puVar13 * 0x28);
              puVar13 = puVar13 + 1;
            } while (puVar13 != (uint *)(puVar11[2] + (ulonglong)*(uint *)(puVar11 + 3) * 4));
          }
          if (*(uint *)(param_1 + 0x68) < (*(uint *)(param_1 + 0x6c) & 0x7fffffff)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)*(uint *)(param_1 + 0x68) * 0x10 + *(longlong *)(param_1 + 0x60));
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = *puVar11;
              puVar6[1] = puVar11[1];
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          }
          else {
            physx::shdfnd::
            Array<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>,physx::shdfnd::ReflectionAllocator<physx::shdfnd::Pair<physx::PxBase_*___ptr64,unsigned___int64>_>_>
            ::growAndPushBack();
          }
          *(undefined1 *)(puVar11 + 4) = 1;
        }
        lVar10 = lVar10 + 0x28;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x50);
  if ((*(int *)(lVar10 + 100) != 0) && (*(int *)(lVar10 + 0x74) != 0)) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(lVar10 + 0x58),-1,(ulonglong)(uint)(*(int *)(lVar10 + 100) * 4));
    iVar2 = *(int *)(lVar10 + 0x60);
    uVar8 = 0;
    if (iVar2 != 1) {
      lVar9 = 0;
      do {
        uVar8 = uVar8 + 1;
        *(uint *)(*(longlong *)(lVar10 + 0x50) + lVar9) = uVar8;
        lVar9 = lVar9 + 4;
      } while (uVar8 < iVar2 - 1U);
    }
    *(undefined4 *)(*(longlong *)(lVar10 + 0x50) + (ulonglong)(*(int *)(lVar10 + 0x60) - 1) * 4) =
         0xffffffff;
    *(undefined4 *)(lVar10 + 0x6c) = 0;
    *(undefined4 *)(lVar10 + 0x74) = 0;
  }
  plVar7 = *(longlong **)(param_1 + 0x60);
  if (plVar7 != plVar7 + (ulonglong)*(uint *)(param_1 + 0x68) * 2) {
    do {
      lVar10 = *(longlong *)(param_1 + 0x50);
      lVar9 = *plVar7;
      lVar5 = plVar7[1];
      uVar8 = *(uint *)(lVar10 + 0x6c);
      uVar15 = ~(lVar9 << 0x20) + lVar9;
      uVar15 = uVar15 ^ uVar15 >> 0x16;
      uVar15 = uVar15 + ~(uVar15 << 0xd);
      uVar15 = (uVar15 >> 8 ^ uVar15) * 9;
      uVar15 = uVar15 ^ uVar15 >> 0xf;
      uVar15 = uVar15 + ~(uVar15 << 0x1b);
      *(uint *)(lVar10 + 0x6c) = uVar8 + 1;
      uVar15 = (uVar15 >> 0x1f & 0xffffffff ^ uVar15 & 0xffffffff) &
               (ulonglong)(*(int *)(lVar10 + 100) - 1);
      *(undefined4 *)(*(longlong *)(lVar10 + 0x50) + (ulonglong)uVar8 * 4) =
           *(undefined4 *)(*(longlong *)(lVar10 + 0x58) + uVar15 * 4);
      *(uint *)(*(longlong *)(lVar10 + 0x58) + uVar15 * 4) = uVar8;
      *(int *)(lVar10 + 0x74) = *(int *)(lVar10 + 0x74) + 1;
      *(int *)(lVar10 + 0x70) = *(int *)(lVar10 + 0x70) + 1;
      plVar14 = (longlong *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar10 + 0x48));
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = lVar9;
        plVar14[1] = lVar5;
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != (longlong *)
                       ((ulonglong)*(uint *)(param_1 + 0x68) * 0x10 + *(longlong *)(param_1 + 0x60))
            );
  }
  return;
}



// FUNCTION 1432793c0 PxDefaultCpuDispatcherCreate body=160 status=ok
// SIG undefined PxDefaultCpuDispatcherCreate(void)

void physx::PxDefaultCpuDispatcherCreate(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a808,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x40,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDefaultCpuDispatcher.cpp"
                     ,0x2d);
  if (lVar5 != 0) {
    Ext::DefaultCpuDispatcher::DefaultCpuDispatcher(lVar5,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 143279470 ~DefaultCpuDispatcher body=398 status=ok
// SIG undefined ~DefaultCpuDispatcher(void)

void physx::Ext::DefaultCpuDispatcher::~DefaultCpuDispatcher(undefined8 *param_1)

{
  PxAllocatorCallback *pPVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = 0;
  *param_1 = &PTR_submitTask_145af2420;
  uVar4 = 0;
  if (*(int *)(param_1 + 7) != 0) {
    do {
      physx::shdfnd::ThreadImpl::signalQuit
                (*(ThreadImpl **)((ulonglong)uVar4 * 0x40 + 0x10 + param_1[1]));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 7));
  }
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  physx::shdfnd::SyncImpl::set((SyncImpl *)param_1[5]);
  uVar4 = 0;
  if (*(int *)(param_1 + 7) != 0) {
    do {
      physx::shdfnd::ThreadImpl::waitForQuit
                (*(ThreadImpl **)((ulonglong)uVar4 * 0x40 + 0x10 + param_1[1]));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 7));
    if (*(int *)(param_1 + 7) != 0) {
      do {
        puVar2 = (undefined8 *)((ulonglong)uVar3 * 0x40 + param_1[1]);
        (**(code **)*puVar2)(puVar2,0);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 7));
    }
  }
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar5);
  }
  lVar5 = param_1[6];
  if (lVar5 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar5);
  }
  physx::shdfnd::SyncImpl::~SyncImpl((SyncImpl *)param_1[5]);
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar5);
  }
  physx::shdfnd::SListImpl::~SListImpl((SListImpl *)param_1[4]);
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar5);
  }
  lVar5 = param_1[2];
  if ((lVar5 != 0) && (lVar5 = lVar5 - *(longlong *)(lVar5 + -8), lVar5 != 0)) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar5);
  }
  physx::shdfnd::SListImpl::~SListImpl((SListImpl *)param_1[3]);
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar5);
  }
  *param_1 = &PTR__purecall_143f9a338;
  return;
}



// FUNCTION 143279610 DefaultCpuDispatcher body=805 status=ok
// SIG undefined DefaultCpuDispatcher(void)

undefined8 *
physx::Ext::DefaultCpuDispatcher::DefaultCpuDispatcher
          (undefined8 *param_1,uint param_2,SListImpl *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  PxAllocatorCallback *pPVar5;
  longlong *plVar6;
  char *pcVar7;
  SListImpl *pSVar8;
  SyncImpl *this;
  ulonglong uVar9;
  ulonglong uVar10;
  SListImpl *pSVar11;
  char *pcVar12;
  SListImpl *pSVar13;
  SListImpl *local_res8;
  undefined1 local_res10 [8];
  
  uVar10 = (ulonglong)param_2;
  *param_1 = &PTR_submitTask_145af2420;
  SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>::
  SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>
            (param_1 + 2,0x80,local_res10);
  puVar4 = physx::shdfnd::SListImpl::getSize();
  pSVar11 = (SListImpl *)0x0;
  pcVar12 = "<allocation names disabled>";
  uVar3 = *puVar4;
  pSVar8 = pSVar11;
  if (uVar3 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    plVar6 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (cVar2 == '\0') {
      pcVar7 = "<allocation names disabled>";
    }
    else {
      pcVar7 = (char *)__std_type_info_name(0x14683a7a8,&DAT_146bcc1d0);
    }
    pSVar8 = (SListImpl *)
             (**(code **)(*(longlong *)pPVar5 + 8))
                       (pPVar5,uVar3,pcVar7,
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsSList.h"
                        ,0x67);
  }
  param_1[4] = pSVar8;
  if (pSVar8 != (SListImpl *)0x0) {
    physx::shdfnd::SListImpl::SListImpl(pSVar8);
  }
  puVar4 = physx::shdfnd::SyncImpl::getSize();
  uVar3 = *puVar4;
  this = (SyncImpl *)pSVar11;
  if (uVar3 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    plVar6 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (cVar2 != '\0') {
      pcVar12 = (char *)__std_type_info_name(0x14683a7d8,&DAT_146bcc1d0);
    }
    this = (SyncImpl *)
           (**(code **)(*(longlong *)pPVar5 + 8))
                     (pPVar5,uVar3,pcVar12,
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsSync.h"
                      ,0x5f);
  }
  param_1[5] = this;
  if (this != (SyncImpl *)0x0) {
    physx::shdfnd::SyncImpl::SyncImpl(this);
  }
  *(uint *)(param_1 + 7) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  local_res8 = (SListImpl *)0x0;
  if (param_3 == (SListImpl *)0x0) {
    param_3 = pSVar11;
    if (uVar10 != 0) {
      pPVar5 = physx::shdfnd::getAllocator();
      param_3 = (SListImpl *)
                (**(code **)(*(longlong *)pPVar5 + 8))
                          (pPVar5,uVar10 << 2,"NonTrackedAlloc",
                           "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDefaultCpuDispatcher.cpp"
                           ,0x46);
    }
    uVar9 = uVar10;
    pSVar8 = param_3;
    local_res8 = param_3;
    if (param_2 != 0) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint *)pSVar8 = 0;
        pSVar8 = pSVar8 + 4;
      }
    }
  }
  pSVar8 = pSVar11;
  if (uVar10 != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    pSVar8 = (SListImpl *)
             (**(code **)(*(longlong *)pPVar5 + 8))
                       (pPVar5,uVar10 << 6,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDefaultCpuDispatcher.cpp"
                        ,0x4d);
  }
  param_1[1] = pSVar8;
  pSVar8 = pSVar11;
  if ((param_2 & 0x7ffffff) != 0) {
    pPVar5 = physx::shdfnd::getAllocator();
    pSVar8 = (SListImpl *)
             (**(code **)(*(longlong *)pPVar5 + 8))
                       (pPVar5,param_2 << 5,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDefaultCpuDispatcher.cpp"
                        ,0x4f);
  }
  param_1[6] = pSVar8;
  if (param_1[1] == 0) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  else {
    pSVar8 = pSVar11;
    if (param_2 != 0) {
      do {
        if (pSVar8 + param_1[1] != (SListImpl *)0x0) {
          CpuWorkerThread::CpuWorkerThread();
        }
        CpuWorkerThread::initialize(pSVar8 + param_1[1],param_1);
        uVar10 = uVar10 - 1;
        pSVar8 = pSVar8 + 0x40;
      } while (uVar10 != 0);
      pSVar8 = pSVar11;
      pSVar13 = pSVar11;
      if (param_2 != 0) {
        do {
          physx::shdfnd::ThreadImpl::setAffinityMask
                    (*(ThreadImpl **)(pSVar8 + param_1[1] + 0x10),*(uint *)param_3);
          uVar3 = physx::shdfnd::ThreadImpl::getDefaultStackSize();
          physx::shdfnd::ThreadImpl::start
                    (*(ThreadImpl **)((Runnable *)(pSVar8 + param_1[1]) + 0x10),uVar3,
                     (Runnable *)(pSVar8 + param_1[1]));
          lVar1 = param_1[6];
          if (lVar1 != 0) {
            physx::shdfnd::snprintf((char *)(pSVar13 + lVar1),0x20,"PxWorker%02d",pSVar11);
            physx::shdfnd::ThreadImpl::setName
                      (*(ThreadImpl **)(pSVar8 + param_1[1] + 0x10),(char *)(pSVar13 + lVar1));
          }
          uVar3 = (int)pSVar11 + 1;
          pSVar11 = (SListImpl *)(ulonglong)uVar3;
          param_3 = param_3 + 4;
          pSVar8 = pSVar8 + 0x40;
          pSVar13 = pSVar13 + 0x20;
        } while (uVar3 < param_2);
      }
    }
    if (local_res8 != (SListImpl *)0x0) {
      pPVar5 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,local_res8);
    }
  }
  return param_1;
}



// FUNCTION 143279940 submitTask body=189 status=ok
// SIG undefined submitTask(void)

void physx::Ext::DefaultCpuDispatcher::submitTask(longlong param_1,longlong *param_2)

{
  char cVar1;
  __uint64 _Var2;
  SListEntry *pSVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000143279973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2);
    return;
  }
  _Var2 = physx::shdfnd::ThreadImpl::getId();
  uVar4 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      cVar1 = CpuWorkerThread::tryAcceptJobToLocalQueue
                        ((ulonglong)uVar4 * 0x40 + *(longlong *)(param_1 + 8),param_2,_Var2);
      if (cVar1 != '\0') goto LAB_1432799de;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
  pSVar3 = (SListEntry *)
           SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>::
           getEntry(param_1 + 0x10,param_2);
  if (pSVar3 != (SListEntry *)0x0) {
    physx::shdfnd::SListImpl::push(*(SListImpl **)(param_1 + 0x20),pSVar3);
LAB_1432799de:
    physx::shdfnd::SyncImpl::set(*(SyncImpl **)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 143279a50 stealJob body=84 status=ok
// SIG undefined stealJob(void)

ulonglong physx::Ext::DefaultCpuDispatcher::stealJob(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    while( true ) {
      iVar2 = (int)uVar1;
      uVar1 = CpuWorkerThread::giveUpJob(uVar1 * 0x40 + *(longlong *)(param_1 + 8));
      if (uVar1 != 0) break;
      uVar3 = iVar2 + 1;
      uVar1 = (ulonglong)uVar3;
      if (*(uint *)(param_1 + 0x38) <= uVar3) {
        return 0;
      }
    }
  }
  return uVar1;
}



// FUNCTION 143279ab0 fetchNextTask body=86 status=ok
// SIG undefined fetchNextTask(void)

void physx::Ext::DefaultCpuDispatcher::fetchNextTask(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = TaskQueueHelper::fetchTask(param_1 + 0x20,param_1 + 0x10);
  if ((lVar1 == 0) && (uVar2 = 0, *(int *)(param_1 + 0x38) != 0)) {
    do {
      lVar1 = CpuWorkerThread::giveUpJob((ulonglong)uVar2 * 0x40 + *(longlong *)(param_1 + 8));
      if (lVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 143279b10 resetWakeSignal body=47 status=ok
// SIG undefined resetWakeSignal(void)

void physx::Ext::DefaultCpuDispatcher::resetWakeSignal(longlong param_1)

{
  physx::shdfnd::SyncImpl::reset(*(SyncImpl **)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x3c) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143279b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    physx::shdfnd::SyncImpl::set(*(SyncImpl **)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 143279b50 getAffinityMasks body=24 status=ok
// SIG undefined getAffinityMasks(void)

void physx::Ext::DefaultCpuDispatcher::getAffinityMasks(undefined4 *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    for (uVar1 = (ulonglong)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 143279b70 SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_> body=384 status=ok
// SIG undefined SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>(void)

longlong *
physx::Ext::SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>
::SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>
          (longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  PxAllocatorCallback *pPVar4;
  longlong *plVar5;
  char *pcVar6;
  SListImpl *pSVar7;
  longlong lVar8;
  SListImpl *pSVar9;
  ulonglong uVar10;
  char *pcVar11;
  SListImpl *pSVar12;
  
  uVar10 = (ulonglong)param_2;
  puVar3 = physx::shdfnd::SListImpl::getSize();
  pSVar12 = (SListImpl *)0x0;
  pcVar11 = "<allocation names disabled>";
  uVar1 = *puVar3;
  pSVar7 = pSVar12;
  if (uVar1 != 0) {
    pPVar4 = physx::shdfnd::getAllocator();
    plVar5 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (cVar2 == '\0') {
      pcVar6 = "<allocation names disabled>";
    }
    else {
      pcVar6 = (char *)__std_type_info_name(0x14683a7a8,&DAT_146bcc1d0);
    }
    pSVar7 = (SListImpl *)
             (**(code **)(*(longlong *)pPVar4 + 8))
                       (pPVar4,uVar1,pcVar6,
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsSList.h"
                        ,0x67);
  }
  param_1[1] = (longlong)pSVar7;
  if (pSVar7 != (SListImpl *)0x0) {
    physx::shdfnd::SListImpl::SListImpl(pSVar7);
  }
  pSVar7 = pSVar12;
  if (param_2 != 0) {
    pPVar4 = physx::shdfnd::getAllocator();
    plVar5 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (cVar2 != '\0') {
      pcVar11 = (char *)__std_type_info_name(0x14683a840,&DAT_146bcc1d0);
    }
    lVar8 = (**(code **)(*(longlong *)pPVar4 + 8))
                      (pPVar4,uVar10 * 0x20 + 0x17,pcVar11,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtSharedQueueEntryPool.h"
                       ,0x57);
    if (lVar8 == 0) {
      *param_1 = 0;
      return param_1;
    }
    pSVar7 = (SListImpl *)(lVar8 + 0x17U & 0xfffffffffffffff0);
    *(longlong *)(pSVar7 + -8) = (longlong)pSVar7 - lVar8;
  }
  *param_1 = (longlong)pSVar7;
  if ((pSVar7 != (SListImpl *)0x0) && (pSVar7 = pSVar12, param_2 != 0)) {
    do {
      pSVar9 = pSVar7 + *param_1;
      if (pSVar9 != (SListImpl *)0x0) {
        *(undefined8 *)pSVar9 = 0;
        *(undefined8 *)(pSVar9 + 8) = 0;
        pSVar9[0x10] = (SListImpl)0x1;
      }
      physx::shdfnd::SListImpl::push((SListImpl *)param_1[1],(SListEntry *)(pSVar12 + *param_1));
      pSVar12 = pSVar12 + 0x20;
      uVar10 = uVar10 - 1;
      pSVar7 = pSVar7 + 0x20;
    } while (uVar10 != 0);
  }
  return param_1;
}



// FUNCTION 143279cf0 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong physx::Ext::DefaultCpuDispatcher::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  ~DefaultCpuDispatcher();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 143279d60 fetchTask body=140 status=ok
// SIG undefined fetchTask(void)

undefined8 physx::Ext::TaskQueueHelper::fetchTask(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  SListEntry *pSVar3;
  PxAllocatorCallback *pPVar4;
  
  pSVar3 = physx::shdfnd::SListImpl::pop((SListImpl *)*param_1);
  if (pSVar3 == (SListEntry *)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(pSVar3 + 8);
  if (pSVar3[0x10] != (SListEntry)0x0) {
    *(undefined8 *)(pSVar3 + 8) = 0;
    physx::shdfnd::SListImpl::push(*(SListImpl **)(param_2 + 8),pSVar3);
    return uVar1;
  }
  lVar2 = *(longlong *)(pSVar3 + -8);
  if ((longlong)pSVar3 - lVar2 != 0) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,(longlong)pSVar3 - lVar2);
  }
  return uVar1;
}



// FUNCTION 143279df0 getEntry body=181 status=ok
// SIG undefined getEntry(void)

void physx::Ext::
     SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>::
     getEntry(longlong param_1,undefined8 param_2)

{
  char cVar1;
  SListEntry *pSVar2;
  PxAllocatorCallback *pPVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  
  pSVar2 = physx::shdfnd::SListImpl::pop(*(SListImpl **)(param_1 + 8));
  if (pSVar2 == (SListEntry *)0x0) {
    pPVar3 = physx::shdfnd::getAllocator();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      pcVar5 = "<allocation names disabled>";
    }
    else {
      pcVar5 = (char *)__std_type_info_name(0x14683a840,&DAT_146bcc1d0);
    }
    lVar6 = (**(code **)(*(longlong *)pPVar3 + 8))
                      (pPVar3,0x37,pcVar5,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtSharedQueueEntryPool.h"
                       ,0x7f);
    if (lVar6 == 0) {
      return;
    }
    pSVar2 = (SListEntry *)(lVar6 + 0x17U & 0xfffffffffffffff0);
    *(longlong *)(pSVar2 + -8) = (longlong)pSVar2 - lVar6;
    *(undefined8 *)pSVar2 = 0;
    pSVar2[0x10] = (SListEntry)0x0;
  }
  *(undefined8 *)(pSVar2 + 8) = param_2;
  return;
}



// FUNCTION 143279ec0 createRegionsFromWorldBounds body=553 status=ok
// SIG undefined createRegionsFromWorldBounds(void)

ulonglong physx::PxBroadPhaseExt::createRegionsFromWorldBounds
                    (longlong param_1,float *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_58;
  float local_54;
  float local_50;
  
  uVar3 = 0;
  uVar4 = 0;
  fVar6 = 1.0 / (float)param_3;
  fVar10 = (param_2[3] - *param_2) * fVar6;
  fVar11 = (param_2[4] - param_2[1]) * fVar6;
  fVar6 = (param_2[5] - param_2[2]) * fVar6;
  fVar7 = local_50;
  fVar8 = local_54;
  fVar9 = local_58;
  if (param_3 != 0) {
    do {
      uVar2 = 0;
      uVar5 = uVar4;
      do {
        if (param_4 == 0) {
          local_58 = *param_2;
          fVar9 = param_2[3];
          local_50 = (float)(uVar3 + 1) * fVar6 + param_2[2];
          fVar7 = (float)uVar3 * fVar6 + param_2[2];
          uVar1 = uVar2;
LAB_14327a06b:
          fVar8 = (float)(uVar1 + 1) * fVar11 + param_2[1];
          local_54 = (float)uVar1 * fVar11 + param_2[1];
        }
        else if (param_4 == 1) {
          local_54 = param_2[1];
          fVar8 = param_2[4];
          fVar7 = (float)uVar3 * fVar6 + param_2[2];
          local_58 = (float)uVar2 * fVar10 + *param_2;
          fVar9 = (float)(uVar2 + 1) * fVar10 + *param_2;
          local_50 = (float)(uVar3 + 1) * fVar6 + param_2[2];
        }
        else if (param_4 == 2) {
          fVar7 = param_2[2];
          local_50 = param_2[5];
          fVar9 = (float)(uVar2 + 1) * fVar10 + *param_2;
          local_58 = (float)uVar2 * fVar10 + *param_2;
          uVar1 = uVar3;
          goto LAB_14327a06b;
        }
        uVar2 = uVar2 + 1;
        *(float *)(param_1 + uVar5 * 0x18) = local_58;
        uVar4 = (ulonglong)((int)uVar5 + 1);
        *(float *)(param_1 + 4 + uVar5 * 0x18) = local_54;
        *(float *)(param_1 + 8 + uVar5 * 0x18) = fVar7;
        *(float *)(param_1 + 0xc + uVar5 * 0x18) = fVar9;
        *(float *)(param_1 + 0x10 + uVar5 * 0x18) = fVar8;
        *(float *)(param_1 + 0x14 + uVar5 * 0x18) = local_50;
        uVar5 = uVar4;
      } while (uVar2 < param_3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return uVar4;
}



// FUNCTION 14327a0f0 FUN_14327a0f0 body=17 status=ok
// SIG undefined FUN_14327a0f0(void)

undefined1 FUN_14327a0f0(void)

{
  physx::shdfnd::Foundation::incRefCount();
  return 1;
}



// FUNCTION 14327a110 FreeDllHandle body=7 status=ok
// SIG void FreeDllHandle(void)

void __cdecl FWindowsPlatformProcess::FreeDllHandle(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014327a110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  physx::shdfnd::Foundation::decRefCount();
  return;
}



// FUNCTION 14327a120 RegisterExtensionsSerializers body=2819 status=ok
// SIG undefined RegisterExtensionsSerializers(void)

void physx::Ext::RegisterExtensionsSerializers(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x8a);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3950;
  }
  (**(code **)(*param_1 + 0x20))(param_1,9,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x8b);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3988;
  }
  (**(code **)(*param_1 + 0x20))(param_1,8,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x8d);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af39c0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,3,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x8e);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af39f8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,4,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x8f);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3a30;
  }
  (**(code **)(*param_1 + 0x20))(param_1,1,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x90);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3a68;
  }
  (**(code **)(*param_1 + 0x20))(param_1,2,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x91);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3aa0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,7,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x92);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3ad8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,6,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x93);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3b10;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xf,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x94);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3b48;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xe,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x97);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3b80;
  }
  (**(code **)(*param_1 + 0x20))(param_1,5,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x98);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3bb8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xb,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x9b);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3bf0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xc,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x9c);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3c28;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xd,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0x9f);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3cd0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x103,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3c98;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x104,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa1);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3c60;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x105,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa2);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3d08;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x102,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa3);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3d40;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x101,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxRepXSerializer",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa4);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &PTR__scalar_deleting_destructor__145af3d78;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x100,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxSerializerDefaultAdapter",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa7);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_GetBoundProgramCounterForTimerManager_145af3db0;
    puVar2[1] = "FixedJoint";
  }
  (**(code **)*param_1)(param_1,0x103,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxSerializerDefaultAdapter",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_GetBoundProgramCounterForTimerManager_145af3df8;
    puVar2[1] = "DistanceJoint";
  }
  (**(code **)*param_1)(param_1,0x104,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxSerializerDefaultAdapter",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xa9);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_GetBoundProgramCounterForTimerManager_145af3e40;
    puVar2[1] = "D6Joint";
  }
  (**(code **)*param_1)(param_1,0x105,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxSerializerDefaultAdapter",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xaa);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_GetBoundProgramCounterForTimerManager_145af3e88;
    puVar2[1] = "PrismaticJoint";
  }
  (**(code **)*param_1)(param_1,0x102,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxSerializerDefaultAdapter",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xab);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_GetBoundProgramCounterForTimerManager_145af3ed0;
    puVar2[1] = "RevoluteJoint";
  }
  (**(code **)*param_1)(param_1,0x101,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"PxSerializerDefaultAdapter",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtExtensions.cpp"
                      ,0xac);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_GetBoundProgramCounterForTimerManager_145af3f18;
    puVar2[1] = "SphericalJoint";
  }
                    /* WARNING: Could not recover jumptable at 0x00014327ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x100,puVar2);
  return;
}



// FUNCTION 14327ac30 UnregisterExtensionsSerializers body=1399 status=ok
// SIG undefined UnregisterExtensionsSerializers(void)

void physx::Ext::UnregisterExtensionsSerializers(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x103);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x104);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x105);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x102);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x101);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,9);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,8);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,3);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,4);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,1);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,2);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,7);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,6);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xf);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xe);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,5);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xb);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xc);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xd);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x103);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x104);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x105);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x102);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x101);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x100);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  return;
}



// FUNCTION 14327b1b0 operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMaterial>_>::
     operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_res8 [2];
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,local_res10)
    ;
    if (((cVar4 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      local_res8[0] = 0;
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eDISABLE_FRICTION_1467c9900)
      ;
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b270 operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMaterial>_>::
     operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined2 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eDISABLE_FRICTION_1467c9900);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327b320 operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum> body=156 status=ok
// SIG undefined operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMaterial>_>::
     operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_res8 [4];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res8);
    if (((cVar4 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) {
      uVar5 = Sn::findEnumByName(local_res8[0],&PTR_s_eAVERAGE_1467c9930);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b3c0 operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum> body=228 status=ok
// SIG undefined operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMaterial>_>::
     operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  char *pcVar8;
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  ppuVar7 = &PTR_s_eAVERAGE_1467c9930;
  plVar3 = (longlong *)param_1[1];
  puVar4 = PTR_s_eAVERAGE_1467c9930;
  while (puVar4 != (undefined *)0x0) {
    if (*(int *)(ppuVar7 + 1) == iVar6) {
      (**(code **)(*plVar3 + 0x10))(plVar3,pcVar8,*ppuVar7);
    }
    ppuVar7 = ppuVar7 + 2;
    puVar4 = *ppuVar7;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327b4b0 operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64> body=160 status=ok
// SIG undefined operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
     operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *local_res8 [4];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res8);
    if ((((cVar4 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) &&
       ((longlong *)param_1[4] != (longlong *)0x0)) {
      uVar5 = (**(code **)(*(longlong *)param_1[4] + 8))();
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b550 operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64> body=109 status=ok
// SIG undefined operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 8;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 8;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x18;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b5c0 operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64> body=153 status=ok
// SIG undefined operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
     operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeProperty<char_const_*___ptr64>(param_1[1],param_1[4],param_1[3],pcVar5,uVar4);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327b660 FUN_14327b660 body=185 status=ok
// SIG undefined FUN_14327b660(void)

void FUN_14327b660(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_res8 [2];
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2)
  ;
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,local_res10)
    ;
    if (((cVar4 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      local_res8[0] = 0;
      physx::Sn::stringToFlagsType
                (local_res10[0],param_1[7],local_res8,&PTR_s_eVISUALIZATION_1467c9680);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b720 FUN_14327b720 body=165 status=ok
// SIG undefined FUN_14327b720(void)

void FUN_14327b720(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  physx::Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2)
  ;
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  physx::Sn::writeFlagsProperty
            (param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eVISUALIZATION_1467c9680);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327b7d0 operator()<26,physx::PxActor,unsigned_char,unsigned_char> body=167 status=ok
// SIG undefined operator()<26,physx::PxActor,unsigned_char,unsigned_char>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
     operator()<26,physx::PxActor,unsigned_char,unsigned_char>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  char *local_res8;
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,&local_res8)
    ;
    if (((cVar4 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      local_res10[0] = local_res8;
      uVar5 = strtoul(local_res8,local_res10,10);
      (*pcVar3)(param_1[6],(char)uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b880 operator()<26,physx::PxActor,unsigned_char,unsigned_char> body=109 status=ok
// SIG undefined operator()<26,physx::PxActor,unsigned_char,unsigned_char>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<26,physx::PxActor,unsigned_char,unsigned_char>(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x11;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x11;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x1a;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<26,physx::PxActor,unsigned_char,unsigned_char>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327b8f0 operator()<26,physx::PxActor,unsigned_char,unsigned_char> body=224 status=ok
// SIG undefined operator()<26,physx::PxActor,unsigned_char,unsigned_char>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
     operator()<26,physx::PxActor,unsigned_char,unsigned_char>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  undefined1 local_res8 [8];
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar7 = "bad__repx__name";
  }
  else {
    pcVar7 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  puVar3 = (undefined8 *)param_1[3];
  plVar4 = (longlong *)param_1[1];
  physx::operator<<(puVar3,uVar6);
  local_res8[0] = 0;
  (**(code **)*puVar3)(puVar3,local_res8,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,pcVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327b9d0 operator()<416,physx::PxClothStretchConfig,float,float> body=155 status=ok
// SIG undefined operator()<416,physx::PxClothStretchConfig,float,float>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
     operator()<416,physx::PxClothStretchConfig,float,float>(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_res8;
  undefined1 local_res10 [24];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,&local_res8)
    ;
    if (((cVar4 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      uVar6 = Sn::strToFloat(local_res8,local_res10);
      (*pcVar3)(param_1[6],uVar6);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327ba70 operator()<416,physx::PxClothStretchConfig,float,float> body=233 status=ok
// SIG undefined operator()<416,physx::PxClothStretchConfig,float,float>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
     operator()<416,physx::PxClothStretchConfig,float,float>(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  char *pcVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  fVar7 = (float)(*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  puVar3 = (undefined8 *)param_1[3];
  plVar4 = (longlong *)param_1[1];
  toStream<double>(puVar3,&DAT_145af391c,(double)fVar7);
  local_res8[0] = 0;
  (**(code **)*puVar3)(puVar3,local_res8,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,pcVar6,puVar3[4]);
  puVar3[3] = 0;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327bb60 operator()<27,physx::PxActor,unsigned_char,unsigned_char> body=109 status=ok
// SIG undefined operator()<27,physx::PxActor,unsigned_char,unsigned_char>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<27,physx::PxActor,unsigned_char,unsigned_char>(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x12;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x12;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x1b;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<26,physx::PxActor,unsigned_char,unsigned_char>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327bbd0 operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64> body=435 status=ok
// SIG undefined operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  int *piVar8;
  char *pcVar9;
  int local_res8;
  undefined4 uStackX_c;
  char *local_res10 [2];
  char *local_res20;
  undefined8 local_48;
  undefined1 local_40 [8];
  
  local_res8 = 0x1b4;
  piVar8 = &local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar8 = (int *)param_1[0xb];
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  lVar1 = *param_1;
  pcVar9 = "bad__repx__name";
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18);
  }
  lVar1 = param_1[8];
  lVar5 = 0;
  lVar7 = 0;
  cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res10);
  lVar4 = lVar5;
  if (cVar2 == '\0') {
LAB_14327bc94:
    lVar1 = param_1[6];
    (*(code *)param_2[5])(lVar1,local_40,&local_48);
    (*(code *)param_2[4])(lVar1,lVar4,local_48);
  }
  else {
    local_res20 = local_res10[0];
    lVar4 = lVar7;
    if ((local_res10[0] == (char *)0x0) || (*local_res10[0] == '\0')) goto LAB_14327bc94;
    uVar3 = _strtoui64(local_res10[0],&local_res20,10);
    if (uVar3 == 0) goto LAB_14327bc94;
    lVar4 = Sn::findReferencedObject<physx::PxConvexMesh>(lVar1,uVar3);
    if (lVar4 != 0) goto LAB_14327bc94;
  }
  *piVar8 = *piVar8 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    pcVar9 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18);
  }
  lVar1 = param_1[8];
  cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar9,&local_res8);
  if (cVar2 != '\0') {
    local_res10[0] = (char *)CONCAT44(uStackX_c,local_res8);
    if ((local_res10[0] != (char *)0x0) && (*local_res10[0] != '\0')) {
      uVar3 = _strtoui64(local_res10[0],local_res10,10);
      lVar5 = 0;
      if (uVar3 != 0) {
        lVar5 = Sn::findReferencedObject<physx::PxConvexMesh>(lVar1,uVar3);
        if (lVar5 == 0) goto LAB_14327bd65;
      }
    }
  }
  lVar1 = param_1[6];
  (*(code *)param_2[5])(lVar1,&local_res20,local_40);
  (*(code *)param_2[4])(lVar1,local_res20,lVar5);
LAB_14327bd65:
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327bd90 operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64> body=360 status=ok
// SIG undefined operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined1 local_res20 [8];
  
  local_res8 = 0x1b4;
  piVar2 = &local_res8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar2 = (int *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],&local_res10,local_res20);
  lVar1 = *param_1;
  pcVar3 = "bad__repx__name";
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar4 = "bad__repx__name";
  }
  else {
    pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  Sn::writeReference<physx::PxRigidActor>(param_1[1],param_1[4],pcVar4,local_res10);
  *piVar2 = *piVar2 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],&local_res10,&local_res8);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  Sn::writeReference<physx::PxRigidActor>
            (param_1[1],param_1[4],pcVar3,CONCAT44(uStackX_c,local_res8));
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327bf00 operator()<441,physx::PxJoint,float> body=387 status=ok
// SIG undefined operator()<441,physx::PxJoint,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<441,physx::PxJoint,float>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined4 uVar6;
  char *local_res8;
  char *local_res10 [2];
  undefined1 local_res20 [8];
  
  ppcVar5 = &local_res8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar5 = (char **)param_1[0xb];
  }
  local_res8 = (char *)CONCAT44(local_res8._4_4_,0x1b9);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  pcVar4 = "bad__repx__name";
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar3 = "bad__repx__name";
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar3,local_res10)
    ;
    if (((cVar2 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      uVar6 = Sn::strToFloat(local_res10[0],local_res20);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,local_res20,local_res10);
      (*(code *)param_2[4])(lVar1,uVar6,local_res10[0]._0_4_);
    }
  }
  *(int *)ppcVar5 = *(int *)ppcVar5 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar4,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      uVar6 = Sn::strToFloat(local_res8,local_res10);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,&local_res8,local_res10);
      (*(code *)param_2[4])(lVar1,local_res8._0_4_,uVar6);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327c090 operator()<441,physx::PxJoint,float> body=324 status=ok
// SIG undefined operator()<441,physx::PxJoint,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<441,physx::PxJoint,float>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int local_res8 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20;
  undefined8 *local_18;
  
  local_res8[0] = 0x1b9;
  piVar3 = local_res8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  iVar2 = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar2 = *(int *)param_1[6];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  local_24 = iVar2 + 0x7c;
  local_20 = 1;
  local_28[0] = 1;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
            (param_1,*piVar3,local_28);
  *piVar3 = *piVar3 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_24 = iVar2 + 0x80;
  local_20 = 0;
  local_28[0] = 1;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
            (param_1,*piVar3,local_28);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c1e0 operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_res8 [2];
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,local_res10)
    ;
    if (((cVar4 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      local_res8[0] = 0;
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eBROKEN_1467c8d40);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327c2a0 operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined2 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eBROKEN_1467c8d40);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c350 FUN_14327c350 body=185 status=ok
// SIG undefined FUN_14327c350(void)

void FUN_14327c350(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_res8 [2];
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2)
  ;
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,local_res10)
    ;
    if (((cVar4 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      local_res8[0] = 0;
      physx::Sn::stringToFlagsType
                (local_res10[0],param_1[7],local_res8,
                 &PTR_s_eREPORT_TO_FOREIGN_CLIENTS_TRIGG_1467c9740);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327c410 FUN_14327c410 body=165 status=ok
// SIG undefined FUN_14327c410(void)

void FUN_14327c410(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  physx::Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2)
  ;
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  physx::Sn::writeFlagsProperty
            (param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eREPORT_TO_FOREIGN_CLIENTS_TRIGG_1467c9740)
  ;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c4c0 operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit> body=156 status=ok
// SIG undefined operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [200];
  
  local_f0 = *(undefined4 *)param_2;
  uStack_ec = *(undefined4 *)((longlong)param_2 + 4);
  uStack_e8 = *(undefined4 *)(param_2 + 1);
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_e0 = *(undefined4 *)(param_2 + 2);
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_d8 = *(undefined4 *)(param_2 + 3);
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_f0,*param_2);
  local_f4 = 0xdc;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_f4 = **(int **)(param_1 + 0x60) + 0xdc;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_f8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_d0,0,0xc0);
  PxJointLinearLimitGeneratedInfo::PxJointLinearLimitGeneratedInfo(local_d0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  complexProperty<physx::PxRepXPropertyAccessor<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>,physx::PxJointLinearLimitGeneratedInfo_const_>
            (param_1,puVar2,local_f8,local_d0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327c560 operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit> body=189 status=ok
// SIG undefined operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [24];
  undefined1 local_d0 [200];
  
  local_f8 = *(undefined4 *)(param_2 + 0x10);
  uStack_f4 = *(undefined4 *)(param_2 + 0x14);
  uStack_f0 = *(undefined4 *)(param_2 + 0x18);
  uStack_ec = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_d0,0,0xc0);
  PxJointLinearLimitGeneratedInfo::PxJointLinearLimitGeneratedInfo(local_d0);
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_f4,local_f8))(local_e8,param_1[2]);
  local_128 = *puVar3;
  uStack_124 = puVar3[1];
  uStack_120 = puVar3[2];
  uStack_11c = puVar3[3];
  local_118 = *(undefined8 *)(puVar3 + 4);
  Sn::writeAllProperties<physx::PxJointLinearLimit>
            (*param_1,&local_128,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c620 operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair> body=156 status=ok
// SIG undefined operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_118 [4];
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [232];
  
  local_110 = *(undefined4 *)param_2;
  uStack_10c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_108 = *(undefined4 *)(param_2 + 1);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_100 = *(undefined4 *)(param_2 + 2);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_f8 = *(undefined4 *)(param_2 + 3);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_110,*param_2);
  local_114 = 0xf4;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_114 = **(int **)(param_1 + 0x60) + 0xf4;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_118[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointAngularLimitPairGeneratedInfo::PxJointAngularLimitPairGeneratedInfo(local_f0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>
            (param_1,puVar2,local_118,local_f0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327c6c0 operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair> body=196 status=ok
// SIG undefined operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [32];
  undefined1 local_f0 [232];
  
  local_120 = *(undefined4 *)(param_2 + 0x10);
  uStack_11c = *(undefined4 *)(param_2 + 0x14);
  uStack_118 = *(undefined4 *)(param_2 + 0x18);
  uStack_114 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointAngularLimitPairGeneratedInfo::PxJointAngularLimitPairGeneratedInfo(local_f0);
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_11c,local_120))(local_110,param_1[2]);
  local_158 = *puVar3;
  uStack_154 = puVar3[1];
  uStack_150 = puVar3[2];
  uStack_14c = puVar3[3];
  local_148 = *(undefined8 *)(puVar3 + 4);
  local_140 = puVar3[6];
  Sn::writeAllProperties<physx::PxJointAngularLimitPair>
            (*param_1,&local_158,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c790 operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone> body=156 status=ok
// SIG undefined operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_118 [4];
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [232];
  
  local_110 = *(undefined4 *)param_2;
  uStack_10c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_108 = *(undefined4 *)(param_2 + 1);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_100 = *(undefined4 *)(param_2 + 2);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_f8 = *(undefined4 *)(param_2 + 3);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_110,*param_2);
  local_114 = 0x110;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_114 = **(int **)(param_1 + 0x60) + 0x110;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_118[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointLimitConeGeneratedInfo::PxJointLimitConeGeneratedInfo(local_f0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>
            (param_1,puVar2,local_118,local_f0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327c830 operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone> body=196 status=ok
// SIG undefined operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [32];
  undefined1 local_f0 [232];
  
  local_120 = *(undefined4 *)(param_2 + 0x10);
  uStack_11c = *(undefined4 *)(param_2 + 0x14);
  uStack_118 = *(undefined4 *)(param_2 + 0x18);
  uStack_114 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointLimitConeGeneratedInfo::PxJointLimitConeGeneratedInfo(local_f0);
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_11c,local_120))(local_110,param_1[2]);
  local_158 = *puVar3;
  uStack_154 = puVar3[1];
  uStack_150 = puVar3[2];
  uStack_14c = puVar3[3];
  local_148 = *(undefined8 *)(puVar3 + 4);
  local_140 = puVar3[6];
  Sn::writeAllProperties<physx::PxJointLimitCone>
            (*param_1,&local_158,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c900 operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=224 status=ok
// SIG undefined operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_28 = *(undefined4 *)(param_2 + 3);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_2c,local_30))(&local_68,param_1[2]);
  lVar2 = *param_1;
  local_68 = *puVar3;
  uStack_64 = puVar3[1];
  uStack_60 = puVar3[2];
  uStack_5c = puVar3[3];
  local_58 = puVar3[4];
  local_54 = puVar3[5];
  local_50 = puVar3[6];
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar4 = "bad__repx__name";
  }
  else {
    pcVar4 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeProperty<physx::PxTransform>(param_1[1],param_1[4],param_1[3],pcVar4,&local_68);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327c9e0 operator()<462,physx::PxD6Joint,physx::PxVec3> body=304 status=ok
// SIG undefined operator()<462,physx::PxD6Joint,physx::PxVec3>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     operator()<462,physx::PxD6Joint,physx::PxVec3>(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_res8 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined1 local_30;
  undefined8 *local_28;
  
  local_res8[0] = 0x1ce;
  piVar2 = local_res8;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x58);
  }
  iVar3 = 0;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 0x60);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  local_34 = iVar3 + 0x1a8;
  local_30 = 1;
  local_38[0] = 1;
  local_28 = param_2;
  cVar1 = Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::readProperty<physx::PxVec3>
                    (param_1,&local_58);
  if (cVar1 != '\0') {
    local_48 = local_58;
    local_40 = local_50;
    local_44 = local_54;
    PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>::set
              (local_38,*(undefined8 *)(param_1 + 0x30),&local_48);
  }
  *piVar2 = *piVar2 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_34 = iVar3 + 0x1b4;
  local_30 = 0;
  local_38[0] = 1;
  cVar1 = Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::readProperty<physx::PxVec3>
                    (param_1,&local_58);
  if (cVar1 != '\0') {
    local_48 = local_58;
    local_40 = local_50;
    local_44 = local_54;
    PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>::set
              (local_38,*(undefined8 *)(param_1 + 0x30),&local_48);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327cb10 operator()<462,physx::PxD6Joint,physx::PxVec3> body=327 status=ok
// SIG undefined operator()<462,physx::PxD6Joint,physx::PxVec3>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     operator()<462,physx::PxD6Joint,physx::PxVec3>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int local_res8 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20;
  undefined8 *local_18;
  
  local_res8[0] = 0x1ce;
  piVar3 = local_res8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  iVar2 = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar2 = *(int *)param_1[6];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  local_24 = iVar2 + 0x1a8;
  local_20 = 1;
  local_28[0] = 1;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>_const_>
            (param_1,*piVar3,local_28);
  *piVar3 = *piVar3 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_24 = iVar2 + 0x1b4;
  local_20 = 0;
  local_28[0] = 1;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>_const_>
            (param_1,*piVar3,local_28);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327cc60 operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxDistanceJoint>_>::
     operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_res8 [2];
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,local_res10)
    ;
    if (((cVar4 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      local_res8[0] = 0;
      Sn::stringToFlagsType
                (local_res10[0],param_1[7],local_res8,&PTR_s_eMAX_DISTANCE_ENABLED_1467c8cc0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327cd20 operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxDistanceJoint>_>::
     operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined2 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty
            (param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eMAX_DISTANCE_ENABLED_1467c8cc0);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}


