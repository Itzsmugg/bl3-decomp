// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ee24a0 FlushPendingDeleteRHIResources_RenderThread body=17 status=ok
// SIG undefined FlushPendingDeleteRHIResources_RenderThread(void)

void FlushPendingDeleteRHIResources_RenderThread(void)

{
  if (DAT_146ab6383 == '\0') {
    FUN_141ec6070(0);
    return;
  }
  return;
}



// FUNCTION 141ee24c0 FlushRHILogsAndReportCrash body=43 status=ok
// SIG undefined FlushRHILogsAndReportCrash(void)

void FRenderingThread::FlushRHILogsAndReportCrash(undefined8 param_1)

{
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0xb0))();
  }
  FUN_1416a6ea0(param_1);
  return;
}



// FUNCTION 141ee24f0 FUN_141ee24f0 body=606 status=ok
// SIG undefined FUN_141ee24f0(void)

void FUN_141ee24f0(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [24];
  
  if (DAT_146ab62c8 != '\0') {
    if (DAT_146ac3ac5 == '\0') {
      plVar10 = (longlong *)FTaskGraphInterface::Get();
      cVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,2);
      if (cVar8 == '\0') {
        plVar10 = (longlong *)FTaskGraphInterface::Get();
        cVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,0x102);
        if (cVar8 == '\0') {
          plVar10 = (longlong *)FTaskGraphInterface::Get();
          (**(code **)(*plVar10 + 0x30))(plVar10,2);
          plVar10 = (longlong *)FTaskGraphInterface::Get();
          (**(code **)(*plVar10 + 0x30))(plVar10,0x102);
        }
      }
    }
    local_res10[0] = param_1;
    if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        local_res18[0] = param_1;
        FUN_141edd850(local_res18,&DAT_146ab6e78);
      }
      else {
        plVar10 = (longlong *)FUN_141ee04c0(local_30,0,0xff);
        *(undefined1 *)(*plVar10 + 0x10) = param_1;
        lVar3 = *plVar10;
        lVar7 = plVar10[2];
        lVar4 = plVar10[1];
        lVar5 = *(longlong *)(lVar3 + 0x18);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_38 = lVar5;
        FUN_140445370(lVar3,lVar4,(int)lVar7,1);
        if (lVar5 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_38);
          }
        }
      }
    }
    else {
      FUN_141edd850(local_res10,&DAT_146ab6e78);
    }
    FUN_141ee0140(&DAT_146ac3ba0,&local_48,2);
    if ((local_48 != 0) && (FUN_141ee2750(&local_48,0), local_48 != 0)) {
      LOCK();
      piVar1 = (int *)(local_48 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_48);
      }
    }
    plVar10 = (longlong *)GetPendingCleanupObjects();
    uVar12 = 0;
    local_40 = 0;
    FUN_141edede0(&local_40,0);
    FRenderCommandFence::Wait(&local_40,0);
    if (plVar10 != (longlong *)0x0) {
      uVar13 = uVar12;
      if (0 < (int)plVar10[1]) {
        do {
          puVar6 = *(undefined8 **)(uVar13 + *plVar10);
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          uVar13 = uVar13 + 8;
        } while ((int)uVar11 < (int)plVar10[1]);
      }
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar10,0x10);
    }
    if (local_40 != 0) {
      LOCK();
      piVar1 = (int *)(local_40 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_40);
      }
    }
  }
  return;
}



// FUNCTION 141ee2750 FUN_141ee2750 body=1096 status=ok
// SIG undefined FUN_141ee2750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ee2750(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  uint uVar16;
  double dVar17;
  undefined1 auStack_d8 [32];
  double local_b8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  longlong local_80 [4];
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar10 = FUN_1415dcd20();
  if (lVar10 != 0) {
    FUN_1415e70c0(lVar10);
  }
  LOCK();
  uVar11 = *(ulonglong *)(*param_1 + 8);
  if (uVar11 == 0) {
    *(ulonglong *)(*param_1 + 8) = 0;
    uVar11 = 0;
  }
  UNLOCK();
  if ((uVar11 >> 0x1a & 1) != 0) goto LAB_141ee2b12;
  DAT_146ac3f2c = DAT_146ac3f2c + 1;
  if (DAT_146ac3f2c < 2) {
    plVar12 = (longlong *)FTaskGraphInterface::Get();
    cVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,2);
    if (cVar6 != '\0') goto LAB_141ee2803;
  }
  else {
LAB_141ee2803:
    param_2 = '\0';
  }
  plVar13 = (longlong *)FUN_1415ab270(0);
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  local_60 = (longlong *)0x0;
  local_58 = 1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_80,0);
  lVar10 = *param_1;
  plVar12 = local_80;
  if (local_60 != (longlong *)0x0) {
    plVar12 = local_60;
  }
  *plVar12 = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar14 + 0x50))(plVar14,plVar13,local_80,2);
  plVar12 = local_80;
  iVar5 = (int)local_58;
  if (local_60 != (longlong *)0x0) {
    plVar12 = local_60;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar12 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar12 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar12 = plVar12 + 1;
  }
  if (local_60 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar16 = 0x21;
  if (DAT_1464cabdc < 0x21) {
    uVar16 = DAT_1464cabdc;
  }
  QueryPerformanceCounter(&local_a0);
  dVar17 = (double)DAT_1464cabe0;
  dVar3 = (double)local_a0.QuadPart * DAT_1468b02f8 + 16777216.0;
  bVar7 = FUN_14162d9c0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3f34) && (_Init_thread_header(&DAT_146ac3f34), DAT_146ac3f34 == -1))
  {
    uVar15 = FCommandLine::Get();
    DAT_146ac3f30 = FParse::Param(uVar15,L"nothreadtimeout");
    _Init_thread_footer(&DAT_146ac3f34);
  }
LAB_141ee2950:
  FUN_141edfbd0();
  if (param_2 != '\0') {
    plVar12 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar12 + 0x30))(plVar12,2);
  }
  cVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,uVar16,0);
  QueryPerformanceCounter(&local_98);
  if ((double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0 < dVar17 * 0.001 + dVar3) {
LAB_141ee2a0e:
    bVar4 = false;
  }
  else {
    uVar15 = FUN_1415d80a0();
    cVar8 = FThreadHeartBeat::IsBeating(uVar15);
    if (cVar8 == '\0') goto LAB_141ee2a0e;
    bVar4 = true;
    if ((DAT_146ab6358 != (longlong *)0x0) &&
       (cVar8 = (**(code **)(*DAT_146ab6358 + 0x6f0))(), cVar8 == '\0')) {
      LowLevelFatalErrorHandler("Unknown",0x48c,L"GPU has hung or crashed!");
      FDebug::AssertFailed(&DAT_144edb9be,"Unknown",0x48c,L"GPU has hung or crashed!");
    }
  }
  bVar9 = FUN_14162d9c0();
  bVar7 = bVar7 | bVar9;
  if (cVar6 == '\0') {
    if (((bVar7 == 0) && (bVar4)) && (DAT_146ac3f30 == '\0')) {
      QueryPerformanceCounter(&local_90);
      LowLevelFatalErrorHandler
                ("Unknown",0x499,L"GameThread timed out waiting for RenderThread after %.02f secs",
                 ((double)local_90.QuadPart * DAT_1468b02f8 + 16777216.0) - dVar3);
      QueryPerformanceCounter(&local_88);
      local_b8 = ((double)local_88.QuadPart * DAT_1468b02f8 + 16777216.0) - dVar3;
      FDebug::AssertFailed
                (&DAT_144edb9bf,"Unknown",0x499,
                 L"GameThread timed out waiting for RenderThread after %.02f secs");
    }
    goto LAB_141ee2950;
  }
  FUN_1415b5910(plVar13);
  DAT_146ac3f2c = DAT_146ac3f2c + -1;
LAB_141ee2b12:
  lVar10 = FUN_1415dcd20();
  if (lVar10 != 0) {
    FUN_1415e5410(lVar10);
  }
  return;
}



// FUNCTION 141ee2ba0 FUN_141ee2ba0 body=222 status=ok
// SIG undefined FUN_141ee2ba0(void)

undefined8 * FUN_141ee2ba0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3f68) && (_Init_thread_header(&DAT_146ac3f68), DAT_146ac3f68 == -1))
  {
    puVar2 = (undefined8 *)operator_new(0x20);
    puVar1 = (undefined8 *)0x0;
    DAT_146ac3f58 = puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 2;
      DAT_146ac3f58 = puVar2;
    }
    puVar2 = (undefined8 *)operator_new(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 4;
      puVar1 = puVar2;
    }
    DAT_146ac3f60 = puVar1;
    atexit(`FGlobalDynamicIndexBuffer::Get'::`2'::
           _dynamic_atexit_destructor_for__GlobalDynamicIndexBuffer__);
    _Init_thread_footer(&DAT_146ac3f68);
    return &DAT_146ac3f58;
  }
  return &DAT_146ac3f58;
}



// FUNCTION 141ee2c80 FUN_141ee2c80 body=179 status=ok
// SIG undefined FUN_141ee2c80(void)

undefined ** FUN_141ee2c80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ac3f6c) {
    _Init_thread_header(&DAT_146ac3f6c);
    if (DAT_146ac3f6c == -1) {
      DAT_1464cb0e0 = (undefined8 *)operator_new();
      if (DAT_1464cb0e0 == (undefined8 *)0x0) {
        DAT_1464cb0e0 = (undefined8 *)0x0;
      }
      else {
        *DAT_1464cb0e0 = 0;
        DAT_1464cb0e0[1] = 0;
        DAT_1464cb0e0[4] = 0;
        DAT_1464cb0e0[5] = 0;
        *(undefined4 *)(DAT_1464cb0e0 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)DAT_1464cb0e0 + 0x34) = 0;
        DAT_1464cb0e0[8] = 0;
        *(undefined4 *)(DAT_1464cb0e0 + 9) = 0;
        DAT_1464cb0e0[10] = 0;
      }
      atexit(FUN_143ea19e0);
      _Init_thread_footer(&DAT_146ac3f6c);
      return &PTR_PTR_1464cb0d8;
    }
  }
  return &PTR_PTR_1464cb0d8;
}



// FUNCTION 141ee2d40 FUN_141ee2d40 body=154 status=ok
// SIG undefined FUN_141ee2d40(void)

undefined8 * FUN_141ee2d40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ac3f50) {
    _Init_thread_header(&DAT_146ac3f50);
    if (DAT_146ac3f50 == -1) {
      DAT_146ac3f40 = (undefined8 *)operator_new();
      if (DAT_146ac3f40 == (undefined8 *)0x0) {
        DAT_146ac3f40 = (undefined8 *)0x0;
      }
      else {
        *DAT_146ac3f40 = 0;
        DAT_146ac3f40[1] = 0;
        DAT_146ac3f40[2] = 0;
      }
      atexit(`FGlobalDynamicVertexBuffer::Get'::`2'::
             _dynamic_atexit_destructor_for__GlobalDynamicVertexBuffer__);
      _Init_thread_footer(&DAT_146ac3f50);
      return &DAT_146ac3f40;
    }
  }
  return &DAT_146ac3f40;
}



// FUNCTION 141ee2de0 FUN_141ee2de0 body=133 status=ok
// SIG undefined FUN_141ee2de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141ee2de0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ac3ef0) {
    _Init_thread_header(&DAT_146ac3ef0);
    if (DAT_146ac3ef0 == -1) {
      _DAT_146ac3ee8 = 0;
      _DAT_146ac3ee0 = &PTR_IsPromotedBuild_144ede8a0;
      atexit((_func_5014 *)&LAB_143ea1af0);
      _Init_thread_footer(&DAT_146ac3ef0);
      return &DAT_146ac3ee0;
    }
  }
  return &DAT_146ac3ee0;
}



// FUNCTION 141ee2e70 FUN_141ee2e70 body=140 status=ok
// SIG undefined FUN_141ee2e70(void)

undefined4 * FUN_141ee2e70(undefined4 *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 1:
    *param_1 = DAT_1464caca0;
    return param_1;
  case 2:
    *param_1 = DAT_1464cacf0;
    return param_1;
  case 3:
    *param_1 = DAT_1464cad40;
    return param_1;
  case 4:
    *param_1 = DAT_1464cad90;
    return param_1;
  case 5:
    *param_1 = DAT_1464cade0;
    return param_1;
  case 6:
    *param_1 = DAT_1464cae30;
    return param_1;
  case 7:
    *param_1 = DAT_1464cae80;
    return param_1;
  case 8:
    *param_1 = DAT_1464caed0;
    return param_1;
  default:
    *param_1 = DAT_1464cac50;
    return param_1;
  }
}



// FUNCTION 141ee2f20 FUN_141ee2f20 body=103 status=ok
// SIG undefined FUN_141ee2f20(void)

undefined ** FUN_141ee2f20(undefined1 param_1)

{
  switch(param_1) {
  case 1:
    return &PTR_PTR_1464cac60;
  case 2:
    return &PTR_PTR_1464cacb0;
  case 3:
    return &PTR_PTR_1464cad00;
  case 4:
    return &PTR_PTR_1464cad50;
  case 5:
    return &PTR_PTR_1464cada0;
  case 6:
    return &PTR_PTR_1464cadf0;
  case 7:
    return &PTR_PTR_1464cae40;
  case 8:
    return &PTR_PTR_1464cae90;
  default:
    return &PTR_PTR_1464cac10;
  }
}



// FUNCTION 141ee2fb0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FDynamicIndexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDynamicIndexBuffer",0x28);
  return param_2;
}



// FUNCTION 141ee2ff0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FDynamicVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDynamicVertexBuffer",0x2a);
  return param_2;
}



// FUNCTION 141ee3030 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FTextureReference::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FTextureReference",0x24);
  return param_2;
}



// FUNCTION 141ee3070 GetSmallTaskAllocator body=8 status=ok
// SIG undefined GetSmallTaskAllocator(void)

undefined * FBaseGraphTask::GetSmallTaskAllocator(void)

{
  return &DAT_146ab6e78;
}



// FUNCTION 141ee3080 FUN_141ee3080 body=108 status=ok
// SIG undefined FUN_141ee3080(void)

undefined * FUN_141ee3080(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ac3e98) {
    _Init_thread_header(&DAT_146ac3e98);
    if (DAT_146ac3e98 == -1) {
      atexit(FUN_143ea1ab0);
      _Init_thread_footer(&DAT_146ac3e98);
      return &DAT_1464cb080;
    }
  }
  return &DAT_1464cb080;
}



// FUNCTION 141ee30f0 GetNestedStructs body=143 status=ok
// SIG undefined GetNestedStructs(void)

void FUniformBufferStruct::GetNestedStructs(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x28 + lVar4);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        GetNestedStructs(lVar2,param_2);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 141ee3180 GetPendingCleanupObjects body=309 status=ok
// SIG undefined GetPendingCleanupObjects(void)

longlong * GetPendingCleanupObjects(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  plVar6 = (longlong *)operator_new(0x10);
  if (plVar6 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  LOCK();
  if (DAT_146ac3c38 == 0) {
    DAT_146ac3c38 = 0;
  }
  UNLOCK();
  uVar8 = (uint)DAT_146ac3c38;
  uVar5 = DAT_146ac3c38;
  while (uVar8 = uVar8 & 0x3ffffff, DAT_146ac3c38 = uVar5, (uVar5 & 0x3ffffff) != 0) {
    uVar7 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar7 < (uVar5 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    LOCK();
    bVar9 = uVar5 == DAT_146ac3c38;
    if (!bVar9) {
      uVar7 = DAT_146ac3c38;
    }
    DAT_146ac3c38 = uVar7;
    UNLOCK();
    if (bVar9) break;
    LOCK();
    if (DAT_146ac3c38 == 0) {
      DAT_146ac3c38 = 0;
    }
    UNLOCK();
    uVar8 = (uint)DAT_146ac3c38;
    uVar5 = DAT_146ac3c38;
  }
  while (uVar8 != 0) {
    iVar1 = (int)plVar6[1];
    lVar3 = (&DAT_1468a81f8)[uVar8 >> 0xe];
    uVar4 = *(undefined8 *)(lVar3 + 8 + (ulonglong)(uVar8 & 0x3fff) * 0x18);
    *(int *)(plVar6 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar1 * 8) = uVar4;
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar8 & 0x3fff) * 0x18 + 0x10);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
    uVar8 = uVar2;
  }
  return plVar6;
}



// FUNCTION 141ee32c0 FUN_141ee32c0 body=527 status=ok
// SIG undefined FUN_141ee32c0(void)

wchar_t * FUN_141ee32c0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"PF_Unknown";
  case 1:
    return L"PF_A32B32G32R32F";
  case 2:
    return L"PF_B8G8R8A8";
  case 3:
    return L"PF_G8";
  case 4:
    return L"PF_G16";
  case 5:
    return L"PF_DXT1";
  case 6:
    return L"PF_DXT3";
  case 7:
    return L"PF_DXT5";
  case 8:
    return L"PF_UYVY";
  case 9:
    return L"PF_FloatRGB";
  case 10:
    return L"PF_FloatRGBA";
  case 0xb:
    return L"PF_DepthStencil";
  case 0xc:
    return L"PF_ShadowDepth";
  case 0xd:
    return L"PF_R32_FLOAT";
  case 0xe:
    return L"PF_G16R16";
  case 0xf:
    return L"PF_G16R16F";
  case 0x10:
    return L"PF_G16R16F_FILTER";
  case 0x11:
    return L"PF_G32R32F";
  case 0x12:
    return L"PF_A2B10G10R10";
  case 0x13:
    return L"PF_A16B16G16R16";
  case 0x14:
    return L"PF_D24";
  case 0x15:
    return L"PF_R16F";
  case 0x16:
    return L"PF_R16F_FILTER";
  case 0x17:
    return L"PF_BC5";
  case 0x18:
    return L"PF_V8U8";
  case 0x19:
    return L"PF_A1";
  case 0x1a:
    return L"PF_FloatR11G11B10";
  case 0x1b:
    return L"PF_A8";
  case 0x1c:
    return L"PF_R32_UINT";
  case 0x1d:
    return L"PF_R32_SINT";
  case 0x1e:
    return L"PF_PVRTC2";
  case 0x1f:
    return L"PF_PVRTC4";
  case 0x20:
    return L"PF_R16_UINT";
  case 0x21:
    return L"PF_R16_SINT";
  case 0x22:
    return L"PF_R16G16B16A16_UINT";
  case 0x23:
    return L"PF_R16G16B16A16_SINT";
  case 0x24:
    return L"PF_R5G6B5_UNORM";
  case 0x25:
    return L"PF_R8G8B8A8";
  case 0x26:
    return L"PF_A8R8G8B8";
  case 0x27:
    return L"PF_BC4";
  case 0x28:
    return L"PF_R8G8";
  case 0x29:
    return L"PF_ATC_RGB";
  case 0x2a:
    return L"PF_ATC_RGBA_E";
  case 0x2b:
    return L"PF_ATC_RGBA_I";
  case 0x2c:
    return L"PF_X24_G8";
  case 0x2d:
    return L"PF_ETC1";
  case 0x2e:
    return L"PF_ETC2_RGB";
  case 0x2f:
    return L"PF_ETC2_RGBA";
  case 0x30:
    return L"PF_R32G32B32A32_UINT";
  case 0x31:
    return L"PF_R16G16_UINT";
  case 0x32:
    return L"PF_ASTC_4x4";
  case 0x33:
    return L"PF_ASTC_6x6";
  case 0x34:
    return L"PF_ASTC_8x8";
  case 0x35:
    return L"PF_ASTC_10x10";
  case 0x36:
    return L"PF_ASTC_12x12";
  case 0x37:
    return L"PF_BC6H";
  case 0x38:
    return L"PF_BC7";
  case 0x39:
    return L"PF_R8_UINT";
  case 0x3a:
    return L"PF_L8";
  default:
    return L"PF_Unknown";
  case 0x3e:
    return L"PF_R16G16B16A16_UNORM";
  case 0x3f:
    return L"PF_R16G16B16A16_SNORM";
  }
}



// FUNCTION 141ee35d0 GetResourceList body=8 status=ok
// SIG undefined GetResourceList(void)

undefined8 * FRenderResource::GetResourceList(void)

{
  return &DAT_146ac3f38;
}



// FUNCTION 141ee35e0 GetStructList body=8 status=ok
// SIG undefined GetStructList(void)

undefined8 * FUniformBufferStruct::GetStructList(void)

{
  return &DAT_146ac3e90;
}



// FUNCTION 141ee35f0 FUN_141ee35f0 body=8 status=ok
// SIG undefined FUN_141ee35f0(void)

undefined * FUN_141ee35f0(void)

{
  return &DAT_1464cb070;
}



// FUNCTION 141ee3600 FUN_141ee3600 body=8 status=ok
// SIG undefined FUN_141ee3600(void)

undefined * FUN_141ee3600(void)

{
  return &DAT_1464cb030;
}



// FUNCTION 141ee3610 FUN_141ee3610 body=8 status=ok
// SIG undefined FUN_141ee3610(void)

undefined * FUN_141ee3610(void)

{
  return &DAT_1464caff8;
}



// FUNCTION 141ee3620 FUN_141ee3620 body=8 status=ok
// SIG undefined FUN_141ee3620(void)

undefined * FUN_141ee3620(void)

{
  return &DAT_1464cafc0;
}



// FUNCTION 141ee3630 HandleRHIThreadEnableChanged body=178 status=ok
// SIG undefined HandleRHIThreadEnableChanged(void)

void HandleRHIThreadEnableChanged(longlong *param_1)

{
  int iVar1;
  wchar_t *_Str;
  bool bVar2;
  bool bVar3;
  
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    bVar2 = iVar1 == 2;
    bVar3 = iVar1 == 1;
    if (((bVar3 != (bool)DAT_146ab6381) || (bVar2 != (bool)DAT_146ab6382)) &&
       (((!bVar2 && (!bVar3)) || (DAT_146ac3ac5 != '\0')))) {
      FUN_141ee6720();
      if (bVar2) {
        DAT_146ab6381 = 0;
        DAT_146ab6382 = 1;
        FUN_141ee60a0();
        return;
      }
      DAT_146ab6382 = '\0';
      DAT_146ab6381 = bVar3;
      FUN_141ee60a0();
    }
  }
  return;
}



// FUNCTION 141ee36f0 FUN_141ee36f0 body=133 status=ok
// SIG undefined FUN_141ee36f0(void)

undefined8 FUN_141ee36f0(longlong param_1)

{
  DAT_1468c21c4 = GetCurrentThreadId();
  if (DAT_146ab6383 == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    (**(code **)(*DAT_146ab6358 + 0x370))();
  }
  return 1;
}



// FUNCTION 141ee3790 FUN_141ee3790 body=203 status=ok
// SIG undefined FUN_141ee3790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee3790(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_78 = &local_58;
  local_34 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_80 = 4;
  local_88 = *(undefined4 *)(param_1 + 0x48);
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x4f0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x50));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// FUNCTION 141ee3860 FUN_141ee3860 body=284 status=ok
// SIG undefined FUN_141ee3860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee3860(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_78 = &local_58;
  local_34 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_80 = 0;
  if (DAT_1464c9c54 == 0x14) {
    local_80 = 2;
  }
  local_80 = local_80 | 0x200;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = *(undefined4 *)(param_1 + 0x4c);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x498))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x48));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  (**(code **)(*DAT_146ab6358 + 0x620))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 141ee3980 FUN_141ee3980 body=198 status=ok
// SIG undefined FUN_141ee3980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee3980(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_48 = 1;
  local_70 = &local_58;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = 4;
  (**(code **)(*DAT_146ab6358 + 0x490))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x40));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 141ee3a50 FUN_141ee3a50 body=240 status=ok
// SIG undefined FUN_141ee3a50(void)

void FUN_141ee3a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_res10;
  
  (**(code **)(*DAT_146ab6358 + 0x5d8))(DAT_146ab6358,&local_res10,&DAT_146ab6e78,param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != &local_res10) {
    puVar4 = (undefined8 *)*plVar1;
    lVar7 = 0;
    *plVar1 = local_res10;
    local_res10 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return;
}



// FUNCTION 141ee3b40 InitResourceFromPossiblyParallelRendering body=427 status=ok
// SIG undefined InitResourceFromPossiblyParallelRendering(void)

void FRenderResource::InitResourceFromPossiblyParallelRendering(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res20 [8];
  
  cVar3 = IsInRenderingThread();
  if (cVar3 == '\0') {
    FScopedEvent::FScopedEvent(local_res20);
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar8 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar8 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar8);
      plVar5 = plVar8;
    }
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
      if (plVar8 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
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
        plVar8 = (longlong *)plVar5[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar5[1] = (longlong)plVar8;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar9 = (int)plVar5[2];
    }
    plVar5[1] = *plVar8;
    *(int *)(plVar5 + 2) = iVar9 + -1;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144ede9f8;
    *(undefined1 *)(plVar8 + 4) = 0;
    plVar8[5] = 0;
    plVar8[3] = (longlong)local_res20;
    plVar8[2] = (longlong)param_1;
    lVar6 = plVar8[5];
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_141ee59f0(plVar8,0,0xff,1,0);
    if (lVar6 != 0) {
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
    FScopedEvent::~FScopedEvent(local_res20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ee3b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 141ee3cf0 InitializeLayout body=1064 status=ok
// SIG undefined InitializeLayout(void)

void FUniformBufferStruct::InitializeLayout(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ushort *puVar11;
  void *_Src;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int local_res8;
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_58;
  undefined4 uStack_54;
  
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
  iVar16 = *(int *)(param_1 + 0x68);
  local_c8 = 0;
  local_c0 = 0;
  if (0 < iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
    iVar16 = *(int *)(param_1 + 0x68);
    uVar12 = local_c0 & 0xffffffff;
  }
  iVar17 = 0;
  lVar15 = local_c8;
  if (0 < iVar16) {
    lVar14 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x60);
      iVar16 = (int)uVar12;
      local_58 = 0;
      puVar1 = (undefined4 *)(lVar10 + lVar14);
      local_b8 = *puVar1;
      uStack_b4 = puVar1[1];
      uStack_b0 = puVar1[2];
      uStack_ac = puVar1[3];
      uVar13 = iVar16 + 1;
      puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar14);
      local_a8 = *puVar2;
      uStack_a0 = puVar2[1];
      local_c0 = CONCAT44(local_c0._4_4_,uVar13);
      puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar14);
      local_98 = *puVar3;
      uStack_90 = puVar3[1];
      uVar18 = *(undefined4 *)puVar2;
      uVar19 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar20 = *(undefined4 *)(puVar2 + 1);
      uVar21 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar22 = *(undefined4 *)puVar3;
      uVar23 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar24 = *(undefined4 *)(puVar3 + 1);
      uVar25 = *(undefined4 *)((longlong)puVar3 + 0xc);
      if (local_c0._4_4_ < (int)uVar13) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_c8);
        lVar15 = local_c8;
        uVar18 = (undefined4)local_a8;
        uVar19 = local_a8._4_4_;
        uVar20 = (undefined4)uStack_a0;
        uVar21 = uStack_a0._4_4_;
        uVar22 = (undefined4)local_98;
        uVar23 = local_98._4_4_;
        uVar24 = (undefined4)uStack_90;
        uVar25 = uStack_90._4_4_;
        uVar13 = (uint)local_c0;
      }
      uVar12 = (ulonglong)uVar13;
      lVar10 = (longlong)iVar16 * 0x38;
      iVar17 = iVar17 + 1;
      lVar14 = lVar14 + 0x30;
      puVar1 = (undefined4 *)(lVar10 + lVar15);
      *puVar1 = local_b8;
      puVar1[1] = uStack_b4;
      puVar1[2] = uStack_b0;
      puVar1[3] = uStack_ac;
      puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar15);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      puVar1 = (undefined4 *)(lVar10 + 0x20 + lVar15);
      *puVar1 = uVar22;
      puVar1[1] = uVar23;
      puVar1[2] = uVar24;
      puVar1[3] = uVar25;
      *(ulonglong *)(lVar10 + 0x30 + lVar15) = CONCAT44(uStack_54,local_58);
    } while (iVar17 < *(int *)(param_1 + 0x68));
  }
  local_res8 = 0;
  if (0 < (int)uVar12) {
    local_res18 = 0;
    local_res10 = -1;
    do {
      iVar16 = *(int *)(lVar15 + 0x14 + local_res18);
      if (iVar16 - 6U < 4) {
        iVar17 = *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar17 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar17 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar17);
        }
        *(char *)((longlong)iVar17 + *(longlong *)(param_1 + 0x40)) = (char)iVar16;
        iVar16 = *(int *)(param_1 + 0x38);
        sVar4 = *(short *)(lVar15 + 0x30 + local_res18);
        sVar5 = *(short *)(lVar15 + 0x10 + local_res18);
        *(int *)(param_1 + 0x38) = iVar16 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar16 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar16);
        }
        *(short *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar16 * 2) = sVar4 + sVar5;
      }
      lVar14 = *(longlong *)(lVar15 + 0x28 + local_res18);
      if ((lVar14 != 0) &&
         (iVar16 = *(int *)(lVar15 + 0x30 + local_res18) + *(int *)(lVar15 + 0x10 + local_res18),
         0 < *(int *)(lVar14 + 0x68))) {
        lVar10 = 0;
        iVar17 = local_res8 + 1;
        local_res20 = local_res18;
        do {
          local_res20 = local_res20 + 0x38;
          lVar7 = *(longlong *)(lVar14 + 0x60);
          iVar8 = (int)uVar12;
          uVar13 = iVar8 + 1;
          local_c0 = CONCAT44(local_c0._4_4_,uVar13);
          local_98 = *(undefined8 *)(lVar7 + lVar10);
          uStack_90 = ((undefined8 *)(lVar7 + lVar10))[1];
          puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar10);
          local_a8 = *puVar2;
          uStack_a0 = puVar2[1];
          puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar10);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_58 = iVar16;
          if (local_c0._4_4_ < (int)uVar13) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_c8,uVar12);
            lVar15 = local_c8;
            uVar13 = (uint)local_c0;
          }
          uVar12 = (ulonglong)uVar13;
          _Src = (void *)((longlong)iVar17 * 0x38 + lVar15);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)_Src + 0x38),_Src,(longlong)(iVar8 - iVar17) * 0x38);
          iVar17 = iVar17 + 1;
          lVar10 = lVar10 + 0x30;
          *(undefined8 *)(lVar15 + local_res20) = local_98;
          ((undefined8 *)(lVar15 + local_res20))[1] = uStack_90;
          puVar2 = (undefined8 *)(lVar15 + 0x10 + local_res20);
          *puVar2 = local_a8;
          puVar2[1] = uStack_a0;
          puVar2 = (undefined8 *)(lVar15 + 0x20 + local_res20);
          *puVar2 = CONCAT44(uStack_b4,local_b8);
          puVar2[1] = CONCAT44(uStack_ac,uStack_b0);
          *(ulonglong *)(lVar15 + 0x30 + local_res20) = CONCAT44(uStack_54,local_58);
        } while (local_res10 + iVar17 < *(int *)(lVar14 + 0x68));
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + -1;
      local_res18 = local_res18 + 0x38;
    } while (local_res8 < (int)uVar12);
  }
  uVar13 = *(int *)(param_1 + 0x28) << 0x10;
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar11 = *(ushort **)(param_1 + 0x30);
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x38);
    do {
      uVar6 = *puVar11;
      puVar11 = puVar11 + 1;
      uVar13 = uVar13 ^ uVar6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar9 = *(uint *)(param_1 + 0x48);
  if (3 < uVar9) {
    lVar14 = *(longlong *)(param_1 + 0x40);
    do {
      iVar16 = uVar9 - 1;
      iVar17 = uVar9 - 2;
      iVar8 = uVar9 - 3;
      uVar9 = uVar9 - 4;
      uVar13 = uVar13 ^ *(byte *)(iVar16 + lVar14) ^ (uint)*(byte *)(iVar17 + lVar14) << 8 ^
               (uint)*(byte *)(iVar8 + lVar14) << 0x10 ^
               (uint)*(byte *)((int)uVar9 + lVar14) << 0x18;
    } while (3 < uVar9);
  }
  if (1 < uVar9) {
    do {
      iVar16 = uVar9 - 1;
      uVar9 = uVar9 - 2;
      uVar13 = uVar13 ^ *(byte *)((longlong)iVar16 + *(longlong *)(param_1 + 0x40)) ^
               (uint)*(byte *)((longlong)(int)uVar9 + *(longlong *)(param_1 + 0x40)) << 0x10;
    } while (1 < uVar9);
  }
  if (uVar9 != 0) {
    do {
      uVar9 = uVar9 - 1;
      uVar13 = uVar13 ^ *(byte *)((longlong)(int)uVar9 + *(longlong *)(param_1 + 0x40));
    } while (uVar9 != 0);
  }
  *(uint *)(param_1 + 0x58) = uVar13;
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (lVar15 != 0) {
    FMemory::Free(lVar15);
  }
  return;
}



// FUNCTION 141ee4120 InitializeStructs body=41 status=ok
// SIG undefined InitializeStructs(void)

void FUniformBufferStruct::InitializeStructs(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = DAT_146ac3e90; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    InitializeLayout(puVar1[2]);
  }
  return;
}



// FUNCTION 141ee4150 FUN_141ee4150 body=30 status=ok
// SIG undefined FUN_141ee4150(void)

void FUN_141ee4150(longlong param_1)

{
  if (*(double *)(param_1 + 0x38) != -3.4028234663852886e+38) {
    *(undefined8 *)(param_1 + 0x38) = 0xc7efffffe0000000;
  }
  return;
}



// FUNCTION 141ee4170 IsFenceComplete body=96 status=ok
// SIG undefined IsFenceComplete(void)

undefined8 FRenderCommandFence::IsFenceComplete(longlong *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (DAT_146ac3ac5 != '\0') {
    FUN_141edfbd0();
    if (*param_1 != 0) {
      puVar1 = (ulonglong *)(*param_1 + 8);
      LOCK();
      uVar5 = *puVar1;
      if (uVar5 == 0) {
        *puVar1 = 0;
        uVar5 = 0;
      }
      UNLOCK();
      if ((uVar5 >> 0x1a & 1) == 0) {
        return 0;
      }
    }
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  return 1;
}



// FUNCTION 141ee41d0 FUN_141ee41d0 body=245 status=ok
// SIG undefined FUN_141ee41d0(void)

undefined8 FUN_141ee41d0(void)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3ea8) && (_Init_thread_header(&DAT_146ac3ea8), DAT_146ac3ea8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.EnableHDROutput");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146ac3ea0 = lVar4;
    _Init_thread_footer(&DAT_146ac3ea8);
  }
  lVar4 = DAT_146ac3ea0;
  if (DAT_146ac3ea0 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 != DAT_1468c21c0) {
        lVar5 = 4;
      }
    }
    if (*(int *)(lVar5 + lVar4) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ee42d0 FUN_141ee42d0 body=400 status=ok
// SIG undefined FUN_141ee42d0(void)

bool FUN_141ee42d0(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  if (DAT_146ab632a != '\0') {
    lVar6 = 0;
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar7 < DAT_146ac3ea8) && (_Init_thread_header(&DAT_146ac3ea8), DAT_146ac3ea8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.EnableHDROutput");
      lVar5 = lVar6;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_146ac3ea0 = lVar5;
      _Init_thread_footer(&DAT_146ac3ea8);
    }
    lVar5 = DAT_146ac3ea0;
    if (DAT_146ac3ea0 != 0) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar2 = GetCurrentThreadId();
        if (DVar2 != DAT_1468c21c0) {
          lVar6 = 4;
        }
      }
      if (*(int *)(lVar6 + lVar5) != 0) {
        if ((*piVar7 < DAT_146ac3eb8) && (_Init_thread_header(&DAT_146ac3eb8), DAT_146ac3eb8 == -1))
        {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          DAT_146ac3eb0 =
               (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
          _Init_thread_footer(&DAT_146ac3eb8);
        }
        iVar3 = (**(code **)(*DAT_146ac3eb0 + 0x68))();
        return iVar3 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 141ee4460 IsRenderAlarmLoggingEnabled body=23 status=ok
// SIG undefined IsRenderAlarmLoggingEnabled(void)

longlong FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(longlong param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(int3)((uint)DAT_1464ca1a0 >> 8);
  if ((0 < DAT_1464ca1a0) && ((ulonglong)(longlong)DAT_1464ca1a0 <= *(ulonglong *)(param_1 + 8))) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 141ee4480 FUN_141ee4480 body=454 status=ok
// SIG undefined FUN_141ee4480(void)

undefined8 FUN_141ee4480(uint param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146ac3f88) && (_Init_thread_header(&DAT_146ac3f88), DAT_146ac3f88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SimpleForwardShading");
    lVar5 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146ac3f80 = lVar5;
    _Init_thread_footer(&DAT_146ac3f88);
  }
  lVar5 = DAT_146ac3f80;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar6 = 4;
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    lVar3 = 4;
  }
  else {
    lVar3 = 0;
  }
  if (*(int *)(lVar3 + lVar5) == 0) {
    return 0;
  }
  if ((*piVar7 < DAT_146ac3f78) && (_Init_thread_header(&DAT_146ac3f78), DAT_146ac3f78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportSimpleForwardShading");
    lVar5 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146ac3f70 = lVar5;
    _Init_thread_footer(&DAT_146ac3f78);
  }
  lVar5 = DAT_146ac3f70;
  if (param_1 < 0x1c) {
    if ((0x8dfc0ebU >> (param_1 & 0x1f) & 1) == 0) {
      return 0;
    }
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)) {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar5) == 0) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141ee4650 FUN_141ee4650 body=477 status=ok
// SIG undefined FUN_141ee4650(void)

void FUN_141ee4650(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

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
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_30);
    *param_2 = param_3;
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_30._0_4_);
    return;
  }
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
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144ede988;
  plVar9[5] = 0;
  plVar9[2] = (longlong)param_2;
  *(undefined4 *)(plVar9 + 3) = param_3;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141b731c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 141ee4830 FUN_141ee4830 body=498 status=ok
