// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432be260 Push body=3 status=ok
// SIG void Push(HashArray * this, ulong param_1)

/* public: void __cdecl Scaleform::PtrLeakContextInitializer::HashArray::Push(unsigned long) __ptr64
    */

void __thiscall Scaleform::PtrLeakContextInitializer::HashArray::Push(HashArray *this,ulong param_1)

{
                    /* 0x32be260  334  ?Push@HashArray@PtrLeakContextInitializer@Scaleform@@QEAAXK@Z
                        */
  return;
}



// FUNCTION 1432be270 Contains body=3 status=ok
// SIG bool Contains(HashArray * this, ulong param_1)

/* public: bool __cdecl Scaleform::PtrLeakContextInitializer::HashArray::Contains(unsigned
   long)const __ptr64 */

bool __thiscall
Scaleform::PtrLeakContextInitializer::HashArray::Contains(HashArray *this,ulong param_1)

{
                    /* 0x32be270  95
                       ?Contains@HashArray@PtrLeakContextInitializer@Scaleform@@QEBA_NK@Z */
  return false;
}



// FUNCTION 1432be280 IsEmpty body=3 status=ok
// SIG bool IsEmpty(HashArray * this)

/* public: bool __cdecl Scaleform::PtrLeakContextInitializer::HashArray::IsEmpty(void)const __ptr64
    */

bool __thiscall Scaleform::PtrLeakContextInitializer::HashArray::IsEmpty(HashArray *this)

{
                    /* 0x32be280  232
                       ?IsEmpty@HashArray@PtrLeakContextInitializer@Scaleform@@QEBA_NXZ */
  return true;
}



// FUNCTION 1432be290 PtrLeakContextInitializer body=33 status=ok
// SIG undefined PtrLeakContextInitializer(PtrLeakContextInitializer * this, MemoryHeap * param_1)

/* public: __cdecl Scaleform::PtrLeakContextInitializer::PtrLeakContextInitializer(class
   Scaleform::MemoryHeap * __ptr64) __ptr64 */

PtrLeakContextInitializer * __thiscall
Scaleform::PtrLeakContextInitializer::PtrLeakContextInitializer
          (PtrLeakContextInitializer *this,MemoryHeap *param_1)

{
                    /* 0x32be290  7
                       ??0PtrLeakContextInitializer@Scaleform@@QEAA@PEAVMemoryHeap@1@@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(PtrLeakContextInitializer **)(this + 0x60) = this + 0x20;
  *(undefined8 *)(this + 0x18) = 0x10;
  return this;
}



// FUNCTION 1432be2c0 ~PtrLeakContextInitializer body=105 status=ok
// SIG void ~PtrLeakContextInitializer(PtrLeakContextInitializer * this)

/* public: __cdecl Scaleform::PtrLeakContextInitializer::~PtrLeakContextInitializer(void) __ptr64 */

void __thiscall
Scaleform::PtrLeakContextInitializer::~PtrLeakContextInitializer(PtrLeakContextInitializer *this)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x32be2c0  35  ??1PtrLeakContextInitializer@Scaleform@@QEAA@XZ */
  if (*(PtrLeakContextInitializer **)(this + 0x60) != this + 0x20) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(PtrLeakContextInitializer **)(this + 0x60) = this + 0x20;
  *(undefined8 *)(this + 0x10) = 0;
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar1 + 1,0xffffffff);
    if ((iVar2 == 1) && (puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}



// FUNCTION 1432be330 PushGlobalTrackedHash body=3 status=ok
// SIG void PushGlobalTrackedHash(ulong param_1)

/* public: static void __cdecl Scaleform::PtrLeakContextInitializer::PushGlobalTrackedHash(unsigned
   long) */

void __cdecl Scaleform::PtrLeakContextInitializer::PushGlobalTrackedHash(ulong param_1)

{
                    /* 0x32be330  337
                       ?PushGlobalTrackedHash@PtrLeakContextInitializer@Scaleform@@SAXK@Z */
  return;
}



// FUNCTION 1432be340 PushTrackedHash body=3 status=ok
// SIG void PushTrackedHash(PtrLeakContextInitializer * this, ulong param_1)

/* public: void __cdecl Scaleform::PtrLeakContextInitializer::PushTrackedHash(unsigned long) __ptr64
    */

void __thiscall
Scaleform::PtrLeakContextInitializer::PushTrackedHash(PtrLeakContextInitializer *this,ulong param_1)

{
                    /* 0x32be340  338
                       ?PushTrackedHash@PtrLeakContextInitializer@Scaleform@@QEAAXK@Z */
  return;
}



// FUNCTION 1432be350 IsHashTracked body=3 status=ok
// SIG bool IsHashTracked(PtrLeakContextInitializer * this, ulong param_1)

/* public: bool __cdecl Scaleform::PtrLeakContextInitializer::IsHashTracked(unsigned long)const
   __ptr64 */

bool __thiscall
Scaleform::PtrLeakContextInitializer::IsHashTracked(PtrLeakContextInitializer *this,ulong param_1)

{
                    /* 0x32be350  234  ?IsHashTracked@PtrLeakContextInitializer@Scaleform@@QEBA_NK@Z
                        */
  return false;
}



// FUNCTION 1432be360 ShouldReference body=3 status=ok
// SIG bool ShouldReference(PtrLeakContextInitializer * this, ulong param_1)

/* public: bool __cdecl Scaleform::PtrLeakContextInitializer::ShouldReference(unsigned long)const
   __ptr64 */

bool __thiscall
Scaleform::PtrLeakContextInitializer::ShouldReference(PtrLeakContextInitializer *this,ulong param_1)

{
                    /* 0x32be360  460
                       ?ShouldReference@PtrLeakContextInitializer@Scaleform@@QEBA_NK@Z */
  return false;
}



// FUNCTION 1432be370 ShouldReference body=3 status=ok
// SIG bool ShouldReference(PtrLeakContextInitializer * this)

/* public: bool __cdecl Scaleform::PtrLeakContextInitializer::ShouldReference(void) __ptr64 */

bool __thiscall
Scaleform::PtrLeakContextInitializer::ShouldReference(PtrLeakContextInitializer *this)

{
                    /* 0x32be370  459
                       ?ShouldReference@PtrLeakContextInitializer@Scaleform@@QEAA_NXZ */
  return false;
}



// FUNCTION 1432be380 CalcHash body=3 status=ok
// SIG ulong CalcHash(PtrLeakContextInitializer * this)

/* public: unsigned long __cdecl Scaleform::PtrLeakContextInitializer::CalcHash(void) __ptr64 */

ulong __thiscall Scaleform::PtrLeakContextInitializer::CalcHash(PtrLeakContextInitializer *this)

{
                    /* 0x32be380  76  ?CalcHash@PtrLeakContextInitializer@Scaleform@@QEAAKXZ */
  return 0;
}



// FUNCTION 1432be390 PtrLeakContextRef body=11 status=ok
// SIG undefined PtrLeakContextRef(PtrLeakContextRef * this)

/* public: __cdecl Scaleform::PtrLeakContextRef::PtrLeakContextRef(void) __ptr64 */

PtrLeakContextRef * __thiscall
Scaleform::PtrLeakContextRef::PtrLeakContextRef(PtrLeakContextRef *this)

{
                    /* 0x32be390  8  ??0PtrLeakContextRef@Scaleform@@QEAA@XZ */
  *(undefined8 *)this = 0;
  return this;
}



// FUNCTION 1432be3b0 IsTracked body=3 status=ok
// SIG bool IsTracked(PtrLeakContextRef * this)

/* public: bool __cdecl Scaleform::PtrLeakContextRef::IsTracked(void)const __ptr64 */

bool __thiscall Scaleform::PtrLeakContextRef::IsTracked(PtrLeakContextRef *this)

{
                    /* 0x32be3b0  244  ?IsTracked@PtrLeakContextRef@Scaleform@@QEBA_NXZ */
  return false;
}



// FUNCTION 1432be3c0 BreakIfTracked body=3 status=ok
// SIG bool BreakIfTracked(PtrLeakContextRef * this)

/* public: bool __cdecl Scaleform::PtrLeakContextRef::BreakIfTracked(void)const __ptr64 */

bool __thiscall Scaleform::PtrLeakContextRef::BreakIfTracked(PtrLeakContextRef *this)

{
                    /* 0x32be3c0  72  ?BreakIfTracked@PtrLeakContextRef@Scaleform@@QEBA_NXZ */
  return false;
}



// FUNCTION 1432be3d0 `vector_deleting_destructor' body=140 status=ok
// SIG undefined `vector_deleting_destructor'(void)

undefined8 *
AK::WriteBytesCount::_vector_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-2] = &PTR__vector_deleting_destructor__145af7a80;
      puVar1 = puVar1 + -2;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x10 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR__vector_deleting_destructor__145af7a80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432be460 FUN_1432be460 body=277 status=ok
// SIG undefined FUN_1432be460(void)

longlong * FUN_1432be460(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (longlong)&PTR_FUN_145af7a88;
    if (param_1[2] != 0) {
      *(undefined8 *)(param_1[2] + 8) = 0;
      piVar2 = (int *)param_1[2];
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
    *param_1 = (longlong)&PTR__vector_deleting_destructor__145af7a80;
    plVar4 = param_1;
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1,0x18);
    }
  }
  else {
    lVar5 = param_1[-1];
    plVar4 = param_1 + -1;
    plVar3 = param_1 + lVar5 * 3;
    while (lVar5 != 0) {
      plVar1 = plVar3 + -3;
      lVar5 = lVar5 + -1;
      *plVar1 = (longlong)&PTR_FUN_145af7a88;
      if (plVar3[-1] != 0) {
        *(undefined8 *)(plVar3[-1] + 8) = 0;
        piVar2 = (int *)plVar3[-1];
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
      *plVar1 = (longlong)&PTR__vector_deleting_destructor__145af7a80;
      plVar3 = plVar1;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(plVar4,*plVar4 * 0x18 + 8);
    }
  }
  return plVar4;
}



// FUNCTION 1432be580 FUN_1432be580 body=73 status=ok
// SIG undefined FUN_1432be580(void)

undefined8 * FUN_1432be580(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f70a50;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432be5d0 Append body=149 status=ok
// SIG Matrix2x4<float> * Append(Matrix2x4<float> * this, Matrix2x4<float> * param_1)

/* public: class Scaleform::Render::Matrix2x4<float> & __ptr64 __cdecl
   Scaleform::Render::Matrix2x4<float>::Append(class Scaleform::Render::Matrix2x4<float> const &
   __ptr64) __ptr64 */

Matrix2x4<float> * __thiscall
Scaleform::Render::Matrix2x4<float>::Append(Matrix2x4<float> *this,Matrix2x4<float> *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar15;
  uint uVar16;
  
                    /* 0x32be5d0  66  ?Append@?$Matrix2x4@M@Render@Scaleform@@QEAAAEAV123@AEBV123@@Z
                        */
  uVar13 = FUN_1432be8b0();
  uVar15 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar14 = FUN_1432be920();
  uVar16 = (uint)((ulonglong)uVar14 >> 0x20);
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  fVar9 = *(float *)this;
  fVar10 = *(float *)(this + 4);
  fVar11 = *(float *)(this + 8);
  fVar12 = *(float *)(this + 0xc);
  *(uint *)this =
       (uint)(fVar2 * *(float *)(this + 0x10) + fVar1 * fVar9 + (float)((uint)fVar1 & (uint)uVar13))
       & (uint)uVar14;
  *(uint *)(this + 4) =
       (uint)(fVar2 * *(float *)(this + 0x14) + fVar1 * fVar10 + (float)((uint)fVar2 & uVar15)) &
       uVar16;
  *(uint *)(this + 8) =
       (uint)(fVar2 * *(float *)(this + 0x18) + fVar1 * fVar11 + (float)(uVar3 & extraout_XMM0_Dc))
       & extraout_XMM0_Dc_00;
  *(uint *)(this + 0xc) =
       (uint)(fVar2 * *(float *)(this + 0x1c) + fVar1 * fVar12 + (float)(uVar4 & extraout_XMM0_Dd))
       & extraout_XMM0_Dd_00;
  *(uint *)(this + 0x10) =
       (uint)(fVar6 * *(float *)(this + 0x10) + fVar5 * fVar9 + (float)((uint)fVar5 & (uint)uVar13))
       & (uint)uVar14;
  *(uint *)(this + 0x14) =
       (uint)(fVar6 * *(float *)(this + 0x14) + fVar5 * fVar10 + (float)((uint)fVar6 & uVar15)) &
       uVar16;
  *(uint *)(this + 0x18) =
       (uint)(fVar6 * *(float *)(this + 0x18) + fVar5 * fVar11 + (float)(uVar7 & extraout_XMM0_Dc))
       & extraout_XMM0_Dc_00;
  *(uint *)(this + 0x1c) =
       (uint)(fVar6 * *(float *)(this + 0x1c) + fVar5 * fVar12 + (float)(uVar8 & extraout_XMM0_Dd))
       & extraout_XMM0_Dd_00;
  return this;
}



// FUNCTION 1432be670 FUN_1432be670 body=161 status=ok
// SIG undefined FUN_1432be670(void)

void FUN_1432be670(uint *param_1,float *param_2,float *param_3)

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
  undefined8 uVar17;
  undefined8 uVar18;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar19;
  uint uVar20;
  
  uVar17 = FUN_1432be8b0();
  uVar19 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar18 = FUN_1432be920();
  uVar20 = (uint)((ulonglong)uVar18 >> 0x20);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_3[7];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  *param_1 = (uint)(fVar2 * fVar13 + fVar1 * fVar9 + (float)((uint)fVar1 & (uint)uVar17)) &
             (uint)uVar18;
  param_1[1] = (uint)(fVar2 * fVar14 + fVar1 * fVar10 + (float)((uint)fVar2 & uVar19)) & uVar20;
  param_1[2] = (uint)(fVar2 * fVar15 + fVar1 * fVar11 + (float)((uint)fVar3 & extraout_XMM0_Dc)) &
               extraout_XMM0_Dc_00;
  param_1[3] = (uint)(fVar2 * fVar16 + fVar1 * fVar12 + (float)((uint)fVar4 & extraout_XMM0_Dd)) &
               extraout_XMM0_Dd_00;
  param_1[4] = (uint)(fVar6 * fVar13 + fVar5 * fVar9 + (float)((uint)fVar5 & (uint)uVar17)) &
               (uint)uVar18;
  param_1[5] = (uint)(fVar6 * fVar14 + fVar5 * fVar10 + (float)((uint)fVar6 & uVar19)) & uVar20;
  param_1[6] = (uint)(fVar6 * fVar15 + fVar5 * fVar11 + (float)((uint)fVar7 & extraout_XMM0_Dc)) &
               extraout_XMM0_Dc_00;
  param_1[7] = (uint)(fVar6 * fVar16 + fVar5 * fVar12 + (float)((uint)fVar8 & extraout_XMM0_Dd)) &
               extraout_XMM0_Dd_00;
  return;
}



// FUNCTION 1432be720 FUN_1432be720 body=275 status=ok
// SIG undefined FUN_1432be720(void)

void FUN_1432be720(uint *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar27;
  uint uVar28;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar26;
  
  uVar26 = FUN_1432be8b0();
  uVar27 = (uint)((ulonglong)uVar26 >> 0x20);
  uVar25 = (uint)uVar26;
  uVar26 = FUN_1432be920();
  uVar28 = (uint)((ulonglong)uVar26 >> 0x20);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar5 = param_4[4];
  fVar6 = param_4[5];
  fVar7 = param_4[6];
  fVar8 = param_4[7];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  fVar17 = param_3[2];
  fVar18 = param_3[3];
  fVar19 = param_3[6];
  fVar20 = param_3[7];
  fVar21 = param_3[6];
  fVar22 = param_3[7];
  fVar23 = param_3[2];
  fVar24 = param_3[3];
  fVar29 = fVar2 * param_3[4] + fVar1 * *param_3 + (float)((uint)fVar1 & uVar25);
  fVar30 = fVar2 * param_3[5] + fVar1 * param_3[1] + (float)((uint)fVar2 & uVar27);
  fVar31 = fVar6 * param_3[4] + fVar5 * *param_3 + (float)((uint)fVar5 & uVar25);
  fVar32 = fVar6 * param_3[5] + fVar5 * param_3[1] + (float)((uint)fVar6 & uVar27);
  *param_1 = (uint)(fVar30 * fVar13 + fVar29 * fVar9 + (float)((uint)fVar29 & uVar25)) &
             (uint)uVar26;
  param_1[1] = (uint)(fVar30 * fVar14 + fVar29 * fVar10 + (float)((uint)fVar30 & uVar27)) & uVar28;
  param_1[2] = (uint)(fVar30 * fVar15 + fVar29 * fVar11 +
                     (float)((uint)(fVar2 * fVar19 + fVar1 * fVar17 +
                                   (float)((uint)fVar3 & extraout_XMM0_Dc)) & extraout_XMM0_Dc)) &
               extraout_XMM0_Dc_00;
  param_1[3] = (uint)(fVar30 * fVar16 + fVar29 * fVar12 +
                     (float)((uint)(fVar2 * fVar20 + fVar1 * fVar18 +
                                   (float)((uint)fVar4 & extraout_XMM0_Dd)) & extraout_XMM0_Dd)) &
               extraout_XMM0_Dd_00;
  param_1[4] = (uint)(fVar32 * fVar13 + fVar31 * fVar9 + (float)((uint)fVar31 & uVar25)) &
               (uint)uVar26;
  param_1[5] = (uint)(fVar32 * fVar14 + fVar31 * fVar10 + (float)((uint)fVar32 & uVar27)) & uVar28;
  param_1[6] = (uint)(fVar32 * fVar15 + fVar31 * fVar11 +
                     (float)((uint)(fVar6 * fVar21 + fVar5 * fVar23 +
                                   (float)((uint)fVar7 & extraout_XMM0_Dc)) & extraout_XMM0_Dc)) &
               extraout_XMM0_Dc_00;
  param_1[7] = (uint)(fVar32 * fVar16 + fVar31 * fVar12 +
                     (float)((uint)(fVar6 * fVar22 + fVar5 * fVar24 +
                                   (float)((uint)fVar8 & extraout_XMM0_Dd)) & extraout_XMM0_Dd)) &
               extraout_XMM0_Dd_00;
  return;
}



// FUNCTION 1432be840 EncloseTransform body=100 status=ok
// SIG void EncloseTransform(Matrix2x4<float> * this, Rect<float> * param_1, Rect<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::EncloseTransform(class
   Scaleform::Render::Rect<float> * __ptr64,class Scaleform::Render::Rect<float> const &
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Matrix2x4<float>::EncloseTransform
          (Matrix2x4<float> *this,Rect<float> *param_1,Rect<float> *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar11;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
                    /* 0x32be840  111
                       ?EncloseTransform@?$Matrix2x4@M@Render@Scaleform@@QEBAXPEAV?$Rect@M@23@AEBV423@@Z
                        */
  fVar4 = *(float *)(this + 0xc);
  fVar1 = *(float *)(this + 0x1c);
  fVar5 = *(float *)param_2 * *(float *)this;
  fVar8 = *(float *)param_2 * *(float *)(this + 0x10);
  fVar9 = *(float *)(param_2 + 4) * *(float *)(this + 4);
  fVar10 = *(float *)(param_2 + 4) * *(float *)(this + 0x14);
  fVar11 = *(float *)(param_2 + 8) * *(float *)this;
  fVar14 = *(float *)(param_2 + 8) * *(float *)(this + 0x10);
  fVar15 = *(float *)(param_2 + 0xc) * *(float *)(this + 4);
  fVar16 = *(float *)(param_2 + 0xc) * *(float *)(this + 0x14);
  auVar12._0_8_ = CONCAT44(fVar15 + fVar11,fVar9 + fVar5);
  auVar12._8_4_ = fVar10 + fVar8;
  auVar12._12_4_ = fVar16 + fVar14;
  fVar11 = fVar11 + fVar9;
  fVar5 = fVar5 + fVar15;
  fVar14 = fVar14 + fVar10;
  fVar8 = fVar8 + fVar16;
  auVar6._8_4_ = auVar12._8_4_;
  auVar6._0_8_ = auVar12._0_8_;
  auVar6._12_4_ = auVar12._12_4_;
  auVar7._4_4_ = fVar5;
  auVar7._0_4_ = fVar11;
  auVar7._8_4_ = fVar14;
  auVar7._12_4_ = fVar8;
  auVar7 = minps(auVar6,auVar7);
  auVar13._4_4_ = fVar5;
  auVar13._0_4_ = fVar11;
  auVar13._8_4_ = fVar14;
  auVar13._12_4_ = fVar8;
  auVar13 = maxps(auVar12,auVar13);
  auVar2._4_4_ = auVar7._0_4_;
  auVar2._0_4_ = auVar7._4_4_;
  auVar2._8_4_ = auVar7._12_4_;
  auVar2._12_4_ = auVar7._8_4_;
  auVar7 = minps(auVar7,auVar2);
  auVar3._4_4_ = auVar13._0_4_;
  auVar3._0_4_ = auVar13._4_4_;
  auVar3._8_4_ = auVar13._12_4_;
  auVar3._12_4_ = auVar13._8_4_;
  auVar13 = maxps(auVar13,auVar3);
  *(float *)param_1 = auVar7._0_4_ + fVar4;
  *(float *)(param_1 + 4) = auVar7._8_4_ + fVar1;
  *(float *)(param_1 + 8) = auVar13._0_4_ + fVar4;
  *(float *)(param_1 + 0xc) = auVar13._8_4_ + fVar1;
  return;
}



// FUNCTION 1432be8b0 FUN_1432be8b0 body=102 status=ok
// SIG undefined FUN_1432be8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432be8b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62f50) {
    _Init_thread_header(&DAT_146b62f50);
    if (DAT_146b62f50 == -1) {
      _DAT_146b62f40 = 0;
      uRam0000000146b62f48 = 0xffffffff00000000;
      _Init_thread_footer(&DAT_146b62f50);
    }
  }
  return;
}



// FUNCTION 1432be920 FUN_1432be920 body=102 status=ok
// SIG undefined FUN_1432be920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432be920(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62f70) {
    _Init_thread_header(&DAT_146b62f70);
    if (DAT_146b62f70 == -1) {
      _DAT_146b62f60 = 0xffffffffffffffff;
      uRam0000000146b62f68 = 0xffffffff00000000;
      _Init_thread_footer(&DAT_146b62f70);
    }
  }
  return;
}



// FUNCTION 1432be990 MultiplyMatrix body=282 status=ok
// SIG void MultiplyMatrix(Matrix3x4<float> * this, Matrix3x4<float> * param_1, Matrix3x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix3x4<float> const & __ptr64,class Scaleform::Render::Matrix3x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
          (Matrix3x4<float> *this,Matrix3x4<float> *param_1,Matrix3x4<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
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
  uint uVar24;
  uint uVar25;
  uint uVar27;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined8 uVar26;
  
                    /* 0x32be990  273
                       ?MultiplyMatrix@?$Matrix3x4@M@Render@Scaleform@@QEAAXAEBV123@0@Z */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)param_2;
  fVar14 = *(float *)(param_2 + 4);
  fVar15 = *(float *)(param_2 + 8);
  fVar16 = *(float *)(param_2 + 0xc);
  fVar17 = *(float *)(param_2 + 0x20);
  fVar18 = *(float *)(param_2 + 0x24);
  fVar19 = *(float *)(param_2 + 0x28);
  fVar20 = *(float *)(param_2 + 0x2c);
  fVar21 = *(float *)(param_1 + 0x20);
  fVar22 = *(float *)(param_1 + 0x24);
  fVar23 = *(float *)(param_1 + 0x28);
  uVar24 = *(uint *)(param_1 + 0x2c);
  uVar26 = FUN_1432be8b0();
  uVar27 = (uint)((ulonglong)uVar26 >> 0x20);
  uVar25 = (uint)uVar26;
  *(float *)this = fVar2 * fVar9 + fVar1 * fVar13 + fVar3 * fVar17 + (float)(uVar25 & (uint)fVar1);
  *(float *)(this + 4) =
       fVar2 * fVar10 + fVar1 * fVar14 + fVar3 * fVar18 + (float)(uVar27 & (uint)fVar2);
  *(float *)(this + 8) =
       fVar2 * fVar11 + fVar1 * fVar15 + fVar3 * fVar19 + (float)(extraout_XMM0_Dc & (uint)fVar3);
  *(float *)(this + 0xc) =
       fVar2 * fVar12 + fVar1 * fVar16 + fVar3 * fVar20 + (float)(extraout_XMM0_Dd & uVar4);
  *(float *)(this + 0x10) =
       fVar6 * fVar9 + fVar5 * fVar13 + fVar7 * fVar17 + (float)(uVar25 & (uint)fVar5);
  *(float *)(this + 0x14) =
       fVar6 * fVar10 + fVar5 * fVar14 + fVar7 * fVar18 + (float)(uVar27 & (uint)fVar6);
  *(float *)(this + 0x18) =
       fVar6 * fVar11 + fVar5 * fVar15 + fVar7 * fVar19 + (float)(extraout_XMM0_Dc & (uint)fVar7);
  *(float *)(this + 0x1c) =
       fVar6 * fVar12 + fVar5 * fVar16 + fVar7 * fVar20 + (float)(extraout_XMM0_Dd & uVar8);
  *(float *)(this + 0x20) =
       fVar22 * fVar9 + fVar21 * fVar13 + fVar23 * fVar17 + (float)(uVar25 & (uint)fVar21);
  *(float *)(this + 0x24) =
       fVar22 * fVar10 + fVar21 * fVar14 + fVar23 * fVar18 + (float)(uVar27 & (uint)fVar22);
  *(float *)(this + 0x28) =
       fVar22 * fVar11 + fVar21 * fVar15 + fVar23 * fVar19 +
       (float)(extraout_XMM0_Dc & (uint)fVar23);
  *(float *)(this + 0x2c) =
       fVar22 * fVar12 + fVar21 * fVar16 + fVar23 * fVar20 + (float)(extraout_XMM0_Dd & uVar24);
  return;
}



// FUNCTION 1432beab0 MultiplyMatrix body=212 status=ok
// SIG void MultiplyMatrix(Matrix3x4<float> * this, Matrix3x4<float> * param_1, Matrix2x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix3x4<float> const & __ptr64,class Scaleform::Render::Matrix2x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
          (Matrix3x4<float> *this,Matrix3x4<float> *param_1,Matrix2x4<float> *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
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
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined8 uVar22;
  
                    /* 0x32beab0  274
                       ?MultiplyMatrix@?$Matrix3x4@M@Render@Scaleform@@QEAAXAEBV123@AEBV?$Matrix2x4@M@23@@Z
                        */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)param_2;
  fVar14 = *(float *)(param_2 + 4);
  fVar15 = *(float *)(param_2 + 8);
  fVar16 = *(float *)(param_2 + 0xc);
  fVar17 = *(float *)(param_1 + 0x20);
  fVar18 = *(float *)(param_1 + 0x24);
  uVar19 = *(uint *)(param_1 + 0x28);
  uVar20 = *(uint *)(param_1 + 0x2c);
  uVar22 = FUN_1432bec70();
  uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
  uVar21 = (uint)uVar22;
  *(float *)this = fVar2 * fVar9 + fVar1 * fVar13 + (float)(uVar21 & (uint)fVar1);
  *(float *)(this + 4) = fVar2 * fVar10 + fVar1 * fVar14 + (float)(uVar23 & (uint)fVar2);
  *(float *)(this + 8) = fVar2 * fVar11 + fVar1 * fVar15 + (float)(extraout_XMM0_Dc & uVar3);
  *(float *)(this + 0xc) = fVar2 * fVar12 + fVar1 * fVar16 + (float)(extraout_XMM0_Dd & uVar4);
  *(float *)(this + 0x10) = fVar6 * fVar9 + fVar5 * fVar13 + (float)(uVar21 & (uint)fVar5);
  *(float *)(this + 0x14) = fVar6 * fVar10 + fVar5 * fVar14 + (float)(uVar23 & (uint)fVar6);
  *(float *)(this + 0x18) = fVar6 * fVar11 + fVar5 * fVar15 + (float)(extraout_XMM0_Dc & uVar7);
  *(float *)(this + 0x1c) = fVar6 * fVar12 + fVar5 * fVar16 + (float)(extraout_XMM0_Dd & uVar8);
  *(float *)(this + 0x20) = fVar18 * fVar9 + fVar17 * fVar13 + (float)(uVar21 & (uint)fVar17);
  *(float *)(this + 0x24) = fVar18 * fVar10 + fVar17 * fVar14 + (float)(uVar23 & (uint)fVar18);
  *(float *)(this + 0x28) = fVar18 * fVar11 + fVar17 * fVar15 + (float)(extraout_XMM0_Dc & uVar19);
  *(float *)(this + 0x2c) = fVar18 * fVar12 + fVar17 * fVar16 + (float)(extraout_XMM0_Dd & uVar20);
  return;
}



// FUNCTION 1432beb90 MultiplyMatrix body=211 status=ok
// SIG void MultiplyMatrix(Matrix3x4<float> * this, Matrix2x4<float> * param_1, Matrix3x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix2x4<float> const & __ptr64,class Scaleform::Render::Matrix3x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
          (Matrix3x4<float> *this,Matrix2x4<float> *param_1,Matrix3x4<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
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
  uint uVar20;
  undefined8 uVar21;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  uint uVar22;
  
                    /* 0x32beb90  275
                       ?MultiplyMatrix@?$Matrix3x4@M@Render@Scaleform@@QEAAXAEBV?$Matrix2x4@M@23@AEBV123@@Z
                        */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x14);
  fVar7 = *(float *)(param_2 + 0x18);
  fVar8 = *(float *)(param_2 + 0x1c);
  fVar9 = *(float *)param_2;
  fVar10 = *(float *)(param_2 + 4);
  fVar11 = *(float *)(param_2 + 8);
  fVar12 = *(float *)(param_2 + 0xc);
  fVar13 = *(float *)(param_2 + 0x20);
  fVar14 = *(float *)(param_2 + 0x24);
  fVar15 = *(float *)(param_2 + 0x28);
  fVar16 = *(float *)(param_2 + 0x2c);
  fVar17 = *(float *)(param_1 + 0x10);
  fVar18 = *(float *)(param_1 + 0x14);
  fVar19 = *(float *)(param_1 + 0x18);
  uVar20 = *(uint *)(param_1 + 0x1c);
  uVar21 = FUN_1432be8b0();
  uVar22 = (uint)((ulonglong)uVar21 >> 0x20);
  *(float *)this =
       fVar2 * fVar5 + fVar1 * fVar9 + fVar3 * fVar13 + (float)((uint)uVar21 & (uint)fVar1);
  *(float *)(this + 4) =
       fVar2 * fVar6 + fVar1 * fVar10 + fVar3 * fVar14 + (float)(uVar22 & (uint)fVar2);
  *(float *)(this + 8) =
       fVar2 * fVar7 + fVar1 * fVar11 + fVar3 * fVar15 + (float)(extraout_XMM0_Dc & (uint)fVar3);
  *(float *)(this + 0xc) =
       fVar2 * fVar8 + fVar1 * fVar12 + fVar3 * fVar16 + (float)(extraout_XMM0_Dd & uVar4);
  *(float *)(this + 0x10) =
       fVar18 * fVar5 + fVar17 * fVar9 + fVar19 * fVar13 + (float)((uint)uVar21 & (uint)fVar17);
  *(float *)(this + 0x14) =
       fVar18 * fVar6 + fVar17 * fVar10 + fVar19 * fVar14 + (float)(uVar22 & (uint)fVar18);
  *(float *)(this + 0x18) =
       fVar18 * fVar7 + fVar17 * fVar11 + fVar19 * fVar15 + (float)(extraout_XMM0_Dc & (uint)fVar19)
  ;
  *(float *)(this + 0x1c) =
       fVar18 * fVar8 + fVar17 * fVar12 + fVar19 * fVar16 + (float)(extraout_XMM0_Dd & uVar20);
  *(float *)(this + 0x20) = fVar13;
  *(float *)(this + 0x24) = fVar14;
  *(float *)(this + 0x28) = fVar15;
  *(float *)(this + 0x2c) = fVar16;
  return;
}



