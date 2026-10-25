// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140480970 ReallocGrow body=236 status=ok
// SIG undefined ReallocGrow(void)

void FScriptBitArray::ReallocGrow(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x18) + 0x1f;
  uVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar4 = 4;
    iVar1 = *(int *)(param_1 + 0x1c) + 0x1f;
    if (((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar2)) {
      lVar4 = (longlong)(int)uVar2 + 0x10 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    uVar6 = uVar3 >> 2 & 0xffffffff;
    if ((int)(uVar3 >> 2) < (int)uVar2) {
      uVar6 = 0x7fffffff;
    }
  }
  uVar5 = (uint)uVar6;
  *(uint *)(param_1 + 0x1c) = uVar5 << 5;
  uVar2 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
            (param_1,uVar2,uVar6,4);
  if ((uVar5 != 0) && (uVar2 < uVar5)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(lVar4 + (ulonglong)uVar2 * 4),0,(ulonglong)(uVar5 - uVar2) << 2);
  }
  return;
}



// FUNCTION 140480a70 FUN_140480a70 body=1062 status=ok
// SIG undefined FUN_140480a70(void)

longlong * FUN_140480a70(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  IViewListener **ppIVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  IViewListener *pIVar10;
  longlong *plVar11;
  IViewListener *pIVar12;
  IViewListener *pIVar13;
  undefined1 local_res8 [8];
  undefined1 *in_stack_fffffffffffffee8;
  IViewListener *local_108;
  IViewListener *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  IViewListener *local_88;
  longlong local_80;
  IViewListener *local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [42];
  ushort local_2e;
  
  plVar3 = param_1 + 0x20;
  if (*plVar3 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if ((lVar6 != 0) && (lVar7 = FUN_14046e620(lVar6), lVar7 == 0)) {
      FActorSpawnParameters::FActorSpawnParameters(local_58);
      local_2e = local_2e | 8;
      uVar8 = APlayerStateGunfire::GetPrivateStaticClass();
      in_stack_fffffffffffffee8 = local_58;
      UWorld::SpawnActor(lVar6,uVar8,0,0,in_stack_fffffffffffffee8);
    }
    puVar9 = (undefined8 *)FName::FName(local_res8,L"UCohtmlWidget Audio Wrapper",1);
    pIVar13 = (IViewListener *)0x0;
    lVar6 = FUN_14044faf0(param_1,*puVar9,0,0,
                          (ulonglong)in_stack_fffffffffffffee8 & 0xffffffffffffff00,0);
    param_1[0x2c] = lVar6;
    pIVar10 = (IViewListener *)operator_new(0x40);
    pIVar12 = pIVar13;
    if (pIVar10 != (IViewListener *)0x0) {
      cohtml::IViewListener::IViewListener(pIVar10);
      cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(pIVar10 + 8));
      *(undefined4 *)(pIVar10 + 0x10) = 0;
      *(undefined ***)pIVar10 = &PTR_FUN_143f4b928;
      *(undefined ***)(pIVar10 + 8) = &PTR_LAB_143f4ba00;
      *(longlong **)(pIVar10 + 0x18) = param_1;
      *(undefined8 *)(pIVar10 + 0x20) = 0;
      *(undefined8 *)(pIVar10 + 0x28) = 0;
      *(undefined8 *)(pIVar10 + 0x30) = 0;
      *(undefined8 *)(pIVar10 + 0x38) = 0;
      pIVar12 = pIVar10;
    }
    local_108 = pIVar12;
    pIVar10 = (IViewListener *)operator_new(0x18);
    local_100 = pIVar13;
    if (pIVar10 != (IViewListener *)0x0) {
      *(undefined4 *)(pIVar10 + 8) = 1;
      *(undefined ***)pIVar10 = &PTR_FUN_143f3f2e0;
      *(undefined4 *)(pIVar10 + 0xc) = 1;
      *(IViewListener **)(pIVar10 + 0x10) = pIVar12;
      local_100 = pIVar10;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_108,pIVar12,pIVar12);
    ppIVar4 = (IViewListener **)(param_1 + 0x2d);
    if (ppIVar4 != &local_108) {
      *ppIVar4 = local_108;
      local_108 = (IViewListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2e,&local_100);
    }
    pIVar12 = local_100;
    if (local_100 != (IViewListener *)0x0) {
      LOCK();
      pIVar10 = local_100 + 8;
      iVar5 = *(int *)pIVar10;
      *(int *)pIVar10 = *(int *)pIVar10 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)local_100)(local_100);
        LOCK();
        pIVar10 = pIVar12 + 0xc;
        iVar5 = *(int *)pIVar10;
        *(int *)pIVar10 = *(int *)pIVar10 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)pIVar12 + 8))(pIVar12,1);
        }
      }
    }
    uStack_c0 = (undefined1)param_1[0x2a];
    uStack_a0 = 0x41000000;
    local_e8 = 0;
    uStack_e0 = 0x500;
    uStack_dc = 0x2d0;
    local_d8 = 0;
    lStack_d0 = 0;
    local_c8 = 0;
    uStack_bf = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 200;
    local_a8 = 0;
    uStack_9c = (uint)uStack_9c._3_1_ << 0x18;
    local_98 = 0;
    plVar11 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1,local_68);
    if (plVar3 != plVar11) {
      *plVar3 = *plVar11;
      *plVar11 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x21,plVar11 + 1);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    local_88 = *ppIVar4 + 8;
    if (*ppIVar4 == (IViewListener *)0x0) {
      local_88 = pIVar13;
    }
    local_80 = param_1[0x2e];
    local_70 = 0;
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
      local_70 = param_1[0x2e];
    }
    local_78 = *ppIVar4;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_140465860(*plVar3,&local_e8,param_1 + 0x3c,&local_78,&local_88);
    local_f0 = (longlong *)0x0;
    param_1[0x31] = local_e8;
    param_1[0x32] = CONCAT44(uStack_dc,uStack_e0);
    param_1[0x33] = local_d8;
    param_1[0x34] = lStack_d0;
    param_1[0x35] = local_c8;
    param_1[0x36] = CONCAT44(uStack_bc,CONCAT22(uStack_be,CONCAT11(uStack_bf,uStack_c0)));
    param_1[0x37] = CONCAT44(uStack_b4,uStack_b8);
    param_1[0x38] = CONCAT44(uStack_ac,uStack_b0);
    *(undefined4 *)(param_1 + 0x39) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 0x3a) = uStack_a0;
    *(int *)((longlong)param_1 + 0x1d4) = uStack_9c;
    param_1[0x3b] = local_98;
    if (param_1 + 0x2f != &local_f8) {
      param_1[0x2f] = 0;
      local_f8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_f0);
      plVar11 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_f0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
  }
  plVar11 = (longlong *)param_1[0x21];
  lVar6 = *plVar3;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  *param_2 = lVar6;
  param_2[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140480ea0 FUN_140480ea0 body=656 status=ok
// SIG undefined FUN_140480ea0(void)

void FUN_140480ea0(longlong param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  longlong local_80;
  undefined8 local_78;
  
  puVar8 = (undefined8 *)0x0;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar4 = param_1 + 0x68;
    }
    iVar6 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)param_2) * 4);
    if (iVar6 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x28);
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x28) == param_2) {
          if (iVar6 != -1) goto LAB_140480f13;
          break;
        }
        iVar6 = *(int *)(puVar5 + 4);
      } while (iVar6 != -1);
    }
  }
  puVar5 = puVar8;
LAB_140480f13:
  puVar10 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar10 = puVar8;
  }
  if (puVar10 != (undefined8 *)0x0) {
    iVar3 = USoundWaveProcedural::GetAvailableAudioByteCount(puVar10[1]);
    iVar6 = param_3 * param_5 * 2;
    if ((iVar3 == 0) && (cVar2 = (**(code **)(*(longlong *)*puVar10 + 0x568))(), cVar2 != '\0')) {
      *(undefined1 *)((longlong)puVar10 + 0x14) = 1;
      (**(code **)(*(longlong *)*puVar10 + 0x560))();
    }
    else if ((*(char *)((longlong)puVar10 + 0x14) != '\0') &&
            (*(float *)(puVar10 + 2) <= (float)(iVar6 + iVar3))) {
      *(undefined1 *)((longlong)puVar10 + 0x14) = 0;
      (**(code **)(*(longlong *)*puVar10 + 0x558))();
    }
    local_80 = 0;
    local_78 = 0;
    puVar5 = puVar8;
    if (0 < iVar6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_80,iVar6);
      puVar5 = (undefined8 *)(local_78 & 0xffffffff);
    }
    uVar7 = SUB84(puVar5,0);
    lVar4 = local_80;
    if (0 < param_3) {
      do {
        lVar9 = 0;
        if (0 < (longlong)param_5) {
          do {
            fVar11 = *(float *)(*(longlong *)(param_4 + lVar9 * 8) + (longlong)puVar8 * 4) * 32767.0
            ;
            fVar11 = (float)((int)ROUND(fVar11 + fVar11 + 0.5) >> 1);
            if (-32767.0 <= fVar11) {
              if (32767.0 <= fVar11) {
                fVar11 = 32767.0;
              }
            }
            else {
              fVar11 = -32767.0;
            }
            iVar6 = (int)puVar5 + 1;
            if (local_78._4_4_ < iVar6) {
              local_78._0_4_ = iVar6;
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_80,puVar5);
              lVar4 = local_80;
              iVar6 = (uint)local_78;
            }
            uVar1 = iVar6 + 1;
            local_78 = CONCAT44(local_78._4_4_,uVar1);
            *(char *)((int)puVar5 + lVar4) = (char)(int)fVar11;
            if (local_78._4_4_ < (int)uVar1) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_80,iVar6);
              lVar4 = local_80;
              uVar1 = (uint)local_78;
            }
            puVar5 = (undefined8 *)(ulonglong)uVar1;
            lVar9 = lVar9 + 1;
            *(char *)(iVar6 + lVar4) = (char)((uint)(int)fVar11 >> 8);
          } while (lVar9 < param_5);
        }
        uVar7 = SUB84(puVar5,0);
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
      } while ((longlong)puVar8 < (longlong)param_3);
    }
    FUN_14280ca60(puVar10[1],lVar4,uVar7);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 140481130 FUN_140481130 body=590 status=ok
// SIG undefined FUN_140481130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140481130(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 300) != 1) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe8,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe0,0);
    local_a0 = *(uint *)(param_1 + 300);
    local_68 = 1;
    local_78 = 0;
    uStack_70 = 0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_b8 = param_3;
    if ((local_a0 < 2) ||
       ((DAT_146ab62cc < 0x1e && ((0x313a1900U >> (DAT_146ab62cc & 0x1f) & 1) != 0)))) {
      local_90 = &local_78;
      local_98 = 9;
      local_a8 = 1;
      local_b0 = 0x25;
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_2);
      puVar1 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe0,local_88);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe8,*puVar1);
    }
    else {
      local_90 = &local_78;
      local_98 = 1;
      local_a8 = 1;
      local_b0 = 0x25;
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_2);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe8,local_88);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
      local_90 = &local_78;
      local_98 = 10;
      local_a0 = 1;
      local_a8 = 1;
      local_b0 = 0x25;
      local_b8 = param_3;
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_2);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe0,local_88);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(**(longlong **)(param_1 + 0xd0) + 0x98),
                  *(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xe0);
  }
  return;
}



// FUNCTION 140481380 FUN_140481380 body=622 status=ok
// SIG undefined FUN_140481380(void)

void FUN_140481380(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    uVar5 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_40);
    plVar10 = *(longlong **)(param_1 + 0x20);
    if (plVar10 != (longlong *)0x0) {
      FUN_140499350(local_res8,*(undefined8 *)(param_1 + 0x100),uVar5);
      (**(code **)(*plVar10 + 8))(plVar10);
      *(undefined8 *)(param_1 + 0x20) = 0;
      FUN_14049a640(local_res8);
    }
    QueryPerformanceCounter(&local_48);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_48.s.LowPart - local_40._0_4_);
  }
  else {
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    plVar10 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar10 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar10);
      plVar7 = plVar10;
    }
    plVar10 = (longlong *)plVar7[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar7;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
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
        plVar10 = (longlong *)plVar7[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar7[1] = (longlong)plVar10;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar11 = (int)plVar7[2];
    }
    plVar7[1] = *plVar10;
    *(int *)(plVar7 + 2) = iVar11 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    local_38 = 0;
    local_30 = 0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_143f4c930;
    *(undefined1 *)(plVar10 + 3) = 0;
    plVar10[4] = 0;
    plVar10[2] = param_1;
    lVar8 = plVar10[4];
    piVar1 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar10,0,0xff,1);
    if (lVar8 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar8);
      }
    }
  }
  FUN_141edede0(param_1 + 0x10,0);
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_140465e20(param_1);
  FUN_1404657a0(param_1,param_2,param_3);
  return;
}



// FUNCTION 1404815f0 FUN_1404815f0 body=257 status=ok
// SIG undefined FUN_1404815f0(void)

void FUN_1404815f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                    (param_1 + 0x388,param_1 + 0x390);
  if (cVar2 != '\0') {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x390);
    if (cVar2 != '\0') {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x390);
      if (*(longlong *)(*(longlong *)(lVar1 + 0x200) + 8) != 0) {
        cVar2 = *(char *)(param_1 + 0x3d8);
        lVar1 = FWeakObjectPtr::Get(param_1 + 0x390);
        lVar3 = param_1 + 0x39c;
        if (cVar2 == '\0') {
          lVar3 = 0;
        }
        FUN_140461b60(*(undefined8 *)(*(longlong *)(lVar1 + 0x200) + 8),lVar3);
        cVar2 = *(char *)(param_1 + 0x3d9);
        *(undefined1 *)(param_1 + 0x3d8) = 0;
        lVar1 = FWeakObjectPtr::Get(param_1 + 0x390);
        lVar3 = param_1 + 0x3c0;
        if (cVar2 == '\0') {
          lVar3 = 0;
        }
        FUN_140461bf0(*(undefined8 *)(*(longlong *)(lVar1 + 0x200) + 8),lVar3);
        *(undefined1 *)(param_1 + 0x3d9) = 0;
      }
    }
  }
  FWeakObjectPtr::operator=(param_1 + 0x388,param_2);
  return;
}



// FUNCTION 140481700 FUN_140481700 body=740 status=ok
// SIG undefined FUN_140481700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140481700(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  void *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined2 uStack_134;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined2 *local_130;
  int local_128;
  int local_124;
  undefined8 *local_120;
  undefined8 *local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_120 = param_3;
  iVar4 = (**(code **)(*param_1 + 0x78))();
  local_158 = (void *)param_3[3];
  FName::ToString(&local_158,&local_130);
  if (iVar4 != 0) {
    local_158 = (void *)0x0;
    local_150 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    _Src = local_158;
    local_168 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_158,7,"_ByRef");
    iVar3 = local_128;
    if (((int)local_150 != 0) && (iVar9 = (int)local_150 + -1, iVar9 != 0)) {
      lVar8 = (longlong)local_128;
      local_128 = (uint)(local_128 == 0) + iVar9 + local_128;
      if (local_124 < local_128) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,iVar3);
      }
      puVar7 = local_130 + (lVar8 - (ulonglong)(iVar3 != 0));
      _guard_xfg_dispatch_icall_nop(puVar7,_Src,(longlong)iVar9 * 2);
      puVar7[iVar9] = 0;
      param_3 = local_120;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  puVar7 = &DAT_143f3eda8;
  if (local_128 != 0) {
    puVar7 = local_130;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar7);
  (**(code **)(*param_1 + 0x10))(param_1,&local_158,*(undefined8 *)(lVar8 + 0x88),param_2);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_158 != (void *)0x0) {
    lStack_140 = param_3[7];
    local_138 = 0xffffffff;
    uStack_134 = 0x101;
    uStack_132 = 0;
    local_148 = param_3;
    FUN_140472e10(&local_148);
    lVar5 = lStack_140;
    local_108 = CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT24(uStack_134,local_138)));
    local_138 = 0xffffffff;
    local_118 = local_148;
    lStack_110 = lStack_140;
    uStack_134 = 0x101;
    local_148 = (undefined8 *)0x0;
    lStack_140 = 0;
    uStack_132 = 0;
    FUN_140472e10(&local_148);
    lVar2 = lStack_140;
    lVar8 = lStack_110;
    lStack_110 = lVar5;
    while (bVar1 = lStack_110 != lVar2, lStack_110 = lVar8, bVar1) {
      lVar5 = FUN_140472420(lVar8,iVar4 == 0);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(**(code **)(lVar5 + 8))(&local_120,lVar8);
        (**(code **)(*param_1 + 0x18))(param_1,param_2,*puVar6);
        if (local_120 != (undefined8 *)0x0) {
          (**(code **)*local_120)(local_120,1);
        }
      }
      lStack_110 = *(longlong *)(lVar8 + 0x28);
      FUN_140472e10(&local_118);
      lVar8 = lStack_110;
    }
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_158);
  if (local_130 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404819f0 FUN_1404819f0 body=502 status=ok
// SIG undefined FUN_1404819f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404819f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined2 uStack_134;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined8 *local_130;
  undefined2 *local_128;
  int local_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar3 = (**(code **)(*param_1 + 0x78))();
  local_130 = *(undefined8 **)(param_3 + 0x18);
  FName::ToString(&local_130,&local_128);
  puVar7 = &DAT_143f3eda8;
  if (local_120 != 0) {
    puVar7 = local_128;
  }
  lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar7);
  (**(code **)(*param_1 + 0x10))(param_1,local_100,*(undefined8 *)(lVar4 + 0x88),param_2);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_100[0] != 0) {
    lStack_140 = *(longlong *)(param_3 + 0x38);
    local_138 = 0xffffffff;
    uStack_134 = 0x101;
    uStack_132 = 0;
    local_148 = param_3;
    FUN_140472e10(&local_148);
    lVar5 = lStack_140;
    local_108 = CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT24(uStack_134,local_138)));
    local_138 = 0xffffffff;
    local_118 = local_148;
    lStack_110 = lStack_140;
    uStack_134 = 0x101;
    local_148 = 0;
    lStack_140 = 0;
    uStack_132 = 0;
    FUN_140472e10(&local_148);
    lVar2 = lStack_140;
    lVar4 = lStack_110;
    lStack_110 = lVar5;
    while (bVar1 = lStack_110 != lVar2, lStack_110 = lVar4, bVar1) {
      lVar5 = FUN_140472420(lVar4,iVar3 == 0);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(**(code **)(lVar5 + 8))(&local_130,lVar4);
        (**(code **)(*param_1 + 0x18))(param_1,param_2,*puVar6);
        if (local_130 != (undefined8 *)0x0) {
          (**(code **)*local_130)(local_130,1);
        }
      }
      lStack_110 = *(longlong *)(lVar4 + 0x28);
      FUN_140472e10(&local_118);
      lVar4 = lStack_110;
    }
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)local_100);
  if (local_128 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140481bf0 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_140481d2f;
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
LAB_140481d2f:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0xc);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[2] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[1] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 140481e00 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_140481f3f;
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
LAB_140481f3f:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[9] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[8] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 140482010 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14048214f;
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
LAB_14048214f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x80 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x1f] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x1e] =
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



// FUNCTION 140482220 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14048235f;
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
LAB_14048235f:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[5] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 140482430 Rehash body=631 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar3) goto LAB_14048256f;
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
LAB_14048256f:
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
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x20 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x1c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 3) =
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



// FUNCTION 1404826b0 Rehash body=636 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar3) goto LAB_1404827ef;
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
LAB_1404827ef:
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
        lVar4 = *param_1 + (longlong)iStack_1c * 0x18;
        iVar8 = (int)(*(ulonglong *)(*param_1 + (longlong)iStack_1c * 0x18) >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
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



// FUNCTION 140482930 Rehash body=636 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar3) goto LAB_140482a6f;
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
LAB_140482a6f:
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
        lVar4 = *param_1 + (longlong)iStack_1c * 0x28;
        iVar8 = (int)(*(ulonglong *)(*param_1 + (longlong)iStack_1c * 0x28) >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x24) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
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



// FUNCTION 140482bb0 Rehash body=636 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar3) goto LAB_140482cef;
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
LAB_140482cef:
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
        lVar4 = *param_1 + (longlong)iStack_1c * 0x48;
        iVar8 = (int)(*(ulonglong *)(*param_1 + (longlong)iStack_1c * 0x48) >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x44) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x40) =
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



// FUNCTION 140482e30 Rehash body=543 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
     Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_140482f5f;
        uVar5 = puVar14[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140482f5f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 3) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140483050 Rehash body=543 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
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
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14048317f;
        uVar5 = puVar14[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14048317f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x38 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x34) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 6) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140483270 Rehash body=544 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1404833af;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_1404833af:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x28) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)((longlong)puVar3 + 0x24) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140483490 ReleaseRHI body=36 status=ok
// SIG undefined ReleaseRHI(void)

void FRawStaticIndexBuffer16or32<unsigned_short>::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  return;
}



// FUNCTION 1404834c0 FUN_1404834c0 body=11 status=ok
// SIG undefined FUN_1404834c0(void)

void FUN_1404834c0(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  return;
}



// FUNCTION 140483540 Remove body=183 status=ok
// SIG undefined Remove(void)

void TBaseMulticastDelegate<void>::Remove(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      if (((*(int *)(lVar5 + 8 + lVar1) != 0) &&
          (plVar2 = *(longlong **)(lVar5 + lVar1), plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == param_2)
         ) {
        if ((*(int *)(lVar5 + 8 + lVar1) != 0) &&
           (plVar2 = *(longlong **)(lVar5 + lVar1), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*(longlong *)(lVar5 + lVar1) != 0) {
            uVar3 = FMemory::Realloc(*(longlong *)(lVar5 + lVar1),0,0);
            *(undefined8 *)(lVar5 + lVar1) = uVar3;
          }
          *(undefined4 *)(lVar5 + 8 + lVar1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < (int)param_1[1]);
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
  return;
}



// FUNCTION 140483600 Remove body=224 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

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
      if (*(int *)(lVar5 + lVar8 * 0x28) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x24 + lVar8 * 0x28) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000140483692;
      }
      iVar3 = *(int *)(lVar5 + 0x20 + lVar8 * 0x28);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x000140483692:
  if (iVar4 == -1) {
LAB_1404836b7:
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar8 * 0x28 + 0x20);
    goto LAB_1404836b7;
  }
  lVar1 = (longlong)iVar4 * 5 + 4;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x000140483692;
}



// FUNCTION 1404836e0 FUN_1404836e0 body=240 status=ok
// SIG undefined FUN_1404836e0(void)

void FUN_1404836e0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar3 = lVar6 + (longlong)param_2 * 0x48;
    lVar8 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x44));
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar4 = (undefined4 *)((longlong)plVar7 + lVar8 * 4);
    iVar5 = *(int *)((longlong)plVar7 + lVar8 * 4);
    while (iVar5 != -1) {
      if (iVar5 == param_2) {
        *puVar4 = *(undefined4 *)(lVar3 + 0x40);
        break;
      }
      lVar8 = (longlong)iVar5 * 9 + 8;
      puVar4 = (undefined4 *)(lVar6 + lVar8 * 8);
      iVar5 = *(int *)(lVar6 + lVar8 * 8);
    }
  }
  lVar3 = *param_1 + (longlong)param_2 * 0x48;
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (lVar3 + 0x10);
  plVar7 = *(longlong **)(lVar3 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  FUN_140483b20(param_1,param_2,1);
  return;
}



// FUNCTION 1404837d0 FUN_1404837d0 body=160 status=ok
// SIG undefined FUN_1404837d0(void)

void FUN_1404837d0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0x38;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x34 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0x30 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x30 + (longlong)iVar1 * 0x38);
      iVar1 = *piVar5;
    }
  }
  if (*(longlong *)((longlong)param_2 * 0x38 + *param_1) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 140483870 FUN_140483870 body=314 status=ok
// SIG undefined FUN_140483870(void)

void FUN_140483870(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  
  if (*(int *)((longlong)param_1 + 0x14) < 1) {
    iVar5 = (int)param_1[1];
    iVar8 = 0;
    if (0 < iVar5) {
      lVar4 = 0;
      do {
        if ((((*(int *)(lVar4 + 8 + *param_1) == 0) ||
             (plVar6 = *(longlong **)(lVar4 + *param_1), plVar6 == (longlong *)0x0)) ||
            (cVar3 = (**(code **)(*plVar6 + 8))(plVar6,param_2), cVar3 != '\0')) ||
           (cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6), cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,iVar8,1);
        }
        else {
          iVar8 = iVar8 + 1;
          lVar4 = lVar4 + 0x10;
        }
        iVar5 = (int)param_1[1];
      } while (iVar8 < iVar5);
    }
    iVar8 = iVar5 * 2;
    if (iVar8 < 3) {
      iVar8 = 2;
    }
    *(int *)(param_1 + 2) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,(int)param_1[1]);
    }
  }
  else {
    plVar6 = (longlong *)*param_1;
    bVar2 = false;
    plVar7 = plVar6 + (longlong)(int)param_1[1] * 2;
    if (plVar6 != plVar7) {
      do {
        if ((((int)plVar6[1] != 0) && (plVar1 = (longlong *)*plVar6, plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 8))(plVar1,param_2), cVar3 != '\0')) {
          if (((int)plVar6[1] != 0) && (plVar1 = (longlong *)*plVar6, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar6 != 0) {
              lVar4 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar4;
            }
            *(undefined4 *)(plVar6 + 1) = 0;
          }
          bVar2 = true;
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar7);
      if (bVar2) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1404839b0 RemoveAtUninitialized body=176 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x28;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar9;
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
      lVar8 = lVar8 + 0x28;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140483a60 FUN_140483a60 body=178 status=ok
// SIG undefined FUN_140483a60(void)

void FUN_140483a60(longlong *param_1,int param_2,int param_3)

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
    lVar11 = uVar9 << 7;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x80 + *param_1) = iVar8;
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
      lVar11 = lVar11 + 0x80;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140483b20 FUN_140483b20 body=176 status=ok
// SIG undefined FUN_140483b20(void)

void FUN_140483b20(longlong *param_1,int param_2,int param_3)

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
    lVar8 = uVar10 * 0x48;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar9;
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
      lVar8 = lVar8 + 0x48;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140483bd0 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x38;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x38;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140483c80 FUN_140483c80 body=172 status=ok
// SIG undefined FUN_140483c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140483c80(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  (**(code **)(*(longlong *)*param_2 + 0x3b0))((longlong *)*param_2,0);
  lVar4 = 0;
  iVar2 = *(int *)(param_2[2] + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar5 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
  iVar2 = *(int *)(param_2[3] + 0xc);
  if ((int)DAT_1469e91c4 <= iVar2) {
    _DAT_00000008 = _DAT_00000008 & 0xbfffffff;
    return;
  }
  uVar5 = iVar2 >> 0x1f & 0xffff;
  uVar3 = iVar2 + uVar5;
  puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                   (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18);
  *puVar1 = *puVar1 & 0xbfffffff;
  return;
}



// FUNCTION 140483d30 RemoveScaling body=796 status=ok
// SIG undefined RemoveScaling(void)

void FMatrix::RemoveScaling(float *param_1,float param_2)

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
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar14 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar6 = param_1[10];
  fVar7 = param_1[6];
  fVar8 = param_1[8];
  fVar15 = fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7;
  fVar9 = param_1[9];
  fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fVar6 * fVar6;
  auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar11 = auVar13._0_4_;
  fVar11 = fVar11 + fVar11 * (0.5 - fVar14 * 0.5 * fVar11 * fVar11);
  fVar11 = fVar11 + fVar11 * (0.5 - fVar14 * 0.5 * fVar11 * fVar11);
  if (fVar14 - param_2 < 0.0) {
    fVar11 = 1.0;
  }
  auVar13 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
  fVar14 = auVar13._0_4_;
  fVar14 = fVar14 + fVar14 * (0.5 - fVar15 * 0.5 * fVar14 * fVar14);
  fVar14 = fVar14 + fVar14 * (0.5 - fVar15 * 0.5 * fVar14 * fVar14);
  if (fVar15 - param_2 < 0.0) {
    fVar14 = 1.0;
  }
  auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar12 = auVar13._0_4_;
  fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
  fVar15 = 1.0;
  if (0.0 <= fVar10 - param_2) {
    fVar15 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
  }
  param_1[8] = fVar8 * fVar15;
  *param_1 = fVar1 * fVar11;
  param_1[1] = fVar2 * fVar11;
  param_1[2] = fVar3 * fVar11;
  param_1[4] = fVar4 * fVar14;
  param_1[5] = fVar5 * fVar14;
  param_1[6] = fVar7 * fVar14;
  param_1[10] = fVar6 * fVar15;
  param_1[9] = fVar9 * fVar15;
  return;
}



// FUNCTION 140484050 FUN_140484050 body=182 status=ok
// SIG undefined FUN_140484050(void)

bool FUN_140484050(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f290(param_1,&local_18);
  if (local_18 != 0) {
    cVar5 = FWeakObjectPtr::IsValid(local_18 + 0x388);
    if (cVar5 != '\0') {
      lVar6 = FWeakObjectPtr::Get(local_18 + 0x388);
      lVar6 = *(longlong *)(lVar6 + 0x10);
      lVar7 = FUN_140490f70();
      bVar8 = lVar6 == lVar7;
      goto LAB_14048409e;
    }
  }
  bVar8 = false;
LAB_14048409e:
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return bVar8;
  }
  return bVar8;
}



// FUNCTION 140484130 FUN_140484130 body=420 status=ok
// SIG undefined FUN_140484130(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_140484130(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  int in_stack_ffffffffffffff88;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar9 = (longlong *)0x0;
  if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
    puVar5 = (undefined8 *)param_1[10];
    if ((undefined8 *)param_1[10] == (undefined8 *)0x0) {
      puVar5 = param_1 + 9;
    }
    iVar4 = *(int *)((longlong)puVar5 +
                    ((longlong)*(int *)(param_1 + 0xb) - 1U & (longlong)param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar4 * 0x80 + param_1[2]);
        if ((int)*plVar6 == param_2) {
          if (iVar4 != -1) goto LAB_1404841a0;
          break;
        }
        iVar4 = (int)plVar6[0xf];
      } while (iVar4 != -1);
    }
  }
  plVar6 = plVar9;