// SIG undefined FUN_141ee4830(void)

void FUN_141ee4830(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

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
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_30);
    *param_2 = param_3;
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_30._0_4_);
    return;
  }
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
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144ede988;
  plVar9[5] = 0;
  *(undefined4 *)(plVar9 + 3) = param_3;
  plVar9[2] = (longlong)param_2;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141b731c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 141ee4a30 FUN_141ee4a30 body=539 status=ok
// SIG undefined FUN_141ee4a30(void)

void FUN_141ee4a30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_30);
    if (param_2 != param_3) {
      iVar10 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar10;
      if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar10);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar10 * 2);
      }
    }
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_30._0_4_);
    return;
  }
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
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144ede9a8;
  plVar9[5] = 0;
  plVar9[2] = (longlong)param_2;
  plVar9[3] = (longlong)param_3;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141b731c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 141ee4c50 FUN_141ee4c50 body=479 status=ok
// SIG undefined FUN_141ee4c50(void)

void FUN_141ee4c50(undefined8 param_1,undefined1 *param_2,undefined1 param_3)

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
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_30);
    *param_2 = param_3;
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_30._0_4_);
    return;
  }
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
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144ede998;
  plVar9[5] = 0;
  plVar9[2] = (longlong)param_2;
  *(undefined1 *)(plVar9 + 3) = param_3;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141b731c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 141ee4e30 FUN_141ee4e30 body=256 status=ok
// SIG undefined FUN_141ee4e30(void)

undefined8 FUN_141ee4e30(uint param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3f78) && (_Init_thread_header(&DAT_146ac3f78), DAT_146ac3f78 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportSimpleForwardShading");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146ac3f70 = lVar4;
    _Init_thread_footer(&DAT_146ac3f78);
  }
  lVar4 = DAT_146ac3f70;
  if ((param_1 < 0x1c) && ((0x8dfc0ebU >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 != DAT_1468c21c0) {
        lVar5 = 4;
      }
    }
    if (*(int *)(lVar5 + lVar4) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ee4f30 QuantizeSceneBufferSize body=23 status=ok
// SIG undefined QuantizeSceneBufferSize(void)

void QuantizeSceneBufferSize(int *param_1,uint *param_2)

{
  *param_2 = *param_1 + 3U & 0xfffffffc;
  param_2[1] = param_1[1] + 3U & 0xfffffffc;
  return;
}



// FUNCTION 141ee4f50 FUN_141ee4f50 body=46 status=ok
// SIG undefined FUN_141ee4f50(void)

void FUN_141ee4f50(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// FUNCTION 141ee4f80 ReleaseRHI body=35 status=ok
// SIG undefined ReleaseRHI(void)

void FDynamicIndexBuffer::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 141ee4fb0 FUN_141ee4fb0 body=494 status=ok
// SIG undefined FUN_141ee4fb0(void)

void FUN_141ee4fb0(longlong *param_1)

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
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_res20);
    (**(code **)(*param_1 + 0x30))(param_1);
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    FUN_141ee24f0(0);
    return;
  }
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
  *plVar9 = (longlong)&PTR_FUN_144edea18;
  plVar9[4] = 0;
  plVar9[2] = (longlong)param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  FUN_141ee24f0(0);
  return;
}



// FUNCTION 141ee51a0 RenderingThreadMain body=142 status=ok
// SIG undefined RenderingThreadMain(void)

void RenderingThreadMain(longlong *param_1)

{
  longlong *plVar1;
  
  DAT_1464a8210 = 3;
  DAT_1464a8214 = 0x103;
  plVar1 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar1 + 0x28))(plVar1,3);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af6b8);
  plVar1 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar1 + 0x38))(plVar1,3);
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af6d0);
  DAT_1464a8210 = 2;
  DAT_1464a8214 = 0x102;
  return;
}



// FUNCTION 141ee5230 Run body=55 status=ok
// SIG undefined Run(void)

undefined8 FRHIThread::Run(void)

{
  longlong *plVar1;
  
  FMemory::SetupTLSCachesOnCurrentThread();
  plVar1 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar1 + 0x28))(plVar1,0);
  plVar1 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar1 + 0x38))(plVar1,0);
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  return 0;
}



// FUNCTION 141ee5270 Run body=42 status=ok
// SIG undefined Run(void)

undefined8 FRenderingThread::Run(longlong param_1)

{
  FMemory::SetupTLSCachesOnCurrentThread();
  RenderingThreadMain(*(undefined8 *)(param_1 + 0x10));
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  return 0;
}



// FUNCTION 141ee5350 FUN_141ee5350 body=643 status=ok
// SIG undefined FUN_141ee5350(void)

/* WARNING: Removing unreachable block (ram,0x000141ee5528) */
/* WARNING: Removing unreachable block (ram,0x000141ee5535) */
/* WARNING: Removing unreachable block (ram,0x000141ee5544) */

undefined8 FUN_141ee5350(void)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 local_res10 [4];
  longlong local_res20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_res10[0] = 0;
  while (DAT_146ac3b04 != '\0') {
    FUN_1416b1760(1.0 / (DAT_1464ca1ac * 4.0));
    if (DAT_1468b5054 == 0) {
      LOCK();
      if (DAT_146ac3b50 == 0) {
        DAT_146ac3b50 = 0;
      }
      UNLOCK();
      if (DAT_146ac3b50 < 4) {
        LOCK();
        DAT_146ac3b50 = DAT_146ac3b50 + 1;
        UNLOCK();
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
          local_78 = 0;
          FUN_141ee0c70(local_res10,2,&local_78);
        }
        else {
          pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          lpTlsValue = TlsGetValue(*pDVar5);
          if (lpTlsValue == (longlong *)0x0) {
            plVar6 = (longlong *)operator_new(0x18);
            lpTlsValue = (longlong *)0x0;
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = 0;
              plVar6[1] = 0;
              *(undefined4 *)(plVar6 + 2) = 0;
              lpTlsValue = plVar6;
            }
            TlsSetValue(*pDVar5,lpTlsValue);
          }
          plVar6 = (longlong *)lpTlsValue[1];
          if (plVar6 == (longlong *)0x0) {
            if (*lpTlsValue == 0) {
              lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
              lpTlsValue[1] = lVar7;
              if (lVar7 == 0) {
                puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
                lpTlsValue[1] = (longlong)puVar8;
                lVar7 = 0x1f;
                do {
                  puVar2 = puVar8 + 0x20;
                  *puVar8 = puVar2;
                  lVar7 = lVar7 + -1;
                  puVar8 = puVar2;
                } while (lVar7 != 0);
                *puVar2 = 0;
              }
            }
            else {
              lpTlsValue[1] = *lpTlsValue;
              *lpTlsValue = 0;
            }
            plVar6 = (longlong *)lpTlsValue[1];
            iVar9 = 0x20;
            *(undefined4 *)(lpTlsValue + 2) = 0x20;
          }
          else {
            iVar9 = (int)lpTlsValue[2];
          }
          lpTlsValue[1] = *plVar6;
          *(int *)(lpTlsValue + 2) = iVar9 + -1;
          *plVar6 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar6 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)&PTR_FUN_144ede958;
          *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
          plVar6[3] = 0;
          local_68 = 0;
          local_70 = 0;
          lVar7 = plVar6[3];
          piVar1 = (int *)(lVar7 + 0x48);
          if (lVar7 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_res20 = lVar7;
          FUN_1404a4d70(plVar6,0,0xff,1);
          if (lVar7 != 0) {
            LOCK();
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              FGraphEvent::Recycle(local_res20);
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141ee55e0 SetNewMipCount body=406 status=ok
// SIG undefined SetNewMipCount(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMipBiasFade::SetNewMipCount
               (float *param_1,float param_2,float param_3,double param_4,int param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1;
  if (((fVar2 == 0.0) || (_DAT_1464ca1a8 <= (float)(DAT_1468b5a78 - param_4))) ||
     (DAT_1464ca1a4 < 0.0)) {
    *param_1 = param_2;
    param_1[1] = 0.0;
    param_1[3] = 0.0;
    param_1[2] = DAT_146ac3e84;
    param_1[4] = 0.0;
  }
  else if ((1e-08 < ABS(fVar2 - param_2)) ||
          (1e-08 < ABS(param_3 - ((fVar2 - param_1[4]) + param_1[1])))) {
    if (DAT_1464ca1a4 < 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (DAT_146ac3e84 - param_1[2]) * param_1[3];
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
      fVar1 = param_1[4] - fVar1 * param_1[1];
    }
    fVar2 = fVar2 - fVar1;
    if (0.0 <= fVar2) {
      if (param_2 <= fVar2) {
        fVar2 = param_2;
      }
    }
    else {
      fVar2 = 0.0;
    }
    param_3 = param_3 - fVar2;
    param_1[2] = DAT_146ac3e84;
    *param_1 = param_2;
    param_1[1] = param_3;
    if (ABS(param_3) <= 1e-08) {
      param_1[1] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      return;
    }
    param_1[4] = param_2 - fVar2;
    if (0.0 < param_3) {
      param_1[3] = 1.0 / (param_3 * *(float *)(&DAT_1464cac00 + (longlong)param_5 * 8));
      return;
    }
    param_1[3] = -1.0 / (param_3 * *(float *)(&DAT_1464cac04 + (longlong)param_5 * 8));
    return;
  }
  return;
}



// FUNCTION 141ee5780 FUN_141ee5780 body=611 status=ok
// SIG undefined FUN_141ee5780(void)

void FUN_141ee5780(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x98) = 1;
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
          goto LAB_141ee5937;
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
LAB_141ee5937:
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



// FUNCTION 141ee59f0 FUN_141ee59f0 body=611 status=ok
// SIG undefined FUN_141ee59f0(void)

void FUN_141ee59f0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined4 *)(param_1 + 8) = DAT_1464a8214;
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
          goto LAB_141ee5ba7;
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
LAB_141ee5ba7:
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



// FUNCTION 141ee5c60 FUN_141ee5c60 body=614 status=ok
// SIG undefined FUN_141ee5c60(void)

void FUN_141ee5c60(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
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
          goto LAB_141ee5e17;
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
LAB_141ee5e17:
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



// FUNCTION 141ee5ed0 StartRenderCommandFenceBundler body=457 status=ok
// SIG undefined StartRenderCommandFenceBundler(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void StartRenderCommandFenceBundler(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40 [4];
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (DAT_146ac3ac5 != '\0') {
    plVar9 = (longlong *)FUN_1415914c0(&local_60);
    lVar4 = DAT_146ac3b60;
    if (plVar9 != &DAT_146ac3b60) {
      DAT_146ac3b60 = *plVar9;
      *plVar9 = 0;
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (local_60 != 0) {
      LOCK();
      piVar1 = (int *)(local_60 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    local_20 = (longlong *)0x0;
    local_18 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_40,0)
    ;
    plVar9 = local_40;
    if (local_20 != (longlong *)0x0) {
      plVar9 = local_20;
    }
    *plVar9 = DAT_146ac3b60;
    if (DAT_146ac3b60 != 0) {
      LOCK();
      *(int *)(DAT_146ac3b60 + 0x48) = *(int *)(DAT_146ac3b60 + 0x48) + 1;
      UNLOCK();
    }
    uVar8 = DAT_1464a8210;
    plVar9 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_58,local_40,2);
    *(undefined4 *)(*plVar9 + 0x10) = uVar8;
    lVar4 = *plVar9;
    lVar7 = plVar9[2];
    lVar5 = plVar9[1];
    lVar6 = *(longlong *)(lVar4 + 0x18);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141599db0(lVar4,lVar5,(int)lVar7,1);
    if (DAT_146ac3b58 != 0) {
      LOCK();
      piVar1 = (int *)(DAT_146ac3b58 + 0x48);
      iVar2 = *piVar1;
      DAT_146ac3b58 = lVar6;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar6 = DAT_146ac3b58;
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
        lVar6 = DAT_146ac3b58;
      }
    }
    DAT_146ac3b58 = lVar6;
    DAT_146ac3b1a = 1;
    plVar9 = local_40;
    iVar2 = (int)local_18;
    if (local_20 != (longlong *)0x0) {
      plVar9 = local_20;
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
    if (local_20 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141ee60a0 FUN_141ee60a0 body=1452 status=ok
// SIG undefined FUN_141ee60a0(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee60a0(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  longlong local_res10 [3];
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined1 local_58 [40];
  
  AK::MemoryMgr::StartProfileThreadUsage(5);
  if (DAT_1464cb0d0 == '\0') goto LAB_141ee61ba;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3f10) && (_Init_thread_header(&DAT_146ac3f10), DAT_146ac3f10 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac3f08 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EnableAsyncCompute");
    _Init_thread_footer(&DAT_146ac3f10);
  }
  if ((DAT_146ac3f08 == (longlong *)0x0) ||
     (iVar7 = (**(code **)(*DAT_146ac3f08 + 0x68))(), iVar7 < 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar8 = FCommandLine::Get();
  cVar6 = FParse::Param(uVar8,L"NoAsyncCompute");
  plVar9 = DAT_146ac3f08;
  if (cVar6 == '\0') {
    if (!bVar4) goto LAB_141ee6179;
    _DAT_146ab7058 = (**(code **)(*DAT_146ab6358 + 0x470))();
    DAT_1464c9c58 = 1;
  }
  else {
    FString::PrintfImpl(&local_88,&DAT_143f3edc0,0);
    puVar14 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar14 = local_88;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9,puVar14,0x7000000);
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
LAB_141ee6179:
    _DAT_146ab7050 = (**(code **)(*DAT_146ab6358 + 0x468))();
    DAT_1464c9c58 = 0;
  }
  DAT_1464cb0d0 = '\0';
LAB_141ee61ba:
  FUN_141ee24f0(0);
  if (DAT_146ab6381 == '\0') {
    if (DAT_146ab6382 != '\0') {
      DAT_146ab6383 = '\x01';
      DAT_146ab6389 = 1;
    }
  }
  else {
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    plVar9 = (longlong *)FTaskGraphInterface::Get();
    cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,0);
    if (cVar6 == '\0') {
      lVar10 = FUN_141ee2de0();
      uVar8 = FUN_1415d42a0(lVar10,L"RHIThread",0x80000,5,0xffffffffffffffff);
      *(undefined8 *)(lVar10 + 8) = uVar8;
    }
    plVar9 = (longlong *)TGraphTask<FOwnershipOfRHIThreadTask>::CreateTask(local_58,0,2);
    *(undefined1 *)(*plVar9 + 0x10) = 1;
    lVar10 = *plVar9;
    lVar5 = plVar9[2];
    lVar2 = plVar9[1];
    lVar3 = *(longlong *)(lVar10 + 0x18);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    local_res10[2] = lVar3;
    FUN_141ee5c60(lVar10,lVar2,(int)lVar5,1);
    uVar8 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,local_res10 + 2,0x102);
    lVar10 = FUN_141ee2de0();
    DAT_1468b5000 = *(longlong *)(lVar10 + 8);
    DAT_146ab6388 = 1;
    DAT_146ab6383 = '\x01';
    DAT_1468b4fe4 = *(undefined4 *)(DAT_1468b5000 + 0x44);
    FRHICommandListExecutor::LatchBypass(&DAT_146ab6e68);
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FGraphEvent::Recycle(lVar3);
      }
    }
  }
  if (DAT_1468b6148 != 0) {
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"Core.System",L"EnableRenderThreadHitchWatcher",&DAT_146ac3ac7,
               &DAT_1468e2360);
  }
  DAT_146ac3ac5 = 1;
  puVar11 = (undefined8 *)operator_new(0x18);
  puVar13 = (undefined8 *)0x0;
  puVar12 = puVar13;
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar11 + 1) = 0;
    *puVar11 = &PTR_FUN_144ede8f8;
    uVar8 = FUN_1415ab270(1);
    puVar11[2] = uVar8;
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    (**(code **)(*DAT_146ab6358 + 0x380))();
    puVar12 = puVar11;
  }
  iVar7 = DAT_146ac3f04;
  local_res10[1] = 0xf6;
  DAT_146ac3e88 = puVar12;
  lVar10 = FName::GetComparisonNameEntry(local_res10 + 1);
  if (lVar10 == 0) {
    local_98 = (undefined2 *)0x0;
    local_90 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar10,&local_98);
  }
  puVar14 = &DAT_143f3eda8;
  if ((int)local_90 != 0) {
    puVar14 = local_98;
  }
  FString::PrintfImpl(&local_78,L"%s %u",puVar14,iVar7);
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar14 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar14 = local_78;
  }
  DAT_1468b4ff8 = FUN_1415d42a0(DAT_146ac3e88,puVar14,0,0,0xffffffffffffffff);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)DAT_146ac3e88[2] + 0x20))((longlong *)DAT_146ac3e88[2],0xffffffff,0);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar9 = DAT_1468b1f88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3f00) && (_Init_thread_header(&DAT_146ac3f00), DAT_146ac3f00 == -1))
  {
    _DAT_146ac3ef8 = &PTR_FUN_144ede968;
    _Init_thread_footer(&DAT_146ac3f00);
  }
  (**(code **)(*plVar9 + 0xd8))(plVar9,*(undefined4 *)(DAT_1468b4ff8 + 0x44),&DAT_146ac3ef8);
  local_res10[0] = 0;
  FUN_141edede0(local_res10,0);
  FRenderCommandFence::Wait(local_res10,0);
  LOCK();
  DAT_146ac3b04 = 1;
  UNLOCK();
  puVar12 = (undefined8 *)operator_new(8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_LAB_144ede928;
    puVar13 = puVar12;
  }
  DAT_146ac3b10 = puVar13;
  FString::PrintfImpl(&local_68,L"RTHeartBeat %d",DAT_146ac3f04);
  puVar14 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar14 = local_68;
  }
  DAT_146ac3b08 = FUN_1415d42a0(DAT_146ac3b10,puVar14,0x4000,1,0xffffffffffffffff);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  DAT_146ac3f04 = DAT_146ac3f04 + 1;
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af7d8);
  if (local_res10[0] != 0) {
    LOCK();
    piVar1 = (int *)(local_res10[0] + 0x48);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FGraphEvent::Recycle(local_res10[0]);
    }
  }
  return;
}



// FUNCTION 141ee6650 StopRenderCommandFenceBundler body=198 status=ok
// SIG undefined StopRenderCommandFenceBundler(void)

void StopRenderCommandFenceBundler(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if ((DAT_146ac3ac5 != '\0') && (DAT_146ac3b58 != 0)) {
    FUN_141ee2000(&DAT_146ac3ce0);
    DAT_146ac3b1a = 0;
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_141591a60(DAT_146ac3b60,local_18,0xff);
    lVar3 = DAT_146ac3b60;
    DAT_146ac3b60 = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    lVar3 = DAT_146ac3b58;
    DAT_146ac3b58 = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141ee6720 FUN_141ee6720 body=879 status=ok
// SIG undefined FUN_141ee6720(void)

ulonglong FUN_141ee6720(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  char cVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  longlong local_res10;
  longlong local_res18 [2];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0xd8))(DAT_1468b1f88,0,0);
  uVar14 = 0;
  uVar10 = 0;
  LOCK();
  bVar16 = DAT_146ac3b04 == 0;
  if (bVar16) {
    DAT_146ac3b04 = 0;
  }
  else {
    uVar10 = (ulonglong)DAT_146ac3b04;
  }
  UNLOCK();
  if (!bVar16) {
    LOCK();
    DAT_146ac3b04 = 0;
    UNLOCK();
    uVar10 = (**(code **)(*DAT_146ac3b08 + 0x20))();
    if (DAT_146ac3b08 != (longlong *)0x0) {
      uVar10 = (**(code **)(*DAT_146ac3b08 + 0x28))(DAT_146ac3b08,1);
    }
    DAT_146ac3b08 = (longlong *)0x0;
    if (DAT_146ac3b10 != (longlong *)0x0) {
      uVar10 = (**(code **)(*DAT_146ac3b10 + 0x28))(DAT_146ac3b10,1);
    }
    DAT_146ac3b10 = (longlong *)0x0;
  }
  if (DAT_146ac3ac5 == '\0') {
    return uVar10;
  }
  plVar11 = (longlong *)GetPendingCleanupObjects();
  (*(code *)PTR_StartProfileThreadUsage_1464aaa40)();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3f18) && (_Init_thread_header(&DAT_146ac3f18), DAT_146ac3f18 == -1))
  {
    uVar13 = FCommandLine::Get();
    DAT_146ac3f14 = FParse::Param(uVar13,L"RTFlushMax");
    _Init_thread_footer(&DAT_146ac3f18);
  }
  uVar10 = FUN_141ee24f0(DAT_146ac3f14);
  if (DAT_146ac3ac5 == '\0') goto LAB_141ee69f0;
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af7c0);
  if (DAT_1468b5000 != 0) {
    plVar12 = (longlong *)TGraphTask<FOwnershipOfRHIThreadTask>::CreateTask(local_58,0,2);
    *(undefined1 *)(*plVar12 + 0x10) = 0;
    lVar3 = *plVar12;
    lVar7 = plVar12[2];
    lVar4 = plVar12[1];
    lVar5 = *(longlong *)(lVar3 + 0x18);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    local_res18[0] = lVar5;
    FUN_141ee5c60(lVar3,lVar4,(int)lVar7,1);
    uVar13 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar13,local_res18,0x102);
    DAT_1468b5000 = 0;
    DAT_1468b4fe4 = 0;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  uVar8 = DAT_1464a8210;
  DAT_146ab6383 = 0;
  DAT_146ab6388 = 0;
  DAT_146ab6389 = 0;
  DAT_146ac3ac5 = '\0';
  plVar12 = (longlong *)TGraphTask<FReturnGraphTask>::CreateTask(local_40,0,2);
  *(undefined4 *)(*plVar12 + 0x10) = uVar8;
  lVar3 = *plVar12;
  lVar7 = plVar12[2];
  lVar4 = plVar12[1];
  lVar5 = *(longlong *)(lVar3 + 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_res10 = lVar5;
  FUN_1404458a0(lVar3,lVar4,(int)lVar7,1);
  plVar12 = (longlong *)FTaskGraphInterface::Get();
  cVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,2);
  if (cVar9 == '\0') {
    uVar13 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar13,&local_res10,0x102);
LAB_141ee697f:
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  else if (lVar5 != 0) {
    do {
      LOCK();
      uVar10 = *(ulonglong *)(lVar5 + 8);
      if (uVar10 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar10 = 0;
      }
      UNLOCK();
    } while (((uVar10 >> 0x1a & 1) == 0) && (FUN_1416b1760(0), local_res10 != 0));
    goto LAB_141ee697f;
  }
  (**(code **)(*DAT_1468b4ff8 + 0x20))();
  if (DAT_1468b4ff8 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b4ff8 + 0x28))(DAT_1468b4ff8,1);
  }
  DAT_1468b4ff8 = (longlong *)0x0;
  uVar10 = FRHICommandListExecutor::LatchBypass(&DAT_146ab6e68);
  if (DAT_146ac3e88 != (longlong *)0x0) {
    uVar10 = (**(code **)(*DAT_146ac3e88 + 0x28))(DAT_146ac3e88,1);
  }
  DAT_146ac3e88 = (longlong *)0x0;
LAB_141ee69f0:
  if (plVar11 != (longlong *)0x0) {
    uVar10 = uVar14;
    if (0 < (int)plVar11[1]) {
      do {
        puVar6 = *(undefined8 **)(uVar14 + *plVar11);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        uVar15 = (int)uVar10 + 1;
        uVar14 = uVar14 + 8;
        uVar10 = (ulonglong)uVar15;
      } while ((int)uVar15 < (int)plVar11[1]);
    }
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    uVar10 = FMemory::operator_delete(plVar11,0x10);
  }
  return uVar10;
}



// FUNCTION 141ee6aa0 FUN_141ee6aa0 body=540 status=ok
// SIG undefined FUN_141ee6aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee6aa0(void)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146ac3ed8) &&
     (_Init_thread_header(&DAT_146ac3ed8), DAT_146ac3ed8 == -1)) {
    QueryPerformanceCounter(&local_res8);
    _DAT_146ac3ed0 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    _Init_thread_footer(&DAT_146ac3ed8);
  }
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  dVar9 = dVar3 - _DAT_146ac3ed0;
  if ((*(int *)(lVar1 + 0x38) < DAT_146ac3ec8) &&
     (_Init_thread_header(&DAT_146ac3ec8), DAT_146ac3ec8 == -1)) {
    QueryPerformanceCounter(&local_res8);
    _DAT_146ac3ec0 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    _Init_thread_footer(&DAT_146ac3ec8);
  }
  dVar10 = dVar3 - _DAT_146ac3ec0;
  uVar5 = 0;
  uVar6 = uVar5;
  uVar8 = uVar5;
  if (0 < DAT_146ac3b48) {
    do {
      plVar2 = *(longlong **)(uVar6 + DAT_146ac3b40);
      cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
      if (cVar4 != '\0') {
        (**(code **)(*plVar2 + 8))(plVar2,(float)dVar10);
      }
      uVar7 = (int)uVar8 + 1;
      uVar6 = uVar6 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < DAT_146ac3b48);
  }
  _DAT_146ac3ec0 = dVar3;
  dVar10 = _DAT_146ac3ed0;
  if ((1.0 / DAT_1464ca1ac <= (float)dVar9) && (uVar6 = uVar5, dVar10 = dVar3, 0 < DAT_146ac3b38)) {
    do {
      plVar2 = *(longlong **)(uVar6 + DAT_146ac3b30);
      cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
      if (cVar4 != '\0') {
        (**(code **)(*plVar2 + 8))(plVar2,(float)dVar9);
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar6 = uVar6 + 8;
    } while ((int)uVar7 < DAT_146ac3b38);
  }
  _DAT_146ac3ed0 = dVar10;
  return;
}



// FUNCTION 141ee6cc0 UpdateRHI body=69 status=ok
// SIG undefined UpdateRHI(void)

void FRenderResource::UpdateRHI(longlong *param_1)

{
  if (((char)param_1[5] != '\0') && (DAT_146ab62c8 != '\0')) {
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141ee6cfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 141ee6d10 Wait body=310 status=ok
// SIG undefined Wait(void)

void FRenderCommandFence::Wait(longlong *param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_18 [2];
  
  if (DAT_146ac3ac5 != '\0') {
    FUN_141edfbd0();
    if (*param_1 != 0) {
      puVar1 = (ulonglong *)(*param_1 + 8);
      LOCK();
      uVar5 = *puVar1;
      if (uVar5 == 0) {
        *puVar1 = 0;
        uVar5 = 0;
      }
      UNLOCK();
      if ((uVar5 >> 0x1a & 1) == 0) {
        if ((DAT_146ac3ac5 != '\0') && (DAT_146ac3b58 != 0)) {
          FUN_141ee2000(&DAT_146ac3ce0);
          DAT_146ac3b1a = 0;
          local_18[0] = 0;
          local_18[1] = 0;
          FUN_141591a60(DAT_146ac3b60,local_18,0xff);
          lVar4 = DAT_146ac3b60;
          DAT_146ac3b60 = 0;
          if (lVar4 != 0) {
            LOCK();
            piVar2 = (int *)(lVar4 + 0x48);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          lVar4 = DAT_146ac3b58;
          DAT_146ac3b58 = 0;
          if (lVar4 != 0) {
            LOCK();
            piVar2 = (int *)(lVar4 + 0x48);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        FUN_141ee2750(param_1,param_2);
        return;
      }
    }
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  return;
}



// FUNCTION 141ee6e50 WaitAndResumeRendering body=47 status=ok
// SIG undefined WaitAndResumeRendering(void)

void WaitAndResumeRendering(void)

{
  while (DAT_1468b5054 != 0) {
    FUN_1416b1760(0x3a83126f);
  }
  return;
}



// FUNCTION 141ee6e80 FUN_141ee6e80 body=1139 status=ok
// SIG undefined FUN_141ee6e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ee6e80(longlong param_1,longlong param_2,char param_3)

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
      if (bVar3) goto LAB_141ee6faf;
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
LAB_141ee6faf:
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
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141ee706f;
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
LAB_141ee706f:
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
      lVar4 = ACameraActor::GetPrivateStaticClass();
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
          FUN_141ee6e80(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
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



// FUNCTION 141ee7300 FUN_141ee7300 body=150 status=ok
// SIG undefined FUN_141ee7300(void)

void FUN_141ee7300(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  uVar2 = uVar3;
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  uVar2 = (*(code *)*param_2)(uVar2);
  puVar1 = (undefined8 *)*param_1;
  puVar1[0xc] = uVar2;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar4 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar4 = puVar1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar1)(uVar3);
    }
  }
  return;
}



// FUNCTION 141ee73a0 FUN_141ee73a0 body=190 status=ok
// SIG undefined FUN_141ee73a0(void)

undefined8 * FUN_141ee73a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144ee1aa8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RootComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x2d] = lVar4;
  *(undefined1 *)(lVar4 + 0x24e) = 0;
  FUN_14223c460(param_1,1);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  return param_1;
}



// FUNCTION 141ee7460 FUN_141ee7460 body=826 status=ok
// SIG undefined FUN_141ee7460(void)

undefined8 * FUN_141ee7460(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined2 *local_38;
  undefined8 local_30;
  
  plVar3 = (longlong *)FName::FName(local_res10,"StaticMeshComponent0",1);
  local_res8 = *plVar3;
  lVar4 = FName::GetComparisonNameEntry(&local_res8);
  iVar10 = 0;
  if (lVar4 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_38);
  }
  puVar11 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar11 = local_38;
  }
  FUN_141784790(param_2,puVar11);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar5 = AArchVisCharacter::StaticClass();
  lVar4 = local_res8;
  plVar3 = (longlong *)(param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0xa8);
  if (0 < iVar1) {
    plVar6 = *(longlong **)(param_2 + 0xa0);
    plVar12 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar3;
      plVar12 = plVar3;
    }
    do {
      if (*plVar6 == local_res8) {
        if (iVar10 != -1) {
          if ((lVar5 != 0) && (plVar12[(longlong)iVar10 * 2 + 1] != 0)) {
            FUN_1417905a0(param_2,local_res8,plVar12[(longlong)iVar10 * 2 + 1],lVar5);
          }
          goto LAB_141ee75a9;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      plVar6 = plVar6 + 2;
    } while (iVar10 < iVar1);
  }
  *(int *)(param_2 + 0xa8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xac) < iVar1 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(plVar3,iVar1);
  }
  plVar6 = *(longlong **)(param_2 + 0xa0);
  if (*(longlong **)(param_2 + 0xa0) == (longlong *)0x0) {
    plVar6 = plVar3;
  }
  plVar6 = plVar6 + (longlong)iVar1 * 2;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = lVar4;
    plVar6[1] = lVar5;
  }
LAB_141ee75a9:
  FUN_142815ed0(param_1,param_2);
  plVar3 = (longlong *)param_1[0x8b];
  *param_1 = &PTR__scalar_deleting_destructor__144edf760;
  (**(code **)(*plVar3 + 0x640))(plVar3,DAT_146aefc58);
  *(undefined1 *)((longlong)plVar3 + 0x24e) = 0;
  puVar7 = (undefined8 *)FName::FName(&local_res8,L"CollisionCylinder",1);
  uVar2 = *puVar7;
  uVar8 = FUN_142912e90();
  lVar4 = FUN_141752410(param_1,uVar2,uVar8,uVar8,1,0,0);
  uVar9 = (ulonglong)_tls_index;
  param_1[0x8d] = lVar4;
  *(undefined4 *)(lVar4 + 0x714) = 0x42700000;
  *(undefined4 *)(lVar4 + 0x710) = 0x43480000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x38) <
       DAT_146ac40d0) && (_Init_thread_header(&DAT_146ac40d0), DAT_146ac40d0 == -1)) {
    FName::FName(&DAT_146ac40c8,L"OverlapAllDynamic",1);
    _Init_thread_footer(&DAT_146ac40d0);
  }
  (**(code **)(*(longlong *)param_1[0x8d] + 0x640))((longlong *)param_1[0x8d],DAT_146ac40c8);
  *(undefined1 *)(param_1[0x8d] + 0x24e) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0xc0;
  param_1[0x2d] = param_1[0x8d];
  *(undefined1 *)((longlong)param_1 + 0x12a) = 3;
  *(undefined4 *)(param_1 + 0x94) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x41200000;
  *(undefined4 *)(param_1 + 0x95) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x96) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x97) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  return param_1;
}



// FUNCTION 141ee77a0 FUN_141ee77a0 body=82 status=ok
// SIG undefined FUN_141ee77a0(void)

undefined8 * FUN_141ee77a0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1428c1a80();
  plVar1 = (longlong *)param_1[0x8e];
  *param_1 = &PTR_FUN_144ee25c0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x648))(plVar1,0);
    (**(code **)(*plVar1 + 0x838))(plVar1,0);
  }
  return param_1;
}



// FUNCTION 141ee7800 FUN_141ee7800 body=187 status=ok
// SIG undefined FUN_141ee7800(void)

undefined8 * FUN_141ee7800(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_144ee25c0;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"ProceduralFoliageComponent",1);
  uVar1 = *puVar3;
  uVar4 = FUN_141ef0fd0();
  lVar5 = FUN_141789050(param_2,param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0x92] = lVar5;
  *(undefined8 **)(lVar5 + 0x188) = param_1;
  plVar2 = (longlong *)param_1[0x8e];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x648))(plVar2,0);
    (**(code **)(*plVar2 + 0x838))(plVar2,0);
    FUN_1423974f0(plVar2,0);
  }
  return param_1;
}



// FUNCTION 141ee78c0 FFutureState body=112 status=ok
// SIG undefined FFutureState(void)

undefined8 * FFutureState::FFutureState(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar4 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar4 = param_2 + 2;
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar4)(puVar4,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      pcVar2 = (code *)*param_2;
      goto LAB_141ee7910;
    }
  }
  pcVar2 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_141ee7910:
  *param_1 = pcVar2;
  uVar3 = FUN_1415ab270(1);
  param_1[10] = uVar3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 141ee7970 FUN_141ee7970 body=95 status=ok