// FUNCTION 1432bec70 FUN_1432bec70 body=102 status=ok
// SIG undefined FUN_1432bec70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432bec70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62f90) {
    _Init_thread_header(&DAT_146b62f90);
    if (DAT_146b62f90 == -1) {
      _DAT_146b62f80 = 0;
      uRam0000000146b62f88 = 0xffffffffffffffff;
      _Init_thread_footer(&DAT_146b62f90);
    }
  }
  return;
}



// FUNCTION 1432bece0 MultiplyMatrix body=308 status=ok
// SIG void MultiplyMatrix(Matrix4x4<float> * this, Matrix4x4<float> * param_1, Matrix4x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix4x4<float> const & __ptr64,class Scaleform::Render::Matrix4x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
          (Matrix4x4<float> *this,Matrix4x4<float> *param_1,Matrix4x4<float> *param_2)

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
  float fVar32;
  
                    /* 0x32bece0  277
                       ?MultiplyMatrix@?$Matrix4x4@M@Render@Scaleform@@QEAAXAEBV123@0@Z */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)(param_1 + 0x20);
  fVar14 = *(float *)(param_1 + 0x24);
  fVar15 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar17 = *(float *)param_2;
  fVar18 = *(float *)(param_2 + 4);
  fVar19 = *(float *)(param_2 + 8);
  fVar20 = *(float *)(param_2 + 0xc);
  fVar21 = *(float *)(param_2 + 0x20);
  fVar22 = *(float *)(param_2 + 0x24);
  fVar23 = *(float *)(param_2 + 0x28);
  fVar24 = *(float *)(param_2 + 0x2c);
  fVar25 = *(float *)(param_2 + 0x30);
  fVar26 = *(float *)(param_2 + 0x34);
  fVar27 = *(float *)(param_2 + 0x38);
  fVar28 = *(float *)(param_2 + 0x3c);
  fVar29 = *(float *)(param_1 + 0x30);
  fVar30 = *(float *)(param_1 + 0x34);
  fVar31 = *(float *)(param_1 + 0x38);
  fVar32 = *(float *)(param_1 + 0x3c);
  *(float *)this = fVar2 * fVar9 + fVar1 * fVar17 + fVar3 * fVar21 + fVar4 * fVar25;
  *(float *)(this + 4) = fVar2 * fVar10 + fVar1 * fVar18 + fVar3 * fVar22 + fVar4 * fVar26;
  *(float *)(this + 8) = fVar2 * fVar11 + fVar1 * fVar19 + fVar3 * fVar23 + fVar4 * fVar27;
  *(float *)(this + 0xc) = fVar2 * fVar12 + fVar1 * fVar20 + fVar3 * fVar24 + fVar4 * fVar28;
  *(float *)(this + 0x10) = fVar6 * fVar9 + fVar5 * fVar17 + fVar7 * fVar21 + fVar8 * fVar25;
  *(float *)(this + 0x14) = fVar6 * fVar10 + fVar5 * fVar18 + fVar7 * fVar22 + fVar8 * fVar26;
  *(float *)(this + 0x18) = fVar6 * fVar11 + fVar5 * fVar19 + fVar7 * fVar23 + fVar8 * fVar27;
  *(float *)(this + 0x1c) = fVar6 * fVar12 + fVar5 * fVar20 + fVar7 * fVar24 + fVar8 * fVar28;
  *(float *)(this + 0x20) = fVar14 * fVar9 + fVar13 * fVar17 + fVar15 * fVar21 + fVar16 * fVar25;
  *(float *)(this + 0x24) = fVar14 * fVar10 + fVar13 * fVar18 + fVar15 * fVar22 + fVar16 * fVar26;
  *(float *)(this + 0x28) = fVar14 * fVar11 + fVar13 * fVar19 + fVar15 * fVar23 + fVar16 * fVar27;
  *(float *)(this + 0x2c) = fVar14 * fVar12 + fVar13 * fVar20 + fVar15 * fVar24 + fVar16 * fVar28;
  *(float *)(this + 0x30) = fVar30 * fVar9 + fVar29 * fVar17 + fVar31 * fVar21 + fVar32 * fVar25;
  *(float *)(this + 0x34) = fVar30 * fVar10 + fVar29 * fVar18 + fVar31 * fVar22 + fVar32 * fVar26;
  *(float *)(this + 0x38) = fVar30 * fVar11 + fVar29 * fVar19 + fVar31 * fVar23 + fVar32 * fVar27;
  *(float *)(this + 0x3c) = fVar30 * fVar12 + fVar29 * fVar20 + fVar31 * fVar24 + fVar32 * fVar28;
  return;
}



// FUNCTION 1432bee20 MultiplyMatrix body=247 status=ok
// SIG void MultiplyMatrix(Matrix4x4<float> * this, Matrix3x4<float> * param_1, Matrix4x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix3x4<float> const & __ptr64,class Scaleform::Render::Matrix4x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
          (Matrix4x4<float> *this,Matrix3x4<float> *param_1,Matrix4x4<float> *param_2)

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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
                    /* 0x32bee20  281
                       ?MultiplyMatrix@?$Matrix4x4@M@Render@Scaleform@@QEAAXAEBV?$Matrix3x4@M@23@AEBV123@@Z
                        */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)param_2;
  fVar14 = *(float *)(param_2 + 4);
  fVar15 = *(float *)(param_2 + 8);
  fVar16 = *(float *)(param_2 + 0xc);
  fVar17 = *(float *)(param_2 + 0x20);
  fVar18 = *(float *)(param_2 + 0x24);
  fVar19 = *(float *)(param_2 + 0x28);
  fVar20 = *(float *)(param_2 + 0x2c);
  fVar21 = *(float *)(param_2 + 0x30);
  fVar22 = *(float *)(param_2 + 0x34);
  fVar23 = *(float *)(param_2 + 0x38);
  fVar24 = *(float *)(param_2 + 0x3c);
  fVar25 = *(float *)(param_1 + 0x20);
  fVar26 = *(float *)(param_1 + 0x24);
  fVar27 = *(float *)(param_1 + 0x28);
  fVar28 = *(float *)(param_1 + 0x2c);
  *(float *)this = fVar2 * fVar9 + fVar1 * fVar13 + fVar3 * fVar17 + fVar4 * fVar21;
  *(float *)(this + 4) = fVar2 * fVar10 + fVar1 * fVar14 + fVar3 * fVar18 + fVar4 * fVar22;
  *(float *)(this + 8) = fVar2 * fVar11 + fVar1 * fVar15 + fVar3 * fVar19 + fVar4 * fVar23;
  *(float *)(this + 0xc) = fVar2 * fVar12 + fVar1 * fVar16 + fVar3 * fVar20 + fVar4 * fVar24;
  *(float *)(this + 0x10) = fVar6 * fVar9 + fVar5 * fVar13 + fVar7 * fVar17 + fVar8 * fVar21;
  *(float *)(this + 0x14) = fVar6 * fVar10 + fVar5 * fVar14 + fVar7 * fVar18 + fVar8 * fVar22;
  *(float *)(this + 0x18) = fVar6 * fVar11 + fVar5 * fVar15 + fVar7 * fVar19 + fVar8 * fVar23;
  *(float *)(this + 0x1c) = fVar6 * fVar12 + fVar5 * fVar16 + fVar7 * fVar20 + fVar8 * fVar24;
  *(float *)(this + 0x20) = fVar26 * fVar9 + fVar25 * fVar13 + fVar27 * fVar17 + fVar28 * fVar21;
  *(float *)(this + 0x24) = fVar26 * fVar10 + fVar25 * fVar14 + fVar27 * fVar18 + fVar28 * fVar22;
  *(float *)(this + 0x28) = fVar26 * fVar11 + fVar25 * fVar15 + fVar27 * fVar19 + fVar28 * fVar23;
  *(float *)(this + 0x2c) = fVar26 * fVar12 + fVar25 * fVar16 + fVar27 * fVar20 + fVar28 * fVar24;
  *(float *)(this + 0x30) = fVar21;
  *(float *)(this + 0x34) = fVar22;
  *(float *)(this + 0x38) = fVar23;
  *(float *)(this + 0x3c) = fVar24;
  return;
}



// FUNCTION 1432bef20 MultiplyMatrix body=326 status=ok
// SIG void MultiplyMatrix(Matrix4x4<float> * this, Matrix4x4<float> * param_1, Matrix3x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix4x4<float> const & __ptr64,class Scaleform::Render::Matrix3x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
          (Matrix4x4<float> *this,Matrix4x4<float> *param_1,Matrix3x4<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
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
  uint uVar29;
  uint uVar31;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined8 uVar30;
  
                    /* 0x32bef20  279
                       ?MultiplyMatrix@?$Matrix4x4@M@Render@Scaleform@@QEAAXAEBV123@AEBV?$Matrix3x4@M@23@@Z
                        */
  uVar30 = FUN_1432be8b0();
  uVar31 = (uint)((ulonglong)uVar30 >> 0x20);
  uVar29 = (uint)uVar30;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  uVar12 = *(uint *)(param_1 + 0x2c);
  fVar13 = *(float *)(param_1 + 0x30);
  fVar14 = *(float *)(param_1 + 0x34);
  fVar15 = *(float *)(param_1 + 0x38);
  uVar16 = *(uint *)(param_1 + 0x3c);
  fVar17 = *(float *)param_2;
  fVar18 = *(float *)(param_2 + 4);
  fVar19 = *(float *)(param_2 + 8);
  fVar20 = *(float *)(param_2 + 0xc);
  fVar21 = *(float *)(param_2 + 0x20);
  fVar22 = *(float *)(param_2 + 0x24);
  fVar23 = *(float *)(param_2 + 0x28);
  fVar24 = *(float *)(param_2 + 0x2c);
  fVar25 = *(float *)(param_2 + 0x10);
  fVar26 = *(float *)(param_2 + 0x14);
  fVar27 = *(float *)(param_2 + 0x18);
  fVar28 = *(float *)(param_2 + 0x1c);
  *(float *)this = fVar2 * fVar25 + fVar1 * fVar17 + fVar3 * fVar21 + (float)((uint)fVar1 & uVar29);
  *(float *)(this + 4) =
       fVar2 * fVar26 + fVar1 * fVar18 + fVar3 * fVar22 + (float)((uint)fVar2 & uVar31);
  *(float *)(this + 8) =
       fVar2 * fVar27 + fVar1 * fVar19 + fVar3 * fVar23 + (float)((uint)fVar3 & extraout_XMM0_Dc);
  *(float *)(this + 0xc) =
       fVar2 * fVar28 + fVar1 * fVar20 + fVar3 * fVar24 + (float)(uVar4 & extraout_XMM0_Dd);
  *(float *)(this + 0x10) =
       fVar6 * fVar25 + fVar5 * fVar17 + fVar7 * fVar21 + (float)((uint)fVar5 & uVar29);
  *(float *)(this + 0x14) =
       fVar6 * fVar26 + fVar5 * fVar18 + fVar7 * fVar22 + (float)((uint)fVar6 & uVar31);
  *(float *)(this + 0x18) =
       fVar6 * fVar27 + fVar5 * fVar19 + fVar7 * fVar23 + (float)((uint)fVar7 & extraout_XMM0_Dc);
  *(float *)(this + 0x1c) =
       fVar6 * fVar28 + fVar5 * fVar20 + fVar7 * fVar24 + (float)(uVar8 & extraout_XMM0_Dd);
  *(float *)(this + 0x20) =
       fVar10 * fVar25 + fVar9 * fVar17 + fVar11 * fVar21 + (float)((uint)fVar9 & uVar29);
  *(float *)(this + 0x24) =
       fVar10 * fVar26 + fVar9 * fVar18 + fVar11 * fVar22 + (float)((uint)fVar10 & uVar31);
  *(float *)(this + 0x28) =
       fVar10 * fVar27 + fVar9 * fVar19 + fVar11 * fVar23 + (float)((uint)fVar11 & extraout_XMM0_Dc)
  ;
  *(float *)(this + 0x2c) =
       fVar10 * fVar28 + fVar9 * fVar20 + fVar11 * fVar24 + (float)(uVar12 & extraout_XMM0_Dd);
  *(float *)(this + 0x30) =
       fVar14 * fVar25 + fVar13 * fVar17 + fVar15 * fVar21 + (float)((uint)fVar13 & uVar29);
  *(float *)(this + 0x34) =
       fVar14 * fVar26 + fVar13 * fVar18 + fVar15 * fVar22 + (float)((uint)fVar14 & uVar31);
  *(float *)(this + 0x38) =
       fVar14 * fVar27 + fVar13 * fVar19 + fVar15 * fVar23 +
       (float)((uint)fVar15 & extraout_XMM0_Dc);
  *(float *)(this + 0x3c) =
       fVar14 * fVar28 + fVar13 * fVar20 + fVar15 * fVar24 + (float)(uVar16 & extraout_XMM0_Dd);
  return;
}



// FUNCTION 1432bf070 MultiplyMatrix body=182 status=ok
// SIG void MultiplyMatrix(Matrix4x4<float> * this, Matrix2x4<float> * param_1, Matrix4x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix2x4<float> const & __ptr64,class Scaleform::Render::Matrix4x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
          (Matrix4x4<float> *this,Matrix2x4<float> *param_1,Matrix4x4<float> *param_2)

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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
                    /* 0x32bf070  280
                       ?MultiplyMatrix@?$Matrix4x4@M@Render@Scaleform@@QEAAXAEBV?$Matrix2x4@M@23@AEBV123@@Z
                        */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)param_2;
  fVar6 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_2 + 0xc);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)(param_2 + 0x30);
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x38);
  fVar16 = *(float *)(param_2 + 0x3c);
  fVar17 = *(float *)(param_2 + 0x20);
  fVar18 = *(float *)(param_2 + 0x24);
  fVar19 = *(float *)(param_2 + 0x28);
  fVar20 = *(float *)(param_2 + 0x2c);
  fVar21 = *(float *)(param_1 + 0x10);
  fVar22 = *(float *)(param_1 + 0x14);
  fVar23 = *(float *)(param_1 + 0x18);
  fVar24 = *(float *)(param_1 + 0x1c);
  *(float *)this = fVar2 * fVar9 + fVar1 * fVar5 + fVar3 * fVar17 + fVar4 * fVar13;
  *(float *)(this + 4) = fVar2 * fVar10 + fVar1 * fVar6 + fVar3 * fVar18 + fVar4 * fVar14;
  *(float *)(this + 8) = fVar2 * fVar11 + fVar1 * fVar7 + fVar3 * fVar19 + fVar4 * fVar15;
  *(float *)(this + 0xc) = fVar2 * fVar12 + fVar1 * fVar8 + fVar3 * fVar20 + fVar4 * fVar16;
  *(float *)(this + 0x10) = fVar22 * fVar9 + fVar21 * fVar5 + fVar23 * fVar17 + fVar24 * fVar13;
  *(float *)(this + 0x14) = fVar22 * fVar10 + fVar21 * fVar6 + fVar23 * fVar18 + fVar24 * fVar14;
  *(float *)(this + 0x18) = fVar22 * fVar11 + fVar21 * fVar7 + fVar23 * fVar19 + fVar24 * fVar15;
  *(float *)(this + 0x1c) = fVar22 * fVar12 + fVar21 * fVar8 + fVar23 * fVar20 + fVar24 * fVar16;
  *(float *)(this + 0x20) = fVar17;
  *(float *)(this + 0x24) = fVar18;
  *(float *)(this + 0x28) = fVar19;
  *(float *)(this + 0x2c) = fVar20;
  *(float *)(this + 0x30) = fVar13;
  *(float *)(this + 0x34) = fVar14;
  *(float *)(this + 0x38) = fVar15;
  *(float *)(this + 0x3c) = fVar16;
  return;
}



// FUNCTION 1432bf130 MultiplyMatrix body=238 status=ok
// SIG void MultiplyMatrix(Matrix4x4<float> * this, Matrix4x4<float> * param_1, Matrix2x4<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(class
   Scaleform::Render::Matrix4x4<float> const & __ptr64,class Scaleform::Render::Matrix2x4<float>
   const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
          (Matrix4x4<float> *this,Matrix4x4<float> *param_1,Matrix2x4<float> *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar27;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined8 uVar26;
  
                    /* 0x32bf130  278
                       ?MultiplyMatrix@?$Matrix4x4@M@Render@Scaleform@@QEAAXAEBV123@AEBV?$Matrix2x4@M@23@@Z
                        */
  uVar26 = FUN_1432bec70();
  uVar27 = (uint)((ulonglong)uVar26 >> 0x20);
  uVar25 = (uint)uVar26;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar11 = *(uint *)(param_1 + 0x28);
  uVar12 = *(uint *)(param_1 + 0x2c);
  fVar13 = *(float *)(param_1 + 0x30);
  fVar14 = *(float *)(param_1 + 0x34);
  uVar15 = *(uint *)(param_1 + 0x38);
  uVar16 = *(uint *)(param_1 + 0x3c);
  fVar17 = *(float *)param_2;
  fVar18 = *(float *)(param_2 + 4);
  fVar19 = *(float *)(param_2 + 8);
  fVar20 = *(float *)(param_2 + 0xc);
  fVar21 = *(float *)(param_2 + 0x10);
  fVar22 = *(float *)(param_2 + 0x14);
  fVar23 = *(float *)(param_2 + 0x18);
  fVar24 = *(float *)(param_2 + 0x1c);
  *(float *)this = fVar2 * fVar21 + fVar1 * fVar17 + (float)((uint)fVar1 & uVar25);
  *(float *)(this + 4) = fVar2 * fVar22 + fVar1 * fVar18 + (float)((uint)fVar2 & uVar27);
  *(float *)(this + 8) = fVar2 * fVar23 + fVar1 * fVar19 + (float)(uVar3 & extraout_XMM0_Dc);
  *(float *)(this + 0xc) = fVar2 * fVar24 + fVar1 * fVar20 + (float)(uVar4 & extraout_XMM0_Dd);
  *(float *)(this + 0x10) = fVar6 * fVar21 + fVar5 * fVar17 + (float)((uint)fVar5 & uVar25);
  *(float *)(this + 0x14) = fVar6 * fVar22 + fVar5 * fVar18 + (float)((uint)fVar6 & uVar27);
  *(float *)(this + 0x18) = fVar6 * fVar23 + fVar5 * fVar19 + (float)(uVar7 & extraout_XMM0_Dc);
  *(float *)(this + 0x1c) = fVar6 * fVar24 + fVar5 * fVar20 + (float)(uVar8 & extraout_XMM0_Dd);
  *(float *)(this + 0x20) = fVar10 * fVar21 + fVar9 * fVar17 + (float)((uint)fVar9 & uVar25);
  *(float *)(this + 0x24) = fVar10 * fVar22 + fVar9 * fVar18 + (float)((uint)fVar10 & uVar27);
  *(float *)(this + 0x28) = fVar10 * fVar23 + fVar9 * fVar19 + (float)(uVar11 & extraout_XMM0_Dc);
  *(float *)(this + 0x2c) = fVar10 * fVar24 + fVar9 * fVar20 + (float)(uVar12 & extraout_XMM0_Dd);
  *(float *)(this + 0x30) = fVar14 * fVar21 + fVar13 * fVar17 + (float)((uint)fVar13 & uVar25);
  *(float *)(this + 0x34) = fVar14 * fVar22 + fVar13 * fVar18 + (float)((uint)fVar14 & uVar27);
  *(float *)(this + 0x38) = fVar14 * fVar23 + fVar13 * fVar19 + (float)(uVar15 & extraout_XMM0_Dc);
  *(float *)(this + 0x3c) = fVar14 * fVar24 + fVar13 * fVar20 + (float)(uVar16 & extraout_XMM0_Dd);
  return;
}



// FUNCTION 1432bf230 FUN_1432bf230 body=948 status=ok
// SIG undefined FUN_1432bf230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432bf230(float *param_1,undefined1 (*param_2) [16],float param_3,float param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar28;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar24;
  float fVar25;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62fb0) {
    _Init_thread_header(&DAT_146b62fb0);
    if (DAT_146b62fb0 == -1) {
      _DAT_146b62fa0 = 0;
      uRam0000000146b62fa8 = 0;
      _Init_thread_footer(&DAT_146b62fb0);
    }
  }
  fVar18 = _DAT_146b62fa0;
  uVar21 = FUN_1432bfa80();
  fVar24 = (float)((ulonglong)uVar21 >> 0x20);
  uVar22 = FUN_1432bfa10();
  fVar25 = (float)((ulonglong)uVar22 >> 0x20);
  uVar23 = FUN_1432bf9a0();
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[8];
  fVar10 = param_1[9];
  fVar11 = param_1[10];
  fVar12 = param_1[0xb];
  fVar13 = param_1[4];
  fVar14 = param_1[5];
  fVar15 = param_1[6];
  fVar16 = param_1[7];
  fVar39 = param_1[0xc];
  fVar40 = param_1[0xd];
  fVar41 = param_1[0xe];
  fVar17 = param_1[0xf];
  auVar32 = *param_2;
  fVar30 = auVar32._0_4_;
  fVar1 = auVar32._4_4_;
  fVar2 = auVar32._8_4_;
  fVar3 = auVar32._12_4_;
  fVar19 = fVar2 * fVar39;
  fVar26 = fVar3 * fVar40;
  fVar28 = fVar18 * fVar41;
  fVar20 = (float)uVar23 * param_3;
  fVar27 = (float)((ulonglong)uVar23 >> 0x20) * param_4;
  fVar36 = fVar30 * fVar39;
  fVar37 = fVar1 * fVar40;
  fVar38 = fVar18 * fVar41;
  fVar39 = fVar2 * fVar39;
  fVar40 = fVar1 * fVar40;
  fVar41 = fVar18 * fVar41;
  fVar29 = fVar1 * fVar10 + fVar30 * fVar9 + fVar18 * fVar11;
  auVar34._0_4_ = fVar1 * fVar6 + fVar30 * fVar5 + fVar18 * fVar7 + fVar8;
  auVar34._4_4_ = fVar1 * fVar14 + fVar30 * fVar13 + fVar18 * fVar15 + fVar16;
  auVar34._8_4_ = fVar29 + fVar12;
  auVar34._12_4_ = fVar29 + fVar17;
  auVar32._4_4_ = fVar37 + fVar36 + fVar38 + fVar17;
  auVar32._0_4_ = fVar37 + fVar36 + fVar38 + fVar17;
  auVar32._8_4_ = fVar37 + fVar36 + fVar38 + fVar17;
  auVar32._12_4_ = fVar37 + fVar36 + fVar38 + fVar17;
  auVar35 = divps(auVar34,auVar32);
  fVar30 = fVar1 * fVar10 + fVar2 * fVar9 + fVar18 * fVar11;
  auVar31._0_4_ = fVar1 * fVar6 + fVar2 * fVar5 + fVar18 * fVar7 + fVar8;
  auVar31._4_4_ = fVar1 * fVar14 + fVar2 * fVar13 + fVar18 * fVar15 + fVar16;
  auVar31._8_4_ = fVar30 + fVar12;
  auVar31._12_4_ = fVar30 + fVar17;
  auVar4._4_4_ = fVar40 + fVar39 + fVar41 + fVar17;
  auVar4._0_4_ = fVar40 + fVar39 + fVar41 + fVar17;
  auVar4._8_4_ = fVar40 + fVar39 + fVar41 + fVar17;
  auVar4._12_4_ = fVar40 + fVar39 + fVar41 + fVar17;
  auVar32 = divps(auVar31,auVar4);
  fVar30 = fVar3 * fVar10 + fVar2 * fVar9 + fVar18 * fVar11;
  *param_5 = (auVar35._0_4_ * (float)uVar21 + (float)uVar22) * fVar20;
  param_5[1] = (auVar35._4_4_ * fVar24 + fVar25) * fVar27;
  param_5[2] = (auVar32._0_4_ * extraout_XMM0_Dc + extraout_XMM0_Dc_00) *
               extraout_XMM0_Dc_01 * param_3;
  param_5[3] = (auVar32._4_4_ * extraout_XMM0_Dd + extraout_XMM0_Dd_00) *
               extraout_XMM0_Dd_01 * param_4;
  auVar33._0_4_ = fVar3 * fVar6 + fVar2 * fVar5 + fVar18 * fVar7 + fVar8;
  auVar33._4_4_ = fVar3 * fVar14 + fVar2 * fVar13 + fVar18 * fVar15 + fVar16;
  auVar33._8_4_ = fVar30 + fVar12;
  auVar33._12_4_ = fVar30 + fVar17;
  auVar35._4_4_ = fVar26 + fVar19 + fVar28 + fVar17;
  auVar35._0_4_ = fVar26 + fVar19 + fVar28 + fVar17;
  auVar35._8_4_ = fVar26 + fVar19 + fVar28 + fVar17;
  auVar35._12_4_ = fVar26 + fVar19 + fVar28 + fVar17;
  auVar32 = divps(auVar33,auVar35);
  param_5[4] = (auVar32._0_4_ * (float)uVar21 + (float)uVar22) * fVar20;
  param_5[5] = (auVar32._4_4_ * fVar24 + fVar25) * fVar27;
  param_5[6] = (auVar32._8_4_ * extraout_XMM0_Dc + extraout_XMM0_Dc_00) *
               extraout_XMM0_Dc_01 * param_3;
  param_5[7] = (auVar32._12_4_ * extraout_XMM0_Dd + extraout_XMM0_Dd_00) *
               extraout_XMM0_Dd_01 * param_4;
  return;
}



// FUNCTION 1432bf5f0 EncloseTransformHomogeneous body=941 status=ok
// SIG void EncloseTransformHomogeneous(Matrix4x4<float> * this, Rect<float> * param_1, Rect<float> * param_2)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous(class
   Scaleform::Render::Rect<float> * __ptr64,class Scaleform::Render::Rect<float> const &
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
          (Matrix4x4<float> *this,Rect<float> *param_1,Rect<float> *param_2)

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
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  
                    /* 0x32bf5f0  114
                       ?EncloseTransformHomogeneous@?$Matrix4x4@M@Render@Scaleform@@QEBAXPEAV?$Rect@M@23@AEBV423@@Z
                        */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62fb0) {
    _Init_thread_header(&DAT_146b62fb0);
    if (DAT_146b62fb0 == -1) {
      _DAT_146b62fa0 = 0;
      uRam0000000146b62fa8 = 0;
      _Init_thread_footer(&DAT_146b62fb0);
    }
  }
  fVar1 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar4 = *(float *)this;
  fVar5 = *(float *)(this + 4);
  fVar6 = *(float *)(this + 8);
  fVar7 = *(float *)(this + 0xc);
  fVar8 = *(float *)(this + 0x20);
  fVar9 = *(float *)(this + 0x24);
  fVar10 = *(float *)(this + 0x28);
  fVar11 = *(float *)(this + 0x2c);
  fVar12 = *(float *)(this + 0x10);
  fVar13 = *(float *)(this + 0x14);
  fVar14 = *(float *)(this + 0x18);
  fVar15 = *(float *)(this + 0x1c);
  fVar31 = *(float *)(this + 0x30);
  fVar32 = *(float *)(this + 0x34);
  fVar33 = *(float *)(this + 0x38);
  fVar16 = *(float *)(this + 0x3c);
  fVar20 = fVar1 * fVar31;
  fVar22 = fVar19 * fVar32;
  fVar23 = _DAT_146b62fa0 * fVar33;
  fVar18 = fVar19 * fVar9 + fVar1 * fVar8 + _DAT_146b62fa0 * fVar10;
  auVar28._0_4_ = fVar19 * fVar5 + fVar1 * fVar4 + _DAT_146b62fa0 * fVar6 + fVar7;
  auVar28._4_4_ = fVar19 * fVar13 + fVar1 * fVar12 + _DAT_146b62fa0 * fVar14 + fVar15;
  auVar28._8_4_ = fVar18 + fVar11;
  auVar28._12_4_ = fVar18 + fVar16;
  auVar17._4_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar17._0_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar17._8_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar17._12_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar29 = divps(auVar28,auVar17);
  fVar20 = fVar2 * fVar31;
  fVar22 = fVar19 * fVar32;
  fVar23 = _DAT_146b62fa0 * fVar33;
  fVar18 = fVar19 * fVar9 + fVar2 * fVar8 + _DAT_146b62fa0 * fVar10;
  auVar26._0_4_ = fVar19 * fVar5 + fVar2 * fVar4 + _DAT_146b62fa0 * fVar6 + fVar7;
  auVar26._4_4_ = fVar19 * fVar13 + fVar2 * fVar12 + _DAT_146b62fa0 * fVar14 + fVar15;
  auVar26._8_4_ = fVar18 + fVar11;
  auVar26._12_4_ = fVar18 + fVar16;
  auVar25._4_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar25._0_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar25._8_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar25._12_4_ = fVar22 + fVar20 + fVar23 + fVar16;
  auVar27 = divps(auVar26,auVar25);
  fVar18 = fVar2 * fVar31;
  fVar20 = fVar3 * fVar32;
  fVar22 = _DAT_146b62fa0 * fVar33;
  fVar19 = fVar3 * fVar9 + fVar2 * fVar8 + _DAT_146b62fa0 * fVar10;
  auVar24._0_4_ = fVar3 * fVar5 + fVar2 * fVar4 + _DAT_146b62fa0 * fVar6 + fVar7;
  auVar24._4_4_ = fVar3 * fVar13 + fVar2 * fVar12 + _DAT_146b62fa0 * fVar14 + fVar15;
  auVar24._8_4_ = fVar19 + fVar11;
  auVar24._12_4_ = fVar19 + fVar16;
  auVar30._4_4_ = fVar20 + fVar18 + fVar22 + fVar16;
  auVar30._0_4_ = fVar20 + fVar18 + fVar22 + fVar16;
  auVar30._8_4_ = fVar20 + fVar18 + fVar22 + fVar16;
  auVar30._12_4_ = fVar20 + fVar18 + fVar22 + fVar16;
  auVar25 = divps(auVar24,auVar30);
  fVar31 = fVar1 * fVar31;
  fVar32 = fVar3 * fVar32;
  fVar33 = _DAT_146b62fa0 * fVar33;
  auVar17 = minps(auVar29,auVar27);
  auVar30 = maxps(auVar29,auVar27);
  fVar19 = fVar3 * fVar9 + fVar1 * fVar8 + _DAT_146b62fa0 * fVar10;
  auVar17 = minps(auVar17,auVar25);
  auVar21._0_4_ = fVar3 * fVar5 + fVar1 * fVar4 + _DAT_146b62fa0 * fVar6 + fVar7;
  auVar21._4_4_ = fVar3 * fVar13 + fVar1 * fVar12 + _DAT_146b62fa0 * fVar14 + fVar15;
  auVar21._8_4_ = fVar19 + fVar11;
  auVar21._12_4_ = fVar19 + fVar16;
  auVar30 = maxps(auVar30,auVar25);
  auVar27._4_4_ = fVar32 + fVar31 + fVar33 + fVar16;
  auVar27._0_4_ = fVar32 + fVar31 + fVar33 + fVar16;
  auVar27._8_4_ = fVar32 + fVar31 + fVar33 + fVar16;
  auVar27._12_4_ = fVar32 + fVar31 + fVar33 + fVar16;
  auVar25 = divps(auVar21,auVar27);
  auVar30 = maxps(auVar30,auVar25);
  auVar17 = minps(auVar17,auVar25);
  auVar29._0_8_ = auVar17._0_8_;
  auVar29._8_4_ = auVar30._0_4_;
  auVar29._12_4_ = auVar30._4_4_;
  *(undefined1 (*) [16])param_1 = auVar29;
  return;
}



// FUNCTION 1432bf9a0 FUN_1432bf9a0 body=102 status=ok
// SIG undefined FUN_1432bf9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432bf9a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b63010) {
    _Init_thread_header(&DAT_146b63010);
    if (DAT_146b63010 == -1) {
      _DAT_146b63000 = 0x3f0000003f000000;
      uRam0000000146b63008 = 0x3f0000003f000000;
      _Init_thread_footer(&DAT_146b63010);
    }
  }
  return;
}



// FUNCTION 1432bfa10 FUN_1432bfa10 body=102 status=ok
// SIG undefined FUN_1432bfa10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432bfa10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62ff0) {
    _Init_thread_header(&DAT_146b62ff0);
    if (DAT_146b62ff0 == -1) {
      _DAT_146b62fe0 = 0x3f8000003f800000;
      uRam0000000146b62fe8 = 0x3f8000003f800000;
      _Init_thread_footer(&DAT_146b62ff0);
    }
  }
  return;
}