LAB_1404841a0:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 != (longlong *)0x0) {
    lVar2 = *plVar8;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    lVar3 = *plVar8;
    puVar5 = (undefined8 *)plVar8[2];
    *(int *)plVar8 = in_stack_ffffffffffffff88;
    *puVar5 = 0;
    puVar5[1] = 0;
    local_50 = *(undefined8 *)plVar8[1];
    *(undefined8 *)plVar8[1] = 0;
    *(int *)plVar8 = (int)lVar2;
    plVar6 = (longlong *)param_1[1];
    plVar7 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar9, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar6[1];
        if (bVar10) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar7 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar9 = (longlong *)*param_1;
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    (**(code **)(*(longlong *)*plVar9 + 0x80))
              ((longlong *)*plVar9,plVar8,&local_50,(int)lVar2,(int)lVar3);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404842e0 FUN_1404842e0 body=11 status=ok
// SIG undefined FUN_1404842e0(void)

void FUN_1404842e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001404842e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 140484300 FUN_140484300 body=709 status=ok
// SIG undefined FUN_140484300(void)

void FUN_140484300(longlong param_1,int param_2,int param_3)

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
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  
  plVar9 = *(longlong **)(param_1 + 8);
  if ((plVar9 != (longlong *)0x0) &&
     ((*(int *)(**(longlong **)(param_1 + 0xd0) + 0xc0) != param_2 ||
      (*(int *)(**(longlong **)(param_1 + 0xd0) + 0xc4) != param_3)))) {
    (**(code **)(*plVar9 + 0x48))(plVar9,param_2);
    FUN_1404854d0(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0x128) = 3;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_38 = *(undefined8 *)(param_1 + 0x58);
      plVar9 = *(longlong **)(param_1 + 0x60);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_48 = param_1;
      local_40 = param_2;
      local_3c = param_3;
      local_30 = plVar9;
      FUN_140466eb0(&local_48,2,local_res8);
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
                    /* WARNING: Could not recover jumptable at 0x000140484429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 8))(plVar9,1);
            return;
          }
        }
      }
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
      *(undefined1 *)(plVar9 + 6) = 0;
      *plVar9 = (longlong)&PTR_FUN_143f4c940;
      plVar9[7] = 0;
      plVar9[2] = param_1;
      *(int *)(plVar9 + 3) = param_2;
      *(int *)((longlong)plVar9 + 0x1c) = param_3;
      plVar9[4] = *(longlong *)(param_1 + 0x58);
      lVar7 = *(longlong *)(param_1 + 0x60);
      plVar9[5] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      lVar7 = plVar9[7];
      piVar1 = (int *)(lVar7 + 0x48);
      if (lVar7 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a640(plVar9,0,0xff,1,0,0);
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
  return;
}



// FUNCTION 1404845d0 FUN_1404845d0 body=417 status=ok
// SIG undefined FUN_1404845d0(void)

void FUN_1404845d0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  
  plVar7 = (longlong *)param_1[1];
  iVar1 = (int)plVar7[1];
  if (iVar1 < param_2) {
    lVar5 = param_1[2];
    uVar8 = param_2 - iVar1;
    *(int *)(plVar7 + 1) = param_2;
    if (*(int *)((longlong)plVar7 + 0xc) < param_2) {
      FScriptArray::ResizeGrow(plVar7,iVar1,(int)lVar5);
    }
    if ((int)((longlong *)param_1[1])[1] == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)((longlong)(iVar1 * (int)param_1[2]) + *(longlong *)param_1[1]);
    }
    if ((*(uint *)(*param_1 + 0x38) >> 9 & 1) == 0) {
      if (0 < (int)uVar8) {
        uVar6 = (ulonglong)uVar8;
        do {
          plVar7 = (longlong *)*param_1;
          if ((*(uint *)(plVar7 + 7) >> 9 & 1) == 0) {
            (**(code **)(*plVar7 + 0x330))();
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,0,(longlong)(*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6]));
          }
          _Dst = (void *)((longlong)_Dst + (longlong)(int)param_1[2]);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(int)(uVar8 * (int)param_1[2]));
    }
  }
  else if (param_2 < iVar1) {
    uVar8 = iVar1 - param_2;
    if ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0) {
      if (iVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (longlong)((int)param_1[2] * param_2) + *plVar7;
      }
      if (0 < (int)uVar8) {
        uVar6 = (ulonglong)uVar8;
        do {
          plVar7 = (longlong *)*param_1;
          if ((~(byte)((ulonglong)plVar7[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar7 + 0x328))(plVar7,lVar5);
          }
          lVar5 = lVar5 + (int)param_1[2];
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        plVar7 = (longlong *)param_1[1];
      }
    }
    iVar2 = (int)param_1[2];
    if (uVar8 != 0) {
      iVar3 = (int)plVar7[1];
      iVar4 = (iVar3 - uVar8) - param_2;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(iVar2 * param_2) + *plVar7),
                   (void *)((longlong)(iVar2 * iVar1) + *plVar7),(longlong)(iVar4 * iVar2));
        iVar3 = (int)plVar7[1];
      }
      *(uint *)(plVar7 + 1) = iVar3 - uVar8;
      FScriptArray::ResizeShrink(plVar7,iVar2);
    }
  }
  return;
}



// FUNCTION 1404847d0 ResizeAllocation body=156 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<128,FDefaultAllocator>::ForElementType<char>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2);
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
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 140484870 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
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
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 140484910 ResizeAllocation body=162 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x100);
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
        *(void **)((longlong)param_1 + 0x100) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 1404849c0 ResizeForCopy body=99 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if ((param_2 != 0) && (iVar1 = FMemory::QuantizeSize((longlong)param_2,0), iVar1 < param_2)) {
    iVar1 = 0x7fffffff;
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 140484a30 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<int,FDefaultAllocator>::ResizeForCopy(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 2,0);
    iVar1 = (int)(uVar2 >> 2);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 2,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 140484aa0 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 3,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 140484b10 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy
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



// FUNCTION 140484b80 ResizeForCopy body=136 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
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



// FUNCTION 140484c10 ResizeForCopy body=136 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1c,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 4);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 140484ca0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FVector,FDefaultAllocator>::ResizeForCopy(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc,0);
    iVar3 = (int)(uVar1 / 0xc);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140484d30 ResizeForCopy body=139 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar2 = 4;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (uVar2 < 5) {
      if (lVar1 == 0) goto LAB_140484da8;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_140484da8;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
LAB_140484da8:
  *(uint *)(param_1 + 0x4c) = uVar2;
  return;
}



// FUNCTION 140484dc0 ResizeGrow body=104 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  iVar2 = FMemory::QuantizeSize(lVar3,0);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar2,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140484e30 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x28,0);
  iVar4 = (int)(uVar3 / 0x28);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x28,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140484ec0 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x38,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 5);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x38,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140484f60 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x48,0);
  iVar4 = (int)(uVar3 / 0x48);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x48,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140484ff0 ResizeGrow body=116 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 << 7,0);
  iVar2 = (int)(uVar3 >> 7);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 7,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140485070 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRotator,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xc,0);
  iVar4 = (int)(uVar3 / 0xc);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140485100 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x68,0);
  iVar4 = (int)(uVar3 / 0x68);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x68,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140485190 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTransform,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x30,0);
  iVar4 = (int)(uVar3 / 0x30);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x30,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140485220 ResizeGrow body=116 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 << 6,0);
  iVar2 = (int)(uVar3 >> 6);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 6,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 1404852a0 FUN_1404852a0 body=140 status=ok
// SIG undefined FUN_1404852a0(void)

void FUN_1404852a0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xc0,0);
  iVar4 = (int)(uVar3 / 0xc0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140485330 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x90,0);
  iVar4 = (int)(uVar3 / 0x90);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x90,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404853c0 ResizeGrow body=120 status=ok
// SIG undefined ResizeGrow(void)

void TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
  iVar2 = (int)(uVar3 >> 3);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 3,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140485440 ResizeGrow body=130 status=ok
// SIG undefined ResizeGrow(void)

void FScriptArray::ResizeGrow(longlong *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)param_3;
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 * uVar5);
  iVar2 = (int)(uVar3 / uVar5);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 * uVar5,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 1404854d0 FUN_1404854d0 body=381 status=ok
// SIG undefined FUN_1404854d0(void)

void FUN_1404854d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
    if (**(longlong **)(param_1 + 0xd0) == 0) {
      lVar7 = 0;
      uVar4 = UTexture2D::GetPrivateStaticClass();
      uVar5 = GetTransientPackage();
      FUN_1417846f0(uVar5,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar4 = FUN_1417985e0(uVar4,uVar5,0,0x40,0,0,0,0,0);
      **(undefined8 **)(param_1 + 0xd0) = uVar4;
      plVar2 = (longlong *)**(longlong **)(param_1 + 0xd0);
      *(undefined4 *)(plVar2 + 0x18) = param_2;
      *(undefined4 *)((longlong)plVar2 + 0xc4) = param_3;
      *(undefined2 *)((longlong)plVar2 + 0xe1) = 0x2502;
      *(byte *)((longlong)plVar2 + 0xda) = *(byte *)((longlong)plVar2 + 0xda) & 0xfe;
      plVar2[0x19] = 0;
      plVar2[0x1a] = 0;
      *(undefined1 *)((longlong)plVar2 + 0x49) = **(undefined1 **)(param_1 + 0xf8);
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
      (**(code **)(*plVar2 + 0x278))(plVar2);
    }
    else {
      FUN_14288b390();
    }
    lVar7 = *(longlong *)(param_1 + 0x138);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0xa4) = param_2;
      *(undefined4 *)(lVar7 + 0xa8) = param_3;
    }
  }
  return;
}



// FUNCTION 140485650 ResizeShrink body=122 status=ok
// SIG undefined ResizeShrink(void)

void TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  iVar1 = (int)param_1[1];
  if ((0x3fff < (uint)(iVar3 - iVar1)) || (iVar1 * 3 < iVar3 * 2)) {
    if (0x40 < (uint)(iVar3 - iVar1)) {
      if (0 < iVar1) {
        iVar1 = FMemory::QuantizeSize((longlong)iVar1,0);
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      goto LAB_1404856a0;
    }
    if (iVar1 == 0) goto LAB_1404856a0;
  }
  iVar1 = iVar3;
LAB_1404856a0:
  if (iVar1 != iVar3) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404856d0 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 2)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 2,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 2);
      }
      goto LAB_14048572d;
    }
    if (iVar3 == 0) goto LAB_14048572d;
  }
  iVar3 = iVar4;
LAB_14048572d:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 2,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485760 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x18) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x18,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x18);
      }
      goto LAB_1404857d6;
    }
    if (iVar4 == 0) goto LAB_1404857d6;
  }
  iVar4 = iVar5;
LAB_1404857d6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x18,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140485810 FUN_140485810 body=137 status=ok
// SIG undefined FUN_140485810(void)

void FUN_140485810(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 3)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 3,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 3);
      }
      goto LAB_14048586d;
    }
    if (iVar3 == 0) goto LAB_14048586d;
  }
  iVar3 = iVar4;
LAB_14048586d:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 3,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404858a0 ResizeShrink body=133 status=ok
// SIG undefined ResizeShrink(void)

void TArray<wchar_t,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) * 2)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 * 2,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 1);
      }
      goto LAB_1404858fa;
    }
    if (iVar3 == 0) goto LAB_1404858fa;
  }
  iVar3 = iVar4;
LAB_1404858fa:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 2,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485930 ResizeShrink body=154 status=ok
// SIG undefined ResizeShrink(void)

void FScriptArray::ResizeShrink(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar3 = (ulonglong)param_2;
  if ((0x3fff < (longlong)(iVar5 - iVar4) * uVar3) || (iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar4 * uVar3);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        iVar4 = (int)(uVar1 / uVar3);
      }
      goto LAB_140485997;
    }
    if (iVar4 == 0) goto LAB_140485997;
  }
  iVar4 = iVar5;
LAB_140485997:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * uVar3,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404859d0 ResizeTo body=87 status=ok
// SIG undefined ResizeTo(void)

void TArray<unsigned_char,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if ((param_2 != 0) && (iVar1 = FMemory::QuantizeSize((longlong)param_2,0), iVar1 < param_2)) {
    iVar1 = 0x7fffffff;
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485a30 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<float,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 2,0);
    iVar1 = (int)(uVar2 >> 2);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 2,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140485aa0 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<void_*,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 3,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140485b10 ResizeTo body=124 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

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
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x38,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140485b90 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x48,0);
    iVar3 = (int)(uVar1 / 0x48);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x48,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485c10 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc,0);
    iVar3 = (int)(uVar1 / 0xc);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485c90 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x30,0);
    iVar3 = (int)(uVar1 / 0x30);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x30,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485d10 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc0,0);
    iVar3 = (int)(uVar1 / 0xc0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140485d90 FUN_140485d90 body=99 status=ok
// SIG undefined FUN_140485d90(void)

void FUN_140485d90(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 3,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140485e00 FUN_140485e00 body=381 status=ok
// SIG undefined FUN_140485e00(void)

void FUN_140485e00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_1 + 300) != 1) {
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar2 = *(longlong **)(param_1 + 0xe8);
    puVar3 = puVar5 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar5 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar5 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
    puVar5[8] = plVar2;
    puVar5[9] = uVar1;
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))(), lVar4 == 0)) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
    if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))(), lVar4 == 0)) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 140485f80 FUN_140485f80 body=248 status=ok
// SIG undefined FUN_140485f80(void)

void FUN_140485f80(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  float *pfVar3;
  longlong lVar4;
  float local_res10;
  float fStackX_14;
  
  if (((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) ||
     (*(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0) == 0)) {
    lVar4 = *(longlong *)(param_1 + 0x4a8);
    bVar2 = false;
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x4a8);
    bVar2 = true;
  }
  if (lVar4 != 0) {
    FUN_1428be4f0();
    FUN_1428beee0(*(undefined8 *)(param_1 + 0x4a8));
  }
  *(bool *)(param_1 + 0x5f2) = lVar4 == 0;
  if (bVar2) {
    plVar1 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0);
    pfVar3 = (float *)(**(code **)(*plVar1 + 0x20))(plVar1,&local_res10);
  }
  else {
    local_res10 = *(float *)(*(longlong *)(param_1 + 0x4a8) + 0x78);
    fStackX_14 = (float)*(undefined4 *)(*(longlong *)(param_1 + 0x4a8) + 0x7c);
    pfVar3 = &local_res10;
  }
  local_res10 = (float)(int)*(undefined8 *)pfVar3;
  fStackX_14 = (float)(int)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
  FUN_14183d4c0(DAT_1469f4590,param_1 + 0x5fc,&local_res10);
  return;
}



// FUNCTION 140486080 FUN_140486080 body=861 status=ok
// SIG undefined FUN_140486080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140486080(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  short *psVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  wchar_t *pwVar11;
  wchar_t *_Source;
  int iVar12;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined8 local_190;
  undefined8 local_188;
  int local_180;
  int local_17c;
  uint local_178 [4];
  short local_168 [128];
  short *local_68;
  short *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar7 = -1;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (param_2[lVar8] != '\0');
  pwVar11 = (wchar_t *)0x0;
  iVar5 = 0;
  local_178[0] = 0;
  cohtml::Library::DecodeURLString(param_2,(uint)lVar8,(char *)0x0,local_178);
  pcVar4 = (char *)operator_new(local_178[0]);
  cohtml::Library::DecodeURLString(param_2,(uint)lVar8,pcVar4,local_178);
  local_68 = (short *)0x0;
  if (pcVar4 == (char *)0x0) {
    local_60 = (short *)0x0;
    local_58 = 0;
  }
  else {
    uVar9 = 0xffffffffffffffff;
    do {
      uVar10 = uVar9;
      uVar9 = uVar10 + 1;
    } while (pcVar4[uVar9] != '\0');
    local_188 = (wchar_t *)((ulonglong)local_188._4_4_ << 0x20);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_188,0x7fffffff,pcVar4,uVar9 & 0xffffffff);
    local_58 = (int)local_188;
    uVar1 = (int)local_188 + 1;
    if (uVar1 < 0x81) {
      if (local_68 != (short *)0x0) {
        lVar8 = 0;
LAB_140486167:
        local_68 = (short *)FMemory::Realloc(local_68,lVar8,0);
      }
    }
    else if ((local_68 != (short *)0x0) || (uVar1 != 0)) {
      lVar8 = (longlong)(int)uVar1 * 2;
      goto LAB_140486167;
    }
    local_188 = local_168;
    if (local_68 != (short *)0x0) {
      local_188 = local_68;
    }
    local_60 = local_188;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_188,uVar1,pcVar4,(int)uVar10 + 2);
  }
  psVar2 = local_60;
  local_188 = (wchar_t *)0x0;
  local_17c = 0;
  iVar12 = 0;
  if ((local_60 == (short *)0x0) || (iVar12 = 0, *local_60 == 0)) {
LAB_140486218:
    if (local_58 != 0) {
      iVar6 = 1;
      goto LAB_14048622b;
    }
  }
  else {
    do {
      lVar7 = lVar7 + 1;
    } while (local_60[lVar7] != 0);
    iVar6 = (int)lVar7 + 1;
    local_180 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    iVar5 = local_17c;
    iVar12 = local_180;
    pwVar11 = local_188;
    FGenericPlatformString::Memcpy(local_188,psVar2,(longlong)iVar6 * 2);
    if (iVar12 == 0) goto LAB_140486218;
  }
  iVar6 = 0;
LAB_14048622b:
  local_198 = pwVar11;
  local_190._0_4_ = iVar12;
  local_190._4_4_ = iVar5;
  if (iVar5 < iVar6 + iVar12 + local_58) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
  }
  cVar3 = FString::StartsWith(&local_198,L"http://",1);
  if ((cVar3 == '\0') && (cVar3 = FString::StartsWith(&local_198,L"https://",1), cVar3 == '\0')) {
    pwVar11 = local_198 + (int)local_190;
    do {
      if (pwVar11 == local_198) goto LAB_1404862b0;
      pwVar11 = pwVar11 + -1;
    } while (*pwVar11 != L'?');
    iVar5 = (int)((longlong)pwVar11 - (longlong)local_198 >> 1);
    if (iVar5 == -1) {
LAB_1404862b0:
      *param_1 = local_198;
      *(int *)(param_1 + 1) = (int)local_190;
      *(int *)((longlong)param_1 + 0xc) = local_190._4_4_;
    }
    else {
      pwVar11 = (wchar_t *)0x0;
      iVar12 = 0;
      if ((int)local_190 == 0) {
        _Source = L"";
        iVar6 = iVar12;
      }
      else {
        _Source = local_198;
        iVar6 = (int)local_190 + -1;
      }
      if ((-1 < iVar5) && (iVar12 = iVar6, iVar5 < iVar6)) {
        iVar12 = iVar5;
      }
      local_188 = (wchar_t *)0x0;
      local_17c = 0;
      iVar5 = iVar12 + 1;
      if (iVar12 == 0) {
        iVar5 = 0;
      }
      local_180 = iVar5;
      if ((0 < iVar5) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0), iVar5 = local_180,
         pwVar11 = local_188, 0 < local_180)) {
        wcsncpy(local_188,_Source,(longlong)iVar12);
        pwVar11[iVar12] = L'\0';
      }
      if (local_198 != (wchar_t *)0x0) {
        FMemory::Free(local_198);
      }
      *param_1 = pwVar11;
      *(int *)(param_1 + 1) = iVar5;
      *(int *)((longlong)param_1 + 0xc) = local_17c;
    }
  }
  else {
    *param_1 = local_198;
    *(int *)(param_1 + 1) = (int)local_190;
    *(int *)((longlong)param_1 + 0xc) = local_190._4_4_;
  }
  local_198 = (wchar_t *)0x0;
  local_190 = 0;
  if (local_68 != (short *)0x0) {
    FMemory::Free();
  }
  FMemory::operator_delete(pcVar4);
  return param_1;
}



// FUNCTION 1404863e0 FUN_1404863e0 body=456 status=ok
// SIG undefined FUN_1404863e0(void)

void FUN_1404863e0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  longlong local_28 [2];
  
  plVar3 = (longlong *)FDateTime::Now(local_res10);
  iVar7 = 0;
  lVar2 = *plVar3;
  plVar3 = (longlong *)FDateTime::FDateTime(local_res18,0x7b2,1,1,0,0,0,0);
  FString::PrintfImpl(&local_38,L"CohtmlCaptureFrame-%lld.rend",(lVar2 - *plVar3) / 10000);
  puVar4 = (undefined8 *)FUN_14167d0d0(local_28);
  iVar1 = *(int *)(puVar4 + 1);
  local_58 = (undefined2 *)*puVar4;
  *puVar4 = 0;
  local_50._0_4_ = *(int *)(puVar4 + 1);
  local_50._4_4_ = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  if (local_50._4_4_ < (int)((8 - (uint)(iVar1 != 0)) + (int)local_50)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
  }
  FString::PathAppend(&local_58,L"Cohtml",6);
  iVar1 = local_50._4_4_;
  if (local_30 != 0) {
    iVar7 = local_30 + -1;
  }
  if (((int)local_50 != 0) || (iVar5 = 2, iVar7 == -1)) {
    iVar5 = 1;
  }
  iVar5 = iVar5 + (int)local_50;
  local_48 = local_58;
  local_58 = (undefined2 *)0x0;
  local_40 = (int)local_50;
  local_3c = local_50._4_4_;
  local_50 = 0;
  if (iVar1 < iVar5 + iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FString::PathAppend(&local_48,local_38,iVar7);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar6 = local_48;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar6,0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2[1],param_2[2]);
  }
  (**(code **)*param_2)(param_2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)*plVar3)(plVar3,1);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404865b0 FUN_1404865b0 body=475 status=ok
// SIG undefined FUN_1404865b0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1404865b0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res18;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar7 = param_1 + 0x48;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar5 * 0x80 + *(longlong *)(param_1 + 0x10));
        if (*piVar9 == param_2) {
          if (iVar5 != -1) goto LAB_140486620;
          break;
        }
        iVar5 = piVar9[0x1e];
      } while (iVar5 != -1);
    }
  }
  piVar9 = (int *)0x0;
LAB_140486620:
  piVar8 = piVar9 + 2;
  if (piVar9 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  if (piVar8 != (int *)0x0) {
    iVar5 = *piVar8;
    uVar2 = **(undefined8 **)(piVar8 + 4);
    uVar3 = (*(undefined8 **)(piVar8 + 4))[1];
    uVar4 = **(undefined8 **)(piVar8 + 2);
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar7 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar7 = param_1 + 0x98;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)param_2) * 4);
      if (iVar6 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x60));
          if (*piVar9 == param_2) {
            if ((iVar6 != -1) && (piVar9 != (int *)0x0)) goto LAB_140486730;
            break;
          }
          iVar6 = piVar9[0x1e];
        } while (iVar6 != -1);
      }
    }
    local_res18 = local_res10;
    local_res10[0] = param_2;
    FUN_14044c430(param_1 + 0x60,local_res8,&local_res18,0);
    piVar9 = (int *)((longlong)local_res8[0] * 0x80 + *(longlong *)(param_1 + 0x60));
LAB_140486730:
    piVar9[2] = iVar5;
    puVar1 = *(undefined8 **)(piVar9 + 6);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    **(undefined8 **)(piVar9 + 4) = uVar4;
  }
  return;
}



// FUNCTION 140486790 FUN_140486790 body=460 status=ok
// SIG undefined FUN_140486790(void)

void FUN_140486790(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong local_res10 [3];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar3 = (longlong *)(param_1 + 0x110);
    plVar11 = (longlong *)0x0;
    if (*plVar3 != 0) {
      puVar1 = (ulonglong *)(*plVar3 + 8);
      LOCK();
      uVar6 = *puVar1;
      if (uVar6 == 0) {
        *puVar1 = 0;
        uVar6 = 0;
      }
      UNLOCK();
      if ((uVar6 >> 0x1a & 1) == 0) {
        return;
      }
    }
    pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar8 = TlsGetValue(*pDVar7);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = 0;
        plVar8[1] = 0;
        *(undefined4 *)(plVar8 + 2) = 0;
        plVar11 = plVar8;
      }
      TlsSetValue(*pDVar7,plVar11);
      plVar8 = plVar11;
    }
    plVar11 = (longlong *)plVar8[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*plVar8;
      if (plVar11 == (longlong *)0x0) {
        lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
        plVar8[1] = lVar9;
        if (lVar9 == 0) {
          puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar10;
          lVar9 = 0x1f;
          do {
            puVar4 = puVar10 + 0x20;
            *puVar10 = puVar4;
            lVar9 = lVar9 + -1;
            puVar10 = puVar4;
          } while (lVar9 != 0);
          *puVar4 = 0;
        }
        plVar11 = (longlong *)plVar8[1];
        iVar12 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar12 = 0x20;
        plVar8[1] = (longlong)plVar11;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar12 = (int)plVar8[2];
    }
    plVar8[1] = *plVar11;
    *(int *)(plVar8 + 2) = iVar12 + -1;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    local_res10[1] = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f4be38;
    *(undefined1 *)(plVar11 + 3) = 0;
    plVar11[4] = 0;
    plVar11[2] = param_1;
    lVar9 = plVar11[4];
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
      UNLOCK();
    }
    local_res10[0] = lVar9;
    FUN_14048b000(plVar11,0,0xff,1);
    if (plVar3 == local_res10) {
      if (lVar9 == 0) {
        return;
      }
      LOCK();
      piVar2 = (int *)(lVar9 + 0x48);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar5 = local_res10[0];
    }
    else {
      lVar5 = *plVar3;
      *plVar3 = lVar9;
      if (lVar5 == 0) {
        return;
      }
      LOCK();
      piVar2 = (int *)(lVar5 + 0x48);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    if (iVar12 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 140486980 FUN_140486980 body=8 status=ok
// SIG undefined FUN_140486980(void)

void FUN_140486980(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return;
}



// FUNCTION 140486990 FUN_140486990 body=463 status=ok
// SIG undefined FUN_140486990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140486990(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_198 [32];
  short *local_178;
  longlong local_170;
  ulonglong local_168;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar4 = 0xffffffffffffffff;
  local_58 = (short *)0x0;
  uVar5 = uVar4;
  if (param_2 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
  }
  else {
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(uVar5 + param_2) != '\0');
    local_178 = (short *)((ulonglong)local_178 & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_178,0x7fffffff,param_2,uVar5 & 0xffffffff);
    local_48 = (int)local_178;
    uVar3 = (int)local_178 + 1;
    psVar2 = (short *)0x0;
    if ((0x80 < uVar3) && (psVar2 = (short *)0x0, uVar3 != 0)) {
      psVar2 = (short *)FMemory::Realloc(0,(longlong)(int)uVar3 * 2,0);
      local_58 = psVar2;
    }
    local_178 = local_158;
    if (psVar2 != (short *)0x0) {
      local_178 = psVar2;
    }
    local_50 = local_178;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_178,uVar3,param_2,(int)uVar6 + 2);
  }
  psVar2 = local_50;
  local_170 = 0;
  local_168 = 0;
  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
    do {
      uVar4 = uVar4 + 1;
    } while (local_50[uVar4] != 0);
    uVar3 = (int)uVar4 + 1;
    local_168 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
    }
    FGenericPlatformString::Memcpy(local_170,psVar2,(longlong)(int)uVar3 * 2);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_170);
  if (local_170 != 0) {
    FMemory::Free();
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140486b60 FUN_140486b60 body=184 status=ok
// SIG undefined FUN_140486b60(void)

undefined1 * FUN_140486b60(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  char local_res10 [24];
  
  local_res10[0] = '\0';
  (**(code **)(*param_2 + 0xb8))(param_2,param_3,0,local_res10);
  if (local_res10[0] == '\0') {
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  return param_1;
}



// FUNCTION 140486c20 FUN_140486c20 body=510 status=ok
// SIG undefined FUN_140486c20(void)

undefined1 * FUN_140486c20(undefined1 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char local_res10 [8];
  
  (**(code **)(*param_2 + 0xa8))(param_2,param_3,1,0,local_res10);
  uVar6 = 0;
  if ((local_res10[0] != '\0') || (*(int *)(param_3 + 0xc) == 0)) {
    plVar2 = *(longlong **)(param_4 + 0x10);
    uVar5 = plVar2[1] - *plVar2 >> 3;
    if (uVar5 != 0) {
      do {
        plVar3 = *(longlong **)(*plVar2 + uVar6 * 8);
        if ((*(char *)((longlong)plVar3 + 0xc) != '\0') && (1 < (int)plVar3[1] - 2U)) {
          *(undefined2 *)((longlong)plVar3 + 0xd) = 0;
          *(undefined1 *)((longlong)plVar3 + 0xf) = 0;
          iVar1 = *(int *)(param_3 + 0xc);
          if (iVar1 == 0) {
            cVar4 = FUN_14046b960(plVar3,param_3,1);
            if (cVar4 != '\0') {
              (**(code **)(*plVar3 + 0x10))(plVar3,plVar3[0x24],plVar3[0x25] - plVar3[0x24] >> 5);
              *(undefined1 *)((longlong)plVar3 + 0xe) = 1;
            }
          }
          else if (iVar1 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,param_3,1);
            *(undefined1 *)((longlong)plVar3 + 0xd) = 1;
          }
          else if ((iVar1 == 2) && (cVar4 = FUN_14046b960(plVar3,param_3,1), cVar4 != '\0')) {
            (**(code **)(*plVar3 + 0x18))(plVar3,plVar3[0x24],plVar3[0x25] - plVar3[0x24] >> 5);
            *(undefined1 *)((longlong)plVar3 + 0xf) = 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  if (local_res10[0] == '\0') {
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  return param_1;
}



// FUNCTION 140486e20 FUN_140486e20 body=31 status=ok
// SIG undefined FUN_140486e20(void)

void FUN_140486e20(longlong param_1)

{
  FUN_14234e7b0();
  FUN_14047ea60(*(undefined8 *)(param_1 + 0x200));
  return;
}



// FUNCTION 140486e50 Serialize body=125 status=ok
// SIG undefined Serialize(void)

void FMemoryReader::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0) && (-1 < (char)*(byte *)(param_1 + 0x28))) {
    lVar1 = (longlong)(int)(*(longlong **)(param_1 + 0x98))[1];
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (lVar1 <= *(longlong *)(param_1 + 0xa0)) {
      lVar2 = lVar1;
    }
    if ((longlong)(*(longlong *)(param_1 + 0x90) + param_3) <= lVar2) {
      ::_guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)(int)*(longlong *)(param_1 + 0x90) +
                                 **(longlong **)(param_1 + 0x98)),param_3);
      *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
      return;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  }
  return;
}



// FUNCTION 140486ed0 Serialize body=327 status=ok
// SIG undefined Serialize(void)

void FMemoryWriter::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong local_28 [2];
  
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 8);
  lVar5 = (*(longlong *)(param_1 + 0x90) - lVar3) + param_3;
  if (0 < lVar5) {
    if (0x7ffffffe < lVar3 + lVar5) {
      puVar2 = (undefined8 *)FName::ToString(param_1 + 0xa0,local_28);
      puVar4 = &DAT_143f3eda8;
      if (*(int *)(puVar2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar2;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2a,
                 L"FMemoryWriter does not support data larger than 2GB. Archive name: %s.",puVar6);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      puVar2 = (undefined8 *)FName::ToString(param_1 + 0xa0,local_28);
      if (*(int *)(puVar2 + 1) != 0) {
        puVar4 = (undefined2 *)*puVar2;
      }
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x2a,
                 L"FMemoryWriter does not support data larger than 2GB. Archive name: %s.",puVar4);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x98);
    iVar1 = *(int *)(lVar3 + 8) + (int)lVar5;
    *(int *)(lVar3 + 8) = iVar1;
    if (*(int *)(lVar3 + 0xc) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
    }
  }
  if (param_3 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(int *)(param_1 + 0x90) + **(longlong **)(param_1 + 0x98)),
               param_2,param_3);
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  return;
}



// FUNCTION 140487020 FUN_140487020 body=119 status=ok
// SIG undefined FUN_140487020(void)

void FUN_140487020(longlong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  (**(code **)(*param_1 + 0x50))
            (param_1,param_2,
             (longlong)((ulonglong)((uint)(param_3 + 7 >> 0x3f) & 7) + param_3 + 7) >> 3);
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (uVar3 = (ulonglong)((uint)(param_3 >> 0x3f) & 7), lVar2 = param_3 + uVar3,
     ((uint)lVar2 & 7) != uVar3)) {
    pbVar1 = (byte *)((lVar2 >> 3) + param_2);
    *pbVar1 = *pbVar1 & ('\x01' << ((byte)param_3 & 7)) - 1U;
  }
  return;
}



// FUNCTION 1404870b0 FUN_1404870b0 body=62 status=ok
// SIG undefined FUN_1404870b0(void)

void FUN_1404870b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,4);
  }
  return;
}



// FUNCTION 140487110 FUN_140487110 body=240 status=ok
// SIG undefined FUN_140487110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140487110(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  plVar2 = (longlong *)(param_1 + 0x2f0);
  uStack_40 = (longlong *)param_2[1];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_40 + 0xc) = *(int *)((longlong)uStack_40 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_48 != plVar2) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    lVar3 = *plVar2;
    plVar4 = *(longlong **)(param_1 + 0x2f8);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)plVar2 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x2f4) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x2f8) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x2fc) = uStack_40._4_4_;
    local_48 = lVar3;
    uStack_40 = plVar4;
  }
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_40 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*uStack_40 + 8))(uStack_40,1);
    }
  }
  if ((*plVar2 != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) goto LAB_1404871c3;
  }
  FUN_1404612a0(param_1);
LAB_1404871c3:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return;
}



// FUNCTION 140487200 FUN_140487200 body=241 status=ok
// SIG undefined FUN_140487200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140487200(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uStack_30 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_30 + 0xc) = *(int *)((longlong)uStack_30 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_38 != param_1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    lVar3 = *param_1;
    plVar2 = (longlong *)param_1[1];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    local_38 = lVar3;
    uStack_30 = plVar2;
  }
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_30 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*uStack_30 + 8))();
    }
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    piVar1 = (int *)(param_1[1] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_1404872b4;
  }
  FUN_140467620(param_1 + 2,0);
LAB_1404872b4:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return;
}



// FUNCTION 140487300 FUN_140487300 body=543 status=ok
// SIG undefined FUN_140487300(void)

void FUN_140487300(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
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
  
  plVar1 = (longlong *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x328) = 1;
  FSoundAttenuationSettings::operator=(param_1 + 0x80);
  uVar3 = *(uint *)(param_1 + 0x58);
  puVar2 = (uint *)(param_1 + 0x40);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
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
      if (bVar5) goto LAB_1404873ed;
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
LAB_1404873ed:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x58);
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
    puVar10 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1404874b3;
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
LAB_1404874b3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    FUN_14232cd60(*(undefined8 *)(*plVar1 + 8 + (longlong)(int)uStack_4c * 0x28),param_2);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 140487520 FUN_140487520 body=1453 status=ok
// SIG undefined FUN_140487520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140487520(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_4c8 [32];
  ulonglong local_4a8;
  undefined4 local_4a0;
  undefined1 local_498;
  undefined1 local_497 [7];
  longlong *local_490;
  longlong local_488;
  longlong *local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  longlong local_468;
  longlong *local_460;
  longlong local_458;
  longlong *local_450;
  longlong local_448;
  longlong *local_440;
  longlong local_438;
  longlong *local_430;
  undefined1 local_428 [8];
  undefined8 local_420;
  undefined8 local_418;
  undefined1 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  uint local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_358 [8];
  undefined8 local_350;
  code *local_348;
  longlong local_338 [4];
  longlong *local_318;
  int local_308;
  undefined1 local_2f8 [352];
  undefined1 local_198 [352];
  ulonglong local_38;
  
  lVar6 = DAT_1469f4590;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  bVar3 = false;
  bVar10 = false;
  local_490 = (longlong *)((ulonglong)local_490 & 0xffffffff00000000);
  if (param_1[0x93] == 0) {
    return;
  }
  if (param_2 == '\0') {
    cVar4 = FUN_140472260();
    if (cVar4 == '\0') {
      return;
    }
    FUN_14189cb10(lVar6,&local_488);
    FWidgetPath::FWidgetPath(local_2f8);
    plVar5 = local_480;
    plVar9 = local_490;
    if (local_488 != 0) {
      local_497[0] = DAT_1464b9ee8;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_480 + 1) = (int)local_480[1] + 1;
        UNLOCK();
      }
      local_458 = local_488;
      local_450 = local_480;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_480 + 1) = (int)local_480[1] + 1;
        UNLOCK();
      }
      bVar3 = true;
      cVar4 = FUN_14189ada0(lVar6,&local_458,local_2f8,local_497);
      plVar9 = plVar5;
      if (cVar4 != '\0') {
        bVar10 = true;
        goto LAB_14048789c;
      }
    }
    bVar10 = false;
LAB_14048789c:
    if ((bVar3) && (plVar9 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (bVar10) {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar8 = FUN_142874910(DAT_146b17150,uVar7);
      plVar5 = local_480;
      *(undefined1 *)(lVar8 + 0x6c1) = 0;
      local_374 = local_374 & 0xffffff00;
      local_428[0] = 1;
      local_420 = 0;
      local_418 = 0;
      local_408 = 0;
      local_400 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0x20702;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_480 + 1) = (int)local_480[1] + 1;
        UNLOCK();
      }
      local_448 = local_488;
      local_440 = local_480;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_480 + 1) = (int)local_480[1] + 1;
        UNLOCK();
      }
      FUN_14185b9a0(local_428,&local_448,0,0);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      plVar5 = local_480;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_480 + 1) = (int)local_480[1] + 1;
        UNLOCK();
      }
      local_438 = local_488;
      local_430 = local_480;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_480 + 1) = (int)local_480[1] + 1;
        UNLOCK();
      }
      FUN_14048f0a0(local_428,&local_438);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_374 = local_374 | 0x40;
      local_4a0 = 0;
      local_4a8 = 0;
      FUN_1418b5000(lVar6,local_2f8,local_428,0);
      FUN_140438c20(local_428);
    }
    FUN_140458830(local_2f8);
    if (local_480 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = local_480 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_480)(local_480);
    LOCK();
    piVar1 = (int *)((longlong)local_480 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*local_480 + 8))(local_480,1);
    return;
  }
  FWidgetPath::FWidgetPath(local_198);
  lVar8 = param_1[0x93];
  plVar5 = local_490;
  if (lVar8 != 0) {
    plVar5 = (longlong *)param_1[0x94];
    local_498 = DAT_1464b9ee8;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
    local_478 = lVar8;
    uStack_470 = plVar5;
    cVar4 = FUN_14189ada0(lVar6,&local_478,local_198,&local_498);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_1404875f8;
    }
  }
  bVar3 = false;
LAB_1404875f8:
  if ((bVar10) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar5 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (bVar3) {
    FUN_1418be170(lVar6);
    local_468 = param_1[0x93];
    local_460 = (longlong *)param_1[0x94];
    if (local_460 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_460 + 1) = (int)local_460[1] + 1;
      UNLOCK();
    }
    FUN_1418c0b40(lVar6,&local_468,2);
    plVar5 = local_460;
    if (local_460 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_460 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_460)(local_460);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          FUN_140458830(local_198);
          return;
        }
      }
    }
  }
  else {
    local_478 = lVar6;
    uStack_470 = param_1;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_143f4cff8;
      *(undefined4 *)(plVar5 + 1) = (undefined4)local_478;
      *(undefined4 *)((longlong)plVar5 + 0xc) = local_478._4_4_;
      *(undefined4 *)(plVar5 + 2) = (undefined4)uStack_470;
      *(undefined4 *)((longlong)plVar5 + 0x14) = uStack_470._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f4d040;
    }
    local_490 = (longlong *)0x0;
    uVar7 = AActor::GetWorldTimerManager(param_1);
    local_368 = 0;
    local_360 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_368);
    }
    FWeakObjectPtr::operator=(local_358,0);
    local_4a0 = 0xbf800000;
    local_4a8 = local_4a8 & 0xffffffffffffff00;
    local_350 = 0;
    local_318 = (longlong *)0x0;
    local_308 = 0;
    local_348 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,&local_490,&local_368,0x3d072b02);
    if (local_308 != 0) {
      plVar9 = local_338;
      if (local_318 != (longlong *)0x0) {
        plVar9 = local_318;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_318 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_368);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar6 = FMemory::Realloc(plVar5,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  FUN_140458830(local_198);
  return;
}



// FUNCTION 140487ad0 FUN_140487ad0 body=17 status=ok
// SIG undefined FUN_140487ad0(void)

void FUN_140487ad0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (lVar1 == 0) {
    return;
  }
  cVar3 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                    (lVar1 + 0x388,lVar1 + 0x390);
  if (cVar3 != '\0') {
    cVar3 = FWeakObjectPtr::IsValid(lVar1 + 0x390);
    if (cVar3 != '\0') {
      lVar2 = FWeakObjectPtr::Get(lVar1 + 0x390);
      if (*(longlong *)(*(longlong *)(lVar2 + 0x200) + 8) != 0) {
        cVar3 = *(char *)(lVar1 + 0x3d8);
        lVar2 = FWeakObjectPtr::Get(lVar1 + 0x390);
        lVar4 = lVar1 + 0x39c;
        if (cVar3 == '\0') {
          lVar4 = 0;
        }
        FUN_140461b60(*(undefined8 *)(*(longlong *)(lVar2 + 0x200) + 8),lVar4);
        cVar3 = *(char *)(lVar1 + 0x3d9);
        *(undefined1 *)(lVar1 + 0x3d8) = 0;
        lVar2 = FWeakObjectPtr::Get(lVar1 + 0x390);
        lVar4 = lVar1 + 0x3c0;
        if (cVar3 == '\0') {
          lVar4 = 0;
        }
        FUN_140461bf0(*(undefined8 *)(*(longlong *)(lVar2 + 0x200) + 8),lVar4);
        *(undefined1 *)(lVar1 + 0x3d9) = 0;
      }
    }
  }
  FWeakObjectPtr::operator=(lVar1 + 0x388,param_2);
  return;
}



// FUNCTION 140487b20 FUN_140487b20 body=700 status=ok
// SIG undefined FUN_140487b20(void)

void FUN_140487b20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res20 [8];
  longlong *local_88;
  int local_80;
  int local_7c;
  longlong *local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  puVar4 = (undefined8 *)FName::FName(local_res20,"CohtmlPlugin",1);
  uVar1 = *puVar4;
  uVar5 = FUN_14168dc80();
  FUN_141690010(uVar5,uVar1);
  if (((DAT_146850608 != 0) && (DAT_146850600 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*DAT_146850600 + 0x18))(), cVar3 != '\0')) {
    plVar6 = (longlong *)0x0;
    pcVar2 = *(char **)(param_3 + 0xd0);
    lVar11 = -1;
    iVar10 = 0;
    local_78 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_88 = (longlong *)0x0;
    local_7c = 0;
    plVar12 = plVar6;
    iVar8 = iVar10;
    if ((pcVar2 != (char *)0x0) && (lVar9 = lVar11, plVar12 = (longlong *)0x0, *pcVar2 != '\0')) {
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar2[lVar9] != '\0');
      iVar7 = (int)lVar9 + 1;
      local_80 = iVar7;
      if (0 < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      }
      iVar8 = local_80;
      plVar12 = local_88;
      FGenericPlatformString::Convert<char,wchar_t>(local_88,iVar7,pcVar2,iVar7,0x3f);
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    local_68 = *(undefined4 *)(param_3 + 0xd8);
    uStack_64 = *(undefined4 *)(param_3 + 0xdc);
    uStack_60 = *(undefined4 *)(param_3 + 0xe0);
    uStack_5c = *(undefined4 *)(param_3 + 0xe4);
    pcVar2 = *(char **)(param_3 + 0xf8);
    local_6c = local_7c;
    iVar7 = 0;
    local_78 = plVar12;
    local_70 = iVar8;
    if (pcVar2 != (char *)0x0) {
      local_88 = (longlong *)0x0;
      local_7c = 0;
      lVar9 = lVar11;
      plVar12 = plVar6;
      if (*pcVar2 != '\0') {
        do {
          lVar9 = lVar9 + 1;
        } while (pcVar2[lVar9] != '\0');
        iVar8 = (int)lVar9 + 1;
        local_80 = iVar8;
        if (0 < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        iVar10 = local_80;
        plVar12 = local_88;
        FGenericPlatformString::Convert<char,wchar_t>(local_88,iVar8,pcVar2,iVar8,0x3f);
      }
      iVar8 = local_7c;
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_50 = CONCAT44(iVar8,iVar10);
      local_58 = plVar12;
    }
    pcVar2 = *(char **)(param_3 + 0x100);
    if (pcVar2 != (char *)0x0) {
      local_88 = (longlong *)0x0;
      local_7c = 0;
      plVar12 = plVar6;
      iVar8 = iVar7;
      if (*pcVar2 != '\0') {
        do {
          lVar11 = lVar11 + 1;
        } while (pcVar2[lVar11] != '\0');
        iVar10 = (int)lVar11 + 1;
        local_80 = iVar10;
        if (0 < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        iVar8 = local_7c;
        iVar7 = local_80;
        plVar12 = local_88;
        FGenericPlatformString::Convert<char,wchar_t>(local_88,iVar10,pcVar2,iVar10,0x3f);
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_40 = CONCAT44(iVar8,iVar7);
      local_48 = plVar12;
    }
    if (DAT_146850608 != 0) {
      plVar6 = DAT_146850600;
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2,&local_78);
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140487e30 FUN_140487e30 body=807 status=ok
// SIG undefined FUN_140487e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140487e30(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  local_c8 = param_2[4];
  fStack_c4 = param_2[5];
  fStack_c0 = param_2[6];
  fStack_bc = param_2[7];
  local_b8 = param_2[8];
  fStack_b4 = param_2[9];
  fStack_b0 = param_2[10];
  fStack_ac = param_2[0xb];
  local_a8 = *(undefined8 *)(param_2 + 0xc);
  uStack_a0 = *(undefined8 *)(param_2 + 0xe);
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fStack_cc = param_2[3];
  fVar16 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar15 = local_c8 * local_c8 + fStack_c4 * fStack_c4 + fStack_c0 * fStack_c0;
  fVar14 = local_b8 * local_b8 + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0;
  if (fVar16 <= 1e-08) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = SQRT(fVar16);
    fVar3 = 1.0 / fVar16;
    fVar11 = fVar11 * fVar3;
    fVar12 = fVar12 * fVar3;
    fVar13 = fVar13 * fVar3;
  }
  if (fVar15 <= 1e-08) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = SQRT(fVar15);
    fVar3 = 1.0 / fVar15;
    local_c8 = local_c8 * fVar3;
    fStack_c4 = fStack_c4 * fVar3;
    fStack_c0 = fStack_c0 * fVar3;
  }
  fVar3 = 0.0;
  if (1e-08 < fVar14) {
    fVar3 = SQRT(fVar14);
    fVar14 = 1.0 / fVar3;
    local_b8 = local_b8 * fVar14;
    fStack_b4 = fStack_b4 * fVar14;
    fStack_b0 = fStack_b0 * fVar14;
  }
  auVar5._4_4_ = fVar15;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar5;
  local_d8 = fVar11;
  fStack_d4 = fVar12;
  fStack_d0 = fVar13;
  fVar14 = (float)FMatrix::Determinant(param_2);
  if (fVar14 < 0.0) {
    fVar15 = fVar15 * fRam0000000146850954;
    fVar3 = fVar3 * fRam0000000146850958;
    fVar14 = fRam000000014685095c * 0.0;
    local_d8 = -fVar11;
    fStack_d4 = -fVar12;
    fStack_d0 = -fVar13;
    param_1[8] = fVar16 * _DAT_146850950;
    param_1[9] = fVar15;
    param_1[10] = fVar3;
    param_1[0xb] = fVar14;
  }
  FQuat::FQuat(&local_e8,&local_d8);
  fVar15 = fRam000000014685093c;
  fVar13 = fRam0000000146850938;
  fVar12 = fRam0000000146850934;
  fVar11 = _DAT_146850930;
  *param_1 = local_e8;
  param_1[1] = fStack_e4;
  param_1[2] = fStack_e0;
  param_1[3] = fStack_dc;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_2 + 0xc);
  *(undefined1 (*) [16])(param_1 + 4) = auVar1;
  auVar4._0_4_ = local_e8 * local_e8 + fStack_e0 * fStack_e0;
  auVar4._4_4_ = fStack_e4 * fStack_e4 + fStack_dc * fStack_dc;
  auVar4._8_4_ = fStack_e0 * fStack_e0 + local_e8 * local_e8;
  auVar4._12_4_ = fStack_dc * fStack_dc + fStack_e4 * fStack_e4;
  fVar7 = auVar4._4_4_ + auVar4._0_4_;
  fVar8 = auVar4._8_4_ + auVar4._4_4_;
  fVar9 = auVar4._12_4_ + auVar4._8_4_;
  fVar10 = auVar4._0_4_ + auVar4._12_4_;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar7;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar10;
  auVar5 = rsqrtps(auVar4,auVar2);
  fVar14 = auVar5._0_4_;
  fVar16 = auVar5._4_4_;
  fVar3 = auVar5._8_4_;
  fVar6 = auVar5._12_4_;
  fVar14 = (fVar11 - fVar14 * fVar14 * fVar7 * fVar11) * fVar14 + fVar14;
  fVar16 = (fVar12 - fVar16 * fVar16 * fVar8 * fVar12) * fVar16 + fVar16;
  fVar3 = (fVar13 - fVar3 * fVar3 * fVar9 * fVar13) * fVar3 + fVar3;
  fVar6 = (fVar15 - fVar6 * fVar6 * fVar10 * fVar15) * fVar6 + fVar6;
  fVar12 = (float)(((uint)(((fVar12 - fVar16 * fVar16 * fVar8 * fVar12) * fVar16 + fVar16) *
                          fStack_e4) ^ uRam0000000146850924) &
                   -(uint)(fRam0000000146850944 <= fVar8) ^ uRam0000000146850924);
  fVar13 = (float)(((uint)(((fVar13 - fVar3 * fVar3 * fVar9 * fVar13) * fVar3 + fVar3) * fStack_e0)
                   ^ uRam0000000146850928) & -(uint)(fRam0000000146850948 <= fVar9) ^
                  uRam0000000146850928);
  fVar15 = (float)(((uint)(((fVar15 - fVar6 * fVar6 * fVar10 * fVar15) * fVar6 + fVar6) * fStack_dc)
                   ^ uRam000000014685092c) & -(uint)(fRam000000014685094c <= fVar10) ^
                  uRam000000014685092c);
  *param_1 = (float)(((uint)(((fVar11 - fVar14 * fVar14 * fVar7 * fVar11) * fVar14 + fVar14) *
                            local_e8) ^ _DAT_146850920) & -(uint)(_DAT_146850940 <= fVar7) ^
                    _DAT_146850920);
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar15;
  return;
}



// FUNCTION 140488160 FUN_140488160 body=25 status=ok
// SIG undefined FUN_140488160(void)

void FUN_140488160(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4a8) = param_2;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    *(char *)(*(longlong *)(param_1 + 0x498) + 0x376) = (char)param_2;
  }
  return;
}



// FUNCTION 140488180 FUN_140488180 body=7 status=ok
// SIG undefined FUN_140488180(void)

void FUN_140488180(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d9) = param_2;
  return;
}



// FUNCTION 140488190 FUN_140488190 body=25 status=ok
// SIG undefined FUN_140488190(void)

void FUN_140488190(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x153) = param_2;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x100) + 0x2d9) = param_2;
  }
  return;
}



// FUNCTION 1404881b0 FUN_1404881b0 body=19 status=ok
// SIG undefined FUN_1404881b0(void)

void FUN_1404881b0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x498) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x498) + 0x377) = param_2;
  }
  return;
}



// FUNCTION 1404881d0 SetCount body=4 status=ok
// SIG void SetCount(WriteBytesMem * this, long param_1)

/* public: virtual void __cdecl AK::WriteBytesMem::SetCount(long) __ptr64 */

void __thiscall AK::WriteBytesMem::SetCount(WriteBytesMem *this,long param_1)

{
                    /* 0x4881d0  398  ?SetCount@WriteBytesMem@AK@@UEAAXJ@Z */
  *(long *)(this + 0x18) = param_1;
  return;
}



// FUNCTION 1404881e0 FUN_1404881e0 body=3164 status=ok
// SIG undefined FUN_1404881e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404881e0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
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
  float local_288;
  float local_278;
  float local_268;
  float fStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
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
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [12];
  float local_17c;
  float local_178;
  undefined1 local_168 [12];
  float local_15c;
  float local_158;
  undefined1 local_148 [16];
  undefined4 local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
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
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  plVar1 = (longlong *)param_2[0x32];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x4a8))(param_2,local_188,&DAT_1468b5b70);
    fVar22 = *(float *)(param_3 + 0x74);
    local_1d8 = *(float *)(param_3 + 0x78);
    local_1a8 = *(float *)(param_3 + 0x7c);
    fVar23 = *(float *)(param_3 + 0x84);
    local_1c8 = *(float *)(param_3 + 0x88);
    local_198 = *(float *)(param_3 + 0x8c);
    local_1f8 = *(float *)(param_3 + 100);
    uStack_1e0 = *(undefined4 *)(param_3 + 0x68);
    uStack_260 = *(undefined4 *)(param_3 + 0x6c);
    fStack_200 = *(float *)(param_3 + 0xa8);
    local_208 = *(float *)(param_3 + 0xac) * 0.5 + *(float *)(param_3 + 0xa0);
    fStack_204 = *(float *)(param_3 + 0xb0) * 0.5 + *(float *)(param_3 + 0xa4);
    fVar8 = *(float *)(param_3 + 0xac) / (local_17c * 2.0);
    fVar25 = *(float *)(param_3 + 0xb0) / (local_178 * 2.0);
    fVar24 = *(float *)(param_3 + 0x94);
    uStack_1b0 = *(undefined4 *)(param_3 + 0x98);
    local_1e8 = *(float *)(param_3 + 0x68);
    local_1b8 = *(float *)(param_3 + 0x98);
    local_268 = *(float *)(param_3 + 0x6c);
    local_248 = *(float *)(param_3 + 0x9c);
    local_278 = (float)-(*(int *)(param_1 + 0xa4) / 2);
    local_288 = (float)-(*(int *)(param_1 + 0xa8) / 2);
    local_258 = fVar8 * 1.0 + 0.0 + 0.0;
    fStack_254 = fVar8 * 0.0 + 0.0 + 0.0;
    fStack_250 = fVar8 * 0.0 + 0.0 + 0.0;
    fStack_24c = fVar8 * 0.0 + 0.0 + 0.0;
    uStack_1fc = 0x3f800000;
    fVar18 = local_258 + local_208 * 0.0;
    fVar19 = fStack_254 + fStack_204 * 0.0;
    fVar20 = fStack_250 + fStack_200 * 0.0;
    fVar21 = fStack_24c + 0.0;
    fVar13 = fVar25 * 0.0 + 0.0 + 0.0 + local_208 * 0.0;
    fVar14 = fVar25 * 1.0 + 0.0 + 0.0 + fStack_204 * 0.0;
    fVar16 = fVar25 * 0.0 + 0.0 + 0.0 + fStack_200 * 0.0;
    fVar17 = fVar25 * 0.0 + 0.0 + 0.0 + 0.0;
    fVar10 = local_208 * 0.0 + 0.0;
    fVar11 = fStack_204 * 0.0 + 0.0;
    fVar12 = fStack_200 * 0.0 + 1.0;
    fVar8 = *(float *)(param_3 + 0x70);
    fVar25 = *(float *)(param_3 + 0x60);
    fVar26 = local_208 * 1.0 + 0.0;
    fVar27 = fStack_204 * 1.0 + 0.0;
    fVar29 = fStack_200 * 1.0 + 0.0;
    fVar15 = *(float *)(param_3 + 0x80);
    fVar3 = *(float *)(param_3 + 0x90);
    fVar31 = fVar19 * local_1f8 + fVar18 * fVar25 + fVar20 * local_1e8 + fVar21 * local_268;
    fVar32 = fVar19 * fVar22 + fVar18 * fVar8 + fVar20 * local_1d8 + fVar21 * local_1a8;
    fVar33 = fVar19 * fVar23 + fVar18 * fVar15 + fVar20 * local_1c8 + fVar21 * local_198;
    fVar21 = fVar19 * fVar24 + fVar18 * fVar3 + fVar20 * local_1b8 + fVar21 * local_248;
    fVar18 = fVar14 * local_1f8 + fVar13 * fVar25 + fVar16 * local_1e8 + fVar17 * local_268;
    fVar19 = fVar14 * fVar22 + fVar13 * fVar8 + fVar16 * local_1d8 + fVar17 * local_1a8;
    fVar20 = fVar14 * fVar23 + fVar13 * fVar15 + fVar16 * local_1c8 + fVar17 * local_198;
    fVar13 = fVar14 * fVar24 + fVar13 * fVar3 + fVar16 * local_1b8 + fVar17 * local_248;
    fVar14 = fVar11 * local_1f8 + fVar10 * fVar25 + fVar12 * local_1e8 + local_268 * 0.0;
    fVar16 = fVar11 * fVar22 + fVar10 * fVar8 + fVar12 * local_1d8 + local_1a8 * 0.0;
    fVar17 = fVar11 * fVar23 + fVar10 * fVar15 + fVar12 * local_1c8 + local_198 * 0.0;
    fVar10 = fVar11 * fVar24 + fVar10 * fVar3 + fVar12 * local_1b8 + local_248 * 0.0;
    fVar25 = fVar27 * local_1f8 + fVar26 * fVar25 + fVar29 * local_1e8 + local_268 * 1.0;
    fVar22 = fVar27 * fVar22 + fVar26 * fVar8 + fVar29 * local_1d8 + local_1a8 * 1.0;
    fVar23 = fVar27 * fVar23 + fVar26 * fVar15 + fVar29 * local_1c8 + local_198 * 1.0;
    fVar24 = fVar27 * fVar24 + fVar26 * fVar3 + fVar29 * local_1b8 + local_248 * 1.0;
    uStack_d0 = 0;
    uStack_cc = 0x3f800000;
    local_2c8 = fVar32 * 0.0 + fVar31 * 1.0 + fVar33 * 0.0 + fVar21 * local_278;
    fStack_2c4 = fVar32 * 1.0 + fVar31 * 0.0 + fVar33 * 0.0 + fVar21 * local_288;
    fStack_2c0 = fVar32 * 0.0 + fVar31 * 0.0 + fVar33 * 1.0 + fVar21 * 0.0;
    fStack_2bc = fVar32 * 0.0 + fVar31 * 0.0 + fVar33 * 0.0 + fVar21 * 1.0;
    fStack_2b8 = fVar19 * 0.0 + fVar18 * 1.0 + fVar20 * 0.0 + fVar13 * local_278;
    fStack_2b4 = fVar19 * 1.0 + fVar18 * 0.0 + fVar20 * 0.0 + fVar13 * local_288;
    _fStack_2b0 = CONCAT44(fVar19 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0 + fVar13 * 1.0,
                           fVar19 * 0.0 + fVar18 * 0.0 + fVar20 * 1.0 + fVar13 * 0.0);
    local_2a8 = fVar16 * 0.0 + fVar14 * 1.0 + fVar17 * 0.0 + fVar10 * local_278;
    fStack_2a4 = fVar16 * 1.0 + fVar14 * 0.0 + fVar17 * 0.0 + fVar10 * local_288;
    fStack_2a0 = fVar16 * 0.0 + fVar14 * 0.0 + fVar17 * 1.0 + fVar10 * 0.0;
    fStack_29c = fVar16 * 0.0 + fVar14 * 0.0 + fVar17 * 0.0 + fVar10 * 1.0;
    local_298 = fVar22 * 0.0 + fVar25 * 1.0 + fVar23 * 0.0 + fVar24 * local_278;
    fStack_294 = fVar22 * 1.0 + fVar25 * 0.0 + fVar23 * 0.0 + fVar24 * local_288;
    fStack_290 = fVar22 * 0.0 + fVar25 * 0.0 + fVar23 * 1.0 + fVar24 * 0.0;
    fStack_28c = fVar22 * 0.0 + fVar25 * 0.0 + fVar23 * 0.0 + fVar24 * 1.0;
    fStack_264 = local_268;
    uStack_25c = uStack_260;
    fStack_244 = local_248;
    fStack_240 = local_248;
    fStack_23c = local_248;
    fStack_1f4 = local_1f8;
    fStack_1f0 = local_1f8;
    fStack_1ec = local_1f8;
    fStack_1e4 = local_1e8;
    uStack_1dc = uStack_1e0;
    fStack_1d4 = local_1d8;
    fStack_1d0 = local_1d8;
    fStack_1cc = local_1d8;
    fStack_1c4 = local_1c8;
    fStack_1c0 = local_1c8;
    fStack_1bc = local_1c8;
    fStack_1b4 = local_1b8;
    uStack_1ac = uStack_1b0;
    fStack_1a4 = local_1a8;
    fStack_1a0 = local_1a8;
    fStack_19c = local_1a8;
    fStack_194 = local_198;
    fStack_190 = local_198;
    fStack_18c = local_198;
    local_d8 = local_278;
    fStack_d4 = local_288;
    FUN_140487e30(&local_238,&local_2c8);
    (**(code **)(*plVar1 + 0x4a8))(plVar1,local_168,&DAT_1468b5b70);
    fStack_2b8 = 0.0;
    local_2c8 = (local_15c * 2.0) / (float)*(int *)(param_1 + 0xa4);
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0x3f800000;
    uStack_11c = 0;
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0x3f800000;
    fStack_2b4 = (local_158 * 2.0) / (float)*(int *)(param_1 + 0xa8);
    local_148 = ZEXT416((uint)local_2c8);
    fStack_2c4 = 0.0;
    fStack_2c0 = 0.0;
    fStack_2bc = 0.0;
    fStack_2b0 = 0.0;
    fStack_2ac = 0.0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    fStack_134 = fStack_2b4;
    uVar4 = FUN_140487e30(&local_2c8,local_148);
    fStack_dc = fStack_29c;
    fVar11 = fStack_2a0;
    fVar10 = fStack_2a4;
    fVar3 = local_2a8;
    fVar15 = fRam00000001468509a8;
    fVar25 = fRam00000001468509a4;
    fVar8 = _DAT_1468509a0;
    fVar24 = fRam0000000146850568;
    fVar23 = fRam0000000146850564;
    fVar22 = _DAT_146850560;
    local_e8 = local_218._0_4_;
    fStack_e4 = local_218._4_4_;
    fStack_e0 = local_218._8_4_;
    auVar6._4_4_ = fStack_2a4;
    auVar6._0_4_ = local_2a8;
    auVar6._8_4_ = fStack_2a0;
    auVar6._12_4_ = fStack_29c;
    auVar6 = minps(local_218,auVar6);
    auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam00000001468509a4);
    auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_1468509a0);
    auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam00000001468509a8);
    auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam00000001468509ac);
    iVar5 = movmskps(uVar4,auVar7);
    if (iVar5 == 0) {
      local_228 = local_228 * local_2a8;
      fStack_224 = fStack_224 * fStack_2a4;
      fStack_220 = fStack_220 * fStack_2a0;
      fStack_21c = fStack_21c * fStack_29c;
      local_108 = fStack_22c * local_2c8 * _DAT_146850980 + local_238 * fStack_2bc +
                  fStack_230 * fStack_2c4 * _DAT_146850970 +
                  fStack_234 * fStack_2c0 * _DAT_146850960;
      fStack_104 = fStack_230 * local_2c8 * fRam0000000146850984 + fStack_234 * fStack_2bc +
                   fStack_22c * fStack_2c4 * fRam0000000146850974 +
                   local_238 * fStack_2c0 * fRam0000000146850964;
      fStack_100 = fStack_234 * local_2c8 * fRam0000000146850988 + fStack_230 * fStack_2bc +
                   local_238 * fStack_2c4 * fRam0000000146850978 +
                   fStack_22c * fStack_2c0 * fRam0000000146850968;
      fStack_fc = local_238 * local_2c8 * fRam000000014685098c + fStack_22c * fStack_2bc +
                  fStack_234 * fStack_2c4 * fRam000000014685097c +
                  fStack_230 * fStack_2c0 * fRam000000014685096c;
      fVar22 = fStack_220 * fStack_2c4 - fStack_224 * fStack_2c0;
      fVar23 = local_228 * fStack_2c0 - fStack_220 * local_2c8;
      fVar24 = fStack_224 * local_2c8 - local_228 * fStack_2c4;
      fVar8 = fStack_21c * fStack_2bc - fStack_21c * fStack_2bc;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      fVar8 = fVar8 + fVar8;
      local_f8._4_4_ =
           (fVar22 * fStack_2c0 - fVar24 * local_2c8) + fVar23 * fStack_2bc + fStack_224 +
           fStack_2b4;
      local_f8._0_4_ =
           (fVar24 * fStack_2c4 - fVar23 * fStack_2c0) + fVar22 * fStack_2bc + local_228 +
           fStack_2b8;
      fStack_f0 = (fVar23 * local_2c8 - fVar22 * fStack_2c4) + fVar24 * fStack_2bc + fStack_220 +
                  fStack_2b0;
      fStack_ec = (fVar8 * fStack_2bc - fVar8 * fStack_2bc) + fVar8 * fStack_2bc + fStack_21c +
                  fStack_2ac;
    }
    else {
      fVar18 = fStack_2c4 + fStack_2c4;
      fVar19 = fStack_2c0 + fStack_2c0;
      fVar20 = local_2c8 * (local_2c8 + local_2c8);
      fVar12 = fStack_2bc * (local_2c8 + local_2c8);
      fVar37 = local_e8 * local_2a8;
      fVar38 = fStack_e4 * fStack_2a4;
      fVar39 = fStack_e0 * fStack_2a0;
      fVar34 = (fStack_2bc * fVar19 + local_2c8 * fVar18) * local_2a8;
      fVar35 = (fVar12 + fStack_2c4 * fVar19) * fStack_2a4;
      fVar36 = (fStack_2bc * fVar18 + local_2c8 * fVar19) * fStack_2a0;
      fVar21 = fStack_2a4 * (local_2c8 * fVar18 - fStack_2bc * fVar19);
      fVar27 = fStack_2a0 * (fStack_2c4 * fVar19 - fVar12);
      fVar31 = local_2a8 * (local_2c8 * fVar19 - fStack_2bc * fVar18);
      fVar12 = (float)((uint)((_DAT_146850560 - (fStack_2c0 * fVar19 + fStack_2c4 * fVar18)) *
                             local_2a8) & _DAT_146850570);
      fVar19 = (float)((uint)((fRam0000000146850564 - (fStack_2c0 * fVar19 + fVar20)) * fStack_2a4)
                      & uRam0000000146850574);
      fVar13 = (float)((uint)((fRam0000000146850568 - (fStack_2c4 * fVar18 + fVar20)) * fStack_2a0)
                      & uRam0000000146850578);
      fVar16 = (float)((uint)((fRam000000014685056c - (fVar20 + fVar20)) * fStack_29c) &
                      uRam000000014685057c);
      fVar14 = fStack_234 + fStack_234;
      fVar20 = fStack_230 + fStack_230;
      fVar17 = local_238 * (local_238 + local_238);
      fVar18 = (local_238 + local_238) * fStack_22c;
      fVar33 = (fVar20 * fStack_22c + fVar14 * local_238) * local_e8;
      fVar28 = (fVar18 + fVar20 * fStack_234) * fStack_e4;
      fVar30 = (fVar14 * fStack_22c + fVar20 * local_238) * fStack_e0;
      fVar26 = fStack_e4 * (fVar14 * local_238 - fVar20 * fStack_22c);
      fVar29 = fStack_e0 * (fVar20 * fStack_234 - fVar18);
      fVar32 = local_e8 * (fVar20 * local_238 - fVar14 * fStack_22c);
      fVar18 = (float)((uint)((_DAT_146850560 - (fStack_230 * fVar20 + fStack_234 * fVar14)) *
                             local_e8) & _DAT_146850570);
      fVar20 = (float)((uint)((fRam0000000146850564 - (fStack_230 * fVar20 + fVar17)) * fStack_e4) &
                      uRam0000000146850574);
      fVar14 = (float)((uint)((fRam0000000146850568 - (fStack_234 * fVar14 + fVar17)) * fStack_e0) &
                      uRam0000000146850578);
      fVar17 = (float)((uint)((fRam000000014685056c - (fVar17 + fVar17)) * local_218._12_4_) &
                      uRam000000014685057c);
      local_2c8 = fVar33 * fVar21 + fVar18 * fVar12 + fVar32 * fVar36 + fVar17 * fStack_2b8;
      fStack_2c4 = fVar33 * fVar19 + fVar18 * fVar34 + fVar32 * fVar27 + fVar17 * fStack_2b4;
      fStack_2c0 = fVar33 * fVar35 + fVar18 * fVar31 + fVar32 * fVar13 + fVar17 * fStack_2b0;
      fStack_2bc = fVar33 * fVar16 + fVar18 * fVar16 + fVar32 * fVar16 +
                   fVar17 * fRam000000014685056c;
      fStack_2ac = fVar20 * fVar16 + fVar26 * fVar16 + fVar28 * fVar16 +
                   fVar17 * fRam000000014685056c;
      local_2a8 = fVar29 * fVar21 + fVar30 * fVar12 + fVar14 * fVar36 + fVar17 * fStack_2b8;
      fStack_2a4 = fVar29 * fVar19 + fVar30 * fVar34 + fVar14 * fVar27 + fVar17 * fStack_2b4;
      fStack_2a0 = fVar29 * fVar35 + fVar30 * fVar31 + fVar14 * fVar13 + fVar17 * fStack_2b0;
      fStack_29c = fVar29 * fVar16 + fVar30 * fVar16 + fVar14 * fVar16 +
                   fVar17 * fRam000000014685056c;
      local_298 = fStack_224 * fVar21 + local_228 * fVar12 + fStack_220 * fVar36 +
                  fRam000000014685056c * fStack_2b8;
      fStack_294 = fStack_224 * fVar19 + local_228 * fVar34 + fStack_220 * fVar27 +
                   fRam000000014685056c * fStack_2b4;
      fStack_290 = fStack_224 * fVar35 + local_228 * fVar31 + fStack_220 * fVar13 +
                   fRam000000014685056c * fStack_2b0;
      fStack_28c = fStack_224 * fVar16 + local_228 * fVar16 + fStack_220 * fVar16 +
                   fRam000000014685056c * fRam000000014685056c;
      fStack_2b8 = fVar20 * fVar21 + fVar26 * fVar12 + fVar28 * fVar36 + fVar17 * fStack_2b8;
      fStack_2b4 = fVar20 * fVar19 + fVar26 * fVar34 + fVar28 * fVar27 + fVar17 * fStack_2b4;
      fStack_2b0 = fVar20 * fVar35 + fVar26 * fVar31 + fVar28 * fVar13 + fVar17 * fStack_2b0;
      FMatrix::RemoveScaling(&local_2c8);
      fVar22 = (float)((_DAT_146850990 ^ (uint)fVar22) & -(uint)(fVar8 <= fVar37) ^ _DAT_146850990);
      fVar23 = (float)((uRam0000000146850994 ^ (uint)fVar23) & -(uint)(fVar25 <= fVar38) ^
                      uRam0000000146850994);
      fVar24 = (float)((uRam0000000146850998 ^ (uint)fVar24) & -(uint)(fVar15 <= fVar39) ^
                      uRam0000000146850998);
      local_2c8 = local_2c8 * fVar22;
      fStack_2c0 = fStack_2c0 * fVar22;
      fStack_2c4 = fStack_2c4 * fVar22;
      fStack_2b0 = fStack_2b0 * fVar23;
      fStack_2b4 = fStack_2b4 * fVar23;
      fStack_2b8 = fStack_2b8 * fVar23;
      fStack_2a0 = fStack_2a0 * fVar24;
      local_2a8 = local_2a8 * fVar24;
      fStack_2a4 = fStack_2a4 * fVar24;
      FQuat::FQuat(&local_248,&local_2c8);
      local_288 = 1e-08;
      auVar9._0_4_ = local_248 * local_248 + fStack_240 * fStack_240;
      auVar9._4_4_ = fStack_244 * fStack_244 + fStack_23c * fStack_23c;
      auVar9._8_4_ = fStack_240 * fStack_240 + local_248 * local_248;
      auVar9._12_4_ = fStack_23c * fStack_23c + fStack_244 * fStack_244;
      fVar25 = auVar9._4_4_ + auVar9._0_4_;
      fVar15 = auVar9._8_4_ + auVar9._4_4_;
      fVar12 = auVar9._12_4_ + auVar9._8_4_;
      fVar18 = auVar9._0_4_ + auVar9._12_4_;
      auVar2._4_4_ = fVar15;
      auVar2._0_4_ = fVar25;
      auVar2._8_4_ = fVar12;
      auVar2._12_4_ = fVar18;
      auVar6 = rsqrtps(auVar9,auVar2);
      fVar22 = auVar6._0_4_;
      fVar23 = auVar6._4_4_;
      fVar24 = auVar6._8_4_;
      fVar8 = auVar6._12_4_;
      fVar22 = (_DAT_146850930 - fVar22 * fVar22 * fVar25 * _DAT_146850930) * fVar22 + fVar22;
      fVar23 = (fRam0000000146850934 - fVar23 * fVar23 * fVar15 * fRam0000000146850934) * fVar23 +
               fVar23;
      fVar24 = (fRam0000000146850938 - fVar24 * fVar24 * fVar12 * fRam0000000146850938) * fVar24 +
               fVar24;
      fVar8 = (fRam000000014685093c - fVar8 * fVar8 * fVar18 * fRam000000014685093c) * fVar8 + fVar8
      ;
      local_f8._4_4_ = fStack_294;
      local_f8._0_4_ = local_298;
      fStack_f0 = fStack_290;
      local_108 = (float)(((uint)(((_DAT_146850930 - fVar22 * fVar22 * fVar25 * _DAT_146850930) *
                                   fVar22 + fVar22) * local_248) ^ _DAT_146850920) &
                          -(uint)(1e-08 <= fVar25) ^ _DAT_146850920);
      fStack_104 = (float)(((uint)(((fRam0000000146850934 -
                                    fVar23 * fVar23 * fVar15 * fRam0000000146850934) * fVar23 +
                                   fVar23) * fStack_244) ^ uRam0000000146850924) &
                           -(uint)(1e-08 <= fVar15) ^ uRam0000000146850924);
      fStack_100 = (float)(((uint)(((fRam0000000146850938 -
                                    fVar24 * fVar24 * fVar12 * fRam0000000146850938) * fVar24 +
                                   fVar24) * fStack_240) ^ uRam0000000146850928) &
                           -(uint)(1e-08 <= fVar12) ^ uRam0000000146850928);
      fStack_fc = (float)(((uint)(((fRam000000014685093c -
                                   fVar8 * fVar8 * fVar18 * fRam000000014685093c) * fVar8 + fVar8) *
                                 fStack_23c) ^ uRam000000014685092c) & -(uint)(1e-08 <= fVar18) ^
                         uRam000000014685092c);
      fStack_ec = 0.0;
    }
    fStack_dc = local_218._12_4_ * fStack_dc;
    fStack_e0 = fStack_e0 * fVar11;
    fStack_e4 = fStack_e4 * fVar10;
    local_e8 = local_e8 * fVar3;
    local_2d8 = 0;
    FUN_142398770(param_2,&local_108,0,0);
  }
  return;
}