// SIG undefined FUN_141ee7970(void)

undefined8 * FUN_141ee7970(undefined8 *param_1)

{
  FUN_1424b5440();
  *param_1 = &PTR_FUN_144ee0da8;
  param_1[5] = &PTR_LAB_144ee1788;
  param_1[0x5a] = &PTR_LAB_144ee17b8;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) & 0xbf;
  return param_1;
}



// FUNCTION 141ee79d0 FUN_141ee79d0 body=867 status=ok
// SIG undefined FUN_141ee79d0(void)

undefined8 * FUN_141ee79d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_28 [8];
  undefined4 local_20;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_144ee0a10;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 10) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xb) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xff7fffff;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f000000;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xe) = 0x3f000000;
  *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) & 0xfffffffe;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f000000;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x11) = 0x3f000000;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x17) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x18) = 0xff7fffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80000000;
  FUN_1426852e0(param_1 + 0x27);
  *(byte *)((longlong)param_1 + 0x2e9) = *(byte *)((longlong)param_1 + 0x2e9) & 0xf9 | 1;
  *(undefined4 *)(param_1 + 0x65) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0xff7fffff;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x66);
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) | 1;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 3;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f6666663f666666;
  local_20 = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f666666;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xc8800000;
  *(undefined4 *)(param_1 + 0x18) = 0x48800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 2;
  *(undefined4 *)((longlong)param_1 + 300) = 8;
  *(uint *)((longlong)param_1 + 0x134) = *(uint *)((longlong)param_1 + 0x134) | 1;
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) & 0xfffffe33 | 0x32;
  FUN_1426a8ca0(param_1 + 0x27,DAT_146aefc58);
  *(undefined4 *)(param_1 + 0x3a) = 3;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x42480000;
  *(undefined4 *)(param_1 + 0x61) = 0x43160000;
  *(undefined2 *)(param_1 + 99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 3;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x40400000;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x5f) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 100) = 0x41200000;
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x66);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0,0,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0x3f800000,0x3f800000,0,*puVar3);
  puVar4 = (undefined8 *)FGuid::NewGuid(local_28);
  uVar2 = *puVar4;
  uVar1 = puVar4[1];
  *(uint *)((longlong)param_1 + 0x3ac) = *(uint *)((longlong)param_1 + 0x3ac) & 0xfffeffff;
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 141ee7d40 FUN_141ee7d40 body=82 status=ok
// SIG undefined FUN_141ee7d40(void)

undefined8 * FUN_141ee7d40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141ee79d0();
  *param_1 = &PTR_FUN_144ee1810;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  uVar1 = FUN_141ef0a80();
  param_1[0x79] = uVar1;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  return param_1;
}



// FUNCTION 141ee7da0 FUN_141ee7da0 body=58 status=ok
// SIG undefined FUN_141ee7da0(void)

undefined8 * FUN_141ee7da0(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR__scalar_deleting_destructor__144edfe50;
  param_1[5] = &PTR_LAB_144ee07d0;
  param_1[0x5a] = &PTR_LAB_144ee0800;
  return param_1;
}



// FUNCTION 141ee7de0 FUN_141ee7de0 body=86 status=ok
// SIG undefined FUN_141ee7de0(void)

undefined8 * FUN_141ee7de0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__144ee2190;
  param_1[5] = &PTR_LAB_144ee2590;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar1 = puVar2[1];
  param_1[0x32] = *puVar2;
  param_1[0x33] = uVar1;
  return param_1;
}



// FUNCTION 141ee7e40 UProceduralFoliageSpawner body=86 status=ok
// SIG undefined UProceduralFoliageSpawner(void)

undefined8 * UProceduralFoliageSpawner::UProceduralFoliageSpawner(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144ee2f58;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 6) = 10;
  *(undefined4 *)(param_1 + 5) = 0x2a;
  return param_1;
}



// FUNCTION 141ee7ea0 UProceduralFoliageTile body=240 status=ok
// SIG undefined UProceduralFoliageTile(void)

undefined8 * UProceduralFoliageTile::UProceduralFoliageTile(undefined8 *param_1)

{
  undefined4 local_18;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144ee2ce0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0x8000000080000000;
  param_1[0x24] = 0;
  local_18 = CONCAT31(local_18._1_3_,1);
  *(undefined4 *)(param_1 + 0x25) = local_18;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 141ee7f90 ~TQuadTree<FProceduralFoliageInstance_*,4> body=143 status=ok
// SIG undefined ~TQuadTree<FProceduralFoliageInstance_*,4>(void)

void TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = param_1 + 2;
  lVar3 = 0;
  if (plVar2 <= param_1 + 6) {
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        ~TQuadTree<FProceduralFoliageInstance_*,4>(lVar1);
        FMemory::operator_delete(lVar1,0x58);
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141ee8020 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_141ee80f0();
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
      TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 141ee80f0 FUN_141ee80f0 body=713 status=ok
// SIG undefined FUN_141ee80f0(void)

longlong * FUN_141ee80f0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar2 = *local_48 + (longlong)local_2c * 0x18;
        (**(code **)(*param_1 + 0x30))(param_1,lVar2);
        (**(code **)(*param_1 + 0x30))(param_1,*(undefined8 *)(lVar2 + 8));
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
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
  TSparseArray<TSetElement<TTuple<UFoliageType_*,TUniqueObj<FFoliageMeshInfo>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  puVar10 = (undefined8 *)0x0;
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar4 = *(int *)(*param_2 + 4 + (longlong)iVar3 * 0x18);
        *(int *)(param_2 + 6) = iVar4;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar4 * 0x18) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar4 = iVar3;
      if (iVar3 < 0) {
        iVar4 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar3 * 0x18) = 0;
      lVar2 = lVar2 + (longlong)iVar3 * 0x18;
      puVar6 = (undefined8 *)operator_new(8);
      puVar7 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar7 = puVar6;
      }
      *(undefined8 **)(lVar2 + 8) = puVar7;
      *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1,lVar2);
      (**(code **)(*param_1 + 0x30))(param_1,*(undefined8 *)(lVar2 + 8));
      uVar9 = (int)puVar10 + 1;
      puVar10 = (undefined8 *)(ulonglong)uVar9;
    } while ((int)uVar9 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 141ee8400 FUN_141ee8400 body=97 status=ok
// SIG undefined FUN_141ee8400(void)

undefined8 * FUN_141ee8400(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ee0a00;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141ee8470 FUN_141ee8470 body=141 status=ok
// SIG undefined FUN_141ee8470(void)

longlong FUN_141ee8470(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UFoliageType_*,TUniqueObj<FFoliageMeshInfo>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 141ee8500 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVulkanRHIGraphicsPipelineState::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 141ee8540 FUN_141ee8540 body=73 status=ok
// SIG undefined FUN_141ee8540(void)

longlong FUN_141ee8540(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 141ee8590 FUN_141ee8590 body=52 status=ok
// SIG undefined FUN_141ee8590(void)

undefined8 FUN_141ee8590(undefined8 param_1,ulonglong param_2)

{
  FUN_1428181b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x400);
  }
  return param_1;
}



// FUNCTION 141ee85d0 FUN_141ee85d0 body=90 status=ok
// SIG undefined FUN_141ee85d0(void)

longlong FUN_141ee85d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x958) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FMemory::Free();
  }
  FUN_1424b65e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x970);
  }
  return param_1;
}



// FUNCTION 141ee8630 FUN_141ee8630 body=97 status=ok
// SIG undefined FUN_141ee8630(void)

longlong FUN_141ee8630(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x330);
  FUN_14061f570(param_1 + 0x138);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 141ee86a0 FUN_141ee86a0 body=114 status=ok
// SIG undefined FUN_141ee86a0(void)

longlong FUN_141ee86a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x330);
  FUN_14061f570(param_1 + 0x138);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 141ee8720 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FActiveSound::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7b0);
  }
  return param_1;
}



// FUNCTION 141ee8760 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FComponentPropertyWriter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 141ee87a0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UProceduralFoliageSpawner::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141ee8800 `scalar_deleting_destructor' body=164 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UProceduralFoliageTile::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>
            (param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 141ee88b0 FUN_141ee88b0 body=2529 status=ok
// SIG undefined FUN_141ee88b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ee88b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float *pfVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_2f8 [32];
  float local_2d8;
  undefined1 local_2d0;
  float local_2c8;
  uint local_2c4;
  int local_2c0;
  int local_2bc;
  longlong local_2b8;
  undefined8 local_2b0;
  float local_2a8;
  float local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  float local_290;
  float local_28c;
  undefined4 local_288;
  undefined1 local_284 [4];
  undefined1 local_280 [4];
  undefined1 local_27c [4];
  undefined1 local_278 [8];
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  int *local_258;
  longlong *local_250;
  int *local_248;
  uint *local_240;
  float *local_238;
  uint *local_230;
  float *local_228;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  int local_1e4;
  undefined1 local_1e0 [8];
  undefined1 *local_1d8;
  int local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  int local_194;
  undefined1 local_190 [8];
  undefined1 *local_188;
  int local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar18 = *(longlong *)(param_1 + 0x28);
  fVar2 = *(float *)(lVar18 + 0x2c);
  local_218 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0xffffffff;
  local_1e4 = 0;
  local_1d8 = (undefined1 *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0xffffffff;
  local_194 = 0;
  local_188 = (undefined1 *)0x0;
  local_180 = 0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  lVar16 = *(longlong *)(lVar18 + 0x40);
  lVar18 = (longlong)*(int *)(lVar18 + 0x48) * 0x20 + lVar16;
  local_2b8 = 0;
  local_2b0 = 0;
  for (; lVar16 != lVar18; lVar16 = lVar16 + 0x20) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 != *(int *)(param_1 + 0x150)) goto LAB_141ee91a7;
    lVar12 = *(longlong *)(lVar16 + 8);
    if (lVar12 != 0) {
      if ((*(char *)(lVar12 + 0x318) == '\0') || (*(char *)(lVar12 + 0x319) == '\0')) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 == *(char *)(param_1 + 0x14c)) {
        fVar20 = *(float *)(lVar12 + 0x300) * *(float *)(lVar12 + 0x300) * fVar2 * fVar2 * 1e-06;
        local_2bc = (int)ROUND(fVar20 + fVar20 + 0.5) >> 1;
        local_260 = &local_270;
        local_258 = &local_2bc;
        local_270 = lVar12;
        TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
                  (&local_128,local_284,&local_260,0);
        uVar4 = local_2b0;
        if (0 < local_2bc) {
          lVar14 = (longlong)(int)local_2b0;
          iVar6 = (int)local_2b0 + 1;
          local_2b0 = CONCAT44(local_2b0._4_4_,iVar6);
          if (local_2b0._4_4_ < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_2b8,uVar4 & 0xffffffff);
          }
          *(longlong *)(local_2b8 + lVar14 * 8) = lVar12;
        }
        local_250 = &local_268;
        local_298 = *(int *)(param_1 + 0x140) + *(int *)(*(longlong *)(param_1 + 0x28) + 0x28) +
                    *(int *)(lVar12 + 0x310);
        local_248 = &local_298;
        local_294 = local_298;
        local_268 = lVar12;
        TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                  (&local_178,local_280,&local_250);
        local_2c4 = *(uint *)(lVar12 + 0x310);
        fVar20 = (float)FUN_141eeb810(lVar12);
        local_2a8 = fVar20 * *(float *)(lVar12 + 0x2f4);
        if ((int)local_1c0 != local_194) {
          puVar13 = local_190;
          if (local_188 != (undefined1 *)0x0) {
            puVar13 = local_188;
          }
          iVar6 = *(int *)(puVar13 + (longlong)(int)(local_180 - 1U & local_2c4) * 4);
          while (iVar6 != -1) {
            lVar14 = (longlong)iVar6;
            if (*(uint *)(local_1c8 + lVar14 * 0x10) == local_2c4) {
              lVar14 = local_1c8 + lVar14 * 0x10;
              if (iVar6 != -1) goto LAB_141ee8b87;
              break;
            }
            iVar6 = *(int *)(local_1c8 + 8 + lVar14 * 0x10);
          }
        }
        lVar14 = 0;
LAB_141ee8b87:
        pfVar10 = (float *)(lVar14 + 4);
        if (lVar14 == 0) {
          pfVar10 = (float *)0x0;
        }
        if (pfVar10 == (float *)0x0) {
          local_240 = &local_2c4;
          local_238 = &local_2a8;
          FUN_1407b93f0(&local_1c8,local_27c,&local_240);
        }
        else {
          fVar22 = *pfVar10;
          if (*pfVar10 <= local_2a8) {
            fVar22 = local_2a8;
          }
          *pfVar10 = fVar22;
        }
        local_2a4 = fVar20 * *(float *)(lVar12 + 0x2f8);
        if ((int)local_210 != local_1e4) {
          puVar13 = local_1e0;
          if (local_1d8 != (undefined1 *)0x0) {
            puVar13 = local_1d8;
          }
          iVar6 = *(int *)(puVar13 + (longlong)(int)(local_1d0 - 1U & local_2c4) * 4);
          while (iVar6 != -1) {
            lVar12 = (longlong)iVar6;
            if (*(uint *)(local_218 + lVar12 * 0x10) == local_2c4) {
              lVar12 = local_218 + lVar12 * 0x10;
              if (iVar6 != -1) goto LAB_141ee8c33;
              break;
            }
            iVar6 = *(int *)(local_218 + 8 + lVar12 * 0x10);
          }
        }
        lVar12 = 0;
LAB_141ee8c33:
        pfVar10 = (float *)(lVar12 + 4);
        if (lVar12 == 0) {
          pfVar10 = (float *)0x0;
        }
        if (pfVar10 == (float *)0x0) {
          local_230 = &local_2c4;
          local_228 = &local_2a4;
          FUN_1407b93f0(&local_218,local_278,&local_230);
        }
        else {
          fVar20 = local_2a4;
          if (local_2a4 <= *pfVar10) {
            fVar20 = *pfVar10;
          }
          *pfVar10 = fVar20;
        }
      }
    }
  }
  iVar15 = *(int *)(param_1 + 0xd8) + -1;
  iVar6 = -1;
  iVar17 = (int)local_2b0;
  while (0 < iVar17) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 != *(int *)(param_1 + 0x150)) break;
    local_2c0 = (iVar6 + 1) % (int)local_2b0;
    lVar18 = *(longlong *)(local_2b8 + (longlong)local_2c0 * 8);
    iVar6 = local_2c0;
    if (lVar18 != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&local_128,&local_2a0,lVar18);
      lVar16 = 0;
      lVar12 = lVar16;
      if (local_2a0 != -1) {
        lVar12 = local_128 + (longlong)local_2a0 * 0x18;
      }
      iVar6 = local_2c0;
      if (*(int *)(lVar12 + 8) != 0) {
        fVar2 = *(float *)(lVar18 + 0x31c);
        uVar8 = *(int *)(param_1 + 0x148) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x148) = uVar8;
        local_2c8 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        fVar22 = local_2c8 - (float)(int)local_2c8;
        uVar11 = FRuntimeFloatCurve::GetRichCurve(lVar18 + 0x330);
        fVar20 = (float)FRichCurve::Eval(uVar11);
        fVar20 = (*(float *)(lVar18 + 0x32c) - *(float *)(lVar18 + 0x328)) * fVar20 +
                 *(float *)(lVar18 + 0x328);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_178,&local_29c,lVar18);
        if (local_29c != -1) {
          lVar16 = local_178 + (longlong)local_29c * 0x18;
        }
        if ((*(char *)(param_1 + 0x14c) == '\0') || (iVar15 < 0)) {
          fVar23 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x2c);
          uVar8 = *(int *)(lVar16 + 0xc) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar16 + 0xc) = uVar8;
          fVar9 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar23 = (fVar9 - (float)(int)fVar9) * fVar23;
          fVar9 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x2c);
          uVar8 = uVar8 * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar16 + 0xc) = uVar8;
          fVar21 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          fVar9 = (fVar21 - (float)(int)fVar21) * fVar9;
          if ((int)local_210 != local_1e4) {
            puVar13 = local_1e0;
            if (local_1d8 != (undefined1 *)0x0) {
              puVar13 = local_1d8;
            }
            iVar6 = *(int *)(puVar13 +
                            (longlong)(int)(local_1d0 - 1U & *(uint *)(lVar18 + 0x310)) * 4);
            while (iVar6 != -1) {
              lVar16 = (longlong)iVar6;
              if (*(uint *)(local_218 + lVar16 * 0x10) == *(uint *)(lVar18 + 0x310)) {
                if ((iVar6 != -1) && (lVar16 = lVar16 * 0x10 + local_218, lVar16 != 0)) {
                  fVar21 = *(float *)(lVar16 + 4);
                  goto LAB_141ee9020;
                }
                break;
              }
              iVar6 = *(int *)(local_218 + 8 + lVar16 * 0x10);
            }
          }
          fVar21 = 0.0;
        }
        else {
          uVar8 = *(int *)(lVar16 + 0xc) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar16 + 0xc) = uVar8;
          local_2c8 = (float)(uVar8 & 0x7fffff | 0x3f800000);
          pfVar10 = (float *)((longlong)(int)((local_2c8 - (float)(int)local_2c8) * (float)iVar15) *
                              0x60 + *(longlong *)(param_1 + 0xd0));
          lVar16 = *(longlong *)(pfVar10 + 0xe);
          fVar23 = *pfVar10;
          fVar9 = pfVar10[1];
          fVar21 = *(float *)(lVar16 + 0x2f4);
          fVar3 = pfVar10[0xc];
          uVar11 = FRuntimeFloatCurve::GetRichCurve(lVar16 + 0x330);
          fVar19 = (float)FRichCurve::Eval(uVar11);
          fVar21 = ((*(float *)(lVar16 + 0x32c) - *(float *)(lVar16 + 0x328)) * fVar19 +
                    *(float *)(lVar16 + 0x328) + fVar20) * fVar21 * fVar3;
        }
LAB_141ee9020:
        uVar8 = *(int *)(param_1 + 0x148) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x148) = uVar8;
        local_2c8 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        uVar11 = __libm_sse2_sincosf_();
        fVar3 = *(float *)(lVar18 + 0x314);
        local_2d0 = 0;
        local_288 = 0;
        uVar8 = uVar8 * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x148) = uVar8;
        local_2c8 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        fVar21 = (local_2c8 - (float)(int)local_2c8) * fVar3 + fVar21;
        local_290 = (float)((ulonglong)uVar11 >> 0x20) * fVar21 + fVar23;
        local_28c = (float)uVar11 * fVar21 + fVar9;
        local_2d8 = fVar22 * fVar2;
        lVar18 = FUN_141eec0e0(param_1,&local_290,fVar20,lVar18);
        if (lVar18 != 0) {
          iVar6 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
          }
          *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar18;
        }
        piVar1 = (int *)(lVar12 + 8);
        *piVar1 = *piVar1 + -1;
        iVar6 = local_2c0;
        if (*piVar1 == 0) {
          iVar17 = iVar17 + -1;
        }
      }
    }
  }
LAB_141ee91a7:
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  local_130 = 0;
  if (local_138 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_178);
  local_e0 = 0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_128);
  local_180 = 0;
  if (local_188 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_1c8);
  local_1d0 = 0;
  if (local_1d8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_218);
  return;
}



// FUNCTION 141ee92a0 FUN_141ee92a0 body=571 status=ok
// SIG undefined FUN_141ee92a0(void)

void FUN_141ee92a0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
  
  uStack_94 = 1;
  plVar2 = (longlong *)(param_1 + 0x458);
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0x480);
  puVar1 = (uint *)(param_1 + 0x468);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x478);
    if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar6) goto LAB_141ee937d;
      uVar4 = puVar11[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_84) {
LAB_141ee937d:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x480);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x478);
    if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141ee9440;
      uVar8 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar9 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141ee9440:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar7 = *plVar2 + (longlong)(int)uStack_5c * 0x18;
    (**(code **)(*param_2 + 0x38))(param_2,lVar7,param_1,0);
    plVar5 = *(longlong **)(lVar7 + 8);
    if (*plVar5 != 0) {
      (**(code **)(*param_2 + 0x38))(param_2,plVar5,param_1);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  AActor::AddReferencedObjects(param_1,param_2);
  return;
}



// FUNCTION 141ee94e0 FUN_141ee94e0 body=1101 status=ok
// SIG undefined FUN_141ee94e0(void)

void FUN_141ee94e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 *local_118;
  undefined8 local_110;
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  undefined4 local_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  uint uStack_98;
  uint uStack_94;
  uint *local_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined8 *puVar8;
  
  puVar12 = (undefined8 *)0x0;
  plVar2 = (longlong *)(param_1 + 0x80);
  uVar7 = *(uint *)(param_1 + 0xa8);
  puStack_100 = (uint *)(param_1 + 0x90);
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  local_108 = 0;
  uStack_104 = 1;
  uStack_f4 = 0;
  uStack_f0 = 0;
  if (uVar7 != 0) {
    puVar15 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar15 = puStack_100;
    }
    uVar11 = *puVar15;
    puVar8 = puVar12;
    puVar14 = puVar12;
    while (uVar11 == 0) {
      iVar6 = (int)puVar8;
      uStack_f0 = (int)puVar14 + 0x20;
      puVar14 = (undefined8 *)(ulonglong)uStack_f0;
      local_108 = iVar6 + 1;
      puVar8 = (undefined8 *)(ulonglong)local_108;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141ee95e4;
      uVar11 = puVar15[(longlong)iVar6 + 1];
    }
    uStack_104 = -uVar11 & uVar11;
    iVar6 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_f4 = (uStack_f0 - iVar6) + 0x1f;
    if ((int)uVar7 < (int)uStack_f4) {
LAB_141ee95e4:
      uStack_f4 = uVar7;
    }
  }
  local_f8 = 0xffffffff;
  uStack_d4 = *(uint *)(param_1 + 0xa8);
  uStack_e0 = CONCAT44(uStack_104,local_108);
  uVar7 = *(uint *)(param_1 + 0xa8);
  uStack_88 = 0xffffffff;
  uStack_84 = uStack_f4;
  uStack_c8 = CONCAT44(uStack_ec,uStack_f0);
  uStack_d8 = -1 << ((byte)uStack_d4 & 0x1f);
  uStack_e4 = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_e8 = (int)uStack_d4 >> 5;
  uStack_d0 = uStack_d4 & 0xffffffe0;
  uStack_cc = uStack_f4;
  uStack_98 = local_108;
  uStack_94 = uStack_104;
  puVar8 = puVar12;
  local_90 = puStack_100;
  local_80 = uStack_c8;
  local_a0 = plVar2;
  uVar11 = uStack_d4;
  if (uStack_d4 != uVar7) {
    lVar9 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar9 = param_1 + 0x90;
    }
    uVar11 = *(uint *)(lVar9 + (longlong)local_e8 * 4) & uStack_d8;
    while (uVar11 == 0) {
      lVar10 = (longlong)local_e8;
      uStack_d0 = uStack_d0 + 0x20;
      iVar6 = local_e8 + 1;
      bVar3 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e8;
      local_e8 = iVar6;
      if (bVar3) goto LAB_141ee96e2;
      uVar11 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      uStack_d8 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    iVar6 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_d4 = (uStack_d0 - iVar6) + 0x1f;
    uVar11 = uStack_d4;
    if ((int)uVar7 < (int)uStack_d4) {
LAB_141ee96e2:
      uStack_d4 = uVar7;
      uVar11 = uVar7;
    }
  }
  while( true ) {
    if (((uStack_84 == uVar11) && (local_90 == (uint *)(param_1 + 0x90))) && (local_a0 == plVar2))
    break;
    puVar14 = *(undefined8 **)(*local_a0 + (longlong)(int)uStack_84 * 0x10);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    puVar8 = local_118;
    if (iVar6 != *(int *)(param_1 + 0x150)) goto LAB_141ee98d5;
    if ((*(char *)(puVar14 + 10) != '\0') &&
       (lVar9 = puVar14[7], *(int *)(param_1 + 0xe0) <= *(int *)(lVar9 + 0x2fc))) {
      if ((*(char *)(lVar9 + 0x318) == '\0') || (*(char *)(lVar9 + 0x319) == '\0')) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 == *(char *)(param_1 + 0x14c)) {
        puVar8 = puVar12;
        fVar18 = *(float *)((longlong)puVar14 + 0x2c);
        do {
          fVar16 = fVar18 + 1.0;
          if (*(float *)(lVar9 + 800) < fVar16) break;
          uVar7 = (int)puVar8 + 1;
          puVar8 = (undefined8 *)(ulonglong)uVar7;
          fVar18 = fVar16;
        } while ((int)uVar7 < 1);
        uVar17 = FUN_141eeb810(lVar9,fVar18);
        local_b0 = *puVar14;
        local_a8 = *(undefined4 *)(puVar14 + 1);
        local_c0 = puVar14;
        if (*(char *)(puVar14 + 10) != '\0') {
          FUN_141eed460(param_1 + 0xe8,puVar14);
          *(undefined1 *)(puVar14 + 10) = 0;
          FUN_14174ab50(param_1 + 0x30,local_res18,&local_c0,0);
        }
        lVar9 = FUN_141eec0e0(param_1,&local_b0,uVar17,lVar9,fVar18,0);
        uVar4 = local_110;
        if (lVar9 != 0) {
          lVar10 = (longlong)(int)local_110;
          iVar6 = (int)local_110 + 1;
          local_110 = CONCAT44(local_110._4_4_,iVar6);
          if (local_110._4_4_ < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_118,uVar4 & 0xffffffff);
          }
          local_118[lVar10] = lVar9;
        }
      }
    }
    puVar8 = local_118;
    uStack_88 = uStack_88 & ~uStack_94;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
  }
  puVar14 = (undefined8 *)
            ((ulonglong)((longlong)(puVar8 + (int)local_110) + (7 - (longlong)puVar8)) >> 3);
  if (puVar8 + (int)local_110 < puVar8) {
    puVar14 = puVar12;
  }
  puVar13 = puVar8;
  if (puVar14 != (undefined8 *)0x0) {
    do {
      local_b8 = *puVar13;
      FUN_14174ab50(plVar2,local_res20,&local_b8,0);
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      puVar13 = puVar13 + 1;
    } while (puVar12 != puVar14);
  }
  FUN_141eea240(param_1);
LAB_141ee98d5:
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
  return;
}



// FUNCTION 141ee9930 FUN_141ee9930 body=27 status=ok
// SIG undefined FUN_141ee9930(void)

void FUN_141ee9930(undefined8 param_1)

{
  FUN_1417502d0();
  FUN_141eed4e0(param_1);
  return;
}



// FUNCTION 141ee9950 Call body=94 status=ok
// SIG undefined Call(void)

longlong UE4Function_Private::
         TFunctionRefCaller<<lambda_60bd3e80d61781f46a0dff3974398c20>,UProceduralFoliageTile_*___cdecl(void)>
         ::Call(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar4 = param_1[2];
  lVar3 = param_1[1];
  *(int *)(lVar2 + 0x150) = (int)param_1[3];
  UProceduralFoliageTile::InitSimulation(lVar2,lVar3,(int)lVar4);
  FUN_141eed790(lVar2,uVar1,0);
  FUN_141eed790(lVar2,uVar1,1);
  return *param_1;
}



// FUNCTION 141ee99b0 FUN_141ee99b0 body=535 status=ok
// SIG undefined FUN_141ee99b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee99b0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar4 = FUN_142912e90();
    lVar1 = *(longlong *)(param_4 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar4 = *(longlong *)(param_1 + 0x468), lVar4 != 0)) {
      uVar5 = *(uint *)(lVar4 + 0x230) & _DAT_146ac3f90;
      uVar6 = *(uint *)(lVar4 + 0x234) & uRam0000000146ac3f94;
      uVar7 = *(uint *)(lVar4 + 0x238) & uRam0000000146ac3f98;
      uVar8 = *(uint *)(lVar4 + 0x23c) & uRam0000000146ac3f9c;
      fVar11 = *(float *)(param_4 + 0x1d0) - *(float *)(lVar4 + 0x1d0);
      fVar13 = *(float *)(lVar4 + 0x1d8) - *(float *)(lVar4 + 0x1d8);
      fVar15 = *(float *)(param_4 + 0x1d4) - *(float *)(lVar4 + 0x1d4);
      auVar17._4_4_ = uVar6;
      auVar17._0_4_ = uVar5;
      auVar17._8_4_ = uVar7;
      auVar17._12_4_ = uVar8;
      auVar18._4_4_ = uVar7;
      auVar18._0_4_ = uVar6;
      auVar18._8_4_ = uVar5;
      auVar18._12_4_ = uVar8;
      auVar18 = minps(auVar17,auVar18);
      auVar2._4_4_ = uVar5;
      auVar2._0_4_ = uVar7;
      auVar2._8_4_ = uVar6;
      auVar2._12_4_ = uVar8;
      auVar18 = minps(auVar18,auVar2);
      fVar16 = auVar18._0_4_ * *(float *)(lVar4 + 0x714);
      fVar9 = fVar11 * fVar11 + fVar15 * fVar15 + fVar13 * fVar13;
      fVar12 = fVar11;
      fVar14 = fVar13;
      fVar10 = fVar15;
      if ((fVar9 != 1.0) &&
         (fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d98, fVar10 = DAT_1468b5d94, 1e-08 <= fVar9)) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar18._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar12 = fVar11 * fVar10;
        fVar14 = fVar10 * fVar13;
        fVar10 = fVar10 * fVar15;
      }
      lVar4 = *(longlong *)(param_1 + 0x168);
      fVar9 = *(float *)(lVar4 + 0x1d8);
      *(ulonglong *)(param_1 + 0x470) =
           CONCAT44(fVar10 * fVar16 + *(float *)(lVar4 + 0x1d4),
                    fVar12 * fVar16 + *(float *)(lVar4 + 0x1d0));
      *(float *)(param_1 + 0x478) = fVar14 * fVar16 + fVar9;
    }
    AActor::SetActorTickEnabled(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  }
  return;
}



// FUNCTION 141ee9bd0 CreateProceduralFoliageInstances body=480 status=ok
// SIG undefined CreateProceduralFoliageInstances(void)

void UProceduralFoliageSpawner::CreateProceduralFoliageInstances(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  if (plVar3 != plVar3 + (longlong)iVar2 * 4) {
    lVar11 = 0;
    plVar10 = plVar3 + 1;
    do {
      lVar9 = plVar10[-1];
      if (lVar9 == 0) {
LAB_141ee9c5b:
        lVar9 = plVar10[-1];
        if (lVar9 != 0) {
          lVar5 = UBlueprint::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar5 = lVar11;
            if (*(longlong *)(lVar9 + 0x58) != 0) {
              lVar6 = UObject::GetPrivateStaticClass();
              for (lVar7 = *(longlong *)(lVar9 + 0x58);
                  (lVar5 = lVar11, lVar7 != 0 &&
                  (lVar5 = *(longlong *)(lVar9 + 0x58), lVar7 != lVar6));
                  lVar7 = *(longlong *)(lVar7 + 0x30)) {
              }
            }
            lVar7 = FUN_141ef08c0();
            if (lVar5 != 0) {
LAB_141ee9ce0:
              if (lVar5 != lVar7) goto code_r0x000141ee9ce5;
              *(undefined1 *)(plVar10 + 1) = 0;
              lVar5 = lVar11;
              if (*(longlong *)(lVar9 + 0x30) != 0) {
                lVar6 = UObject::GetPrivateStaticClass();
                for (lVar7 = *(longlong *)(lVar9 + 0x30);
                    (lVar5 = lVar11, lVar7 != 0 &&
                    (lVar5 = *(longlong *)(lVar9 + 0x30), lVar7 != lVar6));
                    lVar7 = *(longlong *)(lVar7 + 0x30)) {
                }
              }
              uVar8 = GetTransientPackage();
              FUN_1417846f0(uVar8,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              lVar9 = FUN_1417985e0(lVar5,uVar8,0,0,0,0,0,0,0);
              *plVar10 = lVar9;
            }
          }
        }
      }
      else {
        lVar5 = FUN_141ef08c0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_141ee9c5b;
        *(undefined1 *)(plVar10 + 1) = 1;
        *plVar10 = lVar9;
      }
LAB_141ee9d80:
      plVar1 = plVar10 + 3;
      plVar10 = plVar10 + 4;
    } while (plVar1 != plVar3 + (longlong)iVar2 * 4);
  }
  return;
code_r0x000141ee9ce5:
  lVar5 = *(longlong *)(lVar5 + 0x30);
  if (lVar5 == 0) goto LAB_141ee9d80;
  goto LAB_141ee9ce0;
}



// FUNCTION 141ee9db0 FUN_141ee9db0 body=193 status=ok
// SIG undefined FUN_141ee9db0(void)

undefined8 * FUN_141ee9db0(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((((*(longlong *)(param_1 + 0x728) != 0) &&
       (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x728) + 0x38),
       puVar1 != (undefined8 *)0x0)) && (*(int *)(puVar1 + 1) != 0)) &&
     (*(int *)(*(longlong *)*puVar1 + 0xdc) != 0)) {
    puVar1 = (undefined8 *)operator_new(0x400);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_142817110(puVar1,param_1,0);
      *puVar1 = &PTR_FUN_144ee0858;
      puVar1[0x7c] = 0;
      *(undefined4 *)(puVar1 + 0x7d) = 0;
      puVar1[0x7e] = 0;
      puVar1[0x7f] = 0x3f800000;
      *(undefined8 **)(param_1 + 0x7a8) = puVar1;
      return puVar1;
    }
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ee9e80 FUN_141ee9e80 body=31 status=ok
// SIG undefined FUN_141ee9e80(void)

void FUN_141ee9e80(longlong param_1)

{
  FUN_142388990();
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  return;
}



// FUNCTION 141ee9ea0 FUN_141ee9ea0 body=53 status=ok
// SIG undefined FUN_141ee9ea0(void)

void FUN_141ee9ea0(longlong *param_1)

{
  FUN_141ee7300(param_1 + 0xc,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ee9ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141ee9ee0 Duplicate body=353 status=ok
// SIG undefined Duplicate(void)

void TQuadTree<FProceduralFoliageInstance_*,4>::Duplicate(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_68 [64];
  
  puVar10 = (undefined8 *)(param_2 + 0x10);
  lVar9 = 4;
  do {
    lVar4 = *(longlong *)((param_1 - param_2) + (longlong)puVar10);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)operator_new(0x58);
      puVar8 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        pfVar7 = (float *)FBox2D::FBox2D(local_68,0,0);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = *(undefined8 *)(pfVar7 + 2);
        puVar6[6] = *(undefined8 *)pfVar7;
        puVar6[7] = uVar5;
        *(float *)(puVar6 + 8) = pfVar7[4];
        fVar2 = *pfVar7;
        fVar3 = pfVar7[2];
        *(float *)(puVar6 + 9) = (pfVar7[3] + pfVar7[1]) * 0.5;
        *(float *)((longlong)puVar6 + 0x44) = (fVar2 + fVar3) * 0.5;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar1;
        *(undefined1 *)(puVar6 + 10) = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar8 = puVar6;
      }
      *puVar10 = puVar8;
      Duplicate(lVar4);
    }
    puVar10 = puVar10 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FCustomVersionContainer::operator=(param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_1 + 0x50);
  return;
}



