// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432a53b0 allocate body=329 status=ok
// SIG undefined allocate(void)

longlong * physx::CVariableMemoryPool::allocate(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2 + 0x8fU & 0xffffff80;
  if ((*(int *)((longlong)param_1 + 0x5c) != 0) &&
     (uVar4 = ~(local_res10[0] << 0xf) + local_res10[0], uVar4 = (uVar4 >> 10 ^ uVar4) * 9,
     uVar4 = uVar4 ^ uVar4 >> 6, uVar4 = ~(uVar4 << 0xb) + uVar4,
     uVar4 = *(uint *)(param_1[8] +
                      (ulonglong)((uVar4 >> 0x10 ^ uVar4) & *(int *)((longlong)param_1 + 0x4c) - 1U)
                      * 4), uVar4 != 0xffffffff)) {
    do {
      if (*(uint *)(param_1[6] + (ulonglong)uVar4 * 0x10) == local_res10[0]) {
        if ((uVar4 != 0xffffffff) && (lVar3 = (ulonglong)uVar4 * 0x10 + param_1[6], lVar3 != 0)) {
          plVar1 = *(longlong **)(lVar3 + 8);
          lVar2 = *plVar1;
          *(longlong *)(lVar3 + 8) = lVar2;
          if (lVar2 == 0) {
            shdfnd::internal::
            HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
            ::erase(param_1 + 4,local_res10);
          }
          return plVar1 + 2;
        }
        break;
      }
      uVar4 = *(uint *)(param_1[7] + (ulonglong)uVar4 * 4);
    } while (uVar4 != 0xffffffff);
  }
  uVar4 = local_res10[0];
  if (local_res10[0] < *(uint *)(param_1 + 0xc)) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  lVar3 = (**(code **)(**(longlong **)*param_1 + 8))
                    (*(longlong **)*param_1,uVar4,"RepX variable sized memory pool",
                     "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlMemoryPool.h"
                     ,0xc1);
  if (*(uint *)(param_1 + 3) < (*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff)) {
    plVar1 = (longlong *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = lVar3;
    }
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  }
  else {
    local_res8 = lVar3;
    shdfnd::
    Array<unsigned_char_*___ptr64,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char_*___ptr64>_>
    ::growAndPushBack(param_1 + 1,&local_res8);
  }
  *(uint *)(lVar3 + 8) = uVar4;
  return (longlong *)(lVar3 + 0x10);
}



// FUNCTION 1432a5500 checkCapacity body=132 status=ok
// SIG undefined checkCapacity(void)

void physx::MemoryBufferBase<physx::CMemoryPoolManager>::checkCapacity
               (longlong param_1,uint param_2)

{
  longlong lVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x28) < param_2) {
    uVar2 = 0x20;
    if (0x20 < param_2) {
      do {
        uVar2 = uVar2 * 2;
      } while (uVar2 < param_2);
    }
    _Dst = (void *)CVariableMemoryPool::allocate(*(longlong *)(param_1 + 0x10) + 8,uVar2);
    if (*(uint *)(param_1 + 0x18) != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x18));
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      CVariableMemoryPool::AddFreeMem
                (*(longlong *)(param_1 + 0x10) + 8,lVar1 + -0x10,*(undefined4 *)(lVar1 + -8));
    }
    *(void **)(param_1 + 0x20) = _Dst;
    *(uint *)(param_1 + 0x28) = uVar2;
  }
  return;
}



// FUNCTION 1432a5590 clear body=141 status=ok
// SIG undefined clear(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
     ::clear(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x20),-1,(ulonglong)(uint)(*(int *)(param_1 + 0x2c) * 4));
    iVar1 = *(int *)(param_1 + 0x28);
    uVar2 = 0;
    if (iVar1 != 1) {
      lVar3 = 0;
      do {
        uVar2 = uVar2 + 1;
        *(uint *)(lVar3 + *(longlong *)(param_1 + 0x18)) = uVar2;
        lVar3 = lVar3 + 4;
      } while (uVar2 < iVar1 - 1U);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(*(int *)(param_1 + 0x28) - 1) * 4) =
         0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 1432a5620 copy body=234 status=ok
// SIG undefined copy(void)

void physx::shdfnd::Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::copy
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 < param_2) {
    if (0x2f < (ulonglong)((longlong)param_2 + (0xb - (longlong)param_1))) {
      puVar1 = param_1 + 5;
      do {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = *param_3;
          puVar1[-4] = param_3[1];
          puVar1[-3] = param_3[2];
        }
        if (puVar1 + -2 != (undefined4 *)0x0) {
          puVar1[-2] = param_3[3];
          puVar1[-1] = param_3[4];
          *puVar1 = param_3[5];
        }
        if (puVar1 + 1 != (undefined4 *)0x0) {
          puVar1[1] = param_3[6];
          puVar1[2] = param_3[7];
          puVar1[3] = param_3[8];
        }
        if (puVar1 + 4 != (undefined4 *)0x0) {
          puVar1[4] = param_3[9];
          puVar1[5] = param_3[10];
          puVar1[6] = param_3[0xb];
        }
        param_3 = param_3 + 0xc;
        param_1 = param_1 + 0xc;
        puVar1 = puVar1 + 0xc;
      } while (param_1 < param_2 + -9);
    }
    if (param_1 < param_2) {
      param_3 = param_3 + 2;
      do {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = param_3[-2];
          param_1[1] = param_3[-1];
          param_1[2] = *param_3;
        }
        param_1 = param_1 + 3;
        param_3 = param_3 + 3;
      } while (param_1 < param_2);
    }
  }
  return;
}



// FUNCTION 1432a5710 create body=332 status=ok
// SIG undefined create(void)

longlong physx::shdfnd::internal::
         HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
         ::create(longlong param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = *param_2;
    uVar2 = ~(iVar1 << 0xf) + iVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
    bVar5 = uVar2 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x10) == iVar1) break;
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      bVar5 = uVar2 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x28)) {
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2 * 2;
    }
    if (uVar2 < uVar3) {
      reserveInternal(param_1);
    }
    uVar2 = *param_2 + ~(*param_2 << 0xf);
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x2c) - 1U);
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar2 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4) = uVar2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x10);
}



// FUNCTION 1432a5860 erase body=181 status=ok
// SIG undefined erase(void)

undefined8
physx::shdfnd::internal::
HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
::erase(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *param_2;
    uVar2 = ~(iVar1 << 0xf) + iVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = ~(uVar2 << 0xb) + uVar2;
    uVar3 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4);
    if (*(int *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4) != -1) {
      do {
        uVar3 = (ulonglong)*puVar4;
        if (*(int *)(uVar3 * 0x10 + *(longlong *)(param_1 + 0x10)) == iVar1) break;
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x18) + uVar3 * 4);
      } while (*(int *)(*(longlong *)(param_1 + 0x18) + uVar3 * 4) != -1);
      uVar2 = *puVar4;
      if (uVar2 != 0xffffffff) {
        *puVar4 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        if (uVar2 != *(uint *)(param_1 + 0x3c)) {
          replaceWithLast(param_1);
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1432a5920 fileToObject body=2407 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxParticleRepXSerializer<physx::PxParticleFluid>::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
          undefined8 *param_5,undefined8 param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined **ppuVar13;
  PxAllocatorCallback *pPVar14;
  Foundation *this;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  ulonglong uVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  ulong local_res18;
  uint local_154;
  uint local_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  uint *local_128;
  uint local_120;
  ulong local_11c;
  ulonglong local_118;
  undefined8 local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  uint *local_c8;
  uint local_c0 [2];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  ulong local_98 [2];
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uVar19 = 0;
  local_11c = 0;
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"NbParticles",&local_148);
  if (((cVar3 != '\0') && (local_128 = (uint *)local_148, (uint *)local_148 != (uint *)0x0)) &&
     ((char)*(uint *)local_148 != '\0')) {
    local_11c = strtoul(local_148,(char **)&local_128,10);
  }
  uVar7 = 0;
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ValidParticleRange",&local_148);
  if (((cVar3 != '\0') && (local_128 = (uint *)local_148, (uint *)local_148 != (uint *)0x0)) &&
     ((char)*(uint *)local_148 != '\0')) {
    uVar7 = strtoul(local_148,(char **)&local_128,10);
  }
  local_c8 = (uint *)0x0;
  Sn::readStridedBufferProperty<unsigned_int>
            (param_3,"ValidParticleBitmap",&local_c8,local_150,&local_154,param_4);
  local_128 = (uint *)0x0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"Positions",&local_128,local_150,&local_154,param_4);
  local_b8 = 0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"Velocities",&local_b8,local_150,&local_154,param_4);
  local_b0 = 0;
  Sn::readStridedBufferProperty<float>(param_3,"RestOffsets",&local_b0,local_150,&local_154,param_4)
  ;
  local_a8[0] = 0;
  Sn::readStridedFlagsProperty<unsigned_int>
            (param_3,"Flags",local_a8,local_150,&local_154,param_4,&PTR_s_eVALID_1467c9ef0);
  uVar10 = 0;
  local_108 = 0;
  bVar32 = local_b0 != 0;
  local_100 = 0;
  local_118 = 0;
  bVar33 = local_b8 != 0;
  local_110 = 0;
  local_d8 = 0;
  bVar34 = local_a8[0] != 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  if (uVar7 == 0) {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Xml\\SnRepXCoreSerializer.cpp"
               ,0x47c,
               "PxSerialization::createCollectionFromXml: PxParticleRepXSerializer: Xml field \"ValidParticleRange\" is zero!"
              );
    *param_2 = &DAT_145af3922;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    local_120 = 0;
    uVar8 = uVar7 - 1 >> 5;
    local_148 = (char *)local_c8;
    uVar22 = uVar10;
    uVar25 = uVar19;
    uVar26 = uVar19;
    uVar27 = uVar19;
    uVar28 = uVar19;
    uVar29 = uVar19;
    uVar31 = uVar19;
    local_154 = uVar8;
    do {
      local_150[0] = *(uint *)local_148;
      uVar23 = (uint)uVar10;
      if (local_150[0] != 0) {
        uVar8 = (uint)uVar10 << 5;
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,uVar8);
        do {
          uVar23 = 0;
          if (local_150[0] != 0) {
            for (; (local_150[0] >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
            }
          }
          uVar8 = uVar8 | uVar23;
          local_c0[0] = uVar8;
          if ((uint)uVar29 < ((uint)uVar25 & 0x7fffffff)) {
            puVar1 = (uint *)(uVar19 + uVar29 * 4);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar8;
            }
            uVar23 = (uint)uVar29 + 1;
            local_100 = CONCAT44(local_100._4_4_,uVar23);
          }
          else {
            shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
            growAndPushBack(&local_108,local_c0);
            uVar26 = local_118;
            uVar23 = (uint)local_100;
          }
          uVar29 = (ulonglong)uVar23;
          puVar24 = (undefined4 *)((longlong)local_128 + (ulonglong)(uVar8 * 0xc));
          if ((uint)uVar28 < (local_110._4_4_ & 0x7fffffff)) {
            puVar2 = (undefined4 *)(uVar26 + uVar28 * 0xc);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar24;
              puVar2[1] = puVar24[1];
              puVar2[2] = puVar24[2];
            }
            uVar23 = (uint)uVar28 + 1;
            local_110 = CONCAT44(local_110._4_4_,uVar23);
          }
          else {
            shdfnd::Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::
            growAndPushBack(&local_118,puVar24);
            uVar23 = (uint)local_110;
          }
          uVar28 = (ulonglong)uVar23;
          if (bVar33) {
            puVar24 = (undefined4 *)(local_b8 + (ulonglong)(uVar8 * 0xc));
            if ((uint)uVar31 < (local_d0._4_4_ & 0x7fffffff)) {
              puVar2 = (undefined4 *)(local_d8 + uVar31 * 0xc);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar24;
                puVar2[1] = puVar24[1];
                puVar2[2] = puVar24[2];
              }
              uVar23 = (uint)uVar31 + 1;
              uVar31 = (ulonglong)uVar23;
              local_d0 = CONCAT44(local_d0._4_4_,uVar23);
            }
            else {
              shdfnd::Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::
              growAndPushBack(&local_d8,puVar24);
              uVar31 = local_d0 & 0xffffffff;
            }
          }
          if (bVar32) {
            puVar24 = (undefined4 *)((ulonglong)(uVar8 * 4) + local_b0);
            if ((uint)uVar27 < (local_e0._4_4_ & 0x7fffffff)) {
              puVar2 = (undefined4 *)(local_e8 + uVar27 * 4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar24;
              }
              uVar23 = (uint)uVar27 + 1;
              uVar27 = (ulonglong)uVar23;
              local_e0 = CONCAT44(local_e0._4_4_,uVar23);
            }
            else {
              shdfnd::Array<float,physx::shdfnd::ReflectionAllocator<float>_>::growAndPushBack
                        (&local_e8,puVar24);
              uVar27 = local_e0 & 0xffffffff;
            }
          }
          if (bVar34) {
            puVar24 = (undefined4 *)((ulonglong)(uVar8 * 4) + local_a8[0]);
            if ((uint)uVar22 < (local_f0._4_4_ & 0x7fffffff)) {
              puVar2 = (undefined4 *)(local_f8 + uVar22 * 4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar24;
              }
              uVar8 = (uint)uVar22 + 1;
              uVar22 = (ulonglong)uVar8;
              local_f0 = CONCAT44(local_f0._4_4_,uVar8);
            }
            else {
              shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
              growAndPushBack(&local_f8,puVar24);
              uVar22 = local_f0 & 0xffffffff;
            }
          }
          uVar25 = local_100 >> 0x20;
          local_150[0] = local_150[0] & local_150[0] - 1;
          uVar19 = local_108;
          uVar26 = local_118;
          uVar8 = (uint)local_c8;
        } while (local_150[0] != 0);
        local_150[0] = 0;
        uVar8 = local_154;
        uVar23 = local_120;
      }
      local_120 = uVar23 + 1;
      uVar10 = (ulonglong)local_120;
      local_148 = (char *)((longlong)local_148 + 4);
    } while (local_120 <= uVar8);
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"MaxParticles",&local_148);
    local_res18 = (ulong)param_3;
    if (cVar3 == '\0') {
      bVar20 = 0;
    }
    else {
      local_128 = (uint *)local_148;
      if (((uint *)local_148 == (uint *)0x0) || ((char)*(uint *)local_148 == '\0')) {
        bVar20 = 1;
      }
      else {
        local_res18 = strtoul(local_148,(char **)&local_128,10);
        bVar20 = 1;
      }
    }
    plVar11 = (longlong *)
              (**(code **)(*(longlong *)*param_5 + 0xc0))((longlong *)*param_5,local_res18,bVar32);
    local_148 = (char *)*param_5;
    uStack_140 = (longlong *)param_5[1];
    local_138 = (longlong *)param_5[2];
    bVar4 = Sn::readAllProperties<physx::PxParticleFluid>
                      (&local_148,param_3,plVar11,param_4,param_6);
    uVar8 = 0;
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ParticleBaseFlags",&local_148);
    if (cVar3 == '\0') {
      bVar5 = 0;
    }
    else {
      uVar23 = 0;
      uVar8 = uVar23;
      if ((local_148 != (char *)0x0) && (uVar8 = 0, *local_148 != '\0')) {
        pcVar12 = (char *)Sn::copyStr<physx::XmlMemoryAllocator>(param_4);
        pcVar15 = pcVar12;
        pcVar16 = pcVar12;
        uVar8 = uVar23;
        if (pcVar12 != (char *)0x0) {
          do {
            pcVar18 = pcVar15;
            if (*pcVar16 == '\0') break;
            pcVar17 = pcVar16 + 1;
            if (*pcVar17 == '|') {
              *pcVar17 = '\0';
              pcVar18 = pcVar16 + 2;
              uVar23 = Sn::findEnumByName(pcVar15,&PTR_s_eCOLLISION_TWOWAY_1467c9fa0);
              uVar8 = uVar8 | uVar23;
              pcVar17 = pcVar18;
            }
            pcVar15 = pcVar18;
            pcVar16 = pcVar17;
          } while (pcVar17 != (char *)0x0);
          if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
            uVar23 = Sn::findEnumByName(pcVar18,&PTR_s_eCOLLISION_TWOWAY_1467c9fa0);
            uVar8 = uVar8 | uVar23;
          }
        }
        (**(code **)(*param_4 + 0x10))(param_4,pcVar12);
      }
      bVar5 = 1;
    }
    lVar30 = 0x10;
    uVar21 = 1;
    uVar23 = uVar21;
    do {
      if (((uVar23 & 0x10) == 0) && ((uVar23 & uVar8 & 0xffff) != 0)) {
        (**(code **)(*plVar11 + 0x168))(plVar11,uVar23,1);
      }
      uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    uVar8 = 0;
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ParticleReadDataFlags",&local_148);
    if (cVar3 == '\0') {
      bVar6 = 0;
    }
    else {
      uVar8 = 0;
      if ((local_148 != (char *)0x0) && (*local_148 != '\0')) {
        pcVar12 = (char *)Sn::copyStr<physx::XmlMemoryAllocator>();
        pcVar15 = pcVar12;
        pcVar16 = pcVar12;
        uVar23 = 0;
        if (pcVar12 != (char *)0x0) {
          do {
            uVar8 = uVar23;
            if (*pcVar15 == '\0') break;
            pcVar18 = pcVar15 + 1;
            if (*pcVar18 == '|') {
              *pcVar18 = '\0';
              uVar19 = 0;
              pcVar18 = pcVar15 + 2;
              if (PTR_s_ePOSITION_BUFFER_1467ca130 != (undefined *)0x0) {
                ppuVar13 = &PTR_s_ePOSITION_BUFFER_1467ca130;
                do {
                  iVar9 = physx::shdfnd::stricmp(*ppuVar13,pcVar16);
                  if (iVar9 == 0) {
                    uVar23 = (&DAT_1467ca138)[uVar19 * 4];
                    goto LAB_1432a5f93;
                  }
                  uVar19 = (ulonglong)((int)uVar19 + 1);
                  ppuVar13 = &PTR_s_ePOSITION_BUFFER_1467ca130 + uVar19 * 2;
                } while (*ppuVar13 != (undefined *)0x0);
              }
              uVar23 = 0;
LAB_1432a5f93:
              uVar8 = uVar8 | uVar23;
              pcVar16 = pcVar18;
            }
            pcVar15 = pcVar18;
            uVar23 = uVar8;
          } while (pcVar18 != (char *)0x0);
          if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
            uVar23 = Sn::findEnumByName(pcVar16,&PTR_s_ePOSITION_BUFFER_1467ca130);
            uVar8 = uVar8 | uVar23;
          }
        }
        (**(code **)(*param_4 + 0x10))(param_4,pcVar12);
      }
      bVar6 = 1;
    }
    uVar19 = 0;
    lVar30 = 0x10;
    do {
      if ((uVar21 & uVar8 & 0xffff) != 0) {
        (**(code **)(*plVar11 + 0x1c8))(plVar11,uVar21,1);
      }
      uVar27 = local_d8;
      uVar26 = local_e8;
      uVar22 = local_f8;
      uVar25 = local_108;
      uVar10 = local_118;
      uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,0xc);
    uStack_68 = uStack_140;
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,4);
    uStack_58 = uStack_140;
    local_98[0] = local_11c;
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,4);
    uStack_48 = uStack_140;
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,4);
    local_148 = (char *)local_118;
    local_90 = local_108;
    uStack_88 = uStack_140;
    local_148._0_4_ = (undefined4)local_118;
    local_148._4_4_ = (undefined4)(local_118 >> 0x20);
    local_80 = (undefined4)local_148;
    uStack_7c = local_148._4_4_;
    uStack_78 = 0xc;
    uStack_74 = uStack_140._4_4_;
    local_148 = (char *)uVar10;
    local_70 = uVar19;
    if (bVar33) {
      local_148 = (char *)local_d8;
      local_70 = local_d8;
      uStack_68 = CONCAT44(uStack_140._4_4_,0xc);
    }
    uStack_140._0_4_ = 0xc;
    local_60 = uVar19;
    if (bVar32) {
      local_148 = (char *)local_e8;
      uStack_140._0_4_ = 4;
      local_60 = local_e8;
      uStack_58 = CONCAT44(uStack_140._4_4_,4);
    }
    local_50 = uVar19;
    if (bVar34) {
      local_148 = (char *)local_f8;
      uStack_140._0_4_ = 4;
      local_50 = local_f8;
      uStack_48 = CONCAT44(uStack_140._4_4_,4);
    }
    (**(code **)(*plVar11 + 0xb0))(plVar11,local_98);
    if ((bVar20 & bVar4 & bVar5 & bVar6) == 0) {
      local_148 = "";
      local_138 = (longlong *)0x0;
    }
    else {
      local_148 = "PxParticleFluid";
      local_138 = plVar11;
    }
    *param_2 = local_148;
    param_2[1] = local_138;
    param_2[2] = local_138;
    uStack_140 = local_138;
    if ((((local_f0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_f0)) && (uVar22 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar22);
    }
    if ((((local_e0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_e0)) && (uVar26 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar26);
    }
    if ((((local_d0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_d0)) && (uVar27 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar27);
    }
    if ((((local_110 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_110)) && (uVar10 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar10);
    }
    if ((((local_100 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_100)) && (uVar25 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar25);
    }
  }
  return param_2;
}



// FUNCTION 1432a6290 fileToObject body=2407 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxParticleRepXSerializer<physx::PxParticleSystem>::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
          undefined8 *param_5,undefined8 param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined **ppuVar13;
  PxAllocatorCallback *pPVar14;
  Foundation *this;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  ulonglong uVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  ulong local_res18;
  uint local_154;
  uint local_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  uint *local_128;
  uint local_120;
  ulong local_11c;
  ulonglong local_118;
  undefined8 local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  uint *local_c8;
  uint local_c0 [2];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  ulong local_98 [2];
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uVar19 = 0;
  local_11c = 0;
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"NbParticles",&local_148);
  if (((cVar3 != '\0') && (local_128 = (uint *)local_148, (uint *)local_148 != (uint *)0x0)) &&
     ((char)*(uint *)local_148 != '\0')) {
    local_11c = strtoul(local_148,(char **)&local_128,10);
  }
  uVar7 = 0;
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ValidParticleRange",&local_148);
  if (((cVar3 != '\0') && (local_128 = (uint *)local_148, (uint *)local_148 != (uint *)0x0)) &&
     ((char)*(uint *)local_148 != '\0')) {
    uVar7 = strtoul(local_148,(char **)&local_128,10);
  }
  local_c8 = (uint *)0x0;
  Sn::readStridedBufferProperty<unsigned_int>
            (param_3,"ValidParticleBitmap",&local_c8,local_150,&local_154,param_4);
  local_128 = (uint *)0x0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"Positions",&local_128,local_150,&local_154,param_4);
  local_b8 = 0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"Velocities",&local_b8,local_150,&local_154,param_4);
  local_b0 = 0;
  Sn::readStridedBufferProperty<float>(param_3,"RestOffsets",&local_b0,local_150,&local_154,param_4)
  ;
  local_a8[0] = 0;
  Sn::readStridedFlagsProperty<unsigned_int>
            (param_3,"Flags",local_a8,local_150,&local_154,param_4,&PTR_s_eVALID_1467c9ef0);
  uVar10 = 0;
  local_108 = 0;
  bVar32 = local_b0 != 0;
  local_100 = 0;
  local_118 = 0;
  bVar33 = local_b8 != 0;
  local_110 = 0;
  local_d8 = 0;
  bVar34 = local_a8[0] != 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  if (uVar7 == 0) {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Xml\\SnRepXCoreSerializer.cpp"
               ,0x47c,
               "PxSerialization::createCollectionFromXml: PxParticleRepXSerializer: Xml field \"ValidParticleRange\" is zero!"
              );
    *param_2 = &DAT_145af3922;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    local_120 = 0;
    uVar8 = uVar7 - 1 >> 5;
    local_148 = (char *)local_c8;
    uVar22 = uVar10;
    uVar25 = uVar19;
    uVar26 = uVar19;
    uVar27 = uVar19;
    uVar28 = uVar19;
    uVar29 = uVar19;
    uVar31 = uVar19;
    local_154 = uVar8;
    do {
      local_150[0] = *(uint *)local_148;
      uVar23 = (uint)uVar10;
      if (local_150[0] != 0) {
        uVar8 = (uint)uVar10 << 5;
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,uVar8);
        do {
          uVar23 = 0;
          if (local_150[0] != 0) {
            for (; (local_150[0] >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
            }
          }
          uVar8 = uVar8 | uVar23;
          local_c0[0] = uVar8;
          if ((uint)uVar29 < ((uint)uVar25 & 0x7fffffff)) {
            puVar1 = (uint *)(uVar19 + uVar29 * 4);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar8;
            }
            uVar23 = (uint)uVar29 + 1;
            local_100 = CONCAT44(local_100._4_4_,uVar23);
          }
          else {
            shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
            growAndPushBack(&local_108,local_c0);
            uVar26 = local_118;
            uVar23 = (uint)local_100;
          }
          uVar29 = (ulonglong)uVar23;
          puVar24 = (undefined4 *)((longlong)local_128 + (ulonglong)(uVar8 * 0xc));
          if ((uint)uVar28 < (local_110._4_4_ & 0x7fffffff)) {
            puVar2 = (undefined4 *)(uVar26 + uVar28 * 0xc);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar24;
              puVar2[1] = puVar24[1];
              puVar2[2] = puVar24[2];
            }
            uVar23 = (uint)uVar28 + 1;
            local_110 = CONCAT44(local_110._4_4_,uVar23);
          }
          else {
            shdfnd::Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::
            growAndPushBack(&local_118,puVar24);
            uVar23 = (uint)local_110;
          }
          uVar28 = (ulonglong)uVar23;
          if (bVar33) {
            puVar24 = (undefined4 *)(local_b8 + (ulonglong)(uVar8 * 0xc));
            if ((uint)uVar31 < (local_d0._4_4_ & 0x7fffffff)) {
              puVar2 = (undefined4 *)(local_d8 + uVar31 * 0xc);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar24;
                puVar2[1] = puVar24[1];
                puVar2[2] = puVar24[2];
              }
              uVar23 = (uint)uVar31 + 1;
              uVar31 = (ulonglong)uVar23;
              local_d0 = CONCAT44(local_d0._4_4_,uVar23);
            }
            else {
              shdfnd::Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::
              growAndPushBack(&local_d8,puVar24);
              uVar31 = local_d0 & 0xffffffff;
            }
          }
          if (bVar32) {
            puVar24 = (undefined4 *)((ulonglong)(uVar8 * 4) + local_b0);
            if ((uint)uVar27 < (local_e0._4_4_ & 0x7fffffff)) {
              puVar2 = (undefined4 *)(local_e8 + uVar27 * 4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar24;
              }
              uVar23 = (uint)uVar27 + 1;
              uVar27 = (ulonglong)uVar23;
              local_e0 = CONCAT44(local_e0._4_4_,uVar23);
            }
            else {
              shdfnd::Array<float,physx::shdfnd::ReflectionAllocator<float>_>::growAndPushBack
                        (&local_e8,puVar24);
              uVar27 = local_e0 & 0xffffffff;
            }
          }
          if (bVar34) {
            puVar24 = (undefined4 *)((ulonglong)(uVar8 * 4) + local_a8[0]);
            if ((uint)uVar22 < (local_f0._4_4_ & 0x7fffffff)) {
              puVar2 = (undefined4 *)(local_f8 + uVar22 * 4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar24;
              }
              uVar8 = (uint)uVar22 + 1;
              uVar22 = (ulonglong)uVar8;
              local_f0 = CONCAT44(local_f0._4_4_,uVar8);
            }
            else {
              shdfnd::Array<unsigned_int,physx::shdfnd::ReflectionAllocator<unsigned_int>_>::
              growAndPushBack(&local_f8,puVar24);
              uVar22 = local_f0 & 0xffffffff;
            }
          }
          uVar25 = local_100 >> 0x20;
          local_150[0] = local_150[0] & local_150[0] - 1;
          uVar19 = local_108;
          uVar26 = local_118;
          uVar8 = (uint)local_c8;
        } while (local_150[0] != 0);
        local_150[0] = 0;
        uVar8 = local_154;
        uVar23 = local_120;
      }
      local_120 = uVar23 + 1;
      uVar10 = (ulonglong)local_120;
      local_148 = (char *)((longlong)local_148 + 4);
    } while (local_120 <= uVar8);
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"MaxParticles",&local_148);
    local_res18 = (ulong)param_3;
    if (cVar3 == '\0') {
      bVar20 = 0;
    }
    else {
      local_128 = (uint *)local_148;
      if (((uint *)local_148 == (uint *)0x0) || ((char)*(uint *)local_148 == '\0')) {
        bVar20 = 1;
      }
      else {
        local_res18 = strtoul(local_148,(char **)&local_128,10);
        bVar20 = 1;
      }
    }
    plVar11 = (longlong *)
              (**(code **)(*(longlong *)*param_5 + 0xb8))((longlong *)*param_5,local_res18,bVar32);
    local_148 = (char *)*param_5;
    uStack_140 = (longlong *)param_5[1];
    local_138 = (longlong *)param_5[2];
    bVar4 = Sn::readAllProperties<physx::PxParticleSystem>
                      (&local_148,param_3,plVar11,param_4,param_6);
    uVar8 = 0;
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ParticleBaseFlags",&local_148);
    if (cVar3 == '\0') {
      bVar5 = 0;
    }
    else {
      uVar23 = 0;
      uVar8 = uVar23;
      if ((local_148 != (char *)0x0) && (uVar8 = 0, *local_148 != '\0')) {
        pcVar12 = (char *)Sn::copyStr<physx::XmlMemoryAllocator>(param_4);
        pcVar15 = pcVar12;
        pcVar16 = pcVar12;
        uVar8 = uVar23;
        if (pcVar12 != (char *)0x0) {
          do {
            pcVar18 = pcVar15;
            if (*pcVar16 == '\0') break;
            pcVar17 = pcVar16 + 1;
            if (*pcVar17 == '|') {
              *pcVar17 = '\0';
              pcVar18 = pcVar16 + 2;
              uVar23 = Sn::findEnumByName(pcVar15,&PTR_s_eCOLLISION_TWOWAY_1467c9fa0);
              uVar8 = uVar8 | uVar23;
              pcVar17 = pcVar18;
            }
            pcVar15 = pcVar18;
            pcVar16 = pcVar17;
          } while (pcVar17 != (char *)0x0);
          if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
            uVar23 = Sn::findEnumByName(pcVar18,&PTR_s_eCOLLISION_TWOWAY_1467c9fa0);
            uVar8 = uVar8 | uVar23;
          }
        }
        (**(code **)(*param_4 + 0x10))(param_4,pcVar12);
      }
      bVar5 = 1;
    }
    lVar30 = 0x10;
    uVar21 = 1;
    uVar23 = uVar21;
    do {
      if (((uVar23 & 0x10) == 0) && ((uVar23 & uVar8 & 0xffff) != 0)) {
        (**(code **)(*plVar11 + 0x168))(plVar11,uVar23,1);
      }
      uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    uVar8 = 0;
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ParticleReadDataFlags",&local_148);
    if (cVar3 == '\0') {
      bVar6 = 0;
    }
    else {
      uVar8 = 0;
      if ((local_148 != (char *)0x0) && (*local_148 != '\0')) {
        pcVar12 = (char *)Sn::copyStr<physx::XmlMemoryAllocator>();
        pcVar15 = pcVar12;
        pcVar16 = pcVar12;
        uVar23 = 0;
        if (pcVar12 != (char *)0x0) {
          do {
            uVar8 = uVar23;
            if (*pcVar15 == '\0') break;
            pcVar18 = pcVar15 + 1;
            if (*pcVar18 == '|') {
              *pcVar18 = '\0';
              uVar19 = 0;
              pcVar18 = pcVar15 + 2;
              if (PTR_s_ePOSITION_BUFFER_1467ca130 != (undefined *)0x0) {
                ppuVar13 = &PTR_s_ePOSITION_BUFFER_1467ca130;
                do {
                  iVar9 = physx::shdfnd::stricmp(*ppuVar13,pcVar16);
                  if (iVar9 == 0) {
                    uVar23 = (&DAT_1467ca138)[uVar19 * 4];
                    goto LAB_1432a6903;
                  }
                  uVar19 = (ulonglong)((int)uVar19 + 1);
                  ppuVar13 = &PTR_s_ePOSITION_BUFFER_1467ca130 + uVar19 * 2;
                } while (*ppuVar13 != (undefined *)0x0);
              }
              uVar23 = 0;
LAB_1432a6903:
              uVar8 = uVar8 | uVar23;
              pcVar16 = pcVar18;
            }
            pcVar15 = pcVar18;
            uVar23 = uVar8;
          } while (pcVar18 != (char *)0x0);
          if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
            uVar23 = Sn::findEnumByName(pcVar16,&PTR_s_ePOSITION_BUFFER_1467ca130);
            uVar8 = uVar8 | uVar23;
          }
        }
        (**(code **)(*param_4 + 0x10))(param_4,pcVar12);
      }
      bVar6 = 1;
    }
    uVar19 = 0;
    lVar30 = 0x10;
    do {
      if ((uVar21 & uVar8 & 0xffff) != 0) {
        (**(code **)(*plVar11 + 0x1c8))(plVar11,uVar21,1);
      }
      uVar27 = local_d8;
      uVar26 = local_e8;
      uVar22 = local_f8;
      uVar25 = local_108;
      uVar10 = local_118;
      uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,0xc);
    uStack_68 = uStack_140;
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,4);
    uStack_58 = uStack_140;
    local_98[0] = local_11c;
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,4);
    uStack_48 = uStack_140;
    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,4);
    local_148 = (char *)local_118;
    local_90 = local_108;
    uStack_88 = uStack_140;
    local_148._0_4_ = (undefined4)local_118;
    local_148._4_4_ = (undefined4)(local_118 >> 0x20);
    local_80 = (undefined4)local_148;
    uStack_7c = local_148._4_4_;
    uStack_78 = 0xc;
    uStack_74 = uStack_140._4_4_;
    local_148 = (char *)uVar10;
    local_70 = uVar19;
    if (bVar33) {
      local_148 = (char *)local_d8;
      local_70 = local_d8;
      uStack_68 = CONCAT44(uStack_140._4_4_,0xc);
    }
    uStack_140._0_4_ = 0xc;
    local_60 = uVar19;
    if (bVar32) {
      local_148 = (char *)local_e8;
      uStack_140._0_4_ = 4;
      local_60 = local_e8;
      uStack_58 = CONCAT44(uStack_140._4_4_,4);
    }
    local_50 = uVar19;
    if (bVar34) {
      local_148 = (char *)local_f8;
      uStack_140._0_4_ = 4;
      local_50 = local_f8;
      uStack_48 = CONCAT44(uStack_140._4_4_,4);
    }
    (**(code **)(*plVar11 + 0xb0))(plVar11,local_98);
    if ((bVar20 & bVar4 & bVar5 & bVar6) == 0) {
      local_148 = "";
      local_138 = (longlong *)0x0;
    }
    else {
      local_148 = "PxParticleSystem";
      local_138 = plVar11;
    }
    *param_2 = local_148;
    param_2[1] = local_138;
    param_2[2] = local_138;
    uStack_140 = local_138;
    if ((((local_f0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_f0)) && (uVar22 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar22);
    }
    if ((((local_e0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_e0)) && (uVar26 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar26);
    }
    if ((((local_d0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_d0)) && (uVar27 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar27);
    }
    if ((((local_110 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_110)) && (uVar10 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar10);
    }
    if ((((local_100 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_100)) && (uVar25 != 0)) {
      pPVar14 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar14 + 0x10))(pPVar14,uVar25);
    }
  }
  return param_2;
}



// FUNCTION 1432a6c00 growAndPushBack body=209 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::Array<float,physx::shdfnd::ReflectionAllocator<float>_>::growAndPushBack
                 (longlong *param_1,undefined4 *param_2)

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
      goto LAB_1432a6c4f;
    }
  }
  _Dst = (void *)ReflectionAllocator<float>::allocate
                           (param_1,(ulonglong)uVar5 << 2,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432a6c4f:
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



// FUNCTION 1432a6ce0 growAndPushBack body=214 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<unsigned_char_*___ptr64,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char_*___ptr64>_>
       ::growAndPushBack(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(uint *)((longlong)param_1 + 0x14) * 2;
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
      goto LAB_1432a6d40;
    }
  }
  _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                           (*(longlong **)*param_1,(ulonglong)uVar3 << 3,
                            "<no allocation names in this config>",
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432a6d40:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 2) * 8)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[1],(ulonglong)(*(uint *)(param_1 + 2) * 8))
    ;
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 2) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 2);
  param_1[1] = _Dst;
  *(uint *)((longlong)param_1 + 0x14) = uVar3;
  *(uint *)(param_1 + 2) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 8);
}



// FUNCTION 1432a6dc0 growAndPushBack body=226 status=ok
// SIG undefined growAndPushBack(void)

longlong physx::shdfnd::Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::
         growAndPushBack(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
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
      goto LAB_1432a6e13;
    }
  }
  lVar4 = ReflectionAllocator<physx::PxVec3>::allocate
                    (param_1,(ulonglong)uVar6 * 0xc,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                     ,0x25d);
LAB_1432a6e13:
  copy(lVar4,lVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0xc,*param_1);
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar5 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = lVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return lVar4 + (ulonglong)uVar2 * 0xc;
}



// FUNCTION 1432a6eb0 objectToFileImpl body=1473 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxParticleRepXSerializer<physx::PxParticleFluid>::objectToFileImpl
               (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  ushort local_res10 [4];
  undefined8 local_res18;
  undefined2 local_res20 [4];
  undefined8 *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  char local_b8 [128];
  
  local_res18 = param_3;
  plVar4 = (longlong *)(**(code **)(*param_2 + 0xa0))(param_2);
  puVar1 = (undefined8 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  physx::operator<<(puVar1,(int)plVar4[1]);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NbParticles",puVar1[4]);
  uVar6 = 0;
  puVar1[3] = 0;
  physx::operator<<(puVar1,*(undefined4 *)((longlong)plVar4 + 0xc));
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,"ValidParticleRange",puVar1[4]);
  puVar1[3] = 0;
  (**(code **)(*param_2 + 0x1c0))(param_2,local_res10);
  if (*(int *)((longlong)plVar4 + 0xc) != 0) {
    puVar11 = (undefined4 *)plVar4[2];
    uVar12 = *(int *)((longlong)plVar4 + 0xc) - 1U >> 5;
    if (puVar11 != (undefined4 *)0x0) {
      if (uVar12 != 0xffffffff) {
        do {
          if ((uVar6 == 0) || ((uVar6 & 7) != 0)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          physx::operator<<(puVar1,*puVar11);
          uVar6 = uVar6 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar6 < uVar12 + 1);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"ValidParticleBitmap",puVar1[4]);
      puVar1[3] = 0;
    }
    uVar8 = 0;
    uVar6 = *(uint *)(plVar4 + 1);
    if ((uVar6 != 0) && (plVar4[3] != 0)) {
      if (uVar6 != 0) {
        do {
          iVar7 = (int)uVar8;
          if ((iVar7 == 0) || (iVar7 != (int)(uVar8 / 6) * 6)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          physx::operator<<(puVar1,(ulonglong)(uint)((int)plVar4[4] * iVar7) + plVar4[3]);
          uVar8 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"Positions",puVar1[4]);
      puVar1[3] = 0;
    }
    uVar8 = 0;
    if ((((local_res10[0] & 2) != 0) && (uVar6 = *(uint *)(plVar4 + 1), uVar6 != 0)) &&
       (plVar4[5] != 0)) {
      if (uVar6 != 0) {
        do {
          iVar7 = (int)uVar8;
          if ((iVar7 == 0) || (iVar7 != (int)(uVar8 / 6) * 6)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          physx::operator<<(puVar1,(ulonglong)(uint)(iVar7 * (int)plVar4[6]) + plVar4[5]);
          uVar8 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"Velocities",puVar1[4]);
      puVar1[3] = 0;
    }
    uVar8 = 0;
    if ((((local_res10[0] & 4) != 0) && (uVar6 = *(uint *)(plVar4 + 1), uVar6 != 0)) &&
       (plVar4[7] != 0)) {
      if (uVar6 != 0) {
        do {
          iVar7 = (int)uVar8;
          if ((iVar7 == 0) || (iVar7 != (int)(uVar8 / 6) * 6)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          ::_guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
          physx::shdfnd::snprintf(local_b8,0x80,"%g");
          if (local_b8[0] != '\0') {
            lVar10 = -1;
            do {
              lVar2 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (local_b8[lVar2] != '\0');
            (**(code **)*puVar1)(puVar1,local_b8);
          }
          uVar8 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"RestOffsets",puVar1[4]);
      puVar1[3] = 0;
    }
    if ((local_res10[0] & 8) != 0) {
      Sn::
      writeStrideFlags<physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_&___ptr64_(__cdecl*)(physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_*___ptr64,unsigned_int)>
                (param_4,puVar1,6,plVar4 + 9,&LAB_1432a2670,(int)plVar4[1],"Flags",
                 &PTR_s_eVALID_1467c9ef0);
    }
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  uVar3 = (**(code **)(*param_2 + 0x178))(param_2);
  physx::operator<<(puVar1,uVar3);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,"MaxParticles",puVar1[4]);
  puVar1[3] = 0;
  (**(code **)(*param_2 + 0x170))(param_2,local_res20);
  Sn::writeFlagsProperty
            (param_4,puVar1,"ParticleBaseFlags",local_res20[0],&PTR_s_eCOLLISION_TWOWAY_1467c9fa0);
  Sn::writeFlagsProperty
            (param_4,puVar1,"ParticleReadDataFlags",local_res10[0],&PTR_s_ePOSITION_BUFFER_1467ca130
            );
  (**(code **)(*param_2 + 0x108))(param_2,local_c8,local_d0);
  uVar9 = local_res18;
  Sn::writeProperty<physx::PxMetaDataPlane>(param_4,local_res18,puVar1,"ProjectionPlane",&local_e8);
  local_e8 = (undefined8 *)puVar1[2];
  local_e0 = 0;
  local_d8 = 0;
  Sn::writeAllProperties<physx::PxParticleFluid>(&local_e8,param_2,param_4,puVar1,uVar9);
  if ((((local_d8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_d8)) && (local_e0 != 0)) {
    (**(code **)(*(longlong *)*local_e8 + 0x10))();
  }
  return;
}



// FUNCTION 1432a7480 objectToFileImpl body=1345 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxParticleRepXSerializer<physx::PxParticleSystem>::objectToFileImpl
               (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  ushort local_res10 [4];
  undefined8 local_res18;
  undefined2 local_res20 [4];
  undefined4 local_e8 [2];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_b8 [128];
  
  local_res18 = param_3;
  plVar4 = (longlong *)(**(code **)(*param_2 + 0xa0))(param_2);
  puVar1 = (undefined8 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  physx::operator<<(puVar1,(int)plVar4[1]);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NbParticles",puVar1[4]);
  uVar6 = 0;
  puVar1[3] = 0;
  physx::operator<<(puVar1,*(undefined4 *)((longlong)plVar4 + 0xc));
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,"ValidParticleRange",puVar1[4]);
  puVar1[3] = 0;
  (**(code **)(*param_2 + 0x1c0))(param_2,local_res10);
  if (*(int *)((longlong)plVar4 + 0xc) != 0) {
    puVar11 = (undefined4 *)plVar4[2];
    uVar12 = *(int *)((longlong)plVar4 + 0xc) - 1U >> 5;
    if (puVar11 != (undefined4 *)0x0) {
      if (uVar12 != 0xffffffff) {
        do {
          if ((uVar6 == 0) || ((uVar6 & 7) != 0)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          physx::operator<<(puVar1,*puVar11);
          uVar6 = uVar6 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar6 < uVar12 + 1);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"ValidParticleBitmap",puVar1[4]);
      puVar1[3] = 0;
    }
    uVar8 = 0;
    uVar6 = *(uint *)(plVar4 + 1);
    if ((uVar6 != 0) && (plVar4[3] != 0)) {
      if (uVar6 != 0) {
        do {
          iVar7 = (int)uVar8;
          if ((iVar7 == 0) || (iVar7 != (int)(uVar8 / 6) * 6)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          physx::operator<<(puVar1,(ulonglong)(uint)((int)plVar4[4] * iVar7) + plVar4[3]);
          uVar8 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"Positions",puVar1[4]);
      puVar1[3] = 0;
    }
    uVar8 = 0;
    if ((((local_res10[0] & 2) != 0) && (uVar6 = *(uint *)(plVar4 + 1), uVar6 != 0)) &&
       (plVar4[5] != 0)) {
      if (uVar6 != 0) {
        do {
          iVar7 = (int)uVar8;
          if ((iVar7 == 0) || (iVar7 != (int)(uVar8 / 6) * 6)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          physx::operator<<(puVar1,(ulonglong)(uint)(iVar7 * (int)plVar4[6]) + plVar4[5]);
          uVar8 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"Velocities",puVar1[4]);
      puVar1[3] = 0;
    }
    uVar8 = 0;
    if ((((local_res10[0] & 4) != 0) && (uVar6 = *(uint *)(plVar4 + 1), uVar6 != 0)) &&
       (plVar4[7] != 0)) {
      if (uVar6 != 0) {
        do {
          iVar7 = (int)uVar8;
          if ((iVar7 == 0) || (iVar7 != (int)(uVar8 / 6) * 6)) {
            uVar9 = 1;
            puVar5 = &DAT_145af3920;
          }
          else {
            uVar9 = 4;
            puVar5 = &DAT_145af6094;
          }
          (**(code **)*puVar1)(puVar1,puVar5,uVar9);
          ::_guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
          physx::shdfnd::snprintf(local_b8,0x80,"%g");
          if (local_b8[0] != '\0') {
            lVar10 = -1;
            do {
              lVar2 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (local_b8[lVar2] != '\0');
            (**(code **)*puVar1)(puVar1,local_b8);
          }
          uVar8 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
      }
      param_5._0_1_ = 0;
      (**(code **)*puVar1)(puVar1,&param_5,1);
      (**(code **)(*param_4 + 0x10))(param_4,"RestOffsets",puVar1[4]);
      puVar1[3] = 0;
    }
    if ((local_res10[0] & 8) != 0) {
      Sn::
      writeStrideFlags<physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_&___ptr64_(__cdecl*)(physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_*___ptr64,unsigned_int)>
                (param_4,puVar1,6,plVar4 + 9,&LAB_1432a2670,(int)plVar4[1],"Flags",
                 &PTR_s_eVALID_1467c9ef0);
    }
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  uVar3 = (**(code **)(*param_2 + 0x178))(param_2);
  physx::operator<<(puVar1,uVar3);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,"MaxParticles",puVar1[4]);
  puVar1[3] = 0;
  (**(code **)(*param_2 + 0x170))(param_2,local_res20);
  Sn::writeFlagsProperty
            (param_4,puVar1,"ParticleBaseFlags",local_res20[0],&PTR_s_eCOLLISION_TWOWAY_1467c9fa0);
  Sn::writeFlagsProperty
            (param_4,puVar1,"ParticleReadDataFlags",local_res10[0],&PTR_s_ePOSITION_BUFFER_1467ca130
            );
  (**(code **)(*param_2 + 0x108))(param_2,&local_e0,local_e8);
  local_d0 = local_e0;
  local_cc = local_dc;
  local_c8 = local_d8;
  local_c4 = local_e8[0];
  Sn::writeProperty<physx::PxMetaDataPlane>(param_4,local_res18,puVar1,"ProjectionPlane",&local_d0);
  Sn::writeAllProperties<physx::PxParticleSystem>(param_2,param_4,puVar1,local_res18);
  return;
}



// FUNCTION 1432a79d0 read body=76 status=ok
// SIG int read(int _FileHandle, void * _DstBuf, uint _MaxCharCount)

int __cdecl
physx::MemoryBufferBase<physx::CMemoryPoolManager>::read
          (int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  undefined4 in_register_0000000c;
  longlong lVar1;
  
  lVar1 = CONCAT44(in_register_0000000c,_FileHandle);
  if (*(uint *)(lVar1 + 0x14) + _MaxCharCount <= *(uint *)(lVar1 + 0x10)) {
    ::_guard_xfg_dispatch_icall_nop
              (_DstBuf,(void *)((ulonglong)*(uint *)(lVar1 + 0x14) + *(longlong *)(lVar1 + 0x18)),
               (ulonglong)_MaxCharCount);
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + _MaxCharCount;
    return _MaxCharCount;
  }
  return 0;
}



// FUNCTION 1432a7a20 recreate body=146 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>::
     recreate(undefined8 *param_1,int param_2)

{
  void *_Dst;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                             (*(longlong **)*param_1,param_2,"<no allocation names in this config>",
                              "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 2) + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)param_1[1],
               (ulonglong)
               (uint)((int)(void *)((ulonglong)*(uint *)(param_1 + 2) + (longlong)_Dst) - (int)_Dst)
              );
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  *(int *)((longlong)param_1 + 0x14) = param_2;
  param_1[1] = _Dst;
  return;
}



// FUNCTION 1432a7ac0 replaceWithLast body=193 status=ok
// SIG undefined replaceWithLast(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
     ::replaceWithLast(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)
             ((ulonglong)*(uint *)(param_1 + 0x3c) * 0x10 + *(longlong *)(param_1 + 0x10));
    *puVar1 = *puVar5;
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar5 + 2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x3c) * 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 0x10);
  uVar3 = iVar2 + ~(iVar2 << 0xf);
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = ~(uVar3 << 0xb) + uVar3;
  uVar4 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & *(int *)(param_1 + 0x2c) - 1U);
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
  if (uVar3 != *(uint *)(param_1 + 0x3c)) {
    do {
      uVar4 = (ulonglong)uVar3;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
    } while (uVar3 != *(uint *)(param_1 + 0x3c));
    *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = param_2;
    return;
  }
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4) = param_2;
  return;
}



// FUNCTION 1432a7b90 reserveInternal body=417 status=ok
// SIG undefined reserveInternal(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
     ::reserveInternal(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 5);
  uVar8 = param_2 * 4;
  iVar10 = (int)(longlong)((float)param_2 * *(float *)(param_1 + 6));
  iVar5 = uVar8 + iVar10 * 4;
  uVar6 = iVar5 + (-iVar5 & 0xfU);
  _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                           (*(longlong **)*param_1,iVar10 * 0x10 + uVar6,
                            "<no allocation names in this config>",
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsHashInternals.h"
                            ,0x174);
  lVar7 = (ulonglong)uVar6 + (longlong)_Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,-1,(ulonglong)uVar8);
  uVar9 = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    do {
      iVar5 = *(int *)(param_1[2] + uVar9 * 0x10);
      puVar1 = (undefined4 *)(lVar7 + uVar9 * 0x10);
      uVar6 = iVar5 + ~(iVar5 << 0xf);
      uVar6 = (uVar6 >> 10 ^ uVar6) * 9;
      uVar6 = uVar6 ^ uVar6 >> 6;
      uVar6 = uVar6 + ~(uVar6 << 0xb);
      uVar4 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & param_2 - 1);
      *(undefined4 *)((ulonglong)uVar8 + (longlong)_Dst + uVar9 * 4) =
           *(undefined4 *)((longlong)_Dst + uVar4 * 4);
      *(int *)((longlong)_Dst + uVar4 * 4) = (int)uVar9;
      if (puVar1 != (undefined4 *)0x0) {
        lVar3 = param_1[2];
        *puVar1 = *(undefined4 *)(lVar3 + uVar9 * 0x10);
        *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(lVar3 + 8 + uVar9 * 0x10);
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0x3c));
  }
  if (param_1[1] != 0) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  param_1[1] = _Dst;
  param_1[4] = _Dst;
  *(uint *)((longlong)param_1 + 0x2c) = param_2;
  param_1[3] = (ulonglong)uVar8 + (longlong)_Dst;
  param_1[2] = lVar7;
  *(int *)(param_1 + 5) = iVar10;
  if (*(int *)((longlong)param_1 + 0x34) == -1) {
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  }
  return;
}



// FUNCTION 1432a7d40 resize body=140 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>::
     resize(longlong param_1,uint param_2,char *param_3)

{
  char *_Dst;
  char *pcVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    recreate();
  }
  pcVar1 = (char *)((ulonglong)param_2 + *(longlong *)(param_1 + 8));
  _Dst = (char *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  if (*param_3 == '\0') {
    if (_Dst < pcVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)((int)pcVar1 - (int)_Dst));
      *(uint *)(param_1 + 0x10) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < pcVar1; _Dst = _Dst + 1) {
      if (_Dst != (char *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1432a7dd0 write body=93 status=ok
// SIG int write(int _Filehandle, void * _Buf, uint _MaxCharCount)

int __cdecl
physx::MemoryBufferBase<physx::CMemoryPoolManager>::write
          (int _Filehandle,void *_Buf,uint _MaxCharCount)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  longlong lVar2;
  
  lVar2 = CONCAT44(in_register_0000000c,_Filehandle);
  checkCapacity(lVar2,*(int *)(lVar2 + 0x18) + _MaxCharCount);
  uVar1 = *(uint *)(lVar2 + 0x18);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)uVar1 + *(longlong *)(lVar2 + 0x20)),_Buf,(ulonglong)_MaxCharCount)
  ;
  *(uint *)(lVar2 + 0x18) = uVar1 + _MaxCharCount;
  return _MaxCharCount;
}



// FUNCTION 1432a7e30 writeFlagsBuffer body=174 status=ok
// SIG undefined writeFlagsBuffer(void)

void physx::Sn::writeFlagsBuffer(undefined8 *param_1,uint param_2,longlong *param_3)

{
  char *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    bVar2 = false;
    uVar4 = 0;
    lVar5 = *param_3;
    plVar3 = param_3;
    while (lVar5 != 0) {
      if ((*(uint *)(plVar3 + 1) & param_2) != 0) {
        if (bVar2) {
          (**(code **)*param_1)(param_1,&DAT_145af3924);
        }
        pcVar1 = (char *)*plVar3;
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          lVar5 = -1;
          do {
            lVar5 = lVar5 + 1;
          } while (pcVar1[lVar5] != '\0');
          (**(code **)*param_1)(param_1);
        }
        bVar2 = true;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      plVar3 = param_3 + uVar4 * 2;
      lVar5 = *plVar3;
    }
  }
  return;
}



// FUNCTION 1432a7ee0 fileToObject body=477 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxD6Joint>::fileToObject
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_res10;
  char *local_res18;
  undefined8 local_res20;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  plVar6 = plVar7;
  plVar5 = plVar7;
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor0",&local_res10);
    bVar1 = 0;
    if (cVar3 == '\0') {
LAB_1432a7faf:
      bVar2 = 1;
    }
    else {
      local_res18 = local_res10;
      plVar5 = plVar10;
      if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) goto LAB_1432a7faf;
      uVar4 = _strtoui64(local_res10,&local_res18,10);
      if (uVar4 == 0) goto LAB_1432a7faf;
      plVar5 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar5 != (longlong *)0x0) goto LAB_1432a7faf;
      bVar2 = 0;
    }
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor1",&local_88);
    if (cVar3 == '\0') {
LAB_1432a8009:
      bVar1 = 1;
    }
    else {
      local_80 = local_88;
      plVar6 = plVar9;
      if ((local_88 == (char *)0x0) || (*local_88 == '\0')) goto LAB_1432a8009;
      uVar4 = _strtoui64(local_88,&local_80,10);
      if (uVar4 == 0) goto LAB_1432a8009;
      plVar6 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1432a8009;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (!(bool)(bVar2 & bVar1)) goto LAB_1432a808d;
  }
  plVar7 = (longlong *)PxD6JointCreate(*param_5,plVar5,&local_58,plVar6,&local_78);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    (**(code **)(*param_6 + 8))(param_6,uVar8,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar7,param_3,local_res20,param_5,param_6);
  }
LAB_1432a808d:
  param_2[1] = plVar7;
  *param_2 = "PxD6Joint";
  param_2[2] = plVar7;
  return param_2;
}



// FUNCTION 1432a80c0 fileToObject body=477 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxDistanceJoint>::fileToObject
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_res10;
  char *local_res18;
  undefined8 local_res20;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  plVar6 = plVar7;
  plVar5 = plVar7;
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor0",&local_res10);
    bVar1 = 0;
    if (cVar3 == '\0') {
LAB_1432a818f:
      bVar2 = 1;
    }
    else {
      local_res18 = local_res10;
      plVar5 = plVar10;
      if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) goto LAB_1432a818f;
      uVar4 = _strtoui64(local_res10,&local_res18,10);
      if (uVar4 == 0) goto LAB_1432a818f;
      plVar5 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar5 != (longlong *)0x0) goto LAB_1432a818f;
      bVar2 = 0;
    }
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor1",&local_88);
    if (cVar3 == '\0') {
LAB_1432a81e9:
      bVar1 = 1;
    }
    else {
      local_80 = local_88;
      plVar6 = plVar9;
      if ((local_88 == (char *)0x0) || (*local_88 == '\0')) goto LAB_1432a81e9;
      uVar4 = _strtoui64(local_88,&local_80,10);
      if (uVar4 == 0) goto LAB_1432a81e9;
      plVar6 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1432a81e9;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (!(bool)(bVar2 & bVar1)) goto LAB_1432a826d;
  }
  plVar7 = (longlong *)PxDistanceJointCreate(*param_5,plVar5,&local_58,plVar6,&local_78);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    (**(code **)(*param_6 + 8))(param_6,uVar8,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar7,param_3,local_res20,param_5,param_6);
  }
LAB_1432a826d:
  param_2[1] = plVar7;
  *param_2 = "PxDistanceJoint";
  param_2[2] = plVar7;
  return param_2;
}



// FUNCTION 1432a82a0 fileToObject body=477 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxFixedJoint>::fileToObject
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_res10;
  char *local_res18;
  undefined8 local_res20;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  plVar6 = plVar7;
  plVar5 = plVar7;
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor0",&local_res10);
    bVar1 = 0;
    if (cVar3 == '\0') {
LAB_1432a836f:
      bVar2 = 1;
    }
    else {
      local_res18 = local_res10;
      plVar5 = plVar10;
      if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) goto LAB_1432a836f;
      uVar4 = _strtoui64(local_res10,&local_res18,10);
      if (uVar4 == 0) goto LAB_1432a836f;
      plVar5 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar5 != (longlong *)0x0) goto LAB_1432a836f;
      bVar2 = 0;
    }
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor1",&local_88);
    if (cVar3 == '\0') {
LAB_1432a83c9:
      bVar1 = 1;
    }
    else {
      local_80 = local_88;
      plVar6 = plVar9;
      if ((local_88 == (char *)0x0) || (*local_88 == '\0')) goto LAB_1432a83c9;
      uVar4 = _strtoui64(local_88,&local_80,10);
      if (uVar4 == 0) goto LAB_1432a83c9;
      plVar6 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1432a83c9;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (!(bool)(bVar2 & bVar1)) goto LAB_1432a844d;
  }
  plVar7 = (longlong *)PxFixedJointCreate(*param_5,plVar5,&local_58,plVar6,&local_78);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    (**(code **)(*param_6 + 8))(param_6,uVar8,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar7,param_3,local_res20,param_5,param_6);
  }
LAB_1432a844d:
  param_2[1] = plVar7;
  *param_2 = "PxFixedJoint";
  param_2[2] = plVar7;
  return param_2;
}



// FUNCTION 1432a8480 fileToObject body=477 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxPrismaticJoint>::fileToObject
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_res10;
  char *local_res18;
  undefined8 local_res20;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  plVar6 = plVar7;
  plVar5 = plVar7;
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor0",&local_res10);
    bVar1 = 0;
    if (cVar3 == '\0') {
LAB_1432a854f:
      bVar2 = 1;
    }
    else {
      local_res18 = local_res10;
      plVar5 = plVar10;
      if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) goto LAB_1432a854f;
      uVar4 = _strtoui64(local_res10,&local_res18,10);
      if (uVar4 == 0) goto LAB_1432a854f;
      plVar5 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar5 != (longlong *)0x0) goto LAB_1432a854f;
      bVar2 = 0;
    }
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor1",&local_88);
    if (cVar3 == '\0') {
LAB_1432a85a9:
      bVar1 = 1;
    }
    else {
      local_80 = local_88;
      plVar6 = plVar9;
      if ((local_88 == (char *)0x0) || (*local_88 == '\0')) goto LAB_1432a85a9;
      uVar4 = _strtoui64(local_88,&local_80,10);
      if (uVar4 == 0) goto LAB_1432a85a9;
      plVar6 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1432a85a9;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (!(bool)(bVar2 & bVar1)) goto LAB_1432a862d;
  }
  plVar7 = (longlong *)PxPrismaticJointCreate(*param_5,plVar5,&local_58,plVar6,&local_78);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    (**(code **)(*param_6 + 8))(param_6,uVar8,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar7,param_3,local_res20,param_5,param_6);
  }
LAB_1432a862d:
  param_2[1] = plVar7;
  *param_2 = "PxPrismaticJoint";
  param_2[2] = plVar7;
  return param_2;
}



// FUNCTION 1432a8660 fileToObject body=477 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxRevoluteJoint>::fileToObject
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_res10;
  char *local_res18;
  undefined8 local_res20;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  plVar6 = plVar7;
  plVar5 = plVar7;
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor0",&local_res10);
    bVar1 = 0;
    if (cVar3 == '\0') {
LAB_1432a872f:
      bVar2 = 1;
    }
    else {
      local_res18 = local_res10;
      plVar5 = plVar10;
      if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) goto LAB_1432a872f;
      uVar4 = _strtoui64(local_res10,&local_res18,10);
      if (uVar4 == 0) goto LAB_1432a872f;
      plVar5 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar5 != (longlong *)0x0) goto LAB_1432a872f;
      bVar2 = 0;
    }
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor1",&local_88);
    if (cVar3 == '\0') {
LAB_1432a8789:
      bVar1 = 1;
    }
    else {
      local_80 = local_88;
      plVar6 = plVar9;
      if ((local_88 == (char *)0x0) || (*local_88 == '\0')) goto LAB_1432a8789;
      uVar4 = _strtoui64(local_88,&local_80,10);
      if (uVar4 == 0) goto LAB_1432a8789;
      plVar6 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1432a8789;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (!(bool)(bVar2 & bVar1)) goto LAB_1432a880d;
  }
  plVar7 = (longlong *)PxRevoluteJointCreate(*param_5,plVar5,&local_58,plVar6,&local_78);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    (**(code **)(*param_6 + 8))(param_6,uVar8,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar7,param_3,local_res20,param_5,param_6);
  }
LAB_1432a880d:
  param_2[1] = plVar7;
  *param_2 = "PxRevoluteJoint";
  param_2[2] = plVar7;
  return param_2;
}



// FUNCTION 1432a8840 fileToObject body=477 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxSphericalJoint>::fileToObject
          (longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *local_res10;
  char *local_res18;
  undefined8 local_res20;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res20 = param_4;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  plVar6 = plVar7;
  plVar5 = plVar7;
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor0",&local_res10);
    bVar1 = 0;
    if (cVar3 == '\0') {
LAB_1432a890f:
      bVar2 = 1;
    }
    else {
      local_res18 = local_res10;
      plVar5 = plVar10;
      if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) goto LAB_1432a890f;
      uVar4 = _strtoui64(local_res10,&local_res18,10);
      if (uVar4 == 0) goto LAB_1432a890f;
      plVar5 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar5 != (longlong *)0x0) goto LAB_1432a890f;
      bVar2 = 0;
    }
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"actor1",&local_88);
    if (cVar3 == '\0') {
LAB_1432a8969:
      bVar1 = 1;
    }
    else {
      local_80 = local_88;
      plVar6 = plVar9;
      if ((local_88 == (char *)0x0) || (*local_88 == '\0')) goto LAB_1432a8969;
      uVar4 = _strtoui64(local_88,&local_80,10);
      if (uVar4 == 0) goto LAB_1432a8969;
      plVar6 = (longlong *)Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1432a8969;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (!(bool)(bVar2 & bVar1)) goto LAB_1432a89ed;
  }
  plVar7 = (longlong *)PxSphericalJointCreate(*param_5,plVar5,&local_58,plVar6,&local_78);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7);
    (**(code **)(*param_6 + 8))(param_6,uVar8,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar7,param_3,local_res20,param_5,param_6);
  }
LAB_1432a89ed:
  param_2[1] = plVar7;
  *param_2 = "PxSphericalJoint";
  param_2[2] = plVar7;
  return param_2;
}



// FUNCTION 1432a8a20 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxJointRepXSerializer<physx::PxD6Joint>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxD6Joint>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 1432a8a90 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxJointRepXSerializer<physx::PxDistanceJoint>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxDistanceJoint>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 1432a8b00 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxJointRepXSerializer<physx::PxFixedJoint>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxFixedJoint>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 1432a8b70 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxJointRepXSerializer<physx::PxPrismaticJoint>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxPrismaticJoint>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 1432a8be0 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxJointRepXSerializer<physx::PxRevoluteJoint>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxRevoluteJoint>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 1432a8c50 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxJointRepXSerializer<physx::PxSphericalJoint>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxSphericalJoint>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 1432a8cc0 PxJointGeneratedValues body=370 status=ok
// SIG undefined PxJointGeneratedValues(void)

longlong physx::PxJointGeneratedValues::PxJointGeneratedValues(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)(*param_2 + 0x48))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 100);
  (**(code **)(*param_2 + 0x58))(param_2,param_1 + 0x70);
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0x84);
  uVar4 = (**(code **)(*param_2 + 0x90))(param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar1 = (**(code **)(*param_2 + 200))(param_2);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xd8))(param_2);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(longlong *)(param_1 + 0xb0) = param_2[2];
  (**(code **)(*param_2 + 0x30))(param_2,param_1,param_1 + 8);
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x28);
  do {
    (**(code **)(*param_2 + 0x40))(param_2,&local_28,uVar3);
    uVar3 = uVar3 + 1;
    *(undefined8 *)(puVar2 + -6) = local_28;
    *(undefined8 *)(puVar2 + -4) = uStack_20;
    puVar2[-2] = local_18;
    *puVar2 = local_10;
    puVar2[-1] = local_14;
    puVar2 = puVar2 + 7;
  } while (uVar3 < 2);
  (**(code **)(*param_2 + 0x68))(param_2,param_1 + 0x7c,param_1 + 0x80);
  return param_1;
}



// FUNCTION 1432a8e40 PxJointGeneratedInfo body=721 status=ok
// SIG undefined PxJointGeneratedInfo(void)

undefined8 * physx::PxJointGeneratedInfo::PxJointGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x1b4;
  *param_1 = "Actors";
  param_1[2] = "actor0";
  param_1[3] = "actor1";
  param_1[4] = &LAB_1432aa500;
  param_1[5] = &LAB_1432aa510;
  param_1[6] = "LocalPose";
  param_1[8] = &LAB_1432aa520;
  param_1[9] = getPxJoint_LocalPose;
  *(undefined4 *)(param_1 + 7) = 0x1b5;
  param_1[10] = "RelativeTransform";
  param_1[0xc] = getPxJoint_RelativeTransform;
  *(undefined4 *)(param_1 + 0xb) = 0x1b6;
  param_1[0xd] = "RelativeLinearVelocity";
  param_1[0xf] = getPxJoint_RelativeLinearVelocity;
  *(undefined4 *)(param_1 + 0xe) = 0x1b7;
  param_1[0x10] = "RelativeAngularVelocity";
  param_1[0x12] = getPxJoint_RelativeAngularVelocity;
  *(undefined4 *)(param_1 + 0x11) = 0x1b8;
  param_1[0x13] = "BreakForce";
  param_1[0x15] = "force";
  param_1[0x16] = "torque";
  param_1[0x17] = &LAB_1432aa5f0;
  param_1[0x18] = &LAB_1432aa600;
  *(undefined4 *)(param_1 + 0x14) = 0x1b9;
  param_1[0x19] = "ConstraintFlags";
  param_1[0x1b] = getPxJoint_ConstraintFlags;
  param_1[0x1c] = setPxJoint_ConstraintFlags;
  *(undefined4 *)(param_1 + 0x1a) = 0x1ba;
  param_1[0x1d] = "InvMassScale0";
  param_1[0x1f] = &LAB_1432aa680;
  param_1[0x20] = &LAB_1432aa670;
  *(undefined4 *)(param_1 + 0x1e) = 0x1bb;
  param_1[0x21] = "InvInertiaScale0";
  param_1[0x23] = &LAB_1432aa6a0;
  param_1[0x24] = &LAB_1432aa690;
  *(undefined4 *)(param_1 + 0x22) = 0x1bc;
  param_1[0x25] = "InvMassScale1";
  param_1[0x27] = &LAB_1432aa6c0;
  param_1[0x28] = &LAB_1432aa6b0;
  *(undefined4 *)(param_1 + 0x26) = 0x1bd;
  param_1[0x29] = "InvInertiaScale1";
  param_1[0x2b] = &LAB_1432aa6e0;
  param_1[0x2c] = &LAB_1432aa6d0;
  *(undefined4 *)(param_1 + 0x2a) = 0x1be;
  param_1[0x2d] = "Constraint";
  *(undefined4 *)(param_1 + 0x2e) = 0x1bf;
  param_1[0x2f] = &LAB_1432aa6f0;
  param_1[0x30] = &DAT_145af6194;
  param_1[0x32] = &LAB_1432aa710;
  param_1[0x33] = &LAB_1432aa700;
  *(undefined4 *)(param_1 + 0x31) = 0x1c0;
  param_1[0x34] = "Scene";
  param_1[0x36] = &LAB_1432aa720;
  *(undefined4 *)(param_1 + 0x35) = 0x1c1;
  param_1[0x37] = "UserData";
  param_1[0x39] = AK::WriteBytesMem::Bytes;
  param_1[0x3a] = FStringTable::SetOwnerAsset;
  *(undefined4 *)(param_1 + 0x38) = 0x1c2;
  return param_1;
}



// FUNCTION 1432a9120 PxD6JointGeneratedValues body=451 status=ok
// SIG undefined PxD6JointGeneratedValues(void)

longlong physx::PxD6JointGeneratedValues::PxD6JointGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  PxJointGeneratedValues::PxJointGeneratedValues();
  uVar7 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  uVar7 = (**(code **)(*param_2 + 0x100))(param_2);
  *(undefined4 *)(param_1 + 0xd4) = uVar7;
  uVar7 = (**(code **)(*param_2 + 0x108))(param_2);
  *(undefined4 *)(param_1 + 0xd8) = uVar7;
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xdc);
  (**(code **)(*param_2 + 0x128))(param_2,param_1 + 0xf4);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x110);
  lVar3 = 6;
  puVar1 = (undefined8 *)(param_1 + 300);
  uVar4 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0x7f7fffff;
    puVar1 = puVar1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (**(code **)(*param_2 + 0x158))(param_2,param_1 + 0x18c);
  uVar7 = (**(code **)(*param_2 + 0x178))(param_2);
  *(undefined4 *)(param_1 + 0x1c0) = uVar7;
  uVar7 = (**(code **)(*param_2 + 0x188))(param_2);
  *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  puVar6 = (undefined4 *)(param_1 + 0xb8);
  uVar5 = uVar4;
  do {
    uVar7 = (**(code **)(*param_2 + 0xf0))(param_2,uVar5);
    uVar5 = uVar5 + 1;
    *puVar6 = uVar7;
    puVar6 = puVar6 + 1;
  } while (uVar5 < 6);
  puVar6 = (undefined4 *)(param_1 + 0x138);
  do {
    (**(code **)(*param_2 + 0x148))(param_2,&local_18,uVar4);
    uVar4 = uVar4 + 1;
    puVar6[-1] = local_10;
    *(undefined8 *)(puVar6 + -3) = local_18;
    *puVar6 = local_c;
    puVar6 = puVar6 + 4;
  } while (uVar4 < 6);
  (**(code **)(*param_2 + 0x168))(param_2,param_1 + 0x1a8,param_1 + 0x1b4);
  return param_1;
}



// FUNCTION 1432a92f0 PxD6JointGeneratedInfo body=671 status=ok
// SIG undefined PxD6JointGeneratedInfo(void)

longlong physx::PxD6JointGeneratedInfo::PxD6JointGeneratedInfo(longlong param_1)

{
  PxJointGeneratedInfo::PxJointGeneratedInfo();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1c5;
  *(char **)(param_1 + 0x1d8) = "Motion";
  *(undefined1 **)(param_1 + 0x1e8) = &LAB_1432aa730;
  *(undefined1 **)(param_1 + 0x1f0) = &LAB_1432aa740;
  *(char **)(param_1 + 0x1f8) = "Twist";
  *(undefined1 **)(param_1 + 0x208) = &LAB_1432aa750;
  *(undefined4 *)(param_1 + 0x200) = 0x1c6;
  *(char **)(param_1 + 0x210) = "SwingYAngle";
  *(undefined1 **)(param_1 + 0x220) = &LAB_1432aa760;
  *(undefined4 *)(param_1 + 0x218) = 0x1c7;
  *(char **)(param_1 + 0x228) = "SwingZAngle";
  *(undefined1 **)(param_1 + 0x238) = &LAB_1432aa770;
  *(undefined4 *)(param_1 + 0x230) = 0x1c8;
  *(char **)(param_1 + 0x240) = "LinearLimit";
  *(code **)(param_1 + 0x250) = FUN_1432aa790;
  *(undefined1 **)(param_1 + 600) = &LAB_1432aa780;
  *(undefined4 *)(param_1 + 0x248) = 0x1c9;
  *(char **)(param_1 + 0x260) = "TwistLimit";
  *(code **)(param_1 + 0x270) = getPxD6Joint_TwistLimit;
  *(undefined1 **)(param_1 + 0x278) = &LAB_1432aa7c0;
  *(undefined4 *)(param_1 + 0x268) = 0x1ca;
  *(char **)(param_1 + 0x280) = "SwingLimit";
  *(code **)(param_1 + 0x290) = getPxD6Joint_SwingLimit;
  *(undefined1 **)(param_1 + 0x298) = &LAB_1432aa800;
  *(undefined4 *)(param_1 + 0x288) = 0x1cb;
  *(char **)(param_1 + 0x2a0) = "Drive";
  *(undefined1 **)(param_1 + 0x2b0) = &LAB_1432aa840;
  *(code **)(param_1 + 0x2b8) = getPxD6Joint_Drive;
  *(undefined4 *)(param_1 + 0x2a8) = 0x1cc;
  *(char **)(param_1 + 0x2c0) = "DrivePosition";
  *(code **)(param_1 + 0x2d0) = getPxD6Joint_DrivePosition;
  *(undefined1 **)(param_1 + 0x2d8) = &LAB_1432aa880;
  *(undefined4 *)(param_1 + 0x2c8) = 0x1cd;
  *(char **)(param_1 + 0x2e0) = "DriveVelocity";
  *(char **)(param_1 + 0x2f0) = "linear";
  *(char **)(param_1 + 0x2f8) = "angular";
  *(undefined1 **)(param_1 + 0x300) = &LAB_1432aa8c0;
  *(undefined1 **)(param_1 + 0x308) = &LAB_1432aa8d0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x1ce;
  *(char **)(param_1 + 0x310) = "ProjectionLinearTolerance";
  *(undefined1 **)(param_1 + 800) = &LAB_1432aa8f0;
  *(undefined1 **)(param_1 + 0x328) = &LAB_1432aa8e0;
  *(undefined4 *)(param_1 + 0x318) = 0x1cf;
  *(char **)(param_1 + 0x330) = "ProjectionAngularTolerance";
  *(undefined4 *)(param_1 + 0x338) = 0x1d0;
  *(undefined1 **)(param_1 + 0x340) = &LAB_1432aa910;
  *(undefined1 **)(param_1 + 0x348) = &LAB_1432aa900;
  *(char **)(param_1 + 0x350) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x360) = &LAB_1432aa920;
  *(undefined4 *)(param_1 + 0x358) = 0x1d1;
  return param_1;
}



// FUNCTION 1432a95a0 PxDistanceJointGeneratedValues body=190 status=ok
// SIG undefined PxDistanceJointGeneratedValues(void)

longlong physx::PxDistanceJointGeneratedValues::PxDistanceJointGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  PxJointGeneratedValues::PxJointGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x108))(param_2);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x138))(param_2);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0xd0);
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  return param_1;
}



// FUNCTION 1432a9670 PxDistanceJointGeneratedInfo body=411 status=ok
// SIG undefined PxDistanceJointGeneratedInfo(void)

longlong physx::PxDistanceJointGeneratedInfo::PxDistanceJointGeneratedInfo(longlong param_1)

{
  PxJointGeneratedInfo::PxJointGeneratedInfo();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1d4;
  *(char **)(param_1 + 0x1d8) = "Distance";
  *(undefined1 **)(param_1 + 0x1e8) = &LAB_1432aa930;
  *(char **)(param_1 + 0x1f0) = "MinDistance";
  *(undefined1 **)(param_1 + 0x200) = &LAB_1432aa950;
  *(undefined1 **)(param_1 + 0x208) = &LAB_1432aa940;
  *(undefined4 *)(param_1 + 0x1f8) = 0x1d5;
  *(char **)(param_1 + 0x210) = "MaxDistance";
  *(undefined1 **)(param_1 + 0x220) = &LAB_1432aa970;
  *(undefined1 **)(param_1 + 0x228) = &LAB_1432aa960;
  *(undefined4 *)(param_1 + 0x218) = 0x1d6;
  *(char **)(param_1 + 0x230) = "Tolerance";
  *(undefined1 **)(param_1 + 0x240) = &LAB_1432aa990;
  *(undefined1 **)(param_1 + 0x248) = &LAB_1432aa980;
  *(undefined4 *)(param_1 + 0x238) = 0x1d7;
  *(char **)(param_1 + 0x250) = "Stiffness";
  *(undefined1 **)(param_1 + 0x260) = &LAB_1432aa9b0;
  *(undefined1 **)(param_1 + 0x268) = &LAB_1432aa9a0;
  *(undefined4 *)(param_1 + 600) = 0x1d8;
  *(char **)(param_1 + 0x270) = "Damping";
  *(undefined1 **)(param_1 + 0x280) = &LAB_1432aa9d0;
  *(undefined1 **)(param_1 + 0x288) = &LAB_1432aa9c0;
  *(undefined4 *)(param_1 + 0x278) = 0x1d9;
  *(char **)(param_1 + 0x290) = "DistanceJointFlags";
  *(code **)(param_1 + 0x2a0) = getPxDistanceJoint_DistanceJointFlags;
  *(code **)(param_1 + 0x2a8) = setPxDistanceJoint_DistanceJointFlags;
  *(undefined4 *)(param_1 + 0x298) = 0x1da;
  *(char **)(param_1 + 0x2b0) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_1432aaa40;
  *(undefined4 *)(param_1 + 0x2b8) = 0x1db;
  return param_1;
}



// FUNCTION 1432a9820 PxFixedJointGeneratedValues body=91 status=ok
// SIG undefined PxFixedJointGeneratedValues(void)

longlong physx::PxFixedJointGeneratedValues::PxFixedJointGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  PxJointGeneratedValues::PxJointGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return param_1;
}



// FUNCTION 1432a9890 PxFixedJointGeneratedInfo body=165 status=ok
// SIG undefined PxFixedJointGeneratedInfo(void)

longlong physx::PxFixedJointGeneratedInfo::PxFixedJointGeneratedInfo(longlong param_1)

{
  PxJointGeneratedInfo::PxJointGeneratedInfo();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1de;
  *(char **)(param_1 + 0x1d8) = "ProjectionLinearTolerance";
  *(undefined1 **)(param_1 + 0x1e8) = &LAB_1432aaa60;
  *(undefined1 **)(param_1 + 0x1f0) = &LAB_1432aaa50;
  *(char **)(param_1 + 0x1f8) = "ProjectionAngularTolerance";
  *(undefined1 **)(param_1 + 0x208) = &LAB_1432aaa80;
  *(undefined1 **)(param_1 + 0x210) = &LAB_1432aaa70;
  *(undefined4 *)(param_1 + 0x200) = 0x1df;
  *(char **)(param_1 + 0x218) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x228) = &LAB_1432aaa90;
  *(undefined4 *)(param_1 + 0x220) = 0x1e0;
  return param_1;
}



// FUNCTION 1432a9940 PxPrismaticJointGeneratedValues body=169 status=ok
// SIG undefined PxPrismaticJointGeneratedValues(void)

longlong physx::PxPrismaticJointGeneratedValues::PxPrismaticJointGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  PxJointGeneratedValues::PxJointGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0xdc);
  uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x138))(param_2);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  return param_1;
}



// FUNCTION 1432a99f0 PxPrismaticJointGeneratedInfo body=345 status=ok
// SIG undefined PxPrismaticJointGeneratedInfo(void)

longlong physx::PxPrismaticJointGeneratedInfo::PxPrismaticJointGeneratedInfo(longlong param_1)

{
  PxJointGeneratedInfo::PxJointGeneratedInfo();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1e3;
  *(char **)(param_1 + 0x1d8) = "Position";
  *(undefined1 **)(param_1 + 0x1e8) = &LAB_1432aaaa0;
  *(char **)(param_1 + 0x1f0) = "Velocity";
  *(undefined1 **)(param_1 + 0x200) = &LAB_1432aaab0;
  *(undefined4 *)(param_1 + 0x1f8) = 0x1e4;
  *(char **)(param_1 + 0x208) = "Limit";
  *(code **)(param_1 + 0x218) = FUN_1432aaad0;
  *(undefined1 **)(param_1 + 0x220) = &LAB_1432aaac0;
  *(undefined4 *)(param_1 + 0x210) = 0x1e5;
  *(char **)(param_1 + 0x228) = "PrismaticJointFlags";
  *(code **)(param_1 + 0x238) = FUN_1432aab30;
  *(code **)(param_1 + 0x240) = setPxPrismaticJoint_PrismaticJointFlags;
  *(undefined4 *)(param_1 + 0x230) = 0x1e6;
  *(char **)(param_1 + 0x248) = "ProjectionLinearTolerance";
  *(undefined1 **)(param_1 + 600) = &LAB_1432aab70;
  *(undefined1 **)(param_1 + 0x260) = &LAB_1432aab60;
  *(undefined4 *)(param_1 + 0x250) = 0x1e7;
  *(char **)(param_1 + 0x268) = "ProjectionAngularTolerance";
  *(undefined1 **)(param_1 + 0x278) = &LAB_1432aab90;
  *(undefined1 **)(param_1 + 0x280) = &LAB_1432aab80;
  *(undefined4 *)(param_1 + 0x270) = 0x1e8;
  *(char **)(param_1 + 0x288) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x298) = &LAB_1432aaba0;
  *(undefined4 *)(param_1 + 0x290) = 0x1e9;
  return param_1;
}



// FUNCTION 1432a9b50 PxRevoluteJointGeneratedValues body=229 status=ok
// SIG undefined PxRevoluteJointGeneratedValues(void)

longlong physx::PxRevoluteJointGeneratedValues::PxRevoluteJointGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  PxJointGeneratedValues::PxJointGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  (**(code **)(*param_2 + 0x100))(param_2,param_1 + 0xc0);
  uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x120))(param_2);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x130))(param_2);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  (**(code **)(*param_2 + 0x148))(param_2,param_1 + 0xe8);
  uVar2 = (**(code **)(*param_2 + 0x158))(param_2);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x168))(param_2);
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  return param_1;
}



// FUNCTION 1432a9c40 PxRevoluteJointGeneratedInfo body=501 status=ok
// SIG undefined PxRevoluteJointGeneratedInfo(void)

longlong physx::PxRevoluteJointGeneratedInfo::PxRevoluteJointGeneratedInfo(longlong param_1)

{
  PxJointGeneratedInfo::PxJointGeneratedInfo();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1ec;
  *(char **)(param_1 + 0x1d8) = "Angle";
  *(undefined1 **)(param_1 + 0x1e8) = &LAB_1432aabb0;
  *(char **)(param_1 + 0x1f0) = "Velocity";
  *(undefined1 **)(param_1 + 0x200) = &LAB_1432aabc0;
  *(undefined4 *)(param_1 + 0x1f8) = 0x1ed;
  *(char **)(param_1 + 0x208) = "Limit";
  *(code **)(param_1 + 0x218) = FUN_1432aabe0;
  *(undefined1 **)(param_1 + 0x220) = &LAB_1432aabd0;
  *(undefined4 *)(param_1 + 0x210) = 0x1ee;
  *(char **)(param_1 + 0x228) = "DriveVelocity";
  *(undefined1 **)(param_1 + 0x238) = &LAB_1432aac20;
  *(undefined1 **)(param_1 + 0x240) = &LAB_1432aac10;
  *(undefined4 *)(param_1 + 0x230) = 0x1ef;
  *(char **)(param_1 + 0x248) = "DriveForceLimit";
  *(undefined1 **)(param_1 + 600) = &LAB_1432aac40;
  *(undefined1 **)(param_1 + 0x260) = &LAB_1432aac30;
  *(undefined4 *)(param_1 + 0x250) = 0x1f0;
  *(char **)(param_1 + 0x268) = "DriveGearRatio";
  *(undefined1 **)(param_1 + 0x278) = &LAB_1432aac60;
  *(undefined1 **)(param_1 + 0x280) = &LAB_1432aac50;
  *(undefined4 *)(param_1 + 0x270) = 0x1f1;
  *(char **)(param_1 + 0x288) = "RevoluteJointFlags";
  *(code **)(param_1 + 0x298) = getPxRevoluteJoint_RevoluteJointFlags;
  *(code **)(param_1 + 0x2a0) = setPxRevoluteJoint_RevoluteJointFlags;
  *(undefined4 *)(param_1 + 0x290) = 0x1f2;
  *(char **)(param_1 + 0x2a8) = "ProjectionLinearTolerance";
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_1432aace0;
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_1432aacd0;
  *(undefined4 *)(param_1 + 0x2b0) = 499;
  *(char **)(param_1 + 0x2c8) = "ProjectionAngularTolerance";
  *(undefined1 **)(param_1 + 0x2d8) = &LAB_1432aad00;
  *(undefined1 **)(param_1 + 0x2e0) = &LAB_1432aacf0;
  *(undefined4 *)(param_1 + 0x2d0) = 500;
  *(char **)(param_1 + 0x2e8) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x2f8) = &LAB_1432aad10;
  *(undefined4 *)(param_1 + 0x2f0) = 0x1f5;
  return param_1;
}



// FUNCTION 1432a9e40 PxSphericalJointGeneratedValues body=109 status=ok
// SIG undefined PxSphericalJointGeneratedValues(void)

longlong physx::PxSphericalJointGeneratedValues::PxSphericalJointGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  PxJointGeneratedValues::PxJointGeneratedValues();
  (**(code **)(*param_2 + 0xe8))(param_2,param_1 + 0xb8);
  (**(code **)(*param_2 + 0x108))(param_2,param_1 + 0xd4);
  uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  return param_1;
}



// FUNCTION 1432a9ec0 PxSphericalJointGeneratedInfo body=217 status=ok
// SIG undefined PxSphericalJointGeneratedInfo(void)

longlong physx::PxSphericalJointGeneratedInfo::PxSphericalJointGeneratedInfo(longlong param_1)

{
  PxJointGeneratedInfo::PxJointGeneratedInfo();
  *(undefined4 *)(param_1 + 0x1e0) = 0x1f8;
  *(char **)(param_1 + 0x1d8) = "LimitCone";
  *(code **)(param_1 + 0x1e8) = getPxSphericalJoint_LimitCone;
  *(undefined1 **)(param_1 + 0x1f0) = &LAB_1432aad20;
  *(char **)(param_1 + 0x1f8) = "SphericalJointFlags";
  *(code **)(param_1 + 0x208) = getPxSphericalJoint_SphericalJointFlags;
  *(code **)(param_1 + 0x210) = setPxSphericalJoint_SphericalJointFlags;
  *(undefined4 *)(param_1 + 0x200) = 0x1f9;
  *(char **)(param_1 + 0x218) = "ProjectionLinearTolerance";
  *(undefined1 **)(param_1 + 0x228) = &LAB_1432aadd0;
  *(undefined1 **)(param_1 + 0x230) = &LAB_1432aadc0;
  *(undefined4 *)(param_1 + 0x220) = 0x1fa;
  *(char **)(param_1 + 0x238) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x248) = &LAB_1432aade0;
  *(undefined4 *)(param_1 + 0x240) = 0x1fb;
  return param_1;
}



// FUNCTION 1432a9fd0 PxJointLimitParametersGeneratedInfo body=215 status=ok
// SIG undefined PxJointLimitParametersGeneratedInfo(void)

undefined8 *
physx::PxJointLimitParametersGeneratedInfo::PxJointLimitParametersGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x1fe;
  *param_1 = "Restitution";
  param_1[2] = FUN_1406a5e50;
  param_1[3] = &LAB_1432aae60;
  param_1[4] = "BounceThreshold";
  param_1[6] = FUN_140a32860;
  param_1[7] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 5) = 0x1ff;
  param_1[8] = "Stiffness";
  param_1[10] = FUN_14247f5a0;
  param_1[0xb] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 9) = 0x200;
  param_1[0xc] = "Damping";
  param_1[0xe] = &LAB_1432aae10;
  param_1[0xf] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0xd) = 0x201;
  param_1[0x10] = "ContactDistance";
  param_1[0x12] = FUN_1408d8930;
  param_1[0x13] = &LAB_1432aae40;
  *(undefined4 *)(param_1 + 0x11) = 0x202;
  return param_1;
}



// FUNCTION 1432aa0e0 PxJointLinearLimitGeneratedInfo body=75 status=ok
// SIG undefined PxJointLinearLimitGeneratedInfo(void)

longlong physx::PxJointLinearLimitGeneratedInfo::PxJointLinearLimitGeneratedInfo(longlong param_1)

{
  PxJointLimitParametersGeneratedInfo::PxJointLimitParametersGeneratedInfo();
  *(undefined4 *)(param_1 + 0xa8) = 0x205;
  *(char **)(param_1 + 0xa0) = "Value";
  *(undefined1 **)(param_1 + 0xb0) = &LAB_1432aae00;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_1412cf010;
  return param_1;
}



// FUNCTION 1432aa180 PxJointLinearLimitPairGeneratedInfo body=127 status=ok
// SIG undefined PxJointLinearLimitPairGeneratedInfo(void)

longlong physx::PxJointLinearLimitPairGeneratedInfo::PxJointLinearLimitPairGeneratedInfo
                   (longlong param_1)

{
  PxJointLimitParametersGeneratedInfo::PxJointLimitParametersGeneratedInfo();
  *(undefined4 *)(param_1 + 0xa8) = 0x208;
  *(char **)(param_1 + 0xa0) = "Upper";
  *(undefined1 **)(param_1 + 0xb0) = &LAB_1432aae00;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_1412cf010;
  *(char **)(param_1 + 0xc0) = "Lower";
  *(code **)(param_1 + 0xd0) = FUN_142eedeb0;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_1432aae30;
  *(undefined4 *)(param_1 + 200) = 0x209;
  return param_1;
}



// FUNCTION 1432aa250 PxJointAngularLimitPairGeneratedInfo body=127 status=ok
// SIG undefined PxJointAngularLimitPairGeneratedInfo(void)

longlong physx::PxJointAngularLimitPairGeneratedInfo::PxJointAngularLimitPairGeneratedInfo
                   (longlong param_1)

{
  PxJointLimitParametersGeneratedInfo::PxJointLimitParametersGeneratedInfo();
  *(undefined4 *)(param_1 + 0xa8) = 0x20c;
  *(char **)(param_1 + 0xa0) = "Upper";
  *(undefined1 **)(param_1 + 0xb0) = &LAB_1432aae00;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_1412cf010;
  *(char **)(param_1 + 0xc0) = "Lower";
  *(code **)(param_1 + 0xd0) = FUN_142eedeb0;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_1432aae30;
  *(undefined4 *)(param_1 + 200) = 0x20d;
  return param_1;
}



// FUNCTION 1432aa320 PxJointLimitConeGeneratedInfo body=127 status=ok
// SIG undefined PxJointLimitConeGeneratedInfo(void)

longlong physx::PxJointLimitConeGeneratedInfo::PxJointLimitConeGeneratedInfo(longlong param_1)

{
  PxJointLimitParametersGeneratedInfo::PxJointLimitParametersGeneratedInfo();
  *(undefined4 *)(param_1 + 0xa8) = 0x210;
  *(char **)(param_1 + 0xa0) = "YAngle";
  *(undefined1 **)(param_1 + 0xb0) = &LAB_1432aae00;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_1412cf010;
  *(char **)(param_1 + 0xc0) = "ZAngle";
  *(code **)(param_1 + 0xd0) = FUN_142eedeb0;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_1432aae30;
  *(undefined4 *)(param_1 + 200) = 0x211;
  return param_1;
}



// FUNCTION 1432aa450 PxD6JointDriveGeneratedInfo body=163 status=ok
// SIG undefined PxD6JointDriveGeneratedInfo(void)

undefined8 * physx::PxD6JointDriveGeneratedInfo::PxD6JointDriveGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x214;
  *param_1 = "Stiffness";
  param_1[2] = FUN_1406a5e50;
  param_1[3] = &LAB_1432aae60;
  param_1[4] = "Damping";
  param_1[6] = FUN_140a32860;
  param_1[7] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 5) = 0x215;
  param_1[8] = "ForceLimit";
  param_1[10] = FUN_14247f5a0;
  param_1[0xb] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 9) = 0x218;
  param_1[0xc] = "Flags";
  param_1[0xe] = &LAB_1432aadf0;
  param_1[0xf] = &LAB_1432aae20;
  *(undefined4 *)(param_1 + 0xd) = 0x219;
  return param_1;
}



// FUNCTION 1432aa530 getPxJoint_LocalPose body=33 status=ok
// SIG undefined getPxJoint_LocalPose(void)

undefined8 getPxJoint_LocalPose(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa560 getPxJoint_RelativeTransform body=33 status=ok
// SIG undefined getPxJoint_RelativeTransform(void)

undefined8 getPxJoint_RelativeTransform(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa590 getPxJoint_RelativeLinearVelocity body=33 status=ok
// SIG undefined getPxJoint_RelativeLinearVelocity(void)

undefined8 getPxJoint_RelativeLinearVelocity(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x50))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa5c0 getPxJoint_RelativeAngularVelocity body=33 status=ok
// SIG undefined getPxJoint_RelativeAngularVelocity(void)

undefined8 getPxJoint_RelativeAngularVelocity(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa610 setPxJoint_ConstraintFlags body=28 status=ok
// SIG undefined setPxJoint_ConstraintFlags(void)

void setPxJoint_ConstraintFlags(longlong *param_1,undefined2 *param_2)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0x70))(param_1,local_res8);
  return;
}



// FUNCTION 1432aa640 getPxJoint_ConstraintFlags body=36 status=ok
// SIG undefined getPxJoint_ConstraintFlags(void)

undefined8 getPxJoint_ConstraintFlags(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x80))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa790 FUN_1432aa790 body=36 status=ok
// SIG undefined FUN_1432aa790(void)

undefined8 FUN_1432aa790(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa7d0 getPxD6Joint_TwistLimit body=36 status=ok
// SIG undefined getPxD6Joint_TwistLimit(void)

undefined8 getPxD6Joint_TwistLimit(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x128))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa810 getPxD6Joint_SwingLimit body=36 status=ok
// SIG undefined getPxD6Joint_SwingLimit(void)

undefined8 getPxD6Joint_SwingLimit(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x138))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa850 getPxD6Joint_Drive body=36 status=ok
// SIG undefined getPxD6Joint_Drive(void)

undefined8 getPxD6Joint_Drive(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa890 getPxD6Joint_DrivePosition body=36 status=ok
// SIG undefined getPxD6Joint_DrivePosition(void)

undefined8 getPxD6Joint_DrivePosition(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x158))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aa9e0 setPxDistanceJoint_DistanceJointFlags body=31 status=ok
// SIG undefined setPxDistanceJoint_DistanceJointFlags(void)

void setPxDistanceJoint_DistanceJointFlags(longlong *param_1,undefined2 *param_2)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0x140))(param_1,local_res8);
  return;
}



// FUNCTION 1432aaa10 getPxDistanceJoint_DistanceJointFlags body=36 status=ok
// SIG undefined getPxDistanceJoint_DistanceJointFlags(void)

undefined8 getPxDistanceJoint_DistanceJointFlags(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x150))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aaad0 FUN_1432aaad0 body=36 status=ok
// SIG undefined FUN_1432aaad0(void)

undefined8 FUN_1432aaad0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aab00 setPxPrismaticJoint_PrismaticJointFlags body=31 status=ok
// SIG undefined setPxPrismaticJoint_PrismaticJointFlags(void)

void setPxPrismaticJoint_PrismaticJointFlags(longlong *param_1,undefined2 *param_2)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0x108))(param_1,local_res8);
  return;
}



// FUNCTION 1432aab30 FUN_1432aab30 body=36 status=ok
// SIG undefined FUN_1432aab30(void)

undefined8 FUN_1432aab30(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x118))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aabe0 FUN_1432aabe0 body=36 status=ok
// SIG undefined FUN_1432aabe0(void)

undefined8 FUN_1432aabe0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aac70 setPxRevoluteJoint_RevoluteJointFlags body=31 status=ok
// SIG undefined setPxRevoluteJoint_RevoluteJointFlags(void)

void setPxRevoluteJoint_RevoluteJointFlags(longlong *param_1,undefined2 *param_2)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0x138))(param_1,local_res8);
  return;
}



// FUNCTION 1432aaca0 getPxRevoluteJoint_RevoluteJointFlags body=36 status=ok
// SIG undefined getPxRevoluteJoint_RevoluteJointFlags(void)

undefined8 getPxRevoluteJoint_RevoluteJointFlags(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x148))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aad30 getPxSphericalJoint_LimitCone body=36 status=ok
// SIG undefined getPxSphericalJoint_LimitCone(void)

undefined8 getPxSphericalJoint_LimitCone(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0xe8))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aad60 setPxSphericalJoint_SphericalJointFlags body=31 status=ok
// SIG undefined setPxSphericalJoint_SphericalJointFlags(void)

void setPxSphericalJoint_SphericalJointFlags(longlong *param_1,undefined2 *param_2)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0xf8))(param_1,local_res8);
  return;
}



// FUNCTION 1432aad90 getPxSphericalJoint_SphericalJointFlags body=36 status=ok
// SIG undefined getPxSphericalJoint_SphericalJointFlags(void)

undefined8 getPxSphericalJoint_SphericalJointFlags(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x108))(param_2,param_1);
  return param_1;
}



// FUNCTION 1432aae70 PointerRemap body=13 status=ok
// SIG undefined PointerRemap(void)

undefined8 * physx::Sn::PointerRemap::PointerRemap(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1432aae90 ~PointerRemap body=69 status=ok
// SIG undefined ~PointerRemap(void)

void physx::Sn::PointerRemap::~PointerRemap(longlong *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  if ((((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0xc))) && (lVar1 = *param_1, lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
                    /* WARNING: Could not recover jumptable at 0x0001432aaec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
    return;
  }
  return;
}



// FUNCTION 1432aaf10 setObjectRef body=120 status=ok
// SIG undefined setObjectRef(void)

void physx::Sn::PointerRemap::setObjectRef(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*param_1 + uVar4 * 0x10) == param_2) {
        *(undefined4 *)(*param_1 + 8 + uVar4 * 0x10) = param_3;
        return;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
  }
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= uVar1) {
    local_18 = param_2;
    uStack_10 = param_3;
    shdfnd::
    Array<physx::Sn::PointerRemap::InternalData,physx::shdfnd::ReflectionAllocator<physx::Sn::PointerRemap::InternalData>_>
    ::growAndPushBack(param_1,&local_18);
    return;
  }
  plVar2 = (longlong *)((ulonglong)uVar1 * 0x10 + *param_1);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = CONCAT44(uStack_c,param_3);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 1432aaf90 getObjectRef body=53 status=ok
// SIG undefined getObjectRef(void)

ulonglong physx::Sn::PointerRemap::getObjectRef
                    (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      if (*(longlong *)(*param_1 + uVar3 * 0x10) == param_2) {
        uVar1 = *(undefined4 *)(*param_1 + 8 + uVar3 * 0x10);
        *param_3 = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 1));
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1432aafd0 convert body=420 status=ok
// SIG undefined convert(void)

ulonglong physx::Sn::ConvX::convert(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar8;
  undefined1 local_218 [512];
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
  if (((ulonglong)param_2 & 0xf) != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar1 = *param_2;
  output(param_1,iVar1);
  if (iVar1 == 0x44424553) {
    iVar1 = param_2[1];
    output(param_1,iVar1);
    iVar2 = param_2[2];
    output(param_1,iVar2);
    cVar3 = checkCompatibility(iVar1,iVar2);
    if (cVar3 == '\0') {
      getCompatibilityVersionsStr(local_218,0x200);
      uVar4 = displayMessage(param_1,4,
                             "PxBinaryConverter: Buffer contains data version (%x-%d) is incompatible with this PhysX sdk.\n These versions would be compatible: %s"
                             ,iVar1,CONCAT44(uVar8,iVar2),local_218);
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      output(param_1,param_2[3]);
      iVar1 = param_2[4];
      output(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x40));
      if (iVar1 == *(int *)(*(longlong *)(param_1 + 8) + 0x40)) {
        local_res18[0] = param_3 + -0x18;
        *(bool *)(param_1 + 0x152) = param_2[5] != 0;
        output(param_1,1);
        lVar7 = convertReferenceTables(param_1,param_2 + 6,local_res18,local_res10);
        uVar4 = 0;
        if (lVar7 != 0) {
          uVar4 = convertCollection(param_1,lVar7,local_res18[0],local_res10[0]);
          *(undefined1 *)(param_1 + 0x152) = 0;
          return uVar4;
        }
      }
      else {
        uVar5 = getBinaryPlatformName();
        uVar6 = getBinaryPlatformName(iVar1);
        uVar4 = displayMessage(param_1,4,
                               "PxBinaryConverter: Mismatch of platform tags of binary data and metadata:\n Binary Data: %s\n MetaData: %s\n"
                               ,uVar6,uVar5);
      }
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    uVar4 = displayMessage(param_1,4,
                           "PxBinaryConverter: Buffer contains data with bad header indicating invalid serialized data."
                          );
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 1432ab180 resetConvexFlags body=8 status=ok
// SIG undefined resetConvexFlags(void)

void physx::Sn::ConvX::resetConvexFlags(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1432ab190 _enumerateFields body=574 status=ok
// SIG undefined _enumerateFields(void)

void physx::Sn::ConvX::_enumerateFields
               (undefined8 param_1,longlong param_2,longlong param_3,int *param_4,int param_5,
               undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = (ulonglong)*(uint *)(param_2 + 0x48);
  if (*(uint *)(param_2 + 0x48) != 0) {
    local_48 = 0;
    do {
      lVar5 = *(longlong *)(param_2 + 0x40);
      uVar4 = *(uint *)(local_48 + 0x20 + lVar5);
      if ((uVar4 & 0x11) == 0) {
        iVar12 = param_5 + *(int *)(local_48 + 0x10 + lVar5);
        if ((uVar4 >> 8 & 1) == 0) {
          if ((uVar4 & 8) == 0) {
            plVar10 = (longlong *)getMetaClass(param_1,*(undefined8 *)(local_48 + lVar5),param_6);
            if (*plVar10 == 0) {
              iVar11 = 0;
              if (0 < *(int *)(local_48 + 0x18 + lVar5)) {
                do {
                  _enumerateFields(param_1,plVar10,param_3,param_4,iVar12,param_6);
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + *(int *)(local_48 + 0x14 + lVar5) /
                                    *(int *)(local_48 + 0x18 + lVar5);
                } while (iVar11 < *(int *)(local_48 + 0x18 + lVar5));
              }
            }
            else {
              lVar9 = (longlong)*param_4;
              uVar8 = ((undefined8 *)(local_48 + lVar5))[1];
              puVar1 = (undefined8 *)(param_3 + lVar9 * 0x48);
              *puVar1 = *(undefined8 *)(local_48 + lVar5);
              puVar1[1] = uVar8;
              puVar1 = (undefined8 *)(local_48 + 0x10 + lVar5);
              uVar8 = puVar1[1];
              puVar2 = (undefined8 *)(param_3 + 0x10 + lVar9 * 0x48);
              *puVar2 = *puVar1;
              puVar2[1] = uVar8;
              *(undefined8 *)(param_3 + 0x20 + lVar9 * 0x48) =
                   *(undefined8 *)(local_48 + 0x20 + lVar5);
              *(int *)(param_3 + 0x28 + (longlong)*param_4 * 0x48) = iVar12;
              iVar12 = *param_4;
              uVar6 = *(undefined4 *)((longlong)plVar10 + 4);
              lVar5 = plVar10[1];
              uVar7 = *(undefined4 *)((longlong)plVar10 + 0xc);
              puVar3 = (undefined4 *)(param_3 + 0x30 + (longlong)iVar12 * 0x48);
              *puVar3 = (int)*plVar10;
              puVar3[1] = uVar6;
              puVar3[2] = (int)lVar5;
              puVar3[3] = uVar7;
              *(longlong *)(param_3 + 0x40 + (longlong)iVar12 * 0x48) = plVar10[2];
              *param_4 = *param_4 + 1;
            }
            goto LAB_1432ab3a5;
          }
          lVar9 = (longlong)*param_4;
          uVar8 = ((undefined8 *)(local_48 + lVar5))[1];
          local_20 = 0;
          puVar1 = (undefined8 *)(param_3 + lVar9 * 0x48);
          *puVar1 = *(undefined8 *)(local_48 + lVar5);
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(local_48 + 0x10 + lVar5);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(param_3 + 0x10 + lVar9 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined8 *)(param_3 + 0x20 + lVar9 * 0x48) = *(undefined8 *)(local_48 + 0x20 + lVar5);
          iVar11 = *param_4;
          local_30 = convertPtr;
        }
        else {
          lVar9 = (longlong)*param_4;
          uVar8 = ((undefined8 *)(local_48 + lVar5))[1];
          local_30 = (code *)0x0;
          local_20 = 0xffffffff;
          puVar1 = (undefined8 *)(param_3 + lVar9 * 0x48);
          *puVar1 = *(undefined8 *)(local_48 + lVar5);
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(local_48 + 0x10 + lVar5);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(param_3 + 0x10 + lVar9 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined8 *)(param_3 + 0x20 + lVar9 * 0x48) = *(undefined8 *)(local_48 + 0x20 + lVar5);
          iVar11 = *param_4;
        }
        *(int *)(param_3 + 0x28 + (longlong)iVar11 * 0x48) = iVar12;
        iVar12 = *param_4;
        puVar3 = (undefined4 *)(param_3 + 0x30 + (longlong)iVar12 * 0x48);
        *puVar3 = (undefined4)local_30;
        puVar3[1] = local_30._4_4_;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(ulonglong *)(param_3 + 0x40 + (longlong)iVar12 * 0x48) = CONCAT44(uStack_1c,local_20);
        *param_4 = *param_4 + 1;
      }
LAB_1432ab3a5:
      local_48 = local_48 + 0x28;
      local_40 = local_40 - 1;
    } while (local_40 != 0);
  }
  return;
}



// FUNCTION 1432ab3e0 _enumerateExtraData body=494 status=ok
// SIG undefined _enumerateExtraData(void)

void physx::Sn::ConvX::_enumerateExtraData
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
               int param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char *_Str1;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong local_38;
  
  local_38 = (ulonglong)*(uint *)(param_3 + 0x48);
  if (*(uint *)(param_3 + 0x48) != 0) {
    lVar7 = 0;
    do {
      puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x40) + lVar7);
      if ((*(uint *)(puVar6 + 4) & 5) == 0) {
        _Str1 = (char *)*puVar6;
        if ((*(uint *)(puVar6 + 4) >> 8 & 1) == 0) {
LAB_1432ab4d6:
          if ((*(uint *)(puVar6 + 4) & 0x10) == 0) {
            if ((((*(uint *)(puVar6 + 4) & 8) == 0) &&
                (plVar5 = (longlong *)getMetaClass(param_1,_Str1,param_7), plVar5 != (longlong *)0x0
                )) && (*plVar5 == 0)) {
              _enumerateExtraData(param_1,param_2,plVar5,param_4,param_5,
                                  param_6 + *(int *)(puVar6 + 2),param_7);
            }
          }
          else {
            lVar4 = (longlong)*param_5;
            uVar2 = puVar6[1];
            puVar1 = (undefined8 *)(param_4 + lVar4 * 0x30);
            *puVar1 = *puVar6;
            puVar1[1] = uVar2;
            uVar2 = puVar6[3];
            puVar1 = (undefined8 *)(param_4 + 0x10 + lVar4 * 0x30);
            *puVar1 = puVar6[2];
            puVar1[1] = uVar2;
            *(undefined8 *)(param_4 + 0x20 + lVar4 * 0x30) = puVar6[4];
            *(int *)(param_4 + 0x28 + (longlong)*param_5 * 0x30) = param_6 + *(int *)(puVar6 + 2);
            *param_5 = *param_5 + 1;
          }
        }
        else if ((*(char **)(param_3 + 0x20) != (char *)0x0) &&
                (iVar3 = ::_guard_xfg_dispatch_icall_nop
                                   (*(char **)(param_3 + 0x20),"Gu::GeometryUnion"), iVar3 == 0)) {
          _Str1 = (char *)getTypeName(param_1,_Str1,*(undefined4 *)(param_6 + param_2));
          iVar3 = ::_guard_xfg_dispatch_icall_nop(_Str1,"PxTriangleMeshGeometryLL");
          if ((iVar3 == 0) ||
             (iVar3 = ::_guard_xfg_dispatch_icall_nop(_Str1,"PxHeightFieldGeometryLL"), iVar3 == 0))
          goto LAB_1432ab4d6;
        }
      }
      lVar7 = lVar7 + 0x28;
      local_38 = local_38 - 1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 1432ab5e0 read64 body=36 status=ok
// SIG undefined read64(void)

undefined8 physx::Sn::ConvX::read64(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  *param_2 = (longlong)(puVar1 + 1);
  uVar2 = *puVar1;
  output(param_1,uVar2);
  return uVar2;
}



// FUNCTION 1432ab610 read32 body=34 status=ok
// SIG undefined read32(void)

undefined4 physx::Sn::ConvX::read32(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_2;
  *param_2 = (longlong)(puVar2 + 1);
  uVar1 = *puVar2;
  output(param_1,uVar1);
  return uVar1;
}



// FUNCTION 1432ab640 read16 body=37 status=ok
// SIG undefined read16(void)

undefined2 physx::Sn::ConvX::read16(undefined8 param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)*param_2;
  *param_2 = (longlong)(puVar2 + 1);
  uVar1 = *puVar2;
  output(param_1,uVar1);
  return uVar1;
}



// FUNCTION 1432ab670 convertClass body=2455 status=ok
// SIG undefined convertClass(void)

undefined8
physx::Sn::ConvX::convertClass
          (longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  PxAllocatorCallback *pPVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  size_t sVar14;
  longlong *plVar15;
  char *pcVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char local_res18 [8];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  TempAllocator local_a8 [4];
  uint local_a4;
  uint local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  ulonglong local_60;
  undefined8 *local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  
  local_res18[0] = '\0';
  displayMessage(param_1,1,&DAT_145af6478,param_3[4]);
  displayMessage(param_1,1,"+++++++++++++++++++++++++++++++++++++++++++++\n");
  iVar4 = ::_guard_xfg_dispatch_icall_nop((char *)param_3[4],"ConvexMesh");
  local_b0 = 0;
  local_44 = (uint)(iVar4 == 0);
  local_78 = '\x01';
  local_80 = physx::shdfnd::TempAllocator::allocate
                       (local_a8,0x4800,
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                        ,0xf7);
  local_a4 = 0;
  local_68 = '\x01';
  local_70 = physx::shdfnd::TempAllocator::allocate
                       (local_a8,0x4800,
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                        ,0xf9);
  puVar6 = (undefined8 *)getMetaClass(param_1,param_3[4]);
  if (*param_3 == 0) {
    local_b0 = 0;
    _enumerateFields(param_1,param_3,local_80,&local_b0,0,1);
    local_a4 = 0;
    _enumerateFields(param_1,puVar6,local_70,&local_a4,0,2);
  }
  else {
    lVar17 = param_3[1];
    local_80[6] = *param_3;
    local_80[7] = lVar17;
    local_80[8] = param_3[2];
    *(undefined4 *)(local_80 + 5) = param_4;
    *local_80 = param_3[4];
    local_80[1] = param_3[4];
    *(undefined4 *)(local_80 + 2) = param_4;
    *(int *)((longlong)local_80 + 0x14) = (int)param_3[5];
    *(undefined4 *)(local_80 + 3) = 1;
    *(undefined4 *)(local_80 + 4) = 0;
    local_b0 = 1;
    uVar9 = puVar6[1];
    local_70[6] = *puVar6;
    local_70[7] = uVar9;
    local_70[8] = puVar6[2];
    *(undefined4 *)(local_70 + 5) = param_4;
    *local_70 = puVar6[4];
    local_70[1] = puVar6[4];
    *(undefined4 *)(local_70 + 2) = param_4;
    *(undefined4 *)((longlong)local_70 + 0x14) = *(undefined4 *)(puVar6 + 5);
    *(undefined4 *)(local_70 + 3) = 1;
    *(undefined4 *)(local_70 + 4) = 0;
    local_a4 = 1;
  }
  uVar12 = 0;
  local_b8 = 0;
  local_40 = local_a4;
  if ((int)local_a4 < (int)local_b0) {
    local_40 = local_b0;
  }
  local_a0 = 0;
  local_4c = 0xffffffff;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_b4 = 0;
  if (0 < (int)local_40) {
    local_60 = 0;
    local_98 = 0;
    local_90 = 0x14;
    local_88 = 0x10;
    uVar13 = uVar12;
    plVar18 = local_80;
    uVar20 = uVar12;
    uVar21 = uVar12;
    do {
      if ((int)uVar20 < (int)local_b0) {
        local_58 = (undefined8 *)(longlong)(int)uVar12;
        pcVar16 = (char *)(param_2 + (longlong)local_58);
        uVar9 = *(undefined8 *)(local_98 + 8 + (longlong)plVar18);
        displayMessage(param_1,1,"\t0x%p\t%x\t%d\t%d\t%s",pcVar16,(int)*pcVar16,(int)uVar12,
                       *(undefined4 *)(local_98 + 0x10 + (longlong)plVar18),uVar9);
        puVar6 = local_58;
        iVar4 = 1;
        if (1 < *(int *)(local_98 + 0x14 + (longlong)local_80)) {
          do {
            pcVar16 = pcVar16 + 1;
            displayMessage(param_1,1,"\t0x%p\t%x\t%d\t%d\t.",(longlong)puVar6 + param_2 + iVar4,
                           (int)*pcVar16,local_b8 + iVar4,
                           *(int *)(local_88 + (longlong)local_80) + iVar4,uVar9);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(local_90 + (longlong)local_80));
          uVar13 = (ulonglong)local_a0;
        }
        uVar20 = (ulonglong)local_b4;
        plVar18 = local_80;
        uVar21 = local_60;
      }
      lVar17 = uVar21 * 0x48;
      while( true ) {
        uVar19 = (uint)uVar20;
        if ((int)uVar19 < (int)local_b0) {
          uVar11 = *(uint *)(local_98 + 0x20 + (longlong)plVar18) & 0x200;
        }
        else {
          uVar11 = 0;
        }
        iVar4 = (int)uVar13;
        if (iVar4 < (int)local_a4) {
          uVar5 = *(uint *)(lVar17 + 0x20 + (longlong)local_70) & 0x200;
        }
        else {
          uVar5 = 0;
        }
        if (uVar11 != 0) break;
        if (uVar5 == 0) goto LAB_1432abb87;
        sVar14 = (size_t)*(int *)(lVar17 + 0x14 + (longlong)local_70);
        if (sVar14 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pPVar8 = physx::shdfnd::getAllocator();
          pvVar7 = (void *)(**(code **)(*(longlong *)pPVar8 + 8))
                                     (pPVar8,sVar14,"NonTrackedAlloc",
                                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                                      ,0x18e);
        }
        ::_guard_xfg_dispatch_icall_nop(pvVar7,0,sVar14);
        uVar19 = local_a0;
        puVar6 = (undefined8 *)(lVar17 + 0x30 + (longlong)local_70);
        (*(code *)*puVar6)((int)puVar6[1] + param_1,pvVar7,local_70 + (longlong)(int)local_a0 * 9,
                           local_70 + (longlong)(int)local_a0 * 9);
        if (pvVar7 != (void *)0x0) {
          pPVar8 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar8 + 0x10))();
        }
        local_a0 = uVar19 + 1;
        uVar13 = (ulonglong)local_a0;
        uVar21 = local_60 + 1;
        uVar20 = (ulonglong)local_b4;
        lVar17 = lVar17 + 0x48;
        plVar18 = local_80;
        local_60 = uVar21;
      }
      if (uVar5 == 0) {
        iVar4 = *(int *)(local_90 + (longlong)plVar18);
        local_b4 = uVar19;
LAB_1432abf4e:
        local_b8 = local_b8 + iVar4;
        uVar12 = (ulonglong)local_b8;
        goto LAB_1432abf51;
      }
      local_58 = (undefined8 *)(uVar21 * 0x48);
      iVar1 = *(int *)((longlong)local_58 + 0x14 + (longlong)local_70);
      if (*(int *)(local_90 + (longlong)plVar18) != iVar1) {
        if (iVar1 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pPVar8 = physx::shdfnd::getAllocator();
          pvVar7 = (void *)(**(code **)(*(longlong *)pPVar8 + 8))
                                     (pPVar8,(longlong)iVar1,"NonTrackedAlloc",
                                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                                      ,0x168);
        }
        ::_guard_xfg_dispatch_icall_nop(pvVar7,0,(longlong)iVar1);
        (**(code **)((longlong)(local_58 + 6) + (longlong)local_70))
                  ((int)((undefined8 *)((longlong)(local_58 + 6) + (longlong)local_70))[1] + param_1
                   ,pvVar7,local_70 + (longlong)iVar4 * 9,local_70 + (longlong)iVar4 * 9);
        if (pvVar7 != (void *)0x0) {
          pPVar8 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar8 + 0x10))(pPVar8,pvVar7);
        }
        local_a0 = iVar4 + 1;
        uVar13 = (ulonglong)local_a0;
        iVar4 = *(int *)(local_90 + (longlong)local_80);
        uVar21 = local_60 + 1;
        plVar18 = local_80;
        local_60 = uVar21;
        goto LAB_1432abf4e;
      }
LAB_1432abb87:
      plVar15 = (longlong *)(local_98 + (longlong)plVar18);
      local_ac = local_b8;
      local_58 = local_70 + uVar21 * 9;
      if ((int)uVar19 < (int)local_b0) {
        cVar2 = PxMetaDataEntry::isVTablePtr(plVar15);
        plVar18 = local_80;
        if ((cVar2 != '\0') && (local_50 != 0xffffffff)) {
          local_b8 = local_b8 + *(int *)((longlong)plVar15 + 0x14);
          local_b4 = local_b4 + 1;
          local_98 = local_98 + 0x48;
          local_88 = local_88 + 0x48;
          local_90 = local_90 + 0x48;
          if ((int)local_b4 < (int)local_b0) {
            cVar2 = PxMetaDataEntry::isVTablePtr(plVar15);
            local_50 = 0xffffffff;
            plVar18 = local_80;
          }
          else {
            cVar2 = '\0';
            local_50 = 0xffffffff;
          }
        }
      }
      else {
        cVar2 = '\0';
      }
      uVar19 = local_a0;
      if ((int)local_a0 < (int)local_a4) {
        cVar3 = PxMetaDataEntry::isVTablePtr(local_58);
        plVar18 = local_80;
        if ((cVar3 != '\0') && (local_4c != 0xffffffff)) {
          local_98 = local_98 + -0x48;
          local_88 = local_88 + -0x48;
          local_90 = local_90 + -0x48;
          local_ac = *(uint *)(local_80 + (longlong)(int)local_4c * 9 + 5);
          plVar15 = local_80 + (longlong)(int)local_4c * 9;
          local_b4 = local_b4 - 1;
          cVar2 = '\x01';
          local_b8 = local_b8 - *(int *)((longlong)plVar15 + 0x14);
          local_4c = 0xffffffff;
          local_48 = 0;
        }
      }
      else {
        cVar3 = '\0';
      }
      if ((local_b4 == local_b0) && (uVar19 == local_a4)) break;
      if (cVar2 == '\0') {
        if (cVar3 != '\0') {
          iVar4 = local_b4 + 1;
          if (iVar4 < (int)local_b0) {
            do {
              cVar2 = PxMetaDataEntry::isVTablePtr(plVar18 + (longlong)iVar4 * 9);
              plVar18 = local_80;
              if (cVar2 != '\0') break;
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)local_b0);
          }
          local_98 = local_98 + -0x48;
          local_b4 = local_b4 - 1;
          local_88 = local_88 + -0x48;
          local_50 = uVar19;
          local_b8 = local_b8 - *(int *)((longlong)plVar18 + (longlong)iVar4 * 0x48 + 0x14);
          plVar15 = plVar18 + (longlong)iVar4 * 9;
          local_ac = *(uint *)(plVar15 + 5);
          local_90 = local_90 + -0x48;
        }
      }
      else if (cVar3 == '\0') {
        local_b8 = local_b8 + *(int *)((longlong)plVar15 + 0x14);
        local_98 = local_98 + 0x48;
        local_88 = local_88 + 0x48;
        local_4c = local_b4;
        local_b4 = local_b4 + 1;
        local_90 = local_90 + 0x48;
        plVar15 = plVar18 + (longlong)(int)local_b4 * 9;
        local_48 = 1;
        local_ac = local_b8;
      }
      uVar19 = local_ac;
      if ((*(uint *)(plVar15 + 4) & 0x100) == 0) {
        cVar2 = (char)local_44;
        if (cVar2 != '\0') {
          iVar4 = ::_guard_xfg_dispatch_icall_nop((char *)plVar15[1],"mNbHullVertices");
          if (iVar4 == 0) {
            cVar3 = *(char *)((int)uVar19 + param_2);
            lVar17 = getBinaryMetaData(param_1,2);
            if ((int)cVar3 <= *(int *)(lVar17 + 0x44)) {
              local_res18[0] = '\x01';
            }
          }
          else if (local_res18[0] != '\0') {
            pcVar16 = (char *)*plVar15;
            iVar4 = ::_guard_xfg_dispatch_icall_nop(pcVar16,"BigConvexData");
            if ((iVar4 == 0) ||
               (iVar4 = ::_guard_xfg_dispatch_icall_nop(pcVar16,"BigConvexRawData"), iVar4 == 0)) {
              setNullPtr(param_1,1);
            }
          }
        }
        cVar3 = local_res18[0];
        (*(code *)plVar15[6])((int)plVar15[7] + param_1,(int)local_ac + param_2,plVar15,local_58);
        local_b8 = local_b8 + *(int *)((longlong)plVar15 + 0x14);
        uVar12 = (ulonglong)local_b8;
        if ((cVar2 != '\0') && (cVar3 != '\0')) {
          setNullPtr(param_1,0);
          uVar12 = (ulonglong)local_b8;
        }
      }
      else {
        lVar17 = (longlong)(int)local_ac;
        uVar9 = getTypeName(param_1,*plVar15,*(undefined4 *)(lVar17 + param_2));
        uVar10 = getMetaClass(param_1,uVar9,1);
        convertClass(param_1,(undefined4 *)(lVar17 + param_2),uVar10,0);
        lVar17 = getMetaClass(param_1,uVar9,2);
        local_ac = *(int *)((longlong)local_58 + 0x14) - *(int *)(lVar17 + 0x28);
        sVar14 = (size_t)(int)local_ac;
        if (local_ac == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pPVar8 = physx::shdfnd::getAllocator();
          pvVar7 = (void *)(**(code **)(*(longlong *)pPVar8 + 8))
                                     (pPVar8,sVar14,"NonTrackedAlloc",
                                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                                      ,0x237);
        }
        ::_guard_xfg_dispatch_icall_nop(pvVar7,0,sVar14);
        output(param_1,pvVar7,local_ac);
        if (pvVar7 != (void *)0x0) {
          pPVar8 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar8 + 0x10))(pPVar8,pvVar7);
        }
        local_b8 = local_b8 + *(int *)((longlong)plVar15 + 0x14);
        uVar12 = (ulonglong)local_b8;
      }
      local_a0 = local_a0 + 1;
      uVar13 = (ulonglong)local_a0;
      uVar21 = local_60 + 1;
      plVar18 = local_80;
      local_60 = uVar21;
LAB_1432abf51:
      local_b4 = local_b4 + 1;
      uVar20 = (ulonglong)local_b4;
      local_98 = local_98 + 0x48;
      local_88 = local_88 + 0x48;
      local_90 = local_90 + 0x48;
    } while ((int)local_b4 < (int)(local_48 + local_40));
  }
  displayMessage(param_1,1,"---------------------------------------------\n");
  if ((char)local_44 != '\0') {
    if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
      pcVar16 = (char *)((ulonglong)*(uint *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18));
      if (pcVar16 != (char *)0x0) {
        *pcVar16 = local_res18[0];
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    else {
      shdfnd::Array<bool,physx::shdfnd::ReflectionAllocator<bool>_>::growAndPushBack
                ((longlong *)(param_1 + 0x18),local_res18);
    }
  }
  if (local_68 != '\0') {
    physx::shdfnd::TempAllocator::deallocate((TempAllocator *)&local_70,local_70);
  }
  if (local_78 != '\0') {
    physx::shdfnd::TempAllocator::deallocate((TempAllocator *)&local_80,local_80);
  }
  return 1;
}



// FUNCTION 1432ac010 convertExtraData_Array body=172 status=ok
// SIG undefined convertExtraData_Array(void)

longlong physx::Sn::ConvX::convertExtraData_Array
                   (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                   undefined8 *param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = getMetaClass(param_1,*param_5,1);
  uVar1 = peek(*(undefined4 *)((longlong)param_5 + 0x14),*(int *)(param_5 + 5) + param_4,
               *(undefined4 *)(param_5 + 4));
  if (*(int *)((longlong)param_5 + 0x24) != 0) {
    param_2 = alignStream(param_1,param_2);
  }
  if (0 < (int)uVar1) {
    uVar3 = (ulonglong)uVar1;
    do {
      convertClass(param_1,param_2,lVar2,0);
      param_2 = param_2 + *(int *)(lVar2 + 0x28);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_2;
}



// FUNCTION 1432ac0d0 convertExtraData_Ptr body=347 status=ok
// SIG undefined convertExtraData_Ptr(void)

char * physx::Sn::ConvX::convertExtraData_Ptr
                 (undefined8 param_1,char *param_2,undefined8 param_3,undefined8 *param_4,
                 int param_5,int param_6,int param_7)

{
  char *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  local_40 = *param_4;
  uStack_38 = param_4[1];
  local_58 = *(undefined4 *)(param_4 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x1c);
  param_6 = param_5 * param_6;
  local_20 = param_4[4];
  local_68 = *param_4;
  uStack_60 = param_4[1];
  iStack_28 = param_5;
  iStack_50 = param_5;
  iStack_54 = param_5 * param_7;
  local_48 = param_4[4];
  local_30 = local_58;
  iStack_2c = param_6;
  uStack_24 = uStack_4c;
  displayMessage((int)local_48,1,"extra data ptrs\n");
  displayMessage(param_1,1,"+++++++++++++++++++++++++++++++++++++++++++++\n");
  uVar4 = param_4[1];
  displayMessage(param_1,1,"\t0x%p\t%x\t\t\t%s",param_2,(int)*param_2,uVar4);
  if (1 < param_6) {
    pcVar1 = param_2 + 1;
    uVar2 = (ulonglong)(param_6 - 1);
    pcVar3 = pcVar1;
    do {
      displayMessage(param_1,1,"\t0x%p\t%x\t\t\t.",pcVar3,(int)*pcVar1,uVar4);
      pcVar3 = pcVar3 + 1;
      pcVar1 = pcVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  convertPtr(param_1,param_2,&local_40,&local_68);
  return param_2 + param_6;
}



// FUNCTION 1432ac240 getConcreteType body=113 status=ok
// SIG undefined getConcreteType(void)

undefined8 physx::Sn::ConvX::getConcreteType(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar2 = getMetaClass(param_1,&DAT_145af1548,1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  cVar1 = MetaClass::getFieldByType(uVar2,"PxType",&local_38);
  if (cVar1 != '\0') {
    uVar2 = peek(local_28._4_4_,(int)local_28 + param_2,0);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 1432ac2c0 convertCollection body=2145 status=ok
// SIG undefined convertCollection(void)

undefined8
physx::Sn::ConvX::convertCollection(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  PxAllocatorCallback *pPVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  TempAllocator local_res8 [8];
  int local_res10;
  TempAllocator local_res18 [8];
  uint local_res20;
  undefined8 in_stack_fffffffffffffed8;
  int local_108;
  int local_104;
  longlong local_100;
  uint local_f8;
  int local_f4;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  void *local_c0;
  char local_b8;
  void *local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar2 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  lVar16 = param_3 + param_2;
  local_res20 = param_4;
  local_e0 = lVar16;
  lVar4 = alignStream(param_1,param_2,0x10);
  local_e4 = *(undefined4 *)(param_1 + 0x148);
  local_e8 = *(undefined4 *)(param_1 + 0x14c);
  lVar5 = SUB168(ZEXT816(0x10) * ZEXT416(param_4),0);
  if (SUB168(ZEXT816(0x10) * ZEXT416(param_4),8) != 0) {
    lVar5 = -1;
  }
  if (lVar5 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    pPVar6 = physx::shdfnd::getAllocator();
    plVar7 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if (cVar1 == '\0') {
      pcVar8 = "<allocation names disabled>";
    }
    else {
      pcVar8 = (char *)__std_type_info_name(0x14683aa90,&DAT_146bcc1d0);
    }
    plVar7 = (longlong *)
             (**(code **)(*(longlong *)pPVar6 + 8))
                       (pPVar6,lVar5,pcVar8,
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                        ,CONCAT44(uVar2,0x2fa));
  }
  uVar17 = 0;
  local_f0 = plVar7;
  if (param_4 != 0) {
    do {
      displayMessage(param_1,1,"Object conversion: %d%%",
                     (int)((float)uVar17 * (1.0 / (float)(int)param_4) * 100.0));
      lVar4 = alignStream(param_1,lVar4,0x10);
      uVar9 = getMetaClass(param_1,&DAT_145af1548,1);
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      cVar1 = MetaClass::getFieldByType(uVar9,"PxType",&local_a0);
      if (cVar1 == '\0') {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = peek(local_90._4_4_,(int)local_90 + lVar4,0);
      }
      lVar5 = getMetaClass(param_1,uVar2,1);
      if (lVar5 == 0) {
LAB_1432ac70c:
        plVar7 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          pPVar6 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,plVar7);
        }
        return 0;
      }
      *plVar7 = lVar5;
      plVar7[1] = lVar4;
      cVar1 = convertClass(param_1,lVar4,lVar5,0);
      if (cVar1 == '\0') goto LAB_1432ac70c;
      uVar17 = uVar17 + 1;
      lVar4 = lVar4 + *(int *)(lVar5 + 0x28);
      plVar7 = plVar7 + 2;
    } while (uVar17 < param_4);
  }
  local_f8 = 0;
  local_f4 = 0;
  if (0 < (int)param_4) {
    plVar7 = local_f0;
    do {
      iVar15 = local_f4;
      local_c8 = plVar7;
      displayMessage(param_1,1,"Extra data conversion: %d%%",
                     (int)((float)local_f4 * (1.0 / (float)(int)param_4) * 100.0));
      lVar5 = plVar7[1];
      lVar10 = *plVar7;
      local_a8 = '\x01';
      local_d8 = lVar5;
      local_b0 = physx::shdfnd::TempAllocator::allocate
                           (local_res18,0x3000,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                            ,0x339);
      local_104 = 0;
      _enumerateExtraData(param_1,lVar5,lVar10,local_b0,&local_104,0,1);
      lVar4 = alignStream(param_1,lVar4,0x10);
      local_res10 = 0;
      if (0 < local_104) {
        local_d0 = 0;
        do {
          iVar15 = local_res10;
          puVar14 = (undefined8 *)((longlong)local_b0 + local_d0);
          uVar17 = *(uint *)(puVar14 + 4);
          if ((uVar17 & 0x20) == 0) {
            if ((uVar17 & 0x40) == 0) {
              if ((uVar17 >> 10 & 1) == 0) {
                if ((char)uVar17 < '\0') {
                  if (*(int *)((longlong)puVar14 + 0x24) != 0) {
                    lVar4 = alignStream(param_1,lVar4);
                  }
                  lVar5 = getMetaClass(param_1,"PxU32",1);
                  uVar17 = peek(*(undefined4 *)(lVar5 + 0x28),lVar4,0);
                  displayMessage(param_1,1," convert  %d bytes string\n",uVar17);
                  convertClass(param_1,lVar4,lVar5,0);
                  lVar4 = lVar4 + *(int *)(lVar5 + 0x28);
                  lVar5 = getMetaClass(param_1,*puVar14,1);
                  if (0 < (int)uVar17) {
                    uVar12 = (ulonglong)uVar17;
                    do {
                      convertClass(param_1,lVar4,lVar5,0);
                      lVar4 = lVar4 + *(int *)(lVar5 + 0x28);
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                }
                else {
                  lVar4 = convertExtraData_Array(param_1,lVar4,lVar16,lVar5,puVar14);
                  local_res10 = iVar15;
                }
              }
              else {
                local_res10 = iVar15;
                if (*(int *)((longlong)puVar14 + 0x24) != 0) {
                  displayMessage(param_1,1," align to %d bytes\n");
                  displayMessage(param_1,1,"---------------------------------------------\n");
                  lVar4 = alignStream(param_1,lVar4,*(undefined4 *)((longlong)puVar14 + 0x24));
                  local_res10 = iVar15;
                }
              }
            }
            else {
              iVar15 = *(int *)(puVar14 + 3);
              uVar2 = *(undefined4 *)((longlong)puVar14 + 0x1c);
              lVar5 = (longlong)(*(int *)(puVar14 + 5) - *(int *)(puVar14 + 2));
              uVar12 = peek(*(undefined4 *)((longlong)puVar14 + 0x14),
                            *(int *)(puVar14 + 2) + lVar5 + local_d8,0);
              uVar17 = *(uint *)(puVar14 + 4);
              uVar13 = 0;
              if ((uVar17 >> 0xe & 1) != 0) {
                uVar13 = (ulonglong)((uVar17 & 0xff0000) >> 0x10);
              }
              if ((uVar17 >> 0xd & 1) == 0) {
                if (uVar13 != 0) {
                  uVar12 = uVar12 & uVar13;
                }
                bVar18 = uVar12 != 0;
              }
              else if (uVar13 == 0) {
                bVar18 = uVar12 == 0;
              }
              else {
                bVar18 = (uVar12 & uVar13) == 0;
              }
              if (bVar18) {
                iVar15 = peek(uVar2,lVar5 + iVar15 + local_d8);
                if (*(int *)((longlong)puVar14 + 0x24) != 0) {
                  lVar4 = alignStream(param_1,lVar4);
                }
                if ((*(byte *)(puVar14 + 4) & 8) == 0) {
                  lVar5 = getMetaClass(param_1,*puVar14);
                  for (; iVar15 != 0; iVar15 = iVar15 + -1) {
                    convertClass(param_1,lVar4,lVar5,0);
                    lVar4 = lVar4 + *(int *)(lVar5 + 0x28);
                  }
                }
                else {
                  lVar4 = convertExtraData_Ptr
                                    (param_1,lVar4,lVar16,puVar14,iVar15,local_e4,local_e8);
                }
              }
            }
          }
          else {
            iVar3 = ::_guard_xfg_dispatch_icall_nop((char *)*puVar14,"BigConvexData");
            if ((iVar3 == 0) &&
               (uVar12 = (ulonglong)local_f8, local_f8 = local_f8 + 1,
               *(char *)(uVar12 + *(longlong *)(param_1 + 0x18)) != '\0')) {
              setNoOutput(param_1,CONCAT71((uint7)(uint3)(local_f8 >> 8),1));
            }
            lVar10 = getMetaClass(param_1,*puVar14);
            lVar11 = peek(*(undefined4 *)((longlong)puVar14 + 0x1c),*(int *)(puVar14 + 5) + lVar5,0)
            ;
            if (lVar11 != 0) {
              lVar16 = lVar4;
              if (*(int *)((longlong)puVar14 + 0x24) != 0) {
                lVar16 = alignStream(param_1,lVar4);
              }
              local_100 = lVar16;
              convertClass(param_1,lVar16,lVar10,0);
              local_b8 = '\x01';
              lVar4 = lVar16 + *(int *)(lVar10 + 0x28);
              local_c0 = physx::shdfnd::TempAllocator::allocate
                                   (local_res8,0x3000,
                                    "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Convert.cpp"
                                    ,0x36f);
              local_108 = 0;
              _enumerateExtraData(param_1,lVar5,lVar10,local_c0,&local_108,0,1);
              iVar15 = 0;
              if (0 < local_108) {
                lVar5 = 0;
                do {
                  puVar14 = (undefined8 *)((longlong)local_c0 + lVar5);
                  if ((*(uint *)(puVar14 + 4) & 0x40) == 0) {
                    if (((*(uint *)(puVar14 + 4) >> 10 & 1) == 0) ||
                       (*(int *)((longlong)puVar14 + 0x24) == 0)) {
                      lVar4 = convertExtraData_Array(param_1,lVar4,local_e0,lVar16,puVar14);
                    }
                    else {
                      lVar4 = alignStream(param_1,lVar4);
                    }
                  }
                  else {
                    iVar3 = *(int *)(puVar14 + 3);
                    uVar2 = *(undefined4 *)((longlong)puVar14 + 0x1c);
                    uVar12 = peek(*(undefined4 *)((longlong)puVar14 + 0x14),
                                  *(int *)(puVar14 + 2) + local_100,0);
                    uVar17 = *(uint *)(puVar14 + 4);
                    uVar13 = 0;
                    if ((uVar17 >> 0xe & 1) != 0) {
                      uVar13 = (ulonglong)((uVar17 & 0xff0000) >> 0x10);
                    }
                    if ((uVar17 >> 0xd & 1) == 0) {
                      if (uVar13 != 0) {
                        uVar12 = uVar12 & uVar13;
                      }
                      bVar18 = uVar12 != 0;
                    }
                    else if (uVar13 == 0) {
                      bVar18 = uVar12 == 0;
                    }
                    else {
                      bVar18 = (uVar12 & uVar13) == 0;
                    }
                    lVar16 = local_100;
                    if (bVar18) {
                      iVar3 = peek(uVar2,iVar3 + local_100);
                      if (*(int *)((longlong)puVar14 + 0x24) != 0) {
                        lVar4 = alignStream(param_1,lVar4);
                      }
                      lVar16 = local_100;
                      if ((*(byte *)(puVar14 + 4) & 8) == 0) {
                        lVar10 = getMetaClass(param_1,*puVar14);
                        lVar16 = local_100;
                        for (; local_100 = lVar16, iVar3 != 0; iVar3 = iVar3 + -1) {
                          convertClass(param_1,lVar4,lVar10,0);
                          lVar4 = lVar4 + *(int *)(lVar10 + 0x28);
                          lVar16 = local_100;
                        }
                      }
                    }
                  }
                  iVar15 = iVar15 + 1;
                  lVar5 = lVar5 + 0x30;
                } while (iVar15 < local_108);
              }
              lVar16 = local_e0;
              iVar15 = local_res10;
              if (local_b8 != '\0') {
                physx::shdfnd::TempAllocator::deallocate((TempAllocator *)&local_c0,local_c0);
                lVar16 = local_e0;
                iVar15 = local_res10;
              }
            }
            setNoOutput(param_1,0);
            local_res10 = iVar15;
          }
          local_res10 = local_res10 + 1;
          local_d0 = local_d0 + 0x30;
          lVar5 = local_d8;
          iVar15 = local_f4;
        } while (local_res10 < local_104);
      }
      if (local_a8 != '\0') {
        physx::shdfnd::TempAllocator::deallocate((TempAllocator *)&local_b0,local_b0);
      }
      local_f4 = iVar15 + 1;
      plVar7 = local_c8 + 2;
      local_c8 = plVar7;
    } while (local_f4 < (int)local_res20);
  }
  plVar7 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,plVar7);
  }
  return 1;
}



// FUNCTION 1432acb30 convertManifestTable body=614 status=ok
// SIG undefined convertManifestTable(void)

int * physx::Sn::ConvX::convertManifestTable(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_res10;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_res10 = (int *)alignStream(param_1,param_2,0x10);
  *param_3 = *param_3 - (-((uint)param_2 & 0xf) & 0xf);
  iVar1 = *local_res10;
  output(param_1,iVar1);
  *param_3 = *param_3 + -4;
  lVar4 = getMetaClass(param_1,"Sn::ManifestEntry",1);
  lVar5 = getMetaClass(param_1,"Sn::ManifestEntry",2);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  MetaClass::getFieldByName(lVar4,&DAT_145af4d3c,&local_88);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  MetaClass::getFieldByName(lVar5,"offset",&local_60);
  local_res10 = local_res10 + 1;
  iVar11 = 0;
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = peek(local_78._4_4_,(longlong)(int)local_78 + (longlong)local_res10,0);
      plVar6 = (longlong *)PxGetFoundation();
      uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
      PxDefaultMemoryOutputStream::PxDefaultMemoryOutputStream(local_a8,uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x138);
      uVar2 = *(undefined4 *)(param_1 + 0x144);
      *(undefined1 **)(param_1 + 0x138) = local_a8;
      *(undefined4 *)(param_1 + 0x144) = 0;
      convertClass(param_1,local_res10,lVar4,0);
      *(undefined8 *)(param_1 + 0x138) = uVar7;
      *(undefined4 *)(param_1 + 0x144) = uVar2;
      output(param_1,iVar11);
      iVar10 = *(int *)(lVar5 + 0x28) - local_50._4_4_;
      (**(code **)**(undefined8 **)(param_1 + 0x138))
                (*(undefined8 **)(param_1 + 0x138),local_50._4_4_ + local_98,iVar10);
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar10;
      iVar10 = *(int *)(lVar4 + 0x28);
      *param_3 = *param_3 - iVar10;
      local_res10 = (int *)((longlong)local_res10 + (longlong)iVar10);
      lVar8 = getMetaClass(param_1,uVar3);
      if (lVar8 == 0) {
        PxDefaultMemoryOutputStream::~PxDefaultMemoryOutputStream(local_a8);
        return (int *)0x0;
      }
      iVar11 = iVar11 + (-*(int *)(lVar8 + 0x28) & 0xfU) + *(int *)(lVar8 + 0x28);
      PxDefaultMemoryOutputStream::~PxDefaultMemoryOutputStream(local_a8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  output(param_1,iVar11);
  *param_3 = *param_3 + -4;
  return local_res10 + 1;
}



// FUNCTION 1432acda0 convertImportReferences body=174 status=ok
// SIG undefined convertImportReferences(void)

uint * physx::Sn::ConvX::convertImportReferences(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint *)alignStream(param_1,param_2,0x10);
  *param_3 = *param_3 - (-((uint)param_2 & 0xf) & 0xf);
  uVar1 = *puVar3;
  uVar5 = (ulonglong)uVar1;
  puVar3 = puVar3 + 1;
  output(param_1,uVar5);
  *param_3 = *param_3 + -4;
  if ((uVar1 != 0) && (lVar4 = getMetaClass(param_1,"Sn::ImportReference",1), 0 < (int)uVar1)) {
    do {
      convertClass(param_1,puVar3,lVar4,0);
      iVar2 = *(int *)(lVar4 + 0x28);
      *param_3 = *param_3 - iVar2;
      puVar3 = (uint *)((longlong)puVar3 + (longlong)iVar2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return puVar3;
}



// FUNCTION 1432ace60 convertExportReferences body=174 status=ok
// SIG undefined convertExportReferences(void)

uint * physx::Sn::ConvX::convertExportReferences(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint *)alignStream(param_1,param_2,0x10);
  *param_3 = *param_3 - (-((uint)param_2 & 0xf) & 0xf);
  uVar1 = *puVar3;
  uVar5 = (ulonglong)uVar1;
  puVar3 = puVar3 + 1;
  output(param_1,uVar5);
  *param_3 = *param_3 + -4;
  if ((uVar1 != 0) && (lVar4 = getMetaClass(param_1,"Sn::ExportReference",1), 0 < (int)uVar1)) {
    do {
      convertClass(param_1,puVar3,lVar4,0);
      iVar2 = *(int *)(lVar4 + 0x28);
      *param_3 = *param_3 - iVar2;
      puVar3 = (uint *)((longlong)puVar3 + (longlong)iVar2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return puVar3;
}



// FUNCTION 1432acf20 convertInternalReferences body=257 status=ok
// SIG undefined convertInternalReferences(void)

uint * physx::Sn::ConvX::convertInternalReferences
                 (undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint *)alignStream(param_1,param_2,0x10);
  *param_3 = *param_3 - (-((uint)param_2 & 0xf) & 0xf);
  uVar1 = *puVar3;
  uVar5 = (ulonglong)uVar1;
  puVar3 = puVar3 + 1;
  output(param_1,uVar5);
  *param_3 = *param_3 + -4;
  if ((uVar1 != 0) && (lVar4 = getMetaClass(param_1,"Sn::InternalReferencePtr",1), 0 < (int)uVar1))
  {
    do {
      convertClass(param_1,puVar3,lVar4,0);
      iVar2 = *(int *)(lVar4 + 0x28);
      *param_3 = *param_3 - iVar2;
      puVar3 = (uint *)((longlong)puVar3 + (longlong)iVar2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar1 = *puVar3;
  uVar5 = (ulonglong)uVar1;
  puVar3 = puVar3 + 1;
  output(param_1,uVar5);
  *param_3 = *param_3 + -4;
  if ((uVar1 != 0) && (lVar4 = getMetaClass(param_1,"Sn::InternalReferenceIdx",1), 0 < (int)uVar1))
  {
    do {
      convertClass(param_1,puVar3,lVar4,0);
      iVar2 = *(int *)(lVar4 + 0x28);
      *param_3 = *param_3 - iVar2;
      puVar3 = (uint *)((longlong)puVar3 + (longlong)iVar2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return puVar3;
}



// FUNCTION 1432ad030 convertReferenceTables body=224 status=ok
// SIG undefined convertReferenceTables(void)

void physx::Sn::ConvX::convertReferenceTables
               (longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  piVar2 = (int *)alignStream(param_1,param_2,0x10);
  *param_3 = *param_3 - (-((uint)param_2 & 0xf) & 0xf);
  iVar1 = *piVar2;
  output(param_1,iVar1);
  *param_4 = iVar1;
  if (iVar1 == 0) {
    displayMessage(param_1,1,"\n\nConverting empty collection!\n\n");
  }
  *param_3 = *param_3 + -4;
  lVar3 = convertManifestTable(param_1,piVar2 + 1,param_3);
  if (lVar3 != 0) {
    uVar4 = convertImportReferences(param_1,lVar3,param_3);
    uVar4 = convertExportReferences(param_1,uVar4,param_3);
    convertInternalReferences(param_1,uVar4,param_3);
    *(longlong *)(param_1 + 0x178) = param_1 + 0x168;
  }
  return;
}



// FUNCTION 1432ad150 exportIntAsPtr body=121 status=ok
// SIG undefined exportIntAsPtr(void)

void physx::Sn::ConvX::exportIntAsPtr(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong local_res8;
  uint local_res10 [6];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar1 = *(int *)(param_1 + 0x148);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_res8 = (ulonglong)param_2;
  if (iVar1 == 4) {
    puVar2 = (ulonglong *)local_res10;
  }
  else {
    puVar2 = &local_res8;
    if (iVar1 != 8) {
      puVar2 = (ulonglong *)0x0;
    }
  }
  local_res10[0] = param_2;
  convertExtraData_Ptr
            (param_1,puVar2,(longlong)puVar2 + (longlong)iVar1,&local_38,1,iVar1,
             *(undefined4 *)(param_1 + 0x14c));
  return;
}



// FUNCTION 1432ad1f0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::PointerRemap::InternalData>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683aac8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432ad290 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<bool>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683aab0,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432ad330 growAndPushBack body=209 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::Sn::PointerRemap::InternalData,physx::shdfnd::ReflectionAllocator<physx::Sn::PointerRemap::InternalData>_>
       ::growAndPushBack(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Dst;
  undefined4 *puVar6;
  PxAllocatorCallback *pPVar7;
  uint uVar8;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
      goto LAB_1432ad37f;
    }
  }
  _Dst = (void *)ReflectionAllocator<physx::Sn::PointerRemap::InternalData>::allocate
                           (param_1,(ulonglong)uVar8 << 4,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432ad37f:
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) << 4));
  }
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + (longlong)_Dst);
  if (puVar6 != (undefined4 *)0x0) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar6 = *param_2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar7 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar7 + 0x10))(pPVar7,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  *param_1 = (longlong)_Dst;
  return (void *)((ulonglong)uVar1 * 0x10 + (longlong)_Dst);
}



// FUNCTION 1432ad410 growAndPushBack body=198 status=ok
// SIG undefined growAndPushBack(void)

longlong physx::shdfnd::Array<bool,physx::shdfnd::ReflectionAllocator<bool>_>::growAndPushBack
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
      goto LAB_1432ad45b;
    }
  }
  _Dst = (void *)ReflectionAllocator<bool>::allocate
                           (param_1,iVar4,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432ad45b:
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



// FUNCTION 1432ad4e0 isVTablePtr body=14 status=ok
// SIG undefined isVTablePtr(void)

undefined8 physx::Sn::PxMetaDataEntry::isVTablePtr(longlong *param_1)

{
  return CONCAT71(0x145af68,(char *)*param_1 == "v-table ptr");
}



// FUNCTION 1432ad500 getFieldByType body=142 status=ok
// SIG undefined getFieldByType(void)

ulonglong physx::Sn::MetaClass::getFieldByType
                    (longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *in_RAX;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    do {
      in_RAX = *(char **)(lVar4 + uVar8 * 0x28);
      lVar6 = param_2 - (longlong)in_RAX;
      do {
        cVar2 = *in_RAX;
        cVar3 = in_RAX[lVar6];
        if (cVar2 != cVar3) break;
        in_RAX = in_RAX + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x28);
        uVar5 = puVar1[1];
        *param_3 = *puVar1;
        param_3[1] = uVar5;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar8 * 0x28);
        uVar5 = puVar1[1];
        param_3[2] = *puVar1;
        param_3[3] = uVar5;
        param_3[4] = *(undefined8 *)(lVar4 + 0x20 + uVar8 * 0x28);
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x48));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432ad5a0 getFieldByName body=142 status=ok
// SIG undefined getFieldByName(void)

ulonglong physx::Sn::MetaClass::getFieldByName
                    (longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *in_RAX;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    do {
      in_RAX = *(char **)(lVar4 + 8 + uVar8 * 0x28);
      lVar6 = param_2 - (longlong)in_RAX;
      do {
        cVar2 = *in_RAX;
        cVar3 = in_RAX[lVar6];
        if (cVar2 != cVar3) break;
        in_RAX = in_RAX + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x28);
        uVar5 = puVar1[1];
        *param_3 = *puVar1;
        param_3[1] = uVar5;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar8 * 0x28);
        uVar5 = puVar1[1];
        param_3[2] = *puVar1;
        param_3[3] = uVar5;
        param_3[4] = *(undefined8 *)(lVar4 + 0x20 + uVar8 * 0x28);
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x48));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432ad640 check body=1295 status=ok
// SIG undefined check(void)

undefined8 physx::Sn::MetaClass::check(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  PxAllocatorCallback *pPVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  char *pcVar20;
  longlong local_res18;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  
  ConvX::displayMessage(*param_2,1,"Checking class: %s\n",param_1[4]);
  if ((*param_1 != 0) || (param_1[3] != 0)) {
    return 1;
  }
  lVar13 = param_1[5];
  if ((longlong)(int)lVar13 == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pPVar6 = physx::shdfnd::getAllocator();
    pcVar7 = (char *)(**(code **)(*(longlong *)pPVar6 + 8))
                               (pPVar6,(longlong)(int)lVar13,"NonTrackedAlloc",
                                "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_MetaData.cpp"
                                ,0x71);
  }
  ::_guard_xfg_dispatch_icall_nop(pcVar7,0,(longlong)(int)param_1[5]);
  uVar4 = *(uint *)(param_1 + 9);
  uVar19 = 0;
  if (uVar4 != 0) {
    local_res18 = 0;
    do {
      lVar13 = param_1[8];
      if ((*(byte *)(lVar13 + local_res18 + 0x20) & 0x10) == 0) {
        iVar11 = *(int *)(lVar13 + local_res18 + 0x10);
        lVar8 = (longlong)iVar11;
        uVar10 = 0xffffffff;
        iVar14 = 0;
        lVar13 = (longlong)(*(int *)(lVar13 + local_res18 + 0x14) + iVar11);
        if (lVar8 < lVar13) {
          do {
            if (pcVar7[lVar8] == '\0') {
              if (uVar10 != 0xffffffff) {
                ConvX::displayMessage
                          (*param_2,0x20,
                           "PxBinaryConverter: %s: %d overlapping bytes at offset %d!\n",param_1[4],
                           iVar14,uVar10);
                uVar10 = 0xffffffff;
              }
            }
            else {
              uVar9 = uVar10;
              if (uVar10 == 0xffffffff) {
                uVar9 = uVar19;
              }
              iVar11 = 0;
              if (uVar10 != 0xffffffff) {
                iVar11 = iVar14;
              }
              iVar14 = iVar11 + 1;
              uVar10 = uVar9;
            }
            pcVar7[lVar8] = '\x01';
            lVar8 = lVar8 + 1;
          } while (lVar8 < lVar13);
          if (uVar10 != 0xffffffff) {
            ConvX::displayMessage
                      (*param_2,0x20,"PxBinaryConverter: %s: %d overlapping bytes at offset %d!\n",
                       param_1[4],iVar14,uVar10);
          }
        }
      }
      local_res18 = local_res18 + 0x28;
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar4);
  }
  iVar11 = -1;
  uVar19 = 0;
  iVar14 = 0;
  pcVar20 = pcVar7;
  if (0 < (int)param_1[5]) {
    do {
      if (*pcVar20 == '\0') {
        iVar12 = iVar11;
        if (iVar11 == -1) {
          iVar12 = iVar14;
        }
        uVar10 = 0;
        if (iVar11 != -1) {
          uVar10 = uVar19;
        }
        uVar19 = uVar10 + 1;
        iVar11 = iVar12;
      }
      else if (iVar11 != -1) {
        ConvX::displayMessage
                  (*param_2,1,"\n Adding %d padding bytes at offset %d in class %s.\n",uVar19,iVar11
                   ,param_1[4]);
        pcStack_70 = "auto-generated padding";
        local_78 = "paddingByte";
        local_68 = CONCAT44(uVar19,iVar11);
        uStack_60 = (ulonglong)uVar19;
        local_58 = 0x200;
        if (*(uint *)(param_1 + 9) < (*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff)) {
          puVar1 = (undefined8 *)(param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 0x28);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = "paddingByte";
            puVar1[1] = "auto-generated padding";
            puVar1[2] = local_68;
            puVar1[3] = uStack_60;
            puVar1[4] = 0x200;
          }
          *(int *)(param_1 + 9) = (int)param_1[9] + 1;
        }
        else {
          shdfnd::
          Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
          ::growAndPushBack(param_1 + 8,&local_78);
        }
        iVar11 = -1;
      }
      iVar14 = iVar14 + 1;
      pcVar20 = pcVar20 + 1;
    } while (iVar14 < (int)param_1[5]);
    if (iVar11 != -1) {
      ConvX::displayMessage
                (*param_2,1,"\n Adding %d padding bytes at offset %d in class %s.\n",uVar19,iVar11,
                 param_1[4]);
      local_78 = "paddingByte";
      pcStack_70 = "auto-generated padding";
      local_68 = CONCAT44(uVar19,iVar11);
      uStack_60 = (ulonglong)uVar19;
      local_58 = 0x200;
      if (*(uint *)(param_1 + 9) < (*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff)) {
        puVar1 = (undefined8 *)(param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 0x28);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = "paddingByte";
          puVar1[1] = "auto-generated padding";
          puVar1[2] = local_68;
          puVar1[3] = uStack_60;
          puVar1[4] = 0x200;
        }
        *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
        ::growAndPushBack(param_1 + 8,&local_78);
      }
    }
  }
  if (pcVar7 != (char *)0x0) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,pcVar7);
  }
  uVar19 = 0;
  if (uVar4 != 0) {
    lVar13 = 0;
    do {
      uVar10 = *(uint *)(param_1[8] + 0x20 + lVar13);
      if ((uVar10 & 8) == 0) {
        lVar8 = *(longlong *)(param_1[8] + lVar13);
        lVar5 = *param_2;
        if ((int)param_2[1] == 1) {
          uVar18 = 0;
          uVar9 = *(uint *)(*(longlong *)(lVar5 + 8) + 0x28);
          if (uVar9 != 0) {
LAB_1432ada00:
            lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 8) + 0x20) + uVar18 * 8);
            pcVar7 = *(char **)(lVar15 + 0x20);
            lVar16 = lVar8 - (longlong)pcVar7;
            do {
              cVar2 = *pcVar7;
              cVar3 = pcVar7[lVar16];
              if (cVar2 != cVar3) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
            if (cVar2 != cVar3) goto code_r0x0001432ada27;
            for (lVar16 = *(longlong *)(lVar15 + 0x18); lVar16 != 0;
                lVar16 = *(longlong *)(lVar16 + 0x18)) {
              lVar15 = lVar16;
            }
            goto LAB_1432ada32;
          }
        }
        else {
          if ((int)param_2[1] != 2) goto LAB_1432adb02;
          uVar18 = 0;
          uVar9 = *(uint *)(*(longlong *)(lVar5 + 0x10) + 0x28);
          if (uVar9 != 0) {
LAB_1432adab0:
            lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x20) + uVar18 * 8);
            pcVar7 = *(char **)(lVar15 + 0x20);
            lVar16 = lVar8 - (longlong)pcVar7;
            do {
              cVar2 = *pcVar7;
              cVar3 = pcVar7[lVar16];
              if (cVar2 != cVar3) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
            if (cVar2 != cVar3) goto code_r0x0001432adad7;
            for (lVar16 = *(longlong *)(lVar15 + 0x18); lVar16 != 0;
                lVar16 = *(longlong *)(lVar16 + 0x18)) {
              lVar15 = lVar16;
            }
            goto LAB_1432ada32;
          }
        }
LAB_1432ada2f:
        lVar15 = 0;
LAB_1432ada32:
        if (lVar15 == 0) {
LAB_1432adb02:
          ConvX::displayMessage
                    (*param_2,0x20,"PxBinaryConverter: Missing meta-data for: %s\n",lVar8);
          return 0;
        }
        if ((uVar10 & 0x10) != 0) {
          ConvX::displayMessage(lVar5,1,"Extra data: %s\n",lVar8);
        }
      }
      uVar19 = uVar19 + 1;
      lVar13 = lVar13 + 0x28;
    } while (uVar19 < uVar4);
  }
  return 1;
code_r0x0001432adad7:
  uVar17 = (int)uVar18 + 1;
  uVar18 = (ulonglong)uVar17;
  if (uVar9 <= uVar17) goto LAB_1432ada2f;
  goto LAB_1432adab0;
code_r0x0001432ada27:
  uVar17 = (int)uVar18 + 1;
  uVar18 = (ulonglong)uVar17;
  if (uVar9 <= uVar17) goto LAB_1432ada2f;
  goto LAB_1432ada00;
}



// FUNCTION 1432adb60 checkAndCompleteClass body=242 status=ok
// SIG undefined checkAndCompleteClass(void)

void physx::Sn::MetaClass::checkAndCompleteClass
               (longlong param_1,undefined8 *param_2,int *param_3,uint *param_4)

{
  undefined8 *puVar1;
  char *local_38;
  char *pcStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (*param_3 != -1) {
    ConvX::displayMessage
              (*param_2,1,"\n Adding %d padding bytes at offset %d in class %s.\n",*param_4,*param_3
               ,*(undefined8 *)(param_1 + 0x20));
    local_38 = "paddingByte";
    pcStack_30 = "auto-generated padding";
    local_28 = CONCAT44(*param_4,*param_3);
    uStack_20 = (ulonglong)*param_4;
    local_18 = 0x200;
    if (*(uint *)(param_1 + 0x48) < (*(uint *)(param_1 + 0x4c) & 0x7fffffff)) {
      puVar1 = (undefined8 *)
               (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = "paddingByte";
        puVar1[1] = "auto-generated padding";
        puVar1[2] = local_28;
        puVar1[3] = uStack_20;
        puVar1[4] = 0x200;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
      ::growAndPushBack(param_1 + 0x40,&local_38);
    }
    *param_3 = -1;
  }
  return;
}



// FUNCTION 1432adca0 ~MetaData body=348 status=ok
// SIG undefined ~MetaData(void)

void physx::Sn::MetaData::~MetaData(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  PxAllocatorCallback *pPVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    lVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x28);
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20));
      if (lVar1 != 0) {
        if ((((*(uint *)(lVar1 + 0x4c) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(lVar1 + 0x4c)))
           && (lVar2 = *(longlong *)(lVar1 + 0x40), lVar2 != 0)) {
          pPVar3 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar2);
        }
        if ((((*(uint *)(lVar1 + 0x3c) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(lVar1 + 0x3c)))
           && (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) {
          pPVar3 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar2);
        }
        pPVar3 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
      }
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar4);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((((*(uint *)(param_1 + 0x5c) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(param_1 + 0x5c))) &&
     (lVar4 = *(longlong *)(param_1 + 0x50), lVar4 != 0)) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar4);
  }
  if ((((*(uint *)(param_1 + 0x2c) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(param_1 + 0x2c))) &&
     (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)) {
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar4);
  }
  return;
}



// FUNCTION 1432ade10 load body=5182 status=ok
// SIG undefined load(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 physx::Sn::MetaData::load(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 *puVar6;
  void *_Dst;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined5 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  char cVar18;
  longlong lVar19;
  PxAllocatorCallback *pPVar20;
  longlong *plVar21;
  void *pvVar22;
  undefined4 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  size_t sVar34;
  size_t sVar35;
  uint uVar36;
  char *pcVar37;
  ulonglong uVar38;
  code *_Src;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffcf8;
  undefined4 uVar39;
  code *local_2f8;
  ulonglong uStack_2f0;
  undefined4 local_2e8;
  uint uStack_2e4;
  undefined4 local_2d8;
  undefined1 uStack_2d4;
  undefined1 uStack_2d3;
  undefined1 uStack_2d2;
  undefined1 uStack_2d1;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  undefined1 uStack_2ce;
  undefined1 uStack_2cd;
  undefined1 uStack_2cc;
  undefined1 uStack_2cb;
  undefined1 uStack_2ca;
  undefined1 uStack_2c9;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  ulonglong local_288;
  char *local_280;
  char *pcStack_278;
  undefined8 local_270;
  longlong lStack_268;
  longlong local_260;
  longlong local_258 [2];
  undefined1 local_248 [520];
  
  uVar39 = (undefined4)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
  pcVar37 = "target";
  if (param_3 == 1) {
    pcVar37 = "source";
  }
  ConvX::displayMessage(*param_1,1,"Loading %s meta-data...\n",pcVar37);
  *(int *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 9) = 0;
  (**(code **)*param_2)(param_2,local_258,4);
  if ((int)local_258[0] == 0x4154454d) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else {
    if ((int)local_258[0] != 0x4d455441) {
      ConvX::displayMessage(*param_1,4,"PxBinaryConverter: invalid meta-data file!\n");
      return 0;
    }
    *(undefined1 *)(param_1 + 9) = 1;
  }
  if ((param_3 == 1) && (*(char *)(param_1 + 9) != '\0')) {
    ConvX::displayMessage
              (*param_1,4,
               "PxBinaryConverter: source meta data needs to match endianness with current system!")
    ;
    return 0;
  }
  (**(code **)*param_2)(param_2,param_1 + 6,4);
  (**(code **)*param_2)(param_2,(longlong)param_1 + 0x34,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar4 = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)((longlong)param_1 + 0x33);
    *(undefined1 *)((longlong)param_1 + 0x33) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x31);
    *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x32);
    *(undefined1 *)((longlong)param_1 + 0x32) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x34);
    *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_1 + 0x37);
    *(undefined1 *)((longlong)param_1 + 0x37) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x35);
    *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_1 + 0x36);
    *(undefined1 *)((longlong)param_1 + 0x36) = uVar4;
  }
  cVar18 = checkCompatibility(*(undefined4 *)(param_1 + 6),*(undefined4 *)((longlong)param_1 + 0x34)
                             );
  if (cVar18 == '\0') {
    getCompatibilityVersionsStr(local_248,0x200);
    ConvX::displayMessage
              (*param_1,4,
               "PxBinaryConverter: data version (%x-%d) is incompatible with this PhysX sdk.\n These versions would be compatible: %s"
               ,*(undefined4 *)(param_1 + 6),
               CONCAT44(uVar39,*(undefined4 *)((longlong)param_1 + 0x34)),local_248);
    return 0;
  }
  (**(code **)*param_2)(param_2,param_1 + 7,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar4 = *(undefined1 *)(param_1 + 7);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)((longlong)param_1 + 0x3b);
    *(undefined1 *)((longlong)param_1 + 0x3b) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x39);
    *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_1 + 0x3a);
    *(undefined1 *)((longlong)param_1 + 0x3a) = uVar4;
  }
  (**(code **)*param_2)(param_2,(longlong)param_1 + 0x3c,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x3c);
    *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_1 + 0x3f);
    *(undefined1 *)((longlong)param_1 + 0x3f) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x3d);
    *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_1 + 0x3e);
    *(undefined1 *)((longlong)param_1 + 0x3e) = uVar4;
  }
  (**(code **)*param_2)(param_2,param_1 + 8,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar4 = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)((longlong)param_1 + 0x43);
    *(undefined1 *)((longlong)param_1 + 0x43) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x41);
    *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_1 + 0x42);
    *(undefined1 *)((longlong)param_1 + 0x42) = uVar4;
  }
  cVar18 = isBinaryPlatformTagValid(*(undefined4 *)(param_1 + 8));
  if (cVar18 == '\0') {
    ConvX::displayMessage(*param_1,4,"PxBinaryConverter: Unknown meta data platform tag");
    return 0;
  }
  (**(code **)*param_2)(param_2,(longlong)param_1 + 0x44,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x44);
    *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_1 + 0x47);
    *(undefined1 *)((longlong)param_1 + 0x47) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x45);
    *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_1 + 0x46);
    *(undefined1 *)((longlong)param_1 + 0x46) = uVar4;
  }
  (**(code **)*param_2)(param_2,(longlong)param_1 + 0xc,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar4 = *(undefined1 *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xf);
    *(undefined1 *)((longlong)param_1 + 0xf) = uVar4;
    uVar4 = *(undefined1 *)((longlong)param_1 + 0xd);
    *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_1 + 0xe);
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar4;
  }
  uVar38 = CONCAT44(0,*(uint *)((longlong)param_1 + 0xc));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar38;
  lVar19 = SUB168(ZEXT816(0x28) * auVar7,0);
  if (SUB168(ZEXT816(0x28) * auVar7,8) != 0) {
    lVar19 = -1;
  }
  if (lVar19 != 0) {
    pPVar20 = physx::shdfnd::getAllocator();
    plVar21 = (longlong *)PxGetFoundation();
    cVar18 = (**(code **)(*plVar21 + 0x28))(plVar21);
    if (cVar18 == '\0') {
      pcVar37 = "<allocation names disabled>";
    }
    else {
      pcVar37 = (char *)__std_type_info_name(0x14683ab60,&DAT_146bcc1d0);
    }
    pvVar22 = (void *)(**(code **)(*(longlong *)pPVar20 + 8))
                                (pPVar20,lVar19,pcVar37,
                                 "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_MetaData.cpp"
                                 ,CONCAT44(uVar39,0x176));
    if (pvVar22 != (void *)0x0) {
      if (uVar38 != 0) {
        ::_guard_xfg_dispatch_icall_nop(pvVar22,0,uVar38 * 0x28);
      }
      goto LAB_1432ae1a0;
    }
  }
  pvVar22 = (void *)0x0;
LAB_1432ae1a0:
  lVar19 = 0;
  iVar29 = 0;
  param_1[2] = pvVar22;
  if (*(int *)((longlong)param_1 + 0x3c) == 8) {
    lVar32 = lVar19;
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      do {
        (**(code **)*param_2)(param_2,&local_2d8,0x28);
        uVar17 = uStack_2cd;
        uVar16 = uStack_2ce;
        uVar15 = uStack_2cf;
        uVar14 = uStack_2d0;
        uVar13 = local_2d8._3_1_;
        uVar12 = local_2d8._2_1_;
        uVar11 = local_2d8._1_1_;
        uVar4 = (undefined1)local_2d8;
        if (*(char *)(param_1 + 9) != '\0') {
          local_2d8._0_1_ = uStack_2d1;
          uStack_2d1 = uVar4;
          local_2d8._1_1_ = uStack_2d2;
          uStack_2d2 = uVar11;
          local_2d8._2_1_ = uStack_2d3;
          uStack_2d3 = uVar12;
          local_2d8._3_1_ = uStack_2d4;
          uStack_2d4 = uVar13;
          uStack_2d0 = uStack_2c9;
          uStack_2c9 = uVar14;
          uStack_2cf = uStack_2ca;
          uStack_2ca = uVar15;
          uStack_2ce = uStack_2cb;
          uStack_2cb = uVar16;
          uStack_2cd = uStack_2cc;
          uStack_2cc = uVar17;
        }
        iVar29 = iVar29 + 1;
        *(ulonglong *)(lVar32 + param_1[2]) =
             CONCAT17(uStack_2d1,
                      CONCAT16(uStack_2d2,
                               CONCAT15(uStack_2d3,
                                        CONCAT14(uStack_2d4,
                                                 CONCAT13(local_2d8._3_1_,
                                                          CONCAT12(local_2d8._2_1_,
                                                                   CONCAT11(local_2d8._1_1_,
                                                                            (undefined1)local_2d8)))
                                                ))));
        *(ulonglong *)(lVar32 + 8 + param_1[2]) =
             CONCAT17(uStack_2c9,
                      CONCAT16(uStack_2ca,
                               CONCAT15(uStack_2cb,
                                        CONCAT14(uStack_2cc,
                                                 CONCAT13(uStack_2cd,
                                                          CONCAT12(uStack_2ce,
                                                                   CONCAT11(uStack_2cf,uStack_2d0)))
                                                ))));
        *(undefined4 *)(lVar32 + 0x10 + param_1[2]) = (undefined4)local_2c8;
        *(undefined4 *)(lVar32 + 0x14 + param_1[2]) = local_2c8._4_4_;
        *(undefined4 *)(lVar32 + 0x18 + param_1[2]) = local_2c0;
        *(undefined4 *)(lVar32 + 0x1c + param_1[2]) = local_2bc;
        *(undefined4 *)(lVar32 + 0x20 + param_1[2]) = local_2b8;
        *(undefined4 *)(lVar32 + 0x24 + param_1[2]) = local_2b4;
        lVar32 = lVar32 + 0x28;
      } while (iVar29 < *(int *)((longlong)param_1 + 0xc));
    }
  }
  else {
    lVar32 = lVar19;
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      do {
        (**(code **)*param_2)(param_2,&local_2d8,0x20);
        uVar13 = uStack_2d3;
        uVar12 = uStack_2d4;
        uVar11 = local_2d8._1_1_;
        uVar4 = (undefined1)local_2d8;
        if (*(char *)(param_1 + 9) != '\0') {
          local_2d8._0_1_ = local_2d8._3_1_;
          local_2d8._3_1_ = uVar4;
          local_2d8._1_1_ = local_2d8._2_1_;
          local_2d8._2_1_ = uVar11;
          uStack_2d4 = uStack_2d1;
          uStack_2d1 = uVar12;
          uStack_2d3 = uStack_2d2;
          uStack_2d2 = uVar13;
        }
        iVar29 = iVar29 + 1;
        *(longlong *)(lVar32 + param_1[2]) =
             (longlong)
             CONCAT13(local_2d8._3_1_,
                      CONCAT12(local_2d8._2_1_,CONCAT11(local_2d8._1_1_,(undefined1)local_2d8)));
        *(longlong *)(lVar32 + 8 + param_1[2]) =
             (longlong)CONCAT13(uStack_2d1,CONCAT12(uStack_2d2,CONCAT11(uStack_2d3,uStack_2d4)));
        *(uint *)(lVar32 + 0x10 + param_1[2]) =
             CONCAT13(uStack_2cd,CONCAT12(uStack_2ce,CONCAT11(uStack_2cf,uStack_2d0)));
        *(uint *)(lVar32 + 0x14 + param_1[2]) =
             CONCAT13(uStack_2c9,CONCAT12(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc)));
        *(undefined4 *)(lVar32 + 0x18 + param_1[2]) = (undefined4)local_2c8;
        *(undefined4 *)(lVar32 + 0x1c + param_1[2]) = local_2c8._4_4_;
        *(undefined4 *)(lVar32 + 0x20 + param_1[2]) = local_2c0;
        *(undefined4 *)(lVar32 + 0x24 + param_1[2]) = local_2bc;
        lVar32 = lVar32 + 0x28;
      } while (iVar29 < *(int *)((longlong)param_1 + 0xc));
    }
  }
  if ((*(char *)(param_1 + 9) != '\0') &&
     (iVar29 = 0, lVar32 = lVar19, 0 < *(int *)((longlong)param_1 + 0xc))) {
    do {
      iVar29 = iVar29 + 1;
      lVar24 = param_1[2] + lVar32;
      uVar4 = *(undefined1 *)(lVar24 + 0x10);
      *(undefined1 *)(lVar24 + 0x10) = *(undefined1 *)(lVar24 + 0x13);
      *(undefined1 *)(lVar24 + 0x13) = uVar4;
      uVar4 = *(undefined1 *)(lVar24 + 0x11);
      *(undefined1 *)(lVar24 + 0x11) = *(undefined1 *)(lVar24 + 0x12);
      *(undefined1 *)(lVar24 + 0x12) = uVar4;
      lVar24 = param_1[2] + lVar32;
      uVar4 = *(undefined1 *)(lVar24 + 0x14);
      *(undefined1 *)(lVar24 + 0x14) = *(undefined1 *)(lVar24 + 0x17);
      *(undefined1 *)(lVar24 + 0x17) = uVar4;
      uVar4 = *(undefined1 *)(lVar24 + 0x15);
      *(undefined1 *)(lVar24 + 0x15) = *(undefined1 *)(lVar24 + 0x16);
      *(undefined1 *)(lVar24 + 0x16) = uVar4;
      lVar24 = param_1[2] + lVar32;
      uVar4 = *(undefined1 *)(lVar24 + 0x18);
      *(undefined1 *)(lVar24 + 0x18) = *(undefined1 *)(lVar24 + 0x1b);
      *(undefined1 *)(lVar24 + 0x1b) = uVar4;
      uVar4 = *(undefined1 *)(lVar24 + 0x19);
      *(undefined1 *)(lVar24 + 0x19) = *(undefined1 *)(lVar24 + 0x1a);
      *(undefined1 *)(lVar24 + 0x1a) = uVar4;
      lVar24 = param_1[2] + lVar32;
      uVar4 = *(undefined1 *)(lVar24 + 0x1c);
      *(undefined1 *)(lVar24 + 0x1c) = *(undefined1 *)(lVar24 + 0x1f);
      *(undefined1 *)(lVar24 + 0x1f) = uVar4;
      uVar4 = *(undefined1 *)(lVar24 + 0x1d);
      *(undefined1 *)(lVar24 + 0x1d) = *(undefined1 *)(lVar24 + 0x1e);
      *(undefined1 *)(lVar24 + 0x1e) = uVar4;
      lVar24 = param_1[2] + lVar32;
      uVar4 = *(undefined1 *)(lVar24 + 0x20);
      *(undefined1 *)(lVar24 + 0x20) = *(undefined1 *)(lVar24 + 0x23);
      *(undefined1 *)(lVar24 + 0x23) = uVar4;
      uVar4 = *(undefined1 *)(lVar24 + 0x21);
      *(undefined1 *)(lVar24 + 0x21) = *(undefined1 *)(lVar24 + 0x22);
      *(undefined1 *)(lVar24 + 0x22) = uVar4;
      lVar24 = param_1[2] + lVar32;
      uVar4 = *(undefined1 *)(lVar24 + 0x24);
      *(undefined1 *)(lVar24 + 0x24) = *(undefined1 *)(lVar24 + 0x27);
      *(undefined1 *)(lVar24 + 0x27) = uVar4;
      uVar4 = *(undefined1 *)(lVar24 + 0x25);
      *(undefined1 *)(lVar24 + 0x25) = *(undefined1 *)(lVar24 + 0x26);
      *(undefined1 *)(lVar24 + 0x26) = uVar4;
      lVar32 = lVar32 + 0x28;
    } while (iVar29 < *(int *)((longlong)param_1 + 0xc));
  }
  (**(code **)*param_2)(param_2,&local_res8,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar10 = CONCAT41(local_res8._4_4_,(undefined1)local_res8);
    uVar4 = local_res8._1_1_;
    local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_res8._3_1_);
    local_res8 = CONCAT53(uVar10,CONCAT12(uVar4,(undefined2)local_res8));
  }
  iVar29 = 0;
  if (0 < (int)local_res8) {
    do {
      (**(code **)*param_2)(param_2,&local_res18,2);
      (**(code **)*param_2)(param_2,&local_res20,4);
      if (*(char *)(param_1 + 9) != '\0') {
        local_res18._0_2_ = CONCAT11((undefined1)local_res18,local_res18._1_1_);
        uVar10 = CONCAT41(local_res20._4_4_,(undefined1)local_res20);
        uVar4 = local_res20._1_1_;
        local_res20._0_2_ = CONCAT11(local_res20._2_1_,local_res20._3_1_);
        local_res20 = CONCAT53(uVar10,CONCAT12(uVar4,(undefined2)local_res20));
      }
      local_288 = CONCAT44((uint)local_res20,local_res18) & 0xffffffff0000ffff;
      if (*(uint *)(param_1 + 0xb) < (*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff)) {
        puVar1 = (uint *)(param_1[10] + (ulonglong)*(uint *)(param_1 + 0xb) * 8);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = local_res18 & 0xffff;
          puVar1[1] = (uint)local_res20;
        }
        *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
      }
      else {
        shdfnd::
        Array<physx::shdfnd::Pair<enum_physx::PxConcreteType::Enum,unsigned_int>,physx::shdfnd::ReflectionAllocator<physx::shdfnd::Pair<enum_physx::PxConcreteType::Enum,unsigned_int>_>_>
        ::growAndPushBack(param_1 + 10,&local_288);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < (int)local_res8);
  }
  (**(code **)*param_2)(param_2,&local_res10,4);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar10 = CONCAT41(local_res10._4_4_,(undefined1)local_res10);
    uVar4 = local_res10._1_1_;
    local_res10._0_2_ = CONCAT11(local_res10._2_1_,local_res10._3_1_);
    local_res10 = CONCAT53(uVar10,CONCAT12(uVar4,(undefined2)local_res10));
  }
  lVar32 = (longlong)(int)local_res10;
  if ((int)local_res10 == 0) {
    uVar38 = 0;
    lVar32 = lVar19;
  }
  else {
    pPVar20 = physx::shdfnd::getAllocator();
    lVar32 = (**(code **)(*(longlong *)pPVar20 + 8))
                       (pPVar20,lVar32,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_MetaData.cpp"
                        ,0x1cd);
    uVar38 = local_res10 & 0xffffffff;
  }
  param_1[3] = lVar32;
  (**(code **)*param_2)(param_2,lVar32,uVar38);
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  local_2f8 = ConvX::convert8;
  local_2a8 = 0x432b08e0;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,&DAT_145af4c58,1,0,&local_2a8);
  local_2f8 = ConvX::convert8;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  local_2a8 = 0x432b08e0;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,&DAT_145af49f8,1,0,&local_2a8);
  uStack_2f0 = 0;
  local_2f8 = ConvX::convert16;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  local_2a8 = 0x432b0990;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,"short",2,0,&local_2a8);
  uStack_2f0 = 0;
  local_2f8 = ConvX::convert32;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  local_2a8 = 0x432b0a30;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,&DAT_145af6ba4,4,0,&local_2a8);
  uStack_2f0 = 0;
  local_2f8 = ConvX::convert64;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  local_2a8 = 0x432b0ae0;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,"PxU64",8,0,&local_2a8);
  local_2f8 = ConvX::convertFloat;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  local_2a8 = 0x432b0bd0;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,"float",4,0,&local_2a8);
  uStack_2f0 = 0;
  local_2f8 = ConvX::convertPad8;
  local_2e8 = 0;
  local_298 = (ulonglong)uStack_2e4 << 0x20;
  puVar23 = &local_2a8;
  local_2a8 = 0x432b0920;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  uStack_29c = 0;
  addNewClass(param_1,"paddingByte",1,0,puVar23);
  local_res18 = 0;
  lVar32 = lVar19;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    do {
      lVar33 = 0;
      uVar36 = *(uint *)(param_1[2] + lVar19);
      lVar24 = lVar33;
      if (uVar36 != 0xffffffff) {
        lVar24 = (ulonglong)uVar36 + param_1[3];
      }
      *(longlong *)(param_1[2] + lVar19) = lVar24;
      uVar36 = *(uint *)(param_1[2] + 8 + lVar19);
      if (uVar36 != 0xffffffff) {
        lVar33 = (ulonglong)uVar36 + param_1[3];
      }
      *(longlong *)(param_1[2] + 8 + lVar19) = lVar33;
      puVar25 = (undefined8 *)(param_1[2] + lVar19);
      uVar36 = *(uint *)(puVar25 + 4);
      if ((uVar36 & 4) == 0) {
        if ((uVar36 & 1) == 0) {
          if ((uVar36 >> 8 & 1) != 0) {
            if (*(int *)((longlong)puVar25 + 0x14) == 0) {
              ConvX::registerUnionType(*param_1,*puVar25,puVar25[1],*(undefined4 *)(puVar25 + 2));
              goto LAB_1432aec7f;
            }
            ConvX::registerUnion(*param_1,*puVar25);
          }
          puVar25 = (undefined8 *)(param_1[2] + lVar19);
          uVar36 = *(uint *)(puVar25 + 4);
          if (*(uint *)(lVar32 + 0x48) < (*(uint *)(lVar32 + 0x4c) & 0x7fffffff)) {
            puVar26 = (undefined8 *)
                      (*(longlong *)(lVar32 + 0x40) + (ulonglong)*(uint *)(lVar32 + 0x48) * 0x28);
            if (puVar26 != (undefined8 *)0x0) {
              uVar9 = puVar25[1];
              *puVar26 = *puVar25;
              puVar26[1] = uVar9;
              uVar9 = puVar25[3];
              puVar26[2] = puVar25[2];
              puVar26[3] = uVar9;
              puVar26[4] = puVar25[4];
            }
            *(int *)(lVar32 + 0x48) = *(int *)(lVar32 + 0x48) + 1;
          }
          else {
            shdfnd::
            Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
            ::growAndPushBack(lVar32 + 0x40);
          }
          lVar24 = param_1[2];
          if ((uVar36 & 0x200) == 0) {
            uVar36 = *(uint *)(lVar24 + 0x20 + lVar19);
            pcVar37 = " - contains extra data: %s%s\n";
            if ((uVar36 & 0x10) == 0) {
              pcVar37 = " - contains field: %s%s\n";
            }
            puVar23 = (undefined4 *)&DAT_145af3922;
            if ((uVar36 & 8) != 0) {
              puVar23 = (undefined4 *)&DAT_145af6c98;
            }
          }
          else {
            puVar23 = *(undefined4 **)(lVar24 + 8 + lVar19);
            pcVar37 = " - contains padding: %s - %s\n";
          }
          ConvX::displayMessage(*param_1,1,pcVar37,*(undefined8 *)(lVar24 + lVar19),puVar23);
        }
        else if (puVar25[1] == 0) {
          ConvX::displayMessage(*param_1,1,"Found class: %s\n",*puVar25,puVar23);
          puVar23 = &local_2d8;
          local_2f8 = (code *)0x0;
          uStack_2f0 = 0;
          local_2e8 = 0xffffffff;
          local_2c8 = CONCAT44(uStack_2e4,0xffffffff);
          local_2d8._0_1_ = 0;
          local_2d8._1_1_ = 0;
          local_2d8._2_1_ = 0;
          local_2d8._3_1_ = 0;
          uStack_2d4 = 0;
          uStack_2d3 = 0;
          uStack_2d2 = 0;
          uStack_2d1 = 0;
          uStack_2d0 = 0;
          uStack_2cf = 0;
          uStack_2ce = 0;
          uStack_2cd = 0;
          uStack_2cc = 0;
          uStack_2cb = 0;
          uStack_2ca = 0;
          uStack_2c9 = 0;
          lVar32 = addNewClass(param_1,*(undefined8 *)(lVar19 + param_1[2]),
                               *(undefined4 *)(lVar19 + 0x14 + param_1[2]),0);
          if ((*(byte *)(lVar19 + 0x20 + param_1[2]) & 2) != 0) {
            local_280 = "v-table ptr";
            pcStack_278 = "v-table ptr";
            local_270 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c) << 0x20;
            lStack_268 = 1;
            local_260 = 8;
            if (*(uint *)(lVar32 + 0x48) < (*(uint *)(lVar32 + 0x4c) & 0x7fffffff)) {
              puVar25 = (undefined8 *)
                        (*(longlong *)(lVar32 + 0x40) + (ulonglong)*(uint *)(lVar32 + 0x48) * 0x28);
              if (puVar25 != (undefined8 *)0x0) {
                *puVar25 = "v-table ptr";
                puVar25[1] = "v-table ptr";
                puVar25[2] = local_270;
                puVar25[3] = 1;
                puVar25[4] = 8;
              }
              *(int *)(lVar32 + 0x48) = *(int *)(lVar32 + 0x48) + 1;
            }
            else {
              shdfnd::
              Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
              ::growAndPushBack(lVar32 + 0x40,&local_280);
            }
          }
        }
        else {
          ConvX::displayMessage(*param_1,1," - inherits from: %s\n",puVar25[1],puVar23);
          puVar25 = (undefined8 *)(param_1[2] + lVar19);
          if (*(uint *)(lVar32 + 0x38) < (*(uint *)(lVar32 + 0x3c) & 0x7fffffff)) {
            puVar26 = (undefined8 *)
                      (*(longlong *)(lVar32 + 0x30) + (ulonglong)*(uint *)(lVar32 + 0x38) * 0x28);
            if (puVar26 != (undefined8 *)0x0) {
              uVar9 = puVar25[1];
              *puVar26 = *puVar25;
              puVar26[1] = uVar9;
              uVar9 = puVar25[3];
              puVar26[2] = puVar25[2];
              puVar26[3] = uVar9;
              puVar26[4] = puVar25[4];
            }
            *(int *)(lVar32 + 0x38) = *(int *)(lVar32 + 0x38) + 1;
          }
          else {
            shdfnd::
            Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
            ::growAndPushBack(lVar32 + 0x30,puVar25);
          }
        }
      }
      else {
        puVar23 = (undefined4 *)*puVar25;
        ConvX::displayMessage(*param_1,1,"Found typedef: %s => %s\n",puVar25[1],puVar23);
        uVar38 = 0;
        lVar24 = *(longlong *)(param_1[2] + 8 + lVar19);
        if (*(uint *)(param_1 + 5) != 0) {
LAB_1432ae980:
          puVar6 = *(undefined4 **)(param_1[4] + uVar38 * 8);
          pcVar37 = *(char **)(puVar6 + 8);
          lVar33 = lVar24 - (longlong)pcVar37;
          do {
            cVar18 = *pcVar37;
            cVar5 = pcVar37[lVar33];
            if (cVar18 != cVar5) break;
            pcVar37 = pcVar37 + 1;
          } while (cVar5 != '\0');
          if (cVar18 != cVar5) goto code_r0x0001432ae9a7;
          for (puVar23 = *(undefined4 **)(puVar6 + 6); puVar23 != (undefined4 *)0x0;
              puVar23 = *(undefined4 **)(puVar23 + 6)) {
            puVar6 = puVar23;
          }
          local_2a8 = *puVar6;
          uStack_2a4 = puVar6[1];
          uStack_2a0 = puVar6[2];
          uStack_29c = puVar6[3];
          puVar23 = &local_2a8;
          local_298 = *(longlong *)(puVar6 + 4);
          addNewClass(param_1,*(undefined8 *)(param_1[2] + lVar19),puVar6[10],puVar6);
          goto LAB_1432aec7f;
        }
LAB_1432ae9af:
        ConvX::displayMessage
                  (*param_1,0x20,
                   "PxBinaryConverter: Invalid typedef - Missing metadata for: %s, please check the source metadata.\n"
                   ,lVar24,puVar23);
      }
LAB_1432aec7f:
      local_res18 = local_res18 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)local_res18 < *(int *)((longlong)param_1 + 0xc));
  }
  uVar36 = *(uint *)(param_1 + 5);
  uVar27 = 0;
  if (uVar36 != 0) {
    lVar19 = 0;
    do {
      lVar32 = *(longlong *)(lVar19 + param_1[4]);
      local_res18 = 0;
      cVar18 = `physx::Sn::MetaData::load'::`2'::Local::_computeDepth(param_1,lVar32,0,&local_res18)
      ;
      if (cVar18 == '\0') {
        return 0;
      }
      uVar27 = uVar27 + 1;
      lVar19 = lVar19 + 8;
      *(uint *)(lVar32 + 0x2c) = local_res18;
    } while (uVar27 < uVar36);
  }
  qsort((void *)param_1[4],(ulonglong)uVar36,8,(_PtFuncCompare *)&LAB_1432afb90);
  if (*(uint *)(param_1 + 5) != 0) {
    local_res20 = 0;
    local_288 = (ulonglong)*(uint *)(param_1 + 5);
    do {
      _Src = (code *)0x0;
      uVar31 = 0;
      local_2f8 = (code *)0x0;
      uVar38 = 0;
      uStack_2f0 = 0;
      local_258[0] = *(longlong *)(local_res20 + param_1[4]);
      if (*(uint *)(local_258[0] + 0x38) != 0) {
        local_res8 = 0;
        local_res10 = (ulonglong)*(uint *)(local_258[0] + 0x38);
        do {
          uVar30 = 0;
          lVar19 = *(longlong *)(local_258[0] + 0x30) + local_res8;
          if (*(uint *)(param_1 + 5) != 0) {
LAB_1432aed90:
            lVar32 = *(longlong *)(param_1[4] + uVar30 * 8);
            pcVar37 = *(char **)(lVar32 + 0x20);
            lVar24 = *(longlong *)(lVar19 + 8) - (longlong)pcVar37;
            do {
              cVar18 = *pcVar37;
              cVar5 = pcVar37[lVar24];
              if (cVar18 != cVar5) break;
              pcVar37 = pcVar37 + 1;
            } while (cVar5 != '\0');
            if (cVar18 != cVar5) goto code_r0x0001432aedbb;
            for (lVar24 = *(longlong *)(lVar32 + 0x18); lVar24 != 0;
                lVar24 = *(longlong *)(lVar24 + 0x18)) {
              lVar32 = lVar24;
            }
            goto LAB_1432aedc5;
          }
LAB_1432aedc3:
          lVar32 = 0;
LAB_1432aedc5:
          if (*(uint *)(lVar32 + 0x48) != 0) {
            lVar24 = 0;
            uVar30 = (ulonglong)*(uint *)(lVar32 + 0x48);
            do {
              lVar33 = *(longlong *)(lVar32 + 0x40);
              local_280 = *(char **)(lVar24 + lVar33);
              pcStack_278 = (char *)((longlong *)(lVar24 + lVar33))[1];
              plVar21 = (longlong *)(lVar24 + 0x10 + lVar33);
              local_270 = *plVar21;
              lStack_268 = plVar21[1];
              local_260 = *(longlong *)(lVar24 + 0x20 + lVar33);
              if (((local_280 != "v-table ptr") || ((int)*plVar21 != 0)) ||
                 (*(int *)(lVar19 + 0x10) != 0)) {
                local_270 = CONCAT44(*(int *)((longlong)plVar21 + 4),
                                     (int)*plVar21 + *(int *)(lVar19 + 0x10));
                if ((uint)uVar31 < ((uint)uVar38 & 0x7fffffff)) {
                  pcVar2 = _Src + uVar31 * 0x28;
                  if (pcVar2 != (code *)0x0) {
                    *(char **)pcVar2 = local_280;
                    *(char **)(pcVar2 + 8) = pcStack_278;
                    *(longlong *)(pcVar2 + 0x10) = local_270;
                    *(longlong *)(pcVar2 + 0x18) = lStack_268;
                    *(longlong *)(pcVar2 + 0x20) = local_260;
                  }
                  uVar36 = (uint)uVar31 + 1;
                  uVar31 = (ulonglong)uVar36;
                  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar36);
                }
                else {
                  shdfnd::
                  Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
                  ::growAndPushBack(&local_2f8,&local_280);
                  uVar31 = uStack_2f0 & 0xffffffff;
                  uVar38 = uStack_2f0 >> 0x20;
                  _Src = local_2f8;
                }
              }
              lVar24 = lVar24 + 0x28;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          local_res8 = local_res8 + 0x28;
          local_res10 = local_res10 - 1;
          *(undefined1 *)(local_258[0] + 0x50) = 1;
        } while (local_res10 != 0);
        local_res10 = 0;
      }
      lVar32 = local_258[0];
      uVar30 = local_288;
      lVar19 = local_res20;
      uVar28 = 0;
      if (*(int *)(local_258[0] + 0x48) != 0) {
        do {
          puVar25 = (undefined8 *)(*(longlong *)(lVar32 + 0x40) + uVar28 * 0x28);
          if ((uint)uVar31 < ((uint)uVar38 & 0x7fffffff)) {
            pcVar2 = _Src + uVar31 * 0x28;
            if (pcVar2 != (code *)0x0) {
              uVar9 = puVar25[1];
              *(undefined8 *)pcVar2 = *puVar25;
              *(undefined8 *)(pcVar2 + 8) = uVar9;
              uVar9 = puVar25[3];
              *(undefined8 *)(pcVar2 + 0x10) = puVar25[2];
              *(undefined8 *)(pcVar2 + 0x18) = uVar9;
              *(undefined8 *)(pcVar2 + 0x20) = puVar25[4];
            }
            uVar36 = (uint)uVar31 + 1;
            uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar36);
          }
          else {
            shdfnd::
            Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
            ::growAndPushBack(&local_2f8);
            uVar38 = uStack_2f0 >> 0x20;
            _Src = local_2f8;
            uVar36 = (uint)uStack_2f0;
          }
          uVar31 = (ulonglong)uVar36;
          uVar36 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar36;
        } while (uVar36 < *(uint *)(lVar32 + 0x48));
      }
      *(undefined4 *)(lVar32 + 0x48) = 0;
      shdfnd::
      Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
      ::resizeUninitialized((undefined8 *)(lVar32 + 0x40),(uVar31 * 0x28) / 0x28);
      _Dst = *(void **)(lVar32 + 0x40);
      pvVar22 = (void *)((longlong)_Dst + (ulonglong)*(uint *)(lVar32 + 0x48) * 0x28);
      if (_Dst < pvVar22) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,_Src,
                   (ulonglong)(uint)((int)(((longlong)pvVar22 - (longlong)_Dst) / 0x28) * 0x28));
      }
      if ((((uVar38 & 0x7fffffff) != 0) && (-1 < (int)uVar38)) && (_Src != (code *)0x0)) {
        pPVar20 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar20 + 0x10))(pPVar20,_Src);
      }
      local_res20 = lVar19 + 8;
      local_288 = uVar30 - 1;
    } while (local_288 != 0);
  }
  uVar36 = *(uint *)(param_1 + 5);
  uVar27 = 0;
  if (uVar36 != 0) {
    lVar19 = 0;
    do {
      cVar18 = MetaClass::check(*(undefined8 *)(lVar19 + param_1[4]),param_1);
      if (cVar18 == '\0') {
        return 0;
      }
      uVar27 = uVar27 + 1;
      lVar19 = lVar19 + 8;
    } while (uVar27 < uVar36);
  }
  local_res8 = (ulonglong)*(uint *)(param_1 + 5);
  if (*(uint *)(param_1 + 5) != 0) {
    lVar19 = 0;
    do {
      uVar39 = (undefined4)((ulonglong)puVar23 >> 0x20);
      uVar36 = *(uint *)(*(longlong *)(param_1[4] + lVar19) + 0x48);
      uVar38 = CONCAT44(0,uVar36);
      if (1 < uVar36) {
        puVar25 = *(undefined8 **)(*(longlong *)(param_1[4] + lVar19) + 0x40);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar38;
        lVar32 = SUB168(ZEXT816(0x28) * auVar8,0);
        uVar31 = (ulonglong)uVar36;
        if (SUB168(ZEXT816(0x28) * auVar8,8) != 0) {
          lVar32 = -1;
        }
        if (lVar32 == 0) {
LAB_1432af142:
          pvVar22 = (void *)0x0;
        }
        else {
          pPVar20 = physx::shdfnd::getAllocator();
          plVar21 = (longlong *)PxGetFoundation();
          cVar18 = (**(code **)(*plVar21 + 0x28))(plVar21);
          if (cVar18 == '\0') {
            pcVar37 = "<allocation names disabled>";
          }
          else {
            pcVar37 = (char *)__std_type_info_name(0x14683ab60,&DAT_146bcc1d0);
          }
          puVar23 = (undefined4 *)CONCAT44(uVar39,0x2b0);
          pvVar22 = (void *)(**(code **)(*(longlong *)pPVar20 + 8))
                                      (pPVar20,lVar32,pcVar37,
                                       "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_MetaData.cpp"
                                       ,puVar23);
          if (pvVar22 == (void *)0x0) goto LAB_1432af142;
          if (uVar36 != 0) {
            ::_guard_xfg_dispatch_icall_nop(pvVar22,0,uVar38 * 0x28);
          }
        }
        uVar30 = 0;
        puVar26 = puVar25;
        uVar28 = uVar30;
        if (uVar36 != 0) {
          do {
            uVar30 = uVar28;
            if ((*(byte *)(puVar26 + 4) & 0x10) == 0) {
              uVar9 = puVar26[1];
              uVar30 = (ulonglong)((int)uVar28 + 1);
              puVar3 = (undefined8 *)((longlong)pvVar22 + uVar28 * 0x28);
              *puVar3 = *puVar26;
              puVar3[1] = uVar9;
              uVar9 = puVar26[3];
              puVar3 = (undefined8 *)((longlong)pvVar22 + uVar28 * 0x28 + 0x10);
              *puVar3 = puVar26[2];
              puVar3[1] = uVar9;
              *(undefined8 *)((longlong)pvVar22 + uVar28 * 0x28 + 0x20) = puVar26[4];
            }
            uVar38 = uVar38 - 1;
            puVar26 = puVar26 + 5;
            uVar28 = uVar30;
          } while (uVar38 != 0);
        }
        puVar26 = puVar25;
        sVar35 = uVar30;
        sVar34 = uVar30;
        if (uVar36 != 0) {
          do {
            sVar35 = sVar34;
            if ((*(byte *)(puVar26 + 4) & 0x10) != 0) {
              uVar9 = puVar26[1];
              sVar35 = (size_t)((int)sVar34 + 1);
              puVar3 = (undefined8 *)((longlong)pvVar22 + sVar34 * 0x28);
              *puVar3 = *puVar26;
              puVar3[1] = uVar9;
              uVar9 = puVar26[3];
              puVar3 = (undefined8 *)((longlong)pvVar22 + sVar34 * 0x28 + 0x10);
              *puVar3 = puVar26[2];
              puVar3[1] = uVar9;
              *(undefined8 *)((longlong)pvVar22 + sVar34 * 0x28 + 0x20) = puVar26[4];
            }
            uVar31 = uVar31 - 1;
            puVar26 = puVar26 + 5;
            sVar34 = sVar35;
          } while (uVar31 != 0);
        }
        ::_guard_xfg_dispatch_icall_nop(puVar25,pvVar22,(ulonglong)(uint)((int)sVar35 * 0x28));
        if (pvVar22 != (void *)0x0) {
          pPVar20 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar20 + 0x10))(pPVar20,pvVar22);
        }
        qsort(puVar25,uVar30,0x28,(_PtFuncCompare *)&LAB_1432afba0);
      }
      lVar19 = lVar19 + 8;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return 1;
code_r0x0001432ae9a7:
  uVar36 = (int)uVar38 + 1;
  uVar38 = (ulonglong)uVar36;
  if (*(uint *)(param_1 + 5) <= uVar36) goto LAB_1432ae9af;
  goto LAB_1432ae980;
code_r0x0001432aedbb:
  uVar36 = (int)uVar30 + 1;
  uVar30 = (ulonglong)uVar36;
  if (*(uint *)(param_1 + 5) <= uVar36) goto LAB_1432aedc3;
  goto LAB_1432aed90;
}



// FUNCTION 1432af260 getMetaClass body=138 status=ok
// SIG undefined getMetaClass(void)

longlong physx::Sn::MetaData::getMetaClass(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x28) != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar7 * 8);
      pcVar4 = *(char **)(lVar3 + 0x20);
      lVar5 = param_2 - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar5];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        for (lVar5 = *(longlong *)(lVar3 + 0x18); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
          lVar3 = lVar5;
        }
        return lVar3;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 1432af2f0 getMetaClass body=81 status=ok
// SIG undefined getMetaClass(void)

undefined8 physx::Sn::MetaData::getMetaClass(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar2 = 0;
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x58) != 0) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8) == param_2) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x50) + 4 + uVar4 * 8);
        if (uVar3 != 0xffffffff) {
          lVar2 = (ulonglong)uVar3 + *(longlong *)(param_1 + 0x18);
        }
        uVar1 = getMetaClass(param_1,lVar2);
        return uVar1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x58));
  }
  return 0;
}



// FUNCTION 1432af350 addNewClass body=278 status=ok
// SIG undefined addNewClass(void)

undefined4 *
physx::Sn::MetaData::addNewClass
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  PxAllocatorCallback *pPVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined4 *local_res8;
  
  pPVar7 = physx::shdfnd::getAllocator();
  plVar8 = (longlong *)PxGetFoundation();
  cVar6 = (**(code **)(*plVar8 + 0x28))(plVar8);
  if (cVar6 == '\0') {
    pcVar9 = "<allocation names disabled>";
  }
  else {
    pcVar9 = (char *)__std_type_info_name(0x14683ab30,&DAT_146bcc1d0);
  }
  local_res8 = (undefined4 *)
               (**(code **)(*(longlong *)pPVar7 + 8))
                         (pPVar7,0x58,pcVar9,
                          "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_MetaData.cpp"
                          ,0x119);
  if (local_res8 == (undefined4 *)0x0) {
    local_res8 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(local_res8 + 0xc) = 0;
    *(undefined8 *)(local_res8 + 0xe) = 0;
    *(undefined8 *)(local_res8 + 0x10) = 0;
    *(undefined8 *)(local_res8 + 0x12) = 0;
  }
  puVar5 = local_res8;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *local_res8 = *param_5;
  local_res8[1] = uVar2;
  local_res8[2] = uVar3;
  local_res8[3] = uVar4;
  *(undefined8 *)(local_res8 + 4) = *(undefined8 *)(param_5 + 4);
  *(undefined8 *)(local_res8 + 6) = param_4;
  *(undefined8 *)(local_res8 + 8) = param_2;
  local_res8[10] = param_3;
  local_res8[0xb] = 0;
  *(undefined1 *)(local_res8 + 0x14) = 0;
  if (*(uint *)(param_1 + 0x28) < (*(uint *)(param_1 + 0x2c) & 0x7fffffff)) {
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = local_res8;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    shdfnd::
    Array<physx::Sn::MetaClass_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::Sn::MetaClass_*___ptr64>_>
    ::growAndPushBack(param_1 + 0x20,&local_res8);
  }
  return puVar5;
}



// FUNCTION 1432af470 peek body=155 status=ok
// SIG undefined peek(void)

ulonglong physx::Sn::peek(int param_1,ulonglong *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = param_3 & 0x1000;
  param_3 = param_3 & 0x800;
  if (param_1 == 1) {
    bVar1 = (byte)*param_2;
    if (param_3 != 0) {
      bVar1 = bVar1 & 0x7f;
    }
    if (uVar5 == 0) {
      return (ulonglong)bVar1;
    }
    if (bVar1 != 1) {
      return (ulonglong)bVar1;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 4) {
        uVar3 = (uint)*param_2;
        if (param_3 != 0) {
          uVar3 = uVar3 & 0x7fffffff;
        }
        uVar4 = (ulonglong)uVar3;
        if ((uVar5 != 0) && (uVar3 == 1)) {
          return 0;
        }
      }
      else {
        if (param_1 != 8) {
          return 0xffffffffffffffff;
        }
        uVar4 = *param_2;
        if (param_3 != 0) {
          uVar4 = uVar4 & 0x7fffffffffffffff;
        }
        if ((uVar5 != 0) && (uVar4 == 1)) {
          return 0;
        }
      }
      return uVar4;
    }
    uVar2 = (ushort)*param_2;
    if (param_3 != 0) {
      uVar2 = uVar2 & 0x7fff;
    }
    if ((uVar5 == 0) || (uVar2 != 1)) {
      return (ulonglong)uVar2;
    }
  }
  return 0;
}



// FUNCTION 1432af520 releaseMetaData body=112 status=ok
// SIG undefined releaseMetaData(void)

void physx::Sn::ConvX::releaseMetaData(longlong param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    MetaData::~MetaData(lVar1);
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    MetaData::~MetaData(lVar1);
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1432af5a0 loadMetaData body=325 status=ok
// SIG undefined loadMetaData(void)

undefined8 physx::Sn::ConvX::loadMetaData(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  PxAllocatorCallback *pPVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_3 == 1) {
    lVar7 = 8;
  }
  else {
    if (param_3 != 2) {
      displayMessage(param_1,0x20,
                     "PxBinaryConverter: Wrong meta data type, please check the source metadata.\n")
      ;
      return 0;
    }
    lVar7 = 0x10;
  }
  pPVar3 = physx::shdfnd::getAllocator();
  plVar4 = (longlong *)PxGetFoundation();
  cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if (cVar2 == '\0') {
    pcVar5 = "<allocation names disabled>";
  }
  else {
    pcVar5 = (char *)__std_type_info_name(0x14683ab08,&DAT_146bcc1d0);
  }
  plVar6 = (longlong *)
           (**(code **)(*(longlong *)pPVar3 + 8))
                     (pPVar3,0x60,pcVar5,
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_MetaData.cpp"
                      ,0x2d6);
  plVar4 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = param_1;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    *(undefined1 *)(plVar6 + 9) = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar4 = plVar6;
  }
  *(longlong **)(lVar7 + param_1) = plVar4;
  cVar2 = MetaData::load(plVar4,param_2,param_3);
  if ((cVar2 == '\0') && (lVar1 = *(longlong *)(lVar7 + param_1), lVar1 != 0)) {
    MetaData::~MetaData(lVar1);
    pPVar3 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
    *(undefined8 *)(lVar7 + param_1) = 0;
  }
  return *(undefined8 *)(lVar7 + param_1);
}



// FUNCTION 1432af6f0 getBinaryMetaData body=23 status=ok
// SIG undefined getBinaryMetaData(void)

undefined8 physx::Sn::ConvX::getBinaryMetaData(longlong param_1,int param_2)

{
  if (param_2 == 1) {
    return *(undefined8 *)(param_1 + 8);
  }
  if (param_2 == 2) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 1432af780 getMetaClass body=33 status=ok
// SIG undefined getMetaClass(void)

undefined8 physx::Sn::ConvX::getMetaClass(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 1) {
    uVar1 = MetaData::getMetaClass(*(undefined8 *)(param_1 + 8));
    return uVar1;
  }
  if (param_3 == 2) {
    uVar1 = MetaData::getMetaClass(*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 0;
}



// FUNCTION 1432af7b0 getMetaClass body=201 status=ok
// SIG undefined getMetaClass(void)

longlong physx::Sn::ConvX::getMetaClass(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_3 == 1) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar3 = 0;
    uVar4 = 0;
    if (*(uint *)(lVar1 + 0x58) != 0) {
      do {
        if (*(int *)(*(longlong *)(lVar1 + 0x50) + (ulonglong)uVar3 * 8) == param_2) {
          uVar3 = *(uint *)(*(longlong *)(lVar1 + 0x50) + 4 + (ulonglong)uVar3 * 8);
          if (uVar3 != 0xffffffff) {
            uVar4 = (ulonglong)uVar3 + *(longlong *)(lVar1 + 0x18);
          }
LAB_1432af84b:
          lVar1 = MetaData::getMetaClass(lVar1,uVar4);
          if (lVar1 != 0) {
            return lVar1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(lVar1 + 0x58));
    }
  }
  else if (param_3 == 2) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar4 = 0;
    if (*(uint *)(lVar1 + 0x58) != 0) {
      uVar2 = uVar4;
      do {
        if (*(int *)(*(longlong *)(lVar1 + 0x50) + uVar2 * 8) == param_2) {
          uVar3 = *(uint *)(*(longlong *)(lVar1 + 0x50) + 4 + uVar2 * 8);
          if (uVar3 != 0xffffffff) {
            uVar4 = (ulonglong)uVar3 + *(longlong *)(lVar1 + 0x18);
          }
          goto LAB_1432af84b;
        }
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(lVar1 + 0x58));
    }
  }
  displayMessage(param_1,0x20,
                 "PxBinaryConverter: Missing concreteType %d metadata! serialized a class without dumping metadata. Please check the metadata."
                 ,param_2);
  return 0;
}



// FUNCTION 1432af880 _computeDepth body=301 status=ok
// SIG undefined _computeDepth(void)

undefined8
`physx::Sn::MetaData::load'::`2'::Local::_computeDepth
          (undefined8 *param_1,longlong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (*param_4 < param_3) {
    *param_4 = param_3;
  }
  uVar3 = *(uint *)(param_2 + 0x38);
  uVar7 = 0;
  if (uVar3 == 0) {
    return 1;
  }
LAB_1432af8c0:
  lVar1 = *(longlong *)(param_2 + 0x30) + uVar7 * 0x28;
  uVar10 = 0;
  if (*(uint *)(param_1 + 5) == 0) {
LAB_1432af924:
    physx::Sn::ConvX::displayMessage
              (*param_1,0x20,
               "PxBinaryConverter: Can\'t find class %s metadata, please check the source metadata.\n"
               ,*(undefined8 *)(lVar1 + 8));
    return 0;
  }
  do {
    lVar4 = *(longlong *)(param_1[4] + uVar10 * 8);
    pcVar6 = *(char **)(lVar4 + 0x20);
    lVar8 = *(longlong *)(lVar1 + 8) - (longlong)pcVar6;
    do {
      cVar5 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar5 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (cVar5 == cVar2) break;
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    if (*(uint *)(param_1 + 5) <= uVar9) goto LAB_1432af924;
  } while( true );
  for (lVar1 = *(longlong *)(lVar4 + 0x18); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    lVar4 = lVar1;
  }
  cVar5 = _computeDepth(param_1,lVar4,param_3 + 1);
  if (cVar5 == '\0') {
    return 0;
  }
  uVar9 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar9;
  if (uVar3 <= uVar9) {
    return 1;
  }
  goto LAB_1432af8c0;
}



// FUNCTION 1432af9b0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::MetaClass_*___ptr64>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683abe8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432afa50 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683ab60,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432afaf0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::
ReflectionAllocator<physx::shdfnd::Pair<enum_physx::PxConcreteType::Enum,unsigned_int>_>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683ab98,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432afbb0 growAndPushBack body=212 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::Sn::MetaClass_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::Sn::MetaClass_*___ptr64>_>
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
      goto LAB_1432afbff;
    }
  }
  _Dst = (void *)ReflectionAllocator<physx::Sn::MetaClass_*___ptr64>::allocate
                           (param_1,(ulonglong)uVar5 << 3,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432afbff:
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



// FUNCTION 1432afc90 growAndPushBack body=277 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
       ::growAndPushBack(longlong *param_1,undefined8 *param_2)

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
      goto LAB_1432afce3;
    }
  }
  _Dst = (void *)ReflectionAllocator<physx::Sn::PxMetaDataEntry>::allocate
                           (param_1,(ulonglong)uVar6 * 0x28,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432afce3:
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



// FUNCTION 1432afdb0 growAndPushBack body=223 status=ok
// SIG undefined growAndPushBack(void)

undefined4 *
physx::shdfnd::
Array<physx::shdfnd::Pair<enum_physx::PxConcreteType::Enum,unsigned_int>,physx::shdfnd::ReflectionAllocator<physx::shdfnd::Pair<enum_physx::PxConcreteType::Enum,unsigned_int>_>_>
::growAndPushBack(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  PxAllocatorCallback *pPVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar7 == 0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_1432afdff;
    }
  }
  puVar3 = (undefined4 *)
           ReflectionAllocator<physx::shdfnd::Pair<enum_physx::PxConcreteType::Enum,unsigned_int>_>
           ::allocate(param_1,(ulonglong)uVar7 << 3,
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                      ,0x25d);
LAB_1432afdff:
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  for (puVar5 = puVar3; puVar5 < puVar3 + (ulonglong)uVar1 * 2; puVar5 = puVar5 + 2) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
    }
    puVar6 = puVar6 + 2;
  }
  puVar6 = puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 2;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  *param_1 = (longlong)puVar3;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  return puVar3 + (ulonglong)uVar1 * 2;
}



// FUNCTION 1432afe90 recreate body=215 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
     ::recreate(longlong *param_1,uint param_2)

{
  longlong lVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::Sn::PxMetaDataEntry>::allocate
                             (param_1,(ulonglong)param_2 * 0x28,
                              "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x28 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)*param_1,
               (ulonglong)(uint)((int)(((ulonglong)*(uint *)(param_1 + 1) * 0x28) / 0x28) * 0x28));
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



// FUNCTION 1432aff70 resizeUninitialized body=59 status=ok
// SIG undefined resizeUninitialized(void)

void physx::shdfnd::
     Array<physx::Sn::PxMetaDataEntry,physx::shdfnd::ReflectionAllocator<physx::Sn::PxMetaDataEntry>_>
     ::resizeUninitialized(longlong param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0xc) & 0x7fffffff) < param_2) {
    recreate();
    *(uint *)(param_1 + 8) = param_2;
    return;
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1432affb0 registerUnion body=149 status=ok
// SIG undefined registerUnion(void)

undefined8 physx::Sn::ConvX::registerUnion(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  displayMessage(param_1,1,"Registering union: %s\n",param_2);
  local_20 = 0;
  local_18 = 0;
  local_28 = param_2;
  if ((*(uint *)(param_1 + 0x134) & 0x7fffffff) <= *(uint *)(param_1 + 0x130)) {
    shdfnd::Array<physx::Sn::Union,physx::shdfnd::ReflectionAllocator<physx::Sn::Union>_>::
    growAndPushBack((longlong *)(param_1 + 0x128),&local_28);
    return 1;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    shdfnd::Array<physx::Sn::UnionType,physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>::
    copy<physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>(puVar1 + 1,&local_20);
  }
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  return 1;
}



// FUNCTION 1432b0050 registerUnionType body=276 status=ok
// SIG undefined registerUnionType(void)

undefined8
physx::Sn::ConvX::registerUnionType
          (longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x130) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x128);
    do {
      pcVar4 = *(char **)(lVar3 + uVar8 * 0x18);
      lVar6 = param_2 - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar6];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        lVar6 = lVar3 + uVar8 * 0x18;
        uVar7 = *(uint *)(lVar3 + 0x10 + uVar8 * 0x18);
        local_18 = param_3;
        uStack_10 = param_4;
        if (uVar7 < (*(uint *)(lVar3 + 0x14 + uVar8 * 0x18) & 0x7fffffff)) {
          puVar5 = (undefined4 *)((ulonglong)uVar7 * 0x10 + *(longlong *)(lVar6 + 8));
          if (puVar5 != (undefined4 *)0x0) {
            local_18._0_4_ = (undefined4)param_3;
            local_18._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
            *puVar5 = (undefined4)local_18;
            puVar5[1] = local_18._4_4_;
            puVar5[2] = param_4;
            puVar5[3] = uStack_c;
          }
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
        }
        else {
          shdfnd::
          Array<physx::Sn::UnionType,physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>::
          growAndPushBack(lVar6 + 8,&local_18);
        }
        displayMessage(param_1,1,"Registering union type: %s | %s | %d\n",param_2,param_3,param_4);
        return 1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x130));
  }
  displayMessage(param_1,0x20,
                 "PxBinaryConverter: union not found: %s, please check the source metadata.\n",
                 param_2);
  return 0;
}



// FUNCTION 1432b0170 getTypeName body=220 status=ok
// SIG undefined getTypeName(void)

undefined8 physx::Sn::ConvX::getTypeName(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x130) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x128);
    do {
      pcVar5 = *(char **)(lVar4 + (ulonglong)uVar8 * 0x18);
      lVar6 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar6];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        uVar3 = *(uint *)(lVar4 + 0x10 + (ulonglong)uVar8 * 0x18);
        if (uVar3 != 0) {
          lVar4 = *(longlong *)(lVar4 + (ulonglong)uVar8 * 0x18 + 8);
          do {
            if (*(int *)(lVar4 + 8 + (ulonglong)uVar7 * 0x10) == param_3) {
              return *(undefined8 *)(lVar4 + (ulonglong)uVar7 * 0x10);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x130));
  }
  displayMessage(param_1,0x20,
                 "PxBinaryConverter: union type not found: %s, type %d, please check the source metadata.\n"
                 ,param_2,param_3);
  return 0;
}



// FUNCTION 1432b0260 resetUnions body=51 status=ok
// SIG undefined resetUnions(void)

void physx::Sn::ConvX::resetUnions(longlong param_1)

{
  shdfnd::Array<physx::Sn::Union,physx::shdfnd::ReflectionAllocator<physx::Sn::Union>_>::destroy
            (*(longlong *)(param_1 + 0x128),
             *(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 0x18);
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}



// FUNCTION 1432b02a0 copy<physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_> body=120 status=ok
// SIG undefined copy<physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>(void)

void physx::shdfnd::
     Array<physx::Sn::UnionType,physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>::
     copy<physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>
               (undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Dst;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    *(uint *)(param_1 + 1) = uVar1;
    _Dst = (void *)ReflectionAllocator<physx::Sn::UnionType>::allocate
                             (param_1,(ulonglong)uVar1 << 4,
                              "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
    *param_1 = _Dst;
    if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + (longlong)_Dst)) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)*param_2,(ulonglong)(*(uint *)(param_1 + 1) << 4));
      return;
    }
  }
  return;
}



// FUNCTION 1432b0320 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::Union>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683ac18,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432b03c0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683ac40,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432b0460 growAndPushBack body=300 status=ok
// SIG undefined growAndPushBack(void)

undefined8 *
physx::shdfnd::Array<physx::Sn::Union,physx::shdfnd::ReflectionAllocator<physx::Sn::Union>_>::
growAndPushBack(longlong *param_1,undefined8 *param_2)

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
      goto LAB_1432b04c2;
    }
  }
  puVar3 = (undefined8 *)
           ReflectionAllocator<physx::Sn::Union>::allocate
                     (param_1,(ulonglong)uVar7 * 0x18,
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                      ,0x25d);
LAB_1432b04c2:
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  for (puVar5 = puVar3; puVar5 < puVar3 + (ulonglong)uVar1 * 3; puVar5 = puVar5 + 3) {
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *puVar6;
      Array<physx::Sn::UnionType,physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>::
      copy<physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>(puVar5 + 1,puVar6 + 1);
    }
    puVar6 = puVar6 + 3;
  }
  puVar6 = puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 3;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    Array<physx::Sn::UnionType,physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>::
    copy<physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>(puVar6 + 1,param_2 + 1);
  }
  destroy(*param_1,*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  return puVar3 + (ulonglong)uVar1 * 3;
}



// FUNCTION 1432b0590 growAndPushBack body=209 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::Sn::UnionType,physx::shdfnd::ReflectionAllocator<physx::Sn::UnionType>_>::
       growAndPushBack(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Dst;
  undefined4 *puVar6;
  PxAllocatorCallback *pPVar7;
  uint uVar8;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
      goto LAB_1432b05df;
    }
  }
  _Dst = (void *)ReflectionAllocator<physx::Sn::UnionType>::allocate
                           (param_1,(ulonglong)uVar8 << 4,
                            "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_1432b05df:
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) << 4));
  }
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + (longlong)_Dst);
  if (puVar6 != (undefined4 *)0x0) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar6 = *param_2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar7 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar7 + 0x10))(pPVar7,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  *param_1 = (longlong)_Dst;
  return (void *)((ulonglong)uVar1 * 0x10 + (longlong)_Dst);
}



// FUNCTION 1432b0670 setNullPtr body=7 status=ok
// SIG undefined setNullPtr(void)

void physx::Sn::ConvX::setNullPtr(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x150) = param_2;
  return;
}



// FUNCTION 1432b0680 setNoOutput body=7 status=ok
// SIG undefined setNoOutput(void)

void physx::Sn::ConvX::setNoOutput(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x151) = param_2;
  return;
}



// FUNCTION 1432b0690 initOutput body=106 status=ok
// SIG undefined initOutput(void)

undefined8 physx::Sn::ConvX::initOutput(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  lVar1 = getBinaryMetaData(param_1,1);
  lVar2 = getBinaryMetaData(param_1,2);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar1 + 0x3c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar2 + 0x3c);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(lVar2 + 0x48);
  return 1;
}



// FUNCTION 1432b0700 closeOutput body=12 status=ok
// SIG undefined closeOutput(void)

void physx::Sn::ConvX::closeOutput(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}



// FUNCTION 1432b0720 getCurrentOutputSize body=7 status=ok
// SIG undefined getCurrentOutputSize(void)

undefined4 physx::Sn::ConvX::getCurrentOutputSize(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x144);
}



// FUNCTION 1432b0730 output body=86 status=ok
// SIG undefined output(void)

void physx::Sn::ConvX::output(longlong param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_res10;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    local_res10 = param_2;
    if (*(char *)(param_1 + 0x140) != '\0') {
      local_res10._0_1_ = (undefined1)param_2;
      local_res10._1_1_ = (undefined1)((ushort)param_2 >> 8);
      local_res10 = CONCAT11((undefined1)local_res10,local_res10._1_1_);
    }
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                      (*(undefined8 **)(param_1 + 0x138),&local_res10,2);
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar1;
  }
  return;
}



// FUNCTION 1432b0790 output body=103 status=ok
// SIG undefined output(void)

void physx::Sn::ConvX::output(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_res10;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    local_res10 = param_2;
    if (*(char *)(param_1 + 0x140) != '\0') {
      local_res10._0_1_ = (undefined1)param_2;
      uVar1 = (undefined1)local_res10;
      local_res10._3_1_ = (undefined1)((uint)param_2 >> 0x18);
      local_res10._2_1_ = (undefined1)((uint)param_2 >> 0x10);
      local_res10._1_1_ = (undefined1)((uint)param_2 >> 8);
      uVar2 = local_res10._1_1_;
      local_res10._0_2_ = CONCAT11(local_res10._2_1_,local_res10._3_1_);
      local_res10 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)local_res10));
    }
    iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                      (*(undefined8 **)(param_1 + 0x138),&local_res10,4);
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar3;
  }
  return;
}



// FUNCTION 1432b0800 output body=150 status=ok
// SIG undefined output(void)

void physx::Sn::ConvX::output(longlong param_1,ulonglong param_2)

{
  undefined3 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    local_res10 = param_2;
    if (*(char *)(param_1 + 0x140) != '\0') {
      local_res10._7_1_ = (undefined1)(param_2 >> 0x38);
      local_res8._6_1_ = (undefined1)(param_2 >> 0x30);
      local_res8._1_1_ = (undefined1)(param_2 >> 8);
      uVar4 = local_res8._1_1_;
      local_res8._5_1_ = (undefined1)(param_2 >> 0x28);
      local_res8._0_3_ = CONCAT12(local_res8._5_1_,CONCAT11(local_res8._6_1_,local_res10._7_1_));
      uVar1 = (undefined3)local_res8;
      local_res8._4_1_ = (undefined1)(param_2 >> 0x20);
      uVar6 = local_res8._4_1_;
      local_res8 = (param_2 >> 0x10 & 0xff) << 0x28;
      lVar3 = local_res8;
      local_res8._3_1_ = (undefined1)(param_2 >> 0x18);
      uVar5 = local_res8._3_1_;
      local_res8._4_4_ = SUB84(lVar3,4);
      local_res8._0_4_ = CONCAT13(uVar6,uVar1);
      uVar2 = (undefined4)local_res8;
      local_res8 = CONCAT17((char)param_2,CONCAT16(uVar4,(undefined6)local_res8));
      local_res8._0_5_ = CONCAT14(uVar5,uVar2);
      local_res10 = local_res8;
    }
    iVar7 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                      (*(undefined8 **)(param_1 + 0x138),&local_res10,8);
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar7;
  }
  return;
}



// FUNCTION 1432b08a0 output body=47 status=ok
// SIG undefined output(void)

void physx::Sn::ConvX::output(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x151) == '\0') && (param_3 != 0)) {
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x138))();
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar1;
  }
  return;
}



// FUNCTION 1432b08e0 convert8 body=46 status=ok
// SIG undefined convert8(void)

void physx::Sn::ConvX::convert8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                      (*(undefined8 **)(param_1 + 0x138),param_2,*(undefined4 *)(param_3 + 0x14));
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar1;
  }
  return;
}



// FUNCTION 1432b0920 convertPad8 body=103 status=ok
// SIG undefined convertPad8(void)

void physx::Sn::ConvX::convertPad8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    iVar1 = 0;
    local_res8[0] = 0xcd;
    if (0 < *(int *)(param_3 + 0x14)) {
      do {
        (**(code **)**(undefined8 **)(param_1 + 0x138))
                  (*(undefined8 **)(param_1 + 0x138),local_res8,1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_3 + 0x14));
    }
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + *(int *)(param_3 + 0x14);
  }
  return;
}



// FUNCTION 1432b0990 convert16 body=144 status=ok
// SIG undefined convert16(void)

void physx::Sn::ConvX::convert16(longlong param_1,undefined2 *param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_res8;
  
  if ((*(char *)(param_1 + 0x151) == '\0') && (iVar3 = 0, 0 < *(int *)(param_3 + 0x18))) {
    do {
      local_res8 = *param_2;
      param_2 = param_2 + 1;
      if (*(char *)(param_1 + 0x140) != '\0') {
        uVar1 = (undefined1)local_res8;
        local_res8._1_1_ = (undefined1)((ushort)local_res8 >> 8);
        local_res8 = CONCAT11(uVar1,local_res8._1_1_);
      }
      iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                        (*(undefined8 **)(param_1 + 0x138),&local_res8,2);
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar2;
    } while (iVar3 < *(int *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 1432b0a30 convert32 body=160 status=ok
// SIG undefined convert32(void)

void physx::Sn::ConvX::convert32(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_res8;
  
  if ((*(char *)(param_1 + 0x151) == '\0') && (iVar4 = 0, 0 < *(int *)(param_3 + 0x18))) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      local_res8 = uVar1;
      if (*(char *)(param_1 + 0x140) != '\0') {
        local_res8._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
        local_res8._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
        local_res8._1_1_ = (undefined1)((uint)uVar1 >> 8);
        uVar2 = local_res8._1_1_;
        local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_res8._3_1_);
        local_res8 = CONCAT13((char)uVar1,CONCAT12(uVar2,(undefined2)local_res8));
      }
      iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                        (*(undefined8 **)(param_1 + 0x138),&local_res8,4);
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar3;
    } while (iVar4 < *(int *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 1432b0ae0 convert64 body=230 status=ok
// SIG undefined convert64(void)

void physx::Sn::ConvX::convert64(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res8;
  undefined8 local_18;
  
  if ((*(char *)(param_1 + 0x151) == '\0') && (iVar6 = 0, 0 < *(int *)(param_3 + 0x18))) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      local_18 = uVar1;
      if (*(char *)(param_1 + 0x140) != '\0') {
        local_18._7_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
        local_res8._6_1_ = (undefined1)((ulonglong)uVar1 >> 0x30);
        local_res8._1_1_ = (undefined1)((ulonglong)uVar1 >> 8);
        uVar2 = local_res8._1_1_;
        local_res8._5_1_ = (undefined1)((ulonglong)uVar1 >> 0x28);
        local_res8._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
        uVar3 = local_res8._2_1_;
        local_res8._4_1_ = (undefined1)((ulonglong)uVar1 >> 0x20);
        local_res8._3_1_ = (undefined1)((ulonglong)uVar1 >> 0x18);
        uVar4 = local_res8._3_1_;
        local_res8._0_4_ =
             CONCAT13(local_res8._4_1_,
                      CONCAT12(local_res8._5_1_,CONCAT11(local_res8._6_1_,local_18._7_1_)));
        local_res8 = CONCAT35(CONCAT21(CONCAT11((char)uVar1,uVar2),uVar3),
                              CONCAT14(uVar4,(undefined4)local_res8));
        local_18 = local_res8;
      }
      iVar5 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                        (*(undefined8 **)(param_1 + 0x138),&local_18,8);
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar5;
    } while (iVar6 < *(int *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 1432b0bd0 convertFloat body=166 status=ok
// SIG undefined convertFloat(void)

void physx::Sn::ConvX::convertFloat(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_res8;
  
  if ((*(char *)(param_1 + 0x151) == '\0') && (iVar5 = 0, 0 < *(int *)(param_3 + 0x18))) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      local_res8 = uVar1;
      if (*(char *)(param_1 + 0x140) != '\0') {
        local_res8._0_1_ = (undefined1)uVar1;
        uVar2 = (undefined1)local_res8;
        local_res8._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
        local_res8._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
        local_res8._1_1_ = (undefined1)((uint)uVar1 >> 8);
        uVar3 = local_res8._1_1_;
        local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_res8._3_1_);
        local_res8 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_res8));
      }
      iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                        (*(undefined8 **)(param_1 + 0x138),&local_res8,4);
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar4;
    } while (iVar5 < *(int *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 1432b0c80 convertPtr body=715 status=ok
// SIG undefined convertPtr(void)

void physx::Sn::ConvX::convertPtr(longlong param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined4 local_res8;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [4];
  undefined8 local_40;
  ulonglong local_38 [2];
  
  if ((*(char *)(param_1 + 0x151) == '\0') && (local_58 = 0, 0 < *(int *)(param_3 + 0x18))) {
    do {
      lVar8 = *(longlong *)(param_1 + 0x178);
      local_40 = 0;
      if (*(int *)(param_1 + 0x148) == 4) {
        uVar6 = (uint)*param_2;
        param_2 = (ulonglong *)((longlong)param_2 + 4);
        uVar5 = uVar6;
        local_res8 = uVar6;
        if (lVar8 == 0) {
          cVar4 = PointerRemap::getObjectRef(param_1 + 0x168,uVar6,&local_50);
          uVar5 = local_50;
          uVar3 = local_50;
          if ((cVar4 == '\0') && (uVar5 = uVar6, uVar3 = local_res8, uVar6 != 0)) {
            uVar5 = *(int *)(param_1 + 0x180) + 1;
            *(uint *)(param_1 + 0x180) = uVar5;
            uVar5 = uVar5 | 0x80000000;
            PointerRemap::setObjectRef(param_1 + 0x168,uVar6,uVar5);
            uVar3 = uVar5;
          }
        }
        else {
          cVar4 = PointerRemap::getObjectRef(lVar8,uVar6,&local_54);
          if (cVar4 == '\0') {
            uVar3 = local_res8;
            if (uVar6 != 0) {
              uVar12 = 0;
              if (*(longlong *)(param_3 + 8) == 0) {
LAB_1432b0d46:
                local_res8 = 0x12345678;
                uVar5 = 0x12345678;
                uVar3 = local_res8;
              }
              else {
                do {
                  uVar10 = uVar12 + 1;
                  if (*(char *)(*(longlong *)(param_3 + 8) + uVar12) != "mName"[uVar12])
                  goto LAB_1432b0d46;
                  uVar12 = uVar10;
                } while (uVar10 != 6);
              }
            }
          }
          else {
            local_res8 = local_54;
            uVar5 = local_54;
            uVar3 = local_res8;
          }
        }
        local_res8 = uVar3;
        if (*(char *)(param_1 + 0x140) != '\0') {
          uVar1 = (undefined1)local_res8;
          uVar2 = local_res8._1_1_;
          local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_res8._3_1_);
          local_res8._0_3_ = CONCAT12(uVar2,(undefined2)local_res8);
          local_res8 = CONCAT13(uVar1,(undefined3)local_res8);
          uVar5 = local_res8;
        }
        if (*(char *)(param_1 + 0x150) != '\0') {
          uVar5 = 0;
        }
        local_38[0] = CONCAT44(local_38[0]._4_4_,uVar5);
        uVar10 = 0;
      }
      else {
        uVar12 = *param_2;
        param_2 = param_2 + 1;
        if (lVar8 == 0) {
          cVar4 = PointerRemap::getObjectRef(param_1 + 0x168,uVar12,&local_48);
          if (cVar4 == '\0') {
            if (uVar12 != 0) {
              uVar6 = *(int *)(param_1 + 0x180) + 1;
              *(uint *)(param_1 + 0x180) = uVar6;
              uVar6 = uVar6 | 0x80000000;
              PointerRemap::setObjectRef(param_1 + 0x168,uVar12,uVar6);
              uVar12 = (ulonglong)uVar6;
            }
          }
          else {
            uVar12 = (ulonglong)local_48;
          }
        }
        else {
          cVar4 = PointerRemap::getObjectRef(lVar8,uVar12,&local_4c);
          if (cVar4 == '\0') {
            if (uVar12 != 0) {
              if (*(longlong *)(param_3 + 8) == 0) {
LAB_1432b0e27:
                uVar12 = 0x12345678;
              }
              else {
                lVar8 = 0;
                do {
                  lVar9 = lVar8 + 1;
                  if (*(char *)(*(longlong *)(param_3 + 8) + lVar8) != "mName"[lVar8])
                  goto LAB_1432b0e27;
                  lVar8 = lVar9;
                } while (lVar9 != 6);
              }
            }
          }
          else {
            uVar12 = (ulonglong)local_4c;
          }
        }
        uVar10 = 0;
        local_40 = uVar10;
        local_38[0] = uVar10;
        if (*(char *)(param_1 + 0x150) == '\0') {
          uVar10 = uVar12;
          local_40 = uVar12;
          local_38[0] = uVar12;
        }
      }
      iVar7 = *(int *)(param_1 + 0x148);
      if (*(int *)(param_1 + 0x14c) == iVar7) {
        puVar11 = local_38;
      }
      else {
        if (iVar7 < *(int *)(param_1 + 0x14c)) {
          iVar7 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                            (*(undefined8 **)(param_1 + 0x138),local_38);
          local_44 = (undefined1  [4])0x0;
          puVar11 = (ulonglong *)local_44;
          *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar7;
        }
        else {
          local_res8 = (uint)uVar10;
          if (*(char *)(param_1 + 0x140) != '\0') {
            local_res8._1_1_ = (undefined1)(uVar10 >> 8);
            uVar1 = local_res8._1_1_;
            local_res8._2_1_ = (undefined1)(uVar10 >> 0x10);
            local_res8._0_2_ = CONCAT11(local_res8._2_1_,local_40._3_1_);
            local_res8._0_3_ = CONCAT12(uVar1,(undefined2)local_res8);
            local_res8 = CONCAT13((char)uVar10,(undefined3)local_res8);
          }
          puVar11 = (ulonglong *)&local_res8;
        }
        iVar7 = 4;
      }
      iVar7 = (**(code **)**(undefined8 **)(param_1 + 0x138))
                        (*(undefined8 **)(param_1 + 0x138),puVar11,iVar7);
      local_58 = local_58 + 1;
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar7;
    } while (local_58 < *(int *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 1432b0f50 resetNbErrors body=10 status=ok
// SIG undefined resetNbErrors(void)

void physx::Sn::ConvX::resetNbErrors(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x154) = 0;
  return;
}



// FUNCTION 1432b0f70 displayMessage body=300 status=ok
// SIG undefined displayMessage(void)

void physx::Sn::ConvX::displayMessage
               (longlong param_1,Enum param_2,char *param_3,undefined8 param_4)

{
  bool bVar1;
  Foundation *pFVar2;
  char *pcVar3;
  int iVar4;
  undefined8 local_res20;
  
  if (*(int *)(param_1 + 0x15c) != 0) {
    iVar4 = *(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x158);
    if (iVar4 < 10) {
      bVar1 = false;
      if ((param_2 < 0x21) && ((0x100000110U >> ((longlong)(int)param_2 & 0x3fU) & 1) != 0)) {
        bVar1 = true;
        *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
      }
      else if (param_2 == 2) {
        bVar1 = true;
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
      }
      else {
        if (iVar4 != 0) {
          return;
        }
        if (*(int *)(param_1 + 0x15c) != 2) {
          return;
        }
      }
      local_res20 = param_4;
      pFVar2 = physx::shdfnd::Foundation::getInstance();
      physx::shdfnd::Foundation::errorImpl
                (pFVar2,param_2,
                 "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Error.cpp"
                 ,0x4b,param_3,(char *)&local_res20);
      if (bVar1) {
        if (iVar4 == 0) {
          pFVar2 = physx::shdfnd::Foundation::getInstance();
          iVar4 = 0x53;
          pcVar3 = "Hit warnings or errors: skipping further verbose output.\n";
        }
        else {
          if (iVar4 != 9) {
            return;
          }
          pFVar2 = physx::shdfnd::Foundation::getInstance();
          iVar4 = 0x57;
          pcVar3 = "Exceeding 10 warnings or errors: skipping further output.\n";
        }
        physx::shdfnd::Foundation::error
                  (pFVar2,1,
                   "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX_Error.cpp"
                   ,iVar4,pcVar3);
      }
    }
  }
  return;
}



// FUNCTION 1432b10a0 DistanceJointSolverPrep body=1318 status=ok
// SIG undefined DistanceJointSolverPrep(void)

undefined8
DistanceJointSolverPrep
          (float *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5,
          float *param_6,float *param_7)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
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
  
  uVar1 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  fVar9 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  fVar13 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar15 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  fVar8 = param_6[3];
  fVar4 = param_6[2];
  fVar7 = param_6[1];
  fVar6 = *param_6;
  fVar11 = fVar8 * fVar8 - 0.5;
  fVar5 = fVar6 * fVar15 + fVar7 * fVar9 + fVar4 * fVar13;
  fVar19 = (fVar7 * fVar13 - fVar4 * fVar9) * fVar8 + fVar11 * fVar15 + fVar6 * fVar5 + param_6[4];
  fVar16 = *(float *)((longlong)param_5 + 0x3c) + *(float *)((longlong)param_5 + 0x3c);
  fVar14 = *(float *)((longlong)param_5 + 0x44) + *(float *)((longlong)param_5 + 0x44);
  fVar10 = *(float *)(param_5 + 8) + *(float *)(param_5 + 8);
  fVar17 = param_7[3];
  fVar18 = (fVar6 * fVar9 - fVar7 * fVar15) * fVar8 + fVar11 * fVar13 + fVar4 * fVar5 + param_6[6];
  fVar12 = fVar17 * fVar17 - 0.5;
  fVar13 = (fVar4 * fVar15 - fVar6 * fVar13) * fVar8 + fVar11 * fVar9 + fVar7 * fVar5 + param_6[5];
  fVar8 = param_7[1];
  fVar4 = *param_7;
  fVar7 = param_7[2];
  fVar6 = fVar4 * fVar16 + fVar8 * fVar10 + fVar7 * fVar14;
  fVar9 = (fVar8 * fVar14 - fVar7 * fVar10) * fVar17 + fVar12 * fVar16 + fVar4 * fVar6 + param_7[4];
  fVar5 = fVar19 - fVar9;
  fVar11 = (fVar7 * fVar16 - fVar4 * fVar14) * fVar17 + fVar12 * fVar10 + fVar8 * fVar6 + param_7[5]
  ;
  fVar17 = (fVar4 * fVar10 - fVar8 * fVar16) * fVar17 + fVar12 * fVar14 + fVar7 * fVar6 + param_7[6]
  ;
  fVar7 = fVar13 - fVar11;
  fVar8 = param_6[5];
  fVar6 = fVar18 - fVar17;
  fVar4 = param_6[6];
  *param_2 = fVar9 - param_6[4];
  param_2[1] = fVar11 - fVar8;
  param_2[2] = fVar17 - fVar4;
  fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  if (0.0 < fVar8) {
    fVar4 = 1.0 / fVar8;
    fVar5 = fVar5 * fVar4;
    fVar7 = fVar7 * fVar4;
    fVar6 = fVar6 * fVar4;
  }
  bVar3 = (byte)*(undefined2 *)((longlong)param_5 + 100);
  bVar2 = bVar3 >> 2 & 1;
  bVar3 = bVar3 >> 1 & 1;
  if (((bVar3 != 0) &&
      (*(float *)((longlong)param_5 + 0x54) <= fVar8 &&
       fVar8 != *(float *)((longlong)param_5 + 0x54))) ||
     ((bVar2 != 0 && (fVar8 < *(float *)(param_5 + 10))))) {
    if (fVar8 < 1.1920929e-07) {
      fVar5 = 1.0;
      fVar7 = 0.0;
      fVar6 = 0.0;
    }
    *(undefined2 *)(param_1 + 0x13) = 0x10;
    param_1[1] = fVar7;
    *param_1 = fVar5;
    param_1[2] = fVar6;
    fVar18 = fVar18 - param_6[6];
    fVar19 = fVar19 - param_6[4];
    fVar13 = fVar13 - param_6[5];
    param_1[4] = fVar13 * fVar6 - fVar18 * fVar7;
    param_1[5] = fVar18 * fVar5 - fVar19 * fVar6;
    param_1[6] = fVar19 * fVar7 - fVar13 * fVar5;
    param_1[9] = fVar7;
    param_1[8] = fVar5;
    param_1[10] = fVar6;
    fVar4 = param_7[6];
    fVar7 = param_7[4];
    fVar10 = param_7[5];
    param_1[0xc] = (fVar11 - fVar10) * fVar6 - (fVar17 - fVar4) * param_1[9];
    param_1[0xe] = (fVar9 - fVar7) * param_1[9] - (fVar11 - fVar10) * fVar5;
    param_1[0xd] = (fVar17 - fVar4) * fVar5 - (fVar9 - fVar7) * fVar6;
    if ((*(byte *)((longlong)param_5 + 100) & 8) != 0) {
      *(ushort *)(param_1 + 0x13) = *(ushort *)(param_1 + 0x13) | 1;
      param_1[0x10] = *(float *)((longlong)param_5 + 0x5c);
      param_1[0x11] = *(float *)(param_5 + 0xc);
    }
    fVar4 = *(float *)(param_5 + 10);
    fVar7 = *(float *)((longlong)param_5 + 0x54);
    if ((fVar4 == fVar7) && (bVar2 != 0)) {
      if (bVar3 != 0) {
        fVar4 = *(float *)(param_5 + 0xb);
        fVar8 = fVar8 - fVar7;
        if (fVar4 < fVar8) {
          param_1[3] = fVar8 - fVar4;
          return 1;
        }
        if (fVar8 < -fVar4) {
          param_1[3] = fVar4 + fVar8;
          return 1;
        }
        param_1[3] = 0.0;
        return 1;
      }
    }
    else if ((bVar3 != 0) && (fVar7 < fVar8)) {
      fVar4 = *(float *)(param_5 + 0xb);
      param_1[0xf] = 0.0;
      param_1[3] = (fVar8 - fVar7) - fVar4;
      return 1;
    }
    if ((bVar2 != 0) && (fVar8 < fVar4)) {
      fVar7 = *(float *)(param_5 + 0xb);
      param_1[0xb] = 0.0;
      param_1[3] = (fVar8 - fVar4) + fVar7;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1432b15d0 FixedJointSolverPrep body=1376 status=ok
// SIG undefined FixedJointSolverPrep(void)

longlong FixedJointSolverPrep
                   (longlong param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
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
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  longlong local_e8;
  longlong local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  
  uVar4 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar4;
  fVar1 = param_6[3];
  fVar2 = param_6[1];
  fVar3 = param_6[2];
  fVar15 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  fVar8 = *param_6;
  fVar9 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  fVar13 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar11 = fVar1 * fVar1 - 0.5;
  fVar7 = fVar8 * fVar15 + fVar2 * fVar9 + fVar3 * fVar13;
  fVar18 = (fVar2 * fVar13 - fVar3 * fVar9) * fVar1 + fVar11 * fVar15 + fVar8 * fVar7 + param_6[4];
  fVar19 = (fVar8 * fVar9 - fVar2 * fVar15) * fVar1 + fVar11 * fVar13 + fVar3 * fVar7 + param_6[6];
  fVar20 = (fVar3 * fVar15 - fVar8 * fVar13) * fVar1 + fVar11 * fVar9 + fVar2 * fVar7 + param_6[5];
  pfVar5 = (float *)physx::PxQuat::operator*(param_6,&local_138);
  fVar1 = *pfVar5;
  fVar16 = *(float *)((longlong)param_5 + 0x3c) + *(float *)((longlong)param_5 + 0x3c);
  fVar2 = param_7[3];
  fVar10 = *(float *)(param_5 + 8) + *(float *)(param_5 + 8);
  fVar3 = param_7[1];
  fVar8 = param_7[2];
  fVar7 = *param_7;
  fVar9 = pfVar5[1];
  fVar14 = *(float *)((longlong)param_5 + 0x44) + *(float *)((longlong)param_5 + 0x44);
  fVar11 = pfVar5[2];
  fVar13 = pfVar5[3];
  fVar12 = fVar2 * fVar2 - 0.5;
  fVar15 = fVar7 * fVar16 + fVar3 * fVar10 + fVar8 * fVar14;
  fVar21 = (fVar3 * fVar14 - fVar8 * fVar10) * fVar2 + fVar12 * fVar16 + fVar7 * fVar15 + param_7[4]
  ;
  fVar17 = (fVar8 * fVar16 - fVar7 * fVar14) * fVar2 + fVar12 * fVar10 + fVar3 * fVar15 + param_7[5]
  ;
  fVar14 = (fVar7 * fVar10 - fVar3 * fVar16) * fVar2 + fVar12 * fVar14 + fVar8 * fVar15 + param_7[6]
  ;
  local_108 = fVar1;
  local_104 = fVar9;
  local_100 = fVar11;
  local_fc = fVar13;
  local_f8 = fVar18;
  local_f4 = fVar20;
  local_f0 = fVar19;
  puVar6 = (undefined8 *)physx::PxQuat::operator*(param_7,&local_138);
  local_128 = *puVar6;
  uStack_120 = puVar6[1];
  fVar12 = (fVar21 - fVar18) * 2.0;
  fVar15 = fVar13 * fVar13 - 0.5;
  fVar10 = (fVar17 - fVar20) * 2.0;
  fVar7 = (fVar14 - fVar19) * 2.0;
  fVar8 = fVar9 * fVar10 + fVar1 * fVar12 + fVar11 * fVar7;
  local_138 = (fVar15 * fVar12 - (fVar9 * fVar7 - fVar11 * fVar10) * fVar13) + fVar1 * fVar8;
  fVar2 = param_6[5];
  local_134 = (fVar15 * fVar10 - (fVar11 * fVar12 - fVar1 * fVar7) * fVar13) + fVar9 * fVar8;
  fVar3 = param_6[6];
  *param_2 = fVar21 - param_6[4];
  param_2[1] = fVar17 - fVar2;
  param_2[2] = fVar14 - fVar3;
  local_d4 = fVar20 - param_6[5];
  local_cc = fVar21 - param_7[4];
  local_c8 = fVar17 - param_7[5];
  local_c4 = fVar14 - param_7[6];
  local_d8 = fVar18 - param_6[4];
  local_d0 = fVar19 - param_6[6];
  local_130 = (fVar15 * fVar7 - (fVar1 * fVar10 - fVar9 * fVar12) * fVar13) + fVar11 * fVar8;
  local_118 = fVar21;
  local_114 = fVar17;
  local_110 = fVar14;
  local_e8 = param_1;
  local_e0 = param_1;
  physx::Ext::joint::ConstraintHelper::prepareLockedAxes
            (&local_e8,&local_108,&local_128,&local_138,7,7);
  return (local_e0 - local_e8) / 0x50;
}



// FUNCTION 1432b1b30 PrismaticJointSolverPrep body=2398 status=ok
// SIG undefined PrismaticJointSolverPrep(void)

longlong PrismaticJointSolverPrep
                   (float *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5,float *param_6,float *param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ushort uVar6;
  byte bVar7;
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
  float *local_158;
  float *local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  
  uVar2 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar2;
  fVar20 = param_6[3];
  fVar25 = param_6[1];
  fVar9 = param_6[2];
  fVar17 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  fVar11 = *param_6;
  fVar12 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  fVar15 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar13 = fVar20 * fVar20 - 0.5;
  fVar8 = fVar11 * fVar17 + fVar25 * fVar12 + fVar9 * fVar15;
  fVar23 = (fVar25 * fVar15 - fVar9 * fVar12) * fVar20 + fVar13 * fVar17 + fVar11 * fVar8 +
           param_6[4];
  fVar21 = (fVar11 * fVar12 - fVar25 * fVar17) * fVar20 + fVar13 * fVar15 + fVar9 * fVar8 +
           param_6[6];
  fVar19 = (fVar9 * fVar17 - fVar11 * fVar15) * fVar20 + fVar13 * fVar12 + fVar25 * fVar8 +
           param_6[5];
  pfVar4 = (float *)physx::PxQuat::operator*(param_6,&local_128);
  fVar20 = *pfVar4;
  fVar16 = *(float *)((longlong)param_5 + 0x44) + *(float *)((longlong)param_5 + 0x44);
  fVar18 = *(float *)((longlong)param_5 + 0x3c) + *(float *)((longlong)param_5 + 0x3c);
  fVar25 = param_7[1];
  fVar9 = *param_7;
  fVar11 = param_7[3];
  fVar8 = param_7[2];
  fVar12 = pfVar4[1];
  fVar13 = pfVar4[2];
  fVar15 = pfVar4[3];
  fVar24 = *(float *)(param_5 + 8) + *(float *)(param_5 + 8);
  fVar14 = fVar11 * fVar11 - 0.5;
  fVar10 = fVar18 * fVar9 + fVar24 * fVar25 + fVar16 * fVar8;
  fVar22 = (fVar16 * fVar25 - fVar24 * fVar8) * fVar11 + fVar14 * fVar18 + fVar10 * fVar9 +
           param_7[4];
  fVar17 = (fVar18 * fVar8 - fVar16 * fVar9) * fVar11 + fVar14 * fVar24 + fVar10 * fVar25 +
           param_7[5];
  fVar25 = (fVar24 * fVar9 - fVar18 * fVar25) * fVar11 + fVar14 * fVar16 + fVar10 * fVar8 +
           param_7[6];
  local_f8 = fVar20;
  local_f4 = fVar12;
  local_f0 = fVar13;
  local_ec = fVar15;
  local_e8 = fVar23;
  local_e4 = fVar19;
  local_e0 = fVar21;
  puVar5 = (undefined8 *)physx::PxQuat::operator*(param_7,&local_128);
  local_118 = *puVar5;
  uStack_110 = puVar5[1];
  bVar7 = *(byte *)((longlong)param_5 + 0x74) >> 1 & 1;
  if ((bVar7 == 0) ||
     (*(float *)(param_5 + 0xd) <= *(float *)((longlong)param_5 + 100) &&
      *(float *)((longlong)param_5 + 100) != *(float *)(param_5 + 0xd))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  fVar16 = fVar15 * fVar15 - 0.5;
  fVar8 = (fVar17 - fVar19) * 2.0;
  fVar10 = (fVar22 - fVar23) * 2.0;
  fVar11 = (fVar25 - fVar21) * 2.0;
  fVar9 = fVar12 * fVar8 + fVar20 * fVar10 + fVar13 * fVar11;
  fVar14 = (fVar16 * fVar10 - (fVar12 * fVar11 - fVar13 * fVar8) * fVar15) + fVar20 * fVar9;
  local_124 = (fVar16 * fVar8 - (fVar13 * fVar10 - fVar20 * fVar11) * fVar15) + fVar12 * fVar9;
  local_120 = (fVar16 * fVar11 - (fVar20 * fVar8 - fVar12 * fVar10) * fVar15) + fVar13 * fVar9;
  fVar9 = param_6[6];
  fVar11 = param_6[5];
  *param_2 = fVar22 - param_6[4];
  param_2[2] = fVar25 - fVar9;
  param_2[1] = fVar17 - fVar11;
  local_148 = fVar23 - param_6[4];
  local_13c = fVar22 - param_7[4];
  local_138 = fVar17 - param_7[5];
  local_134 = fVar25 - param_7[6];
  local_144 = fVar19 - param_6[5];
  local_140 = fVar21 - param_6[6];
  local_158 = param_1;
  local_150 = param_1;
  local_128 = fVar14;
  local_108 = fVar22;
  local_104 = fVar17;
  local_100 = fVar25;
  physx::Ext::joint::ConstraintHelper::prepareLockedAxes
            (&local_158,&local_f8,&local_118,&local_128,bVar3 + '\x06',7);
  if ((bVar7 != 0) && (!bVar3)) {
    fVar25 = fVar20 * 2.0 + fVar12 * 0.0 + fVar13 * 0.0;
    fVar11 = (fVar12 * 0.0 - fVar13 * 0.0) * fVar15 + fVar16 * 2.0 + fVar20 * fVar25;
    fVar9 = (fVar13 * 2.0 - fVar20 * 0.0) * fVar15 + fVar16 * 0.0 + fVar12 * fVar25;
    fVar20 = (fVar20 * 0.0 - fVar12 * 2.0) * fVar15 + fVar16 * 0.0 + fVar13 * fVar25;
    if ((0.0 < *(float *)((longlong)param_5 + 0x5c)) || (0.0 < *(float *)(param_5 + 0xb))) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = *(float *)(param_5 + 0xc);
    }
    pfVar4 = local_150;
    if (*(float *)((longlong)param_5 + 100) < fVar25 + fVar14) {
      fVar25 = *(float *)((longlong)param_5 + 100) - fVar14;
      pfVar4 = local_150 + 0x14;
      *(undefined2 *)((longlong)local_150 + 0x4e) = 0;
      *local_150 = fVar11;
      local_150[1] = fVar9;
      local_150[2] = fVar20;
      local_150[4] = local_144 * fVar20 - local_140 * fVar9;
      local_150[5] = local_140 * fVar11 - local_148 * fVar20;
      local_150[6] = local_148 * fVar9 - local_144 * fVar11;
      local_150[8] = fVar11;
      local_150[9] = fVar9;
      local_150[10] = fVar20;
      local_150[0xc] = local_138 * fVar20 - local_134 * fVar9;
      local_150[0xd] = local_134 * fVar11 - local_13c * fVar20;
      local_150[0xe] = local_13c * fVar9 - local_138 * fVar11;
      uVar1 = *(ushort *)(local_150 + 0x13);
      uVar6 = uVar1 | 0x10;
      local_150[3] = fVar25;
      if ((0.0 < *(float *)((longlong)param_5 + 0x5c)) || (0.0 < *(float *)(param_5 + 0xb))) {
        uVar6 = uVar1 | 0x11;
        local_150[0x10] = *(float *)(param_5 + 0xb);
        local_150[0x11] = *(float *)((longlong)param_5 + 0x5c);
      }
      else {
        *(undefined2 *)((longlong)local_150 + 0x4e) = 0x401;
        local_150[0x10] = *(float *)(param_5 + 10);
        local_150[0x11] = *(float *)((longlong)param_5 + 0x54);
        if (0.0 < fVar25) {
          uVar6 = uVar1 | 0x18;
        }
        if (0.0 < *(float *)(param_5 + 10)) {
          uVar6 = uVar6 | 4;
        }
      }
      *(ushort *)(local_150 + 0x13) = uVar6;
      local_150[0xb] = 0.0;
    }
    fVar11 = -fVar11;
    fVar9 = -fVar9;
    fVar20 = -fVar20;
    if ((0.0 < *(float *)((longlong)param_5 + 0x5c)) || (0.0 < *(float *)(param_5 + 0xb))) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = *(float *)(param_5 + 0xc);
    }
    local_150 = pfVar4;
    if (-*(float *)(param_5 + 0xd) < fVar25 + -fVar14) {
      fVar25 = -*(float *)(param_5 + 0xd) - -fVar14;
      local_150 = pfVar4 + 0x14;
      *(undefined2 *)((longlong)pfVar4 + 0x4e) = 0;
      pfVar4[1] = fVar9;
      *pfVar4 = fVar11;
      pfVar4[2] = fVar20;
      pfVar4[4] = fVar20 * local_144 - fVar9 * local_140;
      pfVar4[5] = fVar11 * local_140 - fVar20 * local_148;
      pfVar4[6] = fVar9 * local_148 - fVar11 * local_144;
      pfVar4[9] = fVar9;
      pfVar4[8] = fVar11;
      pfVar4[10] = fVar20;
      pfVar4[0xc] = fVar20 * local_138 - fVar9 * local_134;
      pfVar4[0xd] = fVar11 * local_134 - fVar20 * local_13c;
      pfVar4[0xe] = fVar9 * local_13c - fVar11 * local_138;
      uVar1 = *(ushort *)(pfVar4 + 0x13);
      uVar6 = uVar1 | 0x10;
      pfVar4[3] = fVar25;
      if ((0.0 < *(float *)((longlong)param_5 + 0x5c)) || (0.0 < *(float *)(param_5 + 0xb))) {
        uVar6 = uVar1 | 0x11;
        pfVar4[0x10] = *(float *)(param_5 + 0xb);
        pfVar4[0x11] = *(float *)((longlong)param_5 + 0x5c);
      }
      else {
        *(undefined2 *)((longlong)pfVar4 + 0x4e) = 0x401;
        pfVar4[0x10] = *(float *)(param_5 + 10);
        pfVar4[0x11] = *(float *)((longlong)param_5 + 0x54);
        if (0.0 < fVar25) {
          uVar6 = uVar1 | 0x18;
        }
        if (0.0 < *(float *)(param_5 + 10)) {
          pfVar4[0xb] = 0.0;
          *(ushort *)(pfVar4 + 0x13) = uVar6 | 4;
          goto LAB_1432b241b;
        }
      }
      *(ushort *)(pfVar4 + 0x13) = uVar6;
      pfVar4[0xb] = 0.0;
    }
  }
LAB_1432b241b:
  return ((longlong)local_150 - (longlong)local_158) / 0x50;
}



// FUNCTION 1432b2490 RevoluteJointSolverPrep body=2702 status=ok
// SIG undefined RevoluteJointSolverPrep(void)

longlong RevoluteJointSolverPrep
                   (undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5,float *param_6,float *param_7)

{
  float fVar1;
  ushort uVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
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
  float local_164;
  float local_160;
  float local_15c;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  
  uVar3 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar3;
  bVar8 = *(byte *)((longlong)param_5 + 0x8c) & 1;
  if ((bVar8 == 0) ||
     (*(float *)((longlong)param_5 + 0x74) <= *(float *)(param_5 + 0xe) &&
      *(float *)(param_5 + 0xe) != *(float *)((longlong)param_5 + 0x74))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  fVar20 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  fVar13 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  fVar11 = param_6[3];
  fVar18 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar17 = param_6[1];
  fVar24 = param_6[2];
  fVar1 = *param_6;
  fVar15 = fVar11 * fVar11 - 0.5;
  fVar12 = fVar1 * fVar20 + fVar17 * fVar13 + fVar24 * fVar18;
  fVar26 = (fVar17 * fVar18 - fVar24 * fVar13) * fVar11 + fVar15 * fVar20 + fVar1 * fVar12 +
           param_6[4];
  fVar25 = (fVar1 * fVar13 - fVar17 * fVar20) * fVar11 + fVar15 * fVar18 + fVar24 * fVar12 +
           param_6[6];
  fVar23 = (fVar24 * fVar20 - fVar1 * fVar18) * fVar11 + fVar15 * fVar13 + fVar17 * fVar12 +
           param_6[5];
  pfVar4 = (float *)physx::PxQuat::operator*(param_6,&local_164);
  fVar21 = *(float *)((longlong)param_5 + 0x3c) + *(float *)((longlong)param_5 + 0x3c);
  fVar11 = *pfVar4;
  fVar14 = *(float *)(param_5 + 8) + *(float *)(param_5 + 8);
  fVar17 = pfVar4[1];
  fVar24 = pfVar4[2];
  fVar1 = pfVar4[3];
  fVar19 = *(float *)((longlong)param_5 + 0x44) + *(float *)((longlong)param_5 + 0x44);
  fVar12 = param_7[3];
  fVar13 = param_7[1];
  fVar15 = param_7[2];
  fVar18 = *param_7;
  fVar16 = fVar12 * fVar12 - 0.5;
  fVar20 = fVar18 * fVar21 + fVar13 * fVar14 + fVar15 * fVar19;
  fVar27 = (fVar13 * fVar19 - fVar15 * fVar14) * fVar12 + fVar16 * fVar21 + fVar18 * fVar20 +
           param_7[4];
  fVar22 = (fVar15 * fVar21 - fVar18 * fVar19) * fVar12 + fVar16 * fVar14 + fVar13 * fVar20 +
           param_7[5];
  fVar15 = (fVar18 * fVar14 - fVar13 * fVar21) * fVar12 + fVar16 * fVar19 + fVar15 * fVar20 +
           param_7[6];
  local_100 = fVar11;
  local_fc = fVar17;
  local_f8 = fVar24;
  local_f4 = fVar1;
  local_f0 = fVar26;
  local_ec = fVar23;
  local_e8 = fVar25;
  pfVar4 = (float *)physx::PxQuat::operator*(param_7,&local_164);
  local_14c = pfVar4[1];
  local_148 = pfVar4[2];
  fVar12 = *pfVar4;
  fVar13 = pfVar4[3];
  if (fVar12 * fVar11 + local_14c * fVar17 + local_148 * fVar24 + fVar13 * fVar1 < 0.0) {
    local_14c = -local_14c;
    local_148 = -local_148;
    fVar12 = -fVar12;
    fVar13 = -fVar13;
  }
  fVar16 = local_148;
  fVar14 = local_14c;
  fVar18 = param_6[5];
  fVar20 = param_6[4];
  param_2[2] = fVar15 - param_6[6];
  param_2[1] = fVar22 - fVar18;
  *param_2 = fVar27 - fVar20;
  local_118 = fVar25 - param_6[6];
  local_11c = fVar23 - param_6[5];
  local_10c = fVar15 - param_7[6];
  local_110 = fVar22 - param_7[5];
  local_114 = fVar27 - param_7[4];
  local_120 = fVar26 - param_6[4];
  fVar18 = (fVar22 - fVar23) * 2.0;
  fVar20 = (fVar27 - fVar26) * 2.0;
  fVar21 = (fVar15 - fVar25) * 2.0;
  fVar19 = fVar17 * fVar18 + fVar11 * fVar20 + fVar24 * fVar21;
  fVar23 = fVar1 * fVar1 - 0.5;
  local_164 = (fVar23 * fVar20 - (fVar17 * fVar21 - fVar24 * fVar18) * fVar1) + fVar11 * fVar19;
  local_160 = (fVar23 * fVar18 - (fVar24 * fVar20 - fVar11 * fVar21) * fVar1) + fVar17 * fVar19;
  local_15c = (fVar23 * fVar21 - (fVar11 * fVar18 - fVar17 * fVar20) * fVar1) + fVar24 * fVar19;
  local_150 = fVar12;
  local_144 = fVar13;
  local_140 = fVar27;
  local_13c = fVar22;
  local_138 = fVar15;
  local_130 = param_1;
  local_128 = param_1;
  physx::Ext::joint::ConstraintHelper::prepareLockedAxes
            (&local_130,&local_100,&local_150,&local_164,7,bVar10 + '\x06');
  if (bVar10) {
    lVar5 = SUB168(SEXT816(0x6666666666666667) * SEXT816((longlong)local_128 - (longlong)local_130),
                   8);
  }
  else {
    fVar15 = fVar11 * 2.0 + fVar17 * 0.0 + fVar24 * 0.0;
    fVar18 = (fVar17 * 0.0 - fVar24 * 0.0) * fVar1 + fVar23 * 2.0 + fVar11 * fVar15;
    fVar20 = (fVar24 * 2.0 - fVar11 * 0.0) * fVar1 + fVar23 * 0.0 + fVar17 * fVar15;
    fVar15 = (fVar11 * 0.0 - fVar17 * 2.0) * fVar1 + fVar23 * 0.0 + fVar24 * fVar15;
    puVar7 = local_128;
    if ((*(byte *)((longlong)param_5 + 0x8c) & 2) != 0) {
      puVar7 = local_128 + 10;
      *(undefined2 *)((longlong)local_128 + 0x4e) = 0;
      *local_128 = 0;
      *(undefined4 *)(local_128 + 1) = 0;
      *(float *)(local_128 + 2) = -fVar18;
      *(float *)((longlong)local_128 + 0x14) = -fVar20;
      *(float *)(local_128 + 3) = -fVar15;
      local_128[4] = 0;
      *(undefined4 *)(local_128 + 5) = 0;
      fVar19 = *(float *)(param_5 + 0xb);
      *(float *)(local_128 + 6) = -fVar18 * fVar19;
      *(float *)((longlong)local_128 + 0x34) = -fVar20 * fVar19;
      *(float *)(local_128 + 7) = -fVar15 * fVar19;
      *(undefined4 *)((longlong)local_128 + 0x1c) = *(undefined4 *)(param_5 + 10);
      *(uint *)((longlong)local_128 + 0x2c) = *(uint *)((longlong)param_5 + 0x54) ^ 0x80000000;
      *(undefined4 *)((longlong)local_128 + 0x3c) = *(undefined4 *)((longlong)param_5 + 0x54);
      if ((*(byte *)((longlong)param_5 + 0x8c) & 4) != 0) {
        fVar19 = *(float *)(param_5 + 10);
        bVar10 = false;
        if (0.0 < *(float *)(param_5 + 10)) {
          *(undefined4 *)((longlong)local_128 + 0x2c) = 0;
          fVar19 = *(float *)(param_5 + 10);
          bVar10 = 0.0 < *(float *)(param_5 + 10);
        }
        if (!bVar10 && fVar19 != 0.0) {
          *(undefined4 *)((longlong)local_128 + 0x3c) = 0;
        }
      }
      *(ushort *)((longlong)local_128 + 0x4c) = *(ushort *)((longlong)local_128 + 0x4c) | 0x20;
    }
    if (bVar8 != 0) {
      fVar19 = (-fVar11 * fVar13 + fVar12 * fVar1 + -fVar17 * fVar16) - -fVar24 * fVar14;
      fVar17 = ((fVar13 * fVar1 - -fVar11 * fVar12) - -fVar17 * fVar14) - -fVar24 * fVar16;
      fVar11 = SQRT(fVar17 * fVar17 + fVar19 * fVar19);
      if (fVar11 != 0.0) {
        fVar19 = fVar19 * (1.0 / fVar11);
        fVar17 = fVar17 * (1.0 / fVar11);
      }
      if (fVar11 - 1e-06 < 0.0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = fVar19 / (fVar17 + 1.0);
      }
      fVar11 = *(float *)(param_5 + 0x10);
      fVar17 = *(float *)(param_5 + 0xf);
      fVar24 = *(float *)((longlong)param_5 + 0x7c);
      if ((0.0 < *(float *)(param_5 + 0xd)) || (0.0 < *(float *)((longlong)param_5 + 100))) {
        fVar11 = 0.0;
      }
      puVar6 = puVar7;
      if (fVar19 < fVar24 + fVar11) {
        puVar6 = puVar7 + 10;
        *(undefined2 *)((longlong)puVar7 + 0x4e) = 0;
        fVar24 = (fVar24 - fVar19) * -4.0;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(float *)(puVar7 + 2) = -fVar18;
        *(float *)((longlong)puVar7 + 0x14) = -fVar20;
        *(float *)(puVar7 + 3) = -fVar15;
        puVar7[4] = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
        *(float *)(puVar7 + 6) = -fVar18;
        *(float *)((longlong)puVar7 + 0x34) = -fVar20;
        *(float *)(puVar7 + 7) = -fVar15;
        uVar2 = *(ushort *)((longlong)puVar7 + 0x4c);
        uVar9 = uVar2 | 0x10;
        *(float *)((longlong)puVar7 + 0xc) = fVar24;
        if ((0.0 < *(float *)(param_5 + 0xd)) || (0.0 < *(float *)((longlong)param_5 + 100))) {
          uVar9 = uVar2 | 0x11;
          *(undefined4 *)(puVar7 + 8) = *(undefined4 *)((longlong)param_5 + 100);
          *(undefined4 *)((longlong)puVar7 + 0x44) = *(undefined4 *)(param_5 + 0xd);
        }
        else {
          *(undefined2 *)((longlong)puVar7 + 0x4e) = 0x401;
          *(undefined4 *)(puVar7 + 8) = *(undefined4 *)((longlong)param_5 + 0x5c);
          *(undefined4 *)((longlong)puVar7 + 0x44) = *(undefined4 *)(param_5 + 0xc);
          if (0.0 < fVar24) {
            uVar9 = uVar2 | 0x18;
          }
          if (0.0 < *(float *)((longlong)param_5 + 0x5c)) {
            uVar9 = uVar9 | 4;
          }
        }
        *(ushort *)((longlong)puVar7 + 0x4c) = uVar9;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
      }
      puVar7 = puVar6;
      if (fVar17 - fVar11 < fVar19) {
        puVar7 = puVar6 + 10;
        *(undefined2 *)((longlong)puVar6 + 0x4e) = 0;
        fVar11 = (fVar17 - fVar19) * 4.0;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        *(float *)(puVar6 + 2) = fVar18;
        *(float *)((longlong)puVar6 + 0x14) = fVar20;
        *(float *)(puVar6 + 3) = fVar15;
        puVar6[4] = 0;
        *(undefined4 *)(puVar6 + 5) = 0;
        *(float *)(puVar6 + 6) = fVar18;
        *(float *)((longlong)puVar6 + 0x34) = fVar20;
        *(float *)(puVar6 + 7) = fVar15;
        uVar2 = *(ushort *)((longlong)puVar6 + 0x4c);
        uVar9 = uVar2 | 0x10;
        *(float *)((longlong)puVar6 + 0xc) = fVar11;
        if ((0.0 < *(float *)(param_5 + 0xd)) || (0.0 < *(float *)((longlong)param_5 + 100))) {
          uVar9 = uVar2 | 0x11;
          *(undefined4 *)(puVar6 + 8) = *(undefined4 *)((longlong)param_5 + 100);
          *(undefined4 *)((longlong)puVar6 + 0x44) = *(undefined4 *)(param_5 + 0xd);
        }
        else {
          *(undefined2 *)((longlong)puVar6 + 0x4e) = 0x401;
          *(undefined4 *)(puVar6 + 8) = *(undefined4 *)((longlong)param_5 + 0x5c);
          *(undefined4 *)((longlong)puVar6 + 0x44) = *(undefined4 *)(param_5 + 0xc);
          if (0.0 < fVar11) {
            uVar9 = uVar2 | 0x18;
          }
          if (0.0 < *(float *)((longlong)param_5 + 0x5c)) {
            uVar9 = uVar9 | 4;
          }
        }
        *(ushort *)((longlong)puVar6 + 0x4c) = uVar9;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
      }
    }
    lVar5 = SUB168(SEXT816(0x6666666666666667) * SEXT816((longlong)puVar7 - (longlong)local_130),8);
  }
  return (lVar5 >> 5) - (lVar5 >> 0x3f);
}



// FUNCTION 1432b2f20 SphericalJointSolverPrep body=2620 status=ok
// SIG undefined SphericalJointSolverPrep(void)

longlong SphericalJointSolverPrep
                   (undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 *param_5,float *param_6,float *param_7)

{
  float fVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  float *pfVar5;
  ushort uVar6;
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
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160 [6];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  
  uVar3 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar3;
  fVar1 = param_6[3];
  fVar20 = param_6[1];
  fVar7 = param_6[2];
  fVar16 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  fVar8 = *param_6;
  fVar11 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  fVar14 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar12 = fVar1 * fVar1 - 0.5;
  fVar9 = fVar8 * fVar16 + fVar20 * fVar11 + fVar14 * fVar7;
  fVar22 = (fVar20 * fVar14 - fVar11 * fVar7) * fVar1 + fVar12 * fVar16 + fVar8 * fVar9 + param_6[4]
  ;
  fVar21 = (fVar16 * fVar7 - fVar8 * fVar14) * fVar1 + fVar12 * fVar11 + fVar20 * fVar9 + param_6[5]
  ;
  fVar18 = (fVar8 * fVar11 - fVar20 * fVar16) * fVar1 + fVar12 * fVar14 + fVar9 * fVar7 + param_6[6]
  ;
  local_168 = fVar22;
  local_164 = fVar18;
  pfVar5 = (float *)physx::PxQuat::operator*(param_6,local_160);
  fVar1 = *pfVar5;
  fVar15 = *(float *)((longlong)param_5 + 0x44) + *(float *)((longlong)param_5 + 0x44);
  fVar17 = *(float *)((longlong)param_5 + 0x3c) + *(float *)((longlong)param_5 + 0x3c);
  fVar20 = param_7[1];
  fVar7 = *param_7;
  fVar8 = param_7[3];
  fVar9 = param_7[2];
  fVar11 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar19 = *(float *)(param_5 + 8) + *(float *)(param_5 + 8);
  fVar13 = fVar8 * fVar8 - 0.5;
  fVar10 = fVar17 * fVar7 + fVar19 * fVar20 + fVar15 * fVar9;
  fVar23 = (fVar15 * fVar20 - fVar19 * fVar9) * fVar8 + fVar13 * fVar17 + fVar10 * fVar7 +
           param_7[4];
  fVar16 = (fVar17 * fVar9 - fVar15 * fVar7) * fVar8 + fVar13 * fVar19 + fVar10 * fVar20 +
           param_7[5];
  fVar20 = (fVar19 * fVar7 - fVar17 * fVar20) * fVar8 + fVar13 * fVar15 + fVar10 * fVar9 +
           param_7[6];
  local_e8 = fVar1;
  local_e4 = fVar11;
  local_e0 = fVar12;
  local_dc = fVar14;
  local_d8 = fVar22;
  local_d4 = fVar21;
  local_d0 = fVar18;
  pfVar5 = (float *)physx::PxQuat::operator*(param_7,local_160);
  local_148 = *pfVar5;
  local_144 = pfVar5[1];
  local_140 = pfVar5[2];
  local_13c = pfVar5[3];
  if (local_148 * fVar1 + local_144 * fVar11 + local_140 * fVar12 + local_13c * fVar14 < 0.0) {
    local_148 = -local_148;
    local_144 = -local_144;
    local_140 = -local_140;
    local_13c = -local_13c;
  }
  fVar7 = param_6[5];
  fVar8 = param_6[6];
  *param_2 = fVar23 - param_6[4];
  param_2[1] = fVar16 - fVar7;
  param_2[2] = fVar20 - fVar8;
  local_100 = local_164 - param_6[6];
  local_108 = local_168 - param_6[4];
  local_104 = fVar21 - param_6[5];
  local_fc = fVar23 - param_7[4];
  local_f8 = fVar16 - param_7[5];
  local_f4 = fVar20 - param_7[6];
  local_138 = fVar23;
  local_134 = fVar16;
  local_130 = fVar20;
  local_118 = param_1;
  local_110 = param_1;
  if ((*(byte *)((longlong)param_5 + 0x7c) & 2) != 0) {
    fVar8 = -fVar11;
    fVar7 = -fVar1;
    fVar9 = -fVar12;
    fVar13 = (fVar7 * local_13c + local_148 * fVar14 + fVar8 * local_140) - fVar9 * local_144;
    fVar15 = (fVar8 * local_13c + local_144 * fVar14 + fVar9 * local_148) - fVar7 * local_140;
    fVar10 = ((local_13c * fVar14 - fVar7 * local_148) - fVar8 * local_144) - fVar9 * local_140;
    fVar7 = (fVar9 * local_13c + local_140 * fVar14 + fVar7 * local_144) - fVar8 * local_148;
    if (fVar13 == 0.0) {
      pfVar5 = local_160;
      local_160[0] = 0.0;
      local_160[1] = 0.0;
      local_160[2] = 0.0;
      local_160[3] = 1.0;
    }
    else {
      pfVar5 = &local_178;
      fVar8 = 1.0 / SQRT(fVar10 * fVar10 + fVar13 * fVar13);
      local_178 = fVar13 * fVar8;
      local_174 = fVar8 * 0.0;
      local_170 = fVar8 * 0.0;
      local_16c = fVar10 * fVar8;
    }
    fVar9 = -*pfVar5;
    fVar17 = -pfVar5[1];
    fVar18 = -pfVar5[2];
    fVar8 = pfVar5[3];
    local_160[1] = (fVar8 * fVar15 + fVar10 * fVar17 + fVar7 * fVar9) - fVar13 * fVar18;
    local_160[0] = (fVar8 * fVar13 + fVar10 * fVar9 + fVar15 * fVar18) - fVar7 * fVar17;
    local_124 = *(undefined4 *)((longlong)param_5 + 0x6c);
    local_128 = *(undefined4 *)(param_5 + 0xe);
    local_120 = *(undefined4 *)((longlong)param_5 + 0x74);
    local_160[3] = ((fVar8 * fVar10 - fVar13 * fVar9) - fVar15 * fVar17) - fVar7 * fVar18;
    local_160[2] = (fVar8 * fVar7 + fVar10 * fVar18 + fVar13 * fVar17) - fVar15 * fVar9;
    cVar4 = physx::Cm::ConeLimitHelper::getLimit(&local_128,local_160,&local_178,local_160 + 4);
    if (cVar4 != '\0') {
      local_110 = param_1 + 10;
      local_170 = local_170 * 2.0;
      *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
      local_174 = local_174 * 2.0;
      *param_1 = 0;
      local_178 = local_178 * 2.0;
      *(undefined4 *)(param_1 + 1) = 0;
      fVar9 = fVar14 * fVar14 - 0.5;
      fVar7 = fVar11 * local_174 + fVar1 * local_178 + fVar12 * local_170;
      fVar10 = (fVar11 * local_170 - fVar12 * local_174) * fVar14 + fVar9 * local_178 +
               fVar1 * fVar7;
      *(float *)(param_1 + 2) = fVar10;
      fVar8 = (fVar12 * local_178 - fVar1 * local_170) * fVar14 + fVar9 * local_174 + fVar11 * fVar7
      ;
      *(float *)((longlong)param_1 + 0x14) = fVar8;
      fVar7 = (fVar1 * local_174 - fVar11 * local_178) * fVar14 + fVar9 * local_170 + fVar12 * fVar7
      ;
      *(float *)(param_1 + 3) = fVar7;
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      *(float *)(param_1 + 6) = fVar10;
      *(float *)((longlong)param_1 + 0x34) = fVar8;
      *(float *)(param_1 + 7) = fVar7;
      uVar2 = *(ushort *)((longlong)param_1 + 0x4c);
      uVar6 = uVar2 | 0x10;
      *(float *)((longlong)param_1 + 0xc) = local_160[4];
      if ((0.0 < *(float *)((longlong)param_5 + 0x5c)) || (0.0 < *(float *)(param_5 + 0xb))) {
        uVar6 = uVar2 | 0x11;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0xb);
        *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_5 + 0x5c);
      }
      else {
        *(undefined2 *)((longlong)param_1 + 0x4e) = 0x401;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 10);
        *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_5 + 0x54);
        if (0.0 < local_160[4]) {
          uVar6 = uVar2 | 0x18;
        }
        if (0.0 < *(float *)(param_5 + 10)) {
          uVar6 = uVar6 | 4;
        }
      }
      *(ushort *)((longlong)param_1 + 0x4c) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
  }
  fVar8 = (fVar23 - local_168) * 2.0;
  fVar9 = (fVar16 - fVar21) * 2.0;
  fVar16 = (fVar20 - local_164) * 2.0;
  fVar7 = fVar14 * fVar14 - 0.5;
  fVar20 = fVar11 * fVar9 + fVar1 * fVar8 + fVar12 * fVar16;
  local_178 = (fVar7 * fVar8 - (fVar11 * fVar16 - fVar12 * fVar9) * fVar14) + fVar1 * fVar20;
  local_174 = (fVar7 * fVar9 - (fVar12 * fVar8 - fVar1 * fVar16) * fVar14) + fVar11 * fVar20;
  local_170 = (fVar7 * fVar16 - (fVar1 * fVar9 - fVar11 * fVar8) * fVar14) + fVar12 * fVar20;
  physx::Ext::joint::ConstraintHelper::prepareLockedAxes
            (&local_118,&local_e8,&local_148,&local_178,7,0);
  return ((longlong)local_110 - (longlong)local_118) / 0x50;
}



// FUNCTION 1432b3960 alignStream body=116 status=ok
// SIG undefined alignStream(void)

longlong physx::Sn::ConvX::alignStream(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_3 - 1;
  uVar3 = param_3 - ((uint)param_2 & uVar2) & uVar2;
  uVar1 = getCurrentOutputSize();
  uVar2 = param_3 - (uVar1 & uVar2) & uVar2;
  if ((uVar2 == uVar3) || (uVar2 != 0)) {
    output(param_1,param_1 + 0x28,uVar2);
  }
  return (ulonglong)uVar3 + param_2;
}



// FUNCTION 1432b39e0 alignTarget body=67 status=ok
// SIG undefined alignTarget(void)

void physx::Sn::ConvX::alignTarget(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = getCurrentOutputSize();
  uVar1 = param_2 - (uVar1 & param_2 - 1U) & param_2 - 1U;
  if (uVar1 != 0) {
    output(param_1,param_1 + 0x28,uVar1);
  }
  return;
}



// FUNCTION 1432b3a23 DelayLoad_PxCreateCooking body=12 status=ok
// SIG undefined DelayLoad_PxCreateCooking(void)

void DelayLoad_PxCreateCooking(void)

{
  FUN_1432b3a2f();
  return;
}



// FUNCTION 1432b3a2f FUN_1432b3a2f body=121 status=ok
// SIG undefined FUN_1432b3a2f(void)

void FUN_1432b3a2f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de088);
                    /* WARNING: Could not recover jumptable at 0x0001432b3aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1432b3aa8 DelayLoad_?getWorldBounds@PxGeometryQuery@physx@@SA?AVPxBounds3@2@AEBVPxGeometry@2@AEBVPxTransform@2@M@Z body=12 status=ok
// SIG undefined DelayLoad_?getWorldBounds@PxGeometryQuery@physx@@SA?AVPxBounds3@2@AEBVPxGeometry@2@AEBVPxTransform@2@M@Z(void)

void DelayLoad__getWorldBounds_PxGeometryQuery_physx__SA_AVPxBounds3_2_AEBVPxGeometry_2_AEBVPxTransform_2_M_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3ab4 FUN_1432b3ab4 body=121 status=ok
// SIG undefined FUN_1432b3ab4(void)

void FUN_1432b3ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de0a8);
                    /* WARNING: Could not recover jumptable at 0x0001432b3b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1432b3b2d DelayLoad_?computePenetration@PxGeometryQuery@physx@@SA_NAEAVPxVec3@2@AEAMAEBVPxGeometry@2@AEBVPxTransform@2@23@Z body=12 status=ok
// SIG undefined DelayLoad_?computePenetration@PxGeometryQuery@physx@@SA_NAEAVPxVec3@2@AEAMAEBVPxGeometry@2@AEBVPxTransform@2@23@Z(void)

void DelayLoad__computePenetration_PxGeometryQuery_physx__SA_NAEAVPxVec3_2_AEAMAEBVPxGeometry_2_AEBVPxTransform_2_23_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b39 DelayLoad_?pointDistance@PxGeometryQuery@physx@@SAMAEBVPxVec3@2@AEBVPxGeometry@2@AEBVPxTransform@2@PEAV32@@Z body=12 status=ok
// SIG undefined DelayLoad_?pointDistance@PxGeometryQuery@physx@@SAMAEBVPxVec3@2@AEBVPxGeometry@2@AEBVPxTransform@2@PEAV32@@Z(void)

void DelayLoad__pointDistance_PxGeometryQuery_physx__SAMAEBVPxVec3_2_AEBVPxGeometry_2_AEBVPxTransform_2_PEAV32__Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b45 DelayLoad_?getTriangle@PxMeshQuery@physx@@SAXAEBVPxTriangleMeshGeometry@2@AEBVPxTransform@2@IAEAVPxTriangle@2@PEAI3@Z body=12 status=ok
// SIG undefined DelayLoad_?getTriangle@PxMeshQuery@physx@@SAXAEBVPxTriangleMeshGeometry@2@AEBVPxTransform@2@IAEAVPxTriangle@2@PEAI3@Z(void)

void DelayLoad__getTriangle_PxMeshQuery_physx__SAXAEBVPxTriangleMeshGeometry_2_AEBVPxTransform_2_IAEAVPxTriangle_2_PEAI3_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b51 DelayLoad_?getTriangle@PxMeshQuery@physx@@SAXAEBVPxHeightFieldGeometry@2@AEBVPxTransform@2@IAEAVPxTriangle@2@PEAI3@Z body=12 status=ok
// SIG undefined DelayLoad_?getTriangle@PxMeshQuery@physx@@SAXAEBVPxHeightFieldGeometry@2@AEBVPxTransform@2@IAEAVPxTriangle@2@PEAI3@Z(void)

void DelayLoad__getTriangle_PxMeshQuery_physx__SAXAEBVPxHeightFieldGeometry_2_AEBVPxTransform_2_IAEAVPxTriangle_2_PEAI3_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b5d DelayLoad_?findOverlapTriangleMesh@PxMeshQuery@physx@@SAIAEBVPxGeometry@2@AEBVPxTransform@2@AEBVPxTriangleMeshGeometry@2@1PEAIIIAEA_N@Z body=12 status=ok
// SIG undefined DelayLoad_?findOverlapTriangleMesh@PxMeshQuery@physx@@SAIAEBVPxGeometry@2@AEBVPxTransform@2@AEBVPxTriangleMeshGeometry@2@1PEAIIIAEA_N@Z(void)

void DelayLoad__findOverlapTriangleMesh_PxMeshQuery_physx__SAIAEBVPxGeometry_2_AEBVPxTransform_2_AEBVPxTriangleMeshGeometry_2_1PEAIIIAEA_N_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b69 DelayLoad_?findOverlapHeightField@PxMeshQuery@physx@@SAIAEBVPxGeometry@2@AEBVPxTransform@2@AEBVPxHeightFieldGeometry@2@1PEAIIIAEA_N@Z body=12 status=ok
// SIG undefined DelayLoad_?findOverlapHeightField@PxMeshQuery@physx@@SAIAEBVPxGeometry@2@AEBVPxTransform@2@AEBVPxHeightFieldGeometry@2@1PEAIIIAEA_N@Z(void)

void DelayLoad__findOverlapHeightField_PxMeshQuery_physx__SAIAEBVPxGeometry_2_AEBVPxTransform_2_AEBVPxHeightFieldGeometry_2_1PEAIIIAEA_N_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b75 DelayLoad_?sweep@PxGeometryQuery@physx@@SA_NAEBVPxVec3@2@MAEBVPxGeometry@2@AEBVPxTransform@2@12AEAUPxSweepHit@2@V?$PxFlags@W4Enum@PxHitFlag@physx@@G@2@M@Z body=12 status=ok
// SIG undefined DelayLoad_?sweep@PxGeometryQuery@physx@@SA_NAEBVPxVec3@2@MAEBVPxGeometry@2@AEBVPxTransform@2@12AEAUPxSweepHit@2@V?$PxFlags@W4Enum@PxHitFlag@physx@@G@2@M@Z(void)

void DelayLoad__sweep_PxGeometryQuery_physx__SA_NAEBVPxVec3_2_MAEBVPxGeometry_2_AEBVPxTransform_2_12AEAUPxSweepHit_2_V__PxFlags_W4Enum_PxHitFlag_physx__G_2_M_Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b81 DelayLoad_?overlap@PxGeometryQuery@physx@@SA_NAEBVPxGeometry@2@AEBVPxTransform@2@01@Z body=12 status=ok
// SIG undefined DelayLoad_?overlap@PxGeometryQuery@physx@@SA_NAEBVPxGeometry@2@AEBVPxTransform@2@01@Z(void)

void DelayLoad__overlap_PxGeometryQuery_physx__SA_NAEBVPxGeometry_2_AEBVPxTransform_2_01_Z(void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b8d DelayLoad_?raycast@PxGeometryQuery@physx@@SAIAEBVPxVec3@2@0AEBVPxGeometry@2@AEBVPxTransform@2@MV?$PxFlags@W4Enum@PxHitFlag@physx@@G@2@IPEIAUPxRaycastHit@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?raycast@PxGeometryQuery@physx@@SAIAEBVPxVec3@2@0AEBVPxGeometry@2@AEBVPxTransform@2@MV?$PxFlags@W4Enum@PxHitFlag@physx@@G@2@IPEIAUPxRaycastHit@2@@Z(void)

void DelayLoad__raycast_PxGeometryQuery_physx__SAIAEBVPxVec3_2_0AEBVPxGeometry_2_AEBVPxTransform_2_MV__PxFlags_W4Enum_PxHitFlag_physx__G_2_IPEIAUPxRaycastHit_2__Z
               (void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3b99 DelayLoad_?PxCreateCollection@@YAPEAVPxCollection@physx@@XZ body=12 status=ok
// SIG undefined DelayLoad_?PxCreateCollection@@YAPEAVPxCollection@physx@@XZ(void)

void DelayLoad__PxCreateCollection__YAPEAVPxCollection_physx__XZ(void)

{
  FUN_1432b3ab4();
  return;
}



// FUNCTION 1432b3ba5 DelayLoad_?PxDiagonalize@physx@@YA?AVPxVec3@1@AEBVPxMat33@1@AEAVPxQuat@1@@Z body=12 status=ok
// SIG undefined DelayLoad_?PxDiagonalize@physx@@YA?AVPxVec3@1@AEBVPxMat33@1@AEAVPxQuat@1@@Z(void)

void DelayLoad__PxDiagonalize_physx__YA_AVPxVec3_1_AEBVPxMat33_1_AEAVPxQuat_1__Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3bb1 FUN_1432b3bb1 body=121 status=ok
// SIG undefined FUN_1432b3bb1(void)

void FUN_1432b3bb1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de0c8);
                    /* WARNING: Could not recover jumptable at 0x0001432b3c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1432b3c2a DelayLoad_PxCreateFoundation body=12 status=ok
// SIG undefined DelayLoad_PxCreateFoundation(void)

void DelayLoad_PxCreateFoundation(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c36 DelayLoad_?atomicDecrement@shdfnd@physx@@YAHPECH@Z body=12 status=ok
// SIG undefined DelayLoad_?atomicDecrement@shdfnd@physx@@YAHPECH@Z(void)

void DelayLoad__atomicDecrement_shdfnd_physx__YAHPECH_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c42 DelayLoad_PxGetFoundation body=12 status=ok
// SIG undefined DelayLoad_PxGetFoundation(void)

void DelayLoad_PxGetFoundation(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c4e DelayLoad_?getAllocator@shdfnd@physx@@YAAEAVPxAllocatorCallback@2@XZ body=12 status=ok
// SIG undefined DelayLoad_?getAllocator@shdfnd@physx@@YAAEAVPxAllocatorCallback@2@XZ(void)

void DelayLoad__getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c5a DelayLoad_?getInstance@Foundation@shdfnd@physx@@SAAEAV123@XZ body=12 status=ok
// SIG undefined DelayLoad_?getInstance@Foundation@shdfnd@physx@@SAAEAV123@XZ(void)

void DelayLoad__getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c66 DelayLoad_?error@Foundation@shdfnd@physx@@QEAAXW4Enum@PxErrorCode@3@PEBDH1ZZ body=12 status=ok
// SIG undefined DelayLoad_?error@Foundation@shdfnd@physx@@QEAAXW4Enum@PxErrorCode@3@PEBDH1ZZ(void)

void DelayLoad__error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c72 DelayLoad_?stricmp@shdfnd@physx@@YAHPEBD0@Z body=12 status=ok
// SIG undefined DelayLoad_?stricmp@shdfnd@physx@@YAHPEBD0@Z(void)

void DelayLoad__stricmp_shdfnd_physx__YAHPEBD0_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c7e DelayLoad_??0SyncImpl@shdfnd@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0SyncImpl@shdfnd@physx@@QEAA@XZ(void)

void DelayLoad___0SyncImpl_shdfnd_physx__QEAA_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c8a DelayLoad_??1SyncImpl@shdfnd@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1SyncImpl@shdfnd@physx@@QEAA@XZ(void)

void DelayLoad___1SyncImpl_shdfnd_physx__QEAA_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3c96 DelayLoad_?set@SyncImpl@shdfnd@physx@@QEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?set@SyncImpl@shdfnd@physx@@QEAAXXZ(void)

void DelayLoad__set_SyncImpl_shdfnd_physx__QEAAXXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3ca2 DelayLoad_?reset@SyncImpl@shdfnd@physx@@QEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?reset@SyncImpl@shdfnd@physx@@QEAAXXZ(void)

void DelayLoad__reset_SyncImpl_shdfnd_physx__QEAAXXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cae DelayLoad_?getSize@SyncImpl@shdfnd@physx@@SAAEBIXZ body=12 status=ok
// SIG undefined DelayLoad_?getSize@SyncImpl@shdfnd@physx@@SAAEBIXZ(void)

void DelayLoad__getSize_SyncImpl_shdfnd_physx__SAAEBIXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cba DelayLoad_??0SListImpl@shdfnd@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0SListImpl@shdfnd@physx@@QEAA@XZ(void)

void DelayLoad___0SListImpl_shdfnd_physx__QEAA_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cc6 DelayLoad_??1SListImpl@shdfnd@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1SListImpl@shdfnd@physx@@QEAA@XZ(void)

void DelayLoad___1SListImpl_shdfnd_physx__QEAA_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cd2 DelayLoad_?push@SListImpl@shdfnd@physx@@QEAAXPEAVSListEntry@23@@Z body=12 status=ok
// SIG undefined DelayLoad_?push@SListImpl@shdfnd@physx@@QEAAXPEAVSListEntry@23@@Z(void)

void DelayLoad__push_SListImpl_shdfnd_physx__QEAAXPEAVSListEntry_23__Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cde DelayLoad_?pop@SListImpl@shdfnd@physx@@QEAAPEAVSListEntry@23@XZ body=12 status=ok
// SIG undefined DelayLoad_?pop@SListImpl@shdfnd@physx@@QEAAPEAVSListEntry@23@XZ(void)

void DelayLoad__pop_SListImpl_shdfnd_physx__QEAAPEAVSListEntry_23_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cea DelayLoad_?getSize@SListImpl@shdfnd@physx@@SAAEBIXZ body=12 status=ok
// SIG undefined DelayLoad_?getSize@SListImpl@shdfnd@physx@@SAAEBIXZ(void)

void DelayLoad__getSize_SListImpl_shdfnd_physx__SAAEBIXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3cf6 DelayLoad_?getDefaultStackSize@ThreadImpl@shdfnd@physx@@SAIXZ body=12 status=ok
// SIG undefined DelayLoad_?getDefaultStackSize@ThreadImpl@shdfnd@physx@@SAIXZ(void)

void DelayLoad__getDefaultStackSize_ThreadImpl_shdfnd_physx__SAIXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d02 DelayLoad_?getId@ThreadImpl@shdfnd@physx@@SA_KXZ body=12 status=ok
// SIG undefined DelayLoad_?getId@ThreadImpl@shdfnd@physx@@SA_KXZ(void)

void DelayLoad__getId_ThreadImpl_shdfnd_physx__SA_KXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d0e DelayLoad_?start@ThreadImpl@shdfnd@physx@@QEAAXIPEAVRunnable@23@@Z body=12 status=ok
// SIG undefined DelayLoad_?start@ThreadImpl@shdfnd@physx@@QEAAXIPEAVRunnable@23@@Z(void)

void DelayLoad__start_ThreadImpl_shdfnd_physx__QEAAXIPEAVRunnable_23__Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d1a DelayLoad_?signalQuit@ThreadImpl@shdfnd@physx@@QEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?signalQuit@ThreadImpl@shdfnd@physx@@QEAAXXZ(void)

void DelayLoad__signalQuit_ThreadImpl_shdfnd_physx__QEAAXXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d26 DelayLoad_?waitForQuit@ThreadImpl@shdfnd@physx@@QEAA_NXZ body=12 status=ok
// SIG undefined DelayLoad_?waitForQuit@ThreadImpl@shdfnd@physx@@QEAA_NXZ(void)

void DelayLoad__waitForQuit_ThreadImpl_shdfnd_physx__QEAA_NXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d32 DelayLoad_?setAffinityMask@ThreadImpl@shdfnd@physx@@QEAAII@Z body=12 status=ok
// SIG undefined DelayLoad_?setAffinityMask@ThreadImpl@shdfnd@physx@@QEAAII@Z(void)

void DelayLoad__setAffinityMask_ThreadImpl_shdfnd_physx__QEAAII_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d3e DelayLoad_?setName@ThreadImpl@shdfnd@physx@@QEAAXPEBD@Z body=12 status=ok
// SIG undefined DelayLoad_?setName@ThreadImpl@shdfnd@physx@@QEAAXPEBD@Z(void)

void DelayLoad__setName_ThreadImpl_shdfnd_physx__QEAAXPEBD_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d4a DelayLoad_?snprintf@shdfnd@physx@@YAHPEAD_KPEBDZZ body=12 status=ok
// SIG undefined DelayLoad_?snprintf@shdfnd@physx@@YAHPEAD_KPEBDZZ(void)

void DelayLoad__snprintf_shdfnd_physx__YAHPEAD_KPEBDZZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d56 DelayLoad_?incRefCount@Foundation@shdfnd@physx@@SAXXZ body=12 status=ok
// SIG undefined DelayLoad_?incRefCount@Foundation@shdfnd@physx@@SAXXZ(void)

void DelayLoad__incRefCount_Foundation_shdfnd_physx__SAXXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d62 DelayLoad_?decRefCount@Foundation@shdfnd@physx@@SAXXZ body=12 status=ok
// SIG undefined DelayLoad_?decRefCount@Foundation@shdfnd@physx@@SAXXZ(void)

void DelayLoad__decRefCount_Foundation_shdfnd_physx__SAXXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d6e DelayLoad_??0ThreadImpl@shdfnd@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0ThreadImpl@shdfnd@physx@@QEAA@XZ(void)

void DelayLoad___0ThreadImpl_shdfnd_physx__QEAA_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d7a DelayLoad_??1ThreadImpl@shdfnd@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ThreadImpl@shdfnd@physx@@QEAA@XZ(void)

void DelayLoad___1ThreadImpl_shdfnd_physx__QEAA_XZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d86 DelayLoad_?quitIsSignalled@ThreadImpl@shdfnd@physx@@QEAA_NXZ body=12 status=ok
// SIG undefined DelayLoad_?quitIsSignalled@ThreadImpl@shdfnd@physx@@QEAA_NXZ(void)

void DelayLoad__quitIsSignalled_ThreadImpl_shdfnd_physx__QEAA_NXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d92 DelayLoad_?quit@ThreadImpl@shdfnd@physx@@QEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?quit@ThreadImpl@shdfnd@physx@@QEAAXXZ(void)

void DelayLoad__quit_ThreadImpl_shdfnd_physx__QEAAXXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3d9e DelayLoad_?getSize@ThreadImpl@shdfnd@physx@@SAAEBIXZ body=12 status=ok
// SIG undefined DelayLoad_?getSize@ThreadImpl@shdfnd@physx@@SAAEBIXZ(void)

void DelayLoad__getSize_ThreadImpl_shdfnd_physx__SAAEBIXZ(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3daa DelayLoad_?wait@SyncImpl@shdfnd@physx@@QEAA_NI@Z body=12 status=ok
// SIG undefined DelayLoad_?wait@SyncImpl@shdfnd@physx@@QEAA_NI@Z(void)

void DelayLoad__wait_SyncImpl_shdfnd_physx__QEAA_NI_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3db6 DelayLoad_?allocate@TempAllocator@shdfnd@physx@@QEAAPEAX_KPEBDH@Z body=12 status=ok
// SIG undefined DelayLoad_?allocate@TempAllocator@shdfnd@physx@@QEAAPEAX_KPEBDH@Z(void)

void DelayLoad__allocate_TempAllocator_shdfnd_physx__QEAAPEAX_KPEBDH_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3dc2 DelayLoad_?deallocate@TempAllocator@shdfnd@physx@@QEAAXPEAX@Z body=12 status=ok
// SIG undefined DelayLoad_?deallocate@TempAllocator@shdfnd@physx@@QEAAXPEAX@Z(void)

void DelayLoad__deallocate_TempAllocator_shdfnd_physx__QEAAXPEAX_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3dce DelayLoad_?errorImpl@Foundation@shdfnd@physx@@QEAAXW4Enum@PxErrorCode@3@PEBDH1PEAD@Z body=12 status=ok
// SIG undefined DelayLoad_?errorImpl@Foundation@shdfnd@physx@@QEAAXW4Enum@PxErrorCode@3@PEBDH1PEAD@Z(void)

void DelayLoad__errorImpl_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1PEAD_Z(void)

{
  FUN_1432b3bb1();
  return;
}



// FUNCTION 1432b3dda DelayLoad_?PxCreatePvd@physx@@YAPEAVPxPvd@1@AEAVPxFoundation@1@@Z body=12 status=ok
// SIG undefined DelayLoad_?PxCreatePvd@physx@@YAPEAVPxPvd@1@AEAVPxFoundation@1@@Z(void)

void DelayLoad__PxCreatePvd_physx__YAPEAVPxPvd_1_AEAVPxFoundation_1__Z(void)

{
  FUN_1432b3de6();
  return;
}



// FUNCTION 1432b3de6 FUN_1432b3de6 body=121 status=ok
// SIG undefined FUN_1432b3de6(void)

void FUN_1432b3de6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de0e8);
                    /* WARNING: Could not recover jumptable at 0x0001432b3e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1432b3e5f DelayLoad_?PxDefaultPvdSocketTransportCreate@physx@@YAPEAVPxPvdTransport@1@PEBDHI@Z body=12 status=ok
// SIG undefined DelayLoad_?PxDefaultPvdSocketTransportCreate@physx@@YAPEAVPxPvdTransport@1@PEBDHI@Z(void)

void DelayLoad__PxDefaultPvdSocketTransportCreate_physx__YAPEAVPxPvdTransport_1_PEBDHI_Z(void)

{
  FUN_1432b3de6();
  return;
}



// FUNCTION 1432b3e6b DelayLoad_?PxDefaultPvdFileTransportCreate@physx@@YAPEAVPxPvdTransport@1@PEBD@Z body=12 status=ok
// SIG undefined DelayLoad_?PxDefaultPvdFileTransportCreate@physx@@YAPEAVPxPvdTransport@1@PEBD@Z(void)

void DelayLoad__PxDefaultPvdFileTransportCreate_physx__YAPEAVPxPvdTransport_1_PEBD_Z(void)

{
  FUN_1432b3de6();
  return;
}



// FUNCTION 1432b3e77 DelayLoad_InitializeNvCloth body=12 status=ok
// SIG undefined DelayLoad_InitializeNvCloth(void)

void DelayLoad_InitializeNvCloth(void)

{
  FUN_1432b3e83();
  return;
}



// FUNCTION 1432b3e83 FUN_1432b3e83 body=121 status=ok
// SIG undefined FUN_1432b3e83(void)

void FUN_1432b3e83(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de108);
                    /* WARNING: Could not recover jumptable at 0x0001432b3efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1432b3efc DelayLoad_GetNvClothAllocator body=12 status=ok
// SIG undefined DelayLoad_GetNvClothAllocator(void)

void DelayLoad_GetNvClothAllocator(void)

{
  FUN_1432b3e83();
  return;
}



// FUNCTION 1432b3f08 DelayLoad_NvClothCreateFactoryCPU body=12 status=ok
// SIG undefined DelayLoad_NvClothCreateFactoryCPU(void)

void DelayLoad_NvClothCreateFactoryCPU(void)

{
  FUN_1432b3e83();
  return;
}



// FUNCTION 1432b3f14 DelayLoad_NvClothDestroyFactory body=12 status=ok
// SIG undefined DelayLoad_NvClothDestroyFactory(void)

void DelayLoad_NvClothDestroyFactory(void)

{
  FUN_1432b3e83();
  return;
}



// FUNCTION 1432b3f20 DelayLoad_NvClothCookFabricFromMesh body=12 status=ok
// SIG undefined DelayLoad_NvClothCookFabricFromMesh(void)

void DelayLoad_NvClothCookFabricFromMesh(void)

{
  FUN_1432b3e83();
  return;
}



// FUNCTION 1432b3f2c DelayLoad_NvClothCreateMeshQuadifier body=12 status=ok
// SIG undefined DelayLoad_NvClothCreateMeshQuadifier(void)

void DelayLoad_NvClothCreateMeshQuadifier(void)

{
  FUN_1432b3e83();
  return;
}



// FUNCTION 1432b3f38 FUN_1432b3f38 body=43 status=ok
// SIG undefined FUN_1432b3f38(void)

void FUN_1432b3f38(undefined8 param_1)

{
  FUN_1432b429c();
  if (DAT_146b62bf0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62bf0)(param_1);
    return;
  }
  return;
}



// FUNCTION 1432b3f64 FUN_1432b3f64 body=16 status=ok
// SIG undefined FUN_1432b3f64(void)

void FUN_1432b3f64(void)

{
  if (DAT_146b62c10 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c10)();
    return;
  }
  return;
}



// FUNCTION 1432b3f74 FUN_1432b3f74 body=16 status=ok
// SIG undefined FUN_1432b3f74(void)

void FUN_1432b3f74(void)

{
  if (DAT_146b62c78 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c78)();
    return;
  }
  return;
}



// FUNCTION 1432b3f84 FUN_1432b3f84 body=16 status=ok
// SIG undefined FUN_1432b3f84(void)

void FUN_1432b3f84(void)

{
  if (DAT_146b62c08 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c08)();
    return;
  }
  return;
}



// FUNCTION 1432b3f94 FUN_1432b3f94 body=16 status=ok
// SIG undefined FUN_1432b3f94(void)

void FUN_1432b3f94(void)

{
  if (DAT_146b62c40 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c40)();
    return;
  }
  return;
}



// FUNCTION 1432b3fa4 FUN_1432b3fa4 body=16 status=ok
// SIG undefined FUN_1432b3fa4(void)

void FUN_1432b3fa4(void)

{
  if (DAT_146b62c50 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c50)();
    return;
  }
  return;
}



// FUNCTION 1432b3fb4 FUN_1432b3fb4 body=16 status=ok
// SIG undefined FUN_1432b3fb4(void)

void FUN_1432b3fb4(void)

{
  if (DAT_146b62c28 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c28)();
    return;
  }
  return;
}



// FUNCTION 1432b3fc4 FUN_1432b3fc4 body=16 status=ok
// SIG undefined FUN_1432b3fc4(void)

void FUN_1432b3fc4(void)

{
  if (DAT_146b62c00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b62c00)();
    return;
  }
  return;
}



// FUNCTION 1432b3fd4 FUN_1432b3fd4 body=23 status=ok
// SIG undefined FUN_1432b3fd4(void)

void FUN_1432b3fd4(void)

{
  if (DAT_146b62c88 != (code *)0x0) {
    (*DAT_146b62c88)();
  }
  return;
}



// FUNCTION 1432b3fec FUN_1432b3fec body=685 status=ok
// SIG undefined FUN_1432b3fec(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1432b3fec(wchar_t *param_1)

{
  int iVar1;
  LONG LVar2;
  BOOL BVar3;
  DWORD cchNameString;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 *hObject;
  undefined4 extraout_var_01;
  DWORD *pDVar4;
  undefined8 uVar5;
  wchar_t *pszNameString;
  undefined4 extraout_var_02;
  undefined1 auStackY_138 [32];
  DWORD local_f8 [2];
  PCCERT_CONTEXT local_f0;
  undefined4 local_e8 [2];
  wchar_t *local_e0;
  undefined4 local_c8 [6];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *local_a0;
  GUID local_68;
  int local_58 [3];
  undefined2 local_4c;
  _CRYPT_VERIFY_MESSAGE_PARA local_40;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStackY_138;
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1,0);
  hObject = (undefined1 *)CONCAT44(extraout_var,iVar1);
  if (iVar1 == 0) {
    local_68.Data1 = 0xaac56b;
    local_68.Data2 = 0xcd44;
    local_68.Data3 = 0x11d0;
    local_68.Data4[0] = 0x8c;
    local_68.Data4[1] = 0xc2;
    local_68.Data4[2] = '\0';
    local_68.Data4[3] = 0xc0;
    local_68.Data4[4] = 'O';
    local_68.Data4[5] = 0xc2;
    local_68.Data4[6] = 0x95;
    local_68.Data4[7] = 0xee;
    _guard_xfg_dispatch_icall_nop(local_e8,0,0x20);
    local_e8[0] = 0x20;
    local_e0 = param_1;
    _guard_xfg_dispatch_icall_nop(local_c8,0,0x58);
    local_ac = 0;
    local_a0 = local_e8;
    local_c8[0] = 0x58;
    local_b0 = 2;
    local_a8 = 1;
    LVar2 = _guard_xfg_dispatch_icall_nop((HWND)&DAT_ffffffffffffffff,&local_68,local_c8);
    hObject = (undefined1 *)CONCAT44(extraout_var_00,LVar2);
    if ((LVar2 == 0) &&
       (hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000080,
                              (HANDLE)0x0), hObject != &DAT_ffffffffffffffff)) {
      iVar1 = ImageEnumerateCertificates(hObject,0xff,local_58,0);
      if ((iVar1 != 0) && (local_58[0] == 1)) {
        local_58[2] = 0;
        local_4c = 0x100;
        iVar1 = ImageGetCertificateHeader(hObject,0,local_58 + 2);
        if (iVar1 != 0) {
          local_f8[0] = local_58[2];
          pDVar4 = (DWORD *)operator_new((ulonglong)(uint)local_58[2] + 0xc);
          *pDVar4 = local_f8[0];
          *(undefined2 *)(pDVar4 + 1) = 0x100;
          iVar1 = ImageGetCertificateData(hObject,0,pDVar4,local_f8);
          if (iVar1 == 0) {
            CloseHandle(hObject);
          }
          else {
            CloseHandle(hObject);
            local_58[1] = 0;
            _guard_xfg_dispatch_icall_nop(&local_40,0,0x20);
            local_40.cbSize = 0x20;
            local_40.dwMsgAndCertEncodingType = 0x10001;
            BVar3 = CryptVerifyMessageSignature
                              (&local_40,0,(BYTE *)(pDVar4 + 2),*pDVar4,(BYTE *)0x0,
                               (DWORD *)(local_58 + 1),&local_f0);
            if (BVar3 != 0) {
              cchNameString = CertGetNameStringW(local_f0,4,0,(void *)0x0,(LPWSTR)0x0,0);
              uVar5 = SUB168(ZEXT416(2) * ZEXT416(cchNameString),0);
              if (SUB168(ZEXT416(2) * ZEXT416(cchNameString),8) != 0) {
                uVar5 = 0xffffffffffffffff;
              }
              pszNameString = (wchar_t *)operator_new(uVar5);
              CertGetNameStringW(local_f0,4,0,(void *)0x0,pszNameString,cchNameString);
              iVar1 = _guard_xfg_dispatch_icall_nop(pszNameString,L"Logitech Inc");
              if (iVar1 == 0) {
                FMemory::operator_delete(pszNameString);
                FMemory::operator_delete(pDVar4);
                BVar3 = CertFreeCertificateContext(local_f0);
                return CONCAT71((int7)(CONCAT44(extraout_var_02,BVar3) >> 8),1);
              }
              FMemory::operator_delete(pszNameString);
            }
          }
          hObject = (undefined1 *)FMemory::operator_delete(pDVar4);
          goto LAB_1432b4027;
        }
      }
      BVar3 = CloseHandle(hObject);
      hObject = (undefined1 *)CONCAT44(extraout_var_01,BVar3);
    }
  }
LAB_1432b4027:
  return (ulonglong)hObject & 0xffffffffffffff00;
}



// FUNCTION 1432b429c FUN_1432b429c body=873 status=ok
// SIG undefined FUN_1432b429c(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432b429c(void)

{
  char cVar1;
  LSTATUS LVar2;
  HMODULE hModule;
  undefined1 auStackY_58 [32];
  HKEY local_28;
  DWORD local_20;
  DWORD local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_58;
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000002,
                        (LPCWSTR)PTR_u_SOFTWARE_Classes_CLSID__A6519E67_1467ccfc0,0,0x20019,
                        &local_28);
  if (LVar2 == 0) {
    local_20 = 0x208;
    LVar2 = RegQueryValueExW(local_28,(LPCWSTR)0x0,(LPDWORD)0x0,&local_1c,&DAT_146b62c90,&local_20);
    if (LVar2 == 0) {
      cVar1 = FUN_1432b3fec(&DAT_146b62c90);
      if (cVar1 != '\0') {
        hModule = LoadLibraryW((LPCWSTR)&DAT_146b62c90);
        if (hModule != (HMODULE)0x0) {
          _DAT_146b62be0 = GetProcAddress(hModule,"LogiLedInit");
          DAT_146b62bf0 = GetProcAddress(hModule,"LogiLedInitWithName");
          _DAT_146b62bb0 = GetProcAddress(hModule,"LogiGetConfigOptionNumber");
          _DAT_146b62ba8 = GetProcAddress(hModule,"LogiGetConfigOptionBool");
          _DAT_146b62bb8 = GetProcAddress(hModule,"LogiGetConfigOptionColor");
          _DAT_146b62bc0 = GetProcAddress(hModule,"LogiGetConfigOptionRect");
          _DAT_146b62bc8 = GetProcAddress(hModule,"LogiGetConfigOptionRange");
          _DAT_146b62bd0 = GetProcAddress(hModule,"LogiGetConfigOptionSelect");
          _DAT_146b62bd8 = GetProcAddress(hModule,"LogiGetConfigOptionKeyInput");
          _DAT_146b62ba0 = GetProcAddress(hModule,"LogiSetConfigOptionLabel");
          _DAT_146b62bf8 = GetProcAddress(hModule,"LogiLedSaveCurrentLighting");
          DAT_146b62c00 = GetProcAddress(hModule,"LogiLedSetTargetDevice");
          DAT_146b62c08 = GetProcAddress(hModule,"LogiLedSetLighting");
          DAT_146b62c10 = GetProcAddress(hModule,"LogiLedRestoreLighting");
          _DAT_146b62c18 = GetProcAddress(hModule,"LogiLedFlashLighting");
          _DAT_146b62c20 = GetProcAddress(hModule,"LogiLedPulseLighting");
          DAT_146b62c28 = GetProcAddress(hModule,"LogiLedSetLightingFromBitmap");
          _DAT_146b62c30 = GetProcAddress(hModule,"LogiLedExcludeKeysFromBitmap");
          _DAT_146b62c38 = GetProcAddress(hModule,"LogiLedSetLightingForKeyWithScanCode");
          DAT_146b62c40 = GetProcAddress(hModule,"LogiLedSetLightingForKeyWithHidCode");
          _DAT_146b62c48 = GetProcAddress(hModule,"LogiLedSetLightingForKeyWithQuartzCode");
          DAT_146b62c50 = GetProcAddress(hModule,"LogiLedSetLightingForKeyWithKeyName");
          _DAT_146b62c60 = GetProcAddress(hModule,"LogiLedPulseSingleKey");
          _DAT_146b62c58 = GetProcAddress(hModule,"LogiLedFlashSingleKey");
          _DAT_146b62c68 = GetProcAddress(hModule,"LogiLedStopEffectsOnKey");
          _DAT_146b62c70 = GetProcAddress(hModule,"LogiLedSaveLightingForKey");
          DAT_146b62c78 = GetProcAddress(hModule,"LogiLedRestoreLightingForKey");
          _DAT_146b62be8 = GetProcAddress(hModule,"LogiLedStopEffects");
          _DAT_146b62c80 = GetProcAddress(hModule,"LogiLedSetLightingForTargetZone");
          DAT_146b62c88 = GetProcAddress(hModule,"LogiLedShutdown");
        }
      }
    }
  }
  return;
}



// FUNCTION 1432b4610 initHeapEngine body=54 status=ok
// SIG undefined initHeapEngine(void)

bool Scaleform::SysAlloc::initHeapEngine(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (DAT_146b63a70 == 0) {
    FUN_143303040(&DAT_146b62ea0,param_1);
  }
  lVar1 = FUN_1432b4740(param_2);
  return lVar1 != 0;
}



// FUNCTION 1432b4650 shutdownHeapEngine body=51 status=ok
// SIG undefined shutdownHeapEngine(void)

undefined1 Scaleform::SysAlloc::shutdownHeapEngine(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1432b4800();
  if (DAT_146b63a70 != 0) {
    HeapMH::RootMH::~RootMH();
    DAT_146b63a70 = 0;
  }
  return uVar1;
}



// FUNCTION 1432b46b0 FUN_1432b46b0 body=37 status=ok
// SIG undefined FUN_1432b46b0(void)

void FUN_1432b46b0(void)

{
  if (DAT_146b63a70 != 0) {
    Scaleform::HeapMH::RootMH::~RootMH();
    DAT_146b63a70 = 0;
  }
  return;
}



// FUNCTION 1432b46e0 FUN_1432b46e0 body=79 status=ok
// SIG undefined FUN_1432b46e0(void)

void FUN_1432b46e0(void)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_48[0] = 8;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_20 = 0;
  local_18 = 1;
  FUN_1432b4740(local_48);
  return;
}



// FUNCTION 1432b4740 FUN_1432b4740 body=172 status=ok
// SIG undefined FUN_1432b4740(void)

undefined8 FUN_1432b4740(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_146b63a70 != 0) {
    lVar1 = DAT_146b63a70 + 8;
    Scaleform::Lock::DoLock(lVar1);
    if (DAT_146b62f28 == 0) {
      local_38 = param_1[2];
      uStack_30 = param_1[3];
      local_48 = *param_1;
      uStack_40 = param_1[1];
      uStack_10 = *(undefined4 *)(param_1 + 7);
      uStack_c = *(undefined4 *)((longlong)param_1 + 0x3c);
      local_28 = *(undefined4 *)(param_1 + 4);
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_20 = *(undefined4 *)(param_1 + 5);
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_18 = 1;
      DAT_146b62f28 = FUN_143303180(DAT_146b63a70,"Global",0,&local_48);
      Scaleform::Lock::DoLock(lVar1);
      return DAT_146b62f28;
    }
    Scaleform::Lock::DoLock(lVar1);
  }
  return 0;
}



// FUNCTION 1432b4800 FUN_1432b4800 body=123 status=ok
// SIG undefined FUN_1432b4800(void)

bool FUN_1432b4800(void)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  lVar1 = DAT_146b63a70;
  if (DAT_146b63a70 == 0) {
    return true;
  }
  Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
  if (DAT_146b62f28 == (longlong *)0x0) {
    bVar3 = true;
  }
  else {
    cVar2 = (**(code **)(*DAT_146b62f28 + 0x100))();
    bVar3 = cVar2 == '\0';
    (**(code **)(*DAT_146b62f28 + 0xe8))();
    DAT_146b62f28 = (longlong *)0x0;
  }
  Scaleform::Lock::DoLock(lVar1 + 8);
  return bVar3;
}



// FUNCTION 1432b4890 UMovieScene3DConstraintSection body=49 status=ok
// SIG undefined UMovieScene3DConstraintSection(void)

undefined8 * UMovieScene3DConstraintSection::UMovieScene3DConstraintSection(undefined8 *param_1)

{
  FUN_1432bdd30();
  *param_1 = &PTR_FUN_145af7578;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 1432b4900 FUN_1432b4900 body=179 status=ok
// SIG undefined FUN_1432b4900(void)

longlong FUN_1432b4900(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_146b63a70;
  Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
  lVar2 = FUN_143303180(DAT_146b63a70,param_2,param_1,param_3);
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  Scaleform::Lock::DoLock(lVar1 + 8);
  if (lVar2 != 0) {
    Scaleform::Lock::DoLock(param_1 + 0x98);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x88);
    *(longlong *)(lVar2 + 0x10) = param_1 + 0x80;
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = lVar2;
    *(longlong *)(param_1 + 0x88) = lVar2;
    Scaleform::Lock::DoLock(param_1 + 0x98);
  }
  return lVar2;
}



// FUNCTION 1432b49c0 FUN_1432b49c0 body=74 status=ok
// SIG undefined FUN_1432b49c0(void)

void FUN_1432b49c0(longlong param_1,undefined8 param_2)

{
  Scaleform::Lock::DoLock(param_1 + 0x98);
  *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x248) = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432b4a10 FUN_1432b4a10 body=105 status=ok
// SIG undefined FUN_1432b4a10(void)

void FUN_1432b4a10(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x98);
  if ((param_2 < *(ulonglong *)(param_1 + 0x60)) &&
     (uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 0x230), param_2 < uVar1)) {
    param_2 = uVar1;
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0xd0) + 0x240) = param_2;
  *(ulonglong *)(param_1 + 0x60) = param_2;
  Scaleform::Lock::DoLock(param_1 + 0x98);
  return;
}



// FUNCTION 1432b4a80 AddRef body=51 status=ok
// SIG undefined AddRef(void)

void Scaleform::MemoryHeapMH::AddRef(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_146b63a70;
  Lock::DoLock(DAT_146b63a70 + 8);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  Lock::DoLock(lVar1 + 8);
  return;
}



// FUNCTION 1432b4ac0 FUN_1432b4ac0 body=247 status=ok
// SIG undefined FUN_1432b4ac0(void)

void FUN_1432b4ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = DAT_146b63a70;
  plVar4 = (longlong *)param_1[0xf];
  if (plVar4 == (longlong *)0x0) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    *(int *)(param_1 + 4) = (int)param_1[4] + -1;
    Scaleform::Lock::DoLock(lVar3 + 8);
  }
  else {
    plVar2 = plVar4 + 0x13;
    Scaleform::Lock::DoLock(plVar2);
    lVar3 = DAT_146b63a70;
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    plVar1 = param_1 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*param_1 + 0x100))(param_1);
      *(longlong *)(param_1[1] + 0x10) = param_1[2];
      *(longlong *)(param_1[2] + 8) = param_1[1];
      param_1[1] = -1;
      param_1[2] = -1;
      FUN_1433032d0(DAT_146b63a70,param_1);
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    Scaleform::Lock::DoLock(lVar3 + 8);
    Scaleform::Lock::DoLock(plVar2);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432b4b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x40))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1432b4bc0 Alloc body=129 status=ok
// SIG undefined Alloc(void)

undefined8 Scaleform::MemoryHeapMH::Alloc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 200) != '\0') {
    Lock::DoLock(param_1 + 0x98);
    uVar1 = FUN_1433037f0(*(undefined8 *)(param_1 + 0xd0),param_2,local_28,0);
    Lock::DoLock(param_1 + 0x98);
    return uVar1;
  }
  uVar1 = FUN_1433037f0(*(undefined8 *)(param_1 + 0xd0),param_2,local_28,0);
  return uVar1;
}



// FUNCTION 1432b4c50 FUN_1432b4c50 body=154 status=ok
// SIG undefined FUN_1432b4c50(void)

undefined8 FUN_1432b4c50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 200) != '\0') {
    Scaleform::Lock::DoLock(param_1 + 0x98);
    uVar1 = FUN_143303900(*(undefined8 *)(param_1 + 0xd0),param_2,param_3,local_28,0);
    Scaleform::Lock::DoLock(param_1 + 0x98);
    return uVar1;
  }
  uVar1 = FUN_143303900(*(undefined8 *)(param_1 + 0xd0),param_2,param_3,local_28,0);
  return uVar1;
}



// FUNCTION 1432b4cf0 FUN_1432b4cf0 body=396 status=ok
// SIG undefined FUN_1432b4cf0(void)

undefined8 FUN_1432b4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffffb8;
  undefined1 local_38 [32];
  
  lVar2 = FUN_143303520(DAT_146b63a70);
  lVar1 = DAT_146b63a70;
  if (lVar2 == 0) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    lVar2 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
    uVar4 = *(ulonglong *)(lVar2 + 0x18) & 0xfffffffffffffffc;
    Scaleform::Lock::DoLock(lVar1 + 8);
    lVar1 = DAT_146b63a70;
    if (*(char *)(uVar4 + 200) == '\0') {
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      uVar3 = FUN_143303ab0(*(undefined8 *)(uVar4 + 0xd0),lVar2,param_2,param_3,local_38,1);
      Scaleform::Lock::DoLock(lVar1 + 8);
    }
    else {
      Scaleform::Lock::DoLock(uVar4 + 0x98);
      lVar1 = DAT_146b63a70;
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      uVar3 = FUN_143303ab0(*(undefined8 *)(uVar4 + 0xd0),lVar2,param_2,param_3,local_38,1);
      Scaleform::Lock::DoLock(lVar1 + 8);
      Scaleform::Lock::DoLock(uVar4 + 0x98);
    }
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if (*(char *)(lVar1 + 200) == '\0') {
      uVar3 = FUN_1432b59a0(lVar1,lVar2,param_2,param_3,
                            in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
    }
    else {
      Scaleform::Lock::DoLock(lVar1 + 0x98);
      uVar3 = FUN_1432b59a0(lVar1,lVar2,param_2,param_3,
                            in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
      Scaleform::Lock::DoLock(lVar1 + 0x98);
    }
  }
  return uVar3;
}



// FUNCTION 1432b4e90 FUN_1432b4e90 body=364 status=ok
// SIG undefined FUN_1432b4e90(void)

void FUN_1432b4e90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_143303520(DAT_146b63a70);
    lVar1 = DAT_146b63a70;
    if (lVar2 == 0) {
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      lVar2 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
      plVar4 = (longlong *)(*(ulonglong *)(lVar2 + 0x18) & 0xfffffffffffffffc);
      Scaleform::Lock::DoLock(lVar1 + 8);
      lVar1 = DAT_146b63a70;
      if ((char)plVar4[0x19] == '\0') {
        Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
        FUN_143303e00(plVar4[0x1a],lVar2,param_2,1);
        plVar3 = (longlong *)(lVar1 + 8);
      }
      else {
        Scaleform::Lock::DoLock(plVar4 + 0x13);
        lVar1 = DAT_146b63a70;
        Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
        FUN_143303e00(plVar4[0x1a],lVar2,param_2,1);
        Scaleform::Lock::DoLock(lVar1 + 8);
        plVar3 = plVar4 + 0x13;
      }
      Scaleform::Lock::DoLock(plVar3);
    }
    else {
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if ((char)plVar4[0x19] == '\0') {
        FUN_143303d60(plVar4[0x1a],lVar2,param_2,0);
      }
      else {
        Scaleform::Lock::DoLock(plVar4 + 0x13);
        FUN_143303d60(plVar4[0x1a],lVar2,param_2,0);
        Scaleform::Lock::DoLock(plVar4 + 0x13);
      }
    }
    if (param_2 == plVar4[6]) {
      (**(code **)(*plVar4 + 0x40))(plVar4);
    }
  }
  return;
}



// FUNCTION 1432b5010 FUN_1432b5010 body=370 status=ok
// SIG undefined FUN_1432b5010(void)

undefined8 FUN_1432b5010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_28 [32];
  
  lVar1 = FUN_143303520(DAT_146b63a70);
  lVar3 = DAT_146b63a70;
  if (lVar1 == 0) {
    Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
    lVar1 = FUN_1432b5c30(DAT_146b63a70 + 0x50,param_2);
    uVar4 = *(ulonglong *)(lVar1 + 0x18) & 0xfffffffffffffffc;
    Scaleform::Lock::DoLock(lVar3 + 8);
    lVar3 = DAT_146b63a70;
    if (*(char *)(uVar4 + 200) == '\0') {
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      uVar2 = FUN_1433037f0(*(undefined8 *)(uVar4 + 0xd0),param_3,local_28,1);
      lVar3 = lVar3 + 8;
    }
    else {
      lVar3 = uVar4 + 0x98;
      Scaleform::Lock::DoLock(lVar3);
      lVar1 = DAT_146b63a70;
      Scaleform::Lock::DoLock(DAT_146b63a70 + 8);
      uVar2 = FUN_1433037f0(*(undefined8 *)(uVar4 + 0xd0),param_3,local_28,1);
      Scaleform::Lock::DoLock(lVar1 + 8);
    }
    Scaleform::Lock::DoLock(lVar3);
    return uVar2;
  }
  lVar3 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(lVar3 + 200) != '\0') {
    Scaleform::Lock::DoLock(lVar3 + 0x98);
    uVar2 = FUN_1433037f0(*(undefined8 *)(lVar3 + 0xd0),param_3,local_28,0);
    Scaleform::Lock::DoLock(lVar3 + 0x98);
    return uVar2;
  }
  uVar2 = FUN_1433037f0(*(undefined8 *)(lVar3 + 0xd0),param_3,local_28,0);
  return uVar2;
}