// FUNCTION 140488e50 TriggerMedKit body=12 status=ok
// SIG undefined TriggerMedKit(void)

void UGameInputComponent::TriggerMedKit(longlong param_1)

{
  FUN_140487300(*(undefined8 *)(param_1 + 0x1d8));
  return;
}



// FUNCTION 140488e60 FUN_140488e60 body=19 status=ok
// SIG undefined FUN_140488e60(void)

void FUN_140488e60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int iStack_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  lVar5 = *(longlong *)(param_1 + 0x160);
  if (*(longlong *)(lVar5 + 0x28) == 0) {
    return;
  }
  plVar1 = (longlong *)(lVar5 + 0x30);
  *(undefined1 *)(lVar5 + 0x328) = 1;
  FSoundAttenuationSettings::operator=(lVar5 + 0x80);
  uVar3 = *(uint *)(lVar5 + 0x58);
  puVar2 = (uint *)(lVar5 + 0x40);
  uStack_84 = 1;
  iStack_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(lVar5 + 0x50);
    if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    iStack_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)iStack_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = iStack_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iStack_88;
      iStack_88 = iVar7;
      if (bVar6) goto LAB_1404873ed;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1404873ed:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0x58);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  uStack_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,iStack_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = iStack_88;
  uStack_5c = uStack_84;
  puStack_58 = puVar2;
  plStack_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = uStack_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(lVar5 + 0x50);
    if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1404874b3;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1404874b3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (puStack_58 != puVar2))) {
    FUN_14232cd60(*(undefined8 *)(*plVar1 + 8 + (longlong)(int)uStack_4c * 0x28),param_2);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 140488e80 FUN_140488e80 body=63 status=ok
// SIG undefined FUN_140488e80(void)

void FUN_140488e80(longlong *param_1,int param_2)

{
  *(int *)(param_1 + 1) = param_2;
  if (param_2 - 3U < 2) {
    (**(code **)(*param_1 + 0x20))();
  }
  if (param_2 - 2U < 2) {
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[0x23] = 0;
  }
  return;
}



// FUNCTION 140488ed0 FUN_140488ed0 body=5 status=ok
// SIG undefined FUN_140488ed0(void)

void FUN_140488ed0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 140488ee0 FUN_140488ee0 body=395 status=ok
// SIG undefined FUN_140488ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140488ee0(longlong param_1,longlong param_2,undefined4 param_3)

{
  wchar_t *pwVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  wchar_t *local_170;
  int local_168;
  undefined4 local_164;
  wchar_t local_158 [128];
  wchar_t *local_58;
  wchar_t *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_58 = (wchar_t *)0x0;
  if (param_2 == 0) {
    local_50 = (wchar_t *)0x0;
    local_48 = 0;
  }
  else {
    local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_178,0x7fffffff,param_2,param_3);
    pwVar1 = local_178;
    local_48 = (uint)local_178;
    pwVar3 = (wchar_t *)0x0;
    if ((0x80 < (uint)local_178) && (pwVar3 = (wchar_t *)0x0, (uint)local_178 != 0)) {
      pwVar3 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)(uint)local_178 * 2,0);
      local_58 = pwVar3;
    }
    local_178 = local_158;
    if (pwVar3 != (wchar_t *)0x0) {
      local_178 = pwVar3;
    }
    local_50 = local_178;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
              (&local_178,(ulonglong)pwVar1 & 0xffffffff,param_2,param_3);
  }
  uVar2 = local_48;
  pwVar1 = local_50;
  local_170 = (wchar_t *)0x0;
  local_164 = 0;
  local_168 = local_48 + 1;
  if (local_48 == 0) {
    local_168 = 0;
  }
  if (0 < local_168) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
    pwVar3 = local_170;
    if (0 < local_168) {
      wcsncpy(local_170,pwVar1,(longlong)(int)uVar2);
      pwVar3[(int)uVar2] = L'\0';
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),&local_170);
  if (local_170 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140489070 FUN_140489070 body=355 status=ok
// SIG undefined FUN_140489070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140489070(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 local_c8 [128];
  longlong local_48;
  void *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_3 == '\0') {
    param_2 = param_1 + 0x28;
    iVar1 = FText::CompareTo(param_1 + 0x40,param_2,0);
    if (iVar1 == 0) {
      return;
    }
  }
  FText::operator=(param_1 + 0x40,param_2);
  puVar2 = (undefined8 *)FText::ToString(param_1 + 0x40);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_c8,puVar3);
  uVar4 = (ulonglong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (uVar4 != 0) {
    _Dst = (void *)operator_new(uVar4);
    puVar2 = (undefined8 *)FText::ToString(param_1 + 0x40);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar2;
    }
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_c8,puVar5);
    if ((_Dst != (void *)0x0) && ((ulonglong)(longlong)local_38 <= uVar4)) {
      _guard_xfg_dispatch_icall_nop(_Dst,local_40,(longlong)local_38);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    local_d8 = 0;
    uStack_d4 = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
              (*(longlong **)(param_1 + 0x10),_Dst,local_38,0xffffffff00000000);
    FMemory::operator_delete(_Dst);
  }
  return;
}