// FUNCTION 141eea050 Empty body=204 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<UFoliageType_*,TUniqueObj<FFoliageMeshInfo>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_38 + 8 + (longlong)local_1c * 0x18);
      if (lVar1 != 0) {
        FMemory::operator_delete(lVar1,8);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 141eea120 FUN_141eea120 body=287 status=ok
// SIG undefined FUN_141eea120(void)

void FUN_141eea120(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD *pDVar7;
  longlong *lpTlsValue;
  longlong *plVar8;
  longlong *plVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = param_1[2];
  *(undefined8 *)(lVar3 + 0x3e0) = param_1[3];
  *(undefined4 *)(lVar3 + 1000) = *(undefined4 *)(param_1 + 4);
  lVar3 = param_1[2];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 7);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(lVar3 + 0x3f0) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(lVar3 + 0x3f4) = uVar4;
  *(undefined4 *)(lVar3 + 0x3f8) = uVar5;
  *(undefined4 *)(lVar3 + 0x3fc) = uVar6;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144ee0a00;
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar7);
  plVar9 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar9;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      lpTlsValue = plVar8;
    }
    TlsSetValue(*pDVar7,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar9 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar7 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar9;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141eea240 FUN_141eea240 body=672 status=ok
// SIG undefined FUN_141eea240(void)

void FUN_141eea240(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  float *local_res8;
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  float fStack_70;
  float fStack_6c;
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
  
  plVar1 = (longlong *)(param_1 + 0x30);
  local_98 = 0.0;
  uVar3 = *(uint *)(param_1 + 0x58);
  puVar2 = (uint *)(param_1 + 0x40);
  fStack_94 = 1.4013e-45;
  uStack_84 = 0;
  fStack_80 = 0.0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    fStack_80 = 0.0;
    local_98 = 0.0;
    while (uVar4 == 0) {
      lVar9 = (longlong)(int)local_98;
      fStack_80 = (float)((int)fStack_80 + 0x20);
      fVar10 = (float)((int)local_98 + 1);
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = fVar10;
      if (bVar6) goto LAB_141eea30a;
      uVar4 = puVar12[lVar9 + 1];
    }
    fStack_94 = (float)(-uVar4 & uVar4);
    iVar7 = 0x1f;
    if (fStack_94 != 0.0) {
      for (; (uint)fStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (fStack_94 == 0.0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = ((int)fStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141eea30a:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x58);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,fStack_80);
  uStack_48 = CONCAT44(fStack_94,local_98);
  local_88 = -1 << ((byte)uVar4 & 0x1f);
  uVar11 = uVar4 & 0xffffffe0;
  fStack_70 = local_98;
  fStack_6c = fStack_94;
  uStack_90 = puVar2;
  uStack_84 = uVar4;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  local_78 = plVar1;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar4 >> 5] & local_88;
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141eea3d2;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      local_88 = 0xffffffff;
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
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    uVar4 = uStack_84;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141eea3d2:
      uStack_84 = uVar3;
      uVar4 = uVar3;
    }
  }
  while (((uStack_5c != uVar4 || (local_68 != puVar2)) || (local_78 != plVar1))) {
    pfVar5 = *(float **)(*local_78 + (longlong)(int)uStack_5c * 0x10);
    if (*(char *)(pfVar5 + 0x14) != '\0') {
      fVar13 = pfVar5[0xc] * *(float *)(*(longlong *)(pfVar5 + 0xe) + 0x2f4);
      fVar10 = pfVar5[0xc] * *(float *)(*(longlong *)(pfVar5 + 0xe) + 0x2f8);
      local_88 = CONCAT31(local_88._1_3_,1);
      if (fVar10 <= fVar13) {
        fVar10 = fVar13;
      }
      local_98 = *pfVar5 - fVar10;
      fStack_94 = pfVar5[1] - fVar10;
      uStack_90 = (uint *)CONCAT44(pfVar5[1] + fVar10,*pfVar5 + fVar10);
      local_res8 = pfVar5;
      TQuadTree<FProceduralFoliageInstance_*,4>::Remove(param_1 + 0xe8,&local_res8,&local_98);
      *(undefined1 *)(pfVar5 + 0x14) = 0;
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x80,pfVar5)
    ;
    FMemory::operator_delete(pfVar5);
    uStack_60 = uStack_60 & ~(uint)fStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_70);
  }
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar1,0);
  return;
}



// FUNCTION 141eea4e0 FUN_141eea4e0 body=1084 status=ok
// SIG undefined FUN_141eea4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141eea4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_f8 [32];
  uint local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar24 = 0;
  local_d8 = 0;
  local_b8 = param_3;
  local_b0 = param_2;
  puVar9 = (undefined8 *)UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (puVar9 != (undefined8 *)0x0) {
    uVar10 = AGPingUsable::GetPrivateStaticClass();
    local_d0 = uVar24;
    if (uVar10 != 0) {
      uVar11 = AGPingUsable::GetPrivateStaticClass();
      uVar21 = uVar10;
      do {
        local_d0 = uVar10;
        if (uVar21 == uVar11) break;
        uVar21 = *(ulonglong *)(uVar21 + 0x30);
        local_d0 = uVar24;
      } while (uVar21 != 0);
    }
    local_a8[0] = 5;
    local_50 = '\0';
    local_c8 = puVar9;
    FUN_14044bc80(&local_a0,&local_c8,&local_d0);
    FUN_14045a130(local_a8);
    if (local_84 == '\0') {
LAB_141eea5b4:
      lVar23 = local_78;
      lVar12 = 0;
      iVar8 = *(int *)(local_78 + 0xc);
      if (iVar8 < (int)DAT_1469e91c4) {
        uVar17 = iVar8 >> 0x1f & 0xffff;
        uVar7 = iVar8 + uVar17;
        lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar17) * 0x18;
      }
      if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) == 0) {
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        FUN_141eead80(local_78,param_2,&local_c8);
        puVar9 = local_c8;
        uVar21 = 0;
        uVar10 = (ulonglong)((longlong)(local_c8 + (int)local_c0) + (7 - (longlong)local_c8)) >> 3;
        if (local_c8 + (int)local_c0 < local_c8) {
          uVar10 = uVar21;
        }
        puVar20 = local_c8;
        uVar7 = local_d8;
        if (uVar10 != 0) {
          do {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar23 + 0x458,&local_d0,*puVar20);
            if ((((((int)local_d0 == -1) ||
                  (lVar12 = *(longlong *)(lVar23 + 0x458) + (longlong)(int)local_d0 * 0x18,
                  lVar12 == 0)) || (plVar13 = (longlong *)(lVar12 + 8), plVar13 == (longlong *)0x0))
                || ((plVar13 = (longlong *)*plVar13, plVar13 == (longlong *)0x0 ||
                    (lVar12 = *plVar13, lVar12 == 0)))) ||
               (*(int *)(lVar12 + 0x860) != *(int *)(lVar12 + 0x7b0))) {
              iVar8 = 0;
            }
            else {
              iVar8 = FUN_1424c8e40(lVar12,param_3);
            }
            uVar7 = (int)uVar24 + iVar8;
            uVar24 = (ulonglong)uVar7;
            uVar21 = uVar21 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar21 != uVar10);
        }
        local_d8 = uVar7;
        if (puVar9 != (undefined8 *)0x0) {
          FMemory::Free(puVar9);
        }
      }
      lVar12 = local_a0;
      iVar8 = local_88 + 1;
      if (iVar8 < local_68 + local_90) {
        lVar23 = (longlong)iVar8 * 8;
        iVar22 = local_68;
        iVar18 = local_90;
        do {
          lVar16 = 0;
          if (iVar8 < iVar18) {
            lVar19 = *(longlong *)(local_98 + lVar23);
          }
          else {
            lVar19 = *(longlong *)(local_70 + (longlong)(iVar8 - iVar18) * 8);
          }
          local_80 = local_80 + 1;
          if ((lVar19 != 0) &&
             (lVar14 = AActor::GetLevel(lVar19), iVar22 = local_68, iVar18 = local_90, lVar14 != 0))
          {
            if ((local_a8[0] & 1) != 0) {
              iVar1 = *(int *)(lVar19 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar17 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar17;
                lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar17) * 0x18;
              }
              if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) != 0) goto LAB_141eea86f;
            }
            if (((local_a8[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar19), iVar22 = local_68,
               iVar18 = local_90, cVar6 != '\0')) {
              if ((local_a8[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar14 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar14 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar14 + 600);
                if (((*(longlong *)(lVar14 + 0xc0) == 0) ||
                    (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)) ||
                   (piVar2 == piVar15)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar22 = local_68;
                iVar18 = local_90;
                if ((!bVar5) || (!bVar3)) goto LAB_141eea86f;
              }
              lVar16 = ULevel::GetWorld(lVar14);
              iVar22 = local_68;
              iVar18 = local_90;
              if (lVar16 == lVar12) {
                lVar16 = AActor::GetLevel(lVar19);
                if (lVar16 == *(longlong *)(lVar12 + 0x30)) goto LAB_141eea887;
                lVar16 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar22 = local_68;
                iVar18 = local_90;
                if (!bVar5) goto LAB_141eea887;
              }
            }
          }
LAB_141eea86f:
          iVar8 = iVar8 + 1;
          lVar23 = lVar23 + 8;
          if (iVar22 + iVar18 <= iVar8) break;
        } while( true );
      }
      uVar24 = (ulonglong)local_d8;
      local_78 = 0;
      local_84 = '\x01';
    }
LAB_141eea8c1:
    if (local_50 != '\0') {
      local_50 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
  }
  return uVar24;
LAB_141eea887:
  uVar24 = (ulonglong)local_d8;
  param_2 = local_b0;
  param_3 = local_b8;
  local_88 = iVar8;
  local_78 = lVar19;
  if (local_84 != '\0') goto LAB_141eea8c1;
  goto LAB_141eea5b4;
}



// FUNCTION 141eea920 FUN_141eea920 body=1116 status=ok
// SIG undefined FUN_141eea920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141eea920(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4
                       )

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_f8 [32];
  uint local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0 [2];
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_80;
  char local_7c;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar23 = 0;
  local_d8 = 0;
  local_b8 = param_2;
  puVar10 = (undefined8 *)UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (puVar10 != (undefined8 *)0x0) {
    local_b0 = *param_3;
    local_a8 = *(undefined4 *)(param_3 + 1);
    local_a4 = param_4;
    uVar11 = AGPingUsable::GetPrivateStaticClass();
    local_d0 = uVar23;
    if (uVar11 != 0) {
      uVar12 = AGPingUsable::GetPrivateStaticClass();
      uVar21 = uVar11;
      do {
        local_d0 = uVar11;
        if (uVar21 == uVar12) break;
        uVar21 = *(ulonglong *)(uVar21 + 0x30);
        local_d0 = uVar23;
      } while (uVar21 != 0);
    }
    local_a0[0] = 5;
    local_48 = '\0';
    local_c8 = puVar10;
    FUN_14044bc80(&local_98,&local_c8,&local_d0);
    FUN_14045a130(local_a0);
    if (local_7c == '\0') {
LAB_141eeaa10:
      lVar6 = local_70;
      uVar21 = 0;
      iVar9 = *(int *)(local_70 + 0xc);
      uVar11 = uVar21;
      if (iVar9 < (int)DAT_1469e91c4) {
        uVar17 = iVar9 >> 0x1f & 0xffff;
        uVar8 = iVar9 + uVar17;
        uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)((uVar8 & 0xffff) - uVar17) * 0x18;
      }
      if ((*(uint *)(uVar11 + 8) >> 0x1d & 1) == 0) {
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        FUN_141eead80(local_70,param_2,&local_c8);
        puVar10 = local_c8;
        uVar11 = (ulonglong)((longlong)(local_c8 + (int)local_c0) + (7 - (longlong)local_c8)) >> 3;
        if (local_c8 + (int)local_c0 < local_c8) {
          uVar11 = uVar21;
        }
        puVar20 = local_c8;
        uVar8 = local_d8;
        if (uVar11 != 0) {
          do {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar6 + 0x458,&local_d0,*puVar20);
            if ((((((int)local_d0 == -1) ||
                  (lVar24 = *(longlong *)(lVar6 + 0x458) + (longlong)(int)local_d0 * 0x18,
                  lVar24 == 0)) || (plVar13 = (longlong *)(lVar24 + 8), plVar13 == (longlong *)0x0))
                || ((plVar13 = (longlong *)*plVar13, plVar13 == (longlong *)0x0 ||
                    (lVar24 = *plVar13, lVar24 == 0)))) ||
               (*(int *)(lVar24 + 0x860) != *(int *)(lVar24 + 0x7b0))) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_1424c8f90(lVar24,&local_b0);
            }
            uVar8 = (int)uVar23 + iVar9;
            uVar23 = (ulonglong)uVar8;
            puVar20 = puVar20 + 1;
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar11);
        }
        local_d8 = uVar8;
        if (puVar10 != (undefined8 *)0x0) {
          FMemory::Free(puVar10);
        }
      }
      lVar6 = local_98;
      iVar9 = local_80 + 1;
      if (iVar9 < local_60 + local_88) {
        lVar24 = (longlong)iVar9 * 8;
        iVar22 = local_60;
        iVar18 = local_88;
        do {
          if (iVar9 < iVar18) {
            lVar19 = *(longlong *)(local_90 + lVar24);
          }
          else {
            lVar19 = *(longlong *)(local_68 + (longlong)(iVar9 - iVar18) * 8);
          }
          local_78 = local_78 + 1;
          if ((lVar19 != 0) &&
             (lVar14 = AActor::GetLevel(lVar19), iVar22 = local_60, iVar18 = local_88, lVar14 != 0))
          {
            if ((local_a0[0] & 1) != 0) {
              iVar1 = *(int *)(lVar19 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar17 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar17;
                lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar17) * 0x18;
              }
              else {
                lVar15 = 0;
              }
              if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) goto LAB_141eeacc6;
            }
            if (((local_a0[0] >> 1 & 1) == 0) ||
               (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar19), iVar22 = local_60,
               iVar18 = local_88, cVar7 != '\0')) {
              if ((local_a0[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar14 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar14 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar14 + 600);
                if (((*(longlong *)(lVar14 + 0xc0) == 0) ||
                    (piVar16 = (int *)UWorld::GetActiveLevelCollection(), piVar16 == (int *)0x0)) ||
                   (piVar2 == piVar16)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar22 = local_60;
                iVar18 = local_88;
                if ((!bVar5) || (!bVar3)) goto LAB_141eeacc6;
              }
              lVar14 = ULevel::GetWorld(lVar14);
              iVar22 = local_60;
              iVar18 = local_88;
              if (lVar14 == lVar6) {
                lVar14 = AActor::GetLevel(lVar19);
                if (lVar14 == *(longlong *)(lVar6 + 0x30)) goto LAB_141eead5a;
                lVar14 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar22 = local_60;
                iVar18 = local_88;
                if (!bVar5) goto LAB_141eead5a;
              }
            }
          }
LAB_141eeacc6:
          iVar9 = iVar9 + 1;
          lVar24 = lVar24 + 8;
          if (iVar22 + iVar18 <= iVar9) break;
        } while( true );
      }
      uVar23 = (ulonglong)local_d8;
      local_70 = 0;
      local_7c = '\x01';
    }
LAB_141eeacf9:
    if (local_48 != '\0') {
      local_48 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_98,local_50);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
  }
  return uVar23;
LAB_141eead5a:
  uVar23 = (ulonglong)local_d8;
  param_2 = local_b8;
  local_80 = iVar9;
  local_70 = lVar19;
  if (local_7c != '\0') goto LAB_141eeacf9;
  goto LAB_141eeaa10;
}



// FUNCTION 141eead80 FUN_141eead80 body=573 status=ok
// SIG undefined FUN_141eead80(void)

void FUN_141eead80(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
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
  
  uStack_94 = 1;
  plVar2 = (longlong *)(param_1 + 0x458);
  uVar3 = *(uint *)(param_1 + 0x480);
  puVar1 = (uint *)(param_1 + 0x468);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x478);
    if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar6) goto LAB_141eeae5c;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141eeae5c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x480);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x478);
    if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141eeaf22;
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141eeaf22:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_5c * 0x18);
    if ((plVar5 != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*plVar5 + 0x278))(plVar5), lVar9 == param_2)) {
      iVar7 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
      }
      *(longlong **)(*param_3 + (longlong)iVar7 * 8) = plVar5;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 141eeafc0 FUN_141eeafc0 body=327 status=ok
// SIG undefined FUN_141eeafc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141eeafc0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x470);
  }
  if (lVar8 != 0) {
    fVar1 = *(float *)(lVar8 + 0x1d8);
    fVar2 = *(float *)(lVar8 + 0x1e4);
    fVar3 = *(float *)(lVar8 + 0x1dc);
    fVar4 = *(float *)(lVar8 + 0x1d4);
    fVar5 = *(float *)(lVar8 + 0x1e0);
    fVar6 = *(float *)(lVar8 + 0x1d0);
    *(undefined1 *)(param_2 + 3) = 1;
    *param_2 = CONCAT44(fVar4 - fVar5,fVar6 - fVar3);
    *(float *)(param_2 + 1) = fVar1 - fVar2;
    *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar4 + fVar5,fVar6 + fVar3);
    *(float *)((longlong)param_2 + 0x14) = fVar1 + fVar2;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar8 = AActor::GetLevel();
    if (lVar8 != 0) {
      plVar9 = (longlong *)FWeakObjectPtr::Get(lVar8 + 0x228);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x560))(plVar9,param_2,0);
        return param_2;
      }
    }
  }
  *(undefined8 *)((longlong)param_2 + 0xc) = _DAT_1468b5d90;
  uVar7 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_2 + 0x14) = DAT_1468b5d98;
  *param_2 = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 141eeb110 GetComponentClass body=85 status=ok
// SIG undefined GetComponentClass(void)

undefined8 UFoliageType::GetComponentClass(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\foliage\\public\\FoliageType.h",0x5c,
             L"Pure virtual not implemented (%s)",L"UFoliageType::GetComponentClass()");
  FDebug::AssertFailed
            (&DAT_143f3f584,"d:\\oak\\main\\engine\\source\\runtime\\foliage\\public\\FoliageType.h"
             ,0x5c,L"Pure virtual not implemented (%s)",L"UFoliageType::GetComponentClass()");
  return 0;
}



// FUNCTION 141eeb170 FUN_141eeb170 body=70 status=ok
// SIG undefined FUN_141eeb170(void)

longlong FUN_141eeb170(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    lVar2 = FUN_141ef0a80();
    for (lVar1 = *(longlong *)(param_1 + 0x3c8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        return *(longlong *)(param_1 + 0x3c8);
      }
    }
  }
  return 0;
}



// FUNCTION 141eeb1c0 GetElements body=249 status=ok
// SIG undefined GetElements(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TQuadTree<FProceduralFoliageInstance_*,4>::GetElements
               (undefined8 *param_1,float *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar1 = GetQuads(param_1,param_2,local_58);
  iVar2 = *(int *)(param_1 + 1);
  if (*(int *)((longlong)param_3 + 0xc) < (int)param_3[1] + iVar2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
    iVar2 = *(int *)(param_1 + 1);
  }
  pfVar3 = (float *)*param_1;
  pfVar5 = pfVar3 + (longlong)iVar2 * 8;
  for (; pfVar3 != pfVar5; pfVar3 = pfVar3 + 8) {
    if ((((*param_2 <= pfVar3[2]) && (*pfVar3 <= param_2[2])) && (param_2[1] <= pfVar3[3])) &&
       (pfVar3[1] <= param_2[3])) {
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = *(undefined8 *)(pfVar3 + 6);
    }
  }
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      GetElements(local_58[lVar4],param_2,param_3);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 141eeb320 FUN_141eeb320 body=555 status=ok
// SIG undefined FUN_141eeb320(void)

bool FUN_141eeb320(undefined8 param_1,float *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_78;
  undefined8 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58;
  
  fVar2 = param_2[0xc];
  lVar5 = *(longlong *)(param_2 + 0xe);
  uVar11 = 0;
  fVar3 = *(float *)(lVar5 + 0x2f8);
  fVar4 = *(float *)(lVar5 + 0x2f4);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  fVar12 = fVar2 * *(float *)(lVar5 + 0x2f8);
  local_64 = fVar2 * *(float *)(lVar5 + 0x2f4);
  local_58 = 1;
  if (local_64 <= fVar12) {
    local_64 = fVar12;
  }
  local_60 = *param_2 + local_64;
  local_5c = param_2[1] + local_64;
  local_68 = *param_2 - local_64;
  local_64 = param_2[1] - local_64;
  TQuadTree<FProceduralFoliageInstance_*,4>::GetElements(local_5c,&local_68,&local_78);
  iVar9 = (int)param_3[1];
  if (*(int *)((longlong)param_3 + 0xc) < iVar9 + (int)local_70) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_3);
    iVar9 = (int)param_3[1];
  }
  uVar10 = (ulonglong)((longlong)(local_78 + (int)local_70) + (7 - (longlong)local_78)) >> 3;
  if (local_78 + (int)local_70 < local_78) {
    uVar10 = uVar11;
  }
  puVar8 = local_78;
  if (uVar10 != 0) {
    do {
      pfVar6 = (float *)*puVar8;
      if (pfVar6 != param_2) {
        fVar13 = (param_2[1] - pfVar6[1]) * (param_2[1] - pfVar6[1]) +
                 (*param_2 - *pfVar6) * (*param_2 - *pfVar6);
        fVar12 = pfVar6[0xc] * *(float *)(*(longlong *)(pfVar6 + 0xe) + 0x2f4) + fVar2 * fVar4;
        bVar7 = fVar13 <= fVar12 * fVar12;
        if ((bVar7) ||
           (fVar12 = pfVar6[0xc] * *(float *)(*(longlong *)(pfVar6 + 0xe) + 0x2f8) + fVar2 * fVar3,
           fVar13 <= fVar12 * fVar12)) {
          iVar9 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar9 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3,iVar9);
          }
          puVar1 = (undefined8 *)(*param_3 + (longlong)iVar9 * 0x18);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = param_2;
            *(uint *)(puVar1 + 2) = bVar7 ^ 1;
            puVar1[1] = pfVar6;
          }
        }
      }
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != uVar10);
    iVar9 = (int)param_3[1];
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return 0 < iVar9;
}



// FUNCTION 141eeb550 GetQuads body=182 status=ok
// SIG undefined GetQuads(void)

ulonglong TQuadTree<FProceduralFoliageInstance_*,4>::GetQuads
                    (longlong param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  if (*(char *)(param_1 + 0x50) != '\0') {
    fVar1 = *(float *)(param_1 + 0x44);
    fVar2 = *param_2;
    fVar3 = *(float *)(param_1 + 0x48);
    fVar4 = param_2[1];
    bVar5 = fVar1 == param_2[2];
    bVar7 = fVar1 < param_2[2];
    bVar6 = fVar3 == param_2[3];
    bVar8 = fVar3 < param_2[3];
    if ((fVar2 <= fVar1) && (fVar4 <= fVar3)) {
      uVar9 = 1;
      *param_3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar10 = uVar9;
    if ((bVar7 || bVar5) && (fVar4 <= fVar3)) {
      uVar10 = (ulonglong)((int)uVar9 + 1);
      param_3[uVar9] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar9 = uVar10;
    if ((fVar2 <= fVar1) && (bVar8 || bVar6)) {
      uVar9 = (ulonglong)((int)uVar10 + 1);
      param_3[uVar10] = *(undefined8 *)(param_1 + 0x10);
    }
    if ((bVar7 || bVar5) && (bVar8 || bVar6)) {
      param_3[uVar9] = *(undefined8 *)(param_1 + 0x18);
      return (ulonglong)((int)uVar9 + 1);
    }
  }
  return uVar9;
}



// FUNCTION 141eeb610 GetResourceSizeEx body=506 status=ok
// SIG undefined GetResourceSizeEx(void)

void UProceduralFoliageTile::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
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
  longlong local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  FUN_141758340();
  uStack_84 = 1;
  local_40 = param_1 + 0x80;
  uVar2 = *(uint *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x90);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar5 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar5;
      if (bVar4) goto LAB_141eeb6ed;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_74 = (iStack_70 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141eeb6ed:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xa8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141eeb7b4;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_74 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141eeb7b4:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x60;
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141eeb810 FUN_141eeb810 body=127 status=ok
// SIG undefined FUN_141eeb810(void)

float FUN_141eeb810(longlong param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x330);
  if (*(float *)(param_1 + 800) == 0.0) {
    param_2 = 1.0;
  }
  else {
    param_2 = param_2 / *(float *)(param_1 + 800);
    if (param_2 < 0.0) {
      param_2 = 0.0;
      goto LAB_141eeb84c;
    }
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
LAB_141eeb84c:
  fVar2 = (float)FRichCurve::Eval(uVar1,param_2);
  return (*(float *)(param_1 + 0x32c) - *(float *)(param_1 + 0x328)) * fVar2 +
         *(float *)(param_1 + 0x328);
}



// FUNCTION 141eeb890 GetStaticMesh body=85 status=ok
// SIG undefined GetStaticMesh(void)

undefined8 UFoliageType::GetStaticMesh(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\foliage\\public\\FoliageType.h",0x58,
             L"Pure virtual not implemented (%s)",L"UFoliageType::GetStaticMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,"d:\\oak\\main\\engine\\source\\runtime\\foliage\\public\\FoliageType.h"
             ,0x58,L"Pure virtual not implemented (%s)",L"UFoliageType::GetStaticMesh");
  return 0;
}



// FUNCTION 141eeb910 FUN_141eeb910 body=717 status=ok
// SIG undefined FUN_141eeb910(void)

undefined8 FUN_141eeb910(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float *local_res8;
  float *local_res18;
  float *local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  uVar8 = 1;
  FUN_141eeb320(param_1 + 0xe8,param_2,&local_58);
  puVar5 = local_58;
  puVar1 = local_58 + (longlong)(int)local_50 * 3;
  for (puVar7 = local_58; puVar4 = local_58, puVar7 != puVar1; puVar7 = puVar7 + 3) {
    pfVar2 = (float *)*puVar7;
    pfVar3 = (float *)puVar7[1];
    pfVar6 = pfVar3;
    if ((*(char *)(pfVar2 + 0x10) == '\0') && (pfVar6 = pfVar2, *(char *)(pfVar3 + 0x10) == '\0')) {
      fVar10 = *(float *)(*(longlong *)(pfVar2 + 0xe) + 0x324);
      fVar9 = *(float *)(*(longlong *)(pfVar3 + 0xe) + 0x324);
      if (fVar10 == fVar9) {
        fVar10 = pfVar2[0xb];
        fVar9 = pfVar3[0xb];
        if (fVar10 == fVar9) {
          pfVar6 = pfVar3;
          if (pfVar2[0xc] < pfVar3[0xc]) {
            pfVar6 = pfVar2;
          }
          goto LAB_141eeb9bc;
        }
      }
      pfVar6 = pfVar3;
      if (fVar10 < fVar9) {
        pfVar6 = pfVar2;
      }
    }
LAB_141eeb9bc:
    if ((*(int *)(puVar7 + 2) == 1) && (*(char *)(*(longlong *)(pfVar6 + 0xe) + 0x318) != '\0')) {
      pfVar6 = (float *)0x0;
    }
    if (pfVar6 == param_2) {
      uVar8 = 0;
      local_res18 = param_2;
      if (*(char *)(param_2 + 0x14) != '\0') {
        fVar9 = param_2[0xc] * *(float *)(*(longlong *)(param_2 + 0xe) + 0x2f4);
        fVar10 = param_2[0xc] * *(float *)(*(longlong *)(param_2 + 0xe) + 0x2f8);
        local_48 = 1;
        if (fVar10 <= fVar9) {
          fVar10 = fVar9;
        }
        local_50 = CONCAT44(param_2[1] + fVar10,*param_2 + fVar10);
        local_58 = (undefined8 *)CONCAT44(param_2[1] - fVar10,*param_2 - fVar10);
        local_res8 = param_2;
        TQuadTree<FProceduralFoliageInstance_*,4>::Remove(param_1 + 0xe8,&local_res8,&local_58);
        *(undefined1 *)(param_2 + 0x14) = 0;
        FUN_14174ab50(param_1 + 0x30,&local_res8,&local_res18,0);
      }
      goto LAB_141eebbb4;
    }
  }
  do {
    if (puVar4 == puVar1) {
LAB_141eebbb4:
      if (puVar5 != (undefined8 *)0x0) {
        FMemory::Free(puVar5);
      }
      return uVar8;
    }
    pfVar2 = (float *)*puVar4;
    pfVar3 = (float *)puVar4[1];
    pfVar6 = pfVar3;
    if ((*(char *)(pfVar2 + 0x10) == '\0') && (pfVar6 = pfVar2, *(char *)(pfVar3 + 0x10) == '\0')) {
      fVar10 = *(float *)(*(longlong *)(pfVar2 + 0xe) + 0x324);
      fVar9 = *(float *)(*(longlong *)(pfVar3 + 0xe) + 0x324);
      if (fVar10 == fVar9) {
        fVar10 = pfVar2[0xb];
        fVar9 = pfVar3[0xb];
        if (fVar10 == fVar9) {
          pfVar6 = pfVar3;
          if (pfVar2[0xc] < pfVar3[0xc]) {
            pfVar6 = pfVar2;
          }
          goto LAB_141eebaf2;
        }
      }
      pfVar6 = pfVar3;
      if (fVar10 < fVar9) {
        pfVar6 = pfVar2;
      }
    }
LAB_141eebaf2:
    if ((((*(int *)(puVar4 + 2) != 1) || (*(char *)(*(longlong *)(pfVar6 + 0xe) + 0x318) == '\0'))
        && (pfVar6 != (float *)0x0)) && (local_res20 = pfVar6, *(char *)(pfVar6 + 0x14) != '\0')) {
      fVar10 = pfVar6[0xc] * *(float *)(*(longlong *)(pfVar6 + 0xe) + 0x2f8);
      fVar9 = pfVar6[0xc] * *(float *)(*(longlong *)(pfVar6 + 0xe) + 0x2f4);
      local_48 = 1;
      if (fVar10 <= fVar9) {
        fVar10 = fVar9;
      }
      local_50 = CONCAT44(fVar10 + pfVar6[1],fVar10 + *pfVar6);
      local_58 = (undefined8 *)CONCAT44(pfVar6[1] - fVar10,*pfVar6 - fVar10);
      local_res18 = pfVar6;
      TQuadTree<FProceduralFoliageInstance_*,4>::Remove(param_1 + 0xe8,&local_res18,&local_58);
      *(undefined1 *)(pfVar6 + 0x14) = 0;
      FUN_14174ab50(param_1 + 0x30,&local_res8,&local_res20,0);
    }
    puVar4 = puVar4 + 3;
  } while( true );
}



// FUNCTION 141eebbe0 InitSimulation body=211 status=ok
// SIG undefined InitSimulation(void)

void UProceduralFoliageTile::InitSimulation(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 0x140) = param_3;
  *(undefined4 *)(param_1 + 0x144) = param_3;
  *(undefined4 *)(param_1 + 0x148) = param_3;
  *(longlong *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  local_30 = *(float *)(param_2 + 0x2c);
  local_60 = 0;
  fStack_28 = local_30 + local_30;
  local_58 = 0;
  local_30 = local_30 * -2.0;
  local_68 = CONCAT31(local_68._1_3_,1);
  local_20 = local_68;
  local_1c = (local_30 + fStack_28) * 0.5;
  local_14 = *(undefined4 *)(param_2 + 0x34);
  local_10 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  fStack_2c = local_30;
  fStack_24 = fStack_28;
  local_18 = local_1c;
  TQuadTree<FProceduralFoliageInstance_*,4>::Duplicate(&local_60,param_1 + 0xe8);
  TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(&local_60);
  return;
}



// FUNCTION 141eebcc0 InsertElementRecursive body=235 status=ok
// SIG undefined InsertElementRecursive(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TQuadTree<FProceduralFoliageInstance_*,4>::InsertElementRecursive
               (longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  do {
    while (plVar6 = param_1, iVar5 = GetQuads(plVar6,param_3,local_58), iVar5 == 0) {
      fVar7 = *(float *)((longlong)plVar6 + 0x3c) - *(float *)((longlong)plVar6 + 0x34);
      if ((fVar7 * fVar7 +
           (*(float *)(plVar6 + 7) - *(float *)(plVar6 + 6)) *
           (*(float *)(plVar6 + 7) - *(float *)(plVar6 + 6)) <=
           *(float *)((longlong)plVar6 + 0x4c) * *(float *)((longlong)plVar6 + 0x4c)) ||
         ((int)plVar6[1] < 4)) goto LAB_141eebd4e;
      Split(plVar6);
      param_1 = plVar6;
    }
    param_1 = local_58[0];
  } while (iVar5 == 1);
LAB_141eebd4e:
  local_48 = *(undefined4 *)(param_3 + 2);
  uVar3 = *param_3;
  uVar4 = param_3[1];
  iVar5 = (int)plVar6[1];
  uStack_40 = *param_2;
  *(int *)(plVar6 + 1) = iVar5 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar6,iVar5);
  }
  lVar2 = *plVar6;
  puVar1 = (undefined8 *)((longlong)iVar5 * 0x20 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((longlong)iVar5 * 0x20 + 0x10 + lVar2);
  *puVar1 = CONCAT44(uStack_44,local_48);
  puVar1[1] = uStack_40;
  return;
}



// FUNCTION 141eebdb0 InstancesToArray body=701 status=ok
// SIG undefined InstancesToArray(void)

void UProceduralFoliageTile::InstancesToArray(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
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
  
  plVar2 = (longlong *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar2);
  }
  plVar3 = (longlong *)(param_1 + 0x80);
  local_88 = 0;
  uVar4 = *(uint *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x90);
  uStack_84 = 1;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar4 != 0) {
    puVar12 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar5 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar5 == 0) {
      lVar11 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar7) goto LAB_141eebeac;
      uVar5 = puVar12[lVar11 + 1];
    }
    uStack_84 = -uVar5 & uVar5;
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
    if ((int)uVar4 < (int)uStack_74) {
LAB_141eebeac:
      uStack_74 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0xa8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar13 = uVar5 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar3;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar5;
  if (uVar5 != uVar4) {
    puVar12 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = puVar12[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
    iVar8 = (int)uVar5 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141eebf71;
      uVar10 = puVar12[(longlong)iVar8 + 1];
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
    uStack_74 = (uVar13 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_74) {
LAB_141eebf71:
      uStack_74 = uVar4;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    puVar6 = *(undefined8 **)(*plVar3 + (longlong)(int)uStack_4c * 0x10);
    if (*(char *)(puVar6 + 8) == '\0') {
      iVar8 = *(int *)(param_1 + 0xd8);
      *(int *)(param_1 + 0xd8) = iVar8 + 1;
      if (*(int *)(param_1 + 0xdc) < iVar8 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar2,iVar8);
      }
      puVar9 = (undefined8 *)((longlong)iVar8 * 0x60 + *plVar2);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar6 + 2);
        *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)((longlong)puVar6 + 0x14);
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar6 + 3);
        *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)((longlong)puVar6 + 0x1c);
        puVar9[4] = puVar6[4];
        *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar6 + 5);
        *(undefined4 *)((longlong)puVar9 + 0x2c) = *(undefined4 *)((longlong)puVar6 + 0x2c);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar6 + 6);
        puVar9[7] = puVar6[7];
        *(undefined1 *)(puVar9 + 8) = *(undefined1 *)(puVar6 + 8);
        puVar9[9] = puVar6[9];
        *(undefined1 *)(puVar9 + 10) = *(undefined1 *)(puVar6 + 10);
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141eec070 FUN_141eec070 body=108 status=ok
// SIG undefined FUN_141eec070(void)