// FUNCTION 1432bfa80 FUN_1432bfa80 body=102 status=ok
// SIG undefined FUN_1432bfa80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432bfa80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62fd0) {
    _Init_thread_header(&DAT_146b62fd0);
    if (DAT_146b62fd0 == -1) {
      _DAT_146b62fc0 = 0xbf8000003f800000;
      uRam0000000146b62fc8 = 0xbf8000003f800000;
      _Init_thread_footer(&DAT_146b62fd0);
    }
  }
  return;
}



// FUNCTION 1432bfaf0 FUN_1432bfaf0 body=41 status=ok
// SIG undefined FUN_1432bfaf0(void)

undefined4 * FUN_1432bfaf0(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1432bfb20 FUN_1432bfb20 body=28 status=ok
// SIG undefined FUN_1432bfb20(void)

void FUN_1432bfb20(float *param_1,float *param_2)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  *param_1 = *param_1 * *param_2;
  param_1[1] = param_1[1] * fVar9;
  param_1[2] = param_1[2] * fVar10;
  param_1[3] = param_1[3] * fVar11;
  param_1[4] = fVar5 + param_1[4] * fVar1;
  param_1[5] = fVar6 + param_1[5] * fVar2;
  param_1[6] = fVar7 + param_1[6] * fVar3;
  param_1[7] = fVar8 + param_1[7] * fVar4;
  return;
}



// FUNCTION 1432bfbe0 FUN_1432bfbe0 body=28 status=ok
// SIG undefined FUN_1432bfbe0(void)

void FUN_1432bfbe0(float *param_1,float *param_2)

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
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = param_2[7];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  *param_1 = *param_2 * *param_1;
  param_1[1] = fVar9 * param_1[1];
  param_1[2] = fVar10 * param_1[2];
  param_1[3] = fVar11 * param_1[3];
  param_1[4] = param_1[4] + fVar1 * fVar5;
  param_1[5] = param_1[5] + fVar2 * fVar6;
  param_1[6] = param_1[6] + fVar3 * fVar7;
  param_1[7] = param_1[7] + fVar4 * fVar8;
  return;
}



// FUNCTION 1432bfd80 FUN_1432bfd80 body=31 status=ok
// SIG undefined FUN_1432bfd80(void)

void FUN_1432bfd80(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = param_2[7];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  fVar12 = param_3[4];
  fVar13 = param_3[5];
  fVar14 = param_3[6];
  fVar15 = param_3[7];
  fVar16 = param_3[1];
  fVar17 = param_3[2];
  fVar18 = param_3[3];
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar9 * fVar16;
  param_1[2] = fVar10 * fVar17;
  param_1[3] = fVar11 * fVar18;
  param_1[4] = fVar12 + fVar1 * fVar5;
  param_1[5] = fVar13 + fVar2 * fVar6;
  param_1[6] = fVar14 + fVar3 * fVar7;
  param_1[7] = fVar15 + fVar4 * fVar8;
  return;
}



// FUNCTION 1432bfe50 Normalize body=16 status=ok
// SIG undefined Normalize(void)

void Scaleform::Render::Cxform::Normalize(longlong param_1)

{
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * 0.003921569;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * 0.003921569;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * 0.003921569;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) * 0.003921569;
  return;
}



// FUNCTION 1432bff30 FUN_1432bff30 body=38 status=ok
// SIG undefined FUN_1432bff30(void)