// FUNCTION 1404891e0 FUN_1404891e0 body=1187 status=ok
// SIG undefined FUN_1404891e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404891e0(longlong param_1,uint param_2,int param_3,wchar_t *param_4)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t **ppwVar12;
  wchar_t *pwVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  uint local_130;
  int local_12c;
  wchar_t *local_128;
  wchar_t *local_120;
  wchar_t *local_118;
  wchar_t *local_110;
  uint local_108;
  int local_104;
  longlong local_100;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar2 = param_3 + param_2;
  iVar7 = *(int *)(param_1 + 0x20);
  uVar14 = uVar2 + 0x7fffffff;
  uVar16 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar16 = 0xffffffff;
  }
  pwVar10 = (wchar_t *)0x0;
  uVar9 = 0;
  if (iVar7 == 0) {
    uVar16 = uVar9;
  }
  if (uVar2 < uVar16) {
    uVar16 = uVar2;
  }
  uVar2 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar2 = uVar9;
  }
  uVar6 = uVar16;
  if ((uVar16 <= uVar14) && (uVar6 = uVar2, uVar14 < uVar2)) {
    uVar6 = uVar14;
  }
  if (iVar7 == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = *(undefined2 **)(param_1 + 0x18);
  }
  iVar7 = uVar6 - uVar16;
  local_104 = 0;
  local_120 = (wchar_t *)0x0;
  local_110 = (wchar_t *)0x0;
  uVar14 = iVar7 + 1;
  if (iVar7 == 0) {
    uVar14 = 0;
  }
  local_128 = param_4;
  local_108 = uVar14;
  local_100 = param_1;
  if (0 < (int)uVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
    uVar14 = local_108;
    pwVar5 = local_110;
    if ((int)local_108 < 1) {
      local_120 = local_110;
    }
    else {
      local_120 = local_110;
      wcsncpy(local_110,puVar17 + (int)uVar16,(longlong)iVar7);
      pwVar5[iVar7] = L'\0';
    }
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    pwVar5 = L"";
    uVar16 = uVar9;
  }
  else {
    pwVar5 = *(wchar_t **)(param_1 + 0x18);
    uVar16 = *(int *)(param_1 + 0x20) - 1;
  }
  uVar2 = uVar9;
  if ((-1 < (int)param_2) && (uVar2 = uVar16, (int)param_2 < (int)uVar16)) {
    uVar2 = param_2;
  }
  local_118 = (wchar_t *)0x0;
  local_138 = (wchar_t *)0x0;
  pwVar11 = (wchar_t *)(ulonglong)(uVar2 + 1);
  if (uVar2 == 0) {
    pwVar11 = pwVar10;
  }
  local_12c = 0;
  local_130 = (uint)pwVar11;
  pwVar13 = pwVar10;
  if (0 < (int)local_130) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    pwVar13 = local_138;
    pwVar11 = (wchar_t *)(ulonglong)local_130;
    local_118 = local_138;
    if (0 < (int)local_130) {
      wcsncpy(local_138,pwVar5,(longlong)(int)uVar2);
      pwVar13[(int)uVar2] = L'\0';
    }
  }
  uVar16 = *(uint *)(local_128 + 4);
  local_130 = (uint)pwVar11;
  if ((int)local_130 < 2) {
    _Src = *(void **)local_128;
    local_138 = (wchar_t *)0x0;
    local_130 = uVar16;
    if (uVar16 == 0) {
      pwVar11 = (wchar_t *)0x0;
      pwVar5 = pwVar10;
      iVar7 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,uVar16,0);
      pwVar5 = local_138;
      _guard_xfg_dispatch_icall_nop(local_138,_Src,(longlong)(int)uVar16 * 2);
      pwVar11 = (wchar_t *)(ulonglong)local_130;
      iVar7 = local_12c;
    }
  }
  else {
    uVar2 = uVar16 - 1;
    if (uVar16 == 0) {
      uVar2 = uVar9;
    }
    if ((local_130 != 0) || (iVar7 = 1, uVar2 == 0)) {
      iVar7 = 0;
    }
    local_118 = (wchar_t *)0x0;
    local_138 = pwVar13;
    if (local_12c < (int)(iVar7 + local_130 + uVar2)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138);
      pwVar11 = (wchar_t *)(ulonglong)local_130;
    }
    local_128 = *(wchar_t **)local_128;
    pwVar5 = local_138;
    iVar7 = local_12c;
    if (uVar2 != 0) {
      iVar15 = (int)pwVar11;
      local_130 = iVar15 + (uint)(iVar15 == 0) + uVar2;
      if (local_12c < (int)local_130) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,pwVar11);
      }
      iVar7 = local_12c;
      pwVar5 = local_138;
      pwVar11 = (wchar_t *)(ulonglong)local_130;
      pwVar13 = local_138 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0));
      _guard_xfg_dispatch_icall_nop(pwVar13,local_128,(longlong)(int)uVar2 * 2);
      pwVar13[(int)uVar2] = L'\0';
    }
  }
  uVar16 = (uint)pwVar11;
  pwVar8 = pwVar10;
  pwVar13 = local_120;
  iVar15 = local_104;
  if (1 < (int)uVar16) {
    uVar2 = uVar14 - 1;
    if (uVar14 == 0) {
      uVar2 = uVar9;
    }
    if ((uVar16 != 0) || (iVar15 = 1, uVar2 == 0)) {
      iVar15 = 0;
    }
    local_138 = pwVar5;
    local_130 = uVar16;
    local_12c = iVar7;
    local_128 = pwVar5;
    if (iVar7 < (int)(iVar15 + uVar16 + uVar2)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138);
      pwVar11 = (wchar_t *)(ulonglong)local_130;
    }
    uVar16 = (uint)pwVar11;
    pwVar8 = local_120;
    pwVar5 = pwVar10;
    pwVar13 = local_138;
    uVar14 = uVar16;
    iVar15 = local_12c;
    if (uVar2 != 0) {
      local_130 = uVar16 + (uVar16 == 0) + uVar2;
      if (local_12c < (int)local_130) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,pwVar11);
      }
      iVar15 = local_12c;
      uVar14 = local_130;
      pwVar13 = local_138;
      pwVar5 = local_138 + ((longlong)(int)uVar16 - (ulonglong)(uVar16 != 0));
      _guard_xfg_dispatch_icall_nop(pwVar5,local_120,(longlong)(int)uVar2 * 2);
      pwVar5[(int)uVar2] = L'\0';
      pwVar8 = local_120;
      pwVar5 = pwVar10;
    }
  }
  lVar4 = local_100;
  ppwVar12 = (wchar_t **)(local_100 + 0x18);
  if (ppwVar12 == &local_110) {
    if (pwVar13 != (wchar_t *)0x0) {
      FMemory::Free(pwVar13);
    }
  }
  else {
    if (*ppwVar12 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar12 = pwVar13;
    *(uint *)(lVar4 + 0x20) = uVar14;
    *(int *)(lVar4 + 0x24) = iVar15;
  }
  if (pwVar5 != (wchar_t *)0x0) {
    FMemory::Free(pwVar5);
  }
  if (local_118 != (wchar_t *)0x0) {
    FMemory::Free(local_118);
  }
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  lVar4 = local_100;
  if (((*(longlong **)(local_100 + 8) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(local_100 + 8) + 8))(), cVar1 != '\0')) &&
     (plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 8) + 0x10))(),
     plVar3 != (longlong *)0x0)) {
    iVar7 = *(int *)(lVar4 + 0x20);
    if (iVar7 < 2) {
      (**(code **)(*plVar3 + 0xd8))(plVar3);
    }
    else {
      if (iVar7 == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *ppwVar12;
        pwVar10 = (wchar_t *)(ulonglong)(iVar7 - 1);
      }
      lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,pwVar5);
      (**(code **)(*plVar3 + 200))(plVar3,*(undefined8 *)(lVar4 + 0x88),pwVar10,pwVar10);
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140489690 FUN_140489690 body=1669 status=ok
// SIG undefined FUN_140489690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140489690(wchar_t *param_1,uint param_2,int param_3,wchar_t *param_4)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  HKL pHVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  wchar_t **ppwVar16;
  int iVar17;
  uint uVar18;
  undefined2 *puVar19;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  uint local_150;
  int local_14c;
  uint local_148;
  wchar_t *local_140;
  uint local_138;
  int local_134;
  wchar_t *local_130;
  wchar_t *local_128;
  wchar_t *local_120;
  wchar_t *local_118;
  int local_110;
  wchar_t **local_108;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pwVar12 = (wchar_t *)0x0;
  uVar15 = 0;
  local_148 = 0;
  local_130 = param_4;
  local_118 = param_1;
  pHVar4 = GetKeyboardLayout(0);
  if (((ushort)pHVar4 & 0x3ff) == 4) {
    iVar8 = *(int *)(param_1 + 0x10);
    uVar3 = param_3 + param_2 + *(int *)(param_1 + 0x18);
    ppwVar16 = (wchar_t **)(param_1 + 0xc);
    uVar18 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar18 = uVar15;
    }
    uVar9 = uVar3 + 0x7fffffff;
    if (uVar3 < uVar18) {
      uVar18 = uVar3;
    }
    uVar3 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar3 = uVar15;
    }
    uVar7 = uVar18;
    if ((uVar18 <= uVar9) && (uVar7 = uVar3, uVar9 < uVar3)) {
      uVar7 = uVar9;
    }
    if (iVar8 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *ppwVar16;
    }
    iVar8 = uVar7 - uVar18;
    local_134 = 0;
    local_128 = (wchar_t *)0x0;
    local_140 = (wchar_t *)0x0;
    uVar3 = iVar8 + 1;
    if (iVar8 == 0) {
      uVar3 = 0;
    }
    local_138 = uVar3;
    local_108 = ppwVar16;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
      uVar3 = local_138;
      pwVar13 = local_140;
      if ((int)local_138 < 1) {
        local_128 = local_140;
      }
      else {
        local_128 = local_140;
        wcsncpy(local_140,pwVar6 + (int)uVar18,(longlong)iVar8);
        pwVar13[iVar8] = L'\0';
      }
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      pwVar6 = L"";
      uVar18 = uVar15;
    }
    else {
      pwVar6 = *ppwVar16;
      uVar18 = *(int *)(param_1 + 0x10) - 1;
    }
    uVar9 = uVar15;
    if ((-1 < (int)param_2) && (uVar9 = uVar18, (int)param_2 < (int)uVar18)) {
      uVar9 = param_2;
    }
    local_120 = (wchar_t *)0x0;
    local_158 = (wchar_t *)0x0;
    pwVar13 = (wchar_t *)(ulonglong)(uVar9 + 1);
    if (uVar9 == 0) {
      pwVar13 = pwVar12;
    }
    local_14c = 0;
    local_150 = (uint)pwVar13;
    pwVar14 = pwVar12;
    if (0 < (int)local_150) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      pwVar14 = local_158;
      pwVar13 = (wchar_t *)(ulonglong)local_150;
      local_120 = local_158;
      if (0 < (int)local_150) {
        wcsncpy(local_158,pwVar6,(longlong)(int)uVar9);
        pwVar14[(int)uVar9] = L'\0';
      }
    }
    local_148 = 1;
    uVar18 = *(uint *)(local_130 + 4);
    local_150 = (uint)pwVar13;
    uVar9 = 0;
    if ((int)local_150 < 2) {
      pvVar1 = *(void **)local_130;
      local_158 = (wchar_t *)0x0;
      local_150 = uVar18;
      if (uVar18 == 0) {
        pwVar13 = (wchar_t *)0x0;
        pwVar6 = pwVar12;
        iVar8 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,uVar18,0);
        pwVar6 = local_158;
        _guard_xfg_dispatch_icall_nop(local_158,pvVar1,(longlong)(int)uVar18 * 2);
        pwVar13 = (wchar_t *)(ulonglong)local_150;
        iVar8 = local_14c;
      }
    }
    else {
      uVar7 = uVar18 - 1;
      if (uVar18 == 0) {
        uVar7 = uVar15;
      }
      if ((local_150 != 0) || (uVar18 = 1, uVar7 == 0)) {
        uVar18 = uVar9;
      }
      local_120 = (wchar_t *)0x0;
      local_158 = pwVar14;
      if (local_14c < (int)(uVar7 + local_150 + uVar18)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158);
        pwVar13 = (wchar_t *)(ulonglong)local_150;
      }
      local_130 = *(wchar_t **)local_130;
      pwVar6 = local_158;
      iVar8 = local_14c;
      if (uVar7 != 0) {
        iVar17 = (int)pwVar13;
        local_150 = iVar17 + (uint)(iVar17 == 0) + uVar7;
        if (local_14c < (int)local_150) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,pwVar13);
        }
        iVar8 = local_14c;
        pwVar6 = local_158;
        pwVar13 = (wchar_t *)(ulonglong)local_150;
        pwVar14 = local_158 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar14,local_130,(longlong)(int)uVar7 * 2);
        pwVar14[(int)uVar7] = L'\0';
      }
    }
    uVar18 = (uint)pwVar13;
    pwVar10 = pwVar12;
    pwVar14 = local_128;
    iVar17 = local_134;
    if (1 < (int)uVar18) {
      uVar7 = uVar3 - 1;
      if (uVar3 == 0) {
        uVar7 = uVar15;
      }
      if ((uVar18 != 0) || (uVar15 = 1, uVar7 == 0)) {
        uVar15 = uVar9;
      }
      local_158 = pwVar6;
      local_150 = uVar18;
      local_14c = iVar8;
      local_130 = pwVar6;
      if (iVar8 < (int)(uVar15 + uVar18 + uVar7)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158);
        pwVar13 = (wchar_t *)(ulonglong)local_150;
      }
      uVar15 = (uint)pwVar13;
      pwVar10 = local_128;
      pwVar6 = pwVar12;
      pwVar14 = local_158;
      uVar3 = uVar15;
      iVar17 = local_14c;
      if (uVar7 != 0) {
        local_150 = uVar15 + (uVar15 == 0) + uVar7;
        if (local_14c < (int)local_150) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,pwVar13);
        }
        iVar17 = local_14c;
        uVar3 = local_150;
        pwVar14 = local_158;
        pwVar6 = local_158 + ((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar6,local_128,(longlong)(int)uVar7 * 2);
        pwVar6[(int)uVar7] = L'\0';
        pwVar10 = local_128;
        pwVar6 = pwVar12;
      }
    }
    ppwVar16 = local_108;
    if (local_108 == &local_140) {
      if (pwVar14 != (wchar_t *)0x0) {
        FMemory::Free(pwVar14);
      }
    }
    else {
      if (*local_108 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar16 = pwVar14;
      *(uint *)(ppwVar16 + 1) = uVar3;
      *(int *)((longlong)ppwVar16 + 0xc) = iVar17;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FMemory::Free(pwVar6);
    }
    if (local_120 != (wchar_t *)0x0) {
      FMemory::Free(local_120);
    }
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
    pwVar6 = local_118;
    if (((*(longlong **)(local_118 + 4) != (longlong *)0x0) &&
        (cVar2 = (**(code **)(**(longlong **)(local_118 + 4) + 8))(), cVar2 != '\0')) &&
       (plVar5 = (longlong *)(**(code **)(**(longlong **)(pwVar6 + 4) + 0x10))(),
       plVar5 != (longlong *)0x0)) {
      if (*(int *)(pwVar6 + 0x10) < 2) {
        (**(code **)(*plVar5 + 0xd8))(plVar5);
      }
      else {
        uVar15 = *(uint *)(pwVar6 + 0x18);
        if (uVar15 == 0) {
          uVar15 = *(uint *)(pwVar6 + 0x10);
          pvVar1 = *(void **)(pwVar6 + 0xc);
          local_140 = (wchar_t *)0x0;
          local_138 = uVar15;
          if (uVar15 == 0) {
            local_134 = 0;
            pwVar6 = pwVar12;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_140,uVar15,0);
            pwVar6 = local_140;
            _guard_xfg_dispatch_icall_nop(local_140,pvVar1,(longlong)(int)uVar15 * 2);
          }
          ppwVar16 = &local_140;
          local_148 = 2;
          pwVar13 = local_158;
        }
        else {
          iVar8 = *(int *)(pwVar6 + 0x10);
          uVar18 = uVar15 + 0x7fffffff;
          uVar3 = iVar8 - 1;
          if (iVar8 == 0) {
            uVar3 = uVar9;
          }
          if (uVar15 < uVar3) {
            uVar3 = uVar15;
          }
          uVar15 = iVar8 - 1;
          if (iVar8 == 0) {
            uVar15 = uVar9;
          }
          uVar7 = uVar3;
          if ((uVar3 <= uVar18) && (uVar7 = uVar15, uVar18 < uVar15)) {
            uVar7 = uVar18;
          }
          if (iVar8 == 0) {
            puVar19 = &DAT_143f3eda8;
          }
          else {
            puVar19 = *(undefined2 **)(pwVar6 + 0xc);
          }
          iVar8 = uVar7 - uVar3;
          local_158 = (wchar_t *)0x0;
          local_14c = 0;
          local_150 = iVar8 + 1;
          if (iVar8 == 0) {
            local_150 = uVar9;
          }
          pwVar13 = pwVar12;
          if ((0 < (int)local_150) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0), pwVar13 = local_158,
             0 < (int)local_150)) {
            wcsncpy(local_158,puVar19 + (int)uVar3,(longlong)iVar8);
            pwVar13[iVar8] = L'\0';
          }
          ppwVar16 = &local_158;
          pwVar6 = local_140;
        }
        local_110 = *(int *)(ppwVar16 + 1);
        lVar11 = (longlong)local_110;
        local_118 = (wchar_t *)0x0;
        pwVar14 = pwVar12;
        if (local_110 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,0);
          pwVar14 = local_118;
          _guard_xfg_dispatch_icall_nop(local_118,*ppwVar16,lVar11 * 2);
        }
        iVar8 = local_110;
        uVar15 = local_148;
        if (((local_148 & 2) != 0) && (uVar15 = local_148 & 0xfffffffd, pwVar6 != (wchar_t *)0x0)) {
          FMemory::Free(pwVar6);
        }
        if (((uVar15 & 1) != 0) && (pwVar13 != (wchar_t *)0x0)) {
          FMemory::Free(pwVar13);
        }
        if (iVar8 == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(ulonglong)(iVar8 - 1);
          pwVar6 = pwVar14;
        }
        lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,pwVar6);
        (**(code **)(*plVar5 + 200))(plVar5,*(undefined8 *)(lVar11 + 0x88),pwVar12,pwVar12);
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (pwVar14 != (wchar_t *)0x0) {
          FMemory::Free(pwVar14);
        }
      }
    }
  }
  else {
    FUN_1404891e0(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 140489d20 FUN_140489d20 body=461 status=ok
// SIG undefined FUN_140489d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140489d20(longlong param_1,longlong param_2)

{
  short *psVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_198 [32];
  short *local_178;
  longlong local_170;
  ulonglong local_168;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar5;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_58 = (short *)0x0;
  uVar3 = 0xffffffffffffffff;
  uVar4 = uVar3;
  if (param_2 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
  }
  else {
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (*(char *)(uVar4 + param_2) != '\0');
    local_178 = (short *)((ulonglong)local_178 & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_178,0x7fffffff,param_2,uVar4 & 0xffffffff);
    local_48 = (int)local_178;
    uVar2 = (int)local_178 + 1;
    psVar1 = (short *)0x0;
    if ((0x80 < uVar2) && (psVar1 = (short *)0x0, uVar2 != 0)) {
      psVar1 = (short *)FMemory::Realloc(0,(longlong)(int)uVar2 * 2,0);
      local_58 = psVar1;
    }
    local_178 = local_158;
    if (psVar1 != (short *)0x0) {
      local_178 = psVar1;
    }
    local_50 = local_178;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_178,uVar2,param_2,(int)uVar5 + 2);
  }
  psVar1 = local_50;
  local_170 = 0;
  local_168 = 0;
  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
    do {
      uVar3 = uVar3 + 1;
    } while (local_50[uVar3] != 0);
    uVar2 = (int)uVar3 + 1;
    local_168 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
    }
    FGenericPlatformString::Memcpy(local_170,psVar1,(longlong)(int)uVar2 * 2);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),&local_170);
  if (local_170 != 0) {
    FMemory::Free();
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140489ef0 FUN_140489ef0 body=611 status=ok
// SIG undefined FUN_140489ef0(void)

void FUN_140489ef0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048a0a7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048a0a7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048a160 FUN_14048a160 body=611 status=ok
// SIG undefined FUN_14048a160(void)

void FUN_14048a160(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048a317;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048a317:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048a3d0 FUN_14048a3d0 body=611 status=ok
// SIG undefined FUN_14048a3d0(void)

void FUN_14048a3d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048a587;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048a587:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048a640 FUN_14048a640 body=611 status=ok
// SIG undefined FUN_14048a640(void)

void FUN_14048a640(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048a7f7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048a7f7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048a8b0 FUN_14048a8b0 body=611 status=ok
// SIG undefined FUN_14048a8b0(void)

void FUN_14048a8b0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048aa67;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048aa67:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048ab20 FUN_14048ab20 body=614 status=ok
// SIG undefined FUN_14048ab20(void)

void FUN_14048ab20(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = 0xaff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048acd7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048acd7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048ad90 FUN_14048ad90 body=614 status=ok
// SIG undefined FUN_14048ad90(void)

void FUN_14048ad90(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = 0x10ff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048af47;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048af47:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048b000 FUN_14048b000 body=614 status=ok
// SIG undefined FUN_14048b000(void)

void FUN_14048b000(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = 2;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14048b1b7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14048b1b7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14048b270 FUN_14048b270 body=237 status=ok
// SIG undefined FUN_14048b270(void)

void FUN_14048b270(longlong param_1,undefined8 *param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x580);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 0x5e8) != 0) {
    puVar3 = *(undefined2 **)(param_1 + 0x5e0);
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (iVar2 != 0) {
    FString::operator=(param_1 + 0x5e0,param_2);
    *(undefined1 *)(param_1 + 0x5f0) = *(undefined1 *)(param_1 + 0x5f1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x578) + 0x1a8) = param_3;
  plVar1 = *(longlong **)(param_1 + 0x578);
  *(char *)((longlong)plVar1 + 0x1ba) = param_4;
  if (param_4 == '\0') {
    *(undefined1 *)(plVar1[0x23] + 0x30) = 1;
    (**(code **)(*plVar1 + 0x3d8))(plVar1,plVar1[0x23]);
  }
  else {
    *(undefined1 *)(plVar1[0x23] + 0x30) = 5;
    (**(code **)(*plVar1 + 0x3c8))(plVar1,plVar1[0x23]);
  }
  return;
}



// FUNCTION 14048b360 FUN_14048b360 body=118 status=ok
// SIG undefined FUN_14048b360(void)

undefined4 FUN_14048b360(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong local_18 [2];
  
  bVar5 = false;
  iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar2 == 5) {
    bVar5 = true;
    uVar3 = (**(code **)(*param_2 + 0x298))(param_2,local_18);
    cVar1 = FString::StartsWith(uVar3,L"CohCustomFX_",1);
    if (cVar1 != '\0') {
      uVar4 = 1;
      goto LAB_14048b3b3;
    }
  }
  uVar4 = 0;
LAB_14048b3b3:
  if ((bVar5) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14048b400 FUN_14048b400 body=27 status=ok
// SIG undefined FUN_14048b400(void)

void FUN_14048b400(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014048b413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))();
    return;
  }
  return;
}



// FUNCTION 14048b420 FUN_14048b420 body=81 status=ok
// SIG undefined FUN_14048b420(void)

void FUN_14048b420(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x240) + 8);
  }
  if (lVar2 != 0) {
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014048b458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x240) + 8) + 0x80))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014048b469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))();
    return;
  }
  return;
}