ulonglong FUN_141eec070(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x180))();
  if ((char)uVar3 == '\0') {
    uVar3 = param_1[2];
    lVar2 = *(longlong *)(uVar3 + 200);
    if (lVar2 != 0) {
      lVar4 = UBlueprint::GetPrivateStaticClass();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(lVar4 + 0x90);
      uVar3 = (longlong)iVar1;
      if ((*(int *)(lVar2 + 0x90) < iVar1) ||
         (uVar3 = *(ulonglong *)(lVar2 + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
        uVar3 = uVar3 & 0xffffffffffffff00;
      }
      else {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((char)uVar3 != '\0') goto LAB_141eec0d4;
    }
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
LAB_141eec0d4:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141eec0e0 FUN_141eec0e0 body=570 status=ok
// SIG undefined FUN_141eec0e0(void)

float * FUN_141eec0e0(longlong param_1,undefined8 *param_2,float param_3,longlong param_4,
                     float param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  float *pfVar5;
  undefined8 *puVar6;
  uint uVar7;
  float *pfVar8;
  float *local_res8;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48;
  
  pfVar5 = (float *)operator_new(0x60);
  pfVar8 = (float *)0x0;
  if (pfVar5 != (float *)0x0) {
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    pfVar5[2] = 0.0;
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[7] = 1.0;
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
    pfVar5[10] = 0.0;
    pfVar5[0xb] = 0.0;
    pfVar5[0xc] = 1.0;
    pfVar5[0xe] = 0.0;
    pfVar5[0xf] = 0.0;
    *(undefined1 *)(pfVar5 + 0x10) = 0;
    pfVar5[0x12] = 0.0;
    pfVar5[0x13] = 0.0;
    *(undefined1 *)(pfVar5 + 0x14) = 1;
    pfVar8 = pfVar5;
  }
  *(undefined8 *)pfVar8 = *param_2;
  pfVar8[2] = *(float *)(param_2 + 1);
  local_60 = 0;
  uVar7 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x144) >> 0x20) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x148) = uVar7;
  fVar4 = (float)(uVar7 & 0x7fffff | 0x3f800000);
  local_64 = (float)(-(uint)((*(uint *)(param_4 + 0xac) & 1) != 0) & 0x168) *
             (fVar4 - (float)(int)fVar4);
  fVar4 = (float)(uVar7 * 0x338435 + 0x19636b & 0x7fffff | 0x3f800000);
  local_68 = (fVar4 - (float)(int)fVar4) * *(float *)(param_4 + 0xb0);
  puVar6 = (undefined8 *)FRotator::Quaternion(&local_68,&local_58);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  pfVar8[0xb] = param_5;
  *(undefined8 *)(pfVar8 + 4) = uVar1;
  *(undefined8 *)(pfVar8 + 6) = uVar2;
  *(longlong *)(pfVar8 + 0xe) = param_4;
  pfVar8[0xc] = param_3;
  pfVar8[8] = 0.0;
  pfVar8[9] = 0.0;
  pfVar8[10] = 1.0;
  *(undefined1 *)(pfVar8 + 0x10) = param_6;
  local_54 = param_3 * *(float *)(param_4 + 0x2f8);
  param_3 = param_3 * *(float *)(param_4 + 0x2f4);
  local_48 = 1;
  if (local_54 <= param_3) {
    local_54 = param_3;
  }
  local_50 = local_54 + *pfVar8;
  local_4c = local_54 + pfVar8[1];
  local_58 = *pfVar8 - local_54;
  local_54 = pfVar8[1] - local_54;
  local_res8 = pfVar8;
  TQuadTree<FProceduralFoliageInstance_*,4>::InsertElementRecursive
            (param_1 + 0xe8,&local_res8,&local_58);
  cVar3 = FUN_141eeb910(param_1,pfVar8);
  pfVar5 = (float *)0x0;
  if (cVar3 != '\0') {
    pfVar5 = pfVar8;
  }
  return pfVar5;
}



// FUNCTION 141eec320 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_141eedc80(param_1);
  return;
}



// FUNCTION 141eec340 FUN_141eec340 body=35 status=ok
// SIG undefined FUN_141eec340(void)

void FUN_141eec340(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 400) = *puVar2;
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  return;
}



// FUNCTION 141eec370 FUN_141eec370 body=2186 status=ok
// SIG undefined FUN_141eec370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141eec370(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  ulonglong local_2d0;
  longlong local_2c8 [2];
  int local_2b8;
  uint uStack_2b4;
  uint *puStack_2b0;
  undefined4 local_2a8;
  uint uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  short *local_278;
  int local_270;
  undefined8 local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong *local_250;
  longlong *local_248;
  int iStack_240;
  uint uStack_23c;
  uint *local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  longlong *local_220;
  undefined4 *local_218;
  uint local_200;
  uint uStack_1fc;
  longlong *local_1f0;
  longlong *plStack_1e8;
  uint *puStack_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  FUN_1422384a0();
  lVar6 = AActor::GetLevel(param_1);
  cVar5 = FWeakObjectPtr::IsValid(lVar6 + 0x230);
  if (cVar5 == '\0') {
    FWeakObjectPtr::operator=(lVar6 + 0x230,param_1);
  }
  else {
    local_b8 = 0;
    local_88 = 0xffffffff;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    lVar6 = UObjectBaseUtility::GetOutermost(lVar6);
    local_290 = *(undefined8 *)(lVar6 + 0x18);
    FName::ToString(&local_290,&local_278);
    local_2d0 = 0;
    psVar14 = &DAT_143f3eda8;
    if (local_270 != 0) {
      psVar14 = local_278;
    }
    local_2d8 = 0;
    if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar14[lVar6] != 0);
      uVar13 = (int)lVar6 + 1;
      local_2d0 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
      }
      FGenericPlatformString::Memcpy(local_2d8,psVar14,(longlong)(int)uVar13 * 2);
    }
    uVar7 = FText::FromString(local_178,&local_2d8);
    local_68[0] = 4;
    FText::FText(local_58,uVar7);
    local_40 = '\x01';
    local_2c8[0] = 0;
    local_2c8[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8,0);
    FGenericPlatformString::Memcpy(local_2c8[0],L"Level",0xc);
    local_220 = local_2c8;
    local_218 = local_68;
    FUN_1407484b0(&local_b8,local_298,&local_220,0);
    if (local_2c8[0] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar17 = local_50 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_170 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    if (local_278 != (short *)0x0) {
      FMemory::Free();
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (&local_1f0,
                       L"Level {Level} has an unexpected duplicate Instanced Foliage Actor.",
                       L"InstancedFoliage",L"MapCheck_DuplicateInstancedFoliageActor");
    uVar7 = FTextFormat::FTextFormat(local_118,uVar7);
    uVar7 = FText::Format(local_130,uVar7,&local_b8);
    puVar8 = (undefined8 *)FUN_140973510(local_188,uVar7);
    local_258 = *puVar8;
    local_250 = (longlong *)puVar8[1];
    if (local_250 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_250 + 1) = (int)local_250[1] + 1;
      UNLOCK();
    }
    uVar7 = FText::FText(local_148);
    puVar8 = (undefined8 *)FUN_1416ed870(local_198,param_1,uVar7);
    local_268 = *puVar8;
    local_260 = (longlong *)puVar8[1];
    if (local_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_260 + 1) = (int)local_260[1] + 1;
      UNLOCK();
    }
    FName::FName(local_288,"MapCheck",1);
    uVar7 = FText::FText(local_160);
    uVar9 = FUN_14161fb50(local_108,local_288);
    puVar8 = (undefined8 *)FMessageLog::Warning(uVar9,local_1a8,uVar7);
    puVar8 = (undefined8 *)FUN_141621960(*puVar8,local_1b8,&local_268);
    FUN_141621960(*puVar8,local_1c8,&local_258);
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_1c0 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_1b0 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_1a0 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_108);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_158 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    plVar17 = local_260;
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_260 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_190 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_140 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    plVar17 = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_250 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_180 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_128 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (plStack_1e8 != (longlong *)0x0) {
      LOCK();
      plVar17 = plStack_1e8 + 1;
      lVar6 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_1e8)(plStack_1e8);
        LOCK();
        piVar1 = (int *)((longlong)plStack_1e8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_1e8 + 8))(plStack_1e8,1);
        }
      }
    }
    FName::FName(local_280,"MapCheck",1);
    uVar7 = FUN_14161fb50(local_e0,local_280);
    FMessageLog::Open(uVar7,3);
    FMessageLog::~FMessageLog(local_e0);
    local_70 = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
  }
  if (*DAT_146ac4048 != 0) {
    plVar17 = (longlong *)(param_1 + 0x458);
    uVar13 = *(uint *)(param_1 + 0x480);
    puVar2 = (uint *)(param_1 + 0x468);
    uStack_2b4 = 1;
    local_2b8 = 0;
    uStack_2a4 = 0;
    iStack_2a0 = 0;
    if (uVar13 != 0) {
      puVar16 = *(uint **)(param_1 + 0x478);
      if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      uVar15 = *puVar16;
      local_2b8 = 0;
      iStack_2a0 = 0;
      while (uVar15 == 0) {
        lVar6 = (longlong)local_2b8;
        iStack_2a0 = iStack_2a0 + 0x20;
        iVar11 = local_2b8 + 1;
        bVar4 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_2b8;
        local_2b8 = iVar11;
        if (bVar4) goto LAB_141eeca72;
        uVar15 = puVar16[lVar6 + 1];
      }
      uStack_2b4 = -uVar15 & uVar15;
      iVar11 = 0x1f;
      if (uStack_2b4 != 0) {
        for (; uStack_2b4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_2b4 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_2a4 = (iStack_2a0 - iVar11) + 0x1f;
      if ((int)uVar13 < (int)uStack_2a4) {
LAB_141eeca72:
        uStack_2a4 = uVar13;
      }
    }
    local_2a8 = 0xffffffff;
    uStack_1fc = *(uint *)(param_1 + 0x480);
    plStack_1e8 = (longlong *)CONCAT44(uStack_2b4,local_2b8);
    uStack_230 = 0xffffffff;
    uStack_22c = uStack_2a4;
    local_228 = CONCAT44(uStack_29c,iStack_2a0);
    local_200 = -1 << ((byte)uStack_1fc & 0x1f);
    uVar15 = uStack_1fc & 0xffffffe0;
    iStack_240 = local_2b8;
    uStack_23c = uStack_2b4;
    puStack_2b0 = puVar2;
    local_238 = puVar2;
    local_1f0 = plVar17;
    puStack_1e0 = puVar2;
    uStack_1d0 = local_228;
    local_248 = plVar17;
    uStack_1d8 = uStack_230;
    uStack_1d4 = uStack_22c;
    uVar12 = uStack_1fc;
    if (uStack_1fc != uVar13) {
      puVar16 = *(uint **)(param_1 + 0x478);
      if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      uVar12 = puVar16[(int)uStack_1fc >> 5] & local_200;
      iVar11 = (int)uStack_1fc >> 5;
      while (uVar12 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_141eecb42;
        uVar12 = puVar16[(longlong)iVar11 + 1];
        local_200 = 0xffffffff;
        iVar11 = iVar11 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar11 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_1fc = (uVar15 - iVar11) + 0x1f;
      uVar12 = uStack_1fc;
      if ((int)uVar13 < (int)uStack_1fc) {
LAB_141eecb42:
        uStack_1fc = uVar13;
        uVar12 = uVar13;
      }
    }
    while (((uStack_22c != uVar12 || (local_238 != puVar2)) || (local_248 != plVar17))) {
      plVar3 = (longlong *)(*local_248 + (longlong)(int)uStack_22c * 0x18);
      plVar10 = *(longlong **)(*local_248 + 8 + (longlong)(int)uStack_22c * 0x18);
      if ((*plVar10 != 0) && ((*plVar3 == 0 || ((*(uint *)(*plVar3 + 0x3ac) & 0x10000) != 0)))) {
        FUN_1417510e0();
        (**(code **)(**(longlong **)plVar3[1] + 0x3b0))(*(longlong **)plVar3[1],0);
        plVar10 = (longlong *)plVar3[1];
      }
      *plVar10 = 0;
      uStack_230 = uStack_230 & ~uStack_23c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_240);
    }
  }
  return;
}



// FUNCTION 141eecc00 FUN_141eecc00 body=27 status=ok
// SIG undefined FUN_141eecc00(void)

void FUN_141eecc00(undefined8 param_1)

{
  FUN_1422384a0();
  FUN_141eedc80(param_1);
  return;
}



// FUNCTION 141eecc20 FUN_141eecc20 body=132 status=ok
// SIG undefined FUN_141eecc20(void)

void FUN_141eecc20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  ACharactor_LBBase::BeginPlay();
  *(undefined4 *)(param_1 + 0x448) = 3;
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0x460) = 1;
  *(undefined1 *)(param_1 + 0x451) = 1;
  plVar2 = *(longlong **)(param_1 + 0x818);
  uVar4 = (longlong)*(int *)(param_1 + 0x820) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x820) < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x98) = 3;
        *(undefined1 *)(lVar1 + 0xb0) = 1;
        *(undefined1 *)(lVar1 + 0xa1) = 1;
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 141eeccb0 PostSerialize body=128 status=ok
// SIG undefined PostSerialize(void)

void FFoliageTypeObject::PostSerialize(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(param_2 + 0x40) < 0x1c1) && (param_1[3] != 0)) {
    lVar2 = FUN_141ef08c0();
    lVar4 = param_1[3];
    lVar3 = lVar4;
    if (lVar4 != 0) {
      while (lVar3 != lVar2) {
        plVar1 = (longlong *)(lVar3 + 0x30);
        lVar3 = *plVar1;
        if (*plVar1 == 0) {
          return;
        }
      }
      if (lVar4 != 0) {
        if (lVar4 != 0) {
          lVar2 = FUN_141ef08c0();
          lVar4 = param_1[3];
          for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar2) goto LAB_141eecd20;
          }
        }
        lVar4 = 0;
LAB_141eecd20:
        *param_1 = *(undefined8 *)(lVar4 + 200);
      }
    }
  }
  return;
}



// FUNCTION 141eecd30 FUN_141eecd30 body=1554 status=ok
// SIG undefined FUN_141eecd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eecd30(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  void *_Src;
  longlong *plVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
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
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_128;
  ulonglong local_120;
  void *local_118;
  int local_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  int *local_d8 [3];
  longlong *local_c0;
  float *local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  fVar30 = in_XMM1._0_4_;
  FUN_142394ef0(param_1,param_2,param_3,param_4,param_5);
  if (fVar30 != 0.0) {
    plVar15 = (longlong *)0x0;
    if (param_3[1] != 0) {
      lVar6 = UDamageType::GetPrivateStaticClass();
      lVar14 = param_3[1];
joined_r0x000141eecdad:
      if (lVar14 != 0) {
        if (lVar14 != lVar6) goto code_r0x000141eecdb9;
        if (param_3[1] != 0) {
          plVar8 = (longlong *)UDamageType::GetPrivateStaticClass();
          for (plVar9 = (longlong *)param_3[1];
              (plVar7 = plVar15, plVar9 != (longlong *)0x0 &&
              (plVar7 = (longlong *)param_3[1], plVar9 != plVar8)); plVar9 = (longlong *)plVar9[6])
          {
          }
          local_138 = plVar7[0x1f];
          if (local_138 == 0) {
            (**(code **)(*plVar7 + 0x368))(plVar7);
            goto LAB_141eecde7;
          }
          goto LAB_141eecdf3;
        }
      }
    }
    plVar7 = (longlong *)UDamageType::GetPrivateStaticClass();
    local_138 = plVar7[0x1f];
    if (local_138 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
LAB_141eecde7:
      local_138 = plVar7[0x1f];
    }
LAB_141eecdf3:
    lVar14 = local_138;
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,1);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_3 + 0x10))(param_3,2);
      if (cVar3 != '\0') {
        local_c0 = param_3 + 2;
        fVar30 = *(float *)((longlong)param_3 + 0x1c);
        if (*(float *)((longlong)param_3 + 0x1c) <= *(float *)(param_3 + 3)) {
          fVar30 = *(float *)(param_3 + 3);
        }
        pfVar11 = (float *)((longlong)param_3 + 0x24);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        local_b8 = pfVar11;
        uVar4 = (**(code **)(*param_1 + 0x9a8))(param_1,local_d8,pfVar11,fVar30,1);
        if ((int)local_d8[1] != 0) {
          auVar17 = *(undefined1 (*) [16])(param_1 + 0x46);
          fVar22 = auVar17._0_4_;
          fVar23 = auVar17._4_4_;
          fVar24 = auVar17._8_4_;
          fVar25 = auVar17._12_4_;
          auVar2._4_4_ = -(uint)(fRam0000000146ac4074 < (float)((uint)fVar23 & uRam0000000146ac3f94)
                                );
          auVar2._0_4_ = -(uint)(_DAT_146ac4070 < (float)((uint)fVar22 & _DAT_146ac3f90));
          auVar2._8_4_ = -(uint)(fRam0000000146ac4078 < (float)((uint)fVar24 & uRam0000000146ac3f98)
                                );
          auVar2._12_4_ =
               -(uint)(fRam0000000146ac407c < (float)((uint)fVar25 & uRam0000000146ac3f9c));
          iVar5 = movmskps(uVar4,auVar2);
          fVar31 = _DAT_1468b5b70;
          fVar32 = fRam00000001468b5b74;
          fVar33 = fRam00000001468b5b78;
          fVar34 = fRam00000001468b5b7c;
          fVar16 = _DAT_1468b5b90;
          fVar19 = fRam00000001468b5b94;
          fVar20 = fRam00000001468b5b98;
          fVar21 = fRam00000001468b5b9c;
          local_a8 = _DAT_1468b5b80;
          fStack_a4 = fRam00000001468b5b84;
          fStack_a0 = fRam00000001468b5b88;
          fStack_9c = fRam00000001468b5b8c;
          if (iVar5 != 0) {
            fVar31 = _DAT_146ac4060 * *(float *)(param_1 + 0x42);
            fVar32 = fRam0000000146ac4064 * *(float *)((longlong)param_1 + 0x214);
            fVar33 = fRam0000000146ac4068 * *(float *)(param_1 + 0x43);
            fVar34 = fRam0000000146ac406c * *(float *)((longlong)param_1 + 0x21c);
            auVar17 = rcpps(in_XMM1,auVar17);
            fVar16 = auVar17._0_4_;
            fVar19 = auVar17._4_4_;
            fVar20 = auVar17._8_4_;
            fVar21 = auVar17._12_4_;
            fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar22;
            fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar23;
            fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar24;
            fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar25;
            fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar22;
            fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar23;
            fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar24;
            fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar25;
            fVar16 = (float)(((uint)fVar16 &
                              -(uint)((float)((uint)fVar22 & _DAT_146ac3f90) <= _DAT_146ac4070) ^
                             (uint)fVar16) & _DAT_146ac3fe0);
            fVar19 = (float)(((uint)fVar19 &
                              -(uint)((float)((uint)fVar23 & uRam0000000146ac3f94) <=
                                     fRam0000000146ac4074) ^ (uint)fVar19) & uRam0000000146ac3fe4);
            fVar20 = (float)(((uint)fVar20 &
                              -(uint)((float)((uint)fVar24 & uRam0000000146ac3f98) <=
                                     fRam0000000146ac4078) ^ (uint)fVar20) & uRam0000000146ac3fe8);
            fVar21 = (float)(((uint)fVar21 &
                              -(uint)((float)((uint)fVar25 & uRam0000000146ac3f9c) <=
                                     fRam0000000146ac407c) ^ (uint)fVar21) & uRam0000000146ac3fec);
            fVar26 = *(float *)(param_1 + 0x44) * fVar16;
            fVar27 = *(float *)((longlong)param_1 + 0x224) * fVar19;
            fVar28 = *(float *)(param_1 + 0x45) * fVar20;
            fVar29 = *(float *)((longlong)param_1 + 0x22c) * fVar21;
            fVar22 = fVar28 * fVar32 - fVar27 * fVar33;
            fVar23 = fVar26 * fVar33 - fVar28 * fVar31;
            fVar24 = fVar27 * fVar31 - fVar26 * fVar32;
            fVar25 = fVar29 * fVar34 - fVar29 * fVar34;
            fVar22 = fVar22 + fVar22;
            fVar23 = fVar23 + fVar23;
            fVar24 = fVar24 + fVar24;
            fVar25 = fVar25 + fVar25;
            local_a8 = (float)((uint)(0.0 - ((fVar24 * fVar32 - fVar23 * fVar33) +
                                            fVar34 * fVar22 + fVar26)) & _DAT_146ac3fe0);
            fStack_a4 = (float)((uint)(0.0 - ((fVar22 * fVar33 - fVar24 * fVar31) +
                                             fVar34 * fVar23 + fVar27)) & uRam0000000146ac3fe4);
            fStack_a0 = (float)((uint)(0.0 - ((fVar23 * fVar31 - fVar22 * fVar32) +
                                             fVar34 * fVar24 + fVar28)) & uRam0000000146ac3fe8);
            fStack_9c = (float)((uint)(0.0 - ((fVar25 * fVar34 - fVar25 * fVar34) +
                                             fVar34 * fVar25 + fVar29)) & uRam0000000146ac3fec);
          }
          fVar16 = *pfVar11 * fVar16;
          fVar19 = *(float *)(param_3 + 5) * fVar19;
          fVar20 = *(float *)((longlong)param_3 + 0x2c) * fVar20;
          fVar21 = fVar21 * 0.0;
          local_148 = (void *)0x0;
          local_140 = 0;
          fVar22 = fVar20 * fVar32 - fVar19 * fVar33;
          fVar23 = fVar16 * fVar33 - fVar20 * fVar31;
          fVar24 = fVar19 * fVar31 - fVar16 * fVar32;
          fVar25 = fVar21 * fVar34 - fVar21 * fVar34;
          fVar22 = fVar22 + fVar22;
          fVar23 = fVar23 + fVar23;
          fVar24 = fVar24 + fVar24;
          fVar25 = fVar25 + fVar25;
          local_98 = *(float *)(param_1 + 0x46);
          uStack_94 = *(undefined4 *)((longlong)param_1 + 0x234);
          uStack_90 = (undefined4)param_1[0x47];
          uStack_8c = *(undefined4 *)((longlong)param_1 + 0x23c);
          local_a8 = (fVar24 * fVar32 - fVar23 * fVar33) + fVar34 * fVar22 + fVar16 + local_a8;
          fStack_a4 = (fVar22 * fVar33 - fVar24 * fVar31) + fVar34 * fVar23 + fVar19 + fStack_a4;
          fStack_a0 = (fVar23 * fVar31 - fVar22 * fVar32) + fVar34 * fVar24 + fVar20 + fStack_a0;
          fStack_9c = (fVar25 * fVar34 - fVar25 * fVar34) + fVar34 * fVar25 + fVar21 + fStack_9c;
          TArray<float,FDefaultAllocator>::ResizeTo(&local_148);
          fVar25 = local_98;
          fVar24 = fStack_a0;
          fVar23 = fStack_a4;
          fVar22 = local_a8;
          uVar12 = (uint)local_d8[1];
          plVar9 = (longlong *)
                   ((ulonglong)((longlong)(local_d8[0] + (int)uVar12) + (3 - (longlong)local_d8[0]))
                   >> 2);
          if (local_d8[0] + (int)uVar12 < local_d8[0]) {
            plVar9 = (longlong *)0x0;
          }
          piVar13 = local_d8[0];
          _Src = local_148;
          iVar5 = (int)local_140;
          iVar10 = (int)local_140;
          if (plVar9 != (longlong *)0x0) {
            do {
              pfVar11 = (float *)(param_1[0xf5] + 0x10 + (longlong)*piVar13 * 0x30);
              fVar31 = pfVar11[1];
              auVar17._4_4_ = fVar31;
              auVar17._0_4_ = fVar31;
              auVar17._8_4_ = fVar31;
              auVar17._12_4_ = fVar31;
              auVar18._4_12_ = auVar17._4_12_;
              auVar18._0_4_ =
                   SQRT((fVar31 - fVar23) * (fVar31 - fVar23) +
                        (*pfVar11 - fVar22) * (*pfVar11 - fVar22) +
                        (pfVar11[2] - fVar24) * (pfVar11[2] - fVar24)) * fVar25;
              uVar4 = FRadialDamageParams::GetDamageScale(local_c0,auVar18._0_8_);
              iVar5 = iVar10 + 1;
              local_140 = CONCAT44(local_140._4_4_,iVar5);
              if (local_140._4_4_ < iVar5) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_148);
                _Src = local_148;
                iVar5 = (int)local_140;
              }
              *(undefined4 *)((longlong)_Src + (longlong)iVar10 * 4) = uVar4;
              plVar15 = (longlong *)((longlong)plVar15 + 1);
              piVar13 = piVar13 + 1;
              iVar10 = iVar5;
            } while (plVar15 != plVar9);
            uVar12 = (uint)local_d8[1];
            lVar14 = local_138;
          }
          piVar13 = local_d8[0];
          uVar1 = *(undefined8 *)local_b8;
          fVar22 = local_b8[2];
          local_128 = (void *)0x0;
          local_118 = (void *)0x0;
          local_110 = 0;
          iStack_10c = 0;
          local_120 = (ulonglong)uVar12;
          if (uVar12 != 0) {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_128,uVar12,0);
            _guard_xfg_dispatch_icall_nop(local_128,piVar13,(longlong)(int)uVar12 << 2);
          }
          local_110 = iVar5;
          if ((iVar5 == 0) && (iStack_10c == 0)) {
            iStack_10c = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_118,iVar5);
            _guard_xfg_dispatch_icall_nop(local_118,_Src,(longlong)iVar5 << 2);
          }
          uStack_108 = (undefined4)param_4;
          uStack_104 = (undefined4)((ulonglong)param_4 >> 0x20);
          local_e8 = param_5;
          local_f8 = CONCAT44(fVar30,fVar22);
          local_100 = uVar1;
          local_f0 = lVar14;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 299,&local_128);
          if (local_118 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_128 != (void *)0x0) {
            FMemory::Free();
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
        }
        if (local_d8[0] != (int *)0x0) {
          FMemory::Free();
        }
      }
    }
    else {
      iVar5 = (int)param_3[0x10];
      if ((-1 < iVar5) && (iVar5 < (int)param_1[0xf6])) {
        local_118 = (void *)param_3[8];
        local_110 = (int)param_3[9];
        uStack_104 = *(undefined4 *)((longlong)param_3 + 0x1c);
        iStack_10c = (int)*(undefined8 *)((longlong)param_3 + 0x14);
        uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x14) >> 0x20);
        local_128 = (void *)CONCAT44(fVar30,iVar5);
        local_f8 = param_5;
        local_120 = param_4;
        local_100 = lVar14;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x129,&local_128);
      }
    }
  }
  return;
code_r0x000141eecdb9:
  lVar14 = *(longlong *)(lVar14 + 0x30);
  goto joined_r0x000141eecdad;
}



// FUNCTION 141eed350 Remove body=262 status=ok
// SIG undefined Remove(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TQuadTree<FProceduralFoliageInstance_*,4>::Remove
               (longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar3 = GetQuads(param_1,param_3,local_58);
  iVar10 = (int)param_1[1];
  uVar7 = 0;
  if (0 < iVar10) {
    lVar1 = *param_1;
    plVar5 = (longlong *)(lVar1 + 0x18);
    uVar6 = uVar7;
    uVar9 = uVar7;
    do {
      iVar8 = (int)uVar9;
      if (*plVar5 == *param_2) {
        if (iVar8 != -1) {
          iVar4 = (iVar10 - iVar8) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x20 + lVar1),
                       (void *)((longlong)(iVar10 - iVar4) * 0x20 + lVar1),(longlong)iVar4 << 5);
            iVar10 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar10 + -1;
          cVar2 = '\x01';
          goto LAB_141eed3be;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 4;
    } while ((longlong)uVar6 < (longlong)iVar10);
  }
  cVar2 = '\0';
LAB_141eed3be:
  if (0 < (longlong)iVar3) {
    do {
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = Remove(local_58[uVar7],param_2,param_3);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar3);
  }
  return;
}



// FUNCTION 141eed460 FUN_141eed460 body=121 status=ok
// SIG undefined FUN_141eed460(void)

void FUN_141eed460(undefined8 param_1,float *param_2)

{
  float fVar1;
  float *local_res10 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18;
  
  fVar1 = param_2[0xc] * *(float *)(*(longlong *)(param_2 + 0xe) + 0x2f4);
  local_24 = param_2[0xc] * *(float *)(*(longlong *)(param_2 + 0xe) + 0x2f8);
  local_18 = 1;
  if (local_24 <= fVar1) {
    local_24 = fVar1;
  }
  local_20 = *param_2 + local_24;
  local_1c = param_2[1] + local_24;
  local_28 = *param_2 - local_24;
  local_24 = param_2[1] - local_24;
  local_res10[0] = param_2;
  TQuadTree<FProceduralFoliageInstance_*,4>::Remove(local_1c,local_res10,&local_28);
  return;
}



// FUNCTION 141eed4e0 FUN_141eed4e0 body=676 status=ok
// SIG undefined FUN_141eed4e0(void)

void FUN_141eed4e0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  undefined1 local_res8 [8];
  float *local_res10;
  float *local_res18 [2];
  float local_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  float fStack_80;
  float fStack_7c;
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
  
  fStack_a4 = 1.4013e-45;
  plVar2 = (longlong *)(param_1 + 0x80);
  local_a8 = 0.0;
  uVar3 = *(uint *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x90);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0.0;
    while (uVar4 == 0) {
      lVar8 = (longlong)(int)local_a8;
      iStack_90 = iStack_90 + 0x20;
      fVar10 = (float)((int)local_a8 + 1);
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8 = fVar10;
      if (bVar6) goto LAB_141eed5ae;
      uVar4 = puVar12[lVar8 + 1];
    }
    fStack_a4 = (float)(-uVar4 & uVar4);
    iVar7 = 0x1f;
    if (fStack_a4 != 0.0) {
      for (; (uint)fStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (fStack_a4 == 0.0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (iStack_90 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_141eed5ae:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xa8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(fStack_a4,local_a8);
  local_98 = -1 << ((byte)uVar4 & 0x1f);
  uVar11 = uVar4 & 0xffffffe0;
  fStack_80 = local_a8;
  fStack_7c = fStack_a4;
  uStack_a0 = puVar1;
  uStack_94 = uVar4;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = plVar2;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & local_98;
    iVar7 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141eed674;
      uVar9 = puVar12[(longlong)iVar7 + 1];
      local_98 = 0xffffffff;
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
    uStack_94 = (uVar11 - iVar7) + 0x1f;
    uVar4 = uStack_94;
    if ((int)uVar3 < (int)uStack_94) {
LAB_141eed674:
      uStack_94 = uVar3;
      uVar4 = uVar3;
    }
  }
  while (((uStack_6c != uVar4 || (local_78 != puVar1)) || (local_88 != plVar2))) {
    pfVar5 = *(float **)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    local_res18[0] = pfVar5;
    if (*(char *)(pfVar5 + 0x14) != '\0') {
      fVar13 = pfVar5[0xc] * *(float *)(*(longlong *)(pfVar5 + 0xe) + 0x2f4);
      fVar10 = pfVar5[0xc] * *(float *)(*(longlong *)(pfVar5 + 0xe) + 0x2f8);
      local_98 = CONCAT31(local_98._1_3_,1);
      if (fVar10 <= fVar13) {
        fVar10 = fVar13;
      }
      local_a8 = *pfVar5 - fVar10;
      fStack_a4 = pfVar5[1] - fVar10;
      uStack_a0 = (uint *)CONCAT44(pfVar5[1] + fVar10,*pfVar5 + fVar10);
      local_res10 = pfVar5;
      TQuadTree<FProceduralFoliageInstance_*,4>::Remove(param_1 + 0xe8,&local_res10,&local_a8);
      *(undefined1 *)(pfVar5 + 0x14) = 0;
      FUN_14174ab50(param_1 + 0x30,local_res8,local_res18,0);
    }
    uStack_70 = uStack_70 & ~(uint)fStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_80);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0xd0,0);
  }
  FUN_141eea240(param_1);
  return;
}



// FUNCTION 141eed790 FUN_141eed790 body=417 status=ok
// SIG undefined FUN_141eed790(void)

void FUN_141eed790(longlong param_1,uint param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res18 [16];
  longlong local_38;
  undefined8 local_30;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40);
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x48) * 0x20 + lVar6;
  uVar3 = 0;
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
    lVar2 = *(longlong *)(lVar6 + 8);
    uVar9 = uVar3;
    if (lVar2 != 0) {
      if ((*(char *)(lVar2 + 0x318) == '\0') || (*(char *)(lVar2 + 0x319) == '\0')) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x01';
      }
      if ((cVar7 == param_3) &&
         (uVar4 = *(int *)(lVar2 + 0x2fc) + 1, uVar9 = (ulonglong)uVar4, (int)uVar4 <= (int)uVar3))
      {
        uVar9 = uVar3;
      }
    }
    uVar3 = uVar9;
  }
  uVar9 = uVar3;
  if ((-1 < (int)param_2) && (uVar9 = (ulonglong)param_2, (int)uVar3 <= (int)param_2)) {
    uVar9 = uVar3;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(char *)(param_1 + 0x14c) = param_3;
  if (0 < (int)uVar9) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 == *(int *)(param_1 + 0x150)) {
        local_38 = 0;
        local_30 = 0;
        if (*(int *)(param_1 + 0xe0) == 0) {
          FUN_141ee88b0(param_1,&local_38);
        }
        else {
          FUN_141ee94e0(param_1);
          FUN_141eeeee0(param_1,&local_38);
        }
        iVar5 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4);
        lVar6 = (longlong)(int)local_30;
        if (iVar5 < iVar5 + (int)local_30) {
          FUN_1405effc0(param_1 + 0x80);
        }
        lVar2 = local_38;
        lVar6 = local_38 + lVar6 * 8;
        for (lVar8 = local_38; lVar8 != lVar6; lVar8 = lVar8 + 8) {
          FUN_14174ab50(param_1 + 0x80,local_res18,lVar8,0);
        }
        FUN_141eea240(param_1);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  UProceduralFoliageTile::InstancesToArray(param_1);
  return;
}



// FUNCTION 141eed940 FUN_141eed940 body=300 status=ok
// SIG undefined FUN_141eed940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141eed940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  longlong local_e8 [24];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464cb0f0);
  if ((0x178 < *(int *)(param_2 + 0x40)) &&
     (iVar2 = FArchive::CustomVer(param_2,&DAT_1464cb0f0), 4 < iVar2)) {
    operator<<(param_2,param_1 + 0x458);
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464cb0f0);
  if (iVar2 < 1) {
    uVar5 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_141ee6e80(param_1,local_e8,0);
    plVar3 = local_e8;
    if (local_28 != (longlong *)0x0) {
      plVar3 = local_28;
    }
    uVar4 = (longlong)(int)local_20 & 0x1fffffffffffffff;
    if (plVar3 + (int)local_20 < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar3;
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
        *(byte *)(lVar1 + 0xb9) = *(byte *)(lVar1 + 0xb9) & 0xfb;
      } while (uVar5 != uVar4);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 141eeda70 FUN_141eeda70 body=359 status=ok
// SIG undefined FUN_141eeda70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eeda70(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464cb0f0);
  if (((((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(byte *)(param_2 + 0x28) & 0x40) != 0)) &&
      ((*(uint *)(param_2 + 0x30) & 0x401000) == 0)) &&
     (cVar2 = *(char *)(param_1 + 0x90), cVar2 != '\0')) {
    if (cVar2 == '\x01') {
      lVar4 = 0x60;
    }
    else if (cVar2 == '\x02') {
      lVar4 = 0x6c;
    }
    else if (cVar2 == '\x03') {
      lVar4 = 0x78;
    }
    else {
      if (cVar2 != '\x04') goto LAB_141eedb18;
      lVar4 = 0x84;
    }
    puVar1 = (uint *)(param_1 + lVar4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = *puVar1 | 1;
      puVar1[1] = *(uint *)(param_1 + 0x94);
      puVar1[2] = puVar1[2] ^ (*(uint *)(param_1 + 0x98) ^ puVar1[2]) & 1;
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
LAB_141eedb18:
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(int *)(param_1 + 0xd0) == 0)) {
    iVar3 = *(int *)(param_1 + 0xd0);
    *(int *)(param_1 + 0xd0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xd4) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 200,iVar3);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)iVar3 * 8) =
         *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_28 = _DAT_1464cb0f0;
    uStack_24 = uRam00000001464cb0f4;
    uStack_20 = uRam00000001464cb0f8;
    uStack_1c = uRam00000001464cb0fc;
    iVar3 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_28);
    if (iVar3 < 10) {
      *(byte *)(param_1 + 0x11c) = ~(*(char *)(param_1 + 0x128) * '\x02') & 2;
    }
  }
  return;
}