void FUN_1432bff30(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1432bff60 IsIdentity body=112 status=ok
// SIG undefined IsIdentity(void)

undefined1 Scaleform::Render::Cxform::IsIdentity(float *param_1)

{
  if (((((*param_1 == 1.0) && (param_1[1] == 1.0)) && (param_1[2] == 1.0)) &&
      ((param_1[3] == 1.0 && (param_1[4] == 0.0)))) &&
     ((param_1[5] == 0.0 && ((param_1[6] == 0.0 && (param_1[7] == 0.0)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1432bffe0 operator== body=108 status=ok
// SIG undefined operator==(void)

undefined1 Scaleform::Render::Cxform::operator==(float *param_1,float *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1432c0060 operator!= body=118 status=ok
// SIG undefined operator!=(void)

bool Scaleform::Render::Cxform::operator!=(float *param_1,float *param_2)

{
  bool bVar1;
  
  if ((((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) &&
     (((param_2[3] == param_1[3] && (param_2[4] == param_1[4])) &&
      ((param_2[5] == param_1[5] && (param_2[6] == param_1[6])))))) {
    bVar1 = true;
    if (param_2[7] == param_1[7]) goto LAB_1432c00d0;
  }
  bVar1 = false;
LAB_1432c00d0:
  return !bVar1;
}



// FUNCTION 1432c00e0 FUN_1432c00e0 body=158 status=ok
// SIG undefined FUN_1432c00e0(void)

void FUN_1432c00e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)((ulonglong)param_1 & 0xfffffffffffff800);
  if (plVar3[3] == 0) {
    *(longlong *)(*plVar3 + 8) = plVar3[1];
    *(longlong *)plVar3[1] = *plVar3;
    lVar2 = plVar3[4];
    *plVar3 = -1;
    plVar3[1] = -1;
    plVar3[1] = *(longlong *)(lVar2 + 0x28);
    *plVar3 = lVar2 + 0x20;
    **(undefined8 **)(lVar2 + 0x28) = plVar3;
    *(longlong **)(lVar2 + 0x28) = plVar3;
  }
  *param_1 = plVar3[3];
  plVar1 = plVar3 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  plVar3[3] = (longlong)param_1;
  if ((int)*plVar1 == 0) {
    *(longlong *)(*plVar3 + 8) = plVar3[1];
    *(longlong *)plVar3[1] = *plVar3;
    *plVar3 = -1;
    plVar3[1] = -1;
                    /* WARNING: Could not recover jumptable at 0x0001432c0179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3);
    return;
  }
  return;
}



// FUNCTION 1432c0200 FUN_1432c0200 body=116 status=ok
// SIG undefined FUN_1432c0200(void)

undefined8 FUN_1432c0200(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,0x7f0,0x800,0);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  plVar2[4] = (longlong)param_1;
  *(undefined4 *)(plVar2 + 2) = 0;
  lVar4 = 0xf9;
  plVar1 = plVar2 + 0xfd;
  plVar5 = (longlong *)0x0;
  do {
    plVar3 = plVar1;
    *plVar3 = (longlong)plVar5;
    lVar4 = lVar4 + -1;
    plVar1 = plVar3 + -1;
    plVar5 = plVar3;
  } while (lVar4 != 0);
  plVar1 = param_1 + 4;
  plVar2[3] = (longlong)plVar3;
  *plVar2 = *plVar1;
  plVar2[1] = (longlong)plVar1;
  lVar4 = *plVar1;
  *(longlong **)(lVar4 + 8) = plVar2;
  *plVar1 = (longlong)plVar2;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 1432c0300 FUN_1432c0300 body=150 status=ok
// SIG undefined FUN_1432c0300(void)

longlong * FUN_1432c0300(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  
  if (*(longlong *)(param_1 + 0x28) == param_1 + 0x20) {
    cVar5 = FUN_1432c0200();
    if (cVar5 == '\0') {
      return (longlong *)0x0;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  plVar3 = (longlong *)plVar2[3];
  lVar4 = *plVar3;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  plVar2[3] = lVar4;
  if (*plVar3 == 0) {
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    plVar1 = (longlong *)(param_1 + 0x10);
    *plVar2 = -1;
    plVar2[1] = -1;
    *plVar2 = *plVar1;
    plVar2[1] = (longlong)plVar1;
    *(longlong **)(*plVar1 + 8) = plVar2;
    *plVar1 = (longlong)plVar2;
  }
  *plVar3 = param_2;
  return plVar3;
}



// FUNCTION 1432c03a0 FUN_1432c03a0 body=71 status=ok
// SIG undefined FUN_1432c03a0(void)

void FUN_1432c03a0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  short sVar4;
  
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    sVar4 = *(short *)((longlong)param_1 + 0xc);
    psVar3 = (short *)((longlong)sVar4 + 0x1a + (longlong)param_1);
    *psVar3 = *psVar3 + (ushort)*(byte *)((longlong)param_1 + 0xe) * 0x10;
    plVar2 = (longlong *)(*(longlong *)((longlong)sVar4 + 0x10 + (longlong)param_1) + 0x28);
    *plVar2 = *plVar2 + (ulonglong)*(byte *)((longlong)param_1 + 0xe) * 0x10;
    FUN_1432c00e0(*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432c03f0 FUN_1432c03f0 body=153 status=ok
// SIG undefined FUN_1432c03f0(void)

void FUN_1432c03f0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  short sVar4;
  undefined8 *puVar5;
  
  if ((undefined **)*param_2 != &PTR_LOOP_1467cd040) {
    piVar1 = (int *)(*(undefined **)*param_2 + 8);
    *piVar1 = *piVar1 + 1;
  }
  if ((undefined **)*param_1 != &PTR_LOOP_1467cd040) {
    puVar5 = *(undefined8 **)*param_1;
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      sVar4 = *(short *)((longlong)puVar5 + 0xc);
      psVar3 = (short *)((longlong)sVar4 + 0x1a + (longlong)puVar5);
      *psVar3 = *psVar3 + (ushort)*(byte *)((longlong)puVar5 + 0xe) * 0x10;
      plVar2 = (longlong *)(*(longlong *)((longlong)sVar4 + 0x10 + (longlong)puVar5) + 0x28);
      *plVar2 = *plVar2 + (ulonglong)*(byte *)((longlong)puVar5 + 0xe) * 0x10;
      FUN_1432c00e0(*puVar5);
      *puVar5 = 0;
      *param_1 = *param_2;
      return;
    }
  }
  *param_1 = *param_2;
  return;
}



// FUNCTION 1432c0490 FUN_1432c0490 body=242 status=ok
// SIG undefined FUN_1432c0490(void)

void FUN_1432c0490(ulonglong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar2 = (longlong *)*param_1;
  bVar1 = *(byte *)(*plVar2 + 0xf);
  if ((bVar1 & 0x10) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = param_2[2];
    uStack_20 = param_2[3];
    local_18 = 0;
    uStack_10 = 0x3f800000;
    iVar4 = _guard_xfg_dispatch_icall_nop(&local_38,&DAT_146b63020,0x30);
    if (iVar4 == 0) {
      return;
    }
    FUN_1432c1280(*(undefined8 *)
                   (*(longlong *)(((ulonglong)plVar2 & 0xfffffffffffff800) + 0x20) + 8),plVar2,
                  bVar1 & 0xef);
  }
  lVar3 = *(longlong *)*param_1;
  lVar5 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar3 + 0xf) & 0xf) * 5] + 1;
  *(undefined4 *)(lVar3 + lVar5 * 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(lVar3 + 4 + lVar5 * 0x10) = *(undefined4 *)((longlong)param_2 + 4);
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar3 + 0xc + lVar5 * 0x10) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x10) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(lVar3 + 0x14 + lVar5 * 0x10) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(lVar3 + 0x18 + lVar5 * 0x10) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar3 + 0x1c + lVar5 * 0x10) = *(undefined4 *)((longlong)param_2 + 0x1c);
  return;
}



// FUNCTION 1432c0590 FUN_1432c0590 body=146 status=ok
// SIG undefined FUN_1432c0590(void)

void FUN_1432c0590(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  
  if ((*(byte *)(*(longlong *)*param_1 + 0xf) & 1) == 0) {
    cVar6 = Scaleform::Render::Cxform::operator==(param_2,&DAT_1467ccfd0);
    if (cVar6 != '\0') {
      return;
    }
    plVar3 = (longlong *)*param_1;
    FUN_1432c1280(*(undefined8 *)
                   (*(longlong *)(((ulonglong)plVar3 & 0xfffffffffffff800) + 0x20) + 8),plVar3,
                  *(byte *)(*plVar3 + 0xf) | 1);
  }
  uVar5 = param_2[1];
  lVar4 = *(longlong *)*param_1;
  bVar2 = (&DAT_1467ccff0)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5];
  puVar1 = (undefined8 *)(lVar4 + ((ulonglong)bVar2 + 1) * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)(lVar4 + 0x10 + ((ulonglong)bVar2 + 1) * 0x10);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 1432c0630 FUN_1432c0630 body=251 status=ok
// SIG undefined FUN_1432c0630(void)

void FUN_1432c0630(ulonglong *param_1,undefined4 *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  plVar1 = (longlong *)*param_1;
  uVar5 = 1 << ((byte)(param_3 + 1) & 0x1f);
  if ((*(byte *)(*plVar1 + 0xf) & (byte)uVar5) == 0) {
    iVar3 = _guard_xfg_dispatch_icall_nop(param_2,&DAT_14621c810,0x20);
    if (iVar3 == 0) {
      return;
    }
    FUN_1432c1280(*(undefined8 *)
                   (*(longlong *)(((ulonglong)plVar1 & 0xfffffffffffff800) + 0x20) + 8),plVar1,
                  *(byte *)(*plVar1 + 0xf) | uVar5);
  }
  lVar2 = *(longlong *)*param_1;
  lVar4 = (ulonglong)
          (byte)(&DAT_1467ccff0)
                [(ulonglong)(*(byte *)(lVar2 + 0xf) & 0xf) * 5 + (longlong)(param_3 + 1)] + 1;
  *(undefined4 *)(lVar2 + lVar4 * 0x10) = *param_2;
  *(undefined4 *)(lVar2 + 4 + lVar4 * 0x10) = param_2[1];
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0x10) = param_2[2];
  *(undefined4 *)(lVar2 + 0xc + lVar4 * 0x10) = param_2[3];
  *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x10) = param_2[4];
  *(undefined4 *)(lVar2 + 0x14 + lVar4 * 0x10) = param_2[5];
  *(undefined4 *)(lVar2 + 0x18 + lVar4 * 0x10) = param_2[6];
  *(undefined4 *)(lVar2 + 0x1c + lVar4 * 0x10) = param_2[7];
  return;
}



// FUNCTION 1432c0740 FUN_1432c0740 body=182 status=ok
// SIG undefined FUN_1432c0740(void)

void FUN_1432c0740(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)*param_1;
  bVar2 = *(byte *)(*plVar3 + 0xf);
  if ((bVar2 & 0x10) == 0) {
    iVar6 = _guard_xfg_dispatch_icall_nop(param_2,&DAT_146b63020,0x30);
    if (iVar6 == 0) {
      return;
    }
    FUN_1432c1280(*(undefined8 *)
                   (*(longlong *)(((ulonglong)plVar3 & 0xfffffffffffff800) + 0x20) + 8),plVar3,
                  bVar2 | 0x10);
  }
  uVar5 = param_2[1];
  lVar4 = *(longlong *)*param_1;
  lVar7 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5] + 1;
  puVar1 = (undefined8 *)(lVar4 + lVar7 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7 * 0x10);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  uVar5 = param_2[5];
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7 * 0x10);
  *puVar1 = param_2[4];
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 1432c0800 FUN_1432c0800 body=164 status=ok
// SIG undefined FUN_1432c0800(void)

void FUN_1432c0800(ulonglong *param_1,void *param_2,size_t param_3)

{
  longlong *plVar1;
  void *_Dst;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)(*plVar1 + 0xf) & 8) == 0) {
    if (param_2 == (void *)0x0) {
      return;
    }
    FUN_1432c1280(*(undefined8 *)
                   (*(longlong *)(((ulonglong)plVar1 & 0xfffffffffffff800) + 0x20) + 8),plVar1,
                  *(byte *)(*plVar1 + 0xf) | 8);
  }
  _Dst = (void *)(((ulonglong)
                   (byte)(&DAT_1467ccff3)
                         [(ulonglong)(*(byte *)(*(longlong *)*param_1 + 0xf) & 0xf) * 5] + 1) * 0x10
                 + *(longlong *)*param_1);
  if (param_2 == (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_3);
    return;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
  return;
}



// FUNCTION 1432c08b0 FUN_1432c08b0 body=53 status=ok
// SIG undefined FUN_1432c08b0(void)

undefined * FUN_1432c08b0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_1;
  if ((*(byte *)(lVar1 + 0xf) & 0x10) == 0) {
    return &DAT_146b63020;
  }
  return (undefined *)
         (((ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar1 + 0xf) & 0xf) * 5] + 1) *
          0x10 + lVar1);
}



// FUNCTION 1432c08f0 FUN_1432c08f0 body=72 status=ok
// SIG undefined FUN_1432c08f0(void)

undefined4 * FUN_1432c08f0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_1;
  if ((*(byte *)(lVar1 + 0xf) & (byte)(1 << ((byte)(param_2 + 1) & 0x1f))) == 0) {
    return &DAT_14621c810;
  }
  return (undefined4 *)
         (((ulonglong)
           (byte)(&DAT_1467ccff0)
                 [(ulonglong)(*(byte *)(lVar1 + 0xf) & 0xf) * 5 + (longlong)(param_2 + 1)] + 1) *
          0x10 + lVar1);
}



// FUNCTION 1432c0940 FUN_1432c0940 body=112 status=ok
// SIG undefined FUN_1432c0940(void)

undefined8 * FUN_1432c0940(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af7ab0;
  puVar1 = param_1 + 8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = param_1;
  *puVar1 = puVar1;
  param_1[9] = puVar1;
  puVar1 = param_1 + 10;
  *puVar1 = puVar1;
  param_1[0xb] = puVar1;
  puVar1 = param_1 + 0xc;
  *puVar1 = puVar1;
  param_1[0xd] = puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 1432c09c0 FUN_1432c09c0 body=186 status=ok
// SIG undefined FUN_1432c09c0(void)

void FUN_1432c09c0(RefCountImplCore *param_1)

{
  RefCountImplCore *pRVar1;
  longlong *plVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145af7ab0;
  pRVar1 = *(RefCountImplCore **)(param_1 + 0x68);
  while (pRVar1 != param_1 + 0x60) {
    plVar2 = *(longlong **)(param_1 + 0x68);
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0xfe0;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(longlong **)(param_1 + 0x80) = plVar2;
    pRVar1 = *(RefCountImplCore **)(param_1 + 0x68);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432c0a80 FUN_1432c0a80 body=43 status=ok
// SIG undefined FUN_1432c0a80(void)

undefined8 * FUN_1432c0a80(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432c0c30(param_1,&DAT_14621c810,&DAT_1467ccfd0,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1432c0ac0 FUN_1432c0ac0 body=39 status=ok
// SIG undefined FUN_1432c0ac0(void)

undefined8 * FUN_1432c0ac0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432c0c30(param_1,param_3,&DAT_1467ccfd0);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1432c0af0 FUN_1432c0af0 body=39 status=ok
// SIG undefined FUN_1432c0af0(void)

undefined8 * FUN_1432c0af0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432c0de0(param_1,param_3,&DAT_1467ccfd0);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1432c0b20 FUN_1432c0b20 body=43 status=ok
// SIG undefined FUN_1432c0b20(void)

undefined8 *
FUN_1432c0b20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432c0c30(param_1,param_3,param_4,param_5);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1432c0b60 FUN_1432c0b60 body=43 status=ok
// SIG undefined FUN_1432c0b60(void)

undefined8 *
FUN_1432c0b60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432c0de0(param_1,param_3,param_4,param_5);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1432c0ba0 FUN_1432c0ba0 body=124 status=ok
// SIG undefined FUN_1432c0ba0(void)

undefined8 FUN_1432c0ba0(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 != 2) &&
     (*(ulonglong *)(param_1 + 0x28) < (ulonglong)(*(longlong *)(param_1 + 0x18) * 3) >> 5)) {
    return 0;
  }
  if ((param_2 == 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    cVar1 = FUN_1432c1680(param_1,*(longlong *)(param_1 + 0x78),**(undefined8 **)(param_1 + 0x68),0)
    ;
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_1432c1680(param_1,*(undefined8 **)(param_1 + 0x68),**(undefined8 **)(param_1 + 0x68),
                        param_2);
  return uVar2;
}



// FUNCTION 1432c0c30 FUN_1432c0c30 body=423 status=ok
// SIG undefined FUN_1432c0c30(void)

undefined ** FUN_1432c0c30(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  ppuVar4 = (undefined **)FUN_1432c11e0(param_1,param_4);
  if (ppuVar4 != (undefined **)0x0) {
    puVar2 = *ppuVar4;
    lVar6 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)((byte)puVar2[0xf] & 0xf) * 5] + 1;
    *(undefined4 *)(puVar2 + lVar6 * 0x10) = *param_2;
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 4) = param_2[1];
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 8) = param_2[2];
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 0xc) = param_2[3];
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 0x10) = param_2[4];
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 0x14) = param_2[5];
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 0x18) = param_2[6];
    *(undefined4 *)(puVar2 + lVar6 * 0x10 + 0x1c) = param_2[7];
    if ((param_4 & 1) != 0) {
      uVar3 = param_3[1];
      bVar1 = (&DAT_1467ccff0)[(ulonglong)((byte)puVar2[0xf] & 0xf) * 5];
      *(undefined8 *)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10) = *param_3;
      *(undefined8 *)((longlong)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10) + 8) = uVar3;
      uVar3 = param_3[3];
      *(undefined8 *)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10 + 0x10) = param_3[2];
      *(undefined8 *)((longlong)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10 + 0x10) + 8) = uVar3;
    }
    if ((param_4 & 2) != 0) {
      puVar5 = (undefined8 *)
               (*ppuVar4 +
               ((ulonglong)(byte)(&DAT_1467ccff1)[(ulonglong)((byte)(*ppuVar4)[0xf] & 0xf) * 5] + 1)
               * 0x10);
      *puVar5 = 0x3f800000;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    }
    if ((param_4 & 4) != 0) {
      puVar5 = (undefined8 *)
               (*ppuVar4 +
               ((ulonglong)(byte)(&DAT_1467ccff2)[(ulonglong)((byte)(*ppuVar4)[0xf] & 0xf) * 5] + 1)
               * 0x10);
      *puVar5 = 0x3f800000;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    }
    if ((param_4 & 8) != 0) {
      puVar5 = (undefined8 *)
               (*ppuVar4 +
               ((ulonglong)(byte)(&DAT_1467ccff3)[(ulonglong)((byte)(*ppuVar4)[0xf] & 0xf) * 5] + 1)
               * 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
    }
    return ppuVar4;
  }
  return &PTR_LOOP_1467cd040;
}



// FUNCTION 1432c0de0 FUN_1432c0de0 body=389 status=ok
// SIG undefined FUN_1432c0de0(void)

undefined ** FUN_1432c0de0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  ppuVar4 = (undefined **)FUN_1432c11e0(param_1,param_4);
  if (ppuVar4 != (undefined **)0x0) {
    puVar2 = *ppuVar4;
    uVar3 = param_2[1];
    lVar6 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)((byte)puVar2[0xf] & 0xf) * 5] + 1;
    *(undefined8 *)(puVar2 + lVar6 * 0x10) = *param_2;
    *(undefined8 *)((longlong)(puVar2 + lVar6 * 0x10) + 8) = uVar3;
    uVar3 = param_2[3];
    *(undefined8 *)(puVar2 + lVar6 * 0x10 + 0x10) = param_2[2];
    *(undefined8 *)((longlong)(puVar2 + lVar6 * 0x10 + 0x10) + 8) = uVar3;
    uVar3 = param_2[5];
    *(undefined8 *)(puVar2 + lVar6 * 0x10 + 0x20) = param_2[4];
    *(undefined8 *)((longlong)(puVar2 + lVar6 * 0x10 + 0x20) + 8) = uVar3;
    if ((param_4 & 1) != 0) {
      puVar2 = *ppuVar4;
      uVar3 = param_3[1];
      bVar1 = (&DAT_1467ccff0)[(ulonglong)((byte)puVar2[0xf] & 0xf) * 5];
      *(undefined8 *)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10) = *param_3;
      *(undefined8 *)((longlong)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10) + 8) = uVar3;
      uVar3 = param_3[3];
      *(undefined8 *)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10 + 0x10) = param_3[2];
      *(undefined8 *)((longlong)(puVar2 + ((ulonglong)bVar1 + 1) * 0x10 + 0x10) + 8) = uVar3;
    }
    if ((param_4 & 2) != 0) {
      puVar5 = (undefined8 *)
               (*ppuVar4 +
               ((ulonglong)(byte)(&DAT_1467ccff1)[(ulonglong)((byte)(*ppuVar4)[0xf] & 0xf) * 5] + 1)
               * 0x10);
      *puVar5 = 0x3f800000;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    }
    if ((param_4 & 4) != 0) {
      puVar5 = (undefined8 *)
               (*ppuVar4 +
               ((ulonglong)(byte)(&DAT_1467ccff2)[(ulonglong)((byte)(*ppuVar4)[0xf] & 0xf) * 5] + 1)
               * 0x10);
      *puVar5 = 0x3f800000;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    }
    if ((param_4 & 8) != 0) {
      puVar5 = (undefined8 *)
               (*ppuVar4 +
               ((ulonglong)(byte)(&DAT_1467ccff3)[(ulonglong)((byte)(*ppuVar4)[0xf] & 0xf) * 5] + 1)
               * 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
    }
    return ppuVar4;
  }
  return &PTR_LOOP_1467cd040;
}



// FUNCTION 1432c0f70 FUN_1432c0f70 body=138 status=ok
// SIG undefined FUN_1432c0f70(void)

undefined8 FUN_1432c0f70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                       (*(longlong **)(param_1 + 0x10),0x1000,0x10,0);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  plVar3[2] = param_1;
  plVar1 = (longlong *)(param_1 + 0x60);
  *(undefined4 *)(plVar3 + 3) = 0xfe0;
  *plVar3 = *plVar1;
  plVar3[1] = (longlong)plVar1;
  lVar2 = *plVar1;
  *(longlong **)(lVar2 + 8) = plVar3;
  *plVar1 = (longlong)plVar3;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0xfe0;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  *(longlong **)(param_1 + 0x70) = plVar3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1432c1000 FUN_1432c1000 body=125 status=ok
// SIG undefined FUN_1432c1000(void)

void FUN_1432c1000(longlong param_1,longlong *param_2)

{
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0xfe0;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
    *(longlong **)(param_1 + 0x80) = param_2;
    return;
  }
  *(longlong **)(param_1 + 0x80) = param_2;
  return;
}



// FUNCTION 1432c1090 ensureAllocSpace body=165 status=ok
// SIG undefined ensureAllocSpace(void)

undefined8
Scaleform::Render::MatrixPoolImpl::MatrixPool::ensureAllocSpace(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((*(longlong *)(param_1 + 0x70) != lVar1) && (*(longlong *)(param_1 + 0x68) != param_1 + 0x60))
  {
    *(longlong *)(param_1 + 0x70) = lVar1;
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 0x18);
    if (param_2 <= uVar3) goto LAB_1432c10c1;
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x18) * 3) >> 5 <= *(ulonglong *)(param_1 + 0x28)) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      cVar2 = FUN_1432c1680(param_1,*(longlong *)(param_1 + 0x78),**(undefined8 **)(param_1 + 0x68),
                            0);
      if (cVar2 != '\0') goto LAB_1432c1111;
    }
    FUN_1432c1680(param_1,*(undefined8 **)(param_1 + 0x68),**(undefined8 **)(param_1 + 0x68),0);
  }
LAB_1432c1111:
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     (uVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x70) + 0x18), uVar3 < param_2)) {
    uVar4 = FUN_1432c0f70(param_1);
    return uVar4;
  }
LAB_1432c10c1:
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1432c1140 FUN_1432c1140 body=150 status=ok
// SIG undefined FUN_1432c1140(void)

undefined8 * FUN_1432c1140(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar1 = param_2 + 0x10;
  if (((*(longlong *)(param_1 + 0x70) == 0) ||
      (*(ushort *)(*(longlong *)(param_1 + 0x70) + 0x18) < uVar1)) &&
     (cVar3 = Scaleform::Render::MatrixPoolImpl::MatrixPool::ensureAllocSpace(param_1,uVar1),
     cVar3 == '\0')) {
    return (undefined8 *)0x0;
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  lVar4 = lVar2 - (ulonglong)*(ushort *)(lVar2 + 0x18);
  puVar5 = (undefined8 *)(lVar4 + 0x1000);
  *puVar5 = param_3;
  *(undefined4 *)(lVar4 + 0x1008) = 1;
  *(short *)(lVar4 + 0x100c) = (short)lVar2 - (short)puVar5;
  *(char *)(lVar4 + 0x100e) = (char)(param_2 >> 4) + '\x01';
  *(undefined1 *)(lVar4 + 0x100f) = 0;
  *(short *)(lVar2 + 0x18) = *(short *)(lVar2 + 0x18) - (short)uVar1;
  return puVar5;
}



// FUNCTION 1432c11e0 FUN_1432c11e0 body=139 status=ok
// SIG undefined FUN_1432c11e0(void)

longlong * FUN_1432c11e0(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  bVar1 = (&DAT_1467ccff4)[(ulonglong)(param_2 & 0xf) * 5];
  plVar2 = (longlong *)FUN_1432c0300(param_1 + 0x30,0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1432c1140(param_1,(((param_2 & 0x10 | 0x20) >> 4) + (uint)bVar1) * 0x10,plVar2);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      *(char *)(lVar3 + 0xf) = (char)param_2;
      return plVar2;
    }
    FUN_1432c00e0(plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 1432c1280 FUN_1432c1280 body=1011 status=ok
// SIG undefined FUN_1432c1280(void)

undefined8 FUN_1432c1280(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  lVar7 = FUN_1432c1140(param_1,(((param_3 & 0x10 | 0x20) >> 4) +
                                (uint)(byte)(&DAT_1467ccff4)[(ulonglong)(param_3 & 0xf) * 5]) * 0x10
                        ,param_2);
  uVar11 = 0;
  if (lVar7 != 0) {
    plVar5 = (longlong *)*param_2;
    *(char *)(lVar7 + 0xf) = (char)param_3;
    *(int *)(lVar7 + 8) = (int)plVar5[1];
    bVar3 = *(byte *)((longlong)plVar5 + 0xf);
    lVar13 = (ulonglong)(bVar3 & 0xf) * 5;
    if ((param_3 & 0x10) == 0) {
      lVar8 = (ulonglong)(byte)(&DAT_1467ccff4)[lVar13] + 1;
      lVar13 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(param_3 & 0xf) * 5] + 1;
      *(int *)(lVar7 + lVar13 * 0x10) = (int)plVar5[lVar8 * 2];
      *(undefined4 *)(lVar7 + 4 + lVar13 * 0x10) =
           *(undefined4 *)((longlong)plVar5 + lVar8 * 0x10 + 4);
      *(int *)(lVar7 + 8 + lVar13 * 0x10) = (int)plVar5[lVar8 * 2 + 1];
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x10) =
           *(undefined4 *)((longlong)plVar5 + lVar8 * 0x10 + 0xc);
      *(int *)(lVar7 + 0x10 + lVar13 * 0x10) = (int)plVar5[lVar8 * 2 + 2];
      *(undefined4 *)(lVar7 + 0x14 + lVar13 * 0x10) =
           *(undefined4 *)((longlong)plVar5 + lVar8 * 0x10 + 0x14);
      *(int *)(lVar7 + 0x18 + lVar13 * 0x10) = (int)plVar5[lVar8 * 2 + 3];
      *(undefined4 *)(lVar7 + 0x1c + lVar13 * 0x10) =
           *(undefined4 *)((longlong)plVar5 + lVar8 * 0x10 + 0x1c);
    }
    else if ((bVar3 & 0x10) == 0) {
      lVar8 = (plVar5 + ((ulonglong)(byte)(&DAT_1467ccff4)[lVar13] + 1) * 2)[1];
      lVar12 = plVar5[((ulonglong)(byte)(&DAT_1467ccff4)[lVar13] + 1) * 2 + 2];
      lVar6 = (plVar5 + ((ulonglong)(byte)(&DAT_1467ccff4)[lVar13] + 1) * 2 + 2)[1];
      lVar9 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(param_3 & 0xf) * 5] + 1;
      plVar14 = (longlong *)(lVar7 + lVar9 * 0x10);
      *plVar14 = plVar5[((ulonglong)(byte)(&DAT_1467ccff4)[lVar13] + 1) * 2];
      plVar14[1] = lVar8;
      plVar14 = (longlong *)(lVar7 + 0x10 + lVar9 * 0x10);
      *plVar14 = lVar12;
      plVar14[1] = lVar6;
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar9 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
    }
    else {
      lVar12 = (ulonglong)(byte)(&DAT_1467ccff4)[lVar13] + 1;
      lVar13 = (plVar5 + lVar12 * 2)[1];
      lVar8 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(param_3 & 0xf) * 5] + 1;
      plVar14 = (longlong *)(lVar7 + lVar8 * 0x10);
      *plVar14 = plVar5[lVar12 * 2];
      plVar14[1] = lVar13;
      lVar13 = (plVar5 + lVar12 * 2 + 2)[1];
      plVar14 = (longlong *)(lVar7 + 0x10 + lVar8 * 0x10);
      *plVar14 = plVar5[lVar12 * 2 + 2];
      plVar14[1] = lVar13;
      lVar13 = (plVar5 + lVar12 * 2 + 4)[1];
      plVar14 = (longlong *)(lVar7 + 0x20 + lVar8 * 0x10);
      *plVar14 = plVar5[lVar12 * 2 + 4];
      plVar14[1] = lVar13;
    }
    if ((param_3 & 1) != 0) {
      if ((bVar3 & 1) == 0) {
        plVar14 = (longlong *)&DAT_1467ccfd0;
      }
      else {
        plVar14 = plVar5 + ((ulonglong)
                            (byte)(&DAT_1467ccff0)
                                  [(ulonglong)(*(byte *)((longlong)plVar5 + 0xf) & 0xf) * 5] + 1) *
                           2;
      }
      lVar13 = plVar14[1];
      bVar4 = (&DAT_1467ccff0)[(ulonglong)(*(byte *)(lVar7 + 0xf) & 0xf) * 5];
      plVar15 = (longlong *)(lVar7 + ((ulonglong)bVar4 + 1) * 0x10);
      *plVar15 = *plVar14;
      plVar15[1] = lVar13;
      lVar13 = plVar14[3];
      plVar15 = (longlong *)(lVar7 + 0x10 + ((ulonglong)bVar4 + 1) * 0x10);
      *plVar15 = plVar14[2];
      plVar15[1] = lVar13;
    }
    plVar14 = (longlong *)&DAT_14621c810;
    if ((param_3 & 2) != 0) {
      if ((bVar3 & 2) == 0) {
        plVar15 = (longlong *)&DAT_14621c810;
      }
      else {
        plVar15 = plVar5 + ((ulonglong)
                            (byte)(&DAT_1467ccff1)
                                  [(ulonglong)(*(byte *)((longlong)plVar5 + 0xf) & 0xf) * 5] + 1) *
                           2;
      }
      lVar13 = (ulonglong)(byte)(&DAT_1467ccff1)[(ulonglong)(*(byte *)(lVar7 + 0xf) & 0xf) * 5] + 1;
      *(int *)(lVar7 + lVar13 * 0x10) = (int)*plVar15;
      *(undefined4 *)(lVar7 + 4 + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar15 + 4);
      *(int *)(lVar7 + 8 + lVar13 * 0x10) = (int)plVar15[1];
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar15 + 0xc);
      *(int *)(lVar7 + 0x10 + lVar13 * 0x10) = (int)plVar15[2];
      *(undefined4 *)(lVar7 + 0x14 + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar15 + 0x14);
      *(int *)(lVar7 + 0x18 + lVar13 * 0x10) = (int)plVar15[3];
      *(undefined4 *)(lVar7 + 0x1c + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar15 + 0x1c);
    }
    if ((param_3 & 4) != 0) {
      if ((bVar3 & 4) != 0) {
        plVar14 = plVar5 + ((ulonglong)
                            (byte)(&DAT_1467ccff2)
                                  [(ulonglong)(*(byte *)((longlong)plVar5 + 0xf) & 0xf) * 5] + 1) *
                           2;
      }
      lVar13 = (ulonglong)(byte)(&DAT_1467ccff2)[(ulonglong)(*(byte *)(lVar7 + 0xf) & 0xf) * 5] + 1;
      *(int *)(lVar7 + lVar13 * 0x10) = (int)*plVar14;
      *(undefined4 *)(lVar7 + 4 + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar14 + 4);
      *(int *)(lVar7 + 8 + lVar13 * 0x10) = (int)plVar14[1];
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar14 + 0xc);
      *(int *)(lVar7 + 0x10 + lVar13 * 0x10) = (int)plVar14[2];
      *(undefined4 *)(lVar7 + 0x14 + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar14 + 0x14);
      *(int *)(lVar7 + 0x18 + lVar13 * 0x10) = (int)plVar14[3];
      *(undefined4 *)(lVar7 + 0x1c + lVar13 * 0x10) = *(undefined4 *)((longlong)plVar14 + 0x1c);
    }
    if ((param_3 & 8) != 0) {
      plVar14 = (longlong *)
                (((ulonglong)(byte)(&DAT_1467ccff3)[(ulonglong)(*(byte *)(lVar7 + 0xf) & 0xf) * 5] +
                 1) * 0x10 + lVar7);
      if ((bVar3 & 8) == 0) {
        *plVar14 = 0;
        plVar14[1] = 0;
        plVar14[2] = 0;
        plVar14[3] = 0;
        plVar14[4] = 0;
        plVar14[5] = 0;
        plVar14[6] = 0;
        plVar14[7] = 0;
      }
      else {
        lVar8 = (ulonglong)
                (byte)(&DAT_1467ccff3)[(ulonglong)(*(byte *)((longlong)plVar5 + 0xf) & 0xf) * 5] + 1
        ;
        lVar13 = (plVar5 + lVar8 * 2)[1];
        *plVar14 = plVar5[lVar8 * 2];
        plVar14[1] = lVar13;
        lVar13 = (plVar5 + lVar8 * 2 + 2)[1];
        plVar14[2] = plVar5[lVar8 * 2 + 2];
        plVar14[3] = lVar13;
        lVar13 = (plVar5 + lVar8 * 2 + 4)[1];
        plVar14[4] = plVar5[lVar8 * 2 + 4];
        plVar14[5] = lVar13;
        lVar13 = (plVar5 + lVar8 * 2 + 6)[1];
        plVar14[6] = plVar5[lVar8 * 2 + 6];
        plVar14[7] = lVar13;
      }
    }
    ppuVar10 = &PTR_LOOP_1467cd040;
    if ((undefined **)*plVar5 != &PTR_LOOP_1467cd040) {
      bVar3 = *(byte *)((longlong)plVar5 + 0xe);
      *plVar5 = 0;
      *(undefined4 *)(plVar5 + 1) = 0;
      psVar2 = (short *)((longlong)*(short *)((longlong)plVar5 + 0xc) + 0x1a + (longlong)plVar5);
      *psVar2 = *psVar2 + (ushort)bVar3 * 0x10;
      ppuVar10 = (undefined **)((ulonglong)bVar3 * 0x10);
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (longlong)ppuVar10;
    }
    *param_2 = lVar7;
    uVar11 = CONCAT71((int7)((ulonglong)ppuVar10 >> 8),1);
  }
  return uVar11;
}



// FUNCTION 1432c1680 FUN_1432c1680 body=629 status=ok
// SIG undefined FUN_1432c1680(void)

undefined1 FUN_1432c1680(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  longlong *_Dst;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res10;
  
  plVar4 = (longlong *)0x0;
  uVar3 = 0;
  local_res10 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar5 = param_2;
  plVar7 = plVar4;
  plVar9 = plVar4;
  if (param_2 != param_3) {
    do {
      uVar2 = *(ushort *)((longlong)plVar5 + 0x1a);
      if ((uint)uVar2 + (uint)*(ushort *)(plVar5 + 3) < 0xcc) {
        param_2 = (longlong *)plVar5[1];
        plVar8 = plVar7;
      }
      else {
        plVar8 = plVar5 + 4;
        plVar6 = (longlong *)((longlong)plVar5 + (0x1000 - (ulonglong)*(ushort *)(plVar5 + 3)));
        _Dst = plVar4;
        if ((plVar7 != (longlong *)0x0) ||
           (plVar9 = plVar5 + 0x200, plVar4 = plVar6, plVar7 = plVar5, _Dst = plVar8, uVar2 != 0)) {
          for (; plVar4 = _Dst, plVar8 != plVar6; plVar8 = plVar8 + (ulonglong)bVar1 * 2) {
            bVar1 = *(byte *)((longlong)plVar8 + 0xe);
            if ((int)plVar8[1] != 0) {
              if (plVar9 < _Dst + (ulonglong)bVar1 * 2) {
                *(short *)(plVar7 + 3) = (short)plVar9 - (short)_Dst;
                plVar9 = plVar5 + 0x200;
                _Dst = plVar5 + 4;
                plVar7 = plVar5;
              }
              if (_Dst != plVar8) {
                memmove(_Dst,plVar8,(ulonglong)*(byte *)((longlong)plVar8 + 0xe) << 4);
                *(short *)((longlong)_Dst + 0xc) = (short)plVar7 - (short)_Dst;
                *(longlong **)*_Dst = _Dst;
              }
              _Dst = _Dst + (ulonglong)bVar1 * 2;
            }
          }
        }
        *(longlong *)(param_1 + 0x28) =
             *(longlong *)(param_1 + 0x28) - (ulonglong)*(ushort *)((longlong)plVar5 + 0x1a);
        *(undefined2 *)((longlong)plVar5 + 0x1a) = 0;
        plVar8 = plVar7;
        if ((plVar7 == plVar5) && (plVar8 = (longlong *)0x0, plVar4 != plVar7 + 4)) {
          if ((uVar2 == 0) || ((longlong)plVar9 - (longlong)plVar4 < 0x3f8)) {
            param_2 = (longlong *)plVar5[1];
            plVar8 = plVar7;
          }
          else {
            uVar3 = 1;
            local_res10 = 1;
            param_2 = plVar5;
            plVar8 = plVar7;
            if (param_4 == 0) break;
            param_2 = (longlong *)plVar5[1];
          }
        }
        else {
          plVar7 = plVar5 + 1;
          param_2 = (longlong *)*plVar7;
          *(longlong **)(*plVar5 + 8) = param_2;
          *(longlong *)*plVar7 = *plVar5;
          *plVar5 = -1;
          *plVar7 = -1;
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0xfe0;
          *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
          if (*(longlong *)(param_1 + 0x80) != 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(longlong **)(param_1 + 0x80) = plVar5;
          uVar3 = 1;
          local_res10 = 1;
          if (param_4 == 0) break;
        }
      }
      plVar5 = param_2;
      plVar7 = plVar8;
      uVar3 = local_res10;
    } while (param_2 != param_3);
    if (plVar8 != (longlong *)0x0) {
      *(short *)(plVar8 + 3) = (short)plVar9 - (short)plVar4;
      *(longlong **)(param_1 + 0x70) = plVar8;
      *(longlong **)(param_1 + 0x78) = plVar8;
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (param_2 != (longlong *)(param_1 + 0x60)) {
    *(longlong **)(param_1 + 0x78) = param_2;
  }
  return uVar3;
}



// FUNCTION 1432c1930 FUN_1432c1930 body=89 status=ok
// SIG undefined FUN_1432c1930(void)

undefined8 FUN_1432c1930(undefined8 param_1,ulonglong param_2)

{
  FUN_1432c09c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1432c1990 ~Log body=38 status=ok
// SIG undefined ~Log(void)

void Scaleform::Log::~Log(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_144f70a70;
  if (param_1 == DAT_146b63050) {
    DAT_146b63050 = (RefCountImplCore *)0x0;
  }
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432c19d0 FUN_1432c19d0 body=41 status=ok
// SIG undefined FUN_1432c19d0(void)

void FUN_1432c19d0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = *param_2;
  local_res20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,local_18,param_3,&local_res20);
  return;
}



// FUNCTION 1432c1a00 FUN_1432c1a00 body=244 status=ok
// SIG undefined FUN_1432c1a00(void)

void FUN_1432c1a00(char *param_1,uint param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong _SizeInBytes;
  longlong lVar3;
  
  lVar3 = 0;
  _SizeInBytes = (ulonglong)param_2;
  uVar1 = *param_3 & 0xf0000;
  if (uVar1 != 0) {
    if (uVar1 == 0x20000) {
      strcpy_s(param_1,_SizeInBytes,"Warning: ");
      lVar3 = 9;
      goto LAB_1432c1a52;
    }
    if (uVar1 == 0x30000) {
      strcpy_s(param_1,_SizeInBytes,"Error: ");
      lVar3 = 7;
      goto LAB_1432c1a52;
    }
    if (uVar1 == 0x40000) {
      strcpy_s(param_1,_SizeInBytes,"Assert: ");
      lVar3 = 8;
      goto LAB_1432c1a52;
    }
    if (uVar1 != 0x50000) goto LAB_1432c1a52;
  }
  *param_1 = '\0';
LAB_1432c1a52:
  lVar2 = FUN_1432c1bd0(param_1 + lVar3,_SizeInBytes - lVar3,param_4,param_5);
  if (((*param_3 & 0xf0000) != 0) && ((ulonglong)(lVar3 + lVar2) < (ulonglong)(param_2 - 1))) {
    strcat_s(param_1,_SizeInBytes,"\n");
  }
  return;
}



// FUNCTION 1432c1b00 FUN_1432c1b00 body=3 status=ok
// SIG undefined FUN_1432c1b00(void)

void FUN_1432c1b00(void)

{
  return;
}



// FUNCTION 1432c1b10 FUN_1432c1b10 body=8 status=ok
// SIG undefined FUN_1432c1b10(void)

void FUN_1432c1b10(undefined8 param_1)

{
  DAT_146b63050 = param_1;
  return;
}



// FUNCTION 1432c1b20 GetGlobalLog body=8 status=ok
// SIG undefined GetGlobalLog(void)

undefined8 Scaleform::Log::GetGlobalLog(void)

{
  return DAT_146b63050;
}



// FUNCTION 1432c1b30 FUN_1432c1b30 body=145 status=ok
// SIG undefined FUN_1432c1b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1432c1b30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b63068) {
    _Init_thread_header(&DAT_146b63068);
    if (DAT_146b63068 == -1) {
      _DAT_146b63058 = &PTR_FUN_144f70a70;
      _DAT_146b63060 = 1;
      atexit((_func_5014 *)&LAB_143ec45a0);
      _Init_thread_footer(&DAT_146b63068);
    }
  }
  return &DAT_146b63058;
}



// FUNCTION 1432c1bd0 FUN_1432c1bd0 body=127 status=ok
// SIG undefined FUN_1432c1bd0(void)

longlong FUN_1432c1bd0(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsnprintf_s(*puVar2,param_1,param_2,0xffffffffffffffff,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 == -1) {
    param_1[param_2 + -1] = 0;
    param_2 = param_2 + -1;
  }
  else {
    param_2 = (longlong)iVar1;
  }
  return param_2;
}



// FUNCTION 1432c1c90 FUN_1432c1c90 body=35 status=ok
// SIG undefined FUN_1432c1c90(void)

undefined8 FUN_1432c1c90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] == 0) {
    return 0;
  }
  if (param_1[2] == -1) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432c1caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  return uVar1;
}



// FUNCTION 1432c1cc0 FUN_1432c1cc0 body=111 status=ok
// SIG undefined FUN_1432c1cc0(void)

undefined8 FUN_1432c1cc0(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1[1] == 0) {
    return 1;
  }
  if (param_1[2] == -1) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
    if (cVar1 == '\0') {
      FUN_1432c25b0(*param_1,2);
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001432c1d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))
                    ((longlong *)*param_1,param_2,param_1[2],param_1[1]);
  return uVar2;
}



// FUNCTION 1432c1d50 FUN_1432c1d50 body=22 status=ok
// SIG undefined FUN_1432c1d50(void)

ulonglong FUN_1432c1d50(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x10) == -1) {
    return in_RAX & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(*(ulonglong *)(param_2 + 0x18) >> 8),
                  *(ulonglong *)(param_2 + 0x18) < *(ulonglong *)(param_1 + 0x18));
}



// FUNCTION 1432c1d70 FUN_1432c1d70 body=126 status=ok
// SIG undefined FUN_1432c1d70(void)

void FUN_1432c1d70(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if (iVar2 == 1) {
    if ((char)param_1[3] == '\0') {
      plVar3 = (longlong *)param_1[2];
    }
    else {
      plVar3 = *(longlong **)param_1[2];
      if (((longlong *)param_1[2])[2] != -1) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
      plVar1 = (longlong *)param_1[2];
      *(undefined1 *)(param_1 + 3) = 0;
      *plVar1 = plVar3[0xc];
      plVar3[0xc] = (longlong)plVar1;
    }
    (**(code **)*param_1)(param_1,0);
    *param_1 = plVar3[0x11];
    plVar3[0x11] = (longlong)param_1;
  }
  return;
}



// FUNCTION 1432c1e00 FUN_1432c1e00 body=253 status=ok
// SIG undefined FUN_1432c1e00(void)

void FUN_1432c1e00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar4 = 0;
  do {
    lVar2 = *(longlong *)(param_1 + 0x28);
    do {
      if (lVar4 == lVar2) {
        FUN_1432c2ba0(plVar1,plVar1,0);
        if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
        }
        lVar4 = *(longlong *)(param_1 + 0x28);
        plVar5 = (longlong *)(*plVar1 + (lVar4 + -1) * 8);
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          if ((longlong *)*plVar5 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar5 + 0x10))();
          }
          plVar5 = plVar5 + -1;
        }
                    /* WARNING: Could not recover jumptable at 0x0001432c1ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar1);
        return;
      }
      lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
      if (*(char *)(lVar2 + 0x18) != '\0') {
        *(undefined1 *)(lVar2 + 0x18) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))
                  (*(longlong **)(param_1 + 0x10),
                   *(undefined8 *)(*(longlong *)(*(longlong *)(*plVar1 + lVar4 * 8) + 0x10) + 0x10))
        ;
        puVar3 = *(undefined8 **)(*(longlong *)(*plVar1 + lVar4 * 8) + 0x10);
        lVar2 = *(longlong *)(param_1 + 0x10);
        *puVar3 = *(undefined8 *)(lVar2 + 0x60);
        *(undefined8 **)(lVar2 + 0x60) = puVar3;
        *(undefined8 *)(*(longlong *)(*plVar1 + lVar4 * 8) + 0x10) = *(undefined8 *)(param_1 + 0x10)
        ;
      }
      lVar2 = *(longlong *)(param_1 + 0x28);
    } while (lVar2 <= lVar4);
    lVar4 = lVar4 + 1;
  } while( true );
}



// FUNCTION 1432c1f10 FUN_1432c1f10 body=174 status=ok
// SIG undefined FUN_1432c1f10(void)

undefined8 * FUN_1432c1f10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af7af8;
  puVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 1) = 1;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x7f;
  param_1[7] = 0;
  param_1[8] = param_1 + 4;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x7f;
  param_1[0xc] = 0;
  param_1[0xd] = param_1 + 9;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x7f;
  param_1[0x11] = 0;
  param_1[0x12] = param_1 + 0xe;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1432c1fd0 FUN_1432c1fd0 body=206 status=ok
// SIG undefined FUN_1432c1fd0(void)

void FUN_1432c1fd0(RefCountImplCore *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145af7af8;
  FUN_1432c2660();
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0xfe0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0xfe0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x1fc0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432c20b0 FUN_1432c20b0 body=175 status=ok
// SIG undefined FUN_1432c20b0(void)

undefined8 FUN_1432c20b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(longlong **)(param_1 + 0xb8) = param_2;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0xd0))(param_2);
    if (lVar2 == 0) {
      return 1;
    }
    lVar2 = (**(code **)(*param_2 + 0xd0))(param_2);
    if (param_1 != lVar2) {
      return 0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_1432c2660(param_1);
    return 1;
  }
  *(uint *)(param_1 + 0xb0) = 2 - (uint)((*(uint *)((longlong)plVar1 + 0x54) & 0x20000000) != 0);
  uVar3 = (**(code **)(*plVar1 + 0xa0))();
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  return 1;
}



// FUNCTION 1432c2170 FUN_1432c2170 body=136 status=ok
// SIG undefined FUN_1432c2170(void)

void FUN_1432c2170(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0xac) = 1;
  plVar2 = (longlong *)FUN_1432c2d10(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = -1;
    plVar2[1] = -1;
    plVar2[2] = 0;
    *(undefined1 *)(plVar2 + 3) = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
  }
  plVar2[2] = param_1;
  plVar1 = (longlong *)(param_1 + 0x10);
  *plVar2 = *plVar1;
  plVar2[1] = (longlong)plVar1;
  *(longlong **)(*plVar1 + 8) = plVar2;
  *plVar1 = (longlong)plVar2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  if (DAT_146b6306c == '\0') {
    DAT_146b6306c = 99 < *(uint *)(param_1 + 0xa8);
  }
  return;
}



// FUNCTION 1432c2200 FUN_1432c2200 body=355 status=ok
// SIG undefined FUN_1432c2200(void)

undefined8 FUN_1432c2200(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar1 = param_1 + 2;
  if ((longlong *)param_1[3] == plVar1) {
    return 0;
  }
  lVar7 = *plVar1;
  plVar6 = (longlong *)FUN_1432c2370();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar2 = *(longlong **)(lVar7 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  *(longlong **)(lVar7 + 0x38) = plVar6;
  if (*(char *)(*(longlong *)(*plVar1 + 0x38) + 0x18) == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x38) + 0x10);
  }
  cVar4 = (**(code **)(*param_1 + 0x48))(param_1,*(undefined8 *)(lVar7 + 0x10));
  plVar6 = (longlong *)param_1[3];
  if ((longlong *)param_1[3] != (longlong *)*plVar1) {
    do {
      lVar7 = plVar6[7];
      if ((lVar7 == 0) ||
         ((((*(char *)(lVar7 + 0x18) != '\0' &&
            (puVar3 = *(undefined8 **)(lVar7 + 0x10), puVar3 != (undefined8 *)0x0)) &&
           (puVar3[1] != 0)) &&
          ((puVar3[2] == -1 ||
           (cVar5 = (**(code **)(*(longlong *)*puVar3 + 0x30))((longlong *)*puVar3,1), cVar5 != '\0'
           )))))) break;
      plVar2 = (longlong *)plVar6[1];
      *(longlong **)(*plVar6 + 8) = plVar2;
      *(longlong *)plVar6[1] = *plVar6;
      *plVar6 = -1;
      plVar6[1] = -1;
      FUN_1432c1e00(plVar6);
      *plVar6 = param_1[7];
      param_1[7] = (longlong)plVar6;
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      plVar6 = plVar2;
    } while (plVar2 != (longlong *)*plVar1);
  }
  if (cVar4 != '\0') {
    for (plVar6 = (longlong *)param_1[3]; plVar6 != plVar1; plVar6 = (longlong *)plVar6[1]) {
      *(undefined1 *)(plVar6 + 3) = 1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  return 1;
}



// FUNCTION 1432c2370 FUN_1432c2370 body=273 status=ok
// SIG undefined FUN_1432c2370(void)

longlong * FUN_1432c2370(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  plVar1 = param_1 + 2;
  if ((longlong *)param_1[3] == plVar1) {
    return (longlong *)0x0;
  }
  uVar4 = (**(code **)(*param_1 + 0x40))();
  puVar5 = (undefined8 *)FUN_1432c2c50(param_1 + 9);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    lVar2 = param_1[0x14];
    lVar3 = *plVar1;
    param_1[0x14] = lVar2 + 1;
    *puVar5 = param_1;
    puVar5[1] = lVar3;
    puVar5[2] = uVar4;
    puVar5[3] = lVar2 + 1;
  }
  plVar6 = (longlong *)FUN_1432c2c50(param_1 + 0xe);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 0;
    *plVar6 = (longlong)&PTR_FUN_144f70a50;
    *plVar6 = (longlong)&PTR_FUN_145af7ae0;
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    *(undefined1 *)(plVar6 + 3) = 0;
  }
  *(undefined1 *)(plVar6 + 3) = 1;
  plVar6[2] = (longlong)puVar5;
  lVar2 = *plVar1;
  FUN_1432c2ba0(lVar2 + 0x20,lVar2 + 0x20,*(longlong *)(lVar2 + 0x28) + 1);
  puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x20) + (*(longlong *)(lVar2 + 0x28) + -1) * 8);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    *puVar5 = plVar6;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
  return plVar6;
}



// FUNCTION 1432c2490 FUN_1432c2490 body=10 status=ok
// SIG undefined FUN_1432c2490(void)

void FUN_1432c2490(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x98) == 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    puVar1 = (undefined8 *)FUN_1432c2c50(param_1 + 0x70);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &PTR_FUN_144f70a50;
      *puVar1 = &PTR_FUN_145af7ae0;
      *(undefined4 *)(puVar1 + 1) = 1;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    }
    *(undefined8 **)(param_1 + 0x98) = puVar1;
    plVar2 = (longlong *)FUN_1432c2c50(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2[1] = *(longlong *)(param_1 + 0x10);
      *plVar2 = param_1;
      plVar2[2] = -1;
      plVar2[3] = -1;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x18) = 1;
    *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x10) = plVar2;
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  *param_2 = *(longlong *)(param_1 + 0x98);
  return;
}



// FUNCTION 1432c24a0 FUN_1432c24a0 body=264 status=ok
// SIG undefined FUN_1432c24a0(void)

void FUN_1432c24a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x98) == 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    puVar1 = (undefined8 *)FUN_1432c2c50(param_1 + 0x70);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &PTR_FUN_144f70a50;
      *puVar1 = &PTR_FUN_145af7ae0;
      *(undefined4 *)(puVar1 + 1) = 1;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    }
    *(undefined8 **)(param_1 + 0x98) = puVar1;
    plVar2 = (longlong *)FUN_1432c2c50(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2[1] = *(longlong *)(param_1 + 0x10);
      *plVar2 = param_1;
      plVar2[2] = -1;
      plVar2[3] = -1;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x18) = 1;
    *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x10) = plVar2;
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  *param_2 = *(longlong *)(param_1 + 0x98);
  return;
}



// FUNCTION 1432c25b0 FUN_1432c25b0 body=160 status=ok
// SIG undefined FUN_1432c25b0(void)

void FUN_1432c25b0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((int)param_1[0x16] <= param_2) && (lVar1 = param_1[0x13], lVar1 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x40))();
    *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x10) = uVar2;
    param_1[0x14] = param_1[0x14] + 1;
    *(longlong *)(*(longlong *)(param_1[0x13] + 0x10) + 0x18) = param_1[0x14];
    if ((longlong *)param_1[3] != param_1 + 2) {
      FUN_1432c2a80(param_1[2] + 0x20,param_1 + 0x13);
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    }
    param_1[0x13] = 0;
  }
  return;
}



// FUNCTION 1432c2660 FUN_1432c2660 body=171 status=ok
// SIG undefined FUN_1432c2660(void)

void FUN_1432c2660(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x18) = 0;
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  plVar2 = *(longlong **)(param_1 + 0x18);
  while (plVar2 != (longlong *)(param_1 + 0x10)) {
    plVar1 = (longlong *)plVar2[1];
    *(longlong **)(*plVar2 + 8) = plVar1;
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    FUN_1432c1e00(plVar2);
    *plVar2 = *(longlong *)(param_1 + 0x38);
    *(longlong **)(param_1 + 0x38) = plVar2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    plVar2 = plVar1;
  }
  return;
}



// FUNCTION 1432c2770 FUN_1432c2770 body=128 status=ok
// SIG undefined FUN_1432c2770(void)

void FUN_1432c2770(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  if ((int)param_1[3] != 0) {
    plVar1 = param_1 + 1;
    plVar3 = param_1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    do {
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar4 = (int)plVar5 + 1;
      plVar5 = (longlong *)(ulonglong)uVar4;
      *(longlong *)(lVar2 + 0x10) = *plVar1;
      *(longlong **)(lVar2 + 0x18) = plVar3;
      *(longlong *)(*plVar1 + 0x18) = lVar2;
      *plVar1 = lVar2;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
    } while (uVar4 < *(uint *)(param_1 + 3));
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



// FUNCTION 1432c2800 FUN_1432c2800 body=115 status=ok
// SIG undefined FUN_1432c2800(void)

void FUN_1432c2800(longlong param_1)

{
  RefCountImpl *this;
  longlong lVar1;
  
  lVar1 = param_1 + -8;
  if (param_1 == -8) {
    lVar1 = 0;
  }
  while (*(longlong *)(param_1 + 0x10) != lVar1) {
    this = *(RefCountImpl **)(param_1 + 0x10);
    *(undefined8 *)(*(longlong *)(this + 0x10) + 0x18) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(*(longlong *)(this + 0x18) + 0x10) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
    Scaleform::RefCountImpl::Release(this);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1432c2880 FUN_1432c2880 body=151 status=ok
// SIG undefined FUN_1432c2880(void)

RefCountImpl * FUN_1432c2880(longlong *param_1)

{
  longlong *plVar1;
  RefCountImpl *pRVar2;
  
  if ((char)param_1[4] == '\0') {
    return (RefCountImpl *)0x0;
  }
  plVar1 = param_1 + -1;
  if (param_1 == (longlong *)0xfffffffffffffff8) {
    plVar1 = (longlong *)0x0;
  }
  if ((longlong *)param_1[2] == plVar1) {
    pRVar2 = (RefCountImpl *)(**(code **)(*param_1 + 0x18))(param_1);
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
    Scaleform::RefCountImpl::AddRef(pRVar2);
    return pRVar2;
  }
  pRVar2 = (RefCountImpl *)param_1[2];
  *(undefined8 *)(*(longlong *)(pRVar2 + 0x10) + 0x18) = *(undefined8 *)(pRVar2 + 0x18);
  *(undefined8 *)(*(longlong *)(pRVar2 + 0x18) + 0x10) = *(undefined8 *)(pRVar2 + 0x10);
  *(undefined8 *)(pRVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(pRVar2 + 0x18) = 0xffffffffffffffff;
  Scaleform::RefCountImpl::AddRef(pRVar2);
  return pRVar2;
}



// FUNCTION 1432c2920 FUN_1432c2920 body=112 status=ok
// SIG undefined FUN_1432c2920(void)

void FUN_1432c2920(longlong param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
    if ((*(char *)(param_1 + 0x20) != '\0') && (*(int *)(param_2 + 8) == 1)) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(param_2 + 0x18) = param_1 + -8;
      *(RefCountImpl **)(*(longlong *)(param_1 + 8) + 0x18) = param_2;
      *(RefCountImpl **)(param_1 + 8) = param_2;
      return;
    }
    if (*(int *)(param_2 + 8) == 1) {
      Scaleform::RefCountImpl::Release(param_2);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  return;
}



// FUNCTION 1432c2990 FUN_1432c2990 body=89 status=ok
// SIG undefined FUN_1432c2990(void)

RefCountImplCore * FUN_1432c2990(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1432c29f0 FUN_1432c29f0 body=43 status=ok
// SIG undefined FUN_1432c29f0(void)

undefined8 * FUN_1432c29f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af7b58;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1432c2a20 FUN_1432c2a20 body=89 status=ok
// SIG undefined FUN_1432c2a20(void)

undefined8 FUN_1432c2a20(undefined8 param_1,ulonglong param_2)

{
  FUN_1432c1fd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 1432c2a80 FUN_1432c2a80 body=82 status=ok
// SIG undefined FUN_1432c2a80(void)

void FUN_1432c2a80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_1432c2ba0(param_1,param_1,param_1[1] + 1);
  plVar1 = (longlong *)(*param_1 + (param_1[1] + -1) * 8);
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 8))();
    }
    *plVar1 = *param_2;
  }
  return;
}



// FUNCTION 1432c2ae0 FUN_1432c2ae0 body=186 status=ok
// SIG undefined FUN_1432c2ae0(void)

void FUN_1432c2ae0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    uVar2 = 0x80;
    if (0x7f < param_3) {
      uVar2 = param_3;
    }
    if (uVar2 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = uVar2 + 0x3f & 0xffffffffffffffc0;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432c2ba0 FUN_1432c2ba0 body=175 status=ok
// SIG undefined FUN_1432c2ba0(void)

void FUN_1432c2ba0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    plVar1 = (longlong *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432c2ae0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432c2ae0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432c2c50 FUN_1432c2c50 body=179 status=ok
// SIG undefined FUN_1432c2c50(void)

longlong * FUN_1432c2c50(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x7f) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x20 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 2;
  plVar2 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1[4],0xfe8,local_res8);
  plVar2[0x1fc] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 0xfe0) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1432c2d10 FUN_1432c2d10 body=179 status=ok
// SIG undefined FUN_1432c2d10(void)

longlong * FUN_1432c2d10(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    param_1[3] = *plVar2;
    return plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x7f) {
    if (param_1[1] != 0) {
      *(uint *)(param_1 + 2) = uVar1 + 1;
      return (longlong *)((ulonglong)uVar1 * 0x40 + param_1[1]);
    }
    return (longlong *)0x0;
  }
  local_res8[0] = 2;
  plVar2 = (longlong *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1[4],0x1fc8,local_res8);
  plVar2[0x3f8] = 0;
  if (param_1[1] != 0) {
    *(longlong **)(param_1[1] + 0x1fc0) = plVar2;
    param_1[1] = (longlong)plVar2;
    *(undefined4 *)(param_1 + 2) = 1;
    return plVar2;
  }
  *param_1 = (longlong)plVar2;
  param_1[1] = (longlong)plVar2;
  *(undefined4 *)(param_1 + 2) = 1;
  return plVar2;
}



// FUNCTION 1432c2dd0 FUN_1432c2dd0 body=103 status=ok
// SIG undefined FUN_1432c2dd0(void)

ulonglong * FUN_1432c2dd0(undefined8 param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    return (ulonglong *)&DAT_1467cd080;
  }
  puVar1 = (ulonglong *)(**(code **)(*param_2 + 0x50))(param_2,param_3 + 0x10,0);
  *(undefined1 *)((longlong)puVar1 + param_3 + 0xc) = 0;
  *puVar1 = param_3 | param_4;
  *(undefined4 *)(puVar1 + 1) = 1;
  return puVar1;
}



// FUNCTION 1432c2e40 FUN_1432c2e40 body=129 status=ok
// SIG undefined FUN_1432c2e40(void)

ulonglong *
FUN_1432c2e40(undefined8 param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,void *param_5
             ,size_t param_6)

{
  ulonglong *puVar1;
  
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    puVar1 = (ulonglong *)&DAT_1467cd080;
  }
  else {
    puVar1 = (ulonglong *)(**(code **)(*param_2 + 0x50))(param_2,param_3 + 0x10,0);
    *(undefined1 *)((longlong)puVar1 + param_3 + 0xc) = 0;
    *puVar1 = param_3 | param_4;
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)puVar1 + 0xc),param_5,param_6);
  return puVar1;
}



// FUNCTION 1432c2ed0 FUN_1432c2ed0 body=154 status=ok
// SIG undefined FUN_1432c2ed0(void)

ulonglong *
FUN_1432c2ed0(undefined8 param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,void *param_5
             ,size_t param_6,void *param_7,size_t param_8)

{
  ulonglong *puVar1;
  
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    puVar1 = (ulonglong *)&DAT_1467cd080;
  }
  else {
    puVar1 = (ulonglong *)(**(code **)(*param_2 + 0x50))(param_2,param_3 + 0x10,0);
    *(undefined1 *)((longlong)puVar1 + param_3 + 0xc) = 0;
    *puVar1 = param_3 | param_4;
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)puVar1 + 0xc),param_5,param_6);
  _guard_xfg_dispatch_icall_nop((undefined *)(param_6 + 0xc + (longlong)puVar1),param_7,param_8);
  return puVar1;
}



// FUNCTION 1432c2f70 FUN_1432c2f70 body=45 status=ok
// SIG undefined FUN_1432c2f70(void)

undefined8 * FUN_1432c2f70(undefined8 *param_1)

{
  *param_1 = &DAT_1467cd080;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  return param_1;
}



// FUNCTION 1432c2fb0 FUN_1432c2fb0 body=159 status=ok
// SIG undefined FUN_1432c2fb0(void)

undefined8 * FUN_1432c2fb0(undefined8 *param_1,void *param_2)

{
  size_t *psVar1;
  size_t _Size;
  size_t sVar2;
  
  if (param_2 == (void *)0x0) {
    _Size = 0;
  }
  else {
    _Size = 0xffffffffffffffff;
    do {
      sVar2 = _Size;
      _Size = sVar2 + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
    if (_Size != 0) {
      psVar1 = (size_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,sVar2 + 0x11,0);
      *(undefined1 *)((longlong)psVar1 + sVar2 + 0xd) = 0;
      *(undefined4 *)(psVar1 + 1) = 1;
      *psVar1 = _Size;
      goto LAB_1432c3024;
    }
  }
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  psVar1 = (size_t *)&DAT_1467cd080;
LAB_1432c3024:
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar1 + 0xc),param_2,_Size);
  *param_1 = psVar1;
  return param_1;
}



// FUNCTION 1432c3060 FUN_1432c3060 body=208 status=ok
// SIG undefined FUN_1432c3060(void)

longlong * FUN_1432c3060(longlong *param_1,longlong param_2,longlong param_3,void *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  size_t _Size;
  
  _Size = 0xffffffffffffffff;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
  }
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
  }
  if (param_4 == (void *)0x0) {
    _Size = 0;
  }
  else {
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_4 + _Size) != '\0');
  }
  lVar1 = FUN_1432c2ed0(param_1,DAT_146b62f28,_Size + lVar2 + lVar3,0,param_2,lVar3,param_3,lVar2);
  _guard_xfg_dispatch_icall_nop((void *)(lVar1 + lVar2 + lVar3 + 0xc),param_4,_Size);
  *param_1 = lVar1;
  return param_1;
}



// FUNCTION 1432c3140 FUN_1432c3140 body=139 status=ok
// SIG undefined FUN_1432c3140(void)

undefined8 * FUN_1432c3140(undefined8 *param_1,void *param_2,size_t param_3)

{
  size_t *psVar1;
  
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar1 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar1 = (size_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_3 + 0x10,0);
    *(undefined1 *)((longlong)psVar1 + param_3 + 0xc) = 0;
    *(undefined4 *)(psVar1 + 1) = 1;
    *psVar1 = param_3;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar1 + 0xc),param_2,param_3);
  *param_1 = psVar1;
  return param_1;
}



// FUNCTION 1432c31e0 FUN_1432c31e0 body=180 status=ok
// SIG undefined FUN_1432c31e0(void)

undefined8 * FUN_1432c31e0(undefined8 *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)0x0;
  puVar3 = (ulonglong *)(*param_2 & 0xfffffffffffffffc);
  uVar4 = (uint)*param_2 & 3;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else if (uVar4 == 2) {
      plVar1 = (longlong *)param_2[1];
    }
    if (plVar1 != DAT_146b62f28) {
      uVar5 = *puVar3 & 0x7fffffffffffffff;
      uVar2 = FUN_1432c2e40(param_1,DAT_146b62f28,uVar5,*puVar3 & 0x8000000000000000,
                            (longlong)puVar3 + 0xc,uVar5);
      *param_1 = uVar2;
      return param_1;
    }
  }
  *param_1 = puVar3;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar3 + 1,1);
  return param_1;
}



// FUNCTION 1432c32a0 FUN_1432c32a0 body=155 status=ok
// SIG undefined FUN_1432c32a0(void)

undefined8 * FUN_1432c32a0(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  size_t *psVar1;
  undefined1 *_Src;
  
  _Size = param_2[1];
  _Src = &DAT_145af3922;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    _Src = (undefined1 *)*param_2;
  }
  if (_Size == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar1 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar1 = (size_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,_Size + 0x10,0);
    *(undefined1 *)((longlong)psVar1 + _Size + 0xc) = 0;
    *(undefined4 *)(psVar1 + 1) = 1;
    *psVar1 = _Size;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar1 + 0xc),_Src,_Size);
  *param_1 = psVar1;
  return param_1;
}



// FUNCTION 1432c3350 FUN_1432c3350 body=139 status=ok
// SIG undefined FUN_1432c3350(void)

undefined8 * FUN_1432c3350(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  void *_Src;
  size_t *psVar1;
  
  _Size = param_2[1];
  _Src = (void *)*param_2;
  if (_Size == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar1 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar1 = (size_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,_Size + 0x10,0);
    *(undefined1 *)((longlong)psVar1 + _Size + 0xc) = 0;
    *(undefined4 *)(psVar1 + 1) = 1;
    *psVar1 = _Size;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar1 + 0xc),_Src,_Size);
  *param_1 = psVar1;
  return param_1;
}



// FUNCTION 1432c33f0 FUN_1432c33f0 body=132 status=ok
// SIG undefined FUN_1432c33f0(void)

undefined8 * FUN_1432c33f0(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    plVar1 = (longlong *)&DAT_1467cd080;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,param_3 + 0x10,0);
    *(undefined1 *)((longlong)plVar1 + param_3 + 0xc) = 0;
    *(undefined4 *)(plVar1 + 1) = 1;
    *plVar1 = param_3;
  }
  *param_1 = plVar1;
  (**(code **)(*param_2 + 8))(param_2,((ulonglong)plVar1 & 0xfffffffffffffffc) + 0xc,param_3);
  return param_1;
}



// FUNCTION 1432c3480 FUN_1432c3480 body=73 status=ok
// SIG undefined FUN_1432c3480(void)

undefined8 * FUN_1432c3480(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_1467cd080;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  if (param_2 != 0) {
    FUN_1432c4c60(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1432c3510 FUN_1432c3510 body=99 status=ok
// SIG undefined FUN_1432c3510(void)

void FUN_1432c3510(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  uVar1 = *param_1;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  *param_1 = (ulonglong)((uint)*param_1 & 3) | 0x1467cd080;
  return;
}



// FUNCTION 1432c3580 FUN_1432c3580 body=96 status=ok
// SIG undefined FUN_1432c3580(void)

ulonglong FUN_1432c3580(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  uVar3 = *puVar2 & 0x7fffffffffffffff;
  if ((longlong)*puVar2 < 0) {
    return uVar3;
  }
  uVar1 = FUN_143305cd0((longlong)puVar2 + 0xc,uVar3);
  if (uVar1 == uVar3) {
    *puVar2 = *puVar2 | 0x8000000000000000;
  }
  return uVar1;
}



// FUNCTION 1432c35f0 FUN_1432c35f0 body=80 status=ok
// SIG undefined FUN_1432c35f0(void)

void FUN_1432c35f0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong local_res8 [4];
  
  local_res8[0] = (longlong)(*param_1 & 0xfffffffffffffffc) + 0xc;
  uVar1 = *(ulonglong *)(*param_1 & 0xfffffffffffffffc);
  if ((longlong)uVar1 < 0) {
    local_res8[0] = local_res8[0] + param_2;
    FUN_143307250(local_res8);
    return;
  }
  FUN_143305e90(param_2,local_res8[0],uVar1 & 0x7fffffffffffffff);
  return;
}



// FUNCTION 1432c3650 FUN_1432c3650 body=111 status=ok
// SIG undefined FUN_1432c3650(void)

void FUN_1432c3650(ulonglong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  local_res8 = (longlong)(*param_1 & 0xfffffffffffffffc) + 0xc;
  uVar1 = (*(ulonglong *)(*param_1 & 0xfffffffffffffffc) & 0x7fffffffffffffff) + local_res8;
  do {
    FUN_143307250(&local_res8);
    param_2 = param_2 + -1;
    if (uVar1 <= local_res8) {
      return;
    }
  } while (-1 < param_2);
  *param_3 = local_res8;
  return;
}



// FUNCTION 1432c36d0 GetNextChar body=30 status=ok
// SIG undefined GetNextChar(void)

void Scaleform::String::GetNextChar(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_143307250(param_2);
  if (iVar1 == 0) {
    *param_2 = *param_2 + -1;
  }
  return;
}



// FUNCTION 1432c3700 FUN_1432c3700 body=290 status=ok
// SIG undefined FUN_1432c3700(void)

void FUN_1432c3700(ulonglong *param_1,undefined4 param_2)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong _Size_00;
  ulonglong *puVar5;
  size_t local_res8;
  undefined1 local_res18 [16];
  
  puVar5 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  _Size_00 = *puVar5 & 0x7fffffffffffffff;
  local_res8 = 0;
  FUN_143307100(local_res18,8,&local_res8,param_2);
  uVar3 = (uint)*param_1 & 3;
  plVar4 = DAT_146b62f28;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      plVar4 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar4 = (longlong *)0x0;
      if (uVar3 == 2) {
        plVar4 = (longlong *)param_1[1];
      }
    }
  }
  _Size = local_res8;
  lVar1 = local_res8 + _Size_00;
  if (lVar1 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    plVar4 = (longlong *)&DAT_1467cd080;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4,lVar1 + 0x10,0);
    *(undefined1 *)((longlong)plVar4 + lVar1 + 0xc) = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = lVar1;
  }
  _guard_xfg_dispatch_icall_nop
            ((undefined *)((longlong)plVar4 + 0xc),(void *)((longlong)puVar5 + 0xc),_Size_00);
  _guard_xfg_dispatch_icall_nop((undefined *)(_Size_00 + 0xc + (longlong)plVar4),local_res18,_Size);
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)plVar4;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar5 + 1,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
  }
  return;
}



// FUNCTION 1432c3830 FUN_1432c3830 body=270 status=ok
// SIG undefined FUN_1432c3830(void)

void FUN_1432c3830(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    puVar6 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
    uVar7 = *puVar6 & 0x7fffffffffffffff;
    lVar2 = FUN_143306490(param_2,param_3);
    uVar5 = (uint)*param_1 & 3;
    plVar3 = DAT_146b62f28;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
      }
      else {
        plVar3 = (longlong *)0x0;
        if (uVar5 == 2) {
          plVar3 = (longlong *)param_1[1];
        }
      }
    }
    uVar4 = FUN_1432c2e40(param_1,plVar3,lVar2 + uVar7,0,(longlong)puVar6 + 0xc,uVar7);
    FUN_143306740(uVar7 + 0xc + uVar4,lVar2 + uVar7 + 1,param_2,param_3);
    *param_1 = (uint)*param_1 & 3 | uVar4;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar6 + 1,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar6);
    }
  }
  return;
}



// FUNCTION 1432c3950 FUN_1432c3950 body=258 status=ok
// SIG undefined FUN_1432c3950(void)

void FUN_1432c3950(ulonglong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_3 == -1) {
      param_3 = -1;
      do {
        param_3 = param_3 + 1;
      } while (*(char *)(param_2 + param_3) != '\0');
    }
    puVar5 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
    uVar3 = *puVar5;
    uVar4 = (uint)*param_1 & 3;
    plVar2 = DAT_146b62f28;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
      }
      else {
        plVar2 = (longlong *)0x0;
        if (uVar4 == 2) {
          plVar2 = (longlong *)param_1[1];
        }
      }
    }
    uVar3 = FUN_1432c2ed0(param_1,plVar2,(uVar3 & 0x7fffffffffffffff) + param_3,0,
                          (longlong)puVar5 + 0xc,uVar3 & 0x7fffffffffffffff,param_2,param_3);
    *param_1 = (uint)*param_1 & 3 | uVar3;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar5 + 1,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar5);
    }
  }
  return;
}



// FUNCTION 1432c3a60 FUN_1432c3a60 body=247 status=ok
// SIG undefined FUN_1432c3a60(void)

void FUN_1432c3a60(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = (uint)*param_1 & 3;
  plVar3 = DAT_146b62f28;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar3 = (longlong *)0x0;
      if (uVar4 == 2) {
        plVar3 = (longlong *)param_1[1];
      }
    }
  }
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    plVar3 = (longlong *)&DAT_1467cd080;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,param_3 + 0x10,0);
    *(undefined1 *)((longlong)plVar3 + param_3 + 0xc) = 0;
    *(undefined4 *)(plVar3 + 1) = 1;
    *plVar3 = param_3;
  }
  (**(code **)(*param_2 + 8))(param_2,(undefined *)((longlong)plVar3 + 0xc),param_3);
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)plVar3;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432c3b60 FUN_1432c3b60 body=245 status=ok
// SIG undefined FUN_1432c3b60(void)

void FUN_1432c3b60(ulonglong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  size_t *psVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar5 = (uint)*param_1 & 3;
  plVar3 = DAT_146b62f28;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar3 = (longlong *)0x0;
      if (uVar5 == 2) {
        plVar3 = (longlong *)param_1[1];
      }
    }
  }
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar4 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar4 = (size_t *)(**(code **)(*plVar3 + 0x50))(plVar3,param_3 + 0x10,0);
    *(undefined1 *)((longlong)psVar4 + param_3 + 0xc) = 0;
    *(undefined4 *)(psVar4 + 1) = 1;
    *psVar4 = param_3;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar4 + 0xc),param_2,param_3);
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)psVar4;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432c3c60 FUN_1432c3c60 body=371 status=ok
// SIG undefined FUN_1432c3c60(void)

void FUN_1432c3c60(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  
  puVar9 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  uVar7 = *puVar9 & 0x7fffffffffffffff;
  uVar8 = *puVar9 & 0x7fffffffffffffff;
  uVar2 = uVar7;
  if ((-1 < (longlong)*puVar9) &&
     (uVar2 = FUN_143305cd0((longlong)puVar9 + 0xc,uVar7), uVar2 == uVar7)) {
    *puVar9 = *puVar9 | 0x8000000000000000;
  }
  if (param_2 < uVar2) {
    if (uVar2 < param_2 + param_3) {
      param_3 = uVar2 - param_2;
    }
    lVar3 = FUN_1433062a0(param_2,(longlong)puVar9 + 0xc,uVar8);
    lVar4 = FUN_1433062a0(param_3,(longlong)puVar9 + lVar3 + 0xc,uVar8 - lVar3);
    uVar2 = *puVar9;
    uVar6 = (uint)*param_1 & 3;
    plVar5 = DAT_146b62f28;
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        plVar5 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
      }
      else {
        plVar5 = (longlong *)0x0;
        if (uVar6 == 2) {
          plVar5 = (longlong *)param_1[1];
        }
      }
    }
    uVar2 = FUN_1432c2ed0(param_1,plVar5,uVar8 - lVar4,uVar2 & 0x8000000000000000,
                          (longlong)puVar9 + 0xc,lVar3,lVar3 + 0xc + *param_1 + lVar4,
                          (uVar8 - lVar4) - lVar3);
    *param_1 = (uint)*param_1 & 3 | uVar2;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar9 + 1,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar9);
    }
  }
  return;
}



// FUNCTION 1432c3de0 FUN_1432c3de0 body=274 status=ok
// SIG undefined FUN_1432c3de0(void)

undefined8 *
FUN_1432c3de0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  puVar5 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  uVar4 = *puVar5 & 0x7fffffffffffffff;
  uVar1 = uVar4;
  if ((-1 < (longlong)*puVar5) &&
     (uVar1 = FUN_143305cd0((longlong)puVar5 + 0xc,uVar4), uVar1 == uVar4)) {
    *puVar5 = *puVar5 | 0x8000000000000000;
  }
  if ((param_3 < uVar1) && (param_3 < param_4)) {
    puVar5 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
    if ((longlong)*puVar5 < 0) {
      FUN_1432c3140(param_2,param_3 + 0xc + (longlong)puVar5,param_4 - param_3);
    }
    else {
      lVar2 = FUN_1433062a0(param_3,(longlong)puVar5 + 0xc,*puVar5 & 0x7fffffffffffffff);
      uVar3 = FUN_1433062a0(param_4 - param_3,(longlong)puVar5 + lVar2 + 0xc,
                            (*puVar5 & 0x7fffffffffffffff) - lVar2);
      FUN_1432c3140(param_2,(longlong)puVar5 + lVar2 + 0xc,uVar3);
    }
  }
  else {
    *param_2 = &DAT_1467cd080;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  }
  return param_2;
}



// FUNCTION 1432c3f00 FUN_1432c3f00 body=241 status=ok
// SIG undefined FUN_1432c3f00(void)

undefined8 * FUN_1432c3f00(ulonglong *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  longlong local_res10;
  undefined1 local_208 [512];
  
  local_res8 = (longlong)(*param_1 & 0xfffffffffffffffc) + 0xc;
  uVar3 = *(ulonglong *)(*param_1 & 0xfffffffffffffffc);
  *param_2 = &DAT_1467cd080;
  uVar3 = (uVar3 & 0x7fffffffffffffff) + local_res8;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  do {
    local_res10 = 0;
    if (uVar3 <= local_res8) {
      return param_2;
    }
    do {
      uVar1 = FUN_143307250(&local_res8);
      uVar2 = FUN_14331b3e0(uVar1);
      FUN_143307100(local_208,0x200,&local_res10,uVar2);
      if (uVar3 <= local_res8) break;
    } while (local_res10 < 0x1f8);
    FUN_1432c3950(param_2,local_208);
  } while( true );
}



// FUNCTION 1432c4000 FUN_1432c4000 body=241 status=ok
// SIG undefined FUN_1432c4000(void)

undefined8 * FUN_1432c4000(ulonglong *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  longlong local_res10;
  undefined1 local_208 [512];
  
  local_res8 = (longlong)(*param_1 & 0xfffffffffffffffc) + 0xc;
  uVar3 = *(ulonglong *)(*param_1 & 0xfffffffffffffffc);
  *param_2 = &DAT_1467cd080;
  uVar3 = (uVar3 & 0x7fffffffffffffff) + local_res8;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  do {
    local_res10 = 0;
    if (uVar3 <= local_res8) {
      return param_2;
    }
    do {
      uVar1 = FUN_143307250(&local_res8);
      uVar2 = FUN_14331b480(uVar1);
      FUN_143307100(local_208,0x200,&local_res10,uVar2);
      if (uVar3 <= local_res8) break;
    } while (local_res10 < 0x1f8);
    FUN_1432c3950(param_2,local_208);
  } while( true );
}



// FUNCTION 1432c4100 FUN_1432c4100 body=302 status=ok
// SIG undefined FUN_1432c4100(void)

ulonglong * FUN_1432c4100(ulonglong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  puVar6 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  uVar5 = *puVar6 & 0x7fffffffffffffff;
  if (param_4 < 0) {
    param_4 = -1;
    do {
      param_4 = param_4 + 1;
    } while (*(char *)(param_2 + param_4) != '\0');
  }
  if (-1 < (longlong)*puVar6) {
    param_3 = FUN_1433062a0(param_3,(longlong)puVar6 + 0xc,uVar5);
  }
  uVar4 = (uint)*param_1 & 3;
  plVar2 = DAT_146b62f28;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar2 = (longlong *)0x0;
      if (uVar4 == 2) {
        plVar2 = (longlong *)param_1[1];
      }
    }
  }
  uVar3 = FUN_1432c2ed0(param_1,plVar2,param_4 + uVar5,0,(longlong)puVar6 + 0xc,param_3,param_2,
                        param_4);
  _guard_xfg_dispatch_icall_nop
            ((void *)(uVar3 + 0xc + param_3 + param_4),(void *)((longlong)puVar6 + param_3 + 0xc),
             uVar5 - param_3);
  *param_1 = (uint)*param_1 & 3 | uVar3;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar6 + 1,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar6);
  }
  return param_1;
}



// FUNCTION 1432c4240 FUN_1432c4240 body=91 status=ok
// SIG undefined FUN_1432c4240(void)

longlong FUN_1432c4240(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong local_res20;
  undefined1 local_18 [16];
  
  local_res20 = 0;
  FUN_143307100(local_18,8,&local_res20,param_2);
  local_18[local_res20] = 0;
  FUN_1432c4100(param_1,local_18,param_3);
  return local_res20;
}



// FUNCTION 1432c42b0 _stricmp body=5 status=ok
// SIG int _stricmp(char * _Str1, char * _Str2)

int __cdecl _stricmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014331b300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _stricmp(_Str1,_Str2);
  return iVar1;
}



// FUNCTION 1432c42c0 FUN_1432c42c0 body=192 status=ok
// SIG undefined FUN_1432c42c0(void)

ulonglong FUN_1432c42c0(char *param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  pcVar3 = param_2;
  lVar6 = param_3;
  if (param_3 == 0) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != '\0');
    return (ulonglong)(uint)-(int)lVar6;
  }
  do {
    iVar5 = (int)*param_1;
    if (iVar5 - 0x41U < 0x1a) {
      iVar5 = iVar5 + 0x20;
    }
    iVar2 = (int)*pcVar3;
    param_1 = param_1 + 1;
    lVar4 = (longlong)iVar5;
    if (iVar2 - 0x41U < 0x1a) {
      iVar2 = iVar2 + 0x20;
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = (longlong)iVar2;
    lVar6 = lVar6 + -1;
    if ((lVar6 == 0) || (iVar5 == 0)) break;
    if (lVar4 != lVar1) goto LAB_1432c4351;
  } while (*pcVar3 != '\0');
  if ((lVar4 == lVar1) && ((lVar6 != 0 || (*pcVar3 != '\0')))) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != '\0');
    return param_3 - lVar6 & 0xffffffff;
  }
LAB_1432c4351:
  return lVar4 - lVar1 & 0xffffffff;
}



// FUNCTION 1432c4390 FUN_1432c4390 body=56 status=ok
// SIG undefined FUN_1432c4390(void)

ulonglong FUN_1432c4390(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  
  while (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + -1 + param_2);
    uVar2 = (uint)bVar1;
    param_2 = param_2 + -1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar2 = bVar1 + 0x20;
    }
    param_3 = param_3 * 0x21 ^ (ulonglong)uVar2;
  }
  return param_3;
}



// FUNCTION 1432c43d0 BernsteinHashFunction body=38 status=ok
// SIG undefined BernsteinHashFunction(void)

ulonglong Scaleform::String::BernsteinHashFunction
                    (longlong param_1,longlong param_2,ulonglong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_3 = param_3 * 0x21 ^ (ulonglong)*(byte *)(param_1 + -1 + param_2);
  }
  return param_3;
}



// FUNCTION 1432c4400 FUN_1432c4400 body=943 status=ok
// SIG undefined FUN_1432c4400(void)

void FUN_1432c4400(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  size_t local_res10;
  undefined1 local_res20 [8];
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined1 local_48;
  longlong *local_40;
  
  plVar2 = DAT_146b62f28;
  lVar4 = 0;
  uVar6 = 0;
  local_40 = DAT_146b62f28;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x200;
  local_48 = 0;
  local_res8 = param_1;
  iVar3 = FUN_143307250(&local_res8);
  uVar1 = 0;
  while (local_res8 < param_1 + param_2) {
    if (iVar3 == 0x3c) {
      uVar5 = uVar1 + 4;
      if (uVar6 <= uVar5) {
        uVar6 = uVar1 + 0x204 & 0xfffffffffffffe00;
        local_58 = uVar6;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar6);
          local_68 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4);
          local_68 = lVar4;
        }
      }
      local_48 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + uVar5) = 0;
      }
      *(undefined4 *)(lVar4 + uVar1) = 0x3b746c26;
      local_60 = uVar5;
    }
    else if (iVar3 == 0x3e) {
      uVar5 = uVar1 + 4;
      if (uVar6 <= uVar5) {
        uVar6 = uVar1 + 0x204 & 0xfffffffffffffe00;
        local_58 = uVar6;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar6);
          local_68 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4);
          local_68 = lVar4;
        }
      }
      local_48 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + uVar5) = 0;
      }
      *(undefined4 *)(lVar4 + uVar1) = 0x3b746726;
      local_60 = uVar5;
    }
    else if (iVar3 == 0x22) {
      uVar5 = uVar1 + 6;
      if (uVar6 <= uVar5) {
        uVar6 = uVar1 + 0x206 & 0xfffffffffffffe00;
        local_58 = uVar6;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar6);
          local_68 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4);
          local_68 = lVar4;
        }
      }
      local_48 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + uVar5) = 0;
      }
      *(undefined4 *)(lVar4 + uVar1) = 0x6f757126;
      *(undefined2 *)(lVar4 + 4 + uVar1) = 0x3b74;
      local_60 = uVar5;
    }
    else if (iVar3 == 0x27) {
      uVar5 = uVar1 + 6;
      if (uVar6 <= uVar5) {
        uVar6 = uVar1 + 0x206 & 0xfffffffffffffe00;
        local_58 = uVar6;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar6);
          local_68 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4);
          local_68 = lVar4;
        }
      }
      local_48 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + uVar5) = 0;
      }
      *(undefined4 *)(lVar4 + uVar1) = 0x6f706126;
      *(undefined2 *)(lVar4 + 4 + uVar1) = 0x3b73;
      local_60 = uVar5;
    }
    else if (iVar3 == 0x26) {
      uVar5 = uVar1 + 5;
      if (uVar6 <= uVar5) {
        uVar6 = uVar1 + 0x205 & 0xfffffffffffffe00;
        local_58 = uVar6;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar6,0);
          local_68 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,uVar6);
          local_68 = lVar4;
        }
      }
      local_48 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + uVar5) = 0;
      }
      *(undefined4 *)(lVar4 + uVar1) = 0x706d6126;
      *(undefined1 *)(lVar4 + 4 + uVar1) = 0x3b;
      local_60 = uVar5;
    }
    else {
      local_res10 = 0;
      FUN_143307100(local_res20,8,&local_res10,iVar3);
      uVar5 = uVar1 + local_res10;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5 + 0x200 & 0xfffffffffffffe00;
        local_58 = uVar6;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar6,0);
          local_68 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,uVar6);
          local_68 = lVar4;
        }
      }
      local_48 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(uVar5 + lVar4) = 0;
      }
      local_60 = uVar5;
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + uVar1),local_res20,local_res10);
    }
    iVar3 = FUN_143307250(&local_res8);
    uVar1 = uVar5;
  }
  FUN_1432c4ec0(param_3,&local_68);
  if (lVar4 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
  }
  return;
}



// FUNCTION 1432c47c0 FUN_1432c47c0 body=1122 status=ok
// SIG undefined FUN_1432c47c0(void)

void FUN_1432c47c0(char *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *_Src;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *local_res8;
  size_t local_res10;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong *local_48;
  
  plVar2 = DAT_146b62f28;
  lVar4 = 0;
  uVar5 = 0;
  local_48 = DAT_146b62f28;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x200;
  local_50 = 0;
  local_res8 = param_1;
  iVar3 = FUN_143307250(&local_res8);
  uVar1 = 0;
  do {
    if (param_1 + param_2 <= local_res8) {
LAB_1432c4bd8:
      FUN_1432c4ec0(param_3,&local_70);
      if (lVar4 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar4);
      }
      return;
    }
    if (iVar3 == 0x26) {
      iVar3 = strncmp(local_res8,"quot;",5);
      if (iVar3 == 0) {
        uVar7 = 0x22;
      }
      else {
        iVar3 = strncmp(local_res8,"apos;",5);
        if (iVar3 != 0) {
          iVar3 = strncmp(local_res8,"amp;",4);
          if (iVar3 == 0) {
            local_res10 = 0;
            FUN_143307100(local_res20,8,&local_res10);
            uVar6 = local_res10 + uVar1;
            if (uVar5 <= uVar6) {
              local_60 = uVar6 + 0x200 & 0xfffffffffffffe00;
              if (lVar4 == 0) {
                lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,local_60,0);
                local_70 = lVar4;
              }
              else {
                lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,local_60);
                local_70 = lVar4;
              }
            }
            local_50 = 0;
            if (lVar4 != 0) {
              *(undefined1 *)(uVar6 + lVar4) = 0;
            }
            local_68 = uVar6;
            _guard_xfg_dispatch_icall_nop((void *)(uVar1 + lVar4),local_res20,local_res10);
            local_res8 = local_res8 + 4;
          }
          else {
            iVar3 = strncmp(local_res8,"lt;",3);
            if (iVar3 == 0) {
              uVar7 = 0x3c;
            }
            else {
              iVar3 = strncmp(local_res8,"gt;",3);
              local_res10 = 0;
              if (iVar3 != 0) {
                FUN_143307100(local_res20,8,&local_res10,0x26);
                uVar6 = uVar1 + local_res10;
                if (uVar5 <= uVar6) {
                  uVar5 = uVar6 + 0x200 & 0xfffffffffffffe00;
                  local_60 = uVar5;
                  if (lVar4 == 0) {
                    lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar5,0);
                    local_70 = lVar4;
                  }
                  else {
                    lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,uVar5);
                    local_70 = lVar4;
                  }
                }
                if (lVar4 != 0) {
                  *(undefined1 *)(uVar6 + lVar4) = 0;
                }
                _Src = local_res20;
                goto LAB_1432c49d7;
              }
              uVar7 = 0x3e;
            }
            local_res10 = 0;
            FUN_143307100(local_res20,8,&local_res10,uVar7);
            uVar6 = local_res10 + uVar1;
            if (uVar5 <= uVar6) {
              local_60 = uVar6 + 0x200 & 0xfffffffffffffe00;
              if (lVar4 == 0) {
                lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,local_60,0);
                local_70 = lVar4;
              }
              else {
                lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,local_60);
                local_70 = lVar4;
              }
            }
            local_50 = 0;
            if (lVar4 != 0) {
              *(undefined1 *)(uVar6 + lVar4) = 0;
            }
            local_68 = uVar6;
            _guard_xfg_dispatch_icall_nop((void *)(uVar1 + lVar4),local_res20,local_res10);
            local_res8 = local_res8 + 3;
          }
          goto LAB_1432c4bd8;
        }
        uVar7 = 0x27;
      }
      local_res10 = 0;
      FUN_143307100(local_res20,8,&local_res10,uVar7);
      uVar6 = local_res10 + uVar1;
      if (uVar5 <= uVar6) {
        local_60 = uVar6 + 0x200 & 0xfffffffffffffe00;
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,local_60,0);
          local_70 = lVar4;
        }
        else {
          lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,local_60);
          local_70 = lVar4;
        }
      }
      local_50 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(uVar6 + lVar4) = 0;
      }
      local_68 = uVar6;
      _guard_xfg_dispatch_icall_nop((void *)(uVar1 + lVar4),local_res20,local_res10);
      local_res8 = local_res8 + 5;
      goto LAB_1432c4bd8;
    }
    local_res10 = 0;
    FUN_143307100(local_78,8,&local_res10);
    uVar6 = uVar1 + local_res10;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6 + 0x200 & 0xfffffffffffffe00;
      local_60 = uVar5;
      if (lVar4 == 0) {
        lVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar5,0);
        local_70 = lVar4;
      }
      else {
        lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar4,uVar5);
        local_70 = lVar4;
      }
    }
    if (lVar4 != 0) {
      *(undefined1 *)(uVar6 + lVar4) = 0;
    }
    _Src = local_78;
LAB_1432c49d7:
    local_50 = 0;
    local_68 = uVar6;
    _guard_xfg_dispatch_icall_nop((void *)(uVar1 + lVar4),_Src,local_res10);
    iVar3 = FUN_143307250(&local_res8);
    uVar1 = uVar6;
  } while( true );
}



// FUNCTION 1432c4c30 operator= body=39 status=ok
// SIG undefined operator=(void)

void Scaleform::String::operator=(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    FUN_1432c3b60();
    return;
  }
  FUN_1432c3b60(param_1,0,0);
  return;
}



// FUNCTION 1432c4c60 FUN_1432c4c60 body=271 status=ok
// SIG undefined FUN_1432c4c60(void)

void FUN_1432c4c60(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong *puVar6;
  
  uVar1 = *param_1;
  plVar3 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_143306490(param_2,0xffffffffffffffff);
  }
  uVar5 = (uint)*param_1 & 3;
  plVar4 = DAT_146b62f28;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      plVar4 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar4 = (longlong *)0x0;
      if (uVar5 == 2) {
        plVar4 = (longlong *)param_1[1];
      }
    }
  }
  if (plVar3 == (longlong *)0x0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    puVar6 = (ulonglong *)&DAT_1467cd080;
  }
  else {
    puVar6 = (ulonglong *)(**(code **)(*plVar4 + 0x50))(plVar4,plVar3 + 2,0);
    ((undefined *)((longlong)puVar6 + 0xc))[(longlong)plVar3] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = (ulonglong)plVar3;
  }
  FUN_143306740((undefined *)((longlong)puVar6 + 0xc),(longlong)plVar3 + 1,param_2,
                0xffffffffffffffff);
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)puVar6;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432c4d80 FUN_1432c4d80 body=313 status=ok
// SIG undefined FUN_1432c4d80(void)

void FUN_1432c4d80(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  uVar5 = (uint)*param_1 & 3;
  plVar3 = DAT_146b62f28;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar3 = (longlong *)0x0;
      if (uVar5 == 2) {
        plVar3 = (longlong *)param_1[1];
      }
    }
  }
  uVar1 = *param_1;
  puVar7 = (ulonglong *)(*param_2 & 0xfffffffffffffffc);
  uVar5 = (uint)*param_2 & 3;
  plVar4 = DAT_146b62f28;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      plVar4 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_2);
    }
    else {
      plVar4 = (longlong *)0x0;
      if (uVar5 == 2) {
        plVar4 = (longlong *)param_2[1];
      }
    }
  }
  if (plVar3 == plVar4) {
    *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)puVar7;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar7 + 1,1);
  }
  else {
    uVar6 = *puVar7 & 0x7fffffffffffffff;
    uVar6 = FUN_1432c2e40(param_1,plVar3,uVar6,*puVar7 & 0x8000000000000000,(longlong)puVar7 + 0xc,
                          uVar6);
    *param_1 = (uint)*param_1 & 3 | uVar6;
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432c4ec0 FUN_1432c4ec0 body=260 status=ok
// SIG undefined FUN_1432c4ec0(void)

void FUN_1432c4ec0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  size_t _Size;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  size_t *psVar5;
  undefined1 *_Src;
  
  uVar1 = *param_1;
  _Size = param_2[1];
  _Src = &DAT_145af3922;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    _Src = (undefined1 *)*param_2;
  }
  uVar4 = (uint)*param_1 & 3;
  plVar3 = DAT_146b62f28;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar3 = (longlong *)0x0;
      if (uVar4 == 2) {
        plVar3 = (longlong *)param_1[1];
      }
    }
  }
  if (_Size == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar5 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar5 = (size_t *)(**(code **)(*plVar3 + 0x50))(plVar3,_Size + 0x10,0);
    *(undefined1 *)((longlong)psVar5 + _Size + 0xc) = 0;
    *(undefined4 *)(psVar5 + 1) = 1;
    *psVar5 = _Size;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar5 + 0xc),_Src,_Size);
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)psVar5;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 1432c4fd0 FUN_1432c4fd0 body=247 status=ok
// SIG undefined FUN_1432c4fd0(void)

void FUN_1432c4fd0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  uVar6 = *param_2;
  puVar8 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
  uVar1 = *puVar8;
  uVar2 = *(ulonglong *)(uVar6 & 0xfffffffffffffffc);
  uVar3 = *puVar8;
  uVar9 = uVar2 & 0x7fffffffffffffff;
  uVar7 = (uint)*param_1 & 3;
  plVar5 = DAT_146b62f28;
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      plVar5 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    else {
      plVar5 = (longlong *)0x0;
      if (uVar7 == 2) {
        plVar5 = (longlong *)param_1[1];
      }
    }
  }
  uVar6 = FUN_1432c2ed0(param_1,plVar5,uVar9 + (uVar1 & 0x7fffffffffffffff),
                        uVar2 & uVar3 & 0x8000000000000000,(longlong)puVar8 + 0xc,
                        uVar1 & 0x7fffffffffffffff,(longlong)(uVar6 & 0xfffffffffffffffc) + 0xc,
                        uVar9);
  *param_1 = (uint)*param_1 & 3 | uVar6;
  iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar8 + 1,0xffffffff);
  if (iVar4 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar8);
  }
  return;
}



// FUNCTION 1432c50d0 FUN_1432c50d0 body=67 status=ok
// SIG undefined FUN_1432c50d0(void)

undefined8 FUN_1432c50d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  FUN_1432c31e0(param_2,param_1);
  puVar1 = &DAT_145af3922;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  FUN_1432c3950(param_2,puVar1,0xffffffffffffffff);
  return param_2;
}



// FUNCTION 1432c5120 TrimQuotes body=52 status=ok
// SIG undefined TrimQuotes(void)

undefined8 FString::TrimQuotes(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1432c31e0(param_2,param_1);
  FUN_1432c4fd0(param_2,param_3);
  return param_2;
}



// FUNCTION 1432c5160 FUN_1432c5160 body=219 status=ok
// SIG undefined FUN_1432c5160(void)

void FUN_1432c5160(ulonglong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar3 = (ulonglong *)(*param_2 & 0xfffffffffffffffc);
  plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  uVar4 = (uint)*param_2 & 3;
  plVar2 = DAT_146b62f28;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_2);
    }
    else {
      plVar2 = (longlong *)0x0;
      if (uVar4 == 2) {
        plVar2 = (longlong *)param_2[1];
      }
    }
  }
  if (plVar2 == plVar1) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar3 + 1,1);
    *param_1 = (ulonglong)puVar3 | 1;
  }
  else {
    uVar5 = *puVar3 & 0x7fffffffffffffff;
    uVar5 = FUN_1432c2e40(param_1,plVar1,uVar5,*puVar3 & 0x8000000000000000,(longlong)puVar3 + 0xc,
                          uVar5);
    *param_1 = uVar5 | 1;
  }
  return;
}



// FUNCTION 1432c5250 FUN_1432c5250 body=49 status=ok
// SIG undefined FUN_1432c5250(void)

undefined8 * FUN_1432c5250(undefined8 *param_1)

{
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  *param_1 = &DAT_1467cd081;
  return param_1;
}



// FUNCTION 1432c5290 FUN_1432c5290 body=175 status=ok
// SIG undefined FUN_1432c5290(void)

ulonglong * FUN_1432c5290(ulonglong *param_1,void *param_2)

{
  longlong *plVar1;
  size_t _Size;
  size_t *psVar2;
  
  if (param_2 == (void *)0x0) {
    _Size = 0;
  }
  else {
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
  }
  plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  if (_Size == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar2 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar2 = (size_t *)(**(code **)(*plVar1 + 0x50))(plVar1,_Size + 0x10,0);
    *(undefined1 *)((longlong)psVar2 + _Size + 0xc) = 0;
    *(undefined4 *)(psVar2 + 1) = 1;
    *psVar2 = _Size;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar2 + 0xc),param_2,_Size);
  *param_1 = (ulonglong)psVar2 | 1;
  return param_1;
}



// FUNCTION 1432c5350 FUN_1432c5350 body=154 status=ok
// SIG undefined FUN_1432c5350(void)

ulonglong * FUN_1432c5350(ulonglong *param_1,void *param_2,size_t param_3)

{
  longlong *plVar1;
  size_t *psVar2;
  
  plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar2 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar2 = (size_t *)(**(code **)(*plVar1 + 0x50))(plVar1,param_3 + 0x10,0);
    *(undefined1 *)((longlong)psVar2 + param_3 + 0xc) = 0;
    *(undefined4 *)(psVar2 + 1) = 1;
    *psVar2 = param_3;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar2 + 0xc),param_2,param_3);
  *param_1 = (ulonglong)psVar2 | 1;
  return param_1;
}



// FUNCTION 1432c53f0 FUN_1432c53f0 body=147 status=ok
// SIG undefined FUN_1432c53f0(void)

ulonglong * FUN_1432c53f0(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  if (param_3 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    plVar1 = (longlong *)&DAT_1467cd080;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x50))(plVar1,param_3 + 0x10,0);
    *(undefined1 *)((longlong)plVar1 + param_3 + 0xc) = 0;
    *(undefined4 *)(plVar1 + 1) = 1;
    *plVar1 = param_3;
  }
  *param_1 = (ulonglong)plVar1 | 1;
  (**(code **)(*param_2 + 8))(param_2,((ulonglong)plVar1 & 0xfffffffffffffffc) + 0xc,param_3);
  return param_1;
}



// FUNCTION 1432c5490 FUN_1432c5490 body=73 status=ok
// SIG undefined FUN_1432c5490(void)

undefined8 * FUN_1432c5490(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_1467cd080;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  if (param_2 != 0) {
    FUN_1432c4c60(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1432c54e0 FUN_1432c54e0 body=216 status=ok
// SIG undefined FUN_1432c54e0(void)

void FUN_1432c54e0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = (ulonglong *)(*param_2 & 0xfffffffffffffffc);
  uVar3 = (uint)*param_2 & 3;
  plVar1 = DAT_146b62f28;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))();
    }
    else {
      plVar1 = (longlong *)0x0;
      if (uVar3 == 2) {
        plVar1 = (longlong *)param_2[1];
      }
    }
  }
  if (param_3 == (longlong *)0x0) {
    param_3 = plVar1;
  }
  param_1[1] = (ulonglong)param_3;
  if (plVar1 != param_3) {
    uVar4 = *puVar2 & 0x7fffffffffffffff;
    uVar4 = FUN_1432c2e40(param_1,param_3,uVar4,*puVar2 & 0x8000000000000000,(longlong)puVar2 + 0xc,
                          uVar4);
    *param_1 = uVar4 | 2;
    return;
  }
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar2 + 1,1);
  *param_1 = (ulonglong)puVar2 | 2;
  return;
}



// FUNCTION 1432c55c0 FUN_1432c55c0 body=53 status=ok
// SIG undefined FUN_1432c55c0(void)

undefined8 * FUN_1432c55c0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  *param_1 = &DAT_1467cd082;
  return param_1;
}



// FUNCTION 1432c5600 FUN_1432c5600 body=176 status=ok
// SIG undefined FUN_1432c5600(void)

ulonglong * FUN_1432c5600(ulonglong *param_1,longlong *param_2,void *param_3)

{
  size_t _Size;
  size_t *psVar1;
  
  if (param_3 == (void *)0x0) {
    _Size = 0;
  }
  else {
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_3 + _Size) != '\0');
  }
  param_1[1] = (ulonglong)param_2;
  if (_Size == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar1 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar1 = (size_t *)(**(code **)(*param_2 + 0x50))(param_2,_Size + 0x10,0);
    *(undefined1 *)((longlong)psVar1 + _Size + 0xc) = 0;
    *(undefined4 *)(psVar1 + 1) = 1;
    *psVar1 = _Size;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar1 + 0xc),param_3,_Size);
  *param_1 = (ulonglong)psVar1 | 2;
  return param_1;
}



// FUNCTION 1432c56c0 FUN_1432c56c0 body=256 status=ok
// SIG undefined FUN_1432c56c0(void)

ulonglong *
FUN_1432c56c0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4,void *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  size_t _Size;
  
  *param_1 = (ulonglong)&DAT_1467cd080;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  _Size = 0xffffffffffffffff;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_3 + lVar3) != '\0');
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_4 + lVar2) != '\0');
  }
  if (param_5 == (void *)0x0) {
    _Size = 0;
  }
  else {
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_5 + _Size) != '\0');
  }
  uVar1 = FUN_1432c2ed0(param_1,param_2,_Size + lVar2 + lVar3,0,param_3,lVar3,param_4,lVar2);
  _guard_xfg_dispatch_icall_nop((void *)(uVar1 + lVar2 + lVar3 + 0xc),param_5,_Size);
  *param_1 = uVar1 | 2;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 1432c57d0 FUN_1432c57d0 body=145 status=ok
// SIG undefined FUN_1432c57d0(void)

ulonglong * FUN_1432c57d0(ulonglong *param_1,longlong *param_2,void *param_3,size_t param_4)

{
  size_t *psVar1;
  
  param_1[1] = (ulonglong)param_2;
  if (param_4 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    psVar1 = (size_t *)&DAT_1467cd080;
  }
  else {
    psVar1 = (size_t *)(**(code **)(*param_2 + 0x50))(param_2,param_4 + 0x10,0);
    *(undefined1 *)((longlong)psVar1 + param_4 + 0xc) = 0;
    *(undefined4 *)(psVar1 + 1) = 1;
    *psVar1 = param_4;
  }
  _guard_xfg_dispatch_icall_nop((undefined *)((longlong)psVar1 + 0xc),param_3,param_4);
  *param_1 = (ulonglong)psVar1 | 2;
  return param_1;
}



// FUNCTION 1432c5870 FUN_1432c5870 body=138 status=ok
// SIG undefined FUN_1432c5870(void)

ulonglong * FUN_1432c5870(ulonglong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  
  param_1[1] = (ulonglong)param_2;
  if (param_4 == 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
    plVar1 = (longlong *)&DAT_1467cd080;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x50))(param_2,param_4 + 0x10,0);
    *(undefined1 *)((longlong)plVar1 + param_4 + 0xc) = 0;
    *(undefined4 *)(plVar1 + 1) = 1;
    *plVar1 = param_4;
  }
  *param_1 = (ulonglong)plVar1 | 2;
  (**(code **)(*param_3 + 8))(param_3,((ulonglong)plVar1 & 0xfffffffffffffffc) + 0xc,param_4);
  return param_1;
}



// FUNCTION 1432c5900 FUN_1432c5900 body=90 status=ok
// SIG undefined FUN_1432c5900(void)

undefined8 * FUN_1432c5900(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = &DAT_1467cd080;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&DAT_1467cd088,1);
  param_1[1] = param_2;
  if (param_3 != 0) {
    FUN_1432c4c60(param_1,param_3);
  }
  return param_1;
}



// FUNCTION 1432c5960 FUN_1432c5960 body=32 status=ok
// SIG undefined FUN_1432c5960(void)

undefined8 * FUN_1432c5960(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  return param_1;
}



// FUNCTION 1432c5990 FUN_1432c5990 body=116 status=ok
// SIG undefined FUN_1432c5990(void)

undefined8 * FUN_1432c5990(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_1[3] = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_3;
  if (param_2 < 0x11) {
    param_1[3] = 0x10;
    return param_1;
  }
  bVar1 = FUN_14207c6a0((int)param_2 + -1);
  uVar2 = 1L << (bVar1 & 0x3f);
  if (uVar2 == param_2) {
    uVar2 = param_2;
  }
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 1432c5a10 FUN_1432c5a10 body=113 status=ok
// SIG undefined FUN_1432c5a10(void)

undefined8 * FUN_1432c5a10(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  size_t _Size;
  undefined1 *_Src;
  
  param_1[3] = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  _Src = &DAT_145af3922;
  if (param_2 != (undefined1 *)0x0) {
    _Src = param_2;
  }
  param_1[2] = 0;
  _Size = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_3;
  do {
    _Size = _Size + 1;
  } while (_Src[_Size] != '\0');
  Scaleform::StringBuffer::Resize(param_1,_Size);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,_Size);
  return param_1;
}



// FUNCTION 1432c5a90 FUN_1432c5a90 body=51 status=ok
// SIG undefined FUN_1432c5a90(void)

undefined8 *
FUN_1432c5a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[3] = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_4;
  Scaleform::StringBuffer::AppendString();
  return param_1;
}



// FUNCTION 1432c5ad0 FUN_1432c5ad0 body=78 status=ok
// SIG undefined FUN_1432c5ad0(void)

undefined8 * FUN_1432c5ad0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  param_1[5] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x200;
  Scaleform::StringBuffer::AppendString
            (param_1,(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
             *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  return param_1;
}



// FUNCTION 1432c5b30 FUN_1432c5b30 body=91 status=ok
// SIG undefined FUN_1432c5b30(void)

undefined8 * FUN_1432c5b30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  param_1[3] = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_3;
  puVar1 = &DAT_145af3922;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  Scaleform::StringBuffer::AppendString(param_1,puVar1,param_2[1]);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1432c5ba0 FUN_1432c5ba0 body=124 status=ok
// SIG undefined FUN_1432c5ba0(void)

undefined8 * FUN_1432c5ba0(undefined8 *param_1,undefined2 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  param_1[3] = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = &DAT_145af7bc0;
  if (param_2 != (undefined2 *)0x0) {
    puVar2 = param_2;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_3;
  lVar1 = FUN_143306490(puVar2,0xffffffffffffffff);
  Scaleform::StringBuffer::Resize(param_1,lVar1);
  FUN_143306740(*param_1,lVar1 + 1,puVar2,0xffffffffffffffff);
  return param_1;
}



// FUNCTION 1432c5c30 ~StringBuffer body=23 status=ok
// SIG undefined ~StringBuffer(void)

void Scaleform::StringBuffer::~StringBuffer(longlong *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432c5c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1432c5c50 FUN_1432c5c50 body=82 status=ok
// SIG undefined FUN_1432c5c50(void)

void FUN_1432c5c50(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x11) {
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    return;
  }
  bVar1 = FUN_14207c6a0((int)param_2 + -1);
  uVar2 = 1L << (bVar1 & 0x3f);
  if (uVar2 == param_2) {
    uVar2 = param_2;
  }
  *(ulonglong *)(param_1 + 0x18) = uVar2;
  return;
}



// FUNCTION 1432c5cb0 FUN_1432c5cb0 body=7 status=ok
// SIG undefined FUN_1432c5cb0(void)

void FUN_1432c5cb0(undefined8 param_1)

{
  Scaleform::StringBuffer::Resize(param_1,0);
  return;
}



// FUNCTION 1432c5cc0 GetLength body=53 status=ok
// SIG undefined GetLength(void)

longlong Scaleform::StringBuffer::GetLength(undefined8 *param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    return param_1[1];
  }
  lVar1 = FUN_143305cd0(*param_1,param_1[1]);
  if (lVar1 == param_1[1]) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return lVar1;
}



// FUNCTION 1432c5d00 Resize body=118 status=ok
// SIG undefined Resize(void)

void Scaleform::StringBuffer::Resize(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((ulonglong)param_1[2] <= param_2) {
    uVar2 = param_2 + param_1[3] & ~(param_1[3] - 1U);
    param_1[2] = uVar2;
    if (*param_1 == 0) {
      lVar1 = (**(code **)(*(longlong *)param_1[5] + 0x50))((longlong *)param_1[5],uVar2,0);
    }
    else {
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar2);
    }
    *param_1 = lVar1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = param_2;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + param_2) = 0;
  }
  return;
}



// FUNCTION 1432c5d80 Reserve body=93 status=ok
// SIG undefined Reserve(void)

void Scaleform::StringBuffer::Reserve(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((ulonglong)param_1[2] <= param_2) {
    uVar2 = param_2 + param_1[3] & ~(param_1[3] - 1U);
    param_1[2] = uVar2;
    if (*param_1 == 0) {
      lVar1 = (**(code **)(*(longlong *)param_1[5] + 0x50))((longlong *)param_1[5],uVar2,0);
      *param_1 = lVar1;
      return;
    }
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar2);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 1432c5df0 FUN_1432c5df0 body=97 status=ok
// SIG undefined FUN_1432c5df0(void)

void FUN_1432c5df0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  size_t local_res8;
  undefined1 local_res18 [16];
  
  lVar1 = param_1[1];
  local_res8 = 0;
  FUN_143307100(local_res18,8,&local_res8,param_2);
  Scaleform::StringBuffer::Resize(param_1,local_res8 + lVar1);
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar1),local_res18,local_res8);
  return;
}



// FUNCTION 1432c5e60 FUN_1432c5e60 body=118 status=ok
// SIG undefined FUN_1432c5e60(void)

void FUN_1432c5e60(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_143306490(param_2,param_3);
    lVar1 = param_1[1];
    Scaleform::StringBuffer::Resize(param_1,lVar1 + lVar2);
    FUN_143306740(*param_1 + lVar1,lVar2 + 1,param_2,param_3);
  }
  return;
}



// FUNCTION 1432c5ee0 AppendString body=110 status=ok
// SIG undefined AppendString(void)

void Scaleform::StringBuffer::AppendString(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    if (param_3 == 0xffffffffffffffff) {
      param_3 = 0xffffffffffffffff;
      do {
        param_3 = param_3 + 1;
      } while (*(char *)((longlong)param_2 + param_3) != '\0');
    }
    lVar1 = param_1[1];
    Resize(param_1,lVar1 + param_3);
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar1),param_2,param_3);
  }
  return;
}



// FUNCTION 1432c5f60 Insert body=238 status=ok
// SIG undefined Insert(void)

void Scaleform::StringBuffer::Insert
               (longlong *param_1,void *param_2,longlong param_3,size_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = param_1[1];
  if ((longlong)param_4 < 0) {
    param_4 = 0xffffffffffffffff;
    do {
      param_4 = param_4 + 1;
    } while (*(char *)((longlong)param_2 + param_4) != '\0');
  }
  if ((char)param_1[4] == '\0') {
    param_3 = FUN_1433062a0(param_3,*param_1,lVar2);
  }
  uVar1 = param_4 + lVar2;
  if ((ulonglong)param_1[2] <= uVar1) {
    uVar4 = param_1[3] + uVar1 & ~(param_1[3] - 1U);
    param_1[2] = uVar4;
    if (*param_1 == 0) {
      lVar3 = (**(code **)(*(longlong *)param_1[5] + 0x50))((longlong *)param_1[5],uVar4,0);
    }
    else {
      lVar3 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,*param_1,uVar4);
    }
    *param_1 = lVar3;
  }
  memmove((void *)(*param_1 + param_3 + param_4),(void *)(*param_1 + param_3),(lVar2 - param_3) + 1)
  ;
  ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + param_3),param_2,param_4);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = uVar1;
  *(undefined1 *)(uVar1 + *param_1) = 0;
  return;
}



// FUNCTION 1432c6060 FUN_1432c6060 body=91 status=ok
// SIG undefined FUN_1432c6060(void)

longlong FUN_1432c6060(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong local_res20;
  undefined1 local_18 [16];
  
  local_res20 = 0;
  FUN_143307100(local_18,8,&local_res20,param_2);
  local_18[local_res20] = 0;
  Scaleform::StringBuffer::Insert(param_1,local_18,param_3);
  return local_res20;
}



// FUNCTION 1432c60d0 operator= body=82 status=ok
// SIG undefined operator=(void)

void Scaleform::StringBuffer::operator=(undefined8 *param_1,undefined1 *param_2)

{
  size_t _Size;
  undefined1 *_Src;
  
  _Src = &DAT_145af3922;
  if (param_2 != (undefined1 *)0x0) {
    _Src = param_2;
  }
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (_Src[_Size] != '\0');
  Resize(param_1,_Size);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,_Size);
  return;
}



// FUNCTION 1432c6130 FUN_1432c6130 body=92 status=ok
// SIG undefined FUN_1432c6130(void)

void FUN_1432c6130(undefined8 *param_1,undefined2 *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  puVar2 = &DAT_145af7bc0;
  if (param_2 != (undefined2 *)0x0) {
    puVar2 = param_2;
  }
  lVar1 = FUN_143306490(puVar2,0xffffffffffffffff);
  Scaleform::StringBuffer::Resize(param_1,lVar1);
  FUN_143306740(*param_1,lVar1 + 1,puVar2,0xffffffffffffffff);
  return;
}



// FUNCTION 1432c61a0 FUN_1432c61a0 body=89 status=ok
// SIG undefined FUN_1432c61a0(void)

void FUN_1432c61a0(undefined8 *param_1,ulonglong *param_2)

{
  Scaleform::StringBuffer::Resize
            (param_1,*(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  _guard_xfg_dispatch_icall_nop
            ((void *)*param_1,(void *)((longlong)(*param_2 & 0xfffffffffffffffc) + 0xc),
             *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  return;
}



// FUNCTION 1432c6200 FUN_1432c6200 body=88 status=ok
// SIG undefined FUN_1432c6200(void)

void FUN_1432c6200(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *_Src;
  
  param_1[5] = param_2[5];
  param_1[3] = param_2[3];
  Scaleform::StringBuffer::Resize(param_1,param_2[1]);
  _Src = &DAT_145af3922;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    _Src = (undefined1 *)*param_2;
  }
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,param_2[1]);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return;
}



// FUNCTION 1432c6260 FUN_1432c6260 body=55 status=ok
// SIG undefined FUN_1432c6260(void)

longlong FUN_1432c6260(longlong *param_1,char param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if ((param_3 == 0xffffffffffffffff) || ((ulonglong)param_1[1] < param_3)) {
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_3 + 1;
  }
  if (lVar1 != 0) {
    do {
      if (*(char *)(*param_1 + -1 + lVar1) == param_2) {
        return lVar1 + -1;
      }
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return -1;
}



// FUNCTION 1432c62a0 FUN_1432c62a0 body=117 status=ok
// SIG undefined FUN_1432c62a0(void)

longlong FUN_1432c62a0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    return -1;
  }
  lVar4 = 0;
  cVar1 = *(char *)*param_2;
  if (param_3 < (ulonglong)param_1[1]) {
    cVar5 = cVar1;
    do {
      if (*(char *)(*param_1 + param_3) == cVar5) {
        if (lVar4 == lVar2 + -1) {
          return param_3 - lVar2;
        }
        lVar3 = lVar4 + 1;
        lVar4 = lVar4 + 1;
        cVar5 = ((char *)*param_2)[lVar3];
      }
      else if (lVar4 != 0) {
        lVar4 = 0;
        cVar5 = cVar1;
      }
      param_3 = param_3 + 1;
    } while (param_3 < (ulonglong)param_1[1]);
  }
  return -1;
}



// FUNCTION 1432c6320 FUN_1432c6320 body=49 status=ok
// SIG undefined FUN_1432c6320(void)

longlong * FUN_1432c6320(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar2 = *param_1;
  if (param_1[1] != 0) {
    do {
      cVar1 = *(char *)(lVar2 + uVar3);
      if ((cVar1 == '\0') || (cVar1 == param_3)) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  param_2[1] = uVar3;
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 1432c63b0 FUN_1432c63b0 body=301 status=ok
// SIG undefined FUN_1432c63b0(void)

ulonglong * FUN_1432c63b0(ulonglong *param_1,ulonglong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  ulonglong local_res18;
  
  local_res8 = *param_1;
  uVar5 = param_1[1] + local_res8;
  uVar4 = local_res8;
  do {
    uVar2 = local_res8;
    bVar1 = false;
    local_res8 = uVar2;
    if (uVar5 <= uVar2) goto LAB_1432c6440;
    iVar3 = FUN_143307250(&local_res8);
    uVar4 = uVar2;
  } while ((((iVar3 == 0x20) || (iVar3 - 9U < 5)) ||
           ((iVar3 - 0x2000U < 0x2a &&
            ((0x30000000fffU >> ((ulonglong)(iVar3 - 0x2000U) & 0x3f) & 1) != 0)))) ||
          ((iVar3 == 0x205f || (iVar3 == 0x3000))));
  bVar1 = true;
LAB_1432c6440:
  uVar2 = local_res8;
  local_res18 = local_res8;
  if ((local_res8 != uVar5) || (bVar1)) {
    while (local_res18 < uVar5) {
      iVar3 = FUN_143307250(&local_res18);
      if ((iVar3 != 0x205f) &&
         ((((0x29 < iVar3 - 0x2000U ||
            ((0x30000000fffU >> ((ulonglong)(iVar3 - 0x2000U) & 0x3f) & 1) == 0)) && (iVar3 != 0x20)
           ) && ((4 < iVar3 - 9U && (iVar3 != 0x3000)))))) {
        uVar2 = local_res18;
      }
    }
    if ((uVar4 == *param_1) && (uVar2 == uVar5)) {
      uVar4 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar4;
    }
    else {
      *param_2 = uVar4;
      param_2[1] = uVar2 - uVar4;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1432c64e0 SetBufferMode body=91 status=ok
// SIG bool SetBufferMode(BufferedFile * this, BufferModeType param_1)

/* protected: bool __cdecl Scaleform::BufferedFile::SetBufferMode(enum
   Scaleform::BufferedFile::BufferModeType) __ptr64 */

bool __thiscall Scaleform::BufferedFile::SetBufferMode(BufferedFile *this,BufferModeType param_1)

{
  char cVar1;
  
                    /* 0x32c64e0  387
                       ?SetBufferMode@BufferedFile@Scaleform@@IEAA_NW4BufferModeType@12@@Z */
  if (*(longlong *)(this + 0x18) == 0) {
    return false;
  }
  if (param_1 != *(BufferModeType *)(this + 0x20)) {
    FlushBuffer(this);
    if (param_1 == 2) {
      if (*(longlong **)(this + 0x10) == (longlong *)0x0) {
        return false;
      }
      cVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x18))();
      if (cVar1 == '\0') {
        return false;
      }
    }
    *(BufferModeType *)(this + 0x20) = param_1;
    *(undefined8 *)(this + 0x24) = 0;
  }
  return true;
}



// FUNCTION 1432c6550 FlushBuffer body=108 status=ok
// SIG void FlushBuffer(BufferedFile * this)

/* protected: void __cdecl Scaleform::BufferedFile::FlushBuffer(void) __ptr64 */

void __thiscall Scaleform::BufferedFile::FlushBuffer(BufferedFile *this)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* 0x32c6550  123  ?FlushBuffer@BufferedFile@Scaleform@@IEAAXXZ */
  if (*(int *)(this + 0x20) == 1) {
    if (*(uint *)(this + 0x24) < *(uint *)(this + 0x28)) {
      uVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x78))
                        (*(longlong **)(this + 0x10),
                         (longlong)(int)(*(uint *)(this + 0x24) - *(uint *)(this + 0x28)),1);
      *(undefined8 *)(this + 0x30) = uVar2;
    }
    *(undefined8 *)(this + 0x24) = 0;
  }
  else if (*(int *)(this + 0x20) == 2) {
    iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x48))
                      (*(longlong **)(this + 0x10),*(undefined8 *)(this + 0x18),
                       *(undefined4 *)(this + 0x24));
    *(longlong *)(this + 0x30) = *(longlong *)(this + 0x30) + (longlong)iVar1;
    *(undefined4 *)(this + 0x24) = 0;
    return;
  }
  return;
}



// FUNCTION 1432c65d0 LoadBuffer body=58 status=ok
// SIG void LoadBuffer(BufferedFile * this)

/* protected: void __cdecl Scaleform::BufferedFile::LoadBuffer(void) __ptr64 */

void __thiscall Scaleform::BufferedFile::LoadBuffer(BufferedFile *this)

{
  uint uVar1;
  ulonglong uVar2;
  
                    /* 0x32c65d0  263  ?LoadBuffer@BufferedFile@Scaleform@@IEAAXXZ */
  if (*(int *)(this + 0x20) == 1) {
    uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x50))
                      (*(longlong **)(this + 0x10),*(undefined8 *)(this + 0x18),0x1ff8);
    *(undefined4 *)(this + 0x24) = 0;
    uVar2 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
      uVar2 = 0;
    }
    *(ulonglong *)(this + 0x30) = *(longlong *)(this + 0x30) + uVar2;
    *(int *)(this + 0x28) = (int)uVar2;
  }
  return;
}