// FUNCTION 14048b480 FUN_14048b480 body=70 status=ok
// SIG undefined FUN_14048b480(void)

void FUN_14048b480(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x168))();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014048b4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x200) + 8) + 0x1a0))();
      return;
    }
  }
  return;
}



// FUNCTION 14048b4d0 FUN_14048b4d0 body=125 status=ok
// SIG undefined FUN_14048b4d0(void)

void FUN_14048b4d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar2 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
  }
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x168))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014048b52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8) +
                    0x1a0))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014048b540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x1a0))();
      return;
    }
  }
  return;
}



// FUNCTION 14048b550 FUN_14048b550 body=385 status=ok
// SIG undefined FUN_14048b550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14048b550(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_14213dc10();
  lVar5 = *(longlong *)(param_1 + 0x100);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x270) != *(char *)(param_1 + 0x151)) {
      *(char *)(lVar5 + 0x270) = *(char *)(param_1 + 0x151);
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    *(undefined1 *)(lVar5 + 0x280) = *(undefined1 *)(param_1 + 0x152);
    lVar5 = *(longlong *)(param_1 + 0x100);
    cVar1 = *(char *)(param_1 + 0x154);
    if (*(char *)(lVar5 + 0x282) != cVar1) {
      lVar2 = *(longlong *)(lVar5 + 0x230);
      *(char *)(lVar5 + 0x282) = cVar1;
      if (cVar1 == '\0') {
        uVar7 = 0x3f800000;
      }
      else {
        uVar7 = 0x400ccccd;
      }
      puVar4 = (undefined8 *)FName::FName(local_d8,L"GammaCorrectionExponent",1);
      FUN_1425a2750(*(undefined8 *)(lVar2 + 0x10),*puVar4,uVar7);
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    *(undefined1 *)(lVar5 + 0x2d9) = *(undefined1 *)(param_1 + 0x153);
    *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x27c) = *(undefined4 *)(param_1 + 0x158);
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
    if ((plVar3 != (longlong *)0x0) && (1 < *(int *)(param_1 + 0x1e8))) {
      if (*(int *)(param_1 + 0x1e8) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(param_1 + 0x1e0);
      }
      lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_c8,puVar6);
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(lVar5 + 0x88));
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14048b700 FUN_14048b700 body=8 status=ok
// SIG undefined FUN_14048b700(void)

undefined8 FUN_14048b700(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// FUNCTION 14048b710 FUN_14048b710 body=284 status=ok
// SIG undefined FUN_14048b710(void)

void FUN_14048b710(undefined8 *param_1,undefined4 param_2,char *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong local_10;
  
  plVar1 = (longlong *)param_1[2];
  *(undefined1 *)(param_1 + 8) = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != '\0');
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_18,uVar3,param_3,uVar3,0x3f);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
  FUN_140483870(uVar2,param_1);
  uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x38))();
  FUN_140483870(uVar2,param_1);
  uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
  FUN_140483870(uVar2,param_1);
  uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x50))();
  FUN_140483870(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014048b829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 14048b830 FUN_14048b830 body=77 status=ok
// SIG undefined FUN_14048b830(void)

void FUN_14048b830(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_R9;
  
  plVar4 = *(longlong **)(in_R9 + 8);
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
  return;
}



// FUNCTION 14048b880 FUN_14048b880 body=1672 status=ok
// SIG undefined FUN_14048b880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14048b880(longlong *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  DWORD *pDVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  uint uVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (DAT_146850620 == 0) {
    return 0;
  }
  if (DAT_146850628 == 0) {
    return 0;
  }
  plVar17 = (longlong *)0x0;
  LOCK();
  iVar6 = *(int *)(DAT_146850628 + 8);
  if (iVar6 == 0) {
    *(int *)(DAT_146850628 + 8) = 0;
    iVar6 = 0;
  }
  UNLOCK();
  if (iVar6 < 1) {
    return 0;
  }
  if ((DAT_146850540 == (longlong *)0x0) ||
     ((*(byte *)((longlong)DAT_146850540 + 0x94) & 0x18) != 0x10)) {
LAB_14048b907:
    plVar14 = param_1;
    if ((DAT_146850548 == (longlong *)0x0) || (plVar14 = DAT_146850548, DAT_146850548 == param_1)) {
      DAT_146850548 = plVar14;
      plVar14 = *(longlong **)param_1[9];
      lVar13 = *plVar14;
      fVar23 = (float)FUN_14046cee0();
      (**(code **)(lVar13 + 0x68))(plVar14,(double)fVar23);
    }
  }
  else {
    uVar12 = (**(code **)(*DAT_146850540 + 0x148))();
    cVar5 = FUN_14254a160(uVar12);
    if (cVar5 != '\0') goto LAB_14048b907;
  }
  plVar14 = (longlong *)param_1[1];
  if (plVar14 != (longlong *)0x0) {
    iVar6 = (int)param_1[0x25];
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 0x78))(plVar14,1);
        iVar6 = (int)param_1[0x25];
      }
      *(int *)(param_1 + 0x25) = iVar6 + -1;
    }
    LOCK();
    iVar6 = (int)param_1[0x24];
    if (iVar6 == 0) {
      *(int *)(param_1 + 0x24) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    LOCK();
    iVar7 = *(int *)((longlong)param_1 + 0x124);
    if (iVar7 == 0) {
      *(int *)((longlong)param_1 + 0x124) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar6 != iVar7) {
      (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],0);
    }
    LOCK();
    iVar6 = *(int *)((longlong)param_1 + 0x124);
    if (iVar6 == 0) {
      *(int *)((longlong)param_1 + 0x124) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    LOCK();
    uVar21 = *(uint *)(param_1 + 0x24);
    if (uVar21 == 0) {
      *(uint *)(param_1 + 0x24) = 0;
      uVar21 = 0;
    }
    UNLOCK();
    if ((iVar6 + 1U & *(uint *)(param_1 + 0x21)) != uVar21) {
      lVar13 = *(longlong *)param_1[1];
      fVar23 = (float)FUN_14046cee0(param_1[9]);
      uVar8 = (**(code **)(lVar13 + 0x30))(param_1[1],(double)fVar23);
      LOCK();
      uVar21 = *(uint *)((longlong)param_1 + 0x124);
      if (uVar21 == 0) {
        *(uint *)((longlong)param_1 + 0x124) = 0;
        uVar21 = 0;
      }
      UNLOCK();
      uVar18 = uVar21 + 1 & *(uint *)(param_1 + 0x21);
      LOCK();
      uVar9 = *(uint *)(param_1 + 0x24);
      if (uVar9 == 0) {
        *(uint *)(param_1 + 0x24) = 0;
        uVar9 = 0;
      }
      UNLOCK();
      if (uVar18 != uVar9) {
        *(undefined4 *)(param_1[0x22] + (longlong)(int)(*(uint *)(param_1 + 0x21) & uVar21) * 4) =
             uVar8;
        LOCK();
        *(uint *)((longlong)param_1 + 0x124) = uVar18;
        UNLOCK();
      }
    }
    (**(code **)(*(longlong *)param_1[1] + 0x78))((longlong *)param_1[1],0);
    lVar13 = param_1[0x27];
    if (lVar13 != 0) {
      uVar21 = *(uint *)(lVar13 + 0xa0) & 0x80000001;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xfffffffe) + 1;
      }
      lVar22 = (longlong)(int)uVar21 * 0x10 + lVar13;
      uVar20 = (ulonglong)*(int *)(lVar22 + 0x60);
      plVar17 = *(longlong **)(lVar22 + 0x58);
      plVar14 = plVar17 + uVar20 * 0x18;
      if (plVar17 != plVar14) {
        do {
          FUN_14047f1d0(lVar13,plVar17,uVar21);
          plVar17 = plVar17 + 0x18;
        } while (plVar17 != plVar14);
        uVar20 = (ulonglong)*(uint *)(lVar22 + 0x60);
        plVar17 = *(longlong **)(lVar22 + 0x58);
      }
      uVar21 = (uint)uVar20;
      while (uVar21 != 0) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 0x18;
        uVar21 = (int)uVar20 - 1;
        uVar20 = (ulonglong)uVar21;
      }
      *(undefined4 *)(lVar22 + 0x60) = 0;
      if (*(int *)(lVar22 + 100) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::
        ResizeTo(lVar22 + 0x58,0);
      }
      *(int *)(lVar13 + 0xa0) = *(int *)(lVar13 + 0xa0) + 1;
    }
    return 1;
  }
  if ((char)param_1[0x26] == '\0') {
    return 0;
  }
  if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
    return 0;
  }
  lVar13 = *(longlong *)param_1[0x1a];
  if (lVar13 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar13 + 0x60) == 0) {
    return 0;
  }
  if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
    return 0;
  }
  if (param_1[0xb] == 0) {
    return 0;
  }
  param_1[0xd] = param_1[5];
  param_1[0x15] = param_1[7];
  lVar13 = (**(code **)(**(longlong **)param_1[9] + 0x18))();
  param_1[1] = lVar13;
  if (1 < (int)param_1[0x19]) {
    if ((int)param_1[0x19] == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)param_1[0x18];
    }
    lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar19);
    (**(code **)(*(longlong *)param_1[1] + 0x10))
              ((longlong *)param_1[1],*(undefined8 *)(lVar13 + 0x88));
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x29);
  if (cVar5 == '\0') goto LAB_14048bcd3;
  lVar13 = operator_new(0xb0);
  plVar14 = plVar17;
  if (lVar13 != 0) {
    plVar14 = (longlong *)FUN_140451880(lVar13);
  }
  pplVar2 = (longlong **)(param_1 + 0x27);
  if (pplVar2 == &local_128) {
    local_128 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      puVar16 = (undefined8 *)*plVar14;
      goto LAB_14048bc0f;
    }
  }
  else {
    plVar4 = *pplVar2;
    *pplVar2 = plVar14;
    local_128 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      puVar16 = (undefined8 *)*plVar4;
      plVar14 = plVar4;
LAB_14048bc0f:
      (*(code *)*puVar16)(plVar14,1);
    }
  }
  plVar14 = *pplVar2;
  uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x60))();
  uVar10 = (**(code **)(*(longlong *)param_1[1] + 0x58))();
  *(undefined4 *)(plVar14 + 0x15) = uVar8;
  *(undefined4 *)((longlong)plVar14 + 0xa4) = uVar10;
  uVar12 = FWeakObjectPtr::Get(param_1 + 0x29);
  (**(code **)(*(longlong *)param_1[1] + 0x188))((longlong *)param_1[1],*pplVar2,uVar12);
  lVar13 = operator_new(0xd0);
  plVar14 = plVar17;
  if (lVar13 != 0) {
    plVar14 = (longlong *)FUN_140451a20(lVar13);
  }
  pplVar2 = (longlong **)(param_1 + 0x28);
  if (pplVar2 == &local_120) {
    local_120 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      puVar16 = (undefined8 *)*plVar14;
      goto LAB_14048bcb1;
    }
  }
  else {
    plVar4 = *pplVar2;
    *pplVar2 = plVar14;
    local_120 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      puVar16 = (undefined8 *)*plVar4;
      plVar14 = plVar4;
LAB_14048bcb1:
      (*(code *)*puVar16)(plVar14,1);
    }
  }
  plVar14 = *pplVar2 + 1;
  if (*pplVar2 == (longlong *)0x0) {
    plVar14 = plVar17;
  }
  (**(code **)(*(longlong *)param_1[1] + 400))((longlong *)param_1[1],plVar14);
LAB_14048bcd3:
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
    plVar17 = (longlong *)param_1[0xc];
    local_108 = param_1[0xb];
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    local_110 = param_1;
    local_100 = plVar17;
    FUN_140466510(&local_110,2,local_f8);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar17 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
  }
  else {
    pDVar15 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar14 = TlsGetValue(*pDVar15);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)operator_new(0x18);
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = 0;
        plVar14[1] = 0;
        *(undefined4 *)(plVar14 + 2) = 0;
        plVar17 = plVar14;
      }
      TlsSetValue(*pDVar15,plVar17);
      plVar14 = plVar17;
    }
    plVar17 = (longlong *)plVar14[1];
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)*plVar14;
      if (plVar17 == (longlong *)0x0) {
        lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar15 + 2);
        plVar14[1] = lVar13;
        if (lVar13 == 0) {
          puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar14[1] = (longlong)puVar16;
          lVar13 = 0x1f;
          do {
            puVar3 = puVar16 + 0x20;
            *puVar16 = puVar3;
            lVar13 = lVar13 + -1;
            puVar16 = puVar3;
          } while (lVar13 != 0);
          *puVar3 = 0;
        }
        plVar17 = (longlong *)plVar14[1];
        iVar6 = 0x20;
        *(undefined4 *)(plVar14 + 2) = 0x20;
      }
      else {
        iVar6 = 0x20;
        plVar14[1] = (longlong)plVar17;
        *(undefined4 *)(plVar14 + 2) = 0x20;
        *plVar14 = 0;
      }
    }
    else {
      iVar6 = (int)plVar14[2];
    }
    plVar14[1] = *plVar17;
    *(int *)(plVar14 + 2) = iVar6 + -1;
    *plVar17 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar17 + 1) = 0xff;
    local_f0 = 0;
    local_e8 = 0;
    *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
    *plVar17 = (longlong)&PTR_FUN_143f4c960;
    *(undefined1 *)(plVar17 + 5) = 0;
    plVar17[6] = 0;
    plVar17[2] = (longlong)param_1;
    plVar17[3] = param_1[0xb];
    lVar13 = param_1[0xc];
    plVar17[4] = lVar13;
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    lVar13 = plVar17[6];
    piVar1 = (int *)(lVar13 + 0x48);
    if (lVar13 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_118 = lVar13;
    FUN_14048a160(plVar17,0,0xff,1);
    if (lVar13 != 0) {
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FGraphEvent::Recycle(local_118);
      }
    }
  }
  return 0;
}



// FUNCTION 14048bf10 FUN_14048bf10 body=398 status=ok
// SIG undefined FUN_14048bf10(void)

void FUN_14048bf10(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 8);
  if ((*(char *)(param_1 + 0x2d8) != '\0') && (plVar1 != (longlong *)0x0)) {
    *(undefined1 *)(param_1 + 0x2d8) = 0;
    (**(code **)(*plVar1 + 0x78))(plVar1,0);
  }
  fVar12 = *(float *)(param_1 + 0x274) * param_2[1];
  fVar11 = *(float *)(param_1 + 0x274) * *param_2;
  iVar8 = (int)ROUND(fVar12 + fVar12 + 0.5) >> 1;
  iVar7 = (int)ROUND(fVar11 + fVar11 + 0.5) >> 1;
  if ((iVar7 < 1) || (iVar8 < 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((iVar7 == *(int *)(param_1 + 0x260)) && (iVar8 == *(int *)(param_1 + 0x264))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((plVar1 != (longlong *)0x0) && (bVar3)) && (bVar4)) {
    *(int *)(param_1 + 0x260) = iVar7;
    *(int *)(param_1 + 0x264) = iVar8;
    FUN_140484300(*(undefined8 *)(param_1 + 0x240));
    *(undefined1 *)(param_1 + 0x281) = 1;
  }
  if ((*(char *)(param_1 + 0x281) != '\0') && (plVar1 != (longlong *)0x0)) {
    plVar1 = *(longlong **)(param_1 + 0x230);
    lVar2 = **(longlong **)(*(longlong *)(param_1 + 0x240) + 0xd0);
    plVar1[3] = lVar2;
    puVar6 = (undefined8 *)FName::FName(local_res8,L"UITexture",1);
    FUN_1425a28b0(plVar1[2],*puVar6,lVar2);
    uVar9 = (**(code **)(*(longlong *)plVar1[3] + 0x2b8))();
    uVar10 = (**(code **)(*(longlong *)plVar1[3] + 0x2b0))();
    lVar2 = *plVar1;
    *(undefined4 *)(lVar2 + 0xc) = uVar9;
    *(undefined4 *)(lVar2 + 8) = uVar10;
    *(undefined1 *)(param_1 + 0x281) = 0;
  }
  cVar5 = FUN_14048b880(*(undefined8 *)(param_1 + 0x240));
  if (cVar5 != '\0') {
    FUN_14047ea60(*(undefined8 *)(param_1 + 0x240));
    return;
  }
  return;
}



// FUNCTION 14048c0a0 FUN_14048c0a0 body=175 status=ok
// SIG undefined FUN_14048c0a0(void)

void FUN_14048c0a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_1422409a0();
  if ((((DAT_146850540 == 0) && (lVar3 = param_1, (*(byte *)(param_1 + 0x94) & 0x18) == 0x10)) ||
      (lVar3 = DAT_146850540, param_1 == DAT_146850540)) &&
     (DAT_146850540 = lVar3, puVar1 = *(undefined8 **)(param_1 + 0x458), puVar1 != (undefined8 *)0x0
     )) {
    plVar2 = (longlong *)*puVar1;
    plVar4 = (longlong *)FDateTime::Now(local_res8);
    (**(code **)(*plVar2 + 0x68))(plVar2,(double)((*plVar4 - puVar1[3]) / 10000));
    (**(code **)(*plVar2 + 0x90))(plVar2,DAT_1461f61d8,DAT_1461f61d0);
  }
  return;
}



// FUNCTION 14048c150 FUN_14048c150 body=49 status=ok
// SIG undefined FUN_14048c150(void)

void FUN_14048c150(longlong param_1)

{
  char cVar1;
  
  FUN_142357eb0();
  cVar1 = FUN_14048b880(*(undefined8 *)(param_1 + 0x200));
  if (cVar1 != '\0') {
    FUN_1423424c0(param_1);
    return;
  }
  return;
}



// FUNCTION 14048c190 FUN_14048c190 body=997 status=ok
// SIG undefined FUN_14048c190(void)