// FUNCTION 141eedbe0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464cb100);
  return;
}



// FUNCTION 141eedc10 SetStaticMesh body=83 status=ok
// SIG undefined SetStaticMesh(void)

void UFoliageType::SetStaticMesh(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\foliage\\public\\FoliageType.h",0x59,
             L"Pure virtual not implemented (%s)",L"UFoliageType::SetStaticMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,"d:\\oak\\main\\engine\\source\\runtime\\foliage\\public\\FoliageType.h"
             ,0x59,L"Pure virtual not implemented (%s)",L"UFoliageType::SetStaticMesh");
  return;
}



// FUNCTION 141eedc80 FUN_141eedc80 body=692 status=ok
// SIG undefined FUN_141eedc80(void)

void FUN_141eedc80(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  float fVar15;
  undefined8 uVar14;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [20];
  float local_44;
  float local_40;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x458) + 0x728);
  if (lVar2 != 0) {
    UStaticMesh::GetBounds(lVar2,local_58);
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x204);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x458) + 0x20c);
    fVar15 = (float)((ulonglong)local_68 >> 0x20);
    uVar14 = local_68;
    if ((float)local_68 <= fVar15) {
      uVar14 = CONCAT44(fVar15,fVar15);
    }
    local_60 = CONCAT44(local_60._4_4_,fVar1);
    FUN_14234feb0(*(undefined8 *)(param_1 + 0x468),
                  CONCAT44((int)((ulonglong)uVar14 >> 0x20),(float)uVar14 * local_40 * 0.7),
                  fVar1 * local_44,1);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AInteractiveFoliageActor::CapsuleTouched",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x468);
    plVar13 = (longlong *)(lVar2 + 0x570);
    lVar7 = *plVar13;
    iVar11 = *(int *)(lVar2 + 0x578);
    for (lVar12 = lVar7; lVar12 != (longlong)iVar11 * 0x10 + lVar7; lVar12 = lVar12 + 0x10) {
      if ((*(longlong *)(lVar12 + 8) == local_res8) &&
         (lVar6 = FWeakObjectPtr::GetEvenIfUnreachable(lVar12), param_1 == lVar6)) {
        iVar11 = (int)(lVar12 - lVar7 >> 4);
        if (iVar11 != -1) {
          iVar10 = *(int *)(lVar2 + 0x578);
          iVar8 = (iVar10 - iVar11) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x10 + *plVar13),
                       (void *)((longlong)(iVar10 - iVar8) * 0x10 + *plVar13),(longlong)iVar8 << 4);
            iVar10 = *(int *)(lVar2 + 0x578);
          }
          *(int *)(lVar2 + 0x578) = iVar10 + -1;
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AInteractiveFoliageActor::CapsuleTouched",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x468);
    plVar13 = (longlong *)(lVar2 + 0x570);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,param_1);
    local_res8 = 0;
    local_60 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_68), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_60);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
    iVar11 = *(int *)(lVar2 + 0x578);
    *(int *)(lVar2 + 0x578) = iVar11 + 1;
    if (*(int *)(lVar2 + 0x57c) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar11);
    }
    puVar9 = (undefined4 *)((longlong)iVar11 * 0x10 + *plVar13);
    *puVar9 = (undefined4)local_68;
    puVar9[1] = local_68._4_4_;
    *(longlong *)(puVar9 + 2) = local_60;
  }
  return;
}



// FUNCTION 141eedf40 FUN_141eedf40 body=611 status=ok
// SIG undefined FUN_141eedf40(void)

void FUN_141eedf40(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
          goto LAB_141eee0f7;
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
LAB_141eee0f7:
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



// FUNCTION 141eee1b0 FUN_141eee1b0 body=1860 status=ok
// SIG undefined FUN_141eee1b0(void)

void FUN_141eee1b0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *plStack_170;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  
  *(int *)(param_1 + 0xd) = (int)param_1[5];
  *(int *)((longlong)param_1 + 0x6c) = (int)param_1[5];
  UProceduralFoliageSpawner::CreateProceduralFoliageInstances();
  LOCK();
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  UNLOCK();
  iVar17 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  local_188 = (longlong *)0x0;
  local_180 = 0;
  if (0 < (int)param_1[6]) {
    do {
      plVar10 = (longlong *)0x0;
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = UProceduralFoliageTile::GetPrivateStaticClass();
      local_178 = (longlong *)FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
      uVar12 = *(int *)((longlong)param_1 + 0x6c) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)param_1 + 0x6c) = uVar12;
      fVar13 = (float)(uVar12 & 0x7fffff | 0x3f800000);
      LOCK();
      iStack_160 = (int)param_1[7];
      if (iStack_160 == 0) {
        *(int *)(param_1 + 7) = 0;
        iStack_160 = 0;
      }
      UNLOCK();
      local_d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      local_f8 = (longlong *)0x0;
      local_e8 = 0;
      local_168 = (int)((fVar13 - (float)(int)fVar13) * 32767.0);
      plStack_170 = param_1;
      uStack_164 = param_2;
      puVar8 = (undefined8 *)FUN_140438ef0(0x28,local_118);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_143ff7760;
        puVar8[1] = local_178;
        puVar8[2] = plStack_170;
        puVar8[3] = CONCAT44(uStack_164,local_168);
        puVar8[4] = CONCAT44(uStack_15c,iStack_160);
      }
      local_128[0] = UE4Function_Private::
                     TFunctionRefCaller<<lambda_60bd3e80d61781f46a0dff3974398c20>,UProceduralFoliageTile_*___cdecl(void)>
                     ::Call;
      plVar9 = (longlong *)operator_new(0x70);
      plVar15 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        FFutureState::FFutureState(plVar9,local_d8);
        plVar15 = plVar9;
      }
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_DestroyObject_144145d88;
        plVar9[2] = (longlong)plVar15;
        plVar10 = plVar9;
      }
      local_178 = plVar15;
      plStack_170 = plVar10;
      SharedPointerInternals::EnableSharedFromThis(&local_178,plVar15,plVar15);
      plVar15 = plStack_170;
      plVar10 = local_178;
      local_168 = CONCAT31(local_168._1_3_,1);
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)operator_new(0x80);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = &PTR_FUN_144ee31d0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_128);
        puVar8[0xc] = local_178;
        puVar8[0xd] = plStack_170;
        plStack_170 = (longlong *)0x0;
        local_150 = (longlong *)0x0;
        local_178 = (longlong *)0x0;
        local_158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_150);
        plVar9 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_150 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        *(undefined1 *)(puVar8 + 0xe) = (undefined1)local_168;
      }
      (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,puVar8);
      plVar9 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_170 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (local_e8 != 0) {
        plVar9 = local_118;
        if (local_f8 != (longlong *)0x0) {
          plVar9 = local_f8;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        plVar9 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar9 = local_a8;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      uVar4 = local_180;
      lVar16 = (longlong)(int)local_180;
      iVar6 = (int)local_180 + 1;
      local_180 = CONCAT44(local_180._4_4_,iVar6);
      if (local_180._4_4_ < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_188,uVar4 & 0xffffffff);
      }
      iVar17 = iVar17 + 1;
      local_188[lVar16 * 2] = (longlong)plVar10;
      local_188[lVar16 * 2 + 1] = (longlong)plVar15;
    } while (iVar17 < (int)param_1[6]);
  }
  plVar10 = local_188;
  plVar9 = param_1 + 0xb;
  iVar17 = 0;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_148,L"Simulate ProceduralFoliage...",L"ProceduralFoliage",
             L"SimulateProceduralFoliage");
  FUN_141664530(DAT_1468b6160,local_148,1);
  bVar3 = false;
  plVar15 = plVar10;
  if (0 < (int)local_180) {
    do {
      while( true ) {
        if (*plVar10 == 0) {
          bVar19 = false;
          lVar16 = 0;
        }
        else {
          plVar15 = *(longlong **)(*plVar10 + 0x50);
          cVar5 = (**(code **)(*plVar15 + 0x20))(plVar15,100,0);
          lVar16 = *plVar10;
          bVar19 = cVar5 != '\0';
        }
        if (bVar19) break;
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_88,L"Simulate ProceduralFoliage...",L"ProceduralFoliage",
                           L"SimulateProceduralFoliage");
        FUN_141682490(DAT_1468b6160,iVar17,local_180 & 0xffffffff,uVar7);
        plVar15 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        cVar5 = (**(code **)(*DAT_1468b6160 + 0x48))();
        if ((cVar5 != '\0') && (!bVar3)) {
          LOCK();
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
          UNLOCK();
          bVar3 = true;
        }
      }
      cVar5 = *(char *)(lVar16 + 0x58);
      while (cVar5 == '\0') {
        (**(code **)(**(longlong **)(lVar16 + 0x50) + 0x20))
                  (*(longlong **)(lVar16 + 0x50),0x5d638865);
        cVar5 = *(char *)(lVar16 + 0x58);
      }
      FWeakObjectPtr::operator=(&local_res20,*(undefined8 *)(lVar16 + 0x60));
      iVar6 = (int)param_1[0xc];
      *(int *)(param_1 + 0xc) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 100) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar6);
      }
      lVar16 = *plVar9;
      iVar17 = iVar17 + 1;
      plVar10 = plVar10 + 2;
      *(undefined4 *)(lVar16 + (longlong)iVar6 * 8) = local_res20;
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar6 * 8) = local_res24;
      plVar15 = local_188;
    } while (iVar17 < (int)local_180);
  }
  FUN_14166aae0(DAT_1468b6160);
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9,0);
    }
  }
  else {
    lVar16 = param_1[8];
    lVar18 = (longlong)(int)param_1[9] * 0x20 + lVar16;
    for (; lVar16 != lVar18; lVar16 = lVar16 + 0x20) {
      lVar14 = *(longlong *)(lVar16 + 8);
      if (lVar14 != 0) {
        plVar10 = *(longlong **)(lVar14 + 0x10);
        lVar11 = plVar10[0x1f];
        if (lVar11 == 0) {
          (**(code **)(*plVar10 + 0x368))(plVar10);
          lVar11 = plVar10[0x1f];
          lVar14 = *(longlong *)(lVar16 + 8);
        }
        *(undefined4 *)(lVar14 + 0x3a8) = *(undefined4 *)(lVar11 + 0x3a8);
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_140 + 1;
    lVar16 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar15 = local_188;
    if ((int)lVar16 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar15 = local_188;
      if (iVar17 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
        plVar15 = local_188;
      }
    }
  }
  if ((int)local_180 != 0) {
    plVar10 = plVar15 + 1;
    iVar17 = (int)local_180;
    do {
      plVar15 = (longlong *)*plVar10;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar15 + 1;
        lVar16 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar10 = plVar10 + 2;
      iVar17 = iVar17 + -1;
      plVar15 = local_188;
    } while (iVar17 != 0);
  }
  if (plVar15 != (longlong *)0x0) {
    FMemory::Free(plVar15);
  }
  return;
}



// FUNCTION 141eee900 Split body=1495 status=ok
// SIG undefined Split(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TQuadTree<FProceduralFoliageInstance_*,4>::Split(undefined8 *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  float *pfVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  float *local_100;
  longlong *local_f8 [4];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  fVar2 = *(float *)((longlong)param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 9);
  uVar14 = *(undefined8 *)((longlong)param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 6);
  fVar5 = *(float *)((longlong)param_1 + 0x34);
  uVar15 = param_1[6];
  fVar6 = *(float *)(param_1 + 7);
  fVar26 = (*(float *)(param_1 + 7) - fVar4) * 0.5;
  fVar7 = *(float *)((longlong)param_1 + 0x3c);
  fVar25 = (*(float *)((longlong)param_1 + 0x3c) - fVar5) * 0.5;
  fVar27 = fVar2 - fVar26;
  fVar28 = fVar3 + fVar25;
  local_100 = (float *)CONCAT44(local_100._4_4_,fVar2 + fVar26);
  fVar25 = fVar3 - fVar25;
  puVar17 = (undefined8 *)operator_new(0x58);
  puVar23 = (undefined8 *)0x0;
  puVar19 = puVar23;
  if (puVar17 != (undefined8 *)0x0) {
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x4c);
    *puVar17 = 0;
    puVar17[1] = 0;
    local_108 = CONCAT31(local_108._1_3_,1);
    *(float *)(puVar17 + 6) = fVar27;
    *(float *)((longlong)puVar17 + 0x34) = fVar3;
    *(float *)(puVar17 + 7) = fVar2;
    *(float *)((longlong)puVar17 + 0x3c) = fVar28;
    *(undefined4 *)(puVar17 + 8) = local_108;
    *(float *)((longlong)puVar17 + 0x44) = (fVar27 + fVar2) * 0.5;
    local_118 = (undefined8 *)CONCAT44(fVar3,fVar27);
    *(float *)(puVar17 + 9) = (fVar3 + fVar28) * 0.5;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar8;
    *(undefined1 *)(puVar17 + 10) = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar19 = puVar17;
    fStack_110 = fVar2;
    fStack_10c = fVar28;
  }
  param_1[2] = puVar19;
  puVar17 = (undefined8 *)operator_new(0x58);
  puVar19 = puVar23;
  if (puVar17 != (undefined8 *)0x0) {
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x4c);
    *puVar17 = 0;
    puVar17[1] = 0;
    local_108 = CONCAT31(local_108._1_3_,1);
    *(float *)(puVar17 + 6) = fVar2;
    *(float *)((longlong)puVar17 + 0x34) = fVar3;
    *(float *)(puVar17 + 7) = fVar6;
    *(float *)((longlong)puVar17 + 0x3c) = fVar7;
    *(undefined4 *)(puVar17 + 8) = local_108;
    *(float *)(puVar17 + 9) = (fVar7 + fVar3) * 0.5;
    *(float *)((longlong)puVar17 + 0x44) = (fVar6 + fVar2) * 0.5;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar8;
    *(undefined1 *)(puVar17 + 10) = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar19 = puVar17;
    local_118 = (undefined8 *)uVar14;
    fStack_110 = fVar6;
    fStack_10c = fVar7;
  }
  param_1[3] = puVar19;
  puVar17 = (undefined8 *)operator_new(0x58);
  puVar19 = puVar23;
  if (puVar17 != (undefined8 *)0x0) {
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x4c);
    *puVar17 = 0;
    puVar17[1] = 0;
    local_108 = CONCAT31(local_108._1_3_,1);
    *(float *)(puVar17 + 6) = fVar4;
    *(float *)((longlong)puVar17 + 0x34) = fVar5;
    *(float *)(puVar17 + 7) = fVar2;
    *(float *)((longlong)puVar17 + 0x3c) = fVar3;
    *(undefined4 *)(puVar17 + 8) = local_108;
    *(float *)((longlong)puVar17 + 0x44) = (fVar4 + fVar2) * 0.5;
    *(float *)(puVar17 + 9) = (fVar5 + fVar3) * 0.5;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar8;
    *(undefined1 *)(puVar17 + 10) = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar19 = puVar17;
    local_118 = (undefined8 *)uVar15;
    fStack_110 = fVar2;
    fStack_10c = fVar3;
  }
  param_1[4] = puVar19;
  puVar17 = (undefined8 *)operator_new(0x58);
  puVar19 = puVar23;
  if (puVar17 != (undefined8 *)0x0) {
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x4c);
    *puVar17 = 0;
    puVar17[1] = 0;
    local_108 = CONCAT31(local_108._1_3_,1);
    *(float *)(puVar17 + 6) = fVar2;
    *(float *)((longlong)puVar17 + 0x34) = fVar25;
    *(float *)(puVar17 + 7) = local_100._0_4_;
    *(float *)((longlong)puVar17 + 0x3c) = fVar3;
    *(undefined4 *)(puVar17 + 8) = local_108;
    *(float *)((longlong)puVar17 + 0x44) = (fVar2 + local_100._0_4_) * 0.5;
    fStack_110 = local_100._0_4_;
    *(float *)(puVar17 + 9) = (fVar25 + fVar3) * 0.5;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar8;
    *(undefined1 *)(puVar17 + 10) = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar19 = puVar17;
  }
  iVar18 = 0;
  param_1[5] = puVar19;
  *(undefined1 *)(param_1 + 10) = 1;
  pfVar21 = (float *)*param_1;
  pfVar22 = pfVar21 + (longlong)*(int *)(param_1 + 1) * 8;
  local_118 = (undefined8 *)0x0;
  fStack_10c = 0.0;
  puVar19 = puVar23;
  puVar17 = puVar23;
  puVar24 = puVar23;
  local_100 = pfVar22;
  if (pfVar21 != pfVar22) {
    do {
      if (*(char *)(param_1 + 10) == '\0') {
LAB_141eeedec:
        iVar18 = (int)puVar24;
        fStack_110 = (float)(iVar18 + 1);
        if ((int)puVar17 < (int)fStack_110) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_118,puVar24);
          pfVar22 = local_100;
          puVar19 = local_118;
        }
        puVar24 = (undefined8 *)(ulonglong)(uint)fStack_110;
        fVar2 = pfVar21[1];
        fVar3 = pfVar21[2];
        fVar4 = pfVar21[3];
        pfVar1 = (float *)(puVar19 + (longlong)iVar18 * 4);
        *pfVar1 = *pfVar21;
        pfVar1[1] = fVar2;
        pfVar1[2] = fVar3;
        pfVar1[3] = fVar4;
        uVar14 = *(undefined8 *)(pfVar21 + 6);
        puVar19[(longlong)iVar18 * 4 + 2] = *(undefined8 *)(pfVar21 + 4);
        (puVar19 + (longlong)iVar18 * 4 + 2)[1] = uVar14;
      }
      else {
        fVar2 = *(float *)((longlong)param_1 + 0x44);
        fVar3 = *pfVar21;
        fVar4 = *(float *)(param_1 + 9);
        bVar10 = fVar2 == pfVar21[2];
        bVar12 = fVar2 < pfVar21[2];
        bVar11 = fVar4 == pfVar21[3];
        bVar13 = fVar4 < pfVar21[3];
        puVar20 = puVar23;
        iVar18 = 0;
        if ((fVar3 <= fVar2) && (pfVar21[1] <= fVar4)) {
          local_f8[0] = (longlong *)param_1[4];
          puVar20 = (undefined8 *)0x1;
          iVar18 = 1;
        }
        if ((bVar12 || bVar10) && (pfVar21[1] <= fVar4)) {
          iVar18 = iVar18 + 1;
          local_f8[(longlong)puVar20] = (longlong *)param_1[5];
          puVar20 = (undefined8 *)((longlong)puVar20 + 1);
        }
        if ((fVar3 <= fVar2) && (bVar13 || bVar11)) {
          iVar18 = iVar18 + 1;
          local_f8[(longlong)puVar20] = (longlong *)param_1[2];
          puVar20 = (undefined8 *)((longlong)puVar20 + 1);
        }
        if ((bVar12 || bVar10) && (bVar13 || bVar11)) {
          iVar18 = iVar18 + 1;
          local_f8[(longlong)puVar20] = (longlong *)param_1[3];
        }
        plVar16 = local_f8[0];
        if (iVar18 != 1) goto LAB_141eeedec;
        iVar18 = (int)local_f8[0][1];
        *(int *)(local_f8[0] + 1) = iVar18 + 1;
        if (*(int *)((longlong)local_f8[0] + 0xc) < iVar18 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(local_f8[0],iVar18);
          pfVar22 = local_100;
        }
        lVar9 = *plVar16;
        fVar2 = pfVar21[1];
        fVar3 = pfVar21[2];
        fVar4 = pfVar21[3];
        pfVar1 = (float *)((longlong)iVar18 * 0x20 + lVar9);
        *pfVar1 = *pfVar21;
        pfVar1[1] = fVar2;
        pfVar1[2] = fVar3;
        pfVar1[3] = fVar4;
        uVar14 = *(undefined8 *)(pfVar21 + 6);
        puVar17 = (undefined8 *)((longlong)iVar18 * 0x20 + 0x10 + lVar9);
        *puVar17 = *(undefined8 *)(pfVar21 + 4);
        puVar17[1] = uVar14;
      }
      iVar18 = (int)puVar24;
      pfVar21 = pfVar21 + 8;
      puVar17 = (undefined8 *)(ulonglong)(uint)fStack_10c;
    } while (pfVar21 != pfVar22);
  }
  if (param_1 != &local_118) {
    *(int *)(param_1 + 1) = iVar18;
    if ((iVar18 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,iVar18);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,puVar19,(longlong)iVar18 << 5);
    }
  }
  if (puVar19 != (undefined8 *)0x0) {
    FMemory::Free(puVar19);
  }
  return;
}



// FUNCTION 141eeeee0 FUN_141eeeee0 body=1595 status=ok
// SIG undefined FUN_141eeeee0(void)

void FUN_141eeeee0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  int local_178;
  uint uStack_174;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  uint uStack_144;
  float local_130;
  float local_12c;
  float local_128;
  int local_120;
  uint *local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  
  local_108 = (longlong *)(param_1 + 0x80);
  uVar6 = *(uint *)(param_1 + 0xa8);
  local_118 = (uint *)(param_1 + 0x90);
  local_178 = 0;
  uStack_174 = 1;
  uStack_164 = 0;
  iStack_160 = 0;
  if (uVar6 != 0) {
    puVar15 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar15 = local_118;
    }
    uVar14 = *puVar15;
    iStack_160 = 0;
    local_178 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar13 = local_178 + 1;
      bVar4 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar13;
      if (bVar4) goto LAB_141eef00a;
      uVar14 = puVar15[lVar11 + 1];
    }
    uStack_174 = -uVar14 & uVar14;
    iVar13 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_164 = (iStack_160 - iVar13) + 0x1f;
    if ((int)uVar6 < (int)uStack_164) {
LAB_141eef00a:
      uStack_164 = uVar6;
    }
  }
  uStack_144 = *(uint *)(param_1 + 0xa8);
  uStack_100 = CONCAT44(uStack_174,local_178);
  local_e8 = CONCAT44(uStack_15c,iStack_160);
  uVar14 = uStack_144 & 0xffffffe0;
  local_f8._8_4_ = 0xffffffff;
  local_f8._0_8_ = local_118;
  local_f8._12_4_ = uStack_164;
  if (uStack_144 != uVar6) {
    puVar15 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar15 = local_118;
    }
    uVar12 = puVar15[(int)uStack_144 >> 5] & -1 << ((byte)uStack_144 & 0x1f);
    iVar13 = (int)uStack_144 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_141eef101;
      uVar12 = puVar15[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    local_120 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> local_120 == 0; local_120 = local_120 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_120;
    }
    uStack_144 = (uVar14 - iVar13) + 0x1f;
    if ((int)uVar6 < (int)uStack_144) {
LAB_141eef101:
      uStack_144 = uVar6;
    }
  }
  local_110 = (ulonglong)uStack_144;
  do {
    if (((local_f8._12_4_ == (int)local_110) && ((uint *)local_f8._0_8_ == local_118)) &&
       (local_108 == (longlong *)(param_1 + 0x80))) {
      return;
    }
    pfVar3 = *(float **)(*local_108 + (longlong)(int)local_f8._12_4_ * 0x10);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
    LOCK();
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      *piVar1 = 0;
      iVar13 = 0;
    }
    UNLOCK();
    if (iVar13 != *(int *)(param_1 + 0x150)) {
      return;
    }
    if ((*(char *)(pfVar3 + 0x14) != '\0') &&
       (lVar11 = *(longlong *)(pfVar3 + 0xe), *(int *)(param_1 + 0xe0) <= *(int *)(lVar11 + 0x2fc)))
    {
      if ((*(char *)(lVar11 + 0x318) == '\0') || (*(char *)(lVar11 + 0x319) == '\0')) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if ((cVar5 == *(char *)(param_1 + 0x14c)) && (iVar13 = 0, 0 < *(int *)(lVar11 + 0x30c))) {
        do {
          fVar20 = *(float *)(lVar11 + 0x31c);
          uVar6 = *(int *)(param_1 + 0x148) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_1 + 0x148) = uVar6;
          fVar7 = (float)(uVar6 & 0x7fffff | 0x3f800000);
          fVar20 = (fVar7 - (float)(int)fVar7) * fVar20;
          uVar16 = FUN_141eeb810(lVar11);
          lVar9 = *(longlong *)(pfVar3 + 0xe);
          iVar8 = 0;
          fVar7 = pfVar3[0xb];
          fVar17 = *(float *)(lVar9 + 800);
          iVar10 = (int)(fVar17 - (float)*(int *)(param_1 + 0xe0));
          if (0 < iVar10) {
            do {
              fVar7 = fVar7 + 1.0;
              if (fVar17 < fVar7) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar10);
          }
          iVar8 = 0;
          fVar7 = fVar20;
          if (0 < iVar10) {
            do {
              fVar7 = fVar7 + 1.0;
              if (fVar17 < fVar7) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar10);
          }
          fVar17 = (float)FUN_141eeb810(lVar9);
          fVar18 = (float)FUN_141eeb810(lVar9);
          fVar7 = *(float *)(lVar9 + 0x2f8);
          if (*(float *)(lVar9 + 0x2f8) <= *(float *)(lVar9 + 0x2f4)) {
            fVar7 = *(float *)(lVar9 + 0x2f4);
          }
          fVar7 = fVar7 * (fVar17 + fVar18);
          uVar6 = *(int *)(param_1 + 0x148) * 0xbb38435 + 0x3619636b;
          fVar17 = (float)(uVar6 & 0x7fffff | 0x3f800000);
          uVar6 = uVar6 * 0xbb38435 + 0x3619636b;
          *(uint *)(param_1 + 0x148) = uVar6;
          fVar18 = (float)(uVar6 & 0x7fffff | 0x3f800000);
          fVar17 = fVar17 - (float)(int)fVar17;
          if (fVar17 <= 1e-08) {
            fVar17 = 1e-08;
          }
          fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
          fVar18 = fVar18 - (float)(int)fVar18;
          if (fVar18 <= 1e-08) {
            fVar18 = 1e-08;
          }
          fVar18 = _guard_xfg_dispatch_icall_nop(fVar18 * 6.2831855);
          fVar18 = SQRT(fVar17 * -2.0) * fVar18;
          if (-1.64 <= fVar18) {
            if (1.64 <= fVar18) {
              fVar18 = 1.64;
            }
          }
          else {
            fVar18 = -1.64;
          }
          fVar17 = *(float *)(lVar11 + 0x308);
          fVar2 = *(float *)(lVar11 + 0x304);
          *(uint *)(param_1 + 0x148) = uVar6 * 0xbb38435 + 0x3619636b;
          uVar19 = __libm_sse2_sincosf_();
          fVar17 = fVar7 + fVar2 + fVar18 * fVar17 * 0.6097561;
          fVar18 = (float)((ulonglong)uVar19 >> 0x20) * fVar17;
          fVar17 = (float)uVar19 * fVar17;
          if (fVar7 * fVar7 < fVar17 * fVar17 + fVar18 * fVar18 + 1e-08) {
            local_12c = fVar17 + pfVar3[1];
            local_130 = fVar18 + *pfVar3;
            local_128 = pfVar3[2];
            lVar9 = FUN_141eec0e0(param_1,&local_130,uVar16,lVar11,fVar20,0);
            if (lVar9 != 0) {
              iVar8 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar8 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
              }
              *(longlong *)(*param_2 + (longlong)iVar8 * 8) = lVar9;
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(lVar11 + 0x30c));
      }
    }
    local_f8._8_4_ = local_f8._8_4_ & ~uStack_100._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
  } while( true );
}



// FUNCTION 141eef520 FUN_141eef520 body=529 status=ok
// SIG undefined FUN_141eef520(void)

undefined8 FUN_141eef520(longlong param_1,float param_2,longlong *param_3,longlong param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
  local_cc = 0x3f800000;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0x488);
  }
  (**(code **)(*param_3 + 0x18))(param_3,param_1,uVar2,local_d8,&local_e8);
  fVar4 = local_e4 * local_e4 + local_e8 * local_e8 + local_e0 * local_e0;
  fVar3 = local_e0;
  fVar6 = local_e4;
  fVar7 = local_e8;
  if ((fVar4 != 1.0) &&
     (fVar3 = DAT_1468b5d98, fVar6 = DAT_1468b5d94, fVar7 = DAT_1468b5d90, 1e-08 <= fVar4)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar3 = auVar5._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar4 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar4 * 0.5 * fVar3 * fVar3);
    fVar7 = local_e8 * fVar3;
    fVar6 = local_e4 * fVar3;
    fVar3 = local_e0 * fVar3;
  }
  fVar4 = *(float *)(param_1 + 0x4a0);
  fVar1 = *(float *)(param_1 + 0x4b4);
  fVar8 = fVar7 * param_2 * fVar4;
  fVar7 = fVar6 * param_2 * fVar4;
  fVar4 = fVar3 * param_2 * fVar4;
  fVar3 = -fVar1;
  fVar6 = fVar3;
  if ((fVar3 <= fVar8) && (fVar6 = fVar8, fVar1 <= fVar8)) {
    fVar6 = fVar1;
  }
  fVar8 = fVar3;
  if ((fVar3 <= fVar7) && (fVar8 = fVar7, fVar1 <= fVar7)) {
    fVar8 = fVar1;
  }
  if ((fVar3 <= fVar4) && (fVar3 = fVar4, fVar1 <= fVar4)) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0x488) = fVar6 + *(float *)(param_1 + 0x488);
  *(float *)(param_1 + 0x48c) = fVar8 + *(float *)(param_1 + 0x48c);
  *(float *)(param_1 + 0x490) = fVar3 + *(float *)(param_1 + 0x490);
  AActor::SetActorTickEnabled(param_1,1);
  return 0;
}