// FUNCTION 1432c6610 BufferedFile body=106 status=ok
// SIG undefined BufferedFile(BufferedFile * this)

/* protected: __cdecl Scaleform::BufferedFile::BufferedFile(void) __ptr64 */

BufferedFile * __thiscall Scaleform::BufferedFile::BufferedFile(BufferedFile *this)

{
  undefined8 uVar1;
  
                    /* 0x32c6610  1  ??0BufferedFile@Scaleform@@IEAA@XZ */
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_144f70a50;
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_145af7c68;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x48))(DAT_146b62f28,0x1ff8,1,0);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}



// FUNCTION 1432c6680 BufferedFile body=147 status=ok
// SIG undefined BufferedFile(BufferedFile * this, File * param_1)

/* public: __cdecl Scaleform::BufferedFile::BufferedFile(class Scaleform::File * __ptr64) __ptr64 */

BufferedFile * __thiscall Scaleform::BufferedFile::BufferedFile(BufferedFile *this,File *param_1)

{
  undefined8 uVar1;
  
                    /* 0x32c6680  2  ??0BufferedFile@Scaleform@@QEAA@PEAVFile@1@@Z */
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_144f70a50;
  *(undefined ***)this = &PTR_FUN_145af7bc8;
  *(undefined4 *)(this + 8) = 1;
  if (param_1 != (File *)0x0) {
    RefCountImpl::AddRef((RefCountImpl *)param_1);
  }
  *(File **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_145af7c68;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x48))(DAT_146b62f28,0x1ff8,1);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x24) = 0;
  return this;
}