void FUN_14048c190(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  void **ppvVar15;
  void *_Src;
  uint uVar16;
  short *psVar17;
  undefined8 local_res8;
  void *local_168;
  ulonglong local_160;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [8];
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined1 local_d0 [40];
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  FUN_142357eb0();
  cVar9 = FUN_14048b880(*(undefined8 *)(param_1 + 0x200));
  if (cVar9 != '\0') {
    FUN_1423424c0(param_1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x200) + 0x130) != '\0') {
    if (*(char *)(param_1 + 0x268) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x250) != '\0') {
      return;
    }
    plVar11 = (longlong *)FUN_14046c320(param_1);
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    local_d8 = 0;
    FName::FName(local_148,L"UITexture",1);
    local_140 = 0x202ffff;
    local_13c = 0xffffffff;
    cVar9 = (**(code **)(*plVar11 + 0x428))(plVar11,local_148,&local_d8,0);
    if (cVar9 == '\0') {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    puVar12 = (undefined8 *)FName::FName(local_d0,L"UITexture",1);
    FUN_1425a28b0(plVar11,*puVar12,uVar1);
    *(undefined1 *)(param_1 + 0x268) = 1;
    return;
  }
  _Src = (void *)0x0;
  lVar14 = -1;
  if (*(char *)(param_1 + 0x250) == '\0') {
    plVar11 = (longlong *)FUN_14046c320(param_1);
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    local_res8 = 0;
    FName::FName(local_158,L"UITexture",1);
    local_150 = 0x202ffff;
    local_14c = 0xffffffff;
    cVar9 = (**(code **)(*plVar11 + 0x428))(plVar11,local_158,&local_res8,0);
    if (cVar9 == '\0') {
      return;
    }
  }
  uStack_130 = *(undefined4 *)(param_1 + 0x248);
  uStack_12c = *(undefined4 *)(param_1 + 0x24c);
  uStack_f0 = 0x41000000;
  local_138 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 1;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 200;
  local_f8 = 0;
  uStack_ec = 0;
  uStack_ea = 0;
  local_e8 = 0;
  if (*(int *)(param_1 + 0x240) == 0) {
    psVar17 = &DAT_143f3eda8;
  }
  else {
    psVar17 = *(short **)(param_1 + 0x238);
  }
  local_168 = (void *)0x0;
  local_160 = 0;
  uVar16 = 0;
  if ((psVar17 != (short *)0x0) && (uVar16 = 0, *psVar17 != 0)) {
    do {
      lVar14 = lVar14 + 1;
    } while (psVar17[lVar14] != 0);
    uVar13 = (int)lVar14 + 1;
    local_160 = (ulonglong)uVar13;
    uVar16 = uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      uVar16 = (uint)local_160;
    }
    _Src = local_168;
    FGenericPlatformString::Memcpy(local_168,psVar17,(longlong)(int)uVar13 * 2);
  }
  uVar8 = local_f8;
  uVar7 = uStack_120;
  uVar6 = local_128;
  uVar5 = local_138;
  uVar1 = CONCAT44(uStack_12c,uStack_130);
  uVar2 = CONCAT44(uStack_104,uStack_108);
  uVar3 = CONCAT44(uStack_fc,uStack_100);
  uVar4 = CONCAT16(uStack_ea,CONCAT24(uStack_ec,uStack_f0));
  lVar14 = *(longlong *)(param_1 + 0x200);
  local_a8 = local_118;
  uStack_a0 = CONCAT71((int7)(CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110)) >> 8),
                       *(undefined1 *)(param_1 + 0x1a8));
  if ((DAT_146850620 == 0) || (DAT_146850628 == 0)) {
LAB_14048c3be:
    if (*(char *)(lVar14 + 0x130) == '\0') goto LAB_14048c477;
  }
  else {
    LOCK();
    iVar10 = *(int *)(DAT_146850628 + 8);
    if (iVar10 == 0) {
      *(int *)(DAT_146850628 + 8) = 0;
      iVar10 = 0;
    }
    UNLOCK();
    _Src = local_168;
    uVar16 = (uint)local_160;
    if (iVar10 < 1) goto LAB_14048c3be;
  }
  if (*(longlong *)(lVar14 + 0x48) != 0) {
    *(undefined1 *)(lVar14 + 0x130) = 1;
    FUN_1404854d0(lVar14,uStack_130,uStack_12c);
    *(undefined8 *)(lVar14 + 0x68) = uVar5;
    *(undefined8 *)(lVar14 + 0x70) = uVar1;
    *(undefined8 *)(lVar14 + 0x78) = uVar6;
    *(undefined8 *)(lVar14 + 0x80) = uVar7;
    *(undefined8 *)(lVar14 + 0x88) = local_a8;
    *(undefined8 *)(lVar14 + 0x90) = uStack_a0;
    *(undefined8 *)(lVar14 + 0x98) = uVar2;
    *(undefined8 *)(lVar14 + 0xa0) = uVar3;
    *(undefined8 *)(lVar14 + 0xa8) = uVar8;
    *(ulonglong *)(lVar14 + 0xb0) = CONCAT17(uStack_e9,uVar4);
    *(undefined8 *)(lVar14 + 0xb8) = local_e8;
    ppvVar15 = (void **)(lVar14 + 0xc0);
    if (ppvVar15 != &local_168) {
      *(uint *)(lVar14 + 200) = uVar16;
      if ((uVar16 == 0) && (*(int *)(lVar14 + 0xcc) == 0)) {
        *(undefined4 *)(lVar14 + 0xcc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar15,uVar16);
        _guard_xfg_dispatch_icall_nop(*ppvVar15,_Src,(longlong)(int)uVar16 * 2);
      }
    }
  }
LAB_14048c477:
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 14048c580 FUN_14048c580 body=48 status=ok
// SIG undefined FUN_14048c580(void)

void FUN_14048c580(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14048b880(*(undefined8 *)(param_1 + 0x240));
  if (cVar1 != '\0') {
    FUN_14047ea60(*(undefined8 *)(param_1 + 0x240));
    return;
  }
  return;
}



// FUNCTION 14048c5b0 FUN_14048c5b0 body=254 status=ok
// SIG undefined FUN_14048c5b0(void)

undefined8 FUN_14048c5b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_44;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)FUN_14046ccd0(param_1,param_3);
  *puVar3 = param_3;
  puVar3[1] = lVar1;
  puVar3[2] = *(undefined8 *)(param_1 + 0x30);
  uVar2 = (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_2 + 0x70))(param_2,2);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),param_2,param_3);
  (**(code **)(*param_2 + 0x70))(param_2,uVar2);
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar2 = FUN_14048e930(*(undefined8 *)(lVar1 + 0x70));
  *param_4 = CONCAT44(uStack_44,uVar2);
  param_4[1] = &LAB_1404620a0;
  param_4[2] = &LAB_140462070;
  param_4[3] = uVar4;
  param_4[4] = puVar3;
  return 0x140462001;
}



// FUNCTION 14048c6f0 FUN_14048c6f0 body=83 status=ok
// SIG undefined FUN_14048c6f0(void)

undefined8 FUN_14048c6f0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  undefined4 local_res10;
  
  FLinearColor::ToFColor(*(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_2,&local_res8,0);
  local_res10 = CONCAT13(local_resa,CONCAT12(local_res9,CONCAT11(local_res8,local_resb)));
  *param_3 = local_res10;
  return CONCAT71((uint7)(uint3)((uint)local_res10 >> 8),1);
}



// FUNCTION 14048c750 FUN_14048c750 body=56 status=ok
// SIG undefined FUN_14048c750(void)

undefined8 FUN_14048c750(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x70);
  lVar2 = (**(code **)(*plVar1 + 0x3a8))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_2);
  *param_3 = (float)lVar2;
  return 1;
}



// FUNCTION 14048c790 FUN_14048c790 body=245 status=ok
// SIG undefined FUN_14048c790(void)

undefined8 FUN_14048c790(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uStack_24;
  
  uVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_2 + 0x70))(param_2,2);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  (**(code **)(*param_2 + 0x70))(param_2,uVar3);
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  lVar6 = param_1[3];
  if (lVar6 != 0) {
    lVar5 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14048c836;
  }
  lVar6 = 0;
LAB_14048c836:
  uVar1 = *(undefined8 *)(*(int *)(lVar6 + 0x44) + param_3);
  uVar3 = FUN_14048e930(param_1[3]);
  *param_4 = CONCAT44(uStack_24,uVar3);
  param_4[1] = uVar4;
  param_4[2] = uVar1;
  return 1;
}



// FUNCTION 14048c890 FUN_14048c890 body=245 status=ok
// SIG undefined FUN_14048c890(void)

undefined8 FUN_14048c890(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uStack_24;
  
  uVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_2 + 0x70))(param_2,2);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  (**(code **)(*param_2 + 0x70))(param_2,uVar3);
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  lVar6 = param_1[3];
  if (lVar6 != 0) {
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14048c936;
  }
  lVar6 = 0;
LAB_14048c936:
  iVar1 = *(int *)(lVar6 + 0x44);
  uVar3 = FUN_14048e930(param_1[3]);
  param_3 = iVar1 + param_3;
  *param_4 = CONCAT44(uStack_24,uVar3);
  param_4[1] = uVar4;
  param_4[2] = param_3;
  return CONCAT71((int7)((ulonglong)param_3 >> 8),1);
}



// FUNCTION 14048c990 FUN_14048c990 body=227 status=ok
// SIG undefined FUN_14048c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14048c990(longlong param_1,longlong param_2,uint *param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar5 = (longlong)*(int *)(lVar2 + 0x44);
  pfVar1 = (float *)(lVar5 + param_2);
  fVar6 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar11 = fVar6 * (fVar6 + fVar6);
  fVar12 = fVar4 * (fVar4 + fVar4);
  fVar6 = (fVar3 + fVar3) * fVar6;
  fVar10 = (fVar4 + fVar4) * pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x20 + param_2);
  fVar4 = pfVar1[1];
  uVar7 = (uint)((_DAT_146850560 - (fVar12 + fVar3 * (fVar3 + fVar3))) * *pfVar1) & _DAT_146850570;
  uVar8 = (uint)((fRam0000000146850564 - (fVar12 + fVar11)) * fVar4) & uRam0000000146850574;
  uVar9 = (uint)((fRam000000014685056c - (fVar11 + fVar11)) * pfVar1[3]) & uRam000000014685057c;
  param_3[1] = (uint)((fVar10 + fVar6) * *pfVar1);
  *param_3 = uVar7;
  param_3[2] = (uint)(fVar4 * (fVar6 - fVar10));
  param_3[5] = uVar9;
  param_3[3] = uVar8;
  param_3[4] = uVar9;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 14048ca80 ToggleAllSeriesDraw body=32 status=ok
// SIG undefined ToggleAllSeriesDraw(void)

void UMSGChart::ToggleAllSeriesDraw(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140472260();
  FUN_140487520(param_1,cVar1 == '\0');
  return;
}



// FUNCTION 14048cad0 TotalSize body=26 status=ok
// SIG undefined TotalSize(void)

longlong FMemoryReader::TotalSize(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 8);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar2 <= *(longlong *)(param_1 + 0xa0)) {
    lVar1 = lVar2;
  }
  return lVar1;
}



// FUNCTION 14048cb00 FUN_14048cb00 body=880 status=ok
// SIG undefined FUN_14048cb00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * FUN_14048cb00(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  wchar_t *local_158;
  ulonglong local_150;
  wchar_t *local_148;
  longlong local_140;
  ulonglong local_138;
  wchar_t *local_130;
  uint local_128;
  undefined4 local_124;
  wchar_t *local_120;
  int local_118;
  longlong local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  void *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pwVar14 = (wchar_t *)0x0;
  local_158 = (wchar_t *)0x0;
  local_150 = 0;
  uVar15 = 0;
  lVar12 = -1;
  pwVar13 = pwVar14;
  uVar7 = uVar15;
  local_110 = param_1;
  if ((param_2 != (char *)0x0) && (lVar11 = lVar12, pwVar13 = (wchar_t *)0x0, *param_2 != '\0')) {
    do {
      lVar11 = lVar11 + 1;
    } while (param_2[lVar11] != '\0');
    uVar9 = (int)lVar11 + 1;
    local_150 = (ulonglong)uVar9;
    uVar7 = uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      uVar7 = (uint)local_150;
    }
    pwVar13 = local_158;
    local_168 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_158,uVar9,param_2,uVar9);
  }
  uVar9 = 0xffffffff;
  pwVar8 = pwVar13;
  do {
    if (pwVar8 == pwVar13 + (int)uVar7) {
LAB_14048cbc2:
      uVar16 = uVar15;
      if (uVar9 != 0xffffffff) {
        uVar16 = uVar9;
      }
      if (uVar7 == 0) {
        local_148 = L"";
        uVar9 = uVar15;
      }
      else {
        uVar9 = uVar7 - 1;
        local_148 = pwVar13;
      }
      uVar10 = uVar15;
      if ((-1 < (int)uVar16) && (uVar10 = uVar9, (int)uVar16 < (int)uVar9)) {
        uVar10 = uVar16;
      }
      local_130 = (wchar_t *)0x0;
      local_124 = 0;
      local_128 = uVar10 + 1;
      if (uVar10 == 0) {
        local_128 = uVar15;
      }
      if ((0 < (int)local_128) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0), pwVar8 = local_130,
         0 < (int)local_128)) {
        wcsncpy(local_130,local_148,(longlong)(int)uVar10);
        pwVar8[(int)uVar10] = L'\0';
      }
      if (uVar7 == 0) {
        pwVar8 = L"";
      }
      else {
        uVar15 = uVar7 - 1;
        pwVar8 = pwVar13;
      }
      uVar7 = uVar15 - (uVar16 + 1);
      if ((int)uVar7 < 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar15;
        if ((int)uVar7 < (int)uVar15) {
          uVar9 = uVar7;
        }
      }
      local_138 = 0;
      pwVar8 = pwVar8 + ((longlong)(int)uVar15 - (longlong)(int)uVar9);
      local_140 = 0;
      if ((pwVar8 != (wchar_t *)0x0) && (*pwVar8 != L'\0')) {
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar8[lVar12] != L'\0');
        uVar7 = (int)lVar12 + 1;
        local_138 = (ulonglong)uVar7;
        if (0 < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
        }
        FGenericPlatformString::Memcpy(local_140,pwVar8,(longlong)(int)uVar7 * 2);
      }
      FText::FText(local_108);
      cVar4 = FUN_141606040(&local_130,&local_140,local_108,0);
      if (cVar4 != '\0') {
        puVar6 = (undefined8 *)FText::ToString(local_108);
        local_120 = (wchar_t *)0x0;
        local_118 = *(int *)(puVar6 + 1);
        lVar12 = (longlong)local_118;
        _Src = (void *)*puVar6;
        bVar17 = local_118 == 0;
        pwVar8 = pwVar14;
        if (!bVar17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_118,0);
          pwVar8 = local_120;
          _guard_xfg_dispatch_icall_nop(local_120,_Src,lVar12 * 2);
          bVar17 = local_118 == 0;
        }
        pwVar14 = L"";
        if (!bVar17) {
          pwVar14 = pwVar8;
        }
        TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                  (local_e8,pwVar14);
        lVar12 = local_110;
        iVar5 = local_58 + 1;
        iVar3 = *(int *)(local_110 + 0x10);
        if (iVar3 < iVar5) {
          *(int *)(local_110 + 0x10) = iVar5;
          if (*(int *)(local_110 + 0x14) < iVar5) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_110 + 8,iVar3);
          }
        }
        else if ((iVar5 < iVar3) && (iVar5 != iVar3)) {
          *(int *)(local_110 + 0x10) = iVar5;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(local_110 + 8);
        }
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar12 + 8),local_60,(longlong)local_58);
        *(undefined1 *)((longlong)*(int *)(lVar12 + 0x10) + -1 + *(longlong *)(lVar12 + 8)) = 0;
        pwVar14 = *(wchar_t **)(lVar12 + 8);
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (pwVar8 != (wchar_t *)0x0) {
          FMemory::Free(pwVar8);
        }
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        pwVar13 = local_158;
        if ((int)lVar12 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)local_100 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          pwVar13 = local_158;
          if (iVar3 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
            pwVar13 = local_158;
          }
        }
      }
      if (local_140 != 0) {
        FMemory::Free();
      }
      if (local_130 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (pwVar13 != (wchar_t *)0x0) {
        FMemory::Free(pwVar13);
      }
      return pwVar14;
    }
    if (*pwVar8 == L'.') {
      uVar9 = (uint)((longlong)pwVar8 - (longlong)pwVar13 >> 1);
      goto LAB_14048cbc2;
    }
    pwVar8 = pwVar8 + 1;
  } while( true );
}



// FUNCTION 14048ce70 FUN_14048ce70 body=105 status=ok
// SIG undefined FUN_14048ce70(void)

undefined8 FUN_14048ce70(undefined4 param_1)

{
  switch(param_1) {
  case 7:
    return 8;
  default:
    return 1;
  case 9:
  case 10:
  case 0x21:
    return 3;
  case 0xb:
    return 10;
  case 0xc:
    return 0xb;
  case 0xe:
    return 7;
  case 0xf:
  case 0x12:
  case 0x1b:
    return 4;
  case 0x10:
  case 0x11:
  case 0x1d:
    return 6;
  case 0x13:
  case 0x14:
  case 0x1c:
    return 5;
  case 0x16:
    return 0;
  case 0x17:
    return 0xc;
  case 0x18:
    return 9;
  case 0x1e:
    return 2;
  }
}



// FUNCTION 14048cf50 FUN_14048cf50 body=700 status=ok
// SIG undefined FUN_14048cf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14048cf50(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((param_2 == 0) || (*(int *)(param_2 + 0xa0) == 0)) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_1;
    }
    lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,puVar10);
    (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(lVar5 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_3 + 0x198))(param_3);
    uVar1 = *(undefined4 *)(param_2 + 0xa0);
    if (*(int *)(param_1 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_1;
    }
    lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,puVar10);
    (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined8 *)(lVar5 + 0x88),uVar1);
    if (local_68 != 0) {
      FMemory::Free();
    }
    iVar11 = 0;
    if (0 < *(int *)(param_2 + 0xa0)) {
      lVar5 = 0;
      do {
        lVar8 = *(longlong *)(param_2 + 0x98);
        switch(*(undefined4 *)(lVar5 + lVar8)) {
        case 0:
          (**(code **)(*plVar4 + 0x108))
                    (plVar4,*(undefined4 *)
                             (*(longlong *)(param_2 + 0x28) +
                             (longlong)*(int *)(lVar5 + 4 + lVar8) * 4));
          break;
        case 1:
          (**(code **)(*plVar4 + 200))
                    (plVar4,*(undefined4 *)
                             (*(longlong *)(param_2 + 0x48) +
                             (longlong)*(int *)(lVar5 + 4 + lVar8) * 4));
          break;
        case 2:
          (**(code **)(*plVar4 + 0x120))
                    (plVar4,*(undefined1 *)
                             ((longlong)*(int *)(lVar5 + 4 + lVar8) + *(longlong *)(param_2 + 0x58))
                    );
          break;
        case 3:
          puVar9 = (undefined8 *)
                   ((longlong)*(int *)(lVar5 + 4 + lVar8) * 0x10 + *(longlong *)(param_2 + 0x38));
          if (*(int *)(puVar9 + 1) == 0) {
            (**(code **)(*plVar4 + 0xb0))(plVar4,&DAT_143f3eda8);
          }
          else {
            (**(code **)(*plVar4 + 0xb0))(plVar4,*puVar9);
          }
          break;
        case 4:
          lVar8 = (longlong)*(int *)(lVar5 + 4 + lVar8);
          FUN_140460180(plVar4,*(undefined8 *)(*(longlong *)(param_2 + 0x78) + 8 + lVar8 * 0x18),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x78) + lVar8 * 0x18));
          break;
        case 5:
          cVar3 = FWeakObjectPtr::IsValid
                            (*(longlong *)(param_2 + 0x68) +
                             (longlong)*(int *)(lVar5 + 4 + lVar8) * 8);
          if (cVar3 == '\0') {
            (**(code **)(*plVar4 + 0x98))(plVar4);
          }
          else {
            lVar6 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 0x68) +
                                        (longlong)*(int *)(lVar5 + 4 + lVar8) * 8);
            uVar2 = *(undefined8 *)(lVar6 + 0x10);
            uVar7 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 0x68) +
                                        (longlong)*(int *)(lVar5 + 4 + lVar8) * 8);
            FUN_1404600e0(plVar4,uVar7,uVar2);
          }
          break;
        case 6:
          FUN_14045fe50(plVar4,*(longlong *)(param_2 + 0x88) +
                               (longlong)*(int *)(lVar5 + 4 + lVar8) * 0x18);
        }
        iVar11 = iVar11 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar11 < *(int *)(param_2 + 0xa0));
    }
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  return;
}



// FUNCTION 14048d230 FUN_14048d230 body=91 status=ok
// SIG undefined FUN_14048d230(void)

void FUN_14048d230(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x168))();
    if (cVar2 != '\0') {
      FUN_14048cf50(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8));
    }
  }
  return;
}



// FUNCTION 14048d290 FUN_14048d290 body=96 status=ok
// SIG undefined FUN_14048d290(void)

void FUN_14048d290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if (((param_1 != 0) &&
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8), plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x168))(), cVar2 != '\0')) {
    FUN_14048cf50(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8));
  }
  return;
}



// FUNCTION 14048d2f0 FUN_14048d2f0 body=133 status=ok
// SIG undefined FUN_14048d2f0(void)

void FUN_14048d2f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar2 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
  }
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x168))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x100) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x110);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
      }
      FUN_14048cf50(param_2,param_3,uVar3);
    }
  }
  return;
}



// FUNCTION 14048d380 FUN_14048d380 body=2317 status=ok
// SIG undefined FUN_14048d380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14048d380(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  void *_Src;
  short *psVar3;
  char cVar4;
  uint uVar5;
  BOOL BVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong **pplVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auStack_528 [32];
  undefined2 local_508;
  int local_4f8;
  int local_4f4;
  int local_4f0 [2];
  longlong *local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  ulonglong local_4d0;
  longlong local_4c8;
  ulonglong local_4c0;
  longlong local_4b8;
  ulonglong local_4b0;
  longlong local_4a8;
  ulonglong local_4a0;
  void *local_498;
  int local_490;
  undefined4 local_48c;
  longlong local_488;
  undefined1 local_480 [8];
  short *local_478;
  short *local_470;
  short *local_468;
  undefined8 *local_460;
  undefined8 local_458;
  longlong *local_450;
  longlong *local_448;
  undefined1 local_440 [32];
  undefined8 local_420;
  longlong *local_418;
  longlong *local_410 [2];
  longlong **local_400;
  undefined1 *local_3f8;
  undefined1 local_3f0 [32];
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined1 local_3c0 [8];
  longlong *local_3b8;
  short local_3a8 [128];
  short *local_2a8;
  short *local_2a0;
  int local_298;
  short local_288 [128];
  short *local_188;
  short *local_180;
  int local_178;
  short local_168 [128];
  short *local_68;
  short *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  local_490 = *(int *)(param_2 + 1);
  lVar13 = (longlong)local_490;
  uVar18 = 0;
  _Src = (void *)*param_2;
  local_498 = (void *)0x0;
  local_488 = param_1;
  local_460 = param_2;
  local_458 = param_4;
  if (local_490 == 0) {
    local_48c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_498,local_490,0);
    _guard_xfg_dispatch_icall_nop(local_498,_Src,lVar13 * 2);
  }
  plVar7 = (longlong *)FHttpModule::Get();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,local_3c0);
  local_4e8 = (longlong *)*puVar8;
  local_4e0 = (longlong *)puVar8[1];
  if (local_4e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
    UNLOCK();
  }
  if (local_3b8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_3b8 + 1;
    lVar13 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_3b8)(local_3b8);
      LOCK();
      piVar1 = (int *)((longlong)local_3b8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_3b8 + 8))(local_3b8,1);
      }
    }
  }
  (**(code **)(*local_4e8 + 0x50))(local_4e8,&local_498);
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  if (uVar5 != 0) {
    do {
      lVar13 = (**(code **)(*param_3 + 0x50))(param_3,uVar18);
      local_2a8 = (short *)0x0;
      if (lVar13 == 0) {
        local_298 = 0;
        local_2a0 = (short *)0x0;
      }
      else {
        uVar14 = 0xffffffffffffffff;
        do {
          uVar15 = uVar14;
          uVar14 = uVar15 + 1;
        } while (*(char *)(lVar13 + uVar14) != '\0');
        local_4f8 = 0;
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_4f8,0x7fffffff,lVar13,uVar14 & 0xffffffff);
        local_298 = local_4f8;
        uVar16 = local_4f8 + 1;
        if (uVar16 < 0x81) {
          if (local_2a8 != (short *)0x0) {
            lVar11 = 0;
LAB_14048d50d:
            local_2a8 = (short *)FMemory::Realloc(local_2a8,lVar11,0);
          }
        }
        else if ((local_2a8 != (short *)0x0) || (uVar16 != 0)) {
          lVar11 = (longlong)(int)uVar16 * 2;
          goto LAB_14048d50d;
        }
        local_478 = local_3a8;
        if (local_2a8 != (short *)0x0) {
          local_478 = local_2a8;
        }
        local_2a0 = local_478;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_478,uVar16,lVar13,(int)uVar15 + 2);
      }
      psVar3 = local_2a0;
      local_4c8 = 0;
      local_4c0 = 0;
      if ((local_2a0 != (short *)0x0) && (*local_2a0 != 0)) {
        lVar13 = -1;
        do {
          lVar11 = lVar13 + 1;
          lVar13 = lVar13 + 1;
        } while (local_2a0[lVar11] != 0);
        uVar16 = (int)lVar13 + 1;
        local_4c0 = (ulonglong)uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,0);
        }
        FGenericPlatformString::Memcpy(local_4c8,psVar3,(longlong)(int)uVar16 * 2);
      }
      if (local_2a8 != (short *)0x0) {
        FMemory::Free();
      }
      lVar13 = (**(code **)(*param_3 + 0x38))(param_3,uVar18);
      local_188 = (short *)0x0;
      if (lVar13 == 0) {
        local_178 = 0;
        local_180 = (short *)0x0;
      }
      else {
        uVar14 = 0xffffffffffffffff;
        do {
          uVar15 = uVar14;
          uVar14 = uVar15 + 1;
        } while (*(char *)(lVar13 + uVar14) != '\0');
        local_4f4 = 0;
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_4f4,0x7fffffff,lVar13,uVar14 & 0xffffffff);
        local_178 = local_4f4;
        uVar16 = local_4f4 + 1;
        if (uVar16 < 0x81) {
          if (local_188 != (short *)0x0) {
            lVar11 = 0;
LAB_14048d659:
            local_188 = (short *)FMemory::Realloc(local_188,lVar11,0);
          }
        }
        else if ((local_188 != (short *)0x0) || (uVar16 != 0)) {
          lVar11 = (longlong)(int)uVar16 * 2;
          goto LAB_14048d659;
        }
        local_470 = local_288;
        if (local_188 != (short *)0x0) {
          local_470 = local_188;
        }
        local_180 = local_470;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_470,uVar16,lVar13,(int)uVar15 + 2);
      }
      psVar3 = local_180;
      local_4d8 = 0;
      local_4d0 = 0;
      if ((local_180 != (short *)0x0) && (*local_180 != 0)) {
        lVar13 = -1;
        do {
          lVar11 = lVar13 + 1;
          lVar13 = lVar13 + 1;
        } while (local_180[lVar11] != 0);
        uVar16 = (int)lVar13 + 1;
        local_4d0 = (ulonglong)uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
        }
        FGenericPlatformString::Memcpy(local_4d8,psVar3,(longlong)(int)uVar16 * 2);
      }
      if (local_188 != (short *)0x0) {
        FMemory::Free();
      }
      (**(code **)(*local_4e8 + 0x68))(local_4e8,&local_4c8,&local_4d8);
      if (local_4d8 != 0) {
        FMemory::Free();
      }
      if (local_4c8 != 0) {
        FMemory::Free();
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar5);
  }
  lVar13 = (**(code **)(*param_3 + 0x58))(param_3);
  local_68 = (short *)0x0;
  if (lVar13 == 0) {
    local_60 = (short *)0x0;
    local_58 = 0;
  }
  else {
    uVar14 = 0xffffffffffffffff;
    do {
      uVar15 = uVar14;
      uVar14 = uVar15 + 1;
    } while (*(char *)(lVar13 + uVar14) != '\0');
    local_4f0[0] = 0;
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_4f0,0x7fffffff,lVar13,uVar14 & 0xffffffff);
    local_58 = local_4f0[0];
    uVar18 = local_4f0[0] + 1;
    if (uVar18 < 0x81) {
      if (local_68 != (short *)0x0) {
        lVar11 = 0;
LAB_14048d7e6:
        local_68 = (short *)FMemory::Realloc(local_68,lVar11,0);
      }
    }
    else if ((local_68 != (short *)0x0) || (uVar18 != 0)) {
      lVar11 = (longlong)(int)uVar18 * 2;
      goto LAB_14048d7e6;
    }
    local_468 = local_168;
    if (local_68 != (short *)0x0) {
      local_468 = local_68;
    }
    local_60 = local_468;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_468,uVar18,lVar13,(int)uVar15 + 2);
  }
  psVar3 = local_60;
  local_4a0 = 0;
  local_4a8 = 0;
  if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (local_60[lVar13] != 0);
    uVar18 = (int)lVar13 + 1;
    local_4a0 = (ulonglong)uVar18;
    if (0 < (int)uVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
    }
    FGenericPlatformString::Memcpy(local_4a8,psVar3,(longlong)(int)uVar18 * 2);
  }
  if (local_68 != (short *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*local_4e8 + 0x60))(local_4e8,&local_4a8);
  pcVar9 = (char *)(**(code **)(*param_3 + 0x20))(param_3);
  local_4b0 = 0;
  local_4b8 = 0;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (pcVar9[lVar13] != '\0');
    uVar18 = (int)lVar13 + 1;
    local_4b0 = (ulonglong)uVar18;
    if (0 < (int)uVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,0);
    }
    local_508 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_4b8,uVar18,pcVar9,uVar18);
  }
  (**(code **)(*local_4e8 + 0x48))(local_4e8,&local_4b8);
  pplVar10 = (longlong **)(**(code **)(*local_4e8 + 0x80))();
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  lVar13 = local_488;
  local_410[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = local_488;
    *plVar7 = (longlong)&PTR_GetPoolName_143f4d0e0;
    plVar7[2] = (longlong)FUN_140477d10;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar11;
    *plVar7 = (longlong)&PTR_GetPoolName_143f4d128;
  }
  if (local_410 != pplVar10) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(pplVar10 + 1) != 0) && (plVar12 = *pplVar10, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar10 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar10,0,0);
          *pplVar10 = plVar12;
        }
        *(undefined4 *)(pplVar10 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar10);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_410[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_410[0] != (longlong *)0x0) {
      FMemory::Free(local_410[0]);
    }
  }
  TTuple<FString,TArray<FString,FDefaultAllocator>_>::
  TTuple<FString,TArray<FString,FDefaultAllocator>_>(local_3f0,local_460);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar13 + 0x2b8);
  local_3d0 = local_458;
  local_3c8 = param_3;
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(lVar13 + 0x248) - *(int *)(lVar13 + 0x274) < (int)(uint)*(byte *)(lVar13 + 0x2b0)) {
    LeaveCriticalSection(lpCriticalSection);
    cVar4 = (**(code **)(*local_4e8 + 0x78))();
    if (cVar4 == '\0') {
      uVar17 = 0;
      goto LAB_14048dbf3;
    }
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_400 = &local_4e8;
    local_3f8 = local_3f0;
    FUN_14044d4d0(lVar13 + 0x240,local_480,&local_400,0);
  }
  else {
    local_450 = local_4e8;
    local_448 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    TTuple<FString,TArray<FString,FDefaultAllocator>_>::
    TTuple<FString,TArray<FString,FDefaultAllocator>_>(local_440,local_3f0);
    local_420 = local_3d0;
    local_418 = local_3c8;
    puVar8 = (undefined8 *)operator_new(0x50);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = local_450;
      puVar8[1] = local_448;
      if (local_448 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_448 + 1) = (int)local_448[1] + 1;
        UNLOCK();
      }
      TTuple<FString,TArray<FString,FDefaultAllocator>_>::
      TTuple<FString,TArray<FString,FDefaultAllocator>_>(puVar8 + 2,local_440);
      puVar8[6] = local_420;
      puVar8[7] = local_418;
      puVar8[8] = 0;
      puVar8[9] = 0;
      if (*(longlong *)(lVar13 + 0x298) == 0) {
        *(undefined8 **)(lVar13 + 0x2a0) = puVar8;
      }
      else {
        puVar8[8] = *(longlong *)(lVar13 + 0x298);
        *(undefined8 **)(*(longlong *)(lVar13 + 0x298) + 0x48) = puVar8;
      }
      *(undefined8 **)(lVar13 + 0x298) = puVar8;
      (**(code **)(*(longlong *)(lVar13 + 0x290) + 8))
                ((longlong *)(lVar13 + 0x290),*(int *)(lVar13 + 0x2a8) + 1);
    }
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (local_440);
    plVar7 = local_448;
    if (local_448 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_448 + 1;
      lVar13 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_448)(local_448);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_448 + 8))(local_448,1);
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar17 = 1;
LAB_14048dbf3:
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (local_3f0);
  if (local_4b8 != 0) {
    FMemory::Free();
  }
  if (local_4a8 != 0) {
    FMemory::Free();
  }
  plVar7 = local_4e0;
  if (local_4e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_4e0 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_4e0)(local_4e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_498 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar17;
}