// FUNCTION 141eef740 FUN_141eef740 body=3284 status=ok
// SIG undefined FUN_141eef740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eef740(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  float local_1c0;
  float local_1b4;
  int local_1a8;
  uint uStack_1a4;
  uint *puStack_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  int iStack_170;
  uint uStack_16c;
  uint *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong local_128 [2];
  uint local_118 [4];
  uint *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar2 = *(longlong *)(param_1 + 0x458);
  local_17c = param_2;
  local_178 = (longlong *)CONCAT44(local_178._4_4_,(undefined4)local_178);
  if (((*(byte *)(lVar2 + 0xb8) & 1) != 0) &&
     (local_178 = (longlong *)CONCAT44(local_178._4_4_,(undefined4)local_178),
     *(longlong *)(lVar2 + 0x7a8) != 0)) {
    local_128[0] = 0;
    local_128[1] = 0;
    local_108 = (uint *)0x0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    AActor::GetOverlappingActors(param_1,local_128,0);
    iVar8 = (int)local_100;
    puStack_1a0 = local_118;
    local_1a8 = 0;
    uStack_1a4 = 1;
    iStack_194 = 0;
    iStack_190 = 0;
    if ((int)local_100 != 0) {
      puVar11 = local_118;
      if (local_108 != (uint *)0x0) {
        puVar11 = local_108;
      }
      uVar14 = *puVar11;
      iStack_190 = 0;
      local_1a8 = 0;
      while (uVar14 == 0) {
        iStack_190 = iStack_190 + 0x20;
        if ((int)((int)local_100 + -1 + ((int)local_100 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1a8) {
          iStack_194 = (int)local_100;
          local_1a8 = local_1a8 + 1;
          goto LAB_141eef8bb;
        }
        uVar14 = puVar11[(longlong)local_1a8 + 1];
        local_1a8 = local_1a8 + 1;
      }
      uStack_1a4 = uVar14 - 1 & uVar14 ^ uVar14;
      iVar9 = 0x1f;
      if (uStack_1a4 != 0) {
        for (; uStack_1a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_1a4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_194 = (iStack_190 - iVar9) + 0x1f;
      if ((int)local_100 < iStack_194) {
        iStack_194 = (int)local_100;
      }
    }
LAB_141eef8bb:
    uStack_160 = CONCAT44(iStack_194,0xffffffff);
    local_158 = CONCAT44(uStack_18c,iStack_190);
    local_150 = local_128;
    iStack_194 = (int)local_100;
    uStack_148 = CONCAT44(uStack_1a4,local_1a8);
    local_198 = -1 << ((byte)local_100 & 0x1f);
    iStack_170 = local_1a8;
    uStack_16c = uStack_1a4;
    local_168 = puStack_1a0;
    puStack_140 = puStack_1a0;
    uStack_138 = uStack_160;
    uStack_130 = local_158;
    local_178 = local_150;
    while( true ) {
      param_2 = local_17c;
      if ((uStack_160._4_4_ == iVar8) && (local_168 == local_118)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((bVar7) && (local_178 == local_128)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) break;
      lVar3 = *(longlong *)(*local_178 + (longlong)uStack_160._4_4_ * 0x10);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x168), lVar3 != 0)) {
        fVar18 = *(float *)(lVar3 + 0x1d4);
        fVar13 = *(float *)(lVar3 + 0x1d0);
        fVar12 = *(float *)(*(longlong *)(param_1 + 0x168) + 0x1d8);
        lVar10 = FUN_142912e90();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((bVar7) && (lVar10 = *(longlong *)(param_1 + 0x468), lVar10 != 0)) {
          lVar4 = *(longlong *)(param_1 + 0x168);
          fVar22 = (*(float *)(lVar4 + 0x1d0) + *(float *)(lVar4 + 0x1d0)) -
                   *(float *)(param_1 + 0x470);
          fVar23 = (*(float *)(lVar4 + 0x1d4) + *(float *)(lVar4 + 0x1d4)) -
                   *(float *)(param_1 + 0x474);
          fVar24 = (*(float *)(lVar4 + 0x1d8) + *(float *)(lVar4 + 0x1d8)) -
                   *(float *)(param_1 + 0x478);
          fVar25 = *(float *)(param_1 + 0x470) - fVar22;
          fVar28 = *(float *)(param_1 + 0x474) - fVar23;
          fVar29 = *(float *)(param_1 + 0x478) - fVar24;
          fVar19 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
          fVar18 = (fVar25 * (fVar13 - fVar22) + fVar28 * (fVar18 - fVar23) +
                   fVar29 * (fVar12 - fVar24)) / fVar19;
          local_188 = fVar22 + fVar18 * fVar25;
          local_184 = fVar23 + fVar18 * fVar28;
          uVar14 = *(uint *)(lVar3 + 0x230) & _DAT_146ac3f90;
          uVar15 = *(uint *)(lVar3 + 0x234) & uRam0000000146ac3f94;
          uVar16 = *(uint *)(lVar3 + 0x238) & uRam0000000146ac3f98;
          uVar17 = *(uint *)(lVar3 + 0x23c) & uRam0000000146ac3f9c;
          auVar20._4_4_ = uVar15;
          auVar20._0_4_ = uVar14;
          auVar20._8_4_ = uVar16;
          auVar20._12_4_ = uVar17;
          local_180 = fVar24 + fVar18 * fVar29;
          auVar21._4_4_ = uVar16;
          auVar21._0_4_ = uVar15;
          auVar21._8_4_ = uVar14;
          auVar21._12_4_ = uVar17;
          auVar21 = minps(auVar20,auVar21);
          auVar27._4_4_ = uVar14;
          auVar27._0_4_ = uVar16;
          auVar27._8_4_ = uVar15;
          auVar27._12_4_ = uVar17;
          auVar21 = minps(auVar21,auVar27);
          local_1b4 = auVar21._0_4_ * *(float *)(lVar3 + 0x714);
          fVar18 = fVar28;
          fVar13 = fVar29;
          fVar12 = fVar25;
          if ((fVar19 != 1.0) &&
             (fVar18 = DAT_1468b5d94, fVar13 = DAT_1468b5d98, fVar12 = DAT_1468b5d90,
             1e-08 <= fVar19)) {
            auVar27 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
            fVar12 = auVar27._0_4_;
            fVar12 = fVar12 + fVar12 * (0.5 - fVar19 * 0.5 * fVar12 * fVar12);
            fVar12 = fVar12 + fVar12 * (0.5 - fVar19 * 0.5 * fVar12 * fVar12);
            fVar18 = fVar12 * fVar28;
            fVar13 = fVar12 * fVar29;
            fVar12 = fVar12 * fVar25;
          }
          uVar14 = *(uint *)(lVar10 + 0x230) & _DAT_146ac3f90;
          uVar15 = *(uint *)(lVar10 + 0x234) & uRam0000000146ac3f94;
          uVar16 = *(uint *)(lVar10 + 0x238) & uRam0000000146ac3f98;
          uVar17 = *(uint *)(lVar10 + 0x23c) & uRam0000000146ac3f9c;
          fVar22 = fVar22 - (local_188 + local_1b4 * fVar12);
          auVar26._4_4_ = uVar15;
          auVar26._0_4_ = uVar14;
          auVar26._8_4_ = uVar16;
          auVar26._12_4_ = uVar17;
          auVar5._4_4_ = uVar16;
          auVar5._0_4_ = uVar15;
          auVar5._8_4_ = uVar14;
          auVar5._12_4_ = uVar17;
          auVar27 = minps(auVar26,auVar5);
          fVar23 = fVar23 - (local_184 + local_1b4 * fVar18);
          auVar6._4_4_ = uVar14;
          auVar6._0_4_ = uVar16;
          auVar6._8_4_ = uVar15;
          auVar6._12_4_ = uVar17;
          auVar27 = minps(auVar27,auVar6);
          fVar24 = fVar24 - (local_180 + local_1b4 * fVar13);
          fVar19 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
          fVar18 = fVar24;
          fVar13 = fVar22;
          fVar12 = fVar23;
          if ((fVar19 != 1.0) &&
             (fVar18 = DAT_1468b5d98, fVar13 = DAT_1468b5d90, fVar12 = DAT_1468b5d94,
             1e-08 <= fVar19)) {
            auVar20 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
            fVar12 = auVar20._0_4_;
            fVar12 = fVar12 + fVar12 * (0.5 - fVar19 * 0.5 * fVar12 * fVar12);
            fVar12 = fVar12 * (0.5 - fVar19 * 0.5 * fVar12 * fVar12) + fVar12;
            fVar18 = fVar12 * fVar24;
            fVar13 = fVar12 * fVar22;
            fVar12 = fVar12 * fVar23;
          }
          fVar19 = *(float *)(param_1 + 0x4a4);
          fVar28 = auVar21._0_4_ * *(float *)(lVar3 + 0x714) +
                   auVar27._0_4_ * *(float *)(lVar10 + 0x714);
          fVar25 = fVar19 * (fVar28 * (fVar13 + fVar13) - fVar22);
          fVar13 = *(float *)(param_1 + 0x4b8);
          fVar22 = fVar19 * (fVar28 * (fVar12 + fVar12) - fVar23);
          fVar12 = -fVar13;
          fVar19 = fVar19 * (fVar28 * (fVar18 + fVar18) - fVar24);
          fVar18 = fVar12;
          if ((fVar12 <= fVar25) && (fVar18 = fVar25, fVar13 <= fVar25)) {
            fVar18 = fVar13;
          }
          fVar23 = fVar12;
          if ((fVar12 <= fVar22) && (fVar23 = fVar22, fVar13 <= fVar22)) {
            fVar23 = fVar13;
          }
          if ((fVar12 <= fVar19) && (fVar12 = fVar19, fVar13 <= fVar19)) {
            fVar12 = fVar13;
          }
          *(float *)(param_1 + 0x488) = fVar18 + *(float *)(param_1 + 0x488);
          *(float *)(param_1 + 0x48c) = fVar23 + *(float *)(param_1 + 0x48c);
          *(float *)(param_1 + 0x490) = fVar12 + *(float *)(param_1 + 0x490);
        }
      }
      uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_16c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_170);
    }
    pfVar1 = (float *)(param_1 + 0x494);
    fVar18 = -*(float *)(param_1 + 0x4a8);
    fVar19 = fVar18 * *pfVar1 + *(float *)(param_1 + 0x488);
    *(float *)(param_1 + 0x48c) = fVar18 * *(float *)(param_1 + 0x498) + *(float *)(param_1 + 0x48c)
    ;
    *(float *)(param_1 + 0x490) = fVar18 * *(float *)(param_1 + 0x49c) + *(float *)(param_1 + 0x490)
    ;
    *(float *)(param_1 + 0x488) = fVar19;
    fVar18 = *(float *)(param_1 + 0x498);
    fVar13 = *pfVar1;
    fVar12 = *(float *)(param_1 + 0x49c);
    fVar22 = fVar13 * fVar13 + fVar18 * fVar18 + fVar12 * fVar12;
    if (fVar22 == 1.0) {
      local_1c8 = *(undefined8 *)pfVar1;
      local_1c0 = *(float *)(param_1 + 0x49c);
      fVar23 = (float)((ulonglong)local_1c8 >> 0x20);
      fVar24 = local_1c0;
      fVar25 = (float)local_1c8;
    }
    else {
      fVar23 = DAT_1468b5d94;
      fVar24 = DAT_1468b5d98;
      fVar25 = DAT_1468b5d90;
      if (1e-08 <= fVar22) {
        auVar21 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
        fVar24 = auVar21._0_4_;
        fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
        fVar24 = fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24) + fVar24;
        fVar25 = fVar24 * fVar13;
        fVar23 = fVar24 * fVar18;
        fVar24 = fVar24 * fVar12;
      }
    }
    fVar18 = -(fVar22 * *(float *)(param_1 + 0x4ac));
    *(float *)(param_1 + 0x48c) = fVar18 * fVar23 + *(float *)(param_1 + 0x48c);
    fVar19 = fVar18 * fVar25 + fVar19;
    *(float *)(param_1 + 0x490) = fVar18 * fVar24 + *(float *)(param_1 + 0x490);
    *(float *)(param_1 + 0x488) = fVar19;
    fVar18 = -*(float *)(param_1 + 0x4b0);
    fVar19 = fVar19 + fVar18 * *(float *)(param_1 + 0x47c);
    fVar22 = fVar18 * *(float *)(param_1 + 0x480) + *(float *)(param_1 + 0x48c);
    fVar23 = fVar18 * *(float *)(param_1 + 0x484) + *(float *)(param_1 + 0x490);
    *(float *)(param_1 + 0x488) = fVar19;
    *(float *)(param_1 + 0x48c) = fVar22;
    *(float *)(param_1 + 0x490) = fVar23;
    fVar18 = *(float *)(param_1 + 0x4bc);
    fVar13 = -fVar18;
    fVar12 = fVar13;
    if ((fVar13 <= fVar19) && (fVar12 = fVar19, fVar18 <= fVar19)) {
      fVar12 = fVar18;
    }
    *(float *)(param_1 + 0x488) = fVar12;
    fVar19 = fVar13;
    if ((fVar13 <= fVar22) && (fVar19 = fVar22, fVar18 <= fVar22)) {
      fVar19 = fVar18;
    }
    *(float *)(param_1 + 0x48c) = fVar19;
    if ((fVar13 <= fVar23) && (fVar13 = fVar23, fVar18 <= fVar23)) {
      fVar13 = fVar18;
    }
    *(float *)(param_1 + 0x490) = fVar13;
    fVar13 = local_17c * *(float *)(param_1 + 0x490) + *(float *)(param_1 + 0x484);
    *(float *)(param_1 + 0x47c) = local_17c * fVar12 + *(float *)(param_1 + 0x47c);
    *(float *)(param_1 + 0x480) =
         local_17c * *(float *)(param_1 + 0x48c) + *(float *)(param_1 + 0x480);
    *(float *)(param_1 + 0x484) = fVar13;
    fVar18 = *(float *)(param_1 + 0x47c);
    *(ulonglong *)(param_1 + 0x488) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(float *)(param_1 + 0x490) = DAT_1468b5d98;
    if (-1000.0 <= fVar18) {
      if (1000.0 <= fVar18) {
        fVar18 = 1000.0;
      }
    }
    else {
      fVar18 = -1000.0;
    }
    *(float *)(param_1 + 0x47c) = fVar18;
    fVar18 = *(float *)(param_1 + 0x480);
    if (-1000.0 <= fVar18) {
      if (1000.0 <= fVar18) {
        fVar18 = 1000.0;
      }
    }
    else {
      fVar18 = -1000.0;
    }
    *(float *)(param_1 + 0x480) = fVar18;
    fVar18 = -1000.0;
    if ((-1000.0 <= fVar13) && (fVar18 = fVar13, 1000.0 <= fVar13)) {
      fVar18 = 1000.0;
    }
    *(float *)(param_1 + 0x484) = fVar18;
    fVar18 = local_17c * *(float *)(param_1 + 0x484) + *(float *)(param_1 + 0x49c);
    fVar13 = local_17c * *(float *)(param_1 + 0x47c) + *pfVar1;
    fVar12 = local_17c * *(float *)(param_1 + 0x480) + *(float *)(param_1 + 0x498);
    *(float *)(param_1 + 0x49c) = fVar18;
    *(float *)(param_1 + 0x498) = fVar12;
    *pfVar1 = fVar13;
    fVar12 = fVar12 * fVar12 + fVar13 * fVar13 + fVar18 * fVar18;
    fVar13 = SQRT(fVar12) * 0.01;
    fVar18 = -1.0;
    if ((-1.0 <= fVar13) && (fVar18 = fVar13, 1.0 <= fVar13)) {
      fVar18 = 1.0;
    }
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar18);
    fVar18 = *(float *)(param_1 + 0x498);
    if (fVar12 <= 0.0001) {
      local_1c8 = 0;
      local_1c0 = 1.0;
    }
    else {
      fVar19 = -*pfVar1;
      fVar12 = fVar18 * fVar18 + fVar19 * fVar19;
      if (fVar12 == 1.0) {
        local_1c8 = CONCAT44(fVar19,fVar18);
        local_1c0 = 0.0;
      }
      else if (1e-08 <= fVar12) {
        local_1c0 = 0.0;
        auVar21 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar22 = auVar21._0_4_;
        fVar22 = fVar22 + fVar22 * (0.5 - fVar12 * 0.5 * fVar22 * fVar22);
        fVar22 = fVar22 + fVar22 * (0.5 - fVar12 * 0.5 * fVar22 * fVar22);
        local_1c8 = CONCAT44(fVar22 * fVar19,fVar22 * fVar18);
      }
      else {
        local_1c0 = DAT_1468b5d98;
        local_1c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
    }
    local_1a8 = (int)local_1c8;
    uStack_1a4 = (uint)((ulonglong)local_1c8 >> 0x20);
    puStack_1a0 = (uint *)(CONCAT44(fVar13,local_1c0) ^ 0x8000000000000000);
    FUN_141ef0420(*(undefined8 *)(lVar2 + 0x7a8),pfVar1,&local_1a8);
    if ((*pfVar1 * *pfVar1 + *(float *)(param_1 + 0x498) * *(float *)(param_1 + 0x498) +
         *(float *)(param_1 + 0x49c) * *(float *)(param_1 + 0x49c) < 9.999999e-07) &&
       (*(float *)(param_1 + 0x47c) * *(float *)(param_1 + 0x47c) +
        *(float *)(param_1 + 0x480) * *(float *)(param_1 + 0x480) +
        *(float *)(param_1 + 0x484) * *(float *)(param_1 + 0x484) < 9.999999e-07)) {
      AActor::SetActorTickEnabled(param_1,0);
    }
    local_e0 = 0;
    if (local_e8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_128);
  }
  FUN_1422406d0(param_1,param_2);
  return;
}



// FUNCTION 141ef0420 FUN_141ef0420 body=598 status=ok
// SIG undefined FUN_141ef0420(void)

void FUN_141ef0420(longlong param_1,LARGE_INTEGER *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  DWORD DVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
    local_res20 = (LARGE_INTEGER)*(LARGE_INTEGER *)&param_2->s;
    DVar8 = param_2[1].s.LowPart;
    local_28._0_4_ = *param_3;
    local_28._4_4_ = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_40);
    ((LARGE_INTEGER *)(param_1 + 0x3e0))->s = (_struct_19)local_res20;
    *(undefined4 *)(param_1 + 0x3f0) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x3f4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x3f8) = uStack_20;
    *(undefined4 *)(param_1 + 0x3fc) = uStack_1c;
    *(DWORD *)(param_1 + 1000) = DVar8;
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_40._0_4_);
    return;
  }
  pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar10 = TlsGetValue(*pDVar9);
  plVar11 = (longlong *)0x0;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = 0;
      plVar10[1] = 0;
      *(undefined4 *)(plVar10 + 2) = 0;
      plVar11 = plVar10;
    }
    TlsSetValue(*pDVar9,plVar11);
    plVar10 = plVar11;
  }
  plVar11 = (longlong *)plVar10[1];
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)*plVar10;
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
      plVar10[1] = (longlong)plVar11;
      if (plVar11 == (longlong *)0x0) {
        puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar10[1] = (longlong)puVar12;
        lVar14 = 0x1f;
        do {
          puVar2 = puVar12 + 0x20;
          *puVar12 = puVar2;
          lVar14 = lVar14 + -1;
          puVar12 = puVar2;
        } while (lVar14 != 0);
        *puVar2 = 0;
        plVar11 = (longlong *)plVar10[1];
      }
      iVar13 = 0x20;
      *(undefined4 *)(plVar10 + 2) = 0x20;
    }
    else {
      iVar13 = 0x20;
      plVar10[1] = (longlong)plVar11;
      *(undefined4 *)(plVar10 + 2) = 0x20;
      *plVar10 = 0;
    }
  }
  else {
    iVar13 = (int)plVar10[2];
  }
  plVar10[1] = *plVar11;
  *(int *)(plVar10 + 2) = iVar13 + -1;
  *plVar11 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar11 + 1) = 0xff;
  local_38 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
  *(undefined1 *)(plVar11 + 8) = 0;
  *plVar11 = (longlong)&PTR_FUN_144ee0a00;
  plVar11[9] = 0;
  plVar11[2] = param_1;
  *(_struct_19 *)(plVar11 + 3) = *(_struct_19 *)param_2;
  *(DWORD *)(plVar11 + 4) = param_2[1].s.LowPart;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(plVar11 + 6) = uVar3;
  *(undefined4 *)((longlong)plVar11 + 0x34) = uVar4;
  *(undefined4 *)(plVar11 + 7) = uVar5;
  *(undefined4 *)((longlong)plVar11 + 0x3c) = uVar6;
  lVar14 = plVar11[9];
  piVar1 = (int *)(lVar14 + 0x48);
  if (lVar14 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141eedf40(uVar3,0,0xff,1);
  if (lVar14 != 0) {
    LOCK();
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FGraphEvent::Recycle(lVar14);
    }
  }
  return;
}



// FUNCTION 141ef06a0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProceduralFoliageTile::GetPrivateStaticClass(void)

{
  if (DAT_146ac4318 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"ProceduralFoliageTile",&DAT_146ac4318,FUN_140447710,0x158,
                  0x10000000,0,L"Engine",&LAB_141ef1310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ac4318;
}



// FUNCTION 141ef0740 FUN_141ef0740 body=47 status=ok
// SIG undefined FUN_141ef0740(void)

longlong FUN_141ef0740(void)

{
  if (DAT_146ac4250 == 0) {
    FUN_141786440(&DAT_146ac4250,&PTR_FUN_144ee3bc0);
  }
  return DAT_146ac4250;
}



// FUNCTION 141ef0770 FUN_141ef0770 body=53 status=ok
// SIG undefined FUN_141ef0770(void)

void FUN_141ef0770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144ee5d60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141ef07b0 FUN_141ef07b0 body=47 status=ok
// SIG undefined FUN_141ef07b0(void)

longlong FUN_141ef07b0(void)

{
  if (DAT_146ac41e0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
  }
  return DAT_146ac41e0;
}



// FUNCTION 141ef07f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerStateGunfire::GetPrivateStaticClass(void)

{
  if (DAT_146ac4328 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"ProceduralFoliageVolume",&DAT_146ac4328,FUN_140447710,0x498,
                  0x10000000,0,L"Engine",&LAB_141ef1230,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146ac4328;
}



// FUNCTION 141ef08c0 FUN_141ef08c0 body=162 status=ok
// SIG undefined FUN_141ef08c0(void)

longlong FUN_141ef08c0(void)

{
  if (DAT_146ac4268 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"FoliageType_InstancedStaticMesh",&DAT_146ac4268,FUN_140447710
                  ,0x3d0,0x10000000,0,L"Engine",&LAB_141ef1290,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141ef0f30,&LAB_140447700,0);
  }
  return DAT_146ac4268;
}



// FUNCTION 141ef0980 FUN_141ef0980 body=53 status=ok
// SIG undefined FUN_141ef0980(void)

void FUN_141ef0980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144ee5e78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141ef09c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_146ac4288 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"InstancedFoliageActor",&DAT_146ac4288,FUN_140447710,0x4a8,
                  0x10000000,0,L"Engine",&LAB_141ef11d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_141ee92a0,&LAB_140493a70,
                  &LAB_140447700,0);
  }
  return DAT_146ac4288;
}



// FUNCTION 141ef0a80 FUN_141ef0a80 body=162 status=ok
// SIG undefined FUN_141ef0a80(void)

longlong FUN_141ef0a80(void)

{
  if (DAT_146ac4200 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"FoliageInstancedStaticMeshComponent",&DAT_146ac4200,
                  FUN_140447710,0x970,0x10000000,0,L"Engine",&LAB_141ef1250,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,
                  AUGCompanionAIController::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac4200;
}



// FUNCTION 141ef0b30 FUN_141ef0b30 body=162 status=ok
// SIG undefined FUN_141ef0b30(void)

longlong FUN_141ef0b30(void)

{
  if (DAT_146ac42a0 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"InteractiveFoliageActor",&DAT_146ac42a0,FUN_141ef18d0,0x4c8,
                  0x10000000,0,L"Engine",&LAB_141ef11f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414bbf20,&LAB_140447700,0);
  }
  return DAT_146ac42a0;
}



// FUNCTION 141ef0be0 FUN_141ef0be0 body=47 status=ok
// SIG undefined FUN_141ef0be0(void)

longlong FUN_141ef0be0(void)

{
  if (DAT_146ac4298 == 0) {
    FUN_141786440(&DAT_146ac4298,&PTR_FUN_144ee4be0);
  }
  return DAT_146ac4298;
}



// FUNCTION 141ef0c10 FUN_141ef0c10 body=47 status=ok
// SIG undefined FUN_141ef0c10(void)

longlong FUN_141ef0c10(void)

{
  if (DAT_146ac4290 == 0) {
    FUN_141786a30(&DAT_146ac4290,&PTR_FUN_1464cd5b0);
  }
  return DAT_146ac4290;
}



// FUNCTION 141ef0c60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFoliageStatistics::GetPrivateStaticClass(void)

{
  if (DAT_146ac4220 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"FoliageStatistics",&DAT_146ac4220,
                  StaticRegisterNativesUFoliageStatistics,0x28,0x10000000,0,L"Engine",&LAB_140492340
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146ac4220;
}



// FUNCTION 141ef0d10 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_146ac42b0 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"InteractiveFoliageComponent",&DAT_146ac42b0,FUN_140447710,
                  0x7b0,0x10000000,0,L"Engine",&LAB_141ef12b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,thunk_FUN_142a232e0,
                  &LAB_140447700,0);
  }
  return DAT_146ac42b0;
}



// FUNCTION 141ef0dc0 FUN_141ef0dc0 body=47 status=ok
// SIG undefined FUN_141ef0dc0(void)

longlong FUN_141ef0dc0(void)

{
  if (DAT_146ac4218 == 0) {
    FUN_141786440(&DAT_146ac4218,&PTR_GetPrivateStaticClass_144ee5300);
  }
  return DAT_146ac4218;
}



// FUNCTION 141ef0df0 FUN_141ef0df0 body=47 status=ok
// SIG undefined FUN_141ef0df0(void)

longlong FUN_141ef0df0(void)

{
  if (DAT_146ac4208 == 0) {
    FUN_141786a30(&DAT_146ac4208,&PTR_FUN_1464cb730);
  }
  return DAT_146ac4208;
}



// FUNCTION 141ef0e20 FUN_141ef0e20 body=47 status=ok
// SIG undefined FUN_141ef0e20(void)

longlong FUN_141ef0e20(void)

{
  if (DAT_146ac4210 == 0) {
    FUN_141786a30(&DAT_146ac4210,&PTR_FUN_1464cb890);
  }
  return DAT_146ac4210;
}



// FUNCTION 141ef0e60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerStateGunfire::GetPrivateStaticClass(void)

{
  if (DAT_146ac42c0 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"ProceduralFoliageBlockingVolume",&DAT_146ac42c0,FUN_140447710
                  ,0x498,0x10000000,0,L"Engine",&LAB_141ef1210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146ac42c0;
}



// FUNCTION 141ef0f30 FUN_141ef0f30 body=151 status=ok
// SIG undefined FUN_141ef0f30(void)

longlong FUN_141ef0f30(void)

{
  if (DAT_146ac4258 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"FoliageType",&DAT_146ac4258,FUN_140447710,0x3b0,0x10000000,0,
                  L"Engine",&LAB_141ef1270,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ac4258;
}



// FUNCTION 141ef0fd0 FUN_141ef0fd0 body=162 status=ok
// SIG undefined FUN_141ef0fd0(void)

longlong FUN_141ef0fd0(void)

{
  if (DAT_146ac42d0 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"ProceduralFoliageComponent",&DAT_146ac42d0,FUN_140447710,
                  0x1a0,0x10000000,0,L"Engine",&LAB_141ef12d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146ac42d0;
}



// FUNCTION 141ef1090 FUN_141ef1090 body=53 status=ok
// SIG undefined FUN_141ef1090(void)

void FUN_141ef1090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144ee6000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141ef10d0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProceduralFoliageSpawner::GetPrivateStaticClass(void)

{
  if (DAT_146ac4308 == 0) {
    FUN_14171ccd0(L"/Script/Foliage",L"ProceduralFoliageSpawner",&DAT_146ac4308,
                  StaticRegisterNativesUProceduralFoliageSpawner,0x70,0x10000000,0,L"Engine",
                  &LAB_141ef12f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ac4308;
}



// FUNCTION 141ef1170 FUN_141ef1170 body=47 status=ok
// SIG undefined FUN_141ef1170(void)

longlong FUN_141ef1170(void)

{
  if (DAT_146ac4300 == 0) {
    FUN_141786440(&DAT_146ac4300,&PTR_GetPrivateStaticClass_144ee32a0);
  }
  return DAT_146ac4300;
}



// FUNCTION 141ef11a0 FUN_141ef11a0 body=47 status=ok
// SIG undefined FUN_141ef11a0(void)

longlong FUN_141ef11a0(void)

{
  if (DAT_146ac42f8 == 0) {
    FUN_141786a30(&DAT_146ac42f8,&PTR_FUN_1464cda80);
  }
  return DAT_146ac42f8;
}



// FUNCTION 141ef1350 EFoliageScaling_StaticEnum body=85 status=ok
// SIG undefined EFoliageScaling_StaticEnum(void)

void EFoliageScaling_StaticEnum(void)

{
  if (DAT_146ac40d8 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    DAT_146ac40d8 = GetStaticEnum(FUN_141ef1cc0,DAT_146ac41e0,L"EFoliageScaling");
  }
  return;
}



// FUNCTION 141ef13b0 ESimulationOverlap_StaticEnum body=85 status=ok
// SIG undefined ESimulationOverlap_StaticEnum(void)

void ESimulationOverlap_StaticEnum(void)

{
  if (DAT_146ac40f8 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    DAT_146ac40f8 = GetStaticEnum(FUN_141ef1cf0,DAT_146ac41e0,L"ESimulationOverlap");
  }
  return;
}



// FUNCTION 141ef1410 ESimulationQuery_StaticEnum body=85 status=ok
// SIG undefined ESimulationQuery_StaticEnum(void)

void ESimulationQuery_StaticEnum(void)

{
  if (DAT_146ac40f0 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    DAT_146ac40f0 = GetStaticEnum(FUN_141ef1d20,DAT_146ac41e0,L"ESimulationQuery");
  }
  return;
}



// FUNCTION 141ef1470 EVertexColorMaskChannel_StaticEnum body=85 status=ok
// SIG undefined EVertexColorMaskChannel_StaticEnum(void)

void EVertexColorMaskChannel_StaticEnum(void)

{
  if (DAT_146ac40e0 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    DAT_146ac40e0 = GetStaticEnum(FUN_141ef1d50,DAT_146ac41e0,L"EVertexColorMaskChannel");
  }
  return;
}



// FUNCTION 141ef14d0 FoliageVertexColorMask_StaticEnum body=85 status=ok
// SIG undefined FoliageVertexColorMask_StaticEnum(void)

void FoliageVertexColorMask_StaticEnum(void)

{
  if (DAT_146ac40e8 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    DAT_146ac40e8 = GetStaticEnum(FUN_141ef1d80,DAT_146ac41e0,L"FoliageVertexColorMask");
  }
  return;
}



// FUNCTION 141ef1530 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC(void)

{
  return 0x2cd1d906;
}



// FUNCTION 141ef1540 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC(void)

{
  return 0xdd8692ad;
}



// FUNCTION 141ef1550 Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC(void)

{
  return 0xc5b44083;
}



// FUNCTION 141ef1770 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141eed940(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141ef17e0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141eeda70(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141ef1850 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141ef18c0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AUGCompanionAIController::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141ef18d0 FUN_141ef18d0 body=34 status=ok
// SIG undefined FUN_141ef18d0(void)

void FUN_141ef18d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141ef0b30();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CapsuleTouched_144ee5f90,1);
  return;
}



// FUNCTION 141ef1900 StaticRegisterNativesUFoliageStatistics body=34 status=ok
// SIG undefined StaticRegisterNativesUFoliageStatistics(void)

void UFoliageStatistics::StaticRegisterNativesUFoliageStatistics(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_FoliageOverlappingBoxCount_144ee5c48,2);
  return;
}



// FUNCTION 141ef1930 StaticRegisterNativesUProceduralFoliageSpawner body=34 status=ok
// SIG undefined StaticRegisterNativesUProceduralFoliageSpawner(void)

void UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Simulate_144ee6118,1);
  return;
}



// FUNCTION 141ef1960 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFoliageTypeObject::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac4270 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    lVar1 = DAT_146ac41e0;
    uVar2 = Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC();
    DAT_146ac4270 = GetStaticStruct(FUN_141ef1db0,lVar1,L"FoliageTypeObject",0x20,uVar2);
  }
  return;
}



// FUNCTION 141ef19e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFoliageVertexColorChannelMask::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac4240 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    lVar1 = DAT_146ac41e0;
    uVar2 = Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC();
    DAT_146ac4240 = GetStaticStruct(FUN_141ef1de0,lVar1,L"FoliageVertexColorChannelMask",0xc,uVar2);
  }
  return;
}



// FUNCTION 141ef1a60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FProceduralFoliageInstance::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac42e8 == 0) {
    if (DAT_146ac41e0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac41e0,&PTR_s__Script_Foliage_144ee5c00);
    }
    lVar1 = DAT_146ac41e0;
    uVar2 = Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC();
    DAT_146ac42e8 = GetStaticStruct(FUN_141ef1e10,lVar1,L"ProceduralFoliageInstance",0x60,uVar2);
  }
  return;
}



// FUNCTION 141ef1ae0 FUN_141ef1ae0 body=47 status=ok
// SIG undefined FUN_141ef1ae0(void)

longlong FUN_141ef1ae0(void)

{
  if (DAT_146ac4280 == 0) {
    FUN_141786440(&DAT_146ac4280,&PTR_GetPrivateStaticClass_144ee4800);
  }
  return DAT_146ac4280;
}



// FUNCTION 141ef1b10 FUN_141ef1b10 body=47 status=ok
// SIG undefined FUN_141ef1b10(void)

longlong FUN_141ef1b10(void)

{
  if (DAT_146ac42b8 == 0) {
    FUN_141786440(&DAT_146ac42b8,&PTR_GetPrivateStaticClass_144ee53b0);
  }
  return DAT_146ac42b8;
}



// FUNCTION 141ef1b40 FUN_141ef1b40 body=47 status=ok
// SIG undefined FUN_141ef1b40(void)

longlong FUN_141ef1b40(void)

{
  if (DAT_146ac4320 == 0) {
    FUN_141786440(&DAT_146ac4320,&PTR_GetPrivateStaticClass_144ee43a0);
  }
  return DAT_146ac4320;
}



// FUNCTION 141ef1b70 FUN_141ef1b70 body=47 status=ok
// SIG undefined FUN_141ef1b70(void)

longlong FUN_141ef1b70(void)

{
  if (DAT_146ac41f8 == 0) {
    FUN_141786440(&DAT_146ac41f8,&PTR_FUN_144ee4cc0);
  }
  return DAT_146ac41f8;
}



// FUNCTION 141ef1ba0 FUN_141ef1ba0 body=47 status=ok
// SIG undefined FUN_141ef1ba0(void)

longlong FUN_141ef1ba0(void)

{
  if (DAT_146ac4260 == 0) {
    FUN_141786440(&DAT_146ac4260,&PTR_FUN_144ee4570);
  }
  return DAT_146ac4260;
}



// FUNCTION 141ef1bd0 FUN_141ef1bd0 body=47 status=ok
// SIG undefined FUN_141ef1bd0(void)

longlong FUN_141ef1bd0(void)

{
  if (DAT_146ac42a8 == 0) {
    FUN_141786440(&DAT_146ac42a8,&PTR_StaticClass_144ee50a0);
  }
  return DAT_146ac42a8;
}



// FUNCTION 141ef1c00 FUN_141ef1c00 body=47 status=ok
// SIG undefined FUN_141ef1c00(void)

longlong FUN_141ef1c00(void)

{
  if (DAT_146ac42c8 == 0) {
    FUN_141786440(&DAT_146ac42c8,&PTR_FUN_144ee56b0);
  }
  return DAT_146ac42c8;
}



// FUNCTION 141ef1c30 FUN_141ef1c30 body=47 status=ok
// SIG undefined FUN_141ef1c30(void)

longlong FUN_141ef1c30(void)

{
  if (DAT_146ac4310 == 0) {
    FUN_141786440(&DAT_146ac4310,&PTR_GetPrivateStaticClass_144ee4080);
  }
  return DAT_146ac4310;
}



// FUNCTION 141ef1c60 FUN_141ef1c60 body=47 status=ok
// SIG undefined FUN_141ef1c60(void)

longlong FUN_141ef1c60(void)

{
  if (DAT_146ac41f0 == 0) {
    FUN_141786a30(&DAT_146ac41f0,&PTR_FUN_1464cb540);
  }
  return DAT_146ac41f0;
}



// FUNCTION 141ef1c90 FUN_141ef1c90 body=47 status=ok
// SIG undefined FUN_141ef1c90(void)

longlong FUN_141ef1c90(void)

{
  if (DAT_146ac41e8 == 0) {
    FUN_141786a30(&DAT_146ac41e8,&PTR_FUN_1464cb360);
  }
  return DAT_146ac41e8;
}



// FUNCTION 141ef1cc0 FUN_141ef1cc0 body=47 status=ok
// SIG undefined FUN_141ef1cc0(void)

longlong FUN_141ef1cc0(void)

{
  if (DAT_146ac4228 == 0) {
    FUN_1417866a0(&DAT_146ac4228,&PTR_FUN_1464cddd0);
  }
  return DAT_146ac4228;
}



// FUNCTION 141ef1cf0 FUN_141ef1cf0 body=47 status=ok
// SIG undefined FUN_141ef1cf0(void)

longlong FUN_141ef1cf0(void)

{
  if (DAT_146ac42e0 == 0) {
    FUN_1417866a0(&DAT_146ac42e0,&PTR_FUN_1464cdf10);
  }
  return DAT_146ac42e0;
}



// FUNCTION 141ef1d20 FUN_141ef1d20 body=47 status=ok
// SIG undefined FUN_141ef1d20(void)

longlong FUN_141ef1d20(void)

{
  if (DAT_146ac42d8 == 0) {
    FUN_1417866a0(&DAT_146ac42d8,&PTR_FUN_1464cdec0);
  }
  return DAT_146ac42d8;
}



// FUNCTION 141ef1d50 FUN_141ef1d50 body=47 status=ok
// SIG undefined FUN_141ef1d50(void)

longlong FUN_141ef1d50(void)

{
  if (DAT_146ac4230 == 0) {
    FUN_1417866a0(&DAT_146ac4230,&PTR_FUN_1464cde20);
  }
  return DAT_146ac4230;
}



// FUNCTION 141ef1d80 FUN_141ef1d80 body=47 status=ok
// SIG undefined FUN_141ef1d80(void)

longlong FUN_141ef1d80(void)

{
  if (DAT_146ac4238 == 0) {
    FUN_1417866a0(&DAT_146ac4238,&PTR_FUN_1464cde70);
  }
  return DAT_146ac4238;
}



// FUNCTION 141ef1db0 FUN_141ef1db0 body=47 status=ok
// SIG undefined FUN_141ef1db0(void)

longlong FUN_141ef1db0(void)

{
  if (DAT_146ac4278 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ac4278,&PTR_FUN_1464cd3d0);
  }
  return DAT_146ac4278;
}



// FUNCTION 141ef1de0 FUN_141ef1de0 body=47 status=ok
// SIG undefined FUN_141ef1de0(void)

longlong FUN_141ef1de0(void)

{
  if (DAT_146ac4248 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ac4248,&PTR_FUN_1464cb9d0);
  }
  return DAT_146ac4248;
}



// FUNCTION 141ef1e10 FUN_141ef1e10 body=47 status=ok
// SIG undefined FUN_141ef1e10(void)

longlong FUN_141ef1e10(void)

{
  if (DAT_146ac42f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ac42f0,&PTR_FUN_1464cda00);
  }
  return DAT_146ac42f0;
}



// FUNCTION 141ef1e40 FUN_141ef1e40 body=493 status=ok
// SIG undefined FUN_141ef1e40(void)