// FUNCTION 1432c6720 ~BufferedFile body=80 status=ok
// SIG void ~BufferedFile(BufferedFile * this)

/* public: virtual __cdecl Scaleform::BufferedFile::~BufferedFile(void) __ptr64 */

void __thiscall Scaleform::BufferedFile::~BufferedFile(BufferedFile *this)

{
                    /* 0x32c6720  24  ??1BufferedFile@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145af7c68;
  if (*(longlong *)(this + 0x10) != 0) {
    FlushBuffer(this);
  }
  if (*(longlong *)(this + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(RefCountImpl **)(this + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x10));
  }
  RefCountImplCore::~RefCountImplCore((RefCountImplCore *)this);
  return;
}



// FUNCTION 1432c6780 Tell body=63 status=ok
// SIG int Tell(BufferedFile * this)

/* public: virtual int __cdecl Scaleform::BufferedFile::Tell(void) __ptr64 */

int __thiscall Scaleform::BufferedFile::Tell(BufferedFile *this)

{
  int iVar1;
  
                    /* 0x32c6780  477  ?Tell@BufferedFile@Scaleform@@UEAAHXZ */
  if (*(int *)(this + 0x20) == 1) {
    return (*(int *)(this + 0x24) - *(int *)(this + 0x28)) + *(int *)(this + 0x30);
  }
  iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x20))();
  if ((iVar1 != -1) && (*(int *)(this + 0x20) == 2)) {
    iVar1 = iVar1 + *(int *)(this + 0x24);
  }
  return iVar1;
}