// FUNCTION 14048dc90 FUN_14048dc90 body=720 status=ok
// SIG undefined FUN_14048dc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14048dc90(longlong param_1,undefined8 param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98 [2];
  longlong local_88;
  longlong local_80 [3];
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b8 = 0xffffffff;
  iVar1 = FUN_141592950(param_2,L"Texture2D\'",1);
  local_b8 = 0xffffffff;
  iVar2 = FUN_141592950(param_2,L"TextureRenderTarget2D\'",1);
  plVar4 = (longlong *)FString::FString(&local_40,param_2);
  plVar8 = (longlong *)0x0;
  local_88 = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_a8 = *plVar4;
  *plVar4 = 0;
  local_a0 = plVar4[1];
  plVar4[1] = 0;
  FUN_1417978e0(&local_88,&local_a8);
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  local_80[2] = local_88;
  FString::FString(local_68,local_80);
  local_40 = 0;
  uStack_3c = 0;
  uVar7 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (iVar1 == -1) {
    if (iVar2 != -1) {
      uVar7 = 2;
    }
  }
  else {
    local_98[0] = 0;
    if (local_80[2] == 0) {
      local_a8 = 0;
      local_a0 = 0;
    }
    else {
      FName::ToString(local_80 + 2,&local_a8);
    }
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x1f0,local_98,&local_a8);
    plVar4 = plVar8;
    if ((int)local_98[0] != -1) {
      plVar4 = (longlong *)((longlong)(int)local_98[0] * 0x38 + *(longlong *)(param_1 + 0x1f0));
    }
    plVar6 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = plVar8;
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (plVar6 != (longlong *)0x0) {
      uVar7 = 1;
      uVar5 = FString::FString(local_98,plVar6);
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_58,uVar5);
      FSoftObjectPath::operator=(local_80 + 2,uVar5);
      local_40 = (undefined4)plVar6[3];
      uStack_3c = *(undefined4 *)((longlong)plVar6 + 0x1c);
      uStack_38 = (undefined4)plVar6[2];
      uStack_34 = *(undefined4 *)((longlong)plVar6 + 0x14);
    }
  }
  plVar4 = (longlong *)operator_new(0x60);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = local_80[2];
    FString::FString(plVar4 + 1,local_68);
    plVar4[3] = local_88;
    FString::FString(plVar4 + 4,local_80);
    plVar4[6] = param_3;
    *(undefined4 *)(plVar4 + 7) = uVar7;
    plVar4[8] = 0;
    plVar4[9] = 0;
    *(undefined4 *)(plVar4 + 10) = local_40;
    *(undefined4 *)((longlong)plVar4 + 0x54) = uStack_3c;
    *(undefined4 *)(plVar4 + 0xb) = uStack_38;
    *(undefined4 *)((longlong)plVar4 + 0x5c) = uStack_34;
    plVar8 = plVar4;
  }
  local_98[0] = 0;
  if (*plVar8 == 0) {
    uVar5 = 0;
    FUN_140458770(plVar8);
    FMemory::operator_delete(plVar8,0x60);
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x118);
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = plVar8;
    LeaveCriticalSection(lpCriticalSection);
    FUN_140486790(param_1);
    uVar5 = 1;
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 14048df60 FUN_14048df60 body=2157 status=ok
// SIG undefined FUN_14048df60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14048df60(longlong param_1,longlong *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar23;
  longlong lVar24;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  char local_1f8 [8];
  wchar_t *local_1f0;
  undefined8 local_1e8;
  wchar_t *local_1e0;
  undefined8 local_1d8;
  wchar_t *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  wchar_t *local_1c0;
  undefined8 local_1b8;
  wchar_t *local_1b0;
  undefined8 local_1a8;
  wchar_t *local_1a0;
  longlong local_198;
  int *local_190;
  undefined8 *local_188;
  longlong *local_180;
  wchar_t local_178 [128];
  wchar_t *local_78;
  wchar_t *local_70;
  int local_68;
  ulonglong local_58;
  ulonglong uVar22;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1c8 = *(int *)(param_4 + 1);
  lVar20 = (longlong)local_1c8;
  pvVar2 = (void *)*param_4;
  local_1d0 = (wchar_t *)0x0;
  local_198 = param_1;
  local_190 = param_3;
  local_188 = param_4;
  local_180 = param_2;
  if (local_1c8 == 0) {
    local_1c4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1d0,local_1c8,0);
    _guard_xfg_dispatch_icall_nop(local_1d0,pvVar2,lVar20 * 2);
  }
  plVar13 = (longlong *)0x0;
  iVar19 = 1;
  lVar20 = -1;
  local_208 = 0xffffffff;
  iVar6 = FUN_141592950(&local_1d0,L"Texture2D\'",1,0);
  if (iVar6 == -1) {
    local_208 = 0xffffffff;
    iVar6 = FUN_141592950(&local_1d0,L"TextureRenderTarget2D\'",1,0);
    if (iVar6 == -1) {
      cVar4 = FString::StartsWith(&local_1d0,L"http://",1);
      if ((cVar4 == '\0') && (cVar4 = FString::StartsWith(&local_1d0,L"https://",1), cVar4 == '\0'))
      {
        if ((*(int *)(param_1 + 0x310) != 0) &&
           ((*(longlong **)(param_1 + 0x308) != (longlong *)0x0 &&
            (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(), cVar4 != '\0')))) {
          local_1f8[0] = '\0';
          if (*(int *)(param_1 + 0x310) != 0) {
            plVar13 = *(longlong **)(param_1 + 0x308);
          }
          (**(code **)(*plVar13 + 0x38))(plVar13,local_1f8,&local_1d0);
          if (local_1f8[0] != '\0') {
            FString::operator=(param_4,&local_1d0);
            goto LAB_14048e792;
          }
        }
        local_1e0 = (wchar_t *)0x0;
        lVar9 = (**(code **)(*param_2 + 0x40))(param_2,"protocol");
        pwVar10 = local_1d0;
        lVar24 = (longlong)local_1c8;
        local_1c0 = (wchar_t *)0x0;
        local_1b0 = (wchar_t *)0x0;
        local_1f0 = (wchar_t *)0x0;
        local_1b8 = 0;
        local_1e8 = CONCAT44(local_1e8._4_4_,local_1c8);
        iVar6 = 0;
        if (local_1c8 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f0,local_1c8,0);
          local_1b0 = local_1f0;
          _guard_xfg_dispatch_icall_nop(local_1f0,pwVar10,lVar24 * 2);
          iVar6 = (uint)local_1e8;
        }
        if (lVar9 != 0) {
          local_78 = (wchar_t *)0x0;
          uVar21 = 0xffffffffffffffff;
          do {
            uVar22 = uVar21;
            uVar21 = uVar22 + 1;
          } while (*(char *)(lVar9 + uVar21) != '\0');
          local_1a0 = (wchar_t *)((ulonglong)local_1a0 & 0xffffffff00000000);
          FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_1a0,0x7fffffff,lVar9,uVar21 & 0xffffffff);
          local_68 = (int)local_1a0;
          uVar8 = (int)local_1a0 + 1;
          pwVar10 = (wchar_t *)0x0;
          if ((0x80 < uVar8) && (pwVar10 = (wchar_t *)0x0, uVar8 != 0)) {
            pwVar10 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar8 * 2,0);
            local_78 = pwVar10;
          }
          local_1a0 = local_178;
          if (pwVar10 != (wchar_t *)0x0) {
            local_1a0 = pwVar10;
          }
          local_70 = local_1a0;
          FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_1a0,uVar8,lVar9,(int)uVar22 + 2);
          pwVar10 = local_70;
          if (local_1c0 != local_70) {
            if ((local_70 == (wchar_t *)0x0) || (*local_70 == L'\0')) {
              iVar17 = 0;
            }
            else {
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (local_70[lVar9] != L'\0');
              iVar17 = (int)lVar9 + 1;
            }
            iVar14 = local_1b8._4_4_;
            if (local_1b8._4_4_ != iVar17) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1c0,iVar17);
              iVar14 = local_1b8._4_4_;
            }
            iVar7 = iVar17 + (int)local_1b8;
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar7);
            if (iVar14 < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0);
            }
            if (iVar17 != 0) {
              _guard_xfg_dispatch_icall_nop(local_1c0,pwVar10,(longlong)iVar17 * 2);
            }
          }
          if (local_78 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_1e8 = 4;
          local_1f0 = (wchar_t *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
          FGenericPlatformString::Memcpy(local_1f0,&DAT_143f422f8,8);
          FString::RemoveFromEnd(&local_1c0,&local_1f0,1);
          if (local_1f0 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
        pwVar11 = (wchar_t *)0x0;
        local_1f0 = (wchar_t *)0x0;
        local_1e8 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
        pwVar10 = local_1f0;
        local_208 = CONCAT22(local_208._2_2_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_1f0,4,&DAT_143f3fe44);
        local_208 = 0xffffffff;
        pwVar16 = L"";
        if ((uint)local_1e8 != 0) {
          pwVar16 = pwVar10;
        }
        uVar8 = FUN_141592950(&local_1d0,pwVar16,1,0);
        if (pwVar10 != (wchar_t *)0x0) {
          FMemory::Free(pwVar10);
        }
        pwVar10 = local_1b0;
        if (uVar8 != 0xffffffff) {
          if ((int)local_1b8 < 2) {
            uVar15 = local_1c8 - 1;
            if (local_1c8 == 0) {
              uVar15 = 0;
            }
            pwVar10 = (wchar_t *)(ulonglong)uVar15;
            if (uVar15 != 0) {
              pwVar10 = pwVar11;
            }
            uVar15 = local_1c8 - 1;
            if (local_1c8 == 0) {
              uVar15 = 0;
            }
            uVar23 = (uint)pwVar10;
            uVar18 = uVar23;
            if ((uVar23 <= uVar8) && (uVar18 = uVar15, uVar8 < uVar15)) {
              uVar18 = uVar8;
            }
            local_1f0 = (wchar_t *)0x0;
            local_1a0 = L"";
            if (local_1c8 != 0) {
              local_1a0 = local_1d0;
            }
            iVar6 = uVar18 - uVar23;
            uVar15 = iVar6 + 1;
            if (iVar6 == 0) {
              uVar15 = 0;
            }
            local_1e8 = (ulonglong)uVar15;
            if (0 < (int)uVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
              pwVar11 = local_1f0;
              uVar15 = (uint)local_1e8;
              if (0 < (int)(uint)local_1e8) {
                wcsncpy(local_1f0,local_1a0 + (int)uVar23,(longlong)iVar6);
                pwVar11[iVar6] = L'\0';
              }
            }
            if (local_1c0 != (wchar_t *)0x0) {
              FMemory::Free(local_1c0);
            }
            local_1b8 = CONCAT44(local_1e8._4_4_,uVar15);
            local_1c0 = pwVar11;
          }
          pwVar10 = (wchar_t *)0x0;
          uVar15 = 0;
          if (local_1c8 == 0) {
            pwVar11 = L"";
          }
          else {
            uVar15 = local_1c8 - 1;
            pwVar11 = local_1d0;
          }
          uVar8 = (uVar15 - uVar8) - 3;
          pwVar16 = pwVar10;
          if ((-1 < (int)uVar8) &&
             (pwVar16 = (wchar_t *)(ulonglong)uVar15, (int)uVar8 < (int)uVar15)) {
            pwVar16 = (wchar_t *)(ulonglong)uVar8;
          }
          local_1f0 = (wchar_t *)0x0;
          local_1e8 = local_1e8 & 0xffffffff;
          pwVar11 = pwVar11 + ((longlong)(int)uVar15 - (longlong)(int)pwVar16);
          pwVar16 = pwVar10;
          if ((pwVar11 != (wchar_t *)0x0) && (pwVar16 = (wchar_t *)0x0, *pwVar11 != L'\0')) {
            do {
              lVar20 = lVar20 + 1;
            } while (pwVar11[lVar20] != L'\0');
            uVar15 = (int)lVar20 + 1;
            local_1e8 = (ulonglong)uVar15;
            uVar8 = uVar15;
            if (0 < (int)uVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
              uVar8 = (uint)local_1e8;
            }
            pwVar10 = local_1f0;
            pwVar16 = (wchar_t *)(ulonglong)uVar8;
            FGenericPlatformString::Memcpy(local_1f0,pwVar11,(longlong)(int)uVar15 * 2);
          }
          iVar6 = (int)pwVar16;
          if (local_1b0 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
        lVar20 = local_198;
        pwVar11 = local_1e0;
        if (((int)local_1b8 < 2) ||
           (pwVar11 = (wchar_t *)FUN_14045efc0(*(undefined8 *)(local_198 + 0x300)),
           pwVar11 != (wchar_t *)0x0)) {
          iVar17 = 0;
          *local_190 = 0;
          if (pwVar11 == (wchar_t *)0x0) {
            if (iVar6 != 0) {
              iVar17 = iVar6 + -1;
            }
            iVar19 = *(int *)(lVar20 + 0x20);
            if ((iVar19 != 0) || (iVar6 = 2, iVar17 == -1)) {
              iVar6 = 1;
            }
            pvVar2 = *(void **)(lVar20 + 0x18);
            local_1e0 = (wchar_t *)0x0;
            local_1d8 = CONCAT44(local_1d8._4_4_,iVar19);
            if ((iVar19 == 0) && (iVar17 + iVar6 == 0)) {
              local_1d8 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e0,iVar19 + iVar17 + iVar6,0)
              ;
              _guard_xfg_dispatch_icall_nop(local_1e0,pvVar2,(longlong)iVar19 * 2);
            }
            FString::PathAppend(&local_1e0,pwVar10,iVar17);
            local_1f0 = local_1e0;
            local_1e8 = local_1d8;
            pwVar11 = local_1e0;
            iVar19 = (int)local_1d8;
          }
          else {
            iVar14 = *(int *)(pwVar11 + 0x28);
            iVar7 = *(int *)(pwVar11 + 0x18) + -1;
            if (*(int *)(pwVar11 + 0x18) == 0) {
              iVar7 = iVar17;
            }
            if ((iVar14 != 0) || (iVar17 = 2, iVar7 == -1)) {
              iVar17 = 1;
            }
            pvVar2 = *(void **)(pwVar11 + 0x24);
            local_1e0 = (wchar_t *)0x0;
            local_1d8 = CONCAT44(local_1d8._4_4_,iVar14);
            if ((iVar14 == 0) && (iVar7 + iVar17 == 0)) {
              local_1d8 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e0,iVar14 + iVar7 + iVar17,0)
              ;
              _guard_xfg_dispatch_icall_nop(local_1e0,pvVar2,(longlong)iVar14 * 2);
            }
            FString::PathAppend(&local_1e0,*(undefined8 *)(pwVar11 + 0x14),iVar7);
            iVar17 = 0;
            if (iVar6 != 0) {
              iVar17 = iVar6 + -1;
            }
            if (((int)local_1d8 != 0) || (iVar17 + 1 == 0)) {
              iVar19 = 0;
            }
            local_1b0 = local_1e0;
            iVar6 = iVar17 + 1 + iVar19 + (int)local_1d8;
            iVar19 = local_1d8._4_4_;
            local_1e0 = (wchar_t *)0x0;
            local_1a8._0_4_ = (int)local_1d8;
            local_1a8._4_4_ = local_1d8._4_4_;
            local_1d8 = 0;
            if (iVar19 < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b0);
            }
            FString::PathAppend(&local_1b0,pwVar10,iVar17);
            iVar19 = (int)local_1a8;
            pwVar11 = local_1b0;
            local_1f0 = local_1b0;
            local_1b0 = (wchar_t *)0x0;
            local_1e8 = CONCAT44(local_1a8._4_4_,(int)local_1a8);
            local_1a8 = 0;
            lVar20 = local_198;
            if (local_1e0 != (wchar_t *)0x0) {
              FMemory::Free();
              lVar20 = local_198;
            }
          }
          uVar12 = FPlatformFileManager::Get();
          plVar13 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar12);
          pwVar16 = L"";
          if (iVar19 != 0) {
            pwVar16 = pwVar11;
          }
          cVar4 = (**(code **)(*plVar13 + 0x68))(plVar13,pwVar16);
          puVar3 = local_188;
          if (cVar4 == '\0') {
            if (*(int *)(local_188 + 3) < 1) {
              uVar5 = 0;
            }
            else {
              puVar1 = local_188 + 2;
              FString::operator=(local_188,local_188[2]);
              if (*(longlong *)*puVar1 != 0) {
                FMemory::Free();
              }
              iVar19 = *(int *)(puVar3 + 3);
              if (iVar19 + -1 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)*puVar1,(void *)((longlong)*puVar1 + 0x10),
                           (longlong)(iVar19 + -1) << 4);
                iVar19 = *(int *)(puVar3 + 3);
              }
              *(int *)(puVar3 + 3) = iVar19 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(puVar1);
              uVar5 = FUN_14048df60(lVar20,local_180,local_190,puVar3);
            }
          }
          else {
            FString::operator=(local_188,&local_1f0);
            uVar5 = 1;
            pwVar11 = local_1f0;
          }
          if (pwVar11 != (wchar_t *)0x0) {
            FMemory::Free(pwVar11);
          }
        }
        else {
          uVar5 = 0;
        }
        if (pwVar10 != (wchar_t *)0x0) {
          FMemory::Free(pwVar10);
        }
        if (local_1c0 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        goto LAB_14048e798;
      }
      iVar19 = 2;
    }
  }
LAB_14048e792:
  *param_3 = iVar19;
  uVar5 = 1;
LAB_14048e798:
  if (local_1d0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 14048e7d0 FUN_14048e7d0 body=339 status=ok
// SIG undefined FUN_14048e7d0(void)

undefined1
FUN_14048e7d0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,char param_5,
             longlong *param_6,longlong *param_7)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  
  uVar3 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar3);
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0xb8))(plVar4,puVar6,1);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
    *param_7 = lVar5;
    if (lVar5 != 0) {
      if (param_3 < lVar5) {
        lVar5 = lVar5 + -1;
        if (lVar5 < param_4) {
          param_4 = lVar5;
        }
        if (((param_4 == -1) && (param_4 = lVar5, param_5 != '\0')) && (0x100000 < lVar5 - param_3))
        {
          param_4 = param_3 + 0x100000;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar5 = (param_4 - param_3) + 1;
        iVar1 = (int)param_6[1];
        iVar7 = (int)lVar5;
        if (iVar1 < iVar7) {
          *(int *)(param_6 + 1) = iVar7;
          if (*(int *)((longlong)param_6 + 0xc) < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_6);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar1 + *param_6),0,(longlong)(iVar7 - iVar1));
        }
        else if ((iVar7 < iVar1) && (iVar7 != iVar1)) {
          *(int *)(param_6 + 1) = iVar7;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_6);
        }
        uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,*param_6,lVar5);
        goto LAB_14048e901;
      }
      if (param_5 != '\0') {
        uVar2 = 1;
        goto LAB_14048e901;
      }
    }
  }
  uVar2 = 0;
LAB_14048e901:
  if (plVar4 != (longlong *)0x0) {
    (**(code **)*plVar4)(plVar4,1);
  }
  return uVar2;
}



// FUNCTION 14048e930 FUN_14048e930 body=228 status=ok
// SIG undefined FUN_14048e930(void)

undefined8 FUN_14048e930(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = UProperty::GetPrivateStaticClass();
  lVar2 = UBoolProperty::GetPrivateStaticClass();
  if (lVar1 == lVar2) {
    return 0;
  }
  lVar2 = UByteProperty::GetPrivateStaticClass();
  if (lVar1 != lVar2) {
    lVar2 = UIntProperty::GetPrivateStaticClass();
    if (lVar1 != lVar2) {
      lVar2 = UInt64Property::GetPrivateStaticClass();
      if (lVar1 != lVar2) {
        lVar2 = UUInt32Property::GetPrivateStaticClass();
        if (lVar1 != lVar2) {
          lVar2 = UUInt64Property::GetPrivateStaticClass();
          if (lVar1 != lVar2) {
            lVar2 = UFloatProperty::GetPrivateStaticClass();
            if (lVar1 == lVar2) {
              return 9;
            }
            lVar2 = UDoubleProperty::GetPrivateStaticClass();
            if (lVar1 == lVar2) {
              return 10;
            }
            lVar2 = UStrProperty::GetPrivateStaticClass();
            if (lVar1 != lVar2) {
              lVar2 = UNameProperty::GetPrivateStaticClass();
              if (lVar1 != lVar2) {
                lVar2 = UTextProperty::GetPrivateStaticClass();
                if (lVar1 != lVar2) {
                  lVar2 = UArrayProperty::GetPrivateStaticClass();
                  uVar3 = 0x10;
                  if (lVar1 == lVar2) {
                    uVar3 = 0xd;
                  }
                  return uVar3;
                }
              }
            }
            return 0xb;
          }
        }
        return 6;
      }
    }
  }
  return 5;
}



// FUNCTION 14048ea20 FUN_14048ea20 body=244 status=ok
// SIG undefined FUN_14048ea20(void)

void FUN_14048ea20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = TArray<FString,FDefaultAllocator>::Find(&DAT_1461f61c8,param_1);
  lVar3 = (longlong)iVar1;
  if (iVar1 != -1) {
    if (*(longlong *)(DAT_1461f61c8 + lVar3 * 0x10) != 0) {
      FMemory::Free();
    }
    iVar2 = (DAT_1461f61d0 - iVar1) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_1461f61c8 + lVar3 * 0x10),
                 (void *)((longlong)(iVar1 + 1) * 0x10 + DAT_1461f61c8),(longlong)iVar2 << 4);
    }
    DAT_1461f61d0 = DAT_1461f61d0 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&DAT_1461f61c8);
    iVar2 = (DAT_1461f61e0 - iVar1) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_1461f61d8 + lVar3 * 4),
                 (void *)(DAT_1461f61d8 + (longlong)(iVar1 + 1) * 4),(longlong)iVar2 << 2);
    }
    DAT_1461f61e0 = DAT_1461f61e0 + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_1461f61d8);
  }
  return;
}



// FUNCTION 14048eb20 FUN_14048eb20 body=654 status=ok
// SIG undefined FUN_14048eb20(void)

void FUN_14048eb20(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  bool bVar10;
  uint uVar11;
  int local_res8;
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  FUN_140468ca0();
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar7 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar7 = param_1 + 9;
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    ((longlong)(int)param_1[0xb] - 1U & (longlong)*(int *)(param_2 + 0xc)) * 4);
    if (iVar6 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar6 * 0x80 + param_1[2]);
        if (*piVar9 == *(int *)(param_2 + 0xc)) {
          if (iVar6 != -1) goto LAB_14048eba1;
          break;
        }
        iVar6 = piVar9[0x1e];
      } while (iVar6 != -1);
    }
  }
  piVar9 = (int *)0x0;
LAB_14048eba1:
  local_48 = *(undefined8 *)(param_2 + 0x18);
  local_40 = *(undefined8 *)(param_2 + 0x20);
  local_38 = *(longlong **)(param_2 + 0x28);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  cVar5 = FKey::IsFloatAxis(&local_48);
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (cVar5 == '\0') {
    return;
  }
  plVar7 = *(longlong **)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (lVar4 == DAT_1469ea3d8) {
    local_res8 = 0;
  }
  else {
    if (lVar4 == DAT_1469ea3f0) {
      local_res8 = 1;
      bVar10 = true;
      goto LAB_14048ec87;
    }
    if (lVar4 == DAT_1469ea408) {
      local_res8 = 2;
    }
    else {
      if (lVar4 == DAT_1469ea420) {
        local_res8 = 3;
        bVar10 = true;
        goto LAB_14048ec87;
      }
      local_res8 = -1;
    }
  }
  bVar10 = false;
LAB_14048ec87:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (-1 < local_res8) {
    uVar11 = *(uint *)(param_2 + 0x38);
    if (bVar10) {
      uVar11 = uVar11 ^ 0x80000000;
    }
    piVar9[(longlong)local_res8 + 8] = uVar11;
  }
  plVar7 = (longlong *)param_1[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar7[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar7 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar7[1];
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        puVar2 = (undefined8 *)*param_1;
        if (puVar2 != (undefined8 *)0x0) {
          plVar8 = (longlong *)FDateTime::Now(local_res10);
          plVar3 = (longlong *)*puVar2;
          lVar4 = *plVar3;
          piVar9[3] = (int)(float)((*plVar8 - puVar2[3]) / 10000);
          (**(code **)(lVar4 + 0x80))(plVar3,piVar9 + 2);
        }
        LOCK();
        plVar3 = plVar7 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar9 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar7 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14048edb0 FUN_14048edb0 body=493 status=ok
// SIG undefined FUN_14048edb0(void)

void FUN_14048edb0(longlong *param_1,longlong param_2,byte param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  
  FUN_140468ca0();
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar7 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar7 = param_1 + 9;
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    ((longlong)(int)param_1[0xb] - 1U & (longlong)*(int *)(param_2 + 0xc)) * 4);
    if (iVar6 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar6 * 0x80 + param_1[2]);
        if (*piVar9 == *(int *)(param_2 + 0xc)) {
          if (iVar6 != -1) goto LAB_14048ee31;
          break;
        }
        iVar6 = piVar9[0x1e];
      } while (iVar6 != -1);
    }
  }
  piVar9 = (int *)0x0;
LAB_14048ee31:
  local_58 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined8 *)(param_2 + 0x20);
  local_48 = *(longlong **)(param_2 + 0x28);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  cVar5 = FKey::IsGamepadKey(&local_58);
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (cVar5 != '\0') {
    iVar6 = FUN_140474b10(param_2);
    if (-1 < iVar6) {
      piVar9[(longlong)iVar6 + 0xc] = (int)(float)param_3;
    }
    plVar7 = (longlong *)param_1[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar7 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar6 == (int)plVar7[1];
        if (bVar10) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (plVar7 == (longlong *)0x0) {
            return;
          }
          puVar2 = (undefined8 *)*param_1;
          if (puVar2 != (undefined8 *)0x0) {
            plVar8 = (longlong *)FDateTime::Now(local_res10);
            plVar3 = (longlong *)*puVar2;
            lVar4 = *plVar3;
            piVar9[3] = (int)(float)((*plVar8 - puVar2[3]) / 10000);
            (**(code **)(lVar4 + 0x80))(plVar3,piVar9 + 2);
          }
          LOCK();
          plVar3 = plVar7 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return;
          }
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar9 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 != 1) {
            return;
          }
          (**(code **)(*plVar7 + 8))(plVar7,1);
          return;
        }
        LOCK();
        iVar6 = (int)plVar7[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(plVar7 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 14048efa0 FUN_14048efa0 body=101 status=ok
// SIG undefined FUN_14048efa0(void)

void FUN_14048efa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x168))();
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
      uVar3 = FUN_14046ef00(plVar1,param_2,*(undefined8 *)(param_2 + 0x10));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2,uVar3);
    }
  }
  return;
}



// FUNCTION 14048f010 FUN_14048f010 body=143 status=ok
// SIG undefined FUN_14048f010(void)

void FUN_14048f010(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
  }
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x168))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x100) == 0) {
        plVar3 = *(longlong **)(param_1 + 0x110);
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
      }
      uVar2 = FUN_14046ef00(plVar3,param_2,*(undefined8 *)(param_2 + 0x10));
      (**(code **)(*plVar3 + 0x1b0))(plVar3,param_2,uVar2);
    }
  }
  return;
}



// FUNCTION 14048f0a0 FUN_14048f0a0 body=246 status=ok
// SIG undefined FUN_14048f0a0(void)

longlong FUN_14048f0a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x38) != &local_18) {
    *(undefined8 *)(param_1 + 0x38) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_10);
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x20;
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
  return param_1;
}



// FUNCTION 14048f1c0 FUN_14048f1c0 body=131 status=ok
// SIG undefined FUN_14048f1c0(void)

void FUN_14048f1c0(undefined8 param_1,LPVOID param_2,uint param_3,int param_4,uint param_5)