void FUN_141ef1e40(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141ee99b0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 141ef2030 execFoliageOverlappingBoxCount body=286 status=ok
// SIG undefined execFoliageOverlappingBoxCount(void)

void UFoliageStatistics::execFoliageOverlappingBoxCount
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res18 = 0;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_30;
  local_18 = local_38;
  uVar1 = FUN_141eea4e0(local_res18,local_res10,&local_28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141ef2150 FUN_141ef2150 body=321 status=ok
// SIG undefined FUN_141ef2150(void)

void FUN_141ef2150(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_20 = local_30;
  local_28 = local_38;
  uVar1 = FUN_141eea920(local_res20,local_res18,&local_28,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141ef22a0 FUN_141ef22a0 body=126 status=ok
// SIG undefined FUN_141ef22a0(void)

void FUN_141ef22a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_141eee1b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141ef2320 FUN_141ef2320 body=807 status=ok
// SIG undefined FUN_141ef2320(void)

int * FUN_141ef2320(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong *_Src;
  bool bVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar7 * 0x20 + *param_1);
  uVar3 = param_3[1];
  *_Src = *(ulonglong *)*param_3;
  FMeshMapBuildLegacyData::FMeshMapBuildLegacyData(_Src + 1,uVar3);
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar11 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      iVar9 = (int)(*_Src >> 4);
      uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
      uVar6 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
      uVar10 = (iVar9 - uVar8) - uVar6 ^ uVar6 >> 0xc;
      uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 << 0x10;
      uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 >> 5;
      uVar10 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 3;
      uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 << 10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar5 +
                      (((longlong)(int)((uVar6 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(ulonglong *)((longlong)iVar9 * 0x20 + *param_1) == *_Src) goto LAB_141ef24ee;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_141ef24ee:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_141ef261e;
    }
  }
  cVar4 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar4 == '\0') {
    iVar7 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(iVar7 + uVar10) ^ uVar10 >> 0xd;
    uVar6 = (iVar7 - uVar10) - uVar8 ^ uVar8 >> 0xc;
    uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 << 0x10;
    uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 5;
    uVar6 = (uVar6 - uVar10) - uVar8 ^ uVar8 >> 3;
    uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 << 10;
    uVar6 = ((uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar6;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_141ef261e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 141ef2650 FUN_141ef2650 body=567 status=ok
// SIG undefined FUN_141ef2650(void)

int * FUN_141ef2650(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 *_Src;
  int iVar12;
  uint uVar13;
  char cVar14;
  bool bVar15;
  int local_res8 [2];
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar11 & 0x1f);
  puVar4 = (undefined4 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  bVar15 = false;
  _Src = (undefined4 *)((longlong)iVar11 * 0x20 + *param_1);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  *_Src = *puVar4;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  *(undefined8 *)(_Src + 4) = *puVar5;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_141ef285f;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar9 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar14 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar12;
    }
    uVar9 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar14 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    uVar13 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[7] = uVar13;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[6] = *(undefined4 *)
               ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141ef285f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141ef2890 FUN_141ef2890 body=719 status=ok
// SIG undefined FUN_141ef2890(void)

void FUN_141ef2890(longlong *param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int local_38;
  
  lVar12 = 0;
  local_38 = 0;
  if (0 < (int)param_3[1]) {
    do {
      plVar6 = *(longlong **)(*param_3 + lVar12);
      if (plVar6 == (longlong *)0x0) {
LAB_141ef2925:
        plVar7 = (longlong *)0x0;
      }
      else {
        lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar7 = plVar6;
        if (!bVar2) goto LAB_141ef2925;
      }
      if (plVar6 == (longlong *)0x0) {
LAB_141ef2966:
        plVar9 = (longlong *)0x0;
      }
      else {
        lVar3 = FUN_1429af6e0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar9 = plVar6;
        if (!bVar2) goto LAB_141ef2966;
      }
      if ((plVar6 == (longlong *)0x0) ||
         (piVar4 = (int *)(**(code **)(*plVar6 + 0x290))(plVar6),
         ((piVar4[3] != param_2[3] || piVar4[2] != param_2[2]) || piVar4[1] != param_2[1]) ||
         *param_2 != *piVar4)) {
        if ((plVar7 == (longlong *)0x0) || ((longlong *)plVar7[8] == (longlong *)0x0)) {
          if (plVar9 != (longlong *)0x0) {
            puVar1 = (ulonglong *)plVar9[0x20];
            puVar5 = puVar1;
            if (puVar1 == (ulonglong *)0x0) {
              puVar5 = (ulonglong *)(plVar9 + 0x12);
            }
            plVar6 = (longlong *)*puVar5;
            puVar11 = puVar1 + 2;
            if (puVar1 == (ulonglong *)0x0) {
              puVar11 = (ulonglong *)(plVar9 + 0x14);
            }
            uVar10 = 0;
            uVar8 = (longlong)(int)puVar5[1] & 0x1fffffffffffffff;
            if (plVar6 + (int)puVar5[1] < plVar6) {
              uVar8 = uVar10;
            }
            if (uVar8 != 0) {
              do {
                if (((longlong *)*plVar6 != (longlong *)0x0) &&
                   (lVar3 = (**(code **)(*(longlong *)*plVar6 + 0x2c0))(), lVar3 != 0)) {
                  FUN_141ef2890(param_1,param_2,lVar3,param_4);
                }
                plVar6 = plVar6 + 1;
                uVar10 = uVar10 + 1;
              } while (uVar10 != uVar8);
            }
            plVar6 = (longlong *)*puVar11;
            uVar10 = 0;
            uVar8 = (longlong)(int)puVar11[1] & 0x1fffffffffffffff;
            if (plVar6 + (int)puVar11[1] < plVar6) {
              uVar8 = uVar10;
            }
            if (uVar8 != 0) {
              do {
                if (((longlong *)*plVar6 != (longlong *)0x0) &&
                   (lVar3 = (**(code **)(*(longlong *)*plVar6 + 0x2c0))(), lVar3 != 0)) {
                  FUN_141ef2890(param_1,param_2,lVar3,param_4);
                }
                plVar6 = plVar6 + 1;
                uVar10 = uVar10 + 1;
              } while (uVar10 != uVar8);
            }
          }
        }
        else {
          lVar3 = (**(code **)(*(longlong *)plVar7[8] + 0x2c0))();
          if (lVar3 != 0) {
            FUN_141ef2890(param_1,param_2,lVar3,param_4);
          }
        }
      }
      else {
        lVar3 = FUN_141f1e9d0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && ((*param_4 == 0 || (*param_1 == plVar6[0x14])))) {
          *param_4 = (longlong)plVar6;
        }
      }
      lVar12 = lVar12 + 8;
      local_38 = local_38 + 1;
    } while (local_38 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 141ef2b60 FUN_141ef2b60 body=283 status=ok
// SIG undefined FUN_141ef2b60(void)

void FUN_141ef2b60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
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
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_141ef2b60(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass();
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
            FUN_141f14c00(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ef2c80 FUN_141ef2c80 body=283 status=ok
// SIG undefined FUN_141ef2c80(void)

void FUN_141ef2c80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
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
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_141ef2c80(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass();
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
            FUN_141f14ce0(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ef2da0 FUN_141ef2da0 body=283 status=ok
// SIG undefined FUN_141ef2da0(void)

void FUN_141ef2da0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
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
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_141ef2da0(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UPawnAction_Sequence::StaticClass();
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
            FUN_141f14d80(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ef2ec0 FUN_141ef2ec0 body=283 status=ok
// SIG undefined FUN_141ef2ec0(void)

void FUN_141ef2ec0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
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
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_141ef2ec0(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = FUN_141f1e9d0();
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
            FUN_141f14e20(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ef2fe0 FUN_141ef2fe0 body=283 status=ok
// SIG undefined FUN_141ef2fe0(void)

void FUN_141ef2fe0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
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
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_141ef2fe0(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UMaterialExpressionLandscapeVisibilityMask::GetPrivateStaticClass();
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
            FUN_141f14ec0(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ef3100 FUN_141ef3100 body=1767 status=ok
// SIG undefined FUN_141ef3100(void)

void FUN_141ef3100(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  
  plVar9 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar9 + *(int *)(param_1 + 0x748);
  do {
    if (plVar9 == plVar1) {
      return;
    }
    uVar10 = 0;
    lVar12 = *plVar9;
    if (lVar12 == 0) {
LAB_141ef31b3:
      lVar3 = 0;
    }
    else {
      lVar3 = UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar3 = lVar12;
      if (!bVar2) goto LAB_141ef31b3;
    }
    if (lVar12 == 0) {
LAB_141ef31f5:
      lVar4 = 0;
    }
    else {
      lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = lVar12;
      if (!bVar2) goto LAB_141ef31f5;
    }
    if (lVar12 == 0) {
LAB_141ef3232:
      lVar12 = 0;
    }
    else {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141ef3232;
    }
    local_60 = 0;
    local_58 = 0x202ffff;
    local_54 = -1;
    if (lVar3 == 0) {
      if (lVar4 == 0) {
        if (lVar12 != 0) {
          local_88 = *(longlong **)(lVar12 + 0x100);
          local_80 = local_88 + 2;
          if (local_88 == (longlong *)0x0) {
            local_88 = (longlong *)(lVar12 + 0x90);
            local_80 = (longlong *)(lVar12 + 0xa0);
          }
          if (param_4 != (longlong *)0x0) {
            plVar6 = (longlong *)*param_4;
            plVar8 = plVar6 + (longlong)(int)param_4[1] * 0xd;
            if (plVar6 != plVar8) {
              do {
                if (*plVar6 == *(longlong *)(lVar12 + 0x40)) {
                  local_88 = plVar6 + 2;
                  local_80 = plVar6 + 4;
                  break;
                }
                plVar6 = plVar6 + 0xd;
              } while (plVar6 != plVar8);
            }
          }
          iVar13 = 0;
          local_60 = uVar10;
          if (0 < (int)local_88[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_88 + local_78) != (longlong *)0x0) {
                local_58 = local_58 & 0xffffff;
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_88 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2b60(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UMaterialExpressionLandscapeLayerBlend::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14c00(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14c00(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_88[1]);
          }
          iVar13 = 0;
          if (0 < (int)local_80[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_80 + local_78) != (longlong *)0x0) {
                local_58 = CONCAT13(1,(undefined3)local_58);
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_80 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2b60(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UMaterialExpressionLandscapeLayerBlend::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14c00(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14c00(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_80[1]);
          }
        }
      }
      else {
        local_60 = uVar10;
        if (*(longlong *)(lVar4 + 0x40) != 0) {
          FUN_141ef2b60(*(longlong *)(lVar4 + 0x40),param_2,param_3,&local_60);
        }
      }
    }
    else {
      local_60 = uVar10;
      FUN_141f14c00(lVar3,param_2,param_3,&local_60);
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 141ef37f0 FUN_141ef37f0 body=1767 status=ok
// SIG undefined FUN_141ef37f0(void)

void FUN_141ef37f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  
  plVar9 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar9 + *(int *)(param_1 + 0x748);
  do {
    if (plVar9 == plVar1) {
      return;
    }
    uVar10 = 0;
    lVar12 = *plVar9;
    if (lVar12 == 0) {
LAB_141ef38a3:
      lVar3 = 0;
    }
    else {
      lVar3 = UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar3 = lVar12;
      if (!bVar2) goto LAB_141ef38a3;
    }
    if (lVar12 == 0) {
LAB_141ef38e5:
      lVar4 = 0;
    }
    else {
      lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = lVar12;
      if (!bVar2) goto LAB_141ef38e5;
    }
    if (lVar12 == 0) {
LAB_141ef3922:
      lVar12 = 0;
    }
    else {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141ef3922;
    }
    local_60 = 0;
    local_58 = 0x202ffff;
    local_54 = -1;
    if (lVar3 == 0) {
      if (lVar4 == 0) {
        if (lVar12 != 0) {
          local_88 = *(longlong **)(lVar12 + 0x100);
          local_80 = local_88 + 2;
          if (local_88 == (longlong *)0x0) {
            local_88 = (longlong *)(lVar12 + 0x90);
            local_80 = (longlong *)(lVar12 + 0xa0);
          }
          if (param_4 != (longlong *)0x0) {
            plVar6 = (longlong *)*param_4;
            plVar8 = plVar6 + (longlong)(int)param_4[1] * 0xd;
            if (plVar6 != plVar8) {
              do {
                if (*plVar6 == *(longlong *)(lVar12 + 0x40)) {
                  local_88 = plVar6 + 2;
                  local_80 = plVar6 + 4;
                  break;
                }
                plVar6 = plVar6 + 0xd;
              } while (plVar6 != plVar8);
            }
          }
          iVar13 = 0;
          local_60 = uVar10;
          if (0 < (int)local_88[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_88 + local_78) != (longlong *)0x0) {
                local_58 = local_58 & 0xffffff;
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_88 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2c80(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UMaterialExpressionLandscapeLayerSample::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14ce0(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14ce0(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_88[1]);
          }
          iVar13 = 0;
          if (0 < (int)local_80[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_80 + local_78) != (longlong *)0x0) {
                local_58 = CONCAT13(1,(undefined3)local_58);
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_80 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2c80(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UMaterialExpressionLandscapeLayerSample::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14ce0(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14ce0(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_80[1]);
          }
        }
      }
      else {
        local_60 = uVar10;
        if (*(longlong *)(lVar4 + 0x40) != 0) {
          FUN_141ef2c80(*(longlong *)(lVar4 + 0x40),param_2,param_3,&local_60);
        }
      }
    }
    else {
      local_60 = uVar10;
      FUN_141f14ce0(lVar3,param_2,param_3,&local_60);
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 141ef3ee0 FUN_141ef3ee0 body=1767 status=ok
// SIG undefined FUN_141ef3ee0(void)

void FUN_141ef3ee0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  
  plVar9 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar9 + *(int *)(param_1 + 0x748);
  do {
    if (plVar9 == plVar1) {
      return;
    }
    uVar10 = 0;
    lVar12 = *plVar9;
    if (lVar12 == 0) {
LAB_141ef3f93:
      lVar3 = 0;
    }
    else {
      lVar3 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar3 = lVar12;
      if (!bVar2) goto LAB_141ef3f93;
    }
    if (lVar12 == 0) {
LAB_141ef3fd5:
      lVar4 = 0;
    }
    else {
      lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = lVar12;
      if (!bVar2) goto LAB_141ef3fd5;
    }
    if (lVar12 == 0) {
LAB_141ef4012:
      lVar12 = 0;
    }
    else {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141ef4012;
    }
    local_60 = 0;
    local_58 = 0x202ffff;
    local_54 = -1;
    if (lVar3 == 0) {
      if (lVar4 == 0) {
        if (lVar12 != 0) {
          local_88 = *(longlong **)(lVar12 + 0x100);
          local_80 = local_88 + 2;
          if (local_88 == (longlong *)0x0) {
            local_88 = (longlong *)(lVar12 + 0x90);
            local_80 = (longlong *)(lVar12 + 0xa0);
          }
          if (param_4 != (longlong *)0x0) {
            plVar6 = (longlong *)*param_4;
            plVar8 = plVar6 + (longlong)(int)param_4[1] * 0xd;
            if (plVar6 != plVar8) {
              do {
                if (*plVar6 == *(longlong *)(lVar12 + 0x40)) {
                  local_88 = plVar6 + 2;
                  local_80 = plVar6 + 4;
                  break;
                }
                plVar6 = plVar6 + 0xd;
              } while (plVar6 != plVar8);
            }
          }
          iVar13 = 0;
          local_60 = uVar10;
          if (0 < (int)local_88[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_88 + local_78) != (longlong *)0x0) {
                local_58 = local_58 & 0xffffff;
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_88 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2da0(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UPawnAction_Sequence::StaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14d80(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UPawnAction_Sequence::StaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14d80(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_88[1]);
          }
          iVar13 = 0;
          if (0 < (int)local_80[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_80 + local_78) != (longlong *)0x0) {
                local_58 = CONCAT13(1,(undefined3)local_58);
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_80 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2da0(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UPawnAction_Sequence::StaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14d80(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UPawnAction_Sequence::StaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14d80(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_80[1]);
          }
        }
      }
      else {
        local_60 = uVar10;
        if (*(longlong *)(lVar4 + 0x40) != 0) {
          FUN_141ef2da0(*(longlong *)(lVar4 + 0x40),param_2,param_3,&local_60);
        }
      }
    }
    else {
      local_60 = uVar10;
      FUN_141f14d80(lVar3,param_2,param_3,&local_60);
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 141ef45d0 FUN_141ef45d0 body=1767 status=ok
// SIG undefined FUN_141ef45d0(void)

void FUN_141ef45d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  
  plVar9 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar9 + *(int *)(param_1 + 0x748);
  do {
    if (plVar9 == plVar1) {
      return;
    }
    uVar10 = 0;
    lVar12 = *plVar9;
    if (lVar12 == 0) {
LAB_141ef4683:
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_141f1e9d0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar3 = lVar12;
      if (!bVar2) goto LAB_141ef4683;
    }
    if (lVar12 == 0) {
LAB_141ef46c5:
      lVar4 = 0;
    }
    else {
      lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = lVar12;
      if (!bVar2) goto LAB_141ef46c5;
    }
    if (lVar12 == 0) {
LAB_141ef4702:
      lVar12 = 0;
    }
    else {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141ef4702;
    }
    local_60 = 0;
    local_58 = 0x202ffff;
    local_54 = -1;
    if (lVar3 == 0) {
      if (lVar4 == 0) {
        if (lVar12 != 0) {
          local_88 = *(longlong **)(lVar12 + 0x100);
          local_80 = local_88 + 2;
          if (local_88 == (longlong *)0x0) {
            local_88 = (longlong *)(lVar12 + 0x90);
            local_80 = (longlong *)(lVar12 + 0xa0);
          }
          if (param_4 != (longlong *)0x0) {
            plVar6 = (longlong *)*param_4;
            plVar8 = plVar6 + (longlong)(int)param_4[1] * 0xd;
            if (plVar6 != plVar8) {
              do {
                if (*plVar6 == *(longlong *)(lVar12 + 0x40)) {
                  local_88 = plVar6 + 2;
                  local_80 = plVar6 + 4;
                  break;
                }
                plVar6 = plVar6 + 0xd;
              } while (plVar6 != plVar8);
            }
          }
          iVar13 = 0;
          local_60 = uVar10;
          if (0 < (int)local_88[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_88 + local_78) != (longlong *)0x0) {
                local_58 = local_58 & 0xffffff;
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_88 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2ec0(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = FUN_141f1e9d0();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14e20(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = FUN_141f1e9d0();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14e20(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_88[1]);
          }
          iVar13 = 0;
          if (0 < (int)local_80[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_80 + local_78) != (longlong *)0x0) {
                local_58 = CONCAT13(1,(undefined3)local_58);
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_80 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2ec0(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = FUN_141f1e9d0();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14e20(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = FUN_141f1e9d0();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14e20(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_80[1]);
          }
        }
      }
      else {
        local_60 = uVar10;
        if (*(longlong *)(lVar4 + 0x40) != 0) {
          FUN_141ef2ec0(*(longlong *)(lVar4 + 0x40),param_2,param_3,&local_60);
        }
      }
    }
    else {
      local_60 = uVar10;
      FUN_141f14e20(lVar3,param_2,param_3,&local_60);
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 141ef4cc0 FUN_141ef4cc0 body=1767 status=ok
// SIG undefined FUN_141ef4cc0(void)

void FUN_141ef4cc0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  
  plVar9 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar9 + *(int *)(param_1 + 0x748);
  do {
    if (plVar9 == plVar1) {
      return;
    }
    uVar10 = 0;
    lVar12 = *plVar9;
    if (lVar12 == 0) {
LAB_141ef4d73:
      lVar3 = 0;
    }
    else {
      lVar3 = UMaterialExpressionLandscapeVisibilityMask::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar3 = lVar12;
      if (!bVar2) goto LAB_141ef4d73;
    }
    if (lVar12 == 0) {
LAB_141ef4db5:
      lVar4 = 0;
    }
    else {
      lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = lVar12;
      if (!bVar2) goto LAB_141ef4db5;
    }
    if (lVar12 == 0) {
LAB_141ef4df2:
      lVar12 = 0;
    }
    else {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141ef4df2;
    }
    local_60 = 0;
    local_58 = 0x202ffff;
    local_54 = -1;
    if (lVar3 == 0) {
      if (lVar4 == 0) {
        if (lVar12 != 0) {
          local_88 = *(longlong **)(lVar12 + 0x100);
          local_80 = local_88 + 2;
          if (local_88 == (longlong *)0x0) {
            local_88 = (longlong *)(lVar12 + 0x90);
            local_80 = (longlong *)(lVar12 + 0xa0);
          }
          if (param_4 != (longlong *)0x0) {
            plVar6 = (longlong *)*param_4;
            plVar8 = plVar6 + (longlong)(int)param_4[1] * 0xd;
            if (plVar6 != plVar8) {
              do {
                if (*plVar6 == *(longlong *)(lVar12 + 0x40)) {
                  local_88 = plVar6 + 2;
                  local_80 = plVar6 + 4;
                  break;
                }
                plVar6 = plVar6 + 0xd;
              } while (plVar6 != plVar8);
            }
          }
          iVar13 = 0;
          local_60 = uVar10;
          if (0 < (int)local_88[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_88 + local_78) != (longlong *)0x0) {
                local_58 = local_58 & 0xffffff;
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_88 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2fe0(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UMaterialExpressionLandscapeVisibilityMask::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14ec0(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UMaterialExpressionLandscapeVisibilityMask::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14ec0(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_88[1]);
          }
          iVar13 = 0;
          if (0 < (int)local_80[1]) {
            local_78 = 0;
            do {
              if (*(longlong **)(*local_80 + local_78) != (longlong *)0x0) {
                local_58 = CONCAT13(1,(undefined3)local_58);
                local_54 = iVar13;
                plVar6 = (longlong *)(**(code **)(**(longlong **)(*local_80 + local_78) + 0x2b0))();
                if (plVar6 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
                  plVar8 = (longlong *)*plVar6;
                  plVar6 = plVar8 + (int)plVar6[1];
                  for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                    lVar12 = *plVar8;
                    if (lVar12 != 0) {
                      lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
                           (plVar7 = (longlong *)
                                     (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x2b0))(),
                           plVar7 != (longlong *)0x0)) {
                          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2c0))(plVar7);
                          plVar11 = (longlong *)*plVar7;
                          plVar7 = plVar11 + (int)plVar7[1];
                          for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                            lVar12 = *plVar11;
                            if (lVar12 != 0) {
                              lVar3 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass
                                                ();
                              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                   *(int *)(lVar3 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (*(longlong *)(lVar12 + 0x40) != 0) {
                                  FUN_141ef2fe0(*(longlong *)(lVar12 + 0x40),param_2,param_3,
                                                &local_60);
                                }
                              }
                              else {
                                lVar3 = UMaterialExpressionLandscapeVisibilityMask::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                     *(int *)(lVar3 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  FUN_141f14ec0(lVar12,param_2,param_3,&local_60);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar3 = UMaterialExpressionLandscapeVisibilityMask::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_141f14ec0(lVar12,param_2,param_3,&local_60);
                        }
                      }
                    }
                  }
                }
              }
              local_78 = local_78 + 8;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_80[1]);
          }
        }
      }
      else {
        local_60 = uVar10;
        if (*(longlong *)(lVar4 + 0x40) != 0) {
          FUN_141ef2fe0(*(longlong *)(lVar4 + 0x40),param_2,param_3,&local_60);
        }
      }
    }
    else {
      local_60 = uVar10;
      FUN_141f14ec0(lVar3,param_2,param_3,&local_60);
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 141ef53b0 FUN_141ef53b0 body=33 status=ok
// SIG undefined FUN_141ef53b0(void)

undefined8 * FUN_141ef53b0(undefined8 *param_1)

{
  FUN_141ef54a0();
  *param_1 = &PTR__scalar_deleting_destructor__144ee7268;
  return param_1;
}



// FUNCTION 141ef53e0 FUN_141ef53e0 body=181 status=ok
// SIG undefined FUN_141ef53e0(void)

undefined8 * FUN_141ef53e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *param_1 = &PTR_FUN_144088fb8;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LandscapeMeshProxyComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_141f1f590();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc58);
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  FUN_1423974f0(param_1[0x8b],0);
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 141ef54a0 FUN_141ef54a0 body=732 status=ok
// SIG undefined FUN_141ef54a0(void)

undefined8 * FUN_141ef54a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__144ee6ad8;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
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
  *(undefined1 *)((longlong)param_1 + 0x574) = 1;
  *(byte *)((longlong)param_1 + 0x581) = *(byte *)((longlong)param_1 + 0x581) & 0xf9 | 1;
  *(uint *)(param_1 + 0xb2) = *(uint *)(param_1 + 0xb2) & 0xfffffff0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x3f800000;
  FUN_1426852e0(param_1 + 0xb7);
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xfa] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 7;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef;
  *(uint *)((longlong)param_1 + 0x57c) = *(uint *)((longlong)param_1 + 0x57c) | 4;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf | 8;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RootComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x2d] = lVar4;
  *(undefined8 *)(lVar4 + 0x204) = 0x4300000043000000;
  *(undefined4 *)(lVar4 + 0x20c) = 0x43800000;
  *(undefined1 *)(param_1[0x2d] + 0x24e) = 0;
  *(undefined4 *)(param_1 + 0x8e) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x474) = DAT_1468b5ca4;
  *(uint *)(param_1 + 0xef) = *(uint *)(param_1 + 0xef) | 1;
  *(undefined4 *)(param_1 + 0xaf) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x57c) = *(uint *)((longlong)param_1 + 0x57c) & 0xfffffffd | 1;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8f) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 1;
  *(undefined4 *)(param_1 + 0x92) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f266666;
  *(undefined1 *)((longlong)param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x93) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x91) = 0x3fe00000;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb6) = 0x41800000;
  FUN_1426a8ca0(param_1 + 0xb7,DAT_146aefc60);
  *(uint *)(param_1 + 0xed) = *(uint *)(param_1 + 0xed) & 0xfffffffe;
  *(int *)(param_1 + 0xae) = DAT_146ac4400;
  DAT_146ac4400 = DAT_146ac4400 + 1;
  return param_1;
}



// FUNCTION 141ef5780 FUN_141ef5780 body=66 status=ok
// SIG undefined FUN_141ef5780(void)

undefined8 * FUN_141ef5780(undefined8 *param_1)

{
  FUN_141ef54a0();
  *param_1 = &PTR_FUN_144ee7980;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  return param_1;
}



// FUNCTION 141ef57d0 FMeshMapBuildLegacyData body=107 status=ok
// SIG undefined FMeshMapBuildLegacyData(void)

undefined8 *
FMeshMapBuildLegacyData::FMeshMapBuildLegacyData(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  return param_1;
}



// FUNCTION 141ef5840 FUN_141ef5840 body=792 status=ok
// SIG undefined FUN_141ef5840(void)

undefined8 * FUN_141ef5840(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_14237eb90();
  puVar6 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144ee8310;
  plVar1 = param_1 + 0xe3;
  param_1[5] = &PTR_LAB_144ee8bf8;
  param_1[0x5a] = &PTR_LAB_144ee8c28;
  *plVar1 = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0x3f800000;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0xffffffff;
  param_1[0xf7] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x814) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  puVar4 = (undefined8 *)operator_new(0x60);
  puVar7 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    puVar7 = puVar4;
  }
  puVar5 = (undefined8 *)operator_new(0x18);
  puVar4 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_DestroyObject_144eeacd0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = puVar7;
    puVar4 = puVar5;
  }
  param_1[0x10f] = puVar7;
  param_1[0x110] = puVar4;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x10f,puVar7,puVar7);
  puVar4 = (undefined8 *)operator_new(0xa0);
  puVar7 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x84) = 0;
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 0;
    puVar7 = puVar4;
  }
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_LAB_144eeacc0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar7;
    puVar6 = puVar4;
  }
  param_1[0x111] = puVar7;
  param_1[0x112] = puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x111,puVar7,puVar7);
  FUN_142717130(param_1);
  FUN_1423974f0(param_1);
  *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) | 8;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 0x51;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) & 0xbf;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  iVar2 = *(int *)(param_1 + 0xe4);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0xe4) = iVar3;
  if (*(int *)((longlong)param_1 + 0x724) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = 0;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 1;
  *(undefined4 *)(param_1 + 0x101) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0xffffffff;
  param_1[0xec] = 0;
  param_1[0xed] = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xdf;
  *(byte *)((longlong)param_1 + 0x2f3) = *(byte *)((longlong)param_1 + 0x2f3) & 0xf7;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 141ef5b60 FUN_141ef5b60 body=266 status=ok
// SIG undefined FUN_141ef5b60(void)

undefined8 * FUN_141ef5b60(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_144ee96b0;
  param_1[5] = &PTR_LAB_144ee9fa8;
  param_1[0x5a] = &PTR_LAB_144ee9fd8;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0xffffffff;
  param_1[0xeb] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  FNavHeightfieldSamples::FNavHeightfieldSamples(param_1 + 0xf4);
  FUN_142717130(param_1,DAT_146aefc60);
  FUN_1423974f0(param_1,0);
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xef;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 1;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  param_1[0xf3] = 0xffffffffffffffff;
  FUN_1423511e0(param_1);
  return param_1;
}



// FUNCTION 141ef5c70 ULandscapeInfo body=341 status=ok
// SIG undefined ULandscapeInfo(void)

undefined8 * ULandscapeInfo::ULandscapeInfo(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144ee8098;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return param_1;
}



// FUNCTION 141ef5dd0 FUN_141ef5dd0 body=277 status=ok
// SIG undefined FUN_141ef5dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141ef5dd0(undefined8 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [48];
  undefined2 *local_38;
  int local_30;
  byte local_28;
  byte local_27;
  byte local_26;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_141781840();
  *param_1 = &PTR_FUN_1445cacb0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f000000;
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    UObjectBaseUtility::GetPathName(param_1,&local_38,0);
    if (local_30 == 0) {
      local_30 = 0;
      puVar2 = &DAT_143f3eda8;
    }
    else {
      local_30 = local_30 + -1;
      puVar2 = local_38;
    }
    FSHA1::HashBuffer(puVar2,local_30 * 2,&local_28);
    *(float *)(param_1 + 9) = (float)local_28 * 0.003921569;
    *(float *)((longlong)param_1 + 0x4c) = (float)local_27 * 0.003921569;
    *(float *)(param_1 + 10) = (float)local_26 * 0.003921569;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free(local_38,(float)local_27 * 0.003921569,(float)local_26 * 0.003921569);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 141ef5ef0 FUN_141ef5ef0 body=338 status=ok
// SIG undefined FUN_141ef5ef0(void)

undefined8 * FUN_141ef5ef0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_144ee96b0;
  param_1[5] = &PTR_LAB_144ee9fa8;
  param_1[0x5a] = &PTR_LAB_144ee9fd8;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0xffffffff;
  param_1[0xeb] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  FNavHeightfieldSamples::FNavHeightfieldSamples(param_1 + 0xf4);
  FUN_142717130(param_1,DAT_146aefc60);
  FUN_1423974f0(param_1,0);
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xef;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 1;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  param_1[0xf3] = 0xffffffffffffffff;
  FUN_1423511e0(param_1);
  *param_1 = &PTR_FUN_144eea038;
  param_1[5] = &PTR_LAB_144eea930;
  param_1[0x5a] = &PTR_LAB_144eea960;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x80;
  return param_1;
}



// FUNCTION 141ef6050 FUN_141ef6050 body=88 status=ok
// SIG undefined FUN_141ef6050(void)

undefined8 * FUN_141ef6050(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR__scalar_deleting_destructor__144ee8c80;
  param_1[5] = &PTR_LAB_144ee9600;
  param_1[0x5a] = &PTR_LAB_144ee9630;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  return param_1;
}



// FUNCTION 141ef60b0 FUN_141ef60b0 body=224 status=ok
// SIG undefined FUN_141ef60b0(void)

undefined8 * FUN_141ef60b0(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 local_res8 [4];
  
  FUN_14255dee0();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144eea9b8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ac4428) {
    _Init_thread_header(&DAT_146ac4428);
    if (DAT_146ac4428 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac4408,L"Landscape",L"Landscape",L"Landscape");
      FName::FName(&DAT_146ac4420,"Landscape",1);
      atexit(FUN_143ea1bc0);
      _Init_thread_footer(&DAT_146ac4428);
    }
  }
  FName::FName(local_res8,L"AutoPaint",1);
  param_1[8] = local_res8[0];
  return param_1;
}



// FUNCTION 141ef6190 FUN_141ef6190 body=495 status=ok
// SIG undefined FUN_141ef6190(void)

void FUN_141ef6190(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar5;
  
  uVar5 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ee6ad8;
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0xad)) {
    do {
      plVar1 = *(longlong **)(uVar6 + param_1[0xac]);
      plVar2 = (longlong *)plVar1[10];
      if (plVar2 == (longlong *)0x0) {
        LOCK();
        bVar7 = (int)plVar1[8] == 0;
        if (bVar7) {
          *(int *)(plVar1 + 8) = 0;
        }
        UNLOCK();
        if (!bVar7) {
          FSlateTextBlockLayout::SetDebugSourceInfo(plVar1 + 1);
          LOCK();
          *(int *)(plVar1 + 8) = (int)plVar1[8] + -1;
          UNLOCK();
        }
code_r0x000141ef6229:
        if (plVar1[10] != 0) {
          (**(code **)(*(longlong *)plVar1[9] + 0x20))((longlong *)plVar1[9],0xffffffff,0);
          goto LAB_141ef6241;
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,plVar1);
        if (cVar3 == '\0') goto code_r0x000141ef6229;
        FSlateTextBlockLayout::SetDebugSourceInfo(plVar1 + 1);
        LOCK();
        *(int *)(plVar1 + 8) = (int)plVar1[8] + -1;
        UNLOCK();
        if ((longlong *)plVar1[9] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar1[9] + 0x10))();
        }
LAB_141ef6241:
        plVar1[10] = 0;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0xad));
  }
  *(undefined4 *)(param_1 + 0xad) = 0;
  if (*(int *)((longlong)param_1 + 0x56c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xac,0);
  }
  plVar1 = (longlong *)param_1[0xfa];
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
  *(undefined4 *)(param_1 + 0xf9) = 0;
  if (param_1[0xf8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf0);
  FUN_14061f570(param_1 + 0xb7);
  if (param_1[0xac] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if (param_1[0xaa] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa2);
  if (param_1[0xa0] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9c] != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 141ef6380 FUN_141ef6380 body=152 status=ok
// SIG undefined FUN_141ef6380(void)

void FUN_141ef6380(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FMemory::Free();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x790);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 141ef6480 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNetDriverEOS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141ef6190();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7d8);
  }
  return param_1;
}



// FUNCTION 141ef64c0 FUN_141ef64c0 body=52 status=ok
// SIG undefined FUN_141ef64c0(void)

undefined8 FUN_141ef64c0(undefined8 param_1,ulonglong param_2)

{
  FUN_141ef6190();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f8);
  }
  return param_1;
}



// FUNCTION 141ef6500 `scalar_deleting_destructor' body=182 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong * FInputKeyManager::_scalar_deleting_destructor_(longlong *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141ef65c0 `scalar_deleting_destructor' body=177 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
ULandscapeHeightfieldCollisionComponent::FPhysXHeightfieldRef::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ee96a8;
  iVar1 = DAT_146b089b8;
  if (param_1[6] != 0) {
    lVar2 = (longlong)DAT_146b089b8;
    DAT_146b089b8 = DAT_146b089b8 + 1;
    if (DAT_146b089bc < DAT_146b089b8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b089b0,iVar1);
    }
    *(undefined8 *)(DAT_146b089b0 + lVar2 * 8) = param_1[6];
    param_1[6] = 0;
  }
  TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_1464cdf70,param_1 + 2);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141ef6680 `scalar_deleting_destructor' body=177 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
ULandscapeMeshCollisionComponent::FPhysXMeshRef::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eea030;
  iVar1 = DAT_146b089a8;
  if (param_1[6] != 0) {
    lVar2 = (longlong)DAT_146b089a8;
    DAT_146b089a8 = DAT_146b089a8 + 1;
    if (DAT_146b089ac < DAT_146b089a8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b089a0,iVar1);
    }
    *(undefined8 *)(DAT_146b089a0 + lVar2 * 8) = param_1[6];
    param_1[6] = 0;
  }
  TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_1464cdfc0,param_1 + 2);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ef6740 FUN_141ef6740 body=304 status=ok
// SIG undefined FUN_141ef6740(void)

longlong FUN_141ef6740(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x890);
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
  plVar4 = *(longlong **)(param_1 + 0x880);
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
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (param_1 + 0x858);
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
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
    FMemory::operator_delete(param_1,0x8a0);
  }
  return param_1;
}



// FUNCTION 141ef6870 FUN_141ef6870 body=52 status=ok
// SIG undefined FUN_141ef6870(void)

undefined8 FUN_141ef6870(undefined8 param_1,ulonglong param_2)

{
  FUN_141ef6380();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,2000);
  }
  return param_1;
}



// FUNCTION 141ef68b0 `scalar_deleting_destructor' body=250 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULandscapeInfo::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 141ef69b0 FUN_141ef69b0 body=84 status=ok
// SIG undefined FUN_141ef69b0(void)

longlong FUN_141ef69b0(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x7e0);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_141ef6380(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 141ef6a10 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AHMCameraActor::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FMemory::Free();
  }
  FUN_1423c53e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,2000);
  }
  return param_1;
}



// FUNCTION 141ef6a60 FUN_141ef6a60 body=70 status=ok
// SIG undefined FUN_141ef6a60(void)

longlong FUN_141ef6a60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}