// FUNCTION 1432c67d0 LTell body=68 status=ok
// SIG __int64 LTell(BufferedFile * this)

/* public: virtual __int64 __cdecl Scaleform::BufferedFile::LTell(void) __ptr64 */

__int64 __thiscall Scaleform::BufferedFile::LTell(BufferedFile *this)

{
  __int64 _Var1;
  
                    /* 0x32c67d0  252  ?LTell@BufferedFile@Scaleform@@UEAA_JXZ */
  if (*(int *)(this + 0x20) == 1) {
    return ((ulonglong)*(uint *)(this + 0x24) - (ulonglong)*(uint *)(this + 0x28)) +
           *(longlong *)(this + 0x30);
  }
  _Var1 = (**(code **)(**(longlong **)(this + 0x10) + 0x28))();
  if ((_Var1 != -1) && (*(int *)(this + 0x20) == 2)) {
    _Var1 = _Var1 + (ulonglong)*(uint *)(this + 0x24);
  }
  return _Var1;
}



// FUNCTION 1432c6820 GetLength body=67 status=ok
// SIG int GetLength(BufferedFile * this)

/* public: virtual int __cdecl Scaleform::BufferedFile::GetLength(void) __ptr64 */

int __thiscall Scaleform::BufferedFile::GetLength(BufferedFile *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x32c6820  172  ?GetLength@BufferedFile@Scaleform@@UEAAHXZ */
  iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x30))();
  if ((iVar1 != -1) && (*(int *)(this + 0x20) == 2)) {
    iVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x20))();
    if (iVar1 < iVar2 + *(int *)(this + 0x24)) {
      iVar1 = iVar2 + *(int *)(this + 0x24);
    }
  }
  return iVar1;
}



// FUNCTION 1432c6870 LGetLength body=75 status=ok
// SIG __int64 LGetLength(BufferedFile * this)

/* public: virtual __int64 __cdecl Scaleform::BufferedFile::LGetLength(void) __ptr64 */

__int64 __thiscall Scaleform::BufferedFile::LGetLength(BufferedFile *this)

{
  longlong lVar1;
  longlong lVar2;
  
                    /* 0x32c6870  250  ?LGetLength@BufferedFile@Scaleform@@UEAA_JXZ */
  lVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x38))();
  if ((lVar1 != -1) && (*(int *)(this + 0x20) == 2)) {
    lVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x28))();
    if (lVar1 < (longlong)(lVar2 + (ulonglong)*(uint *)(this + 0x24))) {
      lVar1 = lVar2 + (ulonglong)*(uint *)(this + 0x24);
    }
  }
  return lVar1;
}



// FUNCTION 1432c68d0 Write body=258 status=ok
// SIG int Write(BufferedFile * this, uchar * param_1, int param_2)

/* public: virtual int __cdecl Scaleform::BufferedFile::Write(unsigned char const * __ptr64,int)
   __ptr64 */

int __thiscall Scaleform::BufferedFile::Write(BufferedFile *this,uchar *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
                    /* 0x32c68d0  524  ?Write@BufferedFile@Scaleform@@UEAAHPEBEH@Z */
  if (*(int *)(this + 0x20) == 2) {
LAB_1432c6922:
    uVar1 = *(uint *)(this + 0x24);
    if ((int)(0x1ff8 - uVar1) < param_2) {
      if (*(int *)(this + 0x20) == 1) {
        if (uVar1 < *(uint *)(this + 0x28)) {
          uVar4 = (**(code **)(**(longlong **)(this + 0x10) + 0x78))
                            (*(longlong **)(this + 0x10),
                             (longlong)(int)(uVar1 - *(uint *)(this + 0x28)),1);
          *(undefined8 *)(this + 0x30) = uVar4;
        }
        *(undefined8 *)(this + 0x24) = 0;
      }
      else if (*(int *)(this + 0x20) == 2) {
        iVar3 = (**(code **)(**(longlong **)(this + 0x10) + 0x48))
                          (*(longlong **)(this + 0x10),*(undefined8 *)(this + 0x18),uVar1);
        *(longlong *)(this + 0x30) = *(longlong *)(this + 0x30) + (longlong)iVar3;
        *(undefined4 *)(this + 0x24) = 0;
      }
      if (0x1000 < param_2) goto LAB_1432c6989;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)*(uint *)(this + 0x24) + *(longlong *)(this + 0x18)),param_1,
               (longlong)param_2);
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + param_2;
  }
  else {
    if (*(longlong *)(this + 0x18) != 0) {
      FlushBuffer(this);
      if (*(longlong **)(this + 0x10) != (longlong *)0x0) {
        cVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x18))();
        if (cVar2 != '\0') {
          *(undefined8 *)(this + 0x20) = 2;
          *(undefined4 *)(this + 0x28) = 0;
          goto LAB_1432c6922;
        }
      }
    }
LAB_1432c6989:
    param_2 = (**(code **)(**(longlong **)(this + 0x10) + 0x48))
                        (*(longlong **)(this + 0x10),param_1,param_2);
    if (0 < param_2) {
      *(longlong *)(this + 0x30) = *(longlong *)(this + 0x30) + (longlong)param_2;
    }
  }
  return param_2;
}



// FUNCTION 1432c69e0 Read body=323 status=ok
// SIG int Read(BufferedFile * this, uchar * param_1, int param_2)

/* public: virtual int __cdecl Scaleform::BufferedFile::Read(unsigned char * __ptr64,int) __ptr64 */

int __thiscall Scaleform::BufferedFile::Read(BufferedFile *this,uchar *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  
                    /* 0x32c69e0  342  ?Read@BufferedFile@Scaleform@@UEAAHPEAEH@Z */
  if (*(int *)(this + 0x20) != 1) {
    if (*(longlong *)(this + 0x18) == 0) {
      iVar3 = (**(code **)(**(longlong **)(this + 0x10) + 0x50))
                        (*(longlong **)(this + 0x10),param_1,param_2);
      if (iVar3 < 1) {
        return iVar3;
      }
      *(longlong *)(this + 0x30) = *(longlong *)(this + 0x30) + (longlong)iVar3;
      return iVar3;
    }
    FlushBuffer(this);
    *(undefined8 *)(this + 0x20) = 1;
    *(undefined4 *)(this + 0x28) = 0;
  }
  _Src = (void *)((ulonglong)*(uint *)(this + 0x24) + *(longlong *)(this + 0x18));
  iVar3 = *(int *)(this + 0x28) - *(uint *)(this + 0x24);
  if (iVar3 < param_2) {
    ::_guard_xfg_dispatch_icall_nop(param_1,_Src,(longlong)iVar3);
    param_2 = param_2 - iVar3;
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x28);
    if (0x1000 < param_2) {
      iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x50))
                        (*(longlong **)(this + 0x10),param_1 + iVar3,param_2);
      if (0 < iVar1) {
        *(longlong *)(this + 0x30) = *(longlong *)(this + 0x30) + (longlong)iVar1;
        *(undefined8 *)(this + 0x24) = 0;
      }
      if (iVar1 == -1) {
        iVar1 = 0;
      }
      return iVar1 + iVar3;
    }
    if (*(int *)(this + 0x20) == 1) {
      uVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x50))
                        (*(longlong **)(this + 0x10),*(undefined8 *)(this + 0x18),0x1ff8);
      *(undefined4 *)(this + 0x24) = 0;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      *(ulonglong *)(this + 0x30) = *(longlong *)(this + 0x30) + (ulonglong)uVar2;
      *(uint *)(this + 0x28) = uVar2;
    }
    iVar1 = *(int *)(this + 0x28) - *(uint *)(this + 0x24);
    if (iVar1 < param_2) {
      param_2 = iVar1;
    }
    ::_guard_xfg_dispatch_icall_nop
              (param_1 + iVar3,
               (void *)((ulonglong)*(uint *)(this + 0x24) + *(longlong *)(this + 0x18)),
               (longlong)param_2);
    iVar3 = iVar3 + param_2;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(param_1,_Src,(longlong)param_2);
    iVar3 = param_2;
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + param_2;
  return iVar3;
}



// FUNCTION 1432c6b30 SkipBytes body=110 status=ok
// SIG int SkipBytes(BufferedFile * this, int param_1)

/* public: virtual int __cdecl Scaleform::BufferedFile::SkipBytes(int) __ptr64 */

int __thiscall Scaleform::BufferedFile::SkipBytes(BufferedFile *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x32c6b30  461  ?SkipBytes@BufferedFile@Scaleform@@UEAAHH@Z */
  iVar2 = 0;
  if (*(int *)(this + 0x20) == 1) {
    iVar2 = *(int *)(this + 0x28) - *(int *)(this + 0x24);
    if (param_1 <= iVar2) {
      iVar2 = param_1;
    }
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + iVar2;
    param_1 = param_1 - iVar2;
  }
  if (param_1 != 0) {
    iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x58))();
    if (iVar1 != -1) {
      *(undefined8 *)(this + 0x24) = 0;
      *(longlong *)(this + 0x30) = *(longlong *)(this + 0x30) + (longlong)iVar1;
      return iVar2 + iVar1;
    }
    if (iVar2 < 1) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



// FUNCTION 1432c6bb0 BytesAvailable body=78 status=ok
// SIG int BytesAvailable(BufferedFile * this)

/* public: virtual int __cdecl Scaleform::BufferedFile::BytesAvailable(void) __ptr64 */

int __thiscall Scaleform::BufferedFile::BytesAvailable(BufferedFile *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x32c6bb0  74  ?BytesAvailable@BufferedFile@Scaleform@@UEAAHXZ */
  iVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x60))();
  if (*(int *)(this + 0x20) == 1) {
    return (*(int *)(this + 0x28) - *(int *)(this + 0x24)) + iVar1;
  }
  if (*(int *)(this + 0x20) == 2) {
    iVar2 = 0;
    if (-1 < iVar1 - *(int *)(this + 0x24)) {
      iVar2 = iVar1 - *(int *)(this + 0x24);
    }
    return iVar2;
  }
  return iVar1;
}



// FUNCTION 1432c6c10 Flush body=30 status=ok
// SIG bool Flush(BufferedFile * this)

/* public: virtual bool __cdecl Scaleform::BufferedFile::Flush(void) __ptr64 */

bool __thiscall Scaleform::BufferedFile::Flush(BufferedFile *this)

{
  undefined1 uVar1;
  
                    /* 0x32c6c10  121  ?Flush@BufferedFile@Scaleform@@UEAA_NXZ */
  FlushBuffer(this);
                    /* WARNING: Could not recover jumptable at 0x0001432c6c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x68))();
  return (bool)uVar1;
}



// FUNCTION 1432c6c40 Seek body=201 status=ok
// SIG int Seek(BufferedFile * this, int param_1, int param_2)

/* public: virtual int __cdecl Scaleform::BufferedFile::Seek(int,int) __ptr64 */

int __thiscall Scaleform::BufferedFile::Seek(BufferedFile *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
                    /* 0x32c6c40  377  ?Seek@BufferedFile@Scaleform@@UEAAHHH@Z */
  uVar4 = (ulonglong)(uint)param_1;
  if (*(int *)(this + 0x20) == 1) {
    if (param_2 == 1) {
      iVar2 = *(int *)(this + 0x24);
      uVar1 = *(uint *)(this + 0x28);
      uVar3 = iVar2 + param_1;
      if (uVar3 <= uVar1) {
        *(uint *)(this + 0x24) = uVar3;
        return ((int)*(undefined8 *)(this + 0x30) - uVar1) + uVar3;
      }
      *(undefined8 *)(this + 0x24) = 0;
      param_2 = 0;
      uVar4 = (ulonglong)(param_1 + (*(int *)(this + 0x30) - uVar1) + iVar2);
      goto LAB_1432c6ce1;
    }
    if (param_2 == 0) {
      uVar1 = *(uint *)(this + 0x28);
      if ((uVar4 - *(longlong *)(this + 0x30)) + (ulonglong)uVar1 <= (ulonglong)uVar1) {
        *(uint *)(this + 0x24) = (uVar1 - *(int *)(this + 0x30)) + param_1;
        return param_1;
      }
      *(undefined8 *)(this + 0x24) = 0;
      goto LAB_1432c6ce1;
    }
  }
  FlushBuffer(this);
LAB_1432c6ce1:
  iVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x70))
                    (*(longlong **)(this + 0x10),uVar4,param_2);
  *(longlong *)(this + 0x30) = (longlong)iVar2;
  return iVar2;
}



// FUNCTION 1432c6d10 LSeek body=208 status=ok
// SIG __int64 LSeek(BufferedFile * this, __int64 param_1, int param_2)

/* public: virtual __int64 __cdecl Scaleform::BufferedFile::LSeek(__int64,int) __ptr64 */

__int64 __thiscall Scaleform::BufferedFile::LSeek(BufferedFile *this,__int64 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  __int64 _Var3;
  uint uVar4;
  
                    /* 0x32c6d10  251  ?LSeek@BufferedFile@Scaleform@@UEAA_J_JH@Z */
  if (*(int *)(this + 0x20) == 1) {
    if (param_2 == 1) {
      uVar1 = *(uint *)(this + 0x24);
      uVar2 = *(uint *)(this + 0x28);
      uVar4 = (int)param_1 + uVar1;
      if (uVar4 <= uVar2) {
        *(uint *)(this + 0x24) = uVar4;
        return (*(longlong *)(this + 0x30) - (ulonglong)uVar2) + (ulonglong)uVar4;
      }
      param_2 = 0;
      *(undefined8 *)(this + 0x24) = 0;
      param_1 = param_1 + (ulonglong)uVar1 + (*(longlong *)(this + 0x30) - (ulonglong)uVar2);
      goto LAB_1432c6dbc;
    }
    if (param_2 == 0) {
      uVar1 = *(uint *)(this + 0x28);
      if (((ulonglong)uVar1 - *(longlong *)(this + 0x30)) + param_1 <= (ulonglong)uVar1) {
        *(uint *)(this + 0x24) = (uVar1 - *(int *)(this + 0x30)) + (int)param_1;
        return param_1;
      }
      *(undefined8 *)(this + 0x24) = 0;
      goto LAB_1432c6dbc;
    }
  }
  FlushBuffer(this);
LAB_1432c6dbc:
  _Var3 = (**(code **)(**(longlong **)(this + 0x10) + 0x78))
                    (*(longlong **)(this + 0x10),param_1,param_2);
  *(__int64 *)(this + 0x30) = _Var3;
  return _Var3;
}



// FUNCTION 1432c6df0 ChangeSize body=46 status=ok
// SIG bool ChangeSize(BufferedFile * this, int param_1)

/* public: virtual bool __cdecl Scaleform::BufferedFile::ChangeSize(int) __ptr64 */

bool __thiscall Scaleform::BufferedFile::ChangeSize(BufferedFile *this,int param_1)

{
  undefined1 uVar1;
  
                    /* 0x32c6df0  87  ?ChangeSize@BufferedFile@Scaleform@@UEAA_NH@Z */
  FlushBuffer(this);
                    /* WARNING: Could not recover jumptable at 0x0001432c6e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x88))(*(longlong **)(this + 0x10),param_1);
  return (bool)uVar1;
}



// FUNCTION 1432c6e30 CopyFromStream body=168 status=ok
// SIG int CopyFromStream(BufferedFile * this, File * param_1, int param_2)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* public: virtual int __cdecl Scaleform::BufferedFile::CopyFromStream(class Scaleform::File *
   __ptr64,int) __ptr64 */

int __thiscall Scaleform::BufferedFile::CopyFromStream(BufferedFile *this,File *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4018 [16376];
  undefined8 uStack_20;
  
                    /* 0x32c6e30  98  ?CopyFromStream@BufferedFile@Scaleform@@UEAAHPEAVFile@2@H@Z */
  uStack_20 = 0x1432c6e44;
  iVar4 = 0;
  do {
    if (param_2 == 0) {
      return iVar4;
    }
    iVar3 = param_2;
    if (0x4000 < param_2) {
      iVar3 = 0x4000;
    }
    iVar1 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1,local_4018,iVar3);
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = (**(code **)(*(longlong *)this + 0x48))(this,local_4018);
    }
    iVar4 = iVar4 + iVar2;
    param_2 = param_2 - iVar2;
  } while (iVar3 <= iVar2);
  return iVar4;
}



// FUNCTION 1432c6ee0 Close body=75 status=ok
// SIG bool Close(BufferedFile * this)

/* public: virtual bool __cdecl Scaleform::BufferedFile::Close(void) __ptr64 */

bool __thiscall Scaleform::BufferedFile::Close(BufferedFile *this)