{
  DWORD flAllocationType;
  DWORD flProtect;
  
  flProtect = 0;
  if (param_4 == 0) {
    flProtect = 1;
  }
  else if (param_4 == 1) {
    flProtect = 2;
  }
  else if (param_4 == 3) {
    flProtect = 4;
  }
  else if (param_4 == 5) {
    flProtect = 0x20;
  }
  else if (param_4 == 7) {
    flProtect = 0x40;
  }
  flAllocationType = (param_5 >> 1 & 1) << 0xc | (param_5 & 1) << 0xd;
  if (param_5 == 0) {
    flAllocationType = 0x1000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014048f23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualAlloc(param_2,(ulonglong)param_3,flAllocationType,flProtect);
  return;
}



// FUNCTION 14048f250 FUN_14048f250 body=62 status=ok
// SIG undefined FUN_14048f250(void)

undefined8 FUN_14048f250(undefined8 param_1,LPVOID param_2,uint param_3,int param_4)

{
  BOOL BVar1;
  undefined4 extraout_var;
  DWORD dwFreeType;
  
  dwFreeType = 0;
  if (param_4 == 4) {
    dwFreeType = 0x4000;
  }
  else if (param_4 == 8) {
    param_3 = 0;
    dwFreeType = 0x8000;
  }
  BVar1 = VirtualFree(param_2,(ulonglong)param_3,dwFreeType);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}



// FUNCTION 14048f290 FUN_14048f290 body=246 status=ok
// SIG undefined FUN_14048f290(void)

longlong * FUN_14048f290(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar6 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          lVar3 = *(longlong *)(param_1 + 8);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar2 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
          plVar7 = plVar2;
          if ((lVar3 != 0) && (cVar5 = FWeakObjectPtr::IsValid(lVar3 + 0x380), cVar5 != '\0')) {
            *param_2 = lVar3;
            param_2[1] = (longlong)plVar2;
            return param_2;
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14048f390 FUN_14048f390 body=246 status=ok
// SIG undefined FUN_14048f390(void)

longlong * FUN_14048f390(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar6 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          lVar3 = *(longlong *)(param_1 + 8);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar2 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
          plVar7 = plVar2;
          if ((lVar3 != 0) && (cVar5 = FWeakObjectPtr::IsValid(lVar3 + 600), cVar5 != '\0')) {
            *param_2 = lVar3;
            param_2[1] = (longlong)plVar2;
            return param_2;
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14048f490 _Xlength body=16 status=ok
// SIG undefined _Xlength(void)

void std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("vector<T> too long");
}



// FUNCTION 14048f4b0 FUN_14048f4b0 body=5 status=ok
// SIG undefined FUN_14048f4b0(void)

longlong FUN_14048f4b0(longlong param_1)

{
  return param_1 + -0x28;
}



// FUNCTION 14048f4c0 FUN_14048f4c0 body=466 status=ok
// SIG undefined FUN_14048f4c0(void)

void FUN_14048f4c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar7 = *(longlong *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  if (lVar7 == 0) {
LAB_14048f678:
    *(undefined1 *)(param_2 + 0x90) = 1;
    return;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_14048f678;
  lVar7 = *(longlong *)(lVar7 + 0x70);
  iVar5 = FUN_14046e3a0(lVar7);
  if (iVar5 == 7) goto LAB_14048f664;
  local_28 = 0;
  if (iVar5 == 4) {
    if (lVar7 == 0) {
LAB_14048f5bc:
      lVar7 = 0;
    }
    else {
      lVar6 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14048f5bc;
    }
    local_28 = *(undefined8 *)(lVar7 + 0x70);
  }
  iVar2 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar2 + 1;
  if (*(int *)(param_1 + 0x94) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x88,iVar2);
  }
  lVar7 = *(longlong *)(param_1 + 0x88);
  local_38 = (undefined4)uVar3;
  uStack_34 = (undefined4)((ulonglong)uVar3 >> 0x20);
  puVar1 = (undefined4 *)(lVar7 + (longlong)iVar2 * 0x18);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = iVar5;
  puVar1[3] = uStack_2c;
  *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar2 * 0x18) = local_28;
  iVar5 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = CONCAT44(iVar5 + -1,6);
LAB_14048f664:
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 14048f6a0 FUN_14048f6a0 body=171 status=ok
// SIG undefined FUN_14048f6a0(void)

void FUN_14048f6a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar4 = *(longlong *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(lVar4 + 0x10);
    lVar3 = UStructProperty::GetPrivateStaticClass();
    if (lVar2 == lVar3) goto LAB_14048f717;
  }
  lVar4 = 0;
LAB_14048f717:
  FUN_14045e610(param_1,lVar4,uVar1);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 14048f750 FUN_14048f750 body=325 status=ok
// SIG undefined FUN_14048f750(void)

void FUN_14048f750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar6 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8), plVar3 != (longlong *)0x0)) {
      cVar5 = (**(code **)(*plVar3 + 0x168))();
      if (cVar5 != '\0') {
        FUN_140463ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8),local_18,uVar2,
                      *(undefined8 *)(lVar1 + 0x70));
      }
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14048f8a0 FUN_14048f8a0 body=377 status=ok
// SIG undefined FUN_14048f8a0(void)

void FUN_14048f8a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
  }
  if (plVar6 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar6 + 0x168))();
    if (cVar4 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,local_18);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
      }
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar1 = *(longlong *)(param_2 + 0x30);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      if (lVar1 != 0) {
        lVar5 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(longlong *)(param_1 + 0x100) == 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x110);
          }
          else {
            uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
          }
          FUN_140463ef0(uVar7,local_18,uVar2,*(undefined8 *)(lVar1 + 0x70));
        }
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14048fa20 FUN_14048fa20 body=278 status=ok
// SIG undefined FUN_14048fa20(void)

void FUN_14048fa20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  cVar4 = (**(code **)(*plVar1 + 0x168))();
  if (cVar4 == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar7 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar7 != 0) {
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14048fadd;
  }
  lVar7 = 0;
LAB_14048fadd:
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  uVar6 = FUN_14046ef00(plVar1,uVar2,*(undefined8 *)(lVar7 + 0x70));
  (**(code **)(*plVar1 + 0x1b0))(plVar1,uVar2,uVar6);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 14048fb40 FUN_14048fb40 body=320 status=ok
// SIG undefined FUN_14048fb40(void)

void FUN_14048fb40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*plVar6 + 0x168))();
  if (cVar3 == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar7 = *(longlong *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  if (lVar7 != 0) {
    lVar4 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14048fc12;
  }
  lVar7 = 0;
LAB_14048fc12:
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
  }
  uVar5 = FUN_14046ef00(plVar6,uVar1,*(undefined8 *)(lVar7 + 0x70));
  (**(code **)(*plVar6 + 0x1b0))(plVar6,uVar1,uVar5);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 14048fc80 FUN_14048fc80 body=151 status=ok
// SIG undefined FUN_14048fc80(void)

longlong FUN_14048fc80(void)

{
  if (DAT_146850c60 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlEventHelpers",&DAT_146850c60,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146850c60;
}



// FUNCTION 14048fd20 FUN_14048fd20 body=162 status=ok
// SIG undefined FUN_14048fd20(void)

longlong FUN_14048fd20(void)

{
  if (DAT_146850bb8 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlBaseComponent",&DAT_146850bb8,FUN_140493b20,0x238,
                  0x10000000,0,L"Engine",&LAB_140492320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146850bb8;
}



// FUNCTION 14048fdd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AItem::GetPrivateStaticClass(void)

{
  if (DAT_146850d08 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlInputActor",&DAT_146850d08,FUN_140493af0,0x4b0,
                  0x10000000,0,L"Engine",&LAB_140492200,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146850d08;
}



// FUNCTION 14048fe80 FUN_14048fe80 body=47 status=ok
// SIG undefined FUN_14048fe80(void)

longlong FUN_14048fe80(void)

{
  if (DAT_146850d00 == 0) {
    FUN_141786440(&DAT_146850d00,&PTR_GetPrivateStaticClass_143f4e4a0);
  }
  return DAT_146850d00;
}



// FUNCTION 14048feb0 FUN_14048feb0 body=47 status=ok
// SIG undefined FUN_14048feb0(void)

longlong FUN_14048feb0(void)

{
  if (DAT_146850cb8 == 0) {
    FUN_141786a30(&DAT_146850cb8,&PTR_FUN_1461f8a00);
  }
  return DAT_146850cb8;
}



// FUNCTION 14048fee0 FUN_14048fee0 body=47 status=ok
// SIG undefined FUN_14048fee0(void)

longlong FUN_14048fee0(void)

{
  if (DAT_146850cc0 == 0) {
    FUN_141786a30(&DAT_146850cc0,&PTR_FUN_1461f8a80);
  }
  return DAT_146850cc0;
}



// FUNCTION 14048ff10 FUN_14048ff10 body=47 status=ok
// SIG undefined FUN_14048ff10(void)

longlong FUN_14048ff10(void)

{
  if (DAT_146850cc8 == 0) {
    FUN_141786a30(&DAT_146850cc8,&PTR_FUN_1461f8b80);
  }
  return DAT_146850cc8;
}



// FUNCTION 14048ff40 FUN_14048ff40 body=47 status=ok
// SIG undefined FUN_14048ff40(void)

longlong FUN_14048ff40(void)

{
  if (DAT_146850cd0 == 0) {
    FUN_141786a30(&DAT_146850cd0,&PTR_FUN_1461f8c40);
  }
  return DAT_146850cd0;
}



// FUNCTION 14048ff70 FUN_14048ff70 body=47 status=ok
// SIG undefined FUN_14048ff70(void)

longlong FUN_14048ff70(void)

{
  if (DAT_146850cd8 == 0) {
    FUN_141786a30(&DAT_146850cd8,&PTR_FUN_1461f8d00);
  }
  return DAT_146850cd8;
}



// FUNCTION 14048ffa0 FUN_14048ffa0 body=47 status=ok
// SIG undefined FUN_14048ffa0(void)

longlong FUN_14048ffa0(void)

{
  if (DAT_146850ce0 == 0) {
    FUN_141786a30(&DAT_146850ce0,&PTR_FUN_1461f8d80);
  }
  return DAT_146850ce0;
}



// FUNCTION 14048ffd0 FUN_14048ffd0 body=47 status=ok
// SIG undefined FUN_14048ffd0(void)

longlong FUN_14048ffd0(void)

{
  if (DAT_146850ce8 == 0) {
    FUN_141786a30(&DAT_146850ce8,&PTR_FUN_1461f8e00);
  }
  return DAT_146850ce8;
}



// FUNCTION 140490000 FUN_140490000 body=47 status=ok
// SIG undefined FUN_140490000(void)

longlong FUN_140490000(void)

{
  if (DAT_146850cf0 == 0) {
    FUN_141786a30(&DAT_146850cf0,&PTR_FUN_1461f8e80);
  }
  return DAT_146850cf0;
}



// FUNCTION 140490030 FUN_140490030 body=47 status=ok
// SIG undefined FUN_140490030(void)

longlong FUN_140490030(void)

{
  if (DAT_146850cf8 == 0) {
    FUN_141786a30(&DAT_146850cf8,&PTR_FUN_1461f8ec0);
  }
  return DAT_146850cf8;
}



// FUNCTION 140490060 FUN_140490060 body=151 status=ok
// SIG undefined FUN_140490060(void)

longlong FUN_140490060(void)

{
  if (DAT_146850db8 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_146850db8,FUN_140447710,0x88,
                  0x10000006,0,L"Engine",&LAB_1404923e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146850db8;
}



// FUNCTION 140490120 FUN_140490120 body=47 status=ok
// SIG undefined FUN_140490120(void)

longlong FUN_140490120(void)

{
  if (DAT_146850d60 == 0) {
    FUN_141786440(&DAT_146850d60,&PTR_GetPrivateStaticClass_143f4ec00);
  }
  return DAT_146850d60;
}



// FUNCTION 140490150 FUN_140490150 body=47 status=ok
// SIG undefined FUN_140490150(void)

longlong FUN_140490150(void)

{
  if (DAT_146850d10 == 0) {
    FUN_141786a30(&DAT_146850d10,&PTR_FUN_1461f9000);
  }
  return DAT_146850d10;
}



// FUNCTION 140490180 FUN_140490180 body=162 status=ok
// SIG undefined FUN_140490180(void)

longlong FUN_140490180(void)

{
  if (DAT_146850e70 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlWidget",&DAT_146850e70,FUN_140493bb0,0x1f0,
                  0x10000000,0,L"Engine",&LAB_140492420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146850e70;
}



// FUNCTION 140490230 FUN_140490230 body=47 status=ok
// SIG undefined FUN_140490230(void)

longlong FUN_140490230(void)

{
  if (DAT_146850d18 == 0) {
    FUN_141786a30(&DAT_146850d18,&PTR_FUN_1461f90c0);
  }
  return DAT_146850d18;
}



// FUNCTION 140490260 FUN_140490260 body=47 status=ok
// SIG undefined FUN_140490260(void)

longlong FUN_140490260(void)

{
  if (DAT_146850d20 == 0) {
    FUN_141786a30(&DAT_146850d20,&PTR_FUN_1461f9140);
  }
  return DAT_146850d20;
}



// FUNCTION 140490290 FUN_140490290 body=47 status=ok
// SIG undefined FUN_140490290(void)

longlong FUN_140490290(void)

{
  if (DAT_146850d28 == 0) {
    FUN_141786a30(&DAT_146850d28,&PTR_FUN_1461f9180);
  }
  return DAT_146850d28;
}



// FUNCTION 1404902c0 FUN_1404902c0 body=47 status=ok
// SIG undefined FUN_1404902c0(void)

longlong FUN_1404902c0(void)

{
  if (DAT_146850d30 == 0) {
    FUN_141786a30(&DAT_146850d30,&PTR_FUN_1461f9230);
  }
  return DAT_146850d30;
}



// FUNCTION 1404902f0 FUN_1404902f0 body=47 status=ok
// SIG undefined FUN_1404902f0(void)

longlong FUN_1404902f0(void)

{
  if (DAT_146850d38 == 0) {
    FUN_141786a30(&DAT_146850d38,&PTR_FUN_1461f9270);
  }
  return DAT_146850d38;
}



// FUNCTION 140490320 FUN_140490320 body=47 status=ok
// SIG undefined FUN_140490320(void)

longlong FUN_140490320(void)

{
  if (DAT_146850d40 == 0) {
    FUN_141786a30(&DAT_146850d40,&PTR_FUN_1461f92f0);
  }
  return DAT_146850d40;
}



// FUNCTION 140490350 FUN_140490350 body=47 status=ok
// SIG undefined FUN_140490350(void)

longlong FUN_140490350(void)

{
  if (DAT_146850d48 == 0) {
    FUN_141786a30(&DAT_146850d48,&PTR_FUN_1461f93a0);
  }
  return DAT_146850d48;
}



// FUNCTION 140490380 FUN_140490380 body=47 status=ok
// SIG undefined FUN_140490380(void)

longlong FUN_140490380(void)

{
  if (DAT_146850d50 == 0) {
    FUN_141786a30(&DAT_146850d50,&PTR_FUN_1461f9420);
  }
  return DAT_146850d50;
}



// FUNCTION 1404903b0 FUN_1404903b0 body=47 status=ok
// SIG undefined FUN_1404903b0(void)

longlong FUN_1404903b0(void)

{
  if (DAT_146850d58 == 0) {
    FUN_141786a30(&DAT_146850d58,&PTR_FUN_1461f9460);
  }
  return DAT_146850d58;
}



// FUNCTION 1404903e0 FUN_1404903e0 body=53 status=ok
// SIG undefined FUN_1404903e0(void)

void FUN_1404903e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x100;
    *puVar1 = &PTR_FUN_143f53048;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140490420 FUN_140490420 body=53 status=ok
// SIG undefined FUN_140490420(void)

void FUN_140490420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143f53160;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140490490 FUN_140490490 body=47 status=ok
// SIG undefined FUN_140490490(void)

longlong FUN_140490490(void)

{
  if (DAT_146850e68 == 0) {
    FUN_141786440(&DAT_146850e68,&PTR_FUN_143f50750);
  }
  return DAT_146850e68;
}



// FUNCTION 1404904c0 FUN_1404904c0 body=47 status=ok
// SIG undefined FUN_1404904c0(void)

longlong FUN_1404904c0(void)

{
  if (DAT_146850de0 == 0) {
    FUN_141786a30(&DAT_146850de0,&PTR_FUN_1461f9fc0);
  }
  return DAT_146850de0;
}



// FUNCTION 1404904f0 FUN_1404904f0 body=47 status=ok
// SIG undefined FUN_1404904f0(void)

longlong FUN_1404904f0(void)

{
  if (DAT_146850de8 == 0) {
    FUN_141786a30(&DAT_146850de8,&PTR_FUN_1461fa040);
  }
  return DAT_146850de8;
}



// FUNCTION 140490520 FUN_140490520 body=47 status=ok
// SIG undefined FUN_140490520(void)

longlong FUN_140490520(void)

{
  if (DAT_146850df0 == 0) {
    FUN_141786a30(&DAT_146850df0,&PTR_FUN_1461fa0c0);
  }
  return DAT_146850df0;
}



// FUNCTION 140490550 FUN_140490550 body=47 status=ok
// SIG undefined FUN_140490550(void)

longlong FUN_140490550(void)

{
  if (DAT_146850df8 == 0) {
    FUN_141786a30(&DAT_146850df8,&PTR_FUN_1461fa140);
  }
  return DAT_146850df8;
}



// FUNCTION 140490580 FUN_140490580 body=47 status=ok
// SIG undefined FUN_140490580(void)

longlong FUN_140490580(void)

{
  if (DAT_146850e00 == 0) {
    FUN_141786a30(&DAT_146850e00,&PTR_FUN_1461fa1c0);
  }
  return DAT_146850e00;
}



// FUNCTION 1404905b0 FUN_1404905b0 body=47 status=ok
// SIG undefined FUN_1404905b0(void)

longlong FUN_1404905b0(void)

{
  if (DAT_146850e08 == 0) {
    FUN_141786a30(&DAT_146850e08,&PTR_FUN_1461fa280);
  }
  return DAT_146850e08;
}



// FUNCTION 1404905e0 FUN_1404905e0 body=47 status=ok
// SIG undefined FUN_1404905e0(void)

longlong FUN_1404905e0(void)

{
  if (DAT_146850e10 == 0) {
    FUN_141786a30(&DAT_146850e10,&PTR_FUN_1461fa340);
  }
  return DAT_146850e10;
}



// FUNCTION 140490610 FUN_140490610 body=47 status=ok
// SIG undefined FUN_140490610(void)

longlong FUN_140490610(void)

{
  if (DAT_146850e18 == 0) {
    FUN_141786a30(&DAT_146850e18,&PTR_FUN_1461fa400);
  }
  return DAT_146850e18;
}



// FUNCTION 140490640 FUN_140490640 body=47 status=ok
// SIG undefined FUN_140490640(void)

longlong FUN_140490640(void)

{
  if (DAT_146850e20 == 0) {
    FUN_141786a30(&DAT_146850e20,&PTR_FUN_1461fa440);
  }
  return DAT_146850e20;
}



// FUNCTION 140490670 FUN_140490670 body=47 status=ok
// SIG undefined FUN_140490670(void)

longlong FUN_140490670(void)

{
  if (DAT_146850e28 == 0) {
    FUN_141786a30(&DAT_146850e28,&PTR_FUN_1461fa480);
  }
  return DAT_146850e28;
}



// FUNCTION 1404906a0 FUN_1404906a0 body=47 status=ok
// SIG undefined FUN_1404906a0(void)

longlong FUN_1404906a0(void)

{
  if (DAT_146850e30 == 0) {
    FUN_141786a30(&DAT_146850e30,&PTR_FUN_1461fa500);
  }
  return DAT_146850e30;
}



// FUNCTION 1404906d0 FUN_1404906d0 body=47 status=ok
// SIG undefined FUN_1404906d0(void)

longlong FUN_1404906d0(void)

{
  if (DAT_146850e38 == 0) {
    FUN_141786a30(&DAT_146850e38,&PTR_FUN_1461fa580);
  }
  return DAT_146850e38;
}



// FUNCTION 140490700 FUN_140490700 body=47 status=ok
// SIG undefined FUN_140490700(void)

longlong FUN_140490700(void)

{
  if (DAT_146850e40 == 0) {
    FUN_141786a30(&DAT_146850e40,&PTR_FUN_1461fa640);
  }
  return DAT_146850e40;
}



// FUNCTION 140490730 FUN_140490730 body=47 status=ok
// SIG undefined FUN_140490730(void)

longlong FUN_140490730(void)

{
  if (DAT_146850e48 == 0) {
    FUN_141786a30(&DAT_146850e48,&PTR_FUN_1461fa680);
  }
  return DAT_146850e48;
}



// FUNCTION 140490760 FUN_140490760 body=47 status=ok
// SIG undefined FUN_140490760(void)

longlong FUN_140490760(void)

{
  if (DAT_146850e50 == 0) {
    FUN_141786a30(&DAT_146850e50,&PTR_FUN_1461fa700);
  }
  return DAT_146850e50;
}



// FUNCTION 140490790 FUN_140490790 body=47 status=ok
// SIG undefined FUN_140490790(void)

longlong FUN_140490790(void)

{
  if (DAT_146850e58 == 0) {
    FUN_141786a30(&DAT_146850e58,&PTR_FUN_1461fa780);
  }
  return DAT_146850e58;
}



// FUNCTION 1404907c0 FUN_1404907c0 body=47 status=ok
// SIG undefined FUN_1404907c0(void)

longlong FUN_1404907c0(void)

{
  if (DAT_146850e60 == 0) {
    FUN_141786a30(&DAT_146850e60,&PTR_FUN_1461fa800);
  }
  return DAT_146850e60;
}



// FUNCTION 1404907f0 FUN_1404907f0 body=53 status=ok
// SIG undefined FUN_1404907f0(void)

void FUN_1404907f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143f53278;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140490830 FUN_140490830 body=53 status=ok
// SIG undefined FUN_140490830(void)

void FUN_140490830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_143f53f10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140490880 FUN_140490880 body=47 status=ok
// SIG undefined FUN_140490880(void)

longlong FUN_140490880(void)

{
  if (DAT_146850bb0 == 0) {
    FUN_141786440(&DAT_146850bb0,&PTR_FUN_143f50e60);
  }
  return DAT_146850bb0;
}



// FUNCTION 1404908b0 FUN_1404908b0 body=47 status=ok
// SIG undefined FUN_1404908b0(void)

longlong FUN_1404908b0(void)

{
  if (DAT_146850b10 == 0) {
    FUN_141786a30(&DAT_146850b10,&PTR_FUN_1461f6c30);
  }
  return DAT_146850b10;
}



// FUNCTION 1404908e0 FUN_1404908e0 body=47 status=ok
// SIG undefined FUN_1404908e0(void)

longlong FUN_1404908e0(void)

{
  if (DAT_146850b18 == 0) {
    FUN_141786a30(&DAT_146850b18,&PTR_FUN_1461f6cb0);
  }
  return DAT_146850b18;
}



// FUNCTION 140490910 FUN_140490910 body=47 status=ok
// SIG undefined FUN_140490910(void)

longlong FUN_140490910(void)

{
  if (DAT_146850b20 == 0) {
    FUN_141786a30(&DAT_146850b20,&PTR_FUN_1461f6da0);
  }
  return DAT_146850b20;
}



// FUNCTION 140490940 FUN_140490940 body=47 status=ok
// SIG undefined FUN_140490940(void)

longlong FUN_140490940(void)

{
  if (DAT_146850b28 == 0) {
    FUN_141786a30(&DAT_146850b28,&PTR_FUN_1461f6e20);
  }
  return DAT_146850b28;
}



// FUNCTION 140490970 FUN_140490970 body=47 status=ok
// SIG undefined FUN_140490970(void)

longlong FUN_140490970(void)

{
  if (DAT_146850b30 == 0) {
    FUN_141786a30(&DAT_146850b30,&PTR_FUN_1461f6e60);
  }
  return DAT_146850b30;
}



// FUNCTION 1404909a0 FUN_1404909a0 body=47 status=ok
// SIG undefined FUN_1404909a0(void)

longlong FUN_1404909a0(void)

{
  if (DAT_146850b38 == 0) {
    FUN_141786a30(&DAT_146850b38,&PTR_FUN_1461f6f20);
  }
  return DAT_146850b38;
}



// FUNCTION 1404909d0 FUN_1404909d0 body=47 status=ok
// SIG undefined FUN_1404909d0(void)

longlong FUN_1404909d0(void)

{
  if (DAT_146850b40 == 0) {
    FUN_141786a30(&DAT_146850b40,&PTR_FUN_1461f6fe0);
  }
  return DAT_146850b40;
}



// FUNCTION 140490a00 FUN_140490a00 body=47 status=ok
// SIG undefined FUN_140490a00(void)

longlong FUN_140490a00(void)

{
  if (DAT_146850b48 == 0) {
    FUN_141786a30(&DAT_146850b48,&PTR_FUN_1461f7020);
  }
  return DAT_146850b48;
}



// FUNCTION 140490a30 FUN_140490a30 body=47 status=ok
// SIG undefined FUN_140490a30(void)

longlong FUN_140490a30(void)

{
  if (DAT_146850b50 == 0) {
    FUN_141786a30(&DAT_146850b50,&PTR_FUN_1461f70e0);
  }
  return DAT_146850b50;
}



// FUNCTION 140490a60 FUN_140490a60 body=47 status=ok
// SIG undefined FUN_140490a60(void)

longlong FUN_140490a60(void)

{
  if (DAT_146850b58 == 0) {
    FUN_141786a30(&DAT_146850b58,&PTR_FUN_1461f7190);
  }
  return DAT_146850b58;
}



// FUNCTION 140490a90 FUN_140490a90 body=47 status=ok
// SIG undefined FUN_140490a90(void)

longlong FUN_140490a90(void)

{
  if (DAT_146850b60 == 0) {
    FUN_141786a30(&DAT_146850b60,&PTR_FUN_1461f7250);
  }
  return DAT_146850b60;
}



// FUNCTION 140490ac0 FUN_140490ac0 body=47 status=ok
// SIG undefined FUN_140490ac0(void)

longlong FUN_140490ac0(void)

{
  if (DAT_146850b68 == 0) {
    FUN_141786a30(&DAT_146850b68,&PTR_FUN_1461f7290);
  }
  return DAT_146850b68;
}



// FUNCTION 140490af0 FUN_140490af0 body=47 status=ok
// SIG undefined FUN_140490af0(void)

longlong FUN_140490af0(void)

{
  if (DAT_146850b70 == 0) {
    FUN_141786a30(&DAT_146850b70,&PTR_FUN_1461f72d0);
  }
  return DAT_146850b70;
}



// FUNCTION 140490b20 FUN_140490b20 body=47 status=ok
// SIG undefined FUN_140490b20(void)

longlong FUN_140490b20(void)

{
  if (DAT_146850b78 == 0) {
    FUN_141786a30(&DAT_146850b78,&PTR_FUN_1461f7310);
  }
  return DAT_146850b78;
}



// FUNCTION 140490b50 FUN_140490b50 body=47 status=ok
// SIG undefined FUN_140490b50(void)

longlong FUN_140490b50(void)

{
  if (DAT_146850b80 == 0) {
    FUN_141786a30(&DAT_146850b80,&PTR_FUN_1461f7390);
  }
  return DAT_146850b80;
}



// FUNCTION 140490b80 FUN_140490b80 body=47 status=ok
// SIG undefined FUN_140490b80(void)

longlong FUN_140490b80(void)

{
  if (DAT_146850b88 == 0) {
    FUN_141786a30(&DAT_146850b88,&PTR_FUN_1461f7450);
  }
  return DAT_146850b88;
}



// FUNCTION 140490bb0 FUN_140490bb0 body=47 status=ok
// SIG undefined FUN_140490bb0(void)

longlong FUN_140490bb0(void)

{
  if (DAT_146850b90 == 0) {
    FUN_141786a30(&DAT_146850b90,&PTR_FUN_1461f7490);
  }
  return DAT_146850b90;
}



// FUNCTION 140490be0 FUN_140490be0 body=47 status=ok
// SIG undefined FUN_140490be0(void)

longlong FUN_140490be0(void)

{
  if (DAT_146850b98 == 0) {
    FUN_141786a30(&DAT_146850b98,&PTR_FUN_1461f7510);
  }
  return DAT_146850b98;
}



// FUNCTION 140490c10 FUN_140490c10 body=47 status=ok
// SIG undefined FUN_140490c10(void)

longlong FUN_140490c10(void)

{
  if (DAT_146850ba0 == 0) {
    FUN_141786a30(&DAT_146850ba0,&PTR_FUN_1461f7590);
  }
  return DAT_146850ba0;
}



// FUNCTION 140490c40 FUN_140490c40 body=47 status=ok
// SIG undefined FUN_140490c40(void)

longlong FUN_140490c40(void)

{
  if (DAT_146850ba8 == 0) {
    FUN_141786a30(&DAT_146850ba8,&PTR_FUN_1461f7610);
  }
  return DAT_146850ba8;
}



// FUNCTION 140490c70 FUN_140490c70 body=53 status=ok
// SIG undefined FUN_140490c70(void)

void FUN_140490c70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143f54028;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140490cc0 FUN_140490cc0 body=47 status=ok
// SIG undefined FUN_140490cc0(void)

longlong FUN_140490cc0(void)

{
  if (DAT_146850dc0 == 0) {
    FUN_141786440(&DAT_146850dc0,&PTR_GetPrivateStaticClass_143f50360);
  }
  return DAT_146850dc0;
}



// FUNCTION 140490d00 FUN_140490d00 body=53 status=ok
// SIG undefined FUN_140490d00(void)

void FUN_140490d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143f54140;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 140490d50 FUN_140490d50 body=162 status=ok
// SIG undefined FUN_140490d50(void)

longlong FUN_140490d50(void)

{
  if (DAT_146850e80 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"HummingbirdBaseComponent",&DAT_146850e80,FUN_140447710,
                  0x238,0x10000000,0,L"Engine",FUN_140492440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14048fd20,&LAB_140447700,0);
  }
  return DAT_146850e80;
}



// FUNCTION 140490e00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerStateGunfire::GetPrivateStaticClass(void)

{
  if (DAT_146850dc8 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlSystem",&DAT_146850dc8,FUN_140447710,0x498,
                  0x10000000,0,L"Engine",&LAB_140492220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146850dc8;
}



// FUNCTION 140490eb0 FUN_140490eb0 body=162 status=ok
// SIG undefined FUN_140490eb0(void)

longlong FUN_140490eb0(void)

{
  if (DAT_146850c88 == 0) {
    FUN_14171ccd0(L"/Script/CohtmlPlugin",L"CohtmlHUD",&DAT_146850c88,FUN_140447710,0x268,0x10000000
                  ,0,L"Engine",&LAB_1404923a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14048fd20,&LAB_140447700,0);
  }
  return DAT_146850c88;
}