{
  undefined1 uVar1;
  
                    /* 0x32c6ee0  92  ?Close@BufferedFile@Scaleform@@UEAA_NXZ */
  if (*(int *)(this + 0x20) == 1) {
    *(undefined4 *)(this + 0x20) = 0;
  }
  else if (*(int *)(this + 0x20) == 2) {
    FlushBuffer(this);
                    /* WARNING: Could not recover jumptable at 0x0001432c6f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x98))();
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432c6f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x98))();
  return (bool)uVar1;
}



// FUNCTION 1432c6f40 FUN_1432c6f40 body=64 status=ok
// SIG undefined FUN_1432c6f40(void)

char * FUN_1432c6f40(char *param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != '\0');
  if (lVar1 != 0) {
    pcVar2 = param_1 + lVar1;
    do {
      if ((*pcVar2 == '\\') || (*pcVar2 == '/')) {
        return pcVar2 + 1;
      }
      pcVar2 = pcVar2 + -1;
    } while (pcVar2 != param_1);
  }
  return param_1;
}



// FUNCTION 1432c6f90 FUN_1432c6f90 body=154 status=ok
// SIG undefined FUN_1432c6f90(void)

void FUN_1432c6f90(ulonglong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int _Val;
  undefined1 local_38 [48];
  
  FUN_1432c5960(local_38,DAT_146b62f28);
  uVar4 = 0;
  lVar1 = FUN_1432c3580(param_1);
  if (lVar1 != 0) {
    do {
      _Val = (int)*(char *)((*param_1 & 0xfffffffffffffffc) + 0xc + uVar4);
      pcVar2 = strchr("/\\",_Val);
      if (pcVar2 != (char *)0x0) {
        _Val = 0x5c;
      }
      FUN_1432c5df0(local_38,_Val);
      uVar4 = uVar4 + 1;
      uVar3 = FUN_1432c3580(param_1);
    } while (uVar4 < uVar3);
  }
  FUN_1432c4ec0(param_1,local_38);
  Scaleform::StringBuffer::~StringBuffer(local_38);
  return;
}



// FUNCTION 1432c7030 FUN_1432c7030 body=409 status=ok
// SIG undefined FUN_1432c7030(void)

BufferedFile * FUN_1432c7030(BufferedFile *param_1,uint param_2)

{
  BufferedFile *pBVar1;
  longlong *plVar2;
  BufferedFile *pBVar3;
  int iVar4;
  undefined8 uVar5;
  RefCountImplCore *this;
  longlong lVar6;
  
  if ((param_2 & 2) != 0) {
    lVar6 = *(longlong *)(param_1 + -8);
    pBVar1 = param_1 + -8;
    pBVar3 = param_1 + lVar6 * 0x38;
    while (lVar6 != 0) {
      plVar2 = *(longlong **)(pBVar3 + -0x28);
      this = (RefCountImplCore *)(pBVar3 + -0x38);
      lVar6 = lVar6 + -1;
      *(undefined ***)this = &PTR_FUN_145af7c68;
      if (plVar2 != (longlong *)0x0) {
        if (*(int *)(pBVar3 + -0x18) == 1) {
          if (*(uint *)(pBVar3 + -0x14) < *(uint *)(pBVar3 + -0x10)) {
            uVar5 = (**(code **)(*plVar2 + 0x78))
                              (plVar2,(longlong)
                                      (int)(*(uint *)(pBVar3 + -0x14) - *(uint *)(pBVar3 + -0x10)),1
                              );
            *(undefined8 *)(pBVar3 + -8) = uVar5;
          }
          *(undefined8 *)(pBVar3 + -0x14) = 0;
        }
        else if (*(int *)(pBVar3 + -0x18) == 2) {
          iVar4 = (**(code **)(*plVar2 + 0x48))
                            (plVar2,*(undefined8 *)(pBVar3 + -0x20),*(undefined4 *)(pBVar3 + -0x14))
          ;
          *(longlong *)(pBVar3 + -8) = *(longlong *)(pBVar3 + -8) + (longlong)iVar4;
          *(undefined4 *)(pBVar3 + -0x14) = 0;
        }
      }
      if (*(longlong *)(pBVar3 + -0x20) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      if (*(RefCountImpl **)(pBVar3 + -0x28) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pBVar3 + -0x28));
      }
      Scaleform::RefCountImplCore::~RefCountImplCore(this);
      pBVar3 = (BufferedFile *)this;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(pBVar1,*(longlong *)pBVar1 * 0x38 + 8);
    }
    return pBVar1;
  }
  *(undefined ***)param_1 = &PTR_FUN_145af7c68;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    Scaleform::BufferedFile::FlushBuffer(param_1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432c71d0 FUN_1432c71d0 body=106 status=ok
// SIG undefined FUN_1432c71d0(void)

RefCountImplCore * FUN_1432c71d0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432c72a0 IsValid body=37 status=ok
// SIG undefined IsValid(void)

undefined8 Scaleform::DelegatedFile::IsValid(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1432c7320 ImageSize_RoundUpPow2 body=54 status=ok
// SIG undefined ImageSize_RoundUpPow2(void)

uint * Scaleform::Render::ImageSize_RoundUpPow2(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  *param_1 = 1;
  param_1[1] = 1;
  uVar1 = 1;
  if (1 < *param_2) {
    do {
      uVar1 = uVar1 * 2;
    } while (uVar1 < *param_2);
    *param_1 = uVar1;
  }
  if (1 < param_2[1]) {
    do {
      uVar2 = uVar2 * 2;
    } while (uVar2 < param_2[1]);
    param_1[1] = uVar2;
  }
  return param_1;
}



// FUNCTION 1432c73a0 ImageSize_MipLevelCount body=61 status=ok
// SIG undefined ImageSize_MipLevelCount(void)

int Scaleform::Render::ImageSize_MipLevelCount(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 1;
  uVar1 = *param_1;
  while ((1 < uVar1 && (1 < param_1[1]))) {
    uVar1 = *param_1 >> 1;
    if (*param_1 >> 1 == 0) {
      uVar1 = 1;
    }
    uVar3 = param_1[1] >> 1;
    *param_1 = uVar1;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    iVar2 = iVar2 + 1;
    param_1[1] = uVar3;
  }
  return iVar2;
}



// FUNCTION 1432c73f0 FUN_1432c73f0 body=391 status=ok
// SIG undefined FUN_1432c73f0(void)

void FUN_1432c73f0(uint *param_1,uint param_2,int param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int local_res18;
  longlong local_res20;
  
  *param_4 = *param_1;
  uVar8 = param_1[1];
  param_4[1] = uVar8;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_1 + 4);
  lVar11 = *(longlong *)(param_1 + 6);
  lVar4 = 0;
  *(longlong *)(param_4 + 6) = lVar11;
  local_res20 = 0;
  if (param_3 != 0) {
    uVar10 = 1;
    uVar9 = param_2 & 0xfff;
    local_res18 = param_3;
    do {
      uVar1 = *param_4;
      if ((uVar9 - 0x32 < 4) || (uVar9 - 0x3f < 3)) {
        if ((uVar9 == 0x32) || (uVar3 = 2, uVar9 == 0x3f)) {
          uVar3 = uVar10;
        }
        if ((param_2 & 0xf000) == 0xa000) {
          uVar6 = uVar1 + 0x1f >> 5;
          uVar2 = uVar8 + 0x1f >> 5;
          if (uVar2 == 0) {
            uVar2 = uVar10;
          }
          if (uVar6 == 0) {
            uVar6 = uVar10;
          }
          uVar3 = uVar2 * uVar6 * uVar3 * 0x200;
        }
        else {
          uVar6 = uVar1 + 3 >> 2;
          uVar2 = uVar8 + 3 >> 2;
          if (uVar2 == 0) {
            uVar2 = uVar10;
          }
          if (uVar6 == 0) {
            uVar6 = uVar10;
          }
          uVar3 = uVar6 * uVar2 * uVar3 * 8;
        }
        uVar7 = (ulonglong)uVar3;
      }
      else {
        lVar4 = FUN_1432c8830(param_2,uVar1,param_5);
        uVar7 = lVar4 * (ulonglong)uVar8;
      }
      lVar11 = lVar11 + uVar7;
      uVar3 = uVar1 >> 1;
      if (uVar1 >> 1 == 0) {
        uVar3 = uVar10;
      }
      uVar8 = uVar8 >> 1;
      *param_4 = uVar3;
      if (uVar8 == 0) {
        uVar8 = uVar10;
      }
      uVar5 = FUN_1432c8830(param_2,uVar3,param_5);
      lVar4 = local_res20 + uVar7;
      local_res18 = local_res18 + -1;
      local_res20 = lVar4;
    } while (local_res18 != 0);
    param_4[1] = uVar8;
    *(undefined8 *)(param_4 + 2) = uVar5;
    *(longlong *)(param_4 + 6) = lVar11;
  }
  *(longlong *)(param_4 + 4) = *(longlong *)(param_1 + 4) - lVar4;
  return;
}



// FUNCTION 1432c7580 FUN_1432c7580 body=117 status=ok
// SIG undefined FUN_1432c7580(void)

undefined4 * FUN_1432c7580(uint param_1,undefined1 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == (longlong *)0x0) {
    param_3 = DAT_146b62f28;
  }
  puVar1 = (undefined4 *)
           (**(code **)(*param_3 + 0x50))(param_3,(ulonglong)(param_1 - 1) * 4 + 0xc,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(short *)(puVar1 + 1) = (short)param_1;
    *(undefined1 *)((longlong)puVar1 + 6) = param_2;
    _guard_xfg_dispatch_icall_nop(puVar1 + 2,0,(ulonglong)param_1 << 2);
  }
  return puVar1;
}



// FUNCTION 1432c7600 FUN_1432c7600 body=264 status=ok
// SIG undefined FUN_1432c7600(void)

ulonglong FUN_1432c7600(uint *param_1,uint param_2,int param_3,char param_4)

{
  longlong *plVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_2 & 0xfff;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else if (uVar2 == 0x42) {
    iVar4 = 2;
  }
  else if (uVar2 == 200) {
    iVar4 = 3;
  }
  else {
    iVar4 = 1;
    if (uVar2 == 0xc9) {
      iVar4 = 4;
    }
  }
  iVar3 = 1;
  if (param_4 != '\0') {
    iVar3 = param_3;
  }
  uVar2 = iVar3 * iVar4;
  if (1 < uVar2) {
    plVar1 = DAT_146b62f28;
    if ((param_1[2] & 4) != 0) {
      plVar1 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    _Dst = (void *)(**(code **)(*plVar1 + 0x50))(plVar1,(ulonglong)uVar2 << 5,0);
    *(void **)(param_1 + 4) = _Dst;
    if (_Dst == (void *)0x0) {
      *(undefined2 *)((longlong)param_1 + 10) = 1;
      *(uint **)(param_1 + 4) = param_1 + 8;
      return (ulonglong)(param_1 + 8) & 0xffffffffffffff00;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar2 << 5);
    *(byte *)(param_1 + 2) = (byte)param_1[2] | 2;
  }
  *param_1 = param_2;
  *(short *)((longlong)param_1 + 10) = (short)uVar2;
  *(char *)((longlong)param_1 + 9) = (char)param_3;
  if (param_4 != '\0') {
    *(byte *)(param_1 + 2) = (byte)param_1[2] | 1;
  }
  return 1;
}



// FUNCTION 1432c7710 freePlanes body=67 status=ok
// SIG undefined freePlanes(void)

void Scaleform::Render::ImageData::freePlanes(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 2) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_1 + 0x20;
    return;
  }
  *(longlong *)(param_1 + 0x10) = param_1 + 0x20;
  return;
}



// FUNCTION 1432c7760 FUN_1432c7760 body=344 status=ok
// SIG undefined FUN_1432c7760(void)

undefined4 * FUN_1432c7760(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((*(byte *)(param_1 + 2) & 2) != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 4));
  }
  puVar1 = param_1 + 8;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)((longlong)param_2 + 10);
  if (*(longlong *)(param_2 + 6) != 0) {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(*(longlong *)(param_2 + 6),1);
  }
  lVar3 = *(longlong *)(param_1 + 6);
  if ((lVar3 != 0) &&
     (iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar3,0xffffffff), iVar8 == 1))
  {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *puVar1 = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  if ((*(byte *)(param_2 + 2) & 2) == 0) {
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  else {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfd;
    FUN_1432c7600(param_1,*param_1,*(undefined1 *)((longlong)param_1 + 9),*(byte *)(param_1 + 2) & 1
                 );
    uVar9 = 0;
    if (*(short *)((longlong)param_2 + 10) != 0) {
      do {
        lVar3 = *(longlong *)(param_2 + 4);
        uVar10 = (ulonglong)uVar9;
        uVar9 = uVar9 + 1;
        lVar11 = uVar10 * 0x20;
        uVar2 = *(undefined4 *)(lVar11 + 4 + lVar3);
        uVar4 = *(undefined8 *)(lVar11 + 0x18 + lVar3);
        uVar5 = *(undefined8 *)(lVar11 + 0x10 + lVar3);
        uVar6 = *(undefined8 *)(lVar11 + 8 + lVar3);
        lVar7 = *(longlong *)(param_1 + 4);
        *(undefined4 *)(lVar11 + lVar7) = *(undefined4 *)(lVar11 + lVar3);
        *(undefined4 *)(lVar11 + 4 + lVar7) = uVar2;
        *(undefined8 *)(lVar11 + 8 + lVar7) = uVar6;
        *(undefined8 *)(lVar11 + 0x10 + lVar7) = uVar5;
        *(undefined8 *)(lVar11 + 0x18 + lVar7) = uVar4;
      } while (uVar9 < *(ushort *)((longlong)param_2 + 10));
    }
  }
  return param_1;
}



// FUNCTION 1432c78c0 FUN_1432c78c0 body=164 status=ok
// SIG undefined FUN_1432c78c0(void)

void FUN_1432c78c0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 1) & 2) != 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[2]);
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
  param_1[2] = param_1 + 4;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 1;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1432c7970 FUN_1432c7970 body=295 status=ok
// SIG undefined FUN_1432c7970(void)

undefined1 FUN_1432c7970(longlong param_1,uint *param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    param_4 = (uint)*(byte *)((longlong)param_2 + 9) - param_3;
  }
  if ((param_3 == 0) || ((param_2[2] & 1) != 0)) {
    uVar5 = *param_2 & 0xfff;
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else if (uVar5 == 0x42) {
      iVar3 = 2;
    }
    else if (uVar5 == 200) {
      iVar3 = 3;
    }
    else {
      iVar3 = 1;
      if (uVar5 == 0xc9) {
        iVar3 = 4;
      }
    }
    bVar2 = (byte)param_2[2] & 1;
    iVar4 = 1;
    if (bVar2 != 0) {
      iVar4 = param_4;
    }
    FUN_1432cc860(param_1,*param_2,param_4,
                  (ulonglong)(uint)(iVar3 * param_3) * 0x20 + *(longlong *)(param_2 + 4),
                  iVar4 * iVar3,bVar2);
  }
  else {
    uVar5 = *param_2;
    FUN_1432c78c0();
    cVar1 = FUN_1432c7600(param_1,uVar5,param_4,0);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar5 = 0;
    if (*(short *)((longlong)param_2 + 10) != 0) {
      do {
        FUN_1432c73f0((ulonglong)uVar5 * 0x20 + *(longlong *)(param_2 + 4),*param_2,param_3,
                      *(longlong *)(param_1 + 0x10) + (ulonglong)uVar5 * 0x20,uVar5);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)((longlong)param_2 + 10));
    }
  }
  return 1;
}



// FUNCTION 1432c7aa0 GetPlaneCount body=31 status=ok
// SIG undefined GetPlaneCount(void)

uint Scaleform::Render::ImageData::GetPlaneCount(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return (uint)*(ushort *)(param_1 + 10) * (uint)*(byte *)(param_1 + 9);
  }
  return (uint)*(ushort *)(param_1 + 10);
}



// FUNCTION 1432c7ad0 FUN_1432c7ad0 body=105 status=ok
// SIG undefined FUN_1432c7ad0(void)

void FUN_1432c7ad0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = (uint)*(ushort *)((longlong)param_1 + 10);
  if (param_2 < uVar2) {
    puVar3 = (undefined4 *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 4));
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar3 + 2);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar3 + 4);
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar3 + 6);
    return;
  }
  uVar1 = (ulonglong)param_2 % (ulonglong)uVar2;
  FUN_1432c73f0(uVar1 * 0x20 + *(longlong *)(param_1 + 4),*param_1,
                (ulonglong)param_2 / (ulonglong)uVar2,param_3,(int)uVar1);
  return;
}



// FUNCTION 1432c7b40 FUN_1432c7b40 body=273 status=ok
// SIG undefined FUN_1432c7b40(void)

ulonglong FUN_1432c7b40(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = 0x1505;
  lVar4 = 2;
  do {
    pbVar2 = (byte *)(param_1 + 9 + lVar4);
    lVar4 = lVar4 + -1;
    uVar3 = uVar3 * 0x21 ^ (ulonglong)*pbVar2;
  } while (lVar4 != 0);
  uVar7 = 0;
  if (*(ushort *)(param_1 + 10) != 0) {
    while( true ) {
      lVar4 = 4;
      lVar5 = uVar7 * 0x20 + *(longlong *)(param_1 + 0x10);
      do {
        lVar1 = lVar4 + -1;
        lVar4 = lVar4 + -1;
        uVar3 = uVar3 * 0x21 ^ (ulonglong)*(byte *)(lVar1 + lVar5);
      } while (lVar4 != 0);
      lVar4 = 4;
      do {
        pbVar2 = (byte *)(lVar5 + 3 + lVar4);
        lVar4 = lVar4 + -1;
        uVar3 = uVar3 * 0x21 ^ (ulonglong)*pbVar2;
      } while (lVar4 != 0);
      lVar4 = 8;
      do {
        pbVar2 = (byte *)(lVar5 + 7 + lVar4);
        lVar4 = lVar4 + -1;
        uVar3 = uVar3 * 0x21 ^ (ulonglong)*pbVar2;
      } while (lVar4 != 0);
      lVar4 = 8;
      do {
        pbVar2 = (byte *)(lVar5 + 0xf + lVar4);
        lVar4 = lVar4 + -1;
        uVar3 = uVar3 * 0x21 ^ (ulonglong)*pbVar2;
      } while (lVar4 != 0);
      if (*(longlong *)(lVar5 + 0x18) == 0) break;
      for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
        uVar3 = uVar3 * 0x21 ^ (ulonglong)*(byte *)(*(longlong *)(lVar5 + 0x18) + -1 + lVar4);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      if (*(ushort *)(param_1 + 10) <= uVar6) {
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1432c7c60 FUN_1432c7c60 body=303 status=ok
// SIG undefined FUN_1432c7c60(void)

undefined8 FUN_1432c7c60(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) ||
      (*(char *)((longlong)param_1 + 9) != *(char *)((longlong)param_2 + 9))) ||
     (uVar3 = *(ushort *)((longlong)param_1 + 10), uVar3 != *(ushort *)((longlong)param_2 + 10))) {
    return 0;
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    if (*(longlong *)(param_2 + 6) != 0) {
      return 0;
    }
  }
  else {
    if (*(longlong *)(param_2 + 6) == 0) {
      return 0;
    }
    cVar6 = FUN_1432cc350();
    if (cVar6 != '\0') {
      return 0;
    }
  }
  uVar10 = 0;
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = (int *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_2 + 4));
      piVar2 = (int *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 4));
      if (*piVar2 != *piVar1) {
        return 0;
      }
      if (piVar2[1] != piVar1[1]) {
        return 0;
      }
      if (*(longlong *)(piVar2 + 2) != *(longlong *)(piVar1 + 2)) {
        return 0;
      }
      if (*(longlong *)(piVar2 + 4) != *(longlong *)(piVar1 + 4)) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      uVar11 = (uint)uVar3;
    } while (uVar8 < uVar11);
    if (uVar11 != 0) {
      lVar4 = *(longlong *)(param_1 + 4);
      lVar5 = *(longlong *)(param_2 + 4);
      do {
        lVar9 = (ulonglong)uVar10 * 0x20;
        iVar7 = _guard_xfg_dispatch_icall_nop
                          (*(void **)(lVar9 + 0x18 + lVar4),*(void **)(lVar9 + 0x18 + lVar5),
                           *(size_t *)(lVar9 + 0x10 + lVar4));
        if (iVar7 != 0) {
          return 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
  }
  return 1;
}



// FUNCTION 1432c7e30 FUN_1432c7e30 body=261 status=ok
// SIG undefined FUN_1432c7e30(void)

void FUN_1432c7e30(uint *param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  uint uVar6;
  undefined1 uVar4;
  undefined1 uVar5;
  
  uVar6 = *param_1 & 0xffefffff;
  uVar3 = (undefined1)param_4;
  uVar4 = (undefined1)((uint)param_4 >> 0x10);
  uVar1 = (undefined1)((uint)param_4 >> 8);
  uVar5 = (undefined1)((uint)param_4 >> 0x18);
  if ((int)uVar6 < 5) {
    if (uVar6 == 4) {
      param_3 = param_3 * 3;
      *(undefined1 *)((ulonglong)param_3 + param_2) = uVar3;
      *(undefined1 *)((ulonglong)param_3 + 2 + param_2) = uVar4;
      *(undefined1 *)((ulonglong)param_3 + 1 + param_2) = uVar1;
      return;
    }
    if (uVar6 == 1) {
      uVar2 = (ulonglong)(param_3 * 4);
      *(undefined1 *)(uVar2 + param_2) = uVar4;
      *(undefined1 *)(uVar2 + 2 + param_2) = uVar3;
      *(undefined1 *)(uVar2 + 3 + param_2) = uVar5;
      *(undefined1 *)(uVar2 + 1 + param_2) = uVar1;
      return;
    }
    if (uVar6 == 2) {
      uVar2 = (ulonglong)(param_3 * 4);
      *(undefined1 *)((ulonglong)(param_3 * 4) + param_2) = uVar3;
      *(undefined1 *)(uVar2 + 1 + param_2) = uVar1;
      *(undefined1 *)(uVar2 + 3 + param_2) = uVar5;
      *(undefined1 *)(uVar2 + 2 + param_2) = uVar4;
      return;
    }
    if (uVar6 == 3) {
      uVar2 = (ulonglong)(param_3 * 3);
      *(undefined1 *)(uVar2 + param_2) = uVar4;
      *(undefined1 *)(uVar2 + 1 + param_2) = uVar1;
      *(undefined1 *)(uVar2 + 2 + param_2) = uVar3;
      return;
    }
  }
  else if (uVar6 == 9) {
    *(undefined1 *)((ulonglong)param_3 + param_2) = uVar5;
  }
  else if (uVar6 == 0x3001) {
    uVar2 = (ulonglong)(param_3 * 4);
    *(undefined1 *)(uVar2 + param_2) = uVar5;
    *(undefined1 *)(uVar2 + 1 + param_2) = uVar4;
    *(undefined1 *)(uVar2 + 2 + param_2) = uVar1;
    *(undefined1 *)(uVar2 + 3 + param_2) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1432c7f40 FUN_1432c7f40 body=77 status=ok
// SIG undefined FUN_1432c7f40(void)

undefined4 * FUN_1432c7f40(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if ((param_3 < *puVar1) && (param_4 < puVar1[1])) {
    FUN_1432c7fa0(param_1,param_2,
                  *(longlong *)(puVar1 + 2) * (ulonglong)param_4 + *(longlong *)(puVar1 + 6),param_3
                 );
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1432c7fa0 FUN_1432c7fa0 body=316 status=ok
// SIG undefined FUN_1432c7fa0(void)

undefined1 * FUN_1432c7fa0(uint *param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0xffefffff;
  if ((int)uVar2 < 5) {
    if (uVar2 != 4) {
      if (uVar2 == 1) {
        uVar1 = (ulonglong)(uint)(param_4 * 4);
        param_2[2] = *(undefined1 *)((ulonglong)(uint)(param_4 * 4) + param_3);
        param_2[1] = *(undefined1 *)(uVar1 + 1 + param_3);
        *param_2 = *(undefined1 *)(uVar1 + 2 + param_3);
        param_2[3] = *(undefined1 *)(uVar1 + 3 + param_3);
        return param_2;
      }
      if (uVar2 != 2) {
        if (uVar2 != 3) {
          return param_2;
        }
        uVar2 = param_4 * 4;
        param_2[3] = 0xff;
        param_2[2] = *(undefined1 *)((ulonglong)uVar2 + param_3);
        param_2[1] = *(undefined1 *)((ulonglong)uVar2 + 1 + param_3);
        *param_2 = *(undefined1 *)((ulonglong)uVar2 + 2 + param_3);
        return param_2;
      }
      uVar1 = (ulonglong)(uint)(param_4 * 4);
      param_2[2] = *(undefined1 *)((ulonglong)(uint)(param_4 * 4) + 2 + param_3);
      param_2[1] = *(undefined1 *)(uVar1 + 1 + param_3);
      *param_2 = *(undefined1 *)(uVar1 + param_3);
      param_2[3] = *(undefined1 *)(uVar1 + 3 + param_3);
      return param_2;
    }
    uVar2 = param_4 * 4;
    param_2[3] = 0xff;
    param_2[2] = *(undefined1 *)((ulonglong)uVar2 + 2 + param_3);
    param_2[1] = *(undefined1 *)((ulonglong)uVar2 + 1 + param_3);
    *param_2 = *(undefined1 *)((ulonglong)uVar2 + param_3);
  }
  else if (uVar2 != 9) {
    if (uVar2 != 0x3001) {
      return param_2;
    }
    uVar1 = (ulonglong)(uint)(param_4 * 4);
    param_2[2] = *(undefined1 *)((ulonglong)(uint)(param_4 * 4) + 1 + param_3);
    param_2[1] = *(undefined1 *)(uVar1 + 2 + param_3);
    *param_2 = *(undefined1 *)(uVar1 + 3 + param_3);
    param_2[3] = *(undefined1 *)(uVar1 + param_3);
    return param_2;
  }
  *(undefined2 *)(param_2 + 1) = 0xffff;
  param_2[3] = *(undefined1 *)((ulonglong)(uint)(param_4 * 4) + param_3);
  *param_2 = 0xff;
  return param_2;
}



// FUNCTION 1432c80f0 FUN_1432c80f0 body=849 status=ok
// SIG undefined FUN_1432c80f0(void)

void FUN_1432c80f0(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  bool bVar7;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  char local_68 [4];
  undefined2 local_64 [2];
  ushort local_60 [2];
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44 [3];
  
  if ((*(byte *)(param_1 + 2) & 2) != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 4));
  }
  *(undefined4 **)(param_1 + 4) = param_1 + 8;
  local_5c = 0;
  (**(code **)(*param_2 + 0x50))(param_2,&local_5c,4);
  *param_1 = local_5c;
  local_58 = 0;
  (**(code **)(*param_2 + 0x50))(param_2,&local_58,4);
  param_1[1] = local_58;
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  local_res10[0] = 0;
  *(byte *)(param_1 + 2) = local_res8[0] & 0xfd;
  (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
  *(undefined1 *)((longlong)param_1 + 9) = local_res10[0];
  uVar6 = 0;
  local_64[0] = 0;
  (**(code **)(*param_2 + 0x50))(param_2,local_64,2);
  *(undefined2 *)((longlong)param_1 + 10) = local_64[0];
  FUN_1432c7600(param_1,*param_1,*(undefined1 *)((longlong)param_1 + 9),*(byte *)(param_1 + 2) & 1);
  if (*(short *)((longlong)param_1 + 10) != 0) {
    do {
      local_50 = 0;
      (**(code **)(*param_2 + 0x50))(param_2,&local_50,4);
      local_4c = 0;
      (**(code **)(*param_2 + 0x50))(param_2,&local_4c,4);
      local_48 = 0;
      (**(code **)(*param_2 + 0x50))(param_2,&local_48,4);
      local_54 = 0;
      (**(code **)(*param_2 + 0x50))(param_2,&local_54,4);
      uVar4 = (ulonglong)local_54;
      uVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar4,0);
      lVar5 = (ulonglong)uVar6 * 0x20;
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 4) + lVar5);
      *puVar3 = local_50;
      puVar3[1] = local_4c;
      *(ulonglong *)(puVar3 + 4) = uVar4;
      *(ulonglong *)(puVar3 + 2) = (ulonglong)local_48;
      *(undefined8 *)(puVar3 + 6) = uVar2;
      uVar4 = 0;
      if (*(longlong *)(lVar5 + 0x10 + *(longlong *)(param_1 + 4)) != 0) {
        do {
          local_res20[0] = 0;
          (**(code **)(*param_2 + 0x50))(param_2,local_res20,1);
          *(undefined1 *)(uVar4 + *(longlong *)(lVar5 + 0x18 + *(longlong *)(param_1 + 4))) =
               local_res20[0];
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(lVar5 + 0x10 + *(longlong *)(param_1 + 4)));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)((longlong)param_1 + 10));
  }
  local_60[0] = 0;
  (**(code **)(*param_2 + 0x50))(param_2,local_60,2);
  uVar6 = local_60[0];
  if (local_60[0] == 0) {
    lVar5 = *(longlong *)(param_1 + 6);
    if ((lVar5 != 0) &&
       (iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar5,0xffffffff), iVar1 == 1)
       ) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
    }
    *(undefined8 *)(param_1 + 6) = 0;
  }
  else {
    local_68[0] = '\0';
    (**(code **)(*param_2 + 0x50))(param_2,local_68,1);
    bVar7 = local_68[0] != '\0';
    puVar3 = (undefined4 *)
             (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(ulonglong)(uVar6 - 1) * 4 + 0xc,0);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 1;
      *(ushort *)(puVar3 + 1) = uVar6;
      *(bool *)((longlong)puVar3 + 6) = bVar7;
      _guard_xfg_dispatch_icall_nop(puVar3 + 2,0,(ulonglong)uVar6 << 2);
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(puVar3,1);
    }
    lVar5 = *(longlong *)(param_1 + 6);
    if ((lVar5 != 0) &&
       (iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar5,0xffffffff), iVar1 == 1)
       ) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar5);
    }
    *(undefined4 **)(param_1 + 6) = puVar3;
    if (uVar6 != 0) {
      uVar4 = (ulonglong)uVar6;
      lVar5 = 8;
      do {
        local_44[0] = 0;
        (**(code **)(*param_2 + 0x50))(param_2,local_44,4);
        *(undefined4 *)(lVar5 + *(longlong *)(param_1 + 6)) = local_44[0];
        uVar4 = uVar4 - 1;
        lVar5 = lVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1432c8450 FUN_1432c8450 body=572 status=ok
// SIG undefined FUN_1432c8450(void)

void FUN_1432c8450(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 local_res8;
  
  local_res8 = *param_1;
  (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
  local_res8 = param_1[1];
  (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
  local_res8._0_1_ = *(undefined1 *)(param_1 + 2);
  (**(code **)(*param_2 + 0x48))(param_2,&local_res8,1);
  local_res8 = CONCAT31(local_res8._1_3_,*(undefined1 *)((longlong)param_1 + 9));
  (**(code **)(*param_2 + 0x48))(param_2,&local_res8,1);
  local_res8 = CONCAT22(local_res8._2_2_,*(undefined2 *)((longlong)param_1 + 10));
  (**(code **)(*param_2 + 0x48))(param_2,&local_res8,2);
  uVar5 = 0;
  uVar3 = 0;
  if (*(short *)((longlong)param_1 + 10) != 0) {
    lVar1 = *(longlong *)(param_1 + 4);
    do {
      lVar6 = (ulonglong)uVar3 * 0x20;
      local_res8 = *(undefined4 *)(lVar6 + lVar1);
      (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
      local_res8 = *(undefined4 *)(lVar6 + 4 + *(longlong *)(param_1 + 4));
      (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
      local_res8 = *(undefined4 *)(lVar6 + 8 + *(longlong *)(param_1 + 4));
      (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
      local_res8 = *(undefined4 *)(lVar6 + 0x10 + *(longlong *)(param_1 + 4));
      (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
      lVar1 = *(longlong *)(param_1 + 4);
      uVar2 = uVar5;
      if (*(longlong *)(lVar6 + 0x10 + lVar1) != 0) {
        do {
          local_res8 = CONCAT31(local_res8._1_3_,
                                *(undefined1 *)(uVar2 + *(longlong *)(lVar6 + lVar1 + 0x18)));
          (**(code **)(*param_2 + 0x48))(param_2,&local_res8,1);
          lVar1 = *(longlong *)(param_1 + 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulonglong *)(lVar6 + 0x10 + lVar1));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((longlong)param_1 + 10));
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    local_res8 = (uint)local_res8._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x48))(param_2,&local_res8,2);
  }
  else {
    local_res8 = CONCAT22(local_res8._2_2_,*(undefined2 *)(*(longlong *)(param_1 + 6) + 4));
    (**(code **)(*param_2 + 0x48))();
    local_res8 = CONCAT31(local_res8._1_3_,*(char *)(*(longlong *)(param_1 + 6) + 6) != '\0');
    (**(code **)(*param_2 + 0x48))(param_2,&local_res8,1);
    lVar1 = *(longlong *)(param_1 + 6);
    if (*(short *)(lVar1 + 4) != 0) {
      do {
        local_res8 = *(undefined4 *)(lVar1 + 8 + uVar5 * 4);
        (**(code **)(*param_2 + 0x48))(param_2,&local_res8,4);
        lVar1 = *(longlong *)(param_1 + 6);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(ushort *)(lVar1 + 4));
      return;
    }
  }
  return;
}



// FUNCTION 1432c86a0 FUN_1432c86a0 body=53 status=ok
// SIG undefined FUN_1432c86a0(void)

undefined8 FUN_1432c86a0(uint param_1)

{
  param_1 = param_1 & 0xfff;
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0x42) {
    return 2;
  }
  if (param_1 == 200) {
    return 3;
  }
  if (param_1 != 0xc9) {
    return 1;
  }
  return 4;
}



// FUNCTION 1432c86e0 FUN_1432c86e0 body=85 status=ok
// SIG undefined FUN_1432c86e0(void)

undefined8 FUN_1432c86e0(uint param_1)

{
  switch(param_1 & 0xfff) {
  case 1:
  case 2:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x40:
  case 0x41:
    return 0x20;
  case 3:
  case 4:
    return 0x18;
  default:
    return 0;
  case 9:
  case 100:
  case 0x65:
  case 200:
  case 0xc9:
    return 8;
  case 0x15:
  case 0x32:
  case 0x3f:
    return 0x10;
  case 0x36:
  case 0x37:
  case 0x3a:
  case 0x42:
    return 4;
  case 0x38:
  case 0x39:
    return 2;
  }
}



// FUNCTION 1432c8830 FUN_1432c8830 body=168 status=ok
// SIG undefined FUN_1432c8830(void)

uint FUN_1432c8830(uint param_1,uint param_2)

{
  switch(param_1 & 0xfff) {
  case 1:
  case 2:
    return param_2 * 4;
  case 3:
  case 4:
    return (param_2 + 1) * 3 & 0xfffffffc;
  default:
    return 0;
  case 9:
  case 0x3d:
  case 100:
  case 0x65:
  case 200:
  case 0xc9:
    return param_2;
  case 0x15:
    return param_2 * 2;
  case 0x32:
  case 0x3f:
    break;
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x40:
  case 0x41:
    if ((param_1 & 0xf000) == 0xa000) {
      return param_2 + 0x1f & 0xffffffe0;
    }
    return (param_2 + 3 >> 2) << 4;
  case 0x36:
  case 0x37:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x42:
    return param_2 >> 1;
  case 0x38:
  case 0x39:
    return param_2 >> 2;
  }
  if ((param_1 & 0xf000) == 0xa000) {
    return (param_2 + 0x1f >> 5) << 4;
  }
  return (param_2 + 3 >> 2) << 3;
}



// FUNCTION 1432c89d0 FUN_1432c89d0 body=61 status=ok
// SIG undefined FUN_1432c89d0(void)

uint FUN_1432c89d0(uint param_1,uint param_2)

{
  if ((3 < (param_1 & 0xfff) - 0x32) && (2 < (param_1 & 0xfff) - 0x3f)) {
    return param_2;
  }
  if ((param_1 & 0xf000) == 0xa000) {
    return param_2 + 0x1f >> 5;
  }
  return param_2 + 3 >> 2;
}



// FUNCTION 1432c8a20 FUN_1432c8a20 body=62 status=ok
// SIG undefined FUN_1432c8a20(void)

uint * FUN_1432c8a20(uint *param_1,uint param_2,uint *param_3,int param_4)

{
  if (((param_2 & 0xfff) - 200 < 2) && (param_4 - 1U < 2)) {
    *param_1 = *param_3 >> 1;
    param_1[1] = param_3[1] >> 1;
    return param_1;
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  return param_1;
}



// FUNCTION 1432c8a70 FUN_1432c8a70 body=187 status=ok
// SIG undefined FUN_1432c8a70(void)

ulonglong FUN_1432c8a70(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 0xfff;
  if ((3 < uVar4 - 0x32) && (2 < uVar4 - 0x3f)) {
    lVar1 = FUN_1432c8830(param_1,*param_2);
    return lVar1 * (ulonglong)(uint)param_2[1];
  }
  if ((uVar4 == 0x32) || (iVar3 = 2, uVar4 == 0x3f)) {
    iVar3 = 1;
  }
  if (((uint)param_1 & 0xf000) == 0xa000) {
    uVar2 = param_2[1] + 0x1fU >> 5;
    uVar4 = *param_2 + 0x1fU >> 5;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    return (ulonglong)(uVar2 * uVar4 * iVar3 * 0x200);
  }
  uVar2 = param_2[1] + 3U >> 2;
  uVar4 = *param_2 + 3U >> 2;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  return (ulonglong)(uVar2 * uVar4 * iVar3 * 8);
}



// FUNCTION 1432c8b40 FUN_1432c8b40 body=269 status=ok
// SIG undefined FUN_1432c8b40(void)

longlong FUN_1432c8b40(uint param_1,uint *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar8 = *param_2;
  lVar10 = 0;
  uVar7 = param_2[1];
  if (param_3 != 0) {
    uVar6 = param_1 & 0xfff;
    uVar9 = 1;
    do {
      if ((uVar6 - 0x32 < 4) || (uVar6 - 0x3f < 3)) {
        if ((uVar6 == 0x32) || (uVar5 = 2, uVar6 == 0x3f)) {
          uVar5 = uVar9;
        }
        if ((param_1 & 0xf000) == 0xa000) {
          uVar1 = uVar8 + 0x1f >> 5;
          uVar3 = uVar7 + 0x1f >> 5;
          if (uVar3 == 0) {
            uVar3 = uVar9;
          }
          if (uVar1 == 0) {
            uVar1 = uVar9;
          }
          uVar4 = (ulonglong)(uVar3 * uVar1 * uVar5 * 0x200);
        }
        else {
          uVar1 = uVar8 + 3 >> 2;
          uVar3 = uVar7 + 3 >> 2;
          if (uVar3 == 0) {
            uVar3 = uVar9;
          }
          if (uVar1 == 0) {
            uVar1 = uVar9;
          }
          uVar4 = (ulonglong)(uVar3 * uVar1 * uVar5 * 8);
        }
      }
      else {
        lVar2 = FUN_1432c8830(param_1,uVar8,param_4);
        uVar4 = lVar2 * (ulonglong)uVar7;
      }
      uVar8 = uVar8 >> 1;
      lVar10 = lVar10 + uVar4;
      if (uVar8 == 0) {
        uVar8 = uVar9;
      }
      uVar7 = uVar7 >> 1;
      if (uVar7 == 0) {
        uVar7 = uVar9;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return lVar10;
}



// FUNCTION 1432c8cc0 FUN_1432c8cc0 body=31 status=ok
// SIG undefined FUN_1432c8cc0(void)

undefined8 FUN_1432c8cc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1432c7fa0(*(undefined8 *)(param_3 + 0x10),param_2,*(undefined8 *)(param_3 + 8));
  return param_2;
}



// FUNCTION 1432c8cf0 FUN_1432c8cf0 body=19 status=ok
// SIG undefined FUN_1432c8cf0(void)

void FUN_1432c8cf0(longlong param_1)

{
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1432c8d10 FUN_1432c8d10 body=51 status=ok
// SIG undefined FUN_1432c8d10(void)

undefined8 FUN_1432c8d10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  }
  plVar1 = *(longlong **)(lVar2 + 0x58);
  if ((*(int *)(param_1 + 0x40) == 2) && (plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  }
  return 1;
}



// FUNCTION 1432c8da0 FUN_1432c8da0 body=167 status=ok
// SIG undefined FUN_1432c8da0(void)

void FUN_1432c8da0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[5];
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    *(longlong *)(param_1[2] + 0x18) = param_1[3];
    *(longlong *)(param_1[3] + 0x10) = param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  (**(code **)(*param_1 + 0x60))(param_1,1);
  lVar1 = param_1[5];
  *(undefined4 *)(param_1 + 8) = 4;
  param_1[0xb] = 0;
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    param_1[6] = 0;
    (**(code **)(*plVar2 + 0xc0))(plVar2,0);
  }
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  return;
}



// FUNCTION 1432c8e50 FUN_1432c8e50 body=137 status=ok
// SIG undefined FUN_1432c8e50(void)

void FUN_1432c8e50(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = param_1[5];
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    iVar3 = (**(code **)(*(longlong *)param_1[6] + 0x18))();
    if (iVar3 == 6) {
      FUN_14331ee50(param_1[6]);
    }
  }
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  (**(code **)(*param_1 + 0x60))(param_1,0);
  lVar1 = param_1[5];
  *(undefined4 *)(param_1 + 8) = 3;
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xc0))(plVar2,1);
  }
  Scaleform::Lock::DoLock(lVar1 + 0x18);
  return;
}



// FUNCTION 1432c8ee0 FUN_1432c8ee0 body=28 status=ok
// SIG undefined FUN_1432c8ee0(void)

void FUN_1432c8ee0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  *(undefined4 *)(param_1 + 8) = 5;
  return;
}



// FUNCTION 1432c8f40 FUN_1432c8f40 body=90 status=ok
// SIG undefined FUN_1432c8f40(void)

void FUN_1432c8f40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((int)param_1[8] == 3) {
    (**(code **)(*param_1 + 8))();
  }
  if ((param_1[5] != 0) && (lVar1 = *(longlong *)(param_1[5] + 0x10), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      FUN_1432c2490(*(longlong *)(lVar1 + 0x60),param_1 + 4);
    }
    plVar2 = *(longlong **)(lVar1 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    }
  }
  return;
}



// FUNCTION 1432c8fa0 FUN_1432c8fa0 body=220 status=ok
// SIG undefined FUN_1432c8fa0(void)

undefined8 FUN_1432c8fa0(longlong *param_1,undefined4 *param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_4 == 0) {
    param_4 = (uint)*(byte *)((longlong)param_1 + 0x44) - param_3;
  }
  if (param_1[5] == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1[5] + 0x10);
  }
  lVar5 = (**(code **)(*plVar6 + 0xd0))(plVar6,param_1,param_3,param_4);
  if (lVar5 == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_1[10] + 0x22);
  puVar3 = *(undefined4 **)(param_1[10] + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_1432c78c0(param_2);
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 1;
  *param_2 = uVar4;
  *(char *)((longlong)param_2 + 9) = (char)param_4;
  *(undefined4 **)(param_2 + 4) = puVar3;
  *(short *)((longlong)param_2 + 10) = sVar1;
  if ((puVar3 != (undefined4 *)0x0) && (sVar1 == 1)) {
    param_2[8] = *puVar3;
    param_2[9] = puVar3[1];
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(puVar3 + 2);
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(puVar3 + 4);
    *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(puVar3 + 6);
  }
  uVar2 = *(ushort *)((longlong)param_1 + 0x46);
  param_2[1] = (uint)uVar2;
  return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
}



// FUNCTION 1432c9090 FUN_1432c9090 body=61 status=ok
// SIG undefined FUN_1432c9090(void)

undefined8 FUN_1432c9090(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x10);
  }
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_1,1);
  return 1;
}


