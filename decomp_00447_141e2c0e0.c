// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141e2c0e0 FUN_141e2c0e0 body=57 status=ok
// SIG undefined FUN_141e2c0e0(void)

void FUN_141e2c0e0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48) + 200) + 0x28);
  FUN_141e53c10(*(longlong *)(param_1 + 0x4f8),*(undefined1 *)(lVar1 + (longlong)param_3 * 4),
                *(undefined2 *)(lVar1 + 2 + (longlong)param_3 * 4),param_4,0x7fffffff);
  return;
}



// FUNCTION 141e2c240 FUN_141e2c240 body=255 status=ok
// SIG undefined FUN_141e2c240(void)

void FUN_141e2c240(longlong param_1,LARGE_INTEGER param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res10;
  
  local_res10 = param_2;
  lVar3 = FUN_141e28340(param_4);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_res10,*(undefined8 *)(lVar3 + 0x18));
  if (local_res10.s.LowPart == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x380) + (longlong)(int)local_res10.s.LowPart * 0x18;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x500) + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 200) + 8);
  FVulkanCommonPipelineDescriptorState::SetTexture
            (lVar1,*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
             *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4),lVar3,*(undefined4 *)(lVar4 + 8));
  QueryPerformanceCounter(&local_res10);
  dVar5 = (double)(float)((double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0);
  if (dVar5 != **(double **)(param_4 + 0x48)) {
    **(double **)(param_4 + 0x48) = dVar5;
  }
  return;
}



// FUNCTION 141e2c340 FUN_141e2c340 body=250 status=ok
// SIG undefined FUN_141e2c340(void)

void FUN_141e2c340(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_141e28340(param_4);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_res8,*(undefined8 *)(lVar3 + 0x18));
  if (local_res8.s.LowPart == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x380) + (longlong)(int)local_res8.s.LowPart * 0x18;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 200) + 0x48);
  FVulkanCommonPipelineDescriptorState::SetTexture
            (lVar1,*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
             *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4),lVar3,*(undefined4 *)(lVar4 + 8));
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)(float)((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                          DAT_1468b02f8 + 16777216.0);
  if (dVar5 != **(double **)(param_4 + 0x48)) {
    **(double **)(param_4 + 0x48) = dVar5;
  }
  return;
}



// FUNCTION 141e2c440 FUN_141e2c440 body=250 status=ok
// SIG undefined FUN_141e2c440(void)

void FUN_141e2c440(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_141e28340(param_4);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_res8,*(undefined8 *)(lVar3 + 0x18));
  if (local_res8.s.LowPart == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x380) + (longlong)(int)local_res8.s.LowPart * 0x18;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 200) + 0x38);
  FVulkanCommonPipelineDescriptorState::SetTexture
            (lVar1,*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
             *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4),lVar3,*(undefined4 *)(lVar4 + 8));
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)(float)((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                          DAT_1468b02f8 + 16777216.0);
  if (dVar5 != **(double **)(param_4 + 0x48)) {
    **(double **)(param_4 + 0x48) = dVar5;
  }
  return;
}



// FUNCTION 141e2c540 FUN_141e2c540 body=250 status=ok
// SIG undefined FUN_141e2c540(void)

void FUN_141e2c540(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_141e28340(param_4);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_res8,*(undefined8 *)(lVar3 + 0x18));
  if (local_res8.s.LowPart == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x380) + (longlong)(int)local_res8.s.LowPart * 0x18;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 200) + 0x40);
  FVulkanCommonPipelineDescriptorState::SetTexture
            (lVar1,*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
             *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4),lVar3,*(undefined4 *)(lVar4 + 8));
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)(float)((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                          DAT_1468b02f8 + 16777216.0);
  if (dVar5 != **(double **)(param_4 + 0x48)) {
    **(double **)(param_4 + 0x48) = dVar5;
  }
  return;
}



// FUNCTION 141e2c640 FUN_141e2c640 body=250 status=ok
// SIG undefined FUN_141e2c640(void)

void FUN_141e2c640(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_141e28340(param_4);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_res8,*(undefined8 *)(lVar3 + 0x18));
  if (local_res8.s.LowPart == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x380) + (longlong)(int)local_res8.s.LowPart * 0x18;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 200) + 0x30);
  FVulkanCommonPipelineDescriptorState::SetTexture
            (lVar1,*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
             *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4),lVar3,*(undefined4 *)(lVar4 + 8));
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)(float)((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                          DAT_1468b02f8 + 16777216.0);
  if (dVar5 != **(double **)(param_4 + 0x48)) {
    **(double **)(param_4 + 0x48) = dVar5;
  }
  return;
}



// FUNCTION 141e2c740 FUN_141e2c740 body=250 status=ok
// SIG undefined FUN_141e2c740(void)

void FUN_141e2c740(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_141e28340(param_4);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_res8,*(undefined8 *)(lVar3 + 0x18));
  if (local_res8.s.LowPart == 0xffffffff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x380) + (longlong)(int)local_res8.s.LowPart * 0x18;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 200) + 0x28);
  FVulkanCommonPipelineDescriptorState::SetTexture
            (lVar1,*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
             *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4),lVar3,*(undefined4 *)(lVar4 + 8));
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)(float)((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                          DAT_1468b02f8 + 16777216.0);
  if (dVar5 != **(double **)(param_4 + 0x48)) {
    **(double **)(param_4 + 0x48) = dVar5;
  }
  return;
}



// FUNCTION 141e2c840 FUN_141e2c840 body=361 status=ok
// SIG undefined FUN_141e2c840(void)

void FUN_141e2c840(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_3;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x500) + 0x20);
  plVar4 = *(longlong **)(lVar9 + 200);
  lVar1 = *(longlong *)(param_2 + 0x58) + lVar10 * 0x28;
  cVar7 = FUN_141e308a0(*(char *)(param_2 + 0xdc) != '\0');
  lVar6 = DAT_146aafdc8;
  if (cVar7 == '\0') {
    FPackedUniformBuffers::SetEmulatedUniformBufferIntoPacked
              (lVar9 + 0xd0,param_3,param_4 + 0x38,lVar9 + 0x108);
  }
  else if (*(char *)(lVar1 + 6) == '\0') {
    lVar5 = *plVar4;
    uVar2 = *(undefined1 *)(lVar5 + lVar10 * 6);
    uVar3 = *(undefined2 *)(lVar5 + 2 + lVar10 * 6);
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar7 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
      lVar10 = 4;
    }
    else {
      lVar10 = 0;
    }
    if (*(int *)(lVar10 + lVar6) < 2) {
      FVulkanCommonPipelineDescriptorState::SetUniformBuffer<0>(lVar9,uVar2,uVar3,param_4);
    }
    else {
      FVulkanCommonPipelineDescriptorState::SetUniformBuffer<1>();
    }
  }
  if (*(int *)(lVar1 + 0x10) != 0) {
    lVar9 = param_2 + 0x38;
    if (param_2 == 0) {
      lVar9 = 0;
    }
    FUN_141e1f9a0(param_1,*(undefined8 *)(param_1 + 0x500),lVar9,param_2 + 0x68,param_2 + 0x78,lVar1
                  ,param_4,plVar4[4] + 0x10);
  }
  return;
}



// FUNCTION 141e2c9b0 RHISetShaderUniformBuffer body=47 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FVulkanCommandListContext::RHISetShaderUniformBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141e2e5e0(param_1,4,param_4,param_3,lVar1);
  return;
}



// FUNCTION 141e2c9e0 RHISetShaderUniformBuffer body=47 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FVulkanCommandListContext::RHISetShaderUniformBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141e2e5e0(param_1,2,param_4,param_3,lVar1);
  return;
}



// FUNCTION 141e2ca10 RHISetShaderUniformBuffer body=47 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FVulkanCommandListContext::RHISetShaderUniformBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141e2e5e0(param_1,3,param_4,param_3,lVar1);
  return;
}



// FUNCTION 141e2ca40 RHISetShaderUniformBuffer body=47 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FVulkanCommandListContext::RHISetShaderUniformBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141e2e5e0(param_1,1,param_4,param_3,lVar1);
  return;
}



// FUNCTION 141e2ca70 RHISetShaderUniformBuffer body=44 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FVulkanCommandListContext::RHISetShaderUniformBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x30;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141e2e5e0(param_1,0,param_4,param_3,lVar1);
  return;
}



// FUNCTION 141e2caf0 FUN_141e2caf0 body=132 status=ok
// SIG undefined FUN_141e2caf0(void)

void FUN_141e2caf0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x20) + 200) + 8);
  FUN_141e53dd0(*(longlong *)(param_1 + 0x500),*(undefined1 *)(lVar2 + (longlong)param_3 * 4),
                *(undefined2 *)(lVar2 + 2 + (longlong)param_3 * 4));
  if ((*(char *)(param_1 + 0x199) != '\0') && (param_4 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x500);
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x14) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 8,iVar1);
    }
    *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar1 * 8) = param_4;
  }
  return;
}



// FUNCTION 141e2cb80 FUN_141e2cb80 body=542 status=ok
// SIG undefined FUN_141e2cb80(void)

void FUN_141e2cb80(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar5 = *(longlong *)(param_1 + 0x188);
  if ((*(char *)(lVar5 + 0x1438) != '\0') && (param_1 == *(longlong *)(lVar5 + 0x18b8))) {
    lVar5 = *(longlong *)(lVar5 + 0x18b0);
    FUN_141e2cb80(lVar5);
    puVar3 = (undefined8 *)operator_new(0x20);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x188);
      *puVar3 = &PTR_FUN_1440104c8;
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR__scalar_deleting_destructor__144e9c550;
      puVar3[2] = lVar4;
      local_24 = 0;
      local_1c = 0;
      local_14 = 0;
      puVar3[3] = 0;
      local_28 = 9;
      iVar2 = (*DAT_146ab0020)(*(undefined8 *)(lVar4 + 8),&local_28,0);
      if (iVar2 != 0) {
        FUN_141e67d70(iVar2,
                      "VulkanRHI::vkCreateSemaphore(Device.GetInstanceHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &SemaphoreHandle)"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                      ,0x984);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar4 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar4,0,0);
      lVar4 = *(longlong *)(param_1 + 0x2d8);
    }
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(lVar4,puVar3);
    lVar5 = *(longlong *)(lVar5 + 0x2d8);
    if (*(longlong *)(lVar5 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar5,0,0);
    }
    lVar5 = *(longlong *)(lVar5 + 0x70);
    iVar2 = *(int *)(lVar5 + 0x58);
    *(int *)(lVar5 + 0x58) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x5c) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x50,iVar2);
    }
    *(undefined4 *)(*(longlong *)(lVar5 + 0x50) + (longlong)iVar2 * 4) = 0x800;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    iVar2 = *(int *)(lVar5 + 0x68);
    *(int *)(lVar5 + 0x68) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x6c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar5 + 0x60),iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar2 * 8) = puVar3;
    return;
  }
  if (*(longlong *)(lVar5 + 0x1420) == *(longlong *)(param_1 + 400)) {
    lVar5 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar5 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar5,0,0);
      lVar5 = *(longlong *)(param_1 + 0x2d8);
    }
    *(undefined1 *)(param_1 + 0x198) = 1;
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(lVar5,0);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(*(undefined8 *)(param_1 + 0x2d8));
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x198) = uVar1;
  lVar5 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar5 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar5,0,0);
  }
  if ((*(longlong *)(lVar5 + 0x70) != 0) &&
     (*(char *)(*(longlong *)(lVar5 + 0x70) + 0x2c) == '\x01')) {
    FUN_141e2e380(param_1);
  }
  FVulkanCommandBufferManager::RefreshFenceStatus(*(undefined8 *)(param_1 + 0x2d8),0);
  return;
}



// FUNCTION 141e2cda0 FUN_141e2cda0 body=388 status=ok
// SIG undefined FUN_141e2cda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141e2cda0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    uVar6 = FVulkanIndexBuffer::Swap(param_2,param_3);
    return uVar6;
  }
  puVar7 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)operator_new(0xa8);
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *puVar5 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    puVar5[6] = uVar3;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x3c) = 0x40;
    *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    *puVar5 = &PTR__scalar_deleting_destructor__144e9c5a8;
    puVar5[5] = &PTR_LAB_144e9c5b0;
    *(undefined4 *)(puVar5 + 0x14) = 0;
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    puVar7 = puVar5;
  }
  uVar6 = FVulkanIndexBuffer::Swap(param_2,puVar7);
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (uint *)(puVar7 + 1);
    uVar2 = *puVar1;
    uVar6 = (ulonglong)uVar2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(puVar7 + 2) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))
         ) {
        uVar6 = (**(code **)*puVar7)(puVar7,1);
        return uVar6;
      }
      uVar6 = 0;
      LOCK();
      uVar2 = *(uint *)((longlong)puVar7 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)puVar7 + 0xc) = 1;
      }
      else {
        uVar6 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        uVar6 = TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
      }
    }
  }
  return uVar6;
}



// FUNCTION 141e2cf40 FUN_141e2cf40 body=70 status=ok
// SIG undefined FUN_141e2cf40(void)

void FUN_141e2cf40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x70);
  *(longlong *)(param_2 + 0x20) = lVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar1 + 0x98);
  return;
}



// FUNCTION 141e2cf90 FUN_141e2cf90 body=468 status=ok
// SIG undefined FUN_141e2cf90(void)

void FUN_141e2cf90(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (*(char *)((longlong)param_1 + 0x2c) == '\x04') {
    puVar2 = (undefined8 *)param_1[0x12];
    if (*(int *)(puVar2 + 1) != 1) {
      iVar4 = (*DAT_146ab0010)(*(undefined8 *)(*(longlong *)puVar2[2] + 8),*puVar2);
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          return;
        }
        if (iVar4 == 0) {
          return;
        }
        FUN_141e67d70(iVar4,"Result",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                      ,0x851);
        return;
      }
      *(undefined4 *)(puVar2 + 1) = 1;
    }
    *(byte *)((longlong)param_1 + 0x2d) = *(byte *)((longlong)param_1 + 0x2d) & 0xe1;
    plVar6 = (longlong *)param_1[0xe];
    uVar5 = 0;
    uVar7 = (longlong)*(int *)(param_1 + 0xf) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(param_1 + 0xf) < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        puVar2 = (undefined8 *)*plVar6;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x7c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    (*DAT_146ab01c0)(param_1[8],1);
    lVar3 = param_1[0x12];
    if (*(int *)(lVar3 + 8) != 0) {
      iVar4 = (*DAT_146ab0008)(*(undefined8 *)(**(longlong **)(lVar3 + 0x10) + 8),1,lVar3);
      if (iVar4 != 0) {
        FUN_141e67d70(iVar4,
                      "VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                      ,0x874);
      }
      *(undefined4 *)(lVar3 + 8) = 0;
    }
    param_1[0x13] = param_1[0x13] + 1;
    if ((1 < DAT_1464c9c14) && (param_1[6] != 0)) {
      TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
      ::Reset(param_1 + 0x18);
      FVulkanDescriptorPoolsManager::ReleasePoolSet(*(undefined8 *)(param_1[7] + 0x468),param_1[6]);
      param_1[6] = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 141e2d170 RefreshFenceStatus body=131 status=ok
// SIG undefined RefreshFenceStatus(void)

void FVulkanCommandBufferManager::RefreshFenceStatus(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x10)) != param_2) {
        FUN_141e2cf90();
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x000141e2d1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 141e2d200 RefreshFenceStatus body=131 status=ok
// SIG undefined RefreshFenceStatus(void)

void FVulkanCommandBufferPool::RefreshFenceStatus(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong lVar2;
  int iVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 8)) != param_2) {
        FUN_141e2cf90();
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x000141e2d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 141e2d290 FUN_141e2d290 body=542 status=ok
// SIG undefined FUN_141e2d290(void)

void FUN_141e2d290(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar8 = *(int *)(param_1 + 0x50);
  for (plVar5 = plVar1; plVar5 != plVar1 + iVar8; plVar5 = plVar5 + 1) {
    if (*plVar5 == param_2) {
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
      if (iVar4 != -1) {
        iVar3 = (iVar8 - iVar4) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar4,plVar1 + (iVar8 - iVar3),(longlong)iVar3 << 3);
          iVar8 = *(int *)(param_1 + 0x50);
        }
        *(int *)(param_1 + 0x50) = iVar8 + -1;
      }
      break;
    }
  }
  local_res8 = *(undefined4 *)(param_2 + 0x1c);
  local_resc = *(undefined4 *)(param_2 + 0x18);
  VulkanRHI::FRange::Add(param_1 + 0x38,&local_res8);
  *(longlong *)(param_1 + 0x30) =
       *(longlong *)(param_1 + 0x30) - (ulonglong)*(uint *)(param_2 + 0x18);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  lVar7 = *(longlong *)(param_1 + 8);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  }
  if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x50) == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
    lVar6 = (longlong)*(int *)(param_1 + 0x6c) * 0x10 + lVar7;
    plVar1 = *(longlong **)(lVar6 + 0x28);
    iVar8 = *(int *)(lVar6 + 0x30);
    for (plVar5 = plVar1; plVar5 != plVar1 + iVar8; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        if (iVar4 != -1) {
          iVar3 = (iVar8 - iVar4) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar1 + iVar4,plVar1 + (iVar8 - iVar3),(longlong)iVar3 << 3);
            iVar8 = *(int *)(lVar6 + 0x30);
          }
          *(int *)(lVar6 + 0x30) = iVar8 + -1;
        }
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x28) = DAT_1464aaa90;
    lVar7 = (longlong)*(int *)(param_1 + 0x6c) * 0x10 + lVar7;
    iVar8 = *(int *)(lVar7 + 0xb0);
    *(int *)(lVar7 + 0xb0) = iVar8 + 1;
    if (*(int *)(lVar7 + 0xb4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0xa8,iVar8);
    }
    *(longlong *)(*(longlong *)(lVar7 + 0xa8) + (longlong)iVar8 * 8) = param_1;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e2d4a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  return;
}



// FUNCTION 141e2d4b0 FUN_141e2d4b0 body=577 status=ok
// SIG undefined FUN_141e2d4b0(void)

void FUN_141e2d4b0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb20);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb20);
  }
  plVar7 = (longlong *)*param_1;
  iVar12 = (int)param_1[1];
  if (plVar7 != plVar7 + iVar12) {
    plVar6 = plVar7;
    do {
      if (*plVar6 == *param_3) {
        iVar8 = (int)((longlong)plVar6 - (longlong)plVar7 >> 3);
        if (iVar8 != -1) {
          iVar5 = (iVar12 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar7 + iVar8,plVar7 + (iVar12 - iVar5),(longlong)iVar5 << 3);
            iVar12 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar12 + -1;
        }
        break;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar7 + iVar12);
  }
  uVar3 = DAT_1464aaa90;
  plVar7 = (longlong *)0x0;
  if (param_2 == 0) {
    lVar2 = *param_3;
    iVar12 = (int)param_1[5];
    *(int *)(param_1 + 5) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar12);
    }
    local_18 = (undefined4)lVar2;
    uStack_14 = (undefined4)((ulonglong)lVar2 >> 0x20);
    puVar1 = (undefined4 *)(param_1[4] + (longlong)iVar12 * 0x10);
    *puVar1 = local_18;
    puVar1[1] = uStack_14;
    puVar1[2] = uVar3;
    puVar1[3] = uStack_c;
  }
  else {
    if (0 < (int)param_1[3]) {
      plVar6 = (longlong *)param_1[2];
      plVar9 = plVar7;
      plVar10 = plVar7;
      do {
        if (*plVar6 == param_2) {
          plVar6 = (longlong *)param_1[2] + (longlong)(int)plVar10 * 3;
          goto LAB_141e2d5dc;
        }
        plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
        plVar9 = (longlong *)((longlong)plVar9 + 1);
        plVar6 = plVar6 + 3;
      } while ((longlong)plVar9 < (longlong)(int)param_1[3]);
    }
    iVar12 = (int)param_1[3];
    *(int *)(param_1 + 3) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 2,iVar12);
    }
    plVar9 = (longlong *)(param_1[2] + (longlong)iVar12 * 0x18);
    plVar6 = plVar7;
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar6 = plVar9;
    }
    *plVar6 = param_2;
LAB_141e2d5dc:
    lVar2 = *(longlong *)(param_2 + 0x98);
    if (0 < (int)plVar6[2]) {
      plVar9 = (longlong *)plVar6[1];
      plVar10 = plVar7;
      plVar11 = plVar7;
      do {
        if (*plVar9 == lVar2) {
          plVar7 = (longlong *)plVar6[1] + (longlong)(int)plVar11 * 3;
          goto LAB_141e2d65e;
        }
        plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        plVar9 = plVar9 + 3;
      } while ((longlong)plVar10 < (longlong)(int)plVar6[2]);
    }
    iVar12 = (int)plVar6[2];
    *(int *)(plVar6 + 2) = iVar12 + 1;
    if (*(int *)((longlong)plVar6 + 0x14) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar6 + 1,iVar12);
    }
    plVar6 = (longlong *)(plVar6[1] + (longlong)iVar12 * 0x18);
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar7 = plVar6;
    }
    *plVar7 = lVar2;
LAB_141e2d65e:
    iVar12 = (int)plVar7[2];
    *(int *)(plVar7 + 2) = iVar12 + 1;
    if (*(int *)((longlong)plVar7 + 0x14) < iVar12 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 1,iVar12);
    }
    *(longlong *)(plVar7[1] + (longlong)iVar12 * 8) = *param_3;
  }
  *param_3 = 0;
                    /* WARNING: Could not recover jumptable at 0x000141e2d6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb20);
  return;
}



// FUNCTION 141e2d700 FUN_141e2d700 body=209 status=ok
// SIG undefined FUN_141e2d700(void)

void FUN_141e2d700(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb70);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb70);
  }
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 8) != 0) {
    iVar3 = (*DAT_146ab0008)(*(undefined8 *)(*param_1 + 8),1,lVar1);
    if (iVar3 != 0) {
      FUN_141e67d70(iVar3,"VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)"
                    ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp",
                    0x874);
    }
    *(undefined4 *)(lVar1 + 8) = 0;
  }
  TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_1 + 3,param_2,0);
  iVar3 = (int)param_1[2];
  *(int *)(param_1 + 2) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar3);
  }
  *(longlong *)(param_1[1] + (longlong)iVar3 * 8) = *param_2;
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000141e2d7ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb70);
  return;
}



// FUNCTION 141e2d7e0 ReleaseFreedPages body=288 status=ok
// SIG undefined ReleaseFreedPages(void)

void VulkanRHI::FOldResourceHeap::ReleaseFreedPages(undefined8 *param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = 0;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafaf8);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafaf8);
  }
  iVar8 = *(int *)(param_1 + 10);
  uVar6 = param_2 ^ 1;
  if ((int)uVar6 < iVar8) {
    lVar1 = param_1[9];
    plVar5 = (longlong *)(lVar1 + (longlong)(int)uVar6 * 8);
    do {
      lVar2 = *plVar5;
      if ((param_2 != 0) || (*(int *)(lVar2 + 0x2c) + 10U < DAT_1464aaa90)) {
        iVar4 = (iVar8 - uVar6) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)(int)uVar6 * 8),
                     (void *)(lVar1 + (longlong)(iVar8 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar8 = *(int *)(param_1 + 10);
        }
        *(int *)(param_1 + 10) = iVar8 + -1;
        lVar7 = lVar2;
        break;
      }
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 1;
    } while ((int)uVar6 < iVar8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafaf8);
  if (lVar7 != 0) {
    FDeviceMemoryManager::Free(*(longlong *)*param_1 + 0x10,lVar7 + 8);
    param_1[3] = param_1[3] - (ulonglong)*(uint *)(lVar7 + 0x20);
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar7,0x48);
  }
  return;
}



// FUNCTION 141e2d900 ReleaseFreedPages body=58 status=ok
// SIG undefined ReleaseFreedPages(void)

void VulkanRHI::FResourceHeapManager::ReleaseFreedPages(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x18) +
           (longlong)(int)(DAT_1464aaa90 % *(uint *)(param_1 + 0x20)) * 8);
  if (lVar1 != 0) {
    FOldResourceHeap::ReleaseFreedPages(lVar1,0);
  }
  ReleaseFreedResources(param_1,0);
  return;
}



// FUNCTION 141e2d940 ReleaseFreedResources body=317 status=ok
// SIG undefined ReleaseFreedResources(void)

void VulkanRHI::FResourceHeapManager::ReleaseFreedResources(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  
  plVar8 = (longlong *)0x0;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  }
  if (param_1 + 0x15 != param_1 + 0x25) {
    plVar7 = param_1 + 0x16;
    uVar10 = DAT_1464aaa90;
    do {
      iVar9 = (int)*plVar7;
      iVar4 = 0;
      if (0 < iVar9) {
        plVar1 = (longlong *)plVar7[-1];
        plVar6 = plVar1;
        do {
          plVar2 = (longlong *)*plVar6;
          if ((param_2 != '\0') || ((int)plVar2[5] + 10U < uVar10)) {
            iVar5 = (iVar9 - iVar4) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        (plVar1 + iVar4,plVar1 + (iVar9 - iVar5),(longlong)iVar5 << 3);
              iVar9 = (int)*plVar7;
            }
            *(int *)plVar7 = iVar9 + -1;
            plVar8 = plVar2;
            uVar10 = DAT_1464aaa90;
            break;
          }
          iVar4 = iVar4 + 1;
          plVar6 = plVar6 + 1;
        } while (iVar4 < iVar9);
      }
      plVar1 = plVar7 + 1;
      plVar7 = plVar7 + 2;
    } while (plVar1 != param_1 + 0x25);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8,*param_1);
    FDeviceMemoryManager::Free(*param_1 + 0x10,plVar8 + 3);
    (**(code **)*plVar8)(plVar8,1);
  }
  return;
}



// FUNCTION 141e2da80 FUN_141e2da80 body=1137 status=ok
// SIG undefined FUN_141e2da80(void)

void FUN_141e2da80(longlong *param_1,char param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  BOOL BVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar8 = (int)param_1[7] + -1;
  uVar1 = *(undefined8 *)(*param_1 + 8);
  if (-1 < iVar8) {
    lVar7 = (longlong)iVar8 << 5;
    lVar14 = lVar7;
    do {
      puVar11 = (ulonglong *)(param_1[6] + lVar7);
      if (((((param_2 != '\0') && ((int)puVar11[3] != 2)) && ((int)puVar11[3] != 0xc)) ||
          (param_3 != '\0')) ||
         ((*(int *)((longlong)puVar11 + 0x1c) + 2U < DAT_146aaf9a4 &&
          ((puVar11[2] == 0 || (*puVar11 < *(ulonglong *)(puVar11[2] + 0x98))))))) {
        iVar9 = (int)puVar11[3];
        if (iVar9 == 3) {
          lVar2 = *param_1;
          uVar3 = puVar11[1];
          lVar5 = (longlong)*(int *)(lVar2 + 0x18f8);
          if (*(int *)(lVar2 + 0x18f8) != 0) {
            iVar13 = 0;
            lVar12 = 0;
            bVar15 = **(ulonglong **)(lVar2 + 0x18f0) != uVar3;
            iVar9 = 0;
            do {
              lVar12 = lVar12 + 1;
              iVar10 = iVar9 + 1;
              if (lVar12 < lVar5) {
                puVar6 = (ulonglong *)(*(longlong *)(lVar2 + 0x18f0) + lVar12 * 8);
                do {
                  if (bVar15 != (*puVar6 != uVar3)) break;
                  iVar10 = iVar10 + 1;
                  lVar12 = lVar12 + 1;
                  puVar6 = puVar6 + 1;
                } while (lVar12 < lVar5);
              }
              if (bVar15 != false) {
                if (iVar13 != iVar9) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(lVar2 + 0x18f0) + (longlong)iVar13 * 8),
                             (void *)(*(longlong *)(lVar2 + 0x18f0) + (longlong)iVar9 * 8),
                             (longlong)(iVar10 - iVar9) << 3);
                }
                iVar13 = iVar13 + (iVar10 - iVar9);
              }
              bVar15 = (bool)(bVar15 ^ 1);
              iVar9 = iVar10;
            } while (lVar12 < lVar5);
            *(int *)(lVar2 + 0x18f8) = iVar13;
          }
        }
        else if (iVar9 == 4) {
          FUN_141e307a0(*param_1,puVar11[1]);
        }
        else if (iVar9 == 5) {
          lVar2 = *param_1;
          uVar3 = puVar11[1];
          lVar5 = (longlong)*(int *)(lVar2 + 0x1928);
          if (*(int *)(lVar2 + 0x1928) != 0) {
            iVar13 = 0;
            lVar12 = 0;
            bVar15 = **(ulonglong **)(lVar2 + 0x1920) != uVar3;
            iVar9 = 0;
            do {
              lVar12 = lVar12 + 1;
              iVar10 = iVar9 + 1;
              if (lVar12 < lVar5) {
                puVar6 = (ulonglong *)(*(longlong *)(lVar2 + 0x1920) + lVar12 * 8);
                do {
                  if (bVar15 != (*puVar6 != uVar3)) break;
                  iVar10 = iVar10 + 1;
                  lVar12 = lVar12 + 1;
                  puVar6 = puVar6 + 1;
                } while (lVar12 < lVar5);
              }
              if (bVar15 != false) {
                if (iVar13 != iVar9) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(lVar2 + 0x1920) + (longlong)iVar13 * 8),
                             (void *)(*(longlong *)(lVar2 + 0x1920) + (longlong)iVar9 * 8),
                             (longlong)(iVar10 - iVar9) << 3);
                }
                iVar13 = iVar13 + (iVar10 - iVar9);
              }
              bVar15 = (bool)(bVar15 ^ 1);
              iVar9 = iVar10;
            } while (lVar12 < lVar5);
            *(int *)(lVar2 + 0x1928) = iVar13;
          }
        }
        switch((int)puVar11[3]) {
        case 0:
          (*DAT_146ab0178)(uVar1,puVar11[1]);
          break;
        case 1:
          (*DAT_146ab0078)(uVar1,puVar11[1]);
          break;
        case 2:
          (*DAT_146ab0088)(uVar1,puVar11[1]);
          break;
        case 3:
          (*DAT_146ab0098)(uVar1,puVar11[1]);
          break;
        case 4:
          (*DAT_146ab00b0)(uVar1,puVar11[1]);
          break;
        case 5:
          (*DAT_146ab00f8)(uVar1,puVar11[1]);
          break;
        case 6:
          (*DAT_146ab0108)(uVar1,puVar11[1]);
          break;
        case 7:
          (*DAT_146ab0168)(uVar1,puVar11[1]);
          break;
        case 8:
          (*DAT_146ab0128)(uVar1,puVar11[1]);
          break;
        case 9:
          (*DAT_146ab0118)(uVar1,puVar11[1]);
          break;
        case 10:
          (*DAT_146ab0028)(uVar1,puVar11[1]);
          break;
        case 0xb:
          (*DAT_146ab00c0)(uVar1,puVar11[1]);
          break;
        case 0xc:
          (*DAT_146ab0038)(uVar1,puVar11[1],0);
        }
        iVar9 = (int)param_1[7];
        iVar13 = (iVar9 - iVar8) + -1;
        if (0 < iVar13) {
          iVar13 = 1;
        }
        if (iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[6] + lVar14),
                     (void *)((longlong)(iVar9 - iVar13) * 0x20 + param_1[6]),(longlong)iVar13 << 5)
          ;
          iVar9 = (int)param_1[7];
        }
        *(int *)(param_1 + 7) = iVar9 + -1;
      }
      iVar8 = iVar8 + -1;
      lVar14 = lVar14 + -0x20;
      lVar7 = lVar7 + -0x20;
    } while (-1 < iVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e2deea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141e2df30 FUN_141e2df30 body=115 status=ok
// SIG undefined FUN_141e2df30(void)

void FUN_141e2df30(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x1420) == *(longlong *)(param_1 + 400)) {
    lVar1 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
      lVar1 = *(longlong *)(param_1 + 0x2d8);
    }
    *(undefined1 *)(param_1 + 0x198) = 1;
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(lVar1,0);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(*(undefined8 *)(param_1 + 0x2d8));
    *(undefined1 *)(param_1 + 0x198) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x198) = 1;
  return;
}



// FUNCTION 141e2dfb0 Reset body=335 status=ok
// SIG undefined Reset(void)

void VulkanRHI::FTempFrameAllocationBuffer::Reset(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa8);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar8 = (*(int *)(param_1 + 0x10) + 1U) % 3;
  *(uint *)(param_1 + 0x10) = uVar8;
  param_1 = (ulonglong)uVar8 * 0x30 + param_1;
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  while (0 < iVar2) {
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x28) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x28) * 8) = 0
    ;
    iVar2 = *(int *)(param_1 + 0x28);
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)iVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar7 == 1) && (puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    iVar7 = *(int *)(param_1 + 0x28);
    iVar6 = (iVar7 - (iVar2 + -1)) + -1;
    if (iVar6 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar2 + -1) * 8),
                 (void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 8),(longlong)iVar6 << 3)
      ;
      iVar7 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = iVar7 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e2e0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141e2e100 FUN_141e2e100 body=80 status=ok
// SIG undefined FUN_141e2e100(void)

void FUN_141e2e100(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = (*DAT_146ab0008)(*(undefined8 *)(*param_1 + 8),1,param_2);
    if (iVar1 != 0) {
      FUN_141e67d70(iVar1,"VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)"
                    ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp",
                    0x874);
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 141e2e150 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLayerExtension,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x218,0);
  iVar4 = (int)(uVar3 / 0x218);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x218,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141e2e1e0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<VkExtensionProperties,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x104,0);
  iVar4 = (int)(uVar3 / 0x104);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x104,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141e2e270 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<VkLayerProperties,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x208,0);
  iVar4 = (int)(uVar3 / 0x208);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x208,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141e2e300 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<VkExtensionProperties,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x104,0);
    iVar3 = (int)(uVar1 / 0x104);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x104,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141e2e380 FUN_141e2e380 body=67 status=ok
// SIG undefined FUN_141e2e380(void)

undefined1 FUN_141e2e380(longlong param_1)

{
  if (*(char *)(param_1 + 0x198) != '\0') {
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(*(undefined8 *)(param_1 + 0x2d8));
    *(undefined1 *)(param_1 + 0x198) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 141e2e3d0 SetEmulatedUniformBufferIntoPacked body=238 status=ok
// SIG undefined SetEmulatedUniformBufferIntoPacked(void)

void FPackedUniformBuffers::SetEmulatedUniformBufferIntoPacked
               (longlong *param_1,uint param_2,longlong *param_3,ulonglong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort *puVar12;
  int *piVar13;
  longlong lVar14;
  
  if (param_2 < *(uint *)(param_1 + 5)) {
    lVar6 = *param_3;
    uVar3 = *(uint *)(param_1[4] + (longlong)(int)param_2 * 4);
    uVar8 = uVar3 >> 0x10;
    uVar10 = (ulonglong)((uVar3 & 0xffff) + uVar8);
    if (uVar8 < uVar10) {
      lVar14 = (ulonglong)uVar8 * 10;
      lVar11 = uVar10 - uVar8;
      do {
        bVar7 = 0;
        puVar12 = (ushort *)(param_1[2] + lVar14);
        uVar1 = *puVar12;
        piVar13 = (int *)(*(longlong *)
                           (*param_1 + (ulonglong)*(byte *)((longlong)puVar12 + 3) * 0x10) +
                         (ulonglong)puVar12[3] * 4);
        uVar2 = puVar12[4];
        piVar9 = (int *)(lVar6 + (ulonglong)uVar1 * 4);
        do {
          iVar4 = *piVar9;
          iVar5 = *piVar13;
          *piVar13 = iVar4;
          piVar13 = piVar13 + 1;
          piVar9 = piVar9 + 1;
          bVar7 = bVar7 | iVar5 != iVar4;
        } while (piVar9 != (int *)(lVar6 + ((ulonglong)uVar2 + (ulonglong)uVar1) * 4));
        lVar14 = lVar14 + 10;
        *param_4 = *param_4 | (ulonglong)bVar7 << (*(byte *)((longlong)puVar12 + 3) & 0x3f);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}



// FUNCTION 141e2e4c0 SetPackedGlobalShaderParameter body=132 status=ok
// SIG undefined SetPackedGlobalShaderParameter(void)

void FVulkanPendingGfxState::SetPackedGlobalShaderParameter
               (longlong param_1,byte param_2,int param_3,uint param_4,uint param_5,int *param_6)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int *piVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  piVar7 = (int *)((ulonglong)param_4 +
                  *(longlong *)
                   (*(longlong *)(lVar5 + 0xd0 + (ulonglong)param_2 * 0x30) +
                   (longlong)param_3 * 0x10));
  bVar6 = 0;
  piVar2 = param_6 + (param_5 >> 2);
  do {
    iVar3 = *param_6;
    iVar4 = *piVar7;
    *piVar7 = iVar3;
    piVar7 = piVar7 + 1;
    param_6 = param_6 + 1;
    bVar6 = bVar6 | iVar4 != iVar3;
  } while (param_6 != piVar2);
  puVar1 = (ulonglong *)(lVar5 + (ulonglong)param_2 * 8 + 0x1e8);
  *puVar1 = *puVar1 | (ulonglong)bVar6 << ((byte)param_3 & 0x3f);
  return;
}



// FUNCTION 141e2e550 SetSamplerState body=142 status=ok
// SIG undefined SetSamplerState(void)

void FVulkanCommonPipelineDescriptorState::SetSamplerState
               (longlong param_1,byte param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  plVar4 = (longlong *)((ulonglong)param_2 * 0x58 + *(longlong *)(param_1 + 0x98));
  plVar1 = *(longlong **)((param_3 & 0xffffffff) * 0x40 + 0x28 + *plVar4);
  if (DAT_1464c9c14 < 2) {
    bVar5 = *(int *)(plVar4[6] + (param_3 & 0xffffffff) * 0xc) != *(int *)(param_4 + 0x20);
    if (bVar5) {
      *(int *)(plVar4[6] + (param_3 & 0xffffffff) * 0xc) = *(int *)(param_4 + 0x20);
      *plVar1 = *(longlong *)(param_4 + 0x18);
    }
    *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) | bVar5;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar5;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar5;
    return;
  }
  lVar2 = *(longlong *)(param_4 + 0x18);
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | lVar3 != lVar2;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | lVar3 != lVar2;
  return;
}



// FUNCTION 141e2e5e0 FUN_141e2e5e0 body=477 status=ok
// SIG undefined FUN_141e2e5e0(void)

void FUN_141e2e5e0(longlong param_1,ulonglong param_2,longlong param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  lVar11 = (longlong)param_4;
  cVar6 = FUN_141e308a0(*(char *)(param_5 + 0xa4) != '\0');
  lVar5 = DAT_146aafdc8;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar1 = *(longlong *)(param_5 + 0x20) + lVar11 * 0x28;
  lVar3 = *(longlong *)(lVar9 + 200);
  if (cVar6 == '\0') {
    FPackedUniformBuffers::SetEmulatedUniformBufferIntoPacked
              (lVar9 + 0xd0 + (param_2 & 0xff) * 0x30,param_4,param_3 + 0x38,
               lVar9 + ((param_2 & 0xff) + 0x3d) * 8);
    goto LAB_141e2e757;
  }
  if (*(char *)(lVar1 + 6) != '\0') goto LAB_141e2e757;
  lVar9 = *(longlong *)(lVar3 + (longlong)(int)param_2 * 8);
  bVar7 = *(byte *)(lVar9 + lVar11 * 6);
  uVar2 = *(undefined2 *)(lVar9 + 2 + lVar11 * 6);
  cVar6 = FUN_1415ad720();
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_1468c21c0) goto LAB_141e2e6a7;
    lVar9 = 4;
  }
  else {
LAB_141e2e6a7:
    lVar9 = 0;
  }
  lVar10 = (ulonglong)bVar7 * 0x58;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x48);
  lVar4 = *(longlong *)(param_3 + 0x40);
  if (*(int *)(lVar9 + lVar5) < 2) {
    bVar7 = FVulkanDescriptorSetWriter::WriteUniformBuffer
                      (*(longlong *)(lVar11 + 0x98) + lVar10,uVar2,*(undefined8 *)(lVar4 + 0x20),
                       *(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(param_3 + 0x20));
    *(byte *)(lVar11 + 0x90) = *(byte *)(lVar11 + 0x90) | bVar7;
    *(byte *)(lVar11 + 0xc0) = *(byte *)(lVar11 + 0xc0) | bVar7;
  }
  else {
    bVar7 = FVulkanDescriptorSetWriter::WriteDynamicUniformBuffer
                      (*(longlong *)(lVar11 + 0x98) + lVar10,uVar2,*(undefined8 *)(lVar4 + 0x20),0,
                       *(undefined4 *)(param_3 + 0x20),
                       CONCAT44(uVar12,*(undefined4 *)(lVar4 + 0x14)));
    *(byte *)(lVar11 + 0x90) = *(byte *)(lVar11 + 0x90) | bVar7;
    *(byte *)(lVar11 + 0xc0) = *(byte *)(lVar11 + 0xc0) | bVar7;
  }
LAB_141e2e757:
  if (*(int *)(lVar1 + 0x10) != 0) {
    FUN_141e1fc30(param_1,*(undefined8 *)(param_1 + 0x4f8),param_5,param_5 + 0x30,param_5 + 0x40,
                  lVar1,param_3,*(longlong *)(lVar3 + 0x80) + (param_2 & 0xffffffff) * 0x38 + 0x10);
  }
  return;
}



// FUNCTION 141e2e7c0 SetTexture body=187 status=ok
// SIG undefined SetTexture(void)

void FVulkanCommonPipelineDescriptorState::SetTexture
               (longlong param_1,byte param_2,ulonglong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_4 + 0x98);
  plVar6 = (longlong *)((ulonglong)param_2 * 0x58 + *(longlong *)(param_1 + 0x98));
  lVar4 = *(longlong *)((param_3 & 0xffffffff) * 0x40 + 0x28 + *plVar6);
  if (DAT_1464c9c14 < 2) {
    lVar1 = plVar6[6] + (param_3 & 0xffffffff) * 0xc;
    iVar2 = (int)plVar3[2];
    bVar7 = *(int *)(lVar1 + 4) != iVar2;
    if (bVar7) {
      *(int *)(lVar1 + 4) = iVar2;
      *(longlong *)(lVar4 + 8) = *plVar3;
    }
    bVar8 = *(int *)(lVar1 + 8) != param_5;
    if (bVar8) {
      *(int *)(lVar1 + 8) = param_5;
      *(int *)(lVar4 + 0x10) = param_5;
    }
    bVar8 = bVar8 || bVar7;
    *(byte *)(plVar6 + 10) = *(byte *)(plVar6 + 10) | bVar8;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar8;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar8;
    return;
  }
  lVar1 = *plVar3;
  lVar5 = *(longlong *)(lVar4 + 8);
  *(longlong *)(lVar4 + 8) = lVar1;
  iVar2 = *(int *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x10) = param_5;
  bVar7 = iVar2 != param_5 || lVar5 != lVar1;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar7;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar7;
  return;
}



// FUNCTION 141e2e880 FUN_141e2e880 body=17 status=ok
// SIG undefined FUN_141e2e880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e2e880(void)

{
  _DAT_1464c9c48 = 0x1100000011;
  _DAT_1464c9c50 = 0x1400000013;
  return;
}



// FUNCTION 141e2e8a0 FUN_141e2e8a0 body=4744 status=ok
// SIG undefined FUN_141e2e8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e2e8a0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_48 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar10 = 0;
  puVar9 = (undefined8 *)(param_1 + 0xaf0);
  uVar7 = uVar10;
  do {
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 1) = 0;
    (*DAT_146aaff20)(*(undefined8 *)(param_1 + 0x680),uVar7,puVar9);
    uVar7 = uVar7 + 1;
    puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
  } while (uVar7 < 0xb9);
  puVar4 = &DAT_1464ca1f8;
  puVar3 = (undefined4 *)(param_1 + 0x1458);
  puVar6 = &DAT_146aaf8a8;
  do {
    *(undefined4 *)(puVar4 + -0x2c) = 0;
    puVar4[-0x28] = 0;
    puVar6[-2] = 0;
    puVar3[-2] = 3;
    puVar3[-1] = 4;
    *puVar3 = 5;
    puVar3[1] = 6;
    *(undefined4 *)(puVar4 + -4) = 0;
    *puVar4 = 0;
    puVar6[-1] = 0;
    puVar3[2] = 3;
    puVar3[3] = 4;
    puVar3[4] = 5;
    puVar3[5] = 6;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    puVar4[0x28] = 0;
    *puVar6 = 0;
    puVar3[6] = 3;
    puVar3[7] = 4;
    puVar3[8] = 5;
    puVar3[9] = 6;
    *(undefined4 *)(puVar4 + 0x4c) = 0;
    puVar4[0x50] = 0;
    puVar6[1] = 0;
    puVar3[10] = 3;
    puVar3[0xb] = 4;
    puVar3[0xc] = 5;
    puVar3[0xd] = 6;
    *(undefined4 *)(puVar4 + 0x74) = 0;
    puVar4[0x78] = 0;
    puVar6[2] = 0;
    puVar3[0xe] = 3;
    puVar3[0xf] = 4;
    puVar3[0x10] = 5;
    puVar3[0x11] = 6;
    *(undefined4 *)(puVar4 + 0x9c) = 0;
    puVar4[0xa0] = 0;
    puVar6[3] = 0;
    puVar3[0x12] = 3;
    puVar3[0x13] = 4;
    puVar3[0x14] = 5;
    puVar3[0x15] = 6;
    *(undefined4 *)(puVar4 + 0xc4) = 0;
    puVar4[200] = 0;
    puVar6[4] = 0;
    puVar3[0x16] = 3;
    puVar3[0x17] = 4;
    puVar3[0x18] = 5;
    puVar3[0x19] = 6;
    *(undefined4 *)(puVar4 + 0xec) = 0;
    puVar4[0xf0] = 0;
    puVar6[5] = 0;
    puVar3[0x1a] = 3;
    puVar3[0x1b] = 4;
    puVar3[0x1c] = 5;
    puVar3[0x1d] = 6;
    *(undefined4 *)(puVar4 + 0x114) = 0;
    puVar4[0x118] = 0;
    puVar6[6] = 0;
    puVar3[0x1e] = 3;
    puVar3[0x1f] = 4;
    puVar3[0x20] = 5;
    puVar3[0x21] = 6;
    *(undefined4 *)(puVar4 + 0x13c) = 0;
    puVar4[0x140] = 0;
    puVar6[7] = 0;
    puVar3[0x22] = 3;
    puVar3[0x23] = 4;
    puVar3[0x24] = 5;
    puVar3[0x25] = 6;
    *(undefined4 *)(puVar4 + 0x164) = 0;
    puVar4[0x168] = 0;
    puVar6[8] = 0;
    puVar3[0x26] = 3;
    puVar3[0x27] = 4;
    puVar3[0x28] = 5;
    puVar3[0x29] = 6;
    *(undefined4 *)(puVar4 + 0x18c) = 0;
    puVar4[400] = 0;
    puVar6[9] = 0;
    puVar3[0x2a] = 3;
    puVar3[0x2b] = 4;
    puVar3[0x2c] = 5;
    puVar3[0x2d] = 6;
    *(undefined4 *)(puVar4 + 0x1b4) = 0;
    puVar4[0x1b8] = 0;
    puVar4 = puVar4 + 0x208;
    puVar6[10] = 0;
    puVar3[0x2e] = 3;
    puVar3[0x2f] = 4;
    puVar3[0x30] = 5;
    puVar3[0x31] = 6;
    puVar3 = puVar3 + 0x34;
    puVar6 = puVar6 + 0xd;
  } while ((longlong)puVar4 < 0x1464cac20);
  if ((*(int *)(param_1 + 0xd00) == 0) && (*(int *)(param_1 + 0xd04) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  DAT_1464ca21c = -(uint)bVar1 & 0x2c;
  DAT_146aaf8a8 = -(uint)(*(int *)(param_1 + 0xd08) != 0) & 0x2c;
  if ((bVar1) || (*(int *)(param_1 + 0xd08) != 0)) {
    DAT_1464ca220 = 1;
  }
  else {
    DAT_1464ca220 = 0;
  }
  *(undefined4 *)(param_1 + 0x1470) = 3;
  *(undefined4 *)(param_1 + 0x1474) = 4;
  *(undefined4 *)(param_1 + 0x1478) = 5;
  *(undefined4 *)(param_1 + 0x147c) = 6;
  if ((*(int *)(param_1 + 0xb5c) == 0) && (*(int *)(param_1 + 0xb60) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  DAT_1464ca244 = -(uint)bVar1 & 9;
  DAT_146aaf8ac = -(uint)(*(int *)(param_1 + 0xb64) != 0) & 9;
  if ((bVar1) || (*(int *)(param_1 + 0xb64) != 0)) {
    DAT_1464ca248 = 1;
  }
  else {
    DAT_1464ca248 = 0;
  }
  *(undefined4 *)(param_1 + 0x1480) = 3;
  *(undefined4 *)(param_1 + 0x1484) = 4;
  *(undefined4 *)(param_1 + 0x1488) = 5;
  *(undefined4 *)(param_1 + 0x148c) = 6;
  local_48[0] = 0x4c;
  if ((*(int *)(param_1 + 0xe38) == 0) && (*(int *)(param_1 + 0xe3c) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_38 = CONCAT44((int)((ulonglong)local_38 >> 0x20),0x46);
  DAT_1464ca26c = -(uint)bVar1 & 0x46;
  DAT_146aaf8b0 = -(uint)(*(int *)(param_1 + 0xe40) != 0) & 0x46;
  if ((bVar1) || (*(int *)(param_1 + 0xe40) != 0)) {
    DAT_1464ca270 = 1;
  }
  else {
    DAT_1464ca270 = 0;
  }
  if ((!bVar1) && (cVar2 = FUN_141e298c0(param_1,0x4c), cVar2 != '\0')) {
    DAT_1464ca26c = 0x4c;
    DAT_1464ca270 = 1;
  }
  local_38 = 0;
  uStack_30._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1490) = 3;
  *(undefined4 *)(param_1 + 0x1494) = 4;
  *(undefined4 *)(param_1 + 0x1498) = 5;
  *(undefined4 *)(param_1 + 0x149c) = 6;
  local_58 = (undefined8 *)0x0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = uStack_30._4_4_;
  FUN_141e2a0f0(param_1,9,0x7a,&local_58);
  local_38 = 0;
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  *(undefined4 *)(param_1 + 0x14e0) = 3;
  *(undefined4 *)(param_1 + 0x14e4) = 4;
  *(undefined4 *)(param_1 + 0x14e8) = 5;
  *(undefined4 *)(param_1 + 0x14ec) = 6;
  local_58 = (undefined8 *)0x0;
  uStack_50 = uStack_30;
  FUN_141e2a0f0(param_1,10,0x61,&local_58);
  DAT_1464ca354 = 8;
  local_58 = &local_38;
  uStack_50._0_4_ = 2;
  *(undefined4 *)(param_1 + 0x14f0) = 3;
  *(undefined4 *)(param_1 + 0x14f4) = 4;
  *(undefined4 *)(param_1 + 0x14f8) = 5;
  *(undefined4 *)(param_1 + 0x14fc) = 6;
  local_38 = 0x8000000081;
  FUN_141e2a0f0(param_1,0xb,0x82,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined8 *)(param_1 + 0x1500) = 3;
  *(undefined8 *)(param_1 + 0x1508) = 0;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0xc,0x7c,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined8 *)(param_1 + 0x1510) = 3;
  *(undefined8 *)(param_1 + 0x1518) = 0;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x11,0x67,&local_58);
  DAT_1464ca46c = 8;
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1560) = 3;
  *(undefined4 *)(param_1 + 0x1564) = 4;
  *(undefined4 *)(param_1 + 0x1568) = 5;
  *(undefined4 *)(param_1 + 0x156c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,1,0x6d,&local_58);
  DAT_1464ca1ec = 0x10;
  *(undefined4 *)(param_1 + 0x1460) = 3;
  uStack_50._0_4_ = 1;
  local_58 = (undefined8 *)local_48;
  *(undefined4 *)(param_1 + 0x1464) = 4;
  *(undefined4 *)(param_1 + 0x1468) = 5;
  *(undefined4 *)(param_1 + 0x146c) = 6;
  local_48[0] = 0x53;
  FUN_141e2a0f0(param_1,0xe,0x4d,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1530) = 3;
  *(undefined4 *)(param_1 + 0x1534) = 4;
  *(undefined4 *)(param_1 + 0x1538) = 5;
  *(undefined4 *)(param_1 + 0x153c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0xf,0x53,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1540) = 3;
  *(undefined4 *)(param_1 + 0x1544) = 4;
  *(undefined4 *)(param_1 + 0x1548) = 5;
  *(undefined4 *)(param_1 + 0x154c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x10,0x53,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1550) = 3;
  *(undefined4 *)(param_1 + 0x1554) = 4;
  *(undefined4 *)(param_1 + 0x1558) = 5;
  *(undefined4 *)(param_1 + 0x155c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x20,0x4a,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1650) = 3;
  *(undefined4 *)(param_1 + 0x1654) = 4;
  *(undefined4 *)(param_1 + 0x1658) = 5;
  *(undefined4 *)(param_1 + 0x165c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x21,0x4b,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1660) = 3;
  *(undefined4 *)(param_1 + 0x1664) = 4;
  *(undefined4 *)(param_1 + 0x1668) = 5;
  *(undefined4 *)(param_1 + 0x166c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x1c,0x62,&local_58);
  *(undefined4 *)(param_1 + 0x1610) = 3;
  *(undefined4 *)(param_1 + 0x1614) = 4;
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1618) = 5;
  *(undefined4 *)(param_1 + 0x161c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x1d,99,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1620) = 3;
  *(undefined4 *)(param_1 + 0x1624) = 4;
  *(undefined4 *)(param_1 + 0x1628) = 5;
  *(undefined4 *)(param_1 + 0x162c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x39,0xd,&local_58);
  local_58 = &local_38;
  uStack_50._0_4_ = 4;
  lVar8 = 0x14;
  local_38 = 0x8000000081;
  uStack_30 = 0x820000007e;
  *(undefined4 *)(param_1 + 0x17e0) = 3;
  *(undefined4 *)(param_1 + 0x17e4) = 4;
  *(undefined4 *)(param_1 + 0x17e8) = 5;
  *(undefined4 *)(param_1 + 0x17ec) = 6;
  FUN_141e2a0f0(param_1,0x14,0x7d,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1590) = 3;
  *(undefined4 *)(param_1 + 0x1594) = 4;
  *(undefined4 *)(param_1 + 0x1598) = 5;
  *(undefined4 *)(param_1 + 0x159c) = 6;
  FUN_141e2a0f0(param_1,0x15,0x4c,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x15a0) = 3;
  *(undefined4 *)(param_1 + 0x15a4) = 4;
  *(undefined4 *)(param_1 + 0x15a8) = 5;
  *(undefined4 *)(param_1 + 0x15ac) = 6;
  FUN_141e2a0f0(param_1,0x16,0x4c,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x15b0) = 3;
  *(undefined4 *)(param_1 + 0x15b4) = 4;
  *(undefined4 *)(param_1 + 0x15b8) = 5;
  *(undefined4 *)(param_1 + 0x15bc) = 6;
  FUN_141e2a0f0(param_1,0x1a,0x7a,&local_58);
  DAT_1464ca5d4 = 4;
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x15f0) = 3;
  *(undefined4 *)(param_1 + 0x15f4) = 4;
  *(undefined4 *)(param_1 + 0x15f8) = 5;
  *(undefined4 *)(param_1 + 0x15fc) = 1;
  FUN_141e2a0f0(param_1,0x12,0x40,&local_58);
  DAT_1464ca494 = 4;
  local_58 = (undefined8 *)local_48;
  uStack_50._0_4_ = 1;
  *(undefined4 *)(param_1 + 0x1570) = 3;
  *(undefined4 *)(param_1 + 0x1574) = 4;
  *(undefined4 *)(param_1 + 0x1578) = 5;
  *(undefined4 *)(param_1 + 0x157c) = 6;
  local_48[0] = 0x61;
  FUN_141e2a0f0(param_1,0x13,0x5b,&local_58);
  DAT_1464ca4bc = 8;
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1580) = 3;
  *(undefined4 *)(param_1 + 0x1584) = 4;
  *(undefined4 *)(param_1 + 0x1588) = 5;
  *(undefined4 *)(param_1 + 0x158c) = 6;
  FUN_141e2a0f0(param_1,0x1b,9,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1600) = 1;
  *(undefined4 *)(param_1 + 0x1604) = 1;
  *(undefined4 *)(param_1 + 0x1608) = 1;
  *(undefined4 *)(param_1 + 0x160c) = 3;
  FUN_141e2a0f0(param_1,0x24,4,&local_58);
  uStack_50._0_4_ = 0;
  *(undefined4 *)(param_1 + 0x1690) = 3;
  *(undefined4 *)(param_1 + 0x1694) = 4;
  *(undefined4 *)(param_1 + 0x1698) = 5;
  *(undefined4 *)(param_1 + 0x169c) = 6;
  local_58 = (undefined8 *)0x0;
  FUN_141e2a0f0(param_1,0x25,0x25,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x16a0) = 3;
  *(undefined4 *)(param_1 + 0x16a4) = 4;
  *(undefined4 *)(param_1 + 0x16a8) = 5;
  *(undefined4 *)(param_1 + 0x16ac) = 6;
  FUN_141e2a0f0(param_1,0x3c,0x29,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1810) = 3;
  *(undefined4 *)(param_1 + 0x1814) = 4;
  *(undefined4 *)(param_1 + 0x1818) = 5;
  *(undefined4 *)(param_1 + 0x181c) = 6;
  FUN_141e2a0f0(param_1,0x3d,0x26,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1820) = 3;
  *(undefined4 *)(param_1 + 0x1824) = 4;
  *(undefined4 *)(param_1 + 0x1828) = 5;
  *(undefined4 *)(param_1 + 0x182c) = 6;
  FUN_141e2a0f0(param_1,0x31,0x51,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1760) = 3;
  *(undefined4 *)(param_1 + 0x1764) = 4;
  *(undefined4 *)(param_1 + 0x1768) = 5;
  *(undefined4 *)(param_1 + 0x176c) = 6;
  FUN_141e2a0f0(param_1,0x22,0x5f,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1670) = 3;
  *(undefined4 *)(param_1 + 0x1674) = 4;
  *(undefined4 *)(param_1 + 0x1678) = 5;
  *(undefined4 *)(param_1 + 0x167c) = 6;
  FUN_141e2a0f0(param_1,0x23,0x60,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1680) = 3;
  *(undefined4 *)(param_1 + 0x1684) = 4;
  *(undefined4 *)(param_1 + 0x1688) = 5;
  *(undefined4 *)(param_1 + 0x168c) = 6;
  FUN_141e2a0f0(param_1,0x30,0x6b,&local_58);
  uStack_50._0_4_ = 1;
  local_58 = (undefined8 *)local_48;
  *(undefined4 *)(param_1 + 0x1750) = 3;
  *(undefined4 *)(param_1 + 0x1754) = 4;
  *(undefined4 *)(param_1 + 0x1758) = 5;
  *(undefined4 *)(param_1 + 0x175c) = 6;
  local_48[0] = 0x61;
  FUN_141e2a0f0(param_1,0x3f,0x5c,&local_58);
  uStack_50._0_4_ = 1;
  local_58 = (undefined8 *)local_48;
  *(undefined4 *)(param_1 + 0x1840) = 3;
  *(undefined4 *)(param_1 + 0x1844) = 4;
  *(undefined4 *)(param_1 + 0x1848) = 5;
  *(undefined4 *)(param_1 + 0x184c) = 6;
  local_48[0] = 0x61;
  FUN_141e2a0f0(param_1,0x3e,0x5b,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1830) = 3;
  *(undefined4 *)(param_1 + 0x1834) = 4;
  *(undefined4 *)(param_1 + 0x1838) = 5;
  *(undefined4 *)(param_1 + 0x183c) = 6;
  FUN_141e2a0f0(param_1,0x28,0x10,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x16d0) = 3;
  *(undefined4 *)(param_1 + 0x16d4) = 4;
  *(undefined4 *)(param_1 + 0x16d8) = 5;
  *(undefined4 *)(param_1 + 0x16dc) = 6;
  FUN_141e2a0f0(param_1,0x18,0x10,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x15d0) = 3;
  *(undefined4 *)(param_1 + 0x15d4) = 4;
  *(undefined4 *)(param_1 + 0x15d8) = 5;
  *(undefined4 *)(param_1 + 0x15dc) = 6;
  FUN_141e2a0f0(param_1,0xd,100,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1520) = 3;
  *(undefined4 *)(param_1 + 0x1524) = 4;
  *(undefined4 *)(param_1 + 0x1528) = 5;
  *(undefined4 *)(param_1 + 0x152c) = 6;
  FUN_141e2a0f0(param_1,5,0x83,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x14a0) = 3;
  *(undefined4 *)(param_1 + 0x14a4) = 4;
  *(undefined4 *)(param_1 + 0x14a8) = 5;
  *(undefined4 *)(param_1 + 0x14ac) = 2;
  FUN_141e2a0f0(param_1,6,0x87,&local_58);
  *(undefined4 *)(param_1 + 0x14b0) = 3;
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x14b4) = 4;
  *(undefined4 *)(param_1 + 0x14b8) = 5;
  *(undefined4 *)(param_1 + 0x14bc) = 6;
  FUN_141e2a0f0(param_1,7,0x89,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x14c0) = 3;
  *(undefined4 *)(param_1 + 0x14c4) = 4;
  *(undefined4 *)(param_1 + 0x14c8) = 5;
  *(undefined4 *)(param_1 + 0x14cc) = 6;
  FUN_141e2a0f0(param_1,0x27,0x8b,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x16c0) = 3;
  *(undefined4 *)(param_1 + 0x16c4) = 4;
  *(undefined4 *)(param_1 + 0x16c8) = 5;
  *(undefined4 *)(param_1 + 0x16cc) = 6;
  FUN_141e2a0f0(param_1,0x17,0x8d,&local_58);
  uStack_50._0_4_ = 0;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x15c0) = 3;
  *(undefined4 *)(param_1 + 0x15c4) = 4;
  *(undefined4 *)(param_1 + 0x15c8) = 5;
  *(undefined4 *)(param_1 + 0x15cc) = 6;
  FUN_141e2a0f0(param_1,0x37,0x8f,&local_58);
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  local_58 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x17c0) = 3;
  *(undefined4 *)(param_1 + 0x17c4) = 4;
  *(undefined4 *)(param_1 + 0x17c8) = 5;
  *(undefined4 *)(param_1 + 0x17cc) = 6;
  FUN_141e2a0f0(param_1,0x38,0x91,&local_58);
  *(undefined4 *)(param_1 + 0x17d0) = 3;
  *(undefined4 *)(param_1 + 0x17d4) = 4;
  *(undefined4 *)(param_1 + 0x17d8) = 5;
  *(undefined4 *)(param_1 + 0x17dc) = 6;
  uVar7 = uVar10;
  do {
    uVar5 = uVar10;
    switch(uVar7) {
    case 0:
      uVar5 = 100;
      break;
    case 1:
      uVar5 = 0x67;
      break;
    case 2:
      uVar5 = 0x6a;
      break;
    case 3:
      uVar5 = 0x6d;
      break;
    case 4:
      uVar5 = 0x26;
      break;
    case 5:
      uVar5 = 0x29;
      break;
    case 6:
      uVar5 = 0x25;
      break;
    case 7:
      uVar5 = 0x2c;
      break;
    case 8:
      uVar5 = 0x52;
      break;
    case 9:
      uVar5 = 0x60;
      break;
    case 10:
      uVar5 = 0x4e;
      break;
    case 0xb:
      uVar5 = 0x53;
      break;
    case 0xc:
      uVar5 = 0x61;
      break;
    case 0xd:
      uVar5 = 0x5c;
      break;
    case 0xe:
      uVar5 = 0x51;
      break;
    case 0xf:
      uVar5 = 0x5f;
      break;
    case 0x10:
      uVar5 = 0x4d;
      break;
    case 0x11:
      uVar5 = 0x5b;
      break;
    case 0x12:
      uVar5 = 0x40;
      break;
    case 0x13:
      uVar5 = 0x62;
    }
    FUN_141e29790(param_1,uVar5);
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 141e2fb80 SubmitActiveCmdBuffer body=227 status=ok
// SIG undefined SubmitActiveCmdBuffer(void)

void FVulkanCommandBufferManager::SubmitActiveCmdBuffer(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong lVar2;
  LARGE_INTEGER *pLVar3;
  LARGE_INTEGER local_res8;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((byte)(*(char *)(lVar2 + 0x2c) - 1U) < 2) {
    if (*(char *)(lVar2 + 0x2c) != '\x01') {
      (*DAT_146ab0318)(*(undefined8 *)(lVar2 + 0x40));
      *(undefined1 *)(lVar2 + 0x2c) = 1;
      lVar2 = *(longlong *)(param_1 + 0x70);
    }
    FUN_141e253a0(lVar2);
    if (param_2 == 0) {
      pLVar3 = (LARGE_INTEGER *)0x0;
    }
    else {
      local_res8 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_2 + 0x18))->QuadPart;
      pLVar3 = &local_res8;
    }
    FUN_141e54d20(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2 != 0,
                  pLVar3);
    QueryPerformanceCounter(&local_res8);
    *(double *)(*(longlong *)(param_1 + 0x70) + 0x48) =
         (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141e2fc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 141e2fc70 FUN_141e2fc70 body=383 status=ok
// SIG undefined FUN_141e2fc70(void)

void FUN_141e2fc70(undefined8 *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  BOOL BVar6;
  
  if ((int)param_2 == 0) {
    lVar3 = *(longlong *)(param_1[1] + 0x18b0);
    lVar4 = *(longlong *)(lVar3 + 0x2d8);
    if (*(longlong *)(lVar4 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar4,param_2,0);
    }
    if ((*(longlong *)(lVar4 + 0x70) != 0) &&
       (cVar1 = *(char *)(*(longlong *)(lVar4 + 0x70) + 0x2c), cVar1 != '\x04')) {
      if (cVar1 == '\x02') {
        FTransitionAndLayoutManager::EndEmulatedRenderPass(lVar3 + 0x2e0);
      }
      FVulkanCommandBufferManager::SubmitActiveCmdBuffer(lVar4,0);
    }
  }
  lVar3 = *(longlong *)(param_1[2] + 0x2d8);
  if (*(longlong *)(lVar3 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar3,0,0);
  }
  FVulkanCommandBufferManager::SubmitActiveCmdBuffer(lVar3,0);
  uVar5 = param_1[2];
  lVar3 = param_1[1];
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa60);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa60);
  }
  iVar2 = *(int *)(lVar3 + 0x18c8);
  *(int *)(lVar3 + 0x18c8) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x18cc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x18c0,iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x18c0) + (longlong)iVar2 * 8) = uVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa60);
  if ((int)param_2 == param_3 + -1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x18b0) + 0x2d8);
    if (*(longlong *)(lVar3 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar3,0,0);
    }
    if ((*(longlong *)(lVar3 + 0x70) == 0) ||
       (*(char *)(*(longlong *)(lVar3 + 0x70) + 0x2c) == '\x04')) {
      FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(lVar3);
      if (*(longlong *)(lVar3 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar3,0,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141e2fdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 141e2fdf0 FUN_141e2fdf0 body=123 status=ok
// SIG undefined FUN_141e2fdf0(void)

void FUN_141e2fdf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  lVar2 = *(longlong *)(lVar1 + 0x70);
  if (lVar2 != 0) {
    if (*(longlong *)(param_2 + 0x4a8) != 0) {
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
        lVar2 = *(longlong *)(lVar1 + 0x70);
      }
      FTransitionAndLayoutManager::EndEmulatedRenderPass(param_2 + 0x2e0,lVar2);
    }
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(lVar1,0);
  }
  FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(lVar1);
  return;
}



// FUNCTION 141e2fe70 FUN_141e2fe70 body=56 status=ok
// SIG undefined FUN_141e2fe70(void)

void FUN_141e2fe70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18b0);
  if (*(longlong *)(param_1 + 0x18b8) != lVar1) {
    FUN_141e2fdf0(param_1,*(longlong *)(param_1 + 0x18b8));
    lVar1 = *(longlong *)(param_1 + 0x18b0);
  }
  FUN_141e2fdf0(param_1,lVar1);
  return;
}



// FUNCTION 141e2feb0 SubmitUploadCmdBuffer body=175 status=ok
// SIG undefined SubmitUploadCmdBuffer(void)

void FVulkanCommandBufferManager::SubmitUploadCmdBuffer
               (longlong param_1,undefined4 param_2,undefined8 param_3)

{
  BOOL BVar1;
  LARGE_INTEGER local_res8;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  if ((byte)(*(char *)(*(longlong *)(param_1 + 0x78) + 0x2c) - 1U) < 2) {
    FUN_141e253a0();
    FUN_141e54d20(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    QueryPerformanceCounter(&local_res8);
    *(double *)(*(longlong *)(param_1 + 0x78) + 0x48) =
         (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141e2ff58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 141e2ff60 SupportsMemoryType body=38 status=ok
// SIG undefined SupportsMemoryType(void)

ulonglong VulkanRHI::FDeviceMemoryManager::SupportsMemoryType(uint *param_1,uint param_2)

{
  uint *in_RAX;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    in_RAX = param_1 + 1;
    do {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      uVar1 = uVar1 + 1;
      in_RAX = in_RAX + 2;
    } while (uVar1 < *param_1);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141e2ff90 Swap body=270 status=ok
// SIG undefined Swap(void)

void FVulkanIndexBuffer::Swap(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x20) = uVar4;
  puVar2 = (undefined8 *)(param_1 + 0x28);
  if (puVar2 != puVar1) {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uVar6 = *puVar2;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    uVar16 = *(undefined8 *)(param_1 + 0x78);
    uVar17 = *(undefined8 *)(param_1 + 0x80);
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    uVar19 = *(undefined8 *)(param_1 + 0x90);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *puVar1 = uVar6;
    *(undefined8 *)(param_2 + 0x30) = uVar7;
    *(undefined8 *)(param_2 + 0x38) = uVar8;
    *(undefined8 *)(param_2 + 0x40) = uVar9;
    *(undefined8 *)(param_2 + 0x48) = uVar10;
    *(undefined8 *)(param_2 + 0x50) = uVar11;
    *(undefined8 *)(param_2 + 0x58) = uVar12;
    *(undefined8 *)(param_2 + 0x60) = uVar13;
    *(undefined8 *)(param_2 + 0x68) = uVar14;
    *(undefined8 *)(param_2 + 0x70) = uVar15;
    *(undefined8 *)(param_2 + 0x78) = uVar16;
    *(undefined8 *)(param_2 + 0x80) = uVar17;
    *(undefined8 *)(param_2 + 0x88) = uVar18;
    *(undefined8 *)(param_2 + 0x90) = uVar19;
    *(undefined8 *)(param_2 + 0x98) = uVar3;
  }
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0xa0) = uVar4;
  return;
}



// FUNCTION 141e300a0 FUN_141e300a0 body=192 status=ok
// SIG undefined FUN_141e300a0(void)

void FUN_141e300a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 != param_2) {
    uVar2 = param_2[1];
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    uVar7 = param_1[4];
    uVar8 = param_1[5];
    uVar1 = param_1[0xe];
    uVar9 = param_1[6];
    uVar10 = param_1[7];
    uVar11 = param_1[8];
    uVar12 = param_1[9];
    uVar13 = param_1[10];
    uVar14 = param_1[0xb];
    uVar15 = param_1[0xc];
    uVar16 = param_1[0xd];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    uVar2 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar2;
    uVar2 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    uVar2 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar2;
    uVar2 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[0xe] = param_2[0xe];
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[4] = uVar7;
    param_2[5] = uVar8;
    param_2[6] = uVar9;
    param_2[7] = uVar10;
    param_2[8] = uVar11;
    param_2[9] = uVar12;
    param_2[10] = uVar13;
    param_2[0xb] = uVar14;
    param_2[0xc] = uVar15;
    param_2[0xd] = uVar16;
    param_2[0xe] = uVar1;
  }
  return;
}



// FUNCTION 141e30160 TrimDuplicates body=228 status=ok
// SIG undefined TrimDuplicates(void)

void TrimDuplicates(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = (int)param_1[1] + -1;
  if (-1 < iVar8) {
    lVar5 = (longlong)iVar8;
    lVar9 = lVar5 * 8;
    lVar11 = lVar9;
    do {
      lVar5 = lVar5 + -1;
      if (-1 < lVar5) {
        lVar3 = *param_1;
        lVar10 = lVar5;
        do {
          pcVar6 = *(char **)(lVar9 + lVar3);
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[*(longlong *)(lVar3 + lVar10 * 8) - (longlong)*(char **)(lVar9 + lVar3)];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            iVar7 = (int)param_1[1];
            iVar4 = (iVar7 - iVar8) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar11 + lVar3),(void *)(lVar3 + (longlong)(iVar7 - iVar4) * 8),
                         (longlong)iVar4 << 3);
              iVar7 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar7 + -1;
            break;
          }
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      lVar11 = lVar11 + -8;
      lVar9 = lVar9 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 141e30250 FUN_141e30250 body=375 status=ok
// SIG undefined FUN_141e30250(void)

undefined8 * FUN_141e30250(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  BOOL BVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafad0);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafad0);
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    piVar4 = *(int **)(param_1 + 0x38);
    piVar8 = piVar4;
    do {
      iVar1 = *piVar8;
      uVar12 = param_3 + -1 + iVar1 & -param_3;
      uVar11 = (uVar12 - iVar1) + param_2;
      if (uVar11 <= (uint)piVar8[1]) {
        piVar8 = piVar4 + (longlong)iVar10 * 2;
        uVar2 = piVar4[(longlong)iVar10 * 2 + 1];
        if (uVar11 < uVar2) {
          *piVar8 = *piVar8 + uVar11;
          piVar8[1] = uVar2 - uVar11;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x40);
          iVar7 = (iVar3 - iVar10) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (piVar8,piVar4 + (longlong)(iVar10 + 1) * 2,(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x40);
          }
          *(int *)(param_1 + 0x40) = iVar3 + -1;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar11;
        puVar9 = (undefined8 *)operator_new(0x30);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 8);
          *puVar9 = &PTR_FUN_1440104c8;
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = &PTR_FUN_144e9c140;
          puVar9[2] = param_1;
          *(uint *)(puVar9 + 3) = uVar11;
          *(int *)((longlong)puVar9 + 0x1c) = iVar1;
          *(int *)(puVar9 + 4) = param_2;
          *(uint *)((longlong)puVar9 + 0x24) = uVar12;
          puVar9[5] = uVar5;
        }
        iVar10 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar10 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar10);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 8) = puVar9;
        iVar10 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x28)) {
          iVar10 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar10;
        goto LAB_141e302d5;
      }
      iVar10 = iVar10 + 1;
      piVar8 = piVar8 + 2;
    } while (iVar10 < *(int *)(param_1 + 0x40));
  }
  puVar9 = (undefined8 *)0x0;
LAB_141e302d5:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafad0);
  return puVar9;
}



// FUNCTION 141e303d0 FUN_141e303d0 body=330 status=ok
// SIG undefined FUN_141e303d0(void)

ulonglong FUN_141e303d0(longlong *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  }
  iVar9 = (int)param_1[8];
  uVar12 = *(uint *)((longlong)param_1 + 0x24);
  if (*(uint *)((longlong)param_1 + 0x24) <= param_3) {
    uVar12 = param_3;
  }
  uVar6 = 0;
  if (0 < iVar9) {
    piVar2 = (int *)param_1[7];
    piVar5 = piVar2;
    uVar8 = uVar6;
    do {
      iVar1 = *piVar5;
      uVar11 = (uVar12 - 1) + iVar1 & -uVar12;
      uVar10 = (uVar11 - iVar1) + param_2;
      iVar7 = (int)uVar8;
      if (uVar10 <= (uint)piVar5[1]) {
        piVar5 = piVar2 + (longlong)iVar7 * 2;
        uVar12 = piVar2[(longlong)iVar7 * 2 + 1];
        if (uVar10 < uVar12) {
          *piVar5 = *piVar5 + uVar10;
          piVar5[1] = uVar12 - uVar10;
        }
        else {
          iVar4 = (iVar9 - iVar7) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (piVar5,piVar2 + (longlong)(iVar7 + 1) * 2,(longlong)iVar4 << 3);
            iVar9 = (int)param_1[8];
          }
          *(int *)(param_1 + 8) = iVar9 + -1;
        }
        param_1[6] = param_1[6] + (ulonglong)uVar10;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,param_2,uVar11,uVar10,iVar1);
        iVar9 = (int)param_1[10];
        *(int *)(param_1 + 10) = iVar9 + 1;
        if (*(int *)((longlong)param_1 + 0x54) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar9);
        }
        *(ulonglong *)(param_1[9] + (longlong)iVar9 * 8) = uVar6;
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      piVar5 = piVar5 + 2;
    } while ((int)(iVar7 + 1U) < iVar9);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  return uVar6;
}



// FUNCTION 141e30520 FUN_141e30520 body=625 status=ok
// SIG undefined FUN_141e30520(void)

void FUN_141e30520(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  BOOL BVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  if (((*(uint *)(param_1 + 0x10) >> 2 & 1) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x220) == '\0')) {
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa88);
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa88);
    }
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464c94a0,&local_res8,param_1);
    lVar10 = (longlong)(int)local_res8;
    if ((int)local_res8 == -1) {
      local_res8 = local_18;
      local_38 = local_28;
      lStack_30 = lStack_20;
    }
    else {
      plVar3 = (longlong *)(DAT_1464c94a0 + 8 + lVar10 * 0x28);
      local_38 = *plVar3;
      lStack_30 = plVar3[1];
      lVar1 = DAT_1464c94a0 + lVar10 * 0x28;
      local_18 = *(undefined8 *)(lVar1 + 0x18);
      if (DAT_1464c94a8 != DAT_1464c94d4) {
        lVar11 = (longlong)(int)(DAT_1464c94e8 - 1U & *(uint *)(lVar1 + 0x24));
        puVar8 = DAT_1464c94e0;
        if (DAT_1464c94e0 == (undefined *)0x0) {
          puVar8 = &DAT_1464c94d8;
        }
        puVar2 = (undefined4 *)(puVar8 + lVar11 * 4);
        iVar4 = *(int *)(puVar8 + lVar11 * 4);
        while (iVar4 != -1) {
          if (iVar4 == (int)local_res8) {
            *puVar2 = *(undefined4 *)(lVar1 + 0x20);
            break;
          }
          lVar11 = (longlong)iVar4 * 5 + 4;
          puVar2 = (undefined4 *)(DAT_1464c94a0 + lVar11 * 8);
          iVar4 = *(int *)(DAT_1464c94a0 + lVar11 * 8);
        }
      }
      local_res8 = local_18;
      local_28 = local_38;
      lStack_20 = lStack_30;
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(&DAT_1464c94a0,lVar10,1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa88);
    lVar10 = *(longlong *)(local_38 + 0x10);
    FUN_141e25ca0(*(undefined8 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x1c),
                  *(undefined4 *)(lVar10 + 0x18));
    if ((int)local_18 == 1) {
      if ((param_2 != '\0') && (DAT_146ab6383 != '\0')) {
        puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 8;
        if (DAT_146ab6eb0 < puVar9) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x48);
          puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
          puVar9 = puVar12 + 8;
        }
        DAT_146ab6e8c = DAT_146ab6e8c + 1;
        DAT_146ab6ea8 = puVar9;
        *DAT_146ab6e80 = puVar12;
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        uVar6 = *(undefined8 *)(param_1 + 8);
        DAT_146ab6e80 = puVar12 + 1;
        puVar12[2] = local_38;
        puVar12[3] = lStack_30;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144e9c5e8;
        puVar12[4] = local_res8;
        puVar12[5] = param_1;
        puVar12[6] = uVar6;
        *(undefined4 *)(puVar12 + 7) = uVar5;
        return;
      }
      FUN_141e29630(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18b0),&local_28,param_1,
                    *(undefined4 *)(param_1 + 0x1c));
      return;
    }
    if ((int)local_18 == 0) {
      FUN_141e2d4b0(*(longlong *)(param_1 + 8) + 0x3f0,0,&local_28);
    }
  }
  return;
}



// FUNCTION 141e307a0 FUN_141e307a0 body=241 status=ok
// SIG undefined FUN_141e307a0(void)

void FUN_141e307a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x1908);
  if (*(int *)(param_1 + 0x1908) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x1900) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1900) + lVar3 * 8);
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
                    ((void *)(*(longlong *)(param_1 + 0x1900) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x1900) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x1908) = iVar6;
  }
  return;
}



// FUNCTION 141e308a0 FUN_141e308a0 body=265 status=ok
// SIG undefined FUN_141e308a0(void)

ulonglong FUN_141e308a0(byte param_1)

{
  char extraout_AL;
  DWORD DVar1;
  uint7 extraout_var;
  undefined4 extraout_var_00;
  uint7 uVar4;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aafbf0) && (_Init_thread_header(&DAT_146aafbf0), DAT_146aafbf0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Vulkan.UseRealUBs");
    lVar3 = lVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    DAT_146aafbe8 = lVar3;
    _Init_thread_footer(&DAT_146aafbf0);
  }
  lVar3 = DAT_146aafbe8;
  if (DAT_146aafbe8 != 0) {
    FUN_1415ad720(&DAT_1468e2448);
    uVar4 = extraout_var;
    if ((extraout_AL == '\0') && (DAT_1468c21ae != '\0')) {
      DVar1 = GetCurrentThreadId();
      uVar4 = (uint7)(CONCAT44(extraout_var_00,DVar1) >> 8);
      if (DVar1 != DAT_1468c21c0) {
        lVar5 = 4;
      }
    }
    if (*(int *)(lVar5 + lVar3) == 0) {
      return (ulonglong)uVar4 << 8;
    }
  }
  return (ulonglong)param_1;
}



// FUNCTION 141e309b0 FUN_141e309b0 body=246 status=ok
// SIG undefined FUN_141e309b0(void)

void FUN_141e309b0(longlong *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  param_3 = param_3 * 1e+09;
  lVar4 = 0;
  lVar1 = *(longlong *)(param_2 + 0x90);
  if ((9.223372e+18 <= param_3) && (param_3 = param_3 - 9.223372e+18, param_3 < 9.223372e+18)) {
    lVar4 = -0x8000000000000000;
  }
  iVar3 = (*DAT_146ab0018)(*(undefined8 *)(*(longlong *)(*param_1 + 0x438) + 8),1,lVar1,1,
                           (longlong)param_3 + lVar4);
  if (iVar3 == 0) {
    *(undefined4 *)(lVar1 + 8) = 1;
  }
  else if (iVar3 != 2) {
    FUN_141e67d70(iVar3,"Result",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp",
                  0x869);
  }
  FUN_141e2cf90(param_2);
                    /* WARNING: Could not recover jumptable at 0x000141e30a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}



// FUNCTION 141e30ab0 FUN_141e30ab0 body=98 status=ok
// SIG undefined FUN_141e30ab0(void)

undefined8 FUN_141e30ab0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_146ab0018)(*(undefined8 *)(*param_1 + 8),1,param_2,1,param_3);
  if (iVar1 != 0) {
    if (iVar1 != 2) {
      FUN_141e67d70(iVar1,"Result",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp",
                    0x869);
    }
    return 0;
  }
  *(undefined4 *)(param_2 + 8) = 1;
  return 1;
}



// FUNCTION 141e30b20 WriteDynamicUniformBuffer body=227 status=ok
// SIG undefined WriteDynamicUniformBuffer(void)

bool FVulkanDescriptorSetWriter::WriteDynamicUniformBuffer
               (longlong *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
               undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  
  plVar6 = *(longlong **)((ulonglong)param_2 * 0x40 + 0x30 + *param_1);
  if (DAT_1464c9c14 < 2) {
    piVar1 = (int *)(param_1[6] + (ulonglong)param_2 * 0xc);
    iVar2 = *(int *)(param_3 + 0x68);
    iVar3 = *piVar1;
    if (iVar3 != iVar2) {
      *piVar1 = iVar2;
      *plVar6 = *(longlong *)(param_3 + 0x60);
    }
    iVar4 = piVar1[1];
    iVar13 = (int)param_4;
    if (iVar4 != iVar13) {
      piVar1[1] = iVar13;
      plVar6[1] = param_4;
    }
    iVar5 = piVar1[2];
    iVar11 = (int)param_5;
    if (iVar5 != iVar11) {
      piVar1[2] = iVar11;
      plVar6[2] = param_5;
    }
    bVar12 = iVar5 != iVar11 || (iVar4 != iVar13 || iVar3 != iVar2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | bVar12;
  }
  else {
    lVar7 = *(longlong *)(param_3 + 0x60);
    lVar8 = *plVar6;
    *plVar6 = lVar7;
    lVar9 = plVar6[1];
    plVar6[1] = param_4;
    lVar10 = plVar6[2];
    plVar6[2] = param_5;
    bVar12 = lVar10 != param_5 || lVar9 != param_4;
    if (lVar8 != lVar7) {
      bVar12 = true;
    }
  }
  *(undefined4 *)(param_1[2] + (ulonglong)*(byte *)(param_1[1] + (ulonglong)param_2) * 4) = param_6;
  return bVar12;
}



// FUNCTION 141e30c10 WriteUniformBuffer body=200 status=ok
// SIG undefined WriteUniformBuffer(void)

bool FVulkanDescriptorSetWriter::WriteUniformBuffer
               (longlong *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  plVar6 = *(longlong **)((ulonglong)param_2 * 0x40 + 0x30 + *param_1);
  if (DAT_1464c9c14 < 2) {
    piVar1 = (int *)(param_1[6] + (ulonglong)param_2 * 0xc);
    iVar2 = *(int *)(param_3 + 0x68);
    iVar3 = *piVar1;
    if (iVar3 != iVar2) {
      *piVar1 = iVar2;
      *plVar6 = *(longlong *)(param_3 + 0x60);
    }
    iVar4 = piVar1[1];
    iVar12 = (int)param_4;
    if (iVar4 != iVar12) {
      piVar1[1] = iVar12;
      plVar6[1] = param_4;
    }
    iVar5 = piVar1[2];
    iVar11 = (int)param_5;
    if (iVar5 != iVar11) {
      piVar1[2] = iVar11;
      plVar6[2] = param_5;
    }
    bVar13 = iVar5 != iVar11 || (iVar4 != iVar12 || iVar3 != iVar2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | bVar13;
    return bVar13;
  }
  lVar7 = *(longlong *)(param_3 + 0x60);
  lVar8 = *plVar6;
  *plVar6 = lVar7;
  lVar9 = plVar6[1];
  plVar6[1] = param_4;
  lVar10 = plVar6[2];
  plVar6[2] = param_5;
  return lVar8 != lVar7 || (lVar10 != param_5 || lVar9 != param_4);
}



// FUNCTION 141e30ce0 FUN_141e30ce0 body=429 status=ok
// SIG undefined FUN_141e30ce0(void)

undefined8 * FUN_141e30ce0(undefined8 param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (1 < param_2) {
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"featureleveles31");
    if (cVar1 == '\0') {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"featureleveles2");
      if (cVar1 == '\0') {
        if (param_2 == 2) {
          DAT_146ab62cc = 0x13;
          DAT_1464c9c14 = 2;
        }
        else {
          DAT_1464c9c14 = 3;
          DAT_146ab62cc = 0x14;
        }
        goto LAB_141e30d62;
      }
    }
  }
  DAT_1464c9c14 = 1;
  DAT_146ab62cc = 0x11;
LAB_141e30d62:
  DAT_146ab632a = 0;
  DAT_1464c9c13 = 0;
  puVar3 = (undefined8 *)operator_new(0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 2;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = &PTR_FUN_144ea4478;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 0x16));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 0x16),4000);
    DAT_146ab6310 = 0;
    DAT_146ab6308 = 0;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_146ab6310,
               &DAT_1468e2360);
    DAT_146aafea8 = puVar3;
    return puVar3;
  }
  DAT_146aafea8 = (undefined8 *)0x0;
  return (undefined8 *)0x0;
}



// FUNCTION 141e30e90 operator<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*> body=276 status=ok
// SIG undefined operator<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>(void)

undefined8 *
TPairInitializer<FVulkanDescriptorSetsLayoutInfo_const_&,FVulkanLayout_*_const_&>::
operator<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>
          (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  uVar8 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar8;
  uVar2 = *(undefined4 *)((longlong)puVar3 + 0x14);
  uVar6 = *(undefined4 *)(puVar3 + 3);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar7;
  param_2[4] = puVar3[4];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar3 + 5);
  param_2[6] = 0;
  iVar10 = *(int *)(puVar3 + 7);
  lVar5 = puVar3[6];
  *(int *)(param_2 + 7) = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2 + 6,iVar10,0);
    puVar9 = (undefined8 *)param_2[6];
    puVar11 = (undefined4 *)(lVar5 + 0x10);
    do {
      *puVar9 = 0;
      iVar1 = puVar11[-2];
      _Src = *(void **)(puVar11 + -4);
      *(int *)(puVar9 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar9,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar1 * 0x18);
      }
      uVar2 = *puVar11;
      puVar11 = puVar11 + 6;
      *(undefined4 *)(puVar9 + 2) = uVar2;
      puVar9 = puVar9 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar3 + 8);
  *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)((longlong)puVar3 + 0x44);
  FDescriptorSetRemappingInfo::FDescriptorSetRemappingInfo(param_2 + 9,puVar3 + 9);
  param_2[0x30] = *puVar4;
  return param_2;
}



// FUNCTION 141e30fb0 Append<FDefaultSetAllocator> body=560 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

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
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reserve();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_141e3109d;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141e3109d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141e31163;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141e31163:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = *(longlong *)CONCAT44(uStack_74,local_78) + (longlong)(int)uStack_5c * 0x18;
    lStack_90 = local_98 + 8;
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
              (param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 141e311e0 CopyToEmpty<FDescriptorSetRemappingInfo::FSetInfo> body=219 status=ok
// SIG undefined CopyToEmpty<FDescriptorSetRemappingInfo::FSetInfo>(void)

void TArray<FDescriptorSetRemappingInfo::FSetInfo,FDefaultAllocator>::
     CopyToEmpty<FDescriptorSetRemappingInfo::FSetInfo>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  void *_Src;
  undefined2 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined2 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar2 = *(int *)(puVar3 + -4);
      _Src = *(void **)(puVar3 + -8);
      *(int *)(param_1 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 << 2);
      }
      *(undefined2 *)(param_1 + 2) = *puVar3;
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 0xc;
      *(undefined2 *)((longlong)param_1 + 0x12) = *puVar1;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141e312c0 CopyToEmpty<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int> body=210 status=ok
// SIG undefined CopyToEmpty<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>(void)

void TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,TSizedDefaultAllocator<32>_>::
     CopyToEmpty<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar3[-2];
      _Src = *(void **)(puVar3 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
      uVar2 = *puVar3;
      puVar3 = puVar3 + 6;
      *(undefined4 *)(param_1 + 2) = uVar2;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141e313a0 CreateShader<TVulkanBaseShader<FRHIComputeShader,5,32>_> body=500 status=ok
// SIG undefined CreateShader<TVulkanBaseShader<FRHIComputeShader,5,32>_>(void)

longlong *
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIComputeShader,5,32>_>
          (PSRWLOCK param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  PSRWLOCK pRVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res10 [16];
  longlong local_res20;
  longlong *local_48;
  longlong *local_40;
  longlong **local_38;
  
  iVar2 = *(int *)(param_2 + 1);
  iVar1 = FCrc::MemCrc32(*param_2,iVar2,0);
  plVar7 = (longlong *)0x0;
  lVar6 = CONCAT44(iVar1,iVar2);
  local_res20 = lVar6;
  if (lVar6 != 0) {
    AcquireSRWLockShared(param_1);
    if (*(int *)&param_1[0x34].Ptr != *(int *)((longlong)&param_1[0x39].Ptr + 4)) {
      pRVar3 = param_1[0x3b].Ptr;
      if (param_1[0x3b].Ptr == (PSRWLOCK)0x0) {
        pRVar3 = param_1 + 0x3a;
      }
      iVar2 = *(int *)((longlong)&pRVar3->Ptr +
                      ((longlong)(iVar1 * 0x17 + iVar2) & (longlong)*(int *)&param_1[0x3c].Ptr - 1U)
                      * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (longlong *)((longlong)param_1[0x33].Ptr + (longlong)iVar2 * 0x18);
          if (*(longlong *)((longlong)param_1[0x33].Ptr + (longlong)iVar2 * 0x18) == lVar6) {
            if (iVar2 != -1) goto LAB_141e31463;
            break;
          }
          iVar2 = (int)plVar4[2];
        } while (iVar2 != -1);
      }
    }
    plVar4 = plVar7;
LAB_141e31463:
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    if (plVar5 == (longlong *)0x0) {
      ReleaseSRWLockShared(param_1);
    }
    else {
      lVar6 = *plVar5;
      ReleaseSRWLockShared(param_1);
      plVar4 = (longlong *)(lVar6 + -0x38);
      if (lVar6 == 0) {
        plVar4 = plVar7;
      }
      if (plVar4 != (longlong *)0x0) {
        return plVar4;
      }
    }
  }
  plVar5 = (longlong *)operator_new(0x198);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f3ece8;
    *(undefined4 *)(plVar5 + 1) = 0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
    *(undefined2 *)(plVar5 + 2) = 0x100;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *(undefined4 *)(plVar5 + 5) = 0;
    *plVar5 = (longlong)&PTR_FUN_144d838d8;
    plVar5[6] = 0;
    FVulkanShader::FVulkanShader(plVar5 + 7,param_3,5);
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144ea4c78;
    plVar5[7] = (longlong)&PTR_LAB_144ea4c80;
    plVar4 = plVar5;
  }
  FVulkanShader::Setup(plVar4 + 7,param_2,local_res20);
  AcquireSRWLockExclusive(param_1);
  local_40 = &local_res20;
  local_48 = plVar4 + 7;
  if (plVar4 == (longlong *)0x0) {
    local_48 = plVar7;
  }
  local_38 = &local_48;
  FUN_141e32e00(param_1 + 0x33,local_res10,&local_40,0);
  ReleaseSRWLockExclusive(param_1);
  return plVar4;
}



// FUNCTION 141e315a0 FUN_141e315a0 body=741 status=ok
// SIG undefined FUN_141e315a0(void)

int * FUN_141e315a0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  bool local_res8;
  
  iVar7 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar13 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x18;
  plVar13 = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar15;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),plVar13,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar13 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e31856;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) * 0x17 + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e31856:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e31890 FUN_141e31890 body=698 status=ok
// SIG undefined FUN_141e31890(void)

int * FUN_141e31890(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  puVar14 = (uint *)(*param_1 + lVar1);
  *puVar14 = *(uint *)*param_3;
  *(undefined8 *)(puVar14 + 2) = *puVar2;
  puVar14[4] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x18) == *puVar14) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),puVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141e31b25;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *puVar14;
    puVar14[5] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar14[4] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e31b25:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141e31b50 FUN_141e31b50 body=878 status=ok
// SIG undefined FUN_141e31b50(void)

int * FUN_141e31b50(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool local_res8;
  
  iVar13 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar17 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar17 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar17 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar17;
  local_res8 = false;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar17 * 0x28);
  puVar3 = (uint *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  *puVar1 = *puVar3;
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar3 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar3 + 4);
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)(puVar1 + 6) = *puVar4;
  puVar1[8] = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar7 = iVar16;
    if (uVar15 != 0) {
      uVar14 = (ulonglong)(int)*puVar1;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
      if (iVar12 != -1) {
        lVar11 = *param_1;
        do {
          lVar2 = lVar11 + (longlong)iVar12 * 0x28;
          if (*(int *)(lVar11 + (longlong)iVar12 * 0x28) == (int)uVar14) {
            puVar4 = *(undefined8 **)(lVar2 + 8);
            iVar7 = *(int *)(puVar4 + 1);
            if ((iVar7 == *(int *)(*(undefined8 **)(puVar1 + 2) + 1)) &&
               (iVar7 = _guard_xfg_dispatch_icall_nop
                                  ((void *)*puVar4,(void *)**(undefined8 **)(puVar1 + 2),
                                   (longlong)iVar7), iVar7 == 0)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (!bVar6) goto LAB_141e31cf6;
            bVar6 = true;
          }
          else {
LAB_141e31cf6:
            bVar6 = false;
          }
          iVar7 = iVar12;
          if (bVar6) break;
          iVar12 = *(int *)(lVar2 + 0x20);
          uVar14 = (ulonglong)*puVar1;
          lVar11 = *param_1;
          iVar7 = iVar16;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      lVar11 = *param_1;
      plVar9 = *(longlong **)(lVar11 + 0x10 + (longlong)iVar7 * 0x28);
      if (plVar9 != (longlong *)0x0) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar9,0x10);
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 + (longlong)iVar7 * 0x28),puVar1,0x20);
      iVar13 = *param_2;
      bVar5 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar13;
      }
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + (longlong)iVar13 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar11 + 4 + (longlong)iVar13 * 0x28) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_141e31e8f;
    }
  }
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar10 = '\0';
    if (uVar8 != 0) {
      iVar13 = 0x1f - iVar16;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar10 = '\x1f' - (char)iVar16;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar15 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar15;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar9 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e31e8f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e31ec0 FUN_141e31ec0 body=885 status=ok
// SIG undefined FUN_141e31ec0(void)

int * FUN_141e31ec0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  void *_Dst;
  char cVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *_Src;
  bool local_res8;
  
  iVar13 = 1;
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar19);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar19 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)((longlong)iVar19 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar19;
  local_res8 = false;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar19 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  puVar1 = (uint *)*param_3;
  _Src = (uint *)((longlong)iVar19 * 0x68 + *param_1);
  *_Src = *puVar1;
  *(undefined8 *)(_Src + 2) = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(_Src + 4) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = puVar2[1];
  *(undefined8 *)(_Src + 6) = *puVar2;
  *(undefined8 *)(_Src + 8) = uVar4;
  uVar4 = puVar2[3];
  *(undefined8 *)(_Src + 10) = puVar2[2];
  *(undefined8 *)(_Src + 0xc) = uVar4;
  uVar4 = puVar2[5];
  *(undefined8 *)(_Src + 0xe) = puVar2[4];
  *(undefined8 *)(_Src + 0x10) = uVar4;
  uVar4 = puVar2[7];
  *(undefined8 *)(_Src + 0x12) = puVar2[6];
  *(undefined8 *)(_Src + 0x14) = uVar4;
  *(undefined8 *)(_Src + 0x16) = puVar2[8];
  _Src[0x18] = 0xffffffff;
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar17 != 1) {
    iVar6 = iVar18;
    if (uVar17 != 0) {
      uVar16 = (ulonglong)(int)*_Src;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      if (iVar12 != -1) {
        lVar11 = *param_1;
        do {
          piVar14 = (int *)((longlong)iVar12 * 0x68 + lVar11);
          if (*piVar14 == (int)uVar16) {
            iVar6 = *(int *)(*(undefined8 **)(piVar14 + 2) + 1);
            if ((iVar6 == *(int *)(*(undefined8 **)(_Src + 2) + 1)) &&
               (iVar6 = _guard_xfg_dispatch_icall_nop
                                  ((void *)**(undefined8 **)(piVar14 + 2),
                                   (void *)**(undefined8 **)(_Src + 2),(longlong)iVar6), iVar6 == 0)
               ) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (!bVar5) goto LAB_141e32074;
            bVar5 = true;
          }
          else {
LAB_141e32074:
            bVar5 = false;
          }
          iVar6 = iVar12;
          if (bVar5) break;
          iVar12 = piVar14[0x18];
          uVar16 = (ulonglong)*_Src;
          lVar11 = *param_1;
          iVar6 = iVar18;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0x68 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar9 != (longlong *)0x0) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar9,0x10);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      iVar13 = *param_2;
      bVar3 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar13;
      }
      uVar10 = 0xffffffff;
      puVar8 = (undefined4 *)((longlong)iVar13 * 0x68 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e32206;
    }
  }
  if (3 < uVar17) {
    uVar7 = (uVar17 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar18 = 0x20;
    cVar15 = '\0';
    if (uVar7 != 0) {
      iVar18 = 0x1f - iVar13;
    }
    uVar7 = (uVar17 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar15 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar18 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar17 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar17 = (int)param_1[9] - 1U & *_Src;
    _Src[0x19] = uVar17;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[0x18] = *(uint *)((longlong)plVar9 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e32206:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e32240 FUN_141e32240 body=709 status=ok
// SIG undefined FUN_141e32240(void)

int * FUN_141e32240(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  puVar13 = (uint *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x14;
  _Src = (uint *)(*param_1 + lVar1);
  *_Src = *(uint *)*param_3;
  _Src[1] = *puVar13;
  *(short *)(_Src + 2) = (short)puVar13[1];
  _Src[3] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x14) == *_Src) break;
          iVar8 = *(int *)(*param_1 + 0xc + (longlong)iVar8 * 0x14);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x14),_Src,0xc);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e324e0;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *_Src;
    _Src[4] = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[3] = *(uint *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e324e0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141e32510 FUN_141e32510 body=625 status=ok
// SIG undefined FUN_141e32510(void)

int * FUN_141e32510(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  void *_Dst;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar9 = 0xffffffff;
  iVar8 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar11 * 0x18);
  plVar6 = (longlong *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  lVar2 = *plVar6;
  *(longlong *)(puVar1 + 2) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[4] = 0xffffffff;
  bVar12 = false;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar7 = iVar8;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar5 != -1) {
        do {
          iVar7 = iVar5;
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x18) == *puVar1) break;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
          iVar7 = iVar8;
        } while (iVar5 != -1);
      }
    }
    bVar12 = iVar7 != -1;
    if (bVar12) {
      _Dst = (void *)(*param_1 + (longlong)iVar7 * 0x18);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar1,0x10);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar8;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar8 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + (longlong)iVar8 * 0x18) = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e3275c;
    }
  }
  cVar4 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[5] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_141e3275c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141e32790 FUN_141e32790 body=810 status=ok
// SIG undefined FUN_141e32790(void)

int * FUN_141e32790(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  undefined8 *_Src;
  bool bVar19;
  
  iVar11 = 1;
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  puVar10 = (undefined4 *)param_3[1];
  _Src = (undefined8 *)((longlong)iVar13 * 0x30 + *param_1);
  FVulkanDescriptorSetsLayoutInfo::FSetLayout::FSetLayout(_Src,*param_3);
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  bVar19 = false;
  *(undefined4 *)(_Src + 3) = *puVar10;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar5;
  *(undefined4 *)(_Src + 4) = uVar6;
  *(undefined4 *)((longlong)_Src + 0x24) = uVar7;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar17 != 1) {
    iVar13 = iVar18;
    if (uVar17 != 0) {
      iVar2 = *(int *)(_Src + 2);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
      if (iVar8 != -1) {
        lVar12 = *param_1;
        do {
          puVar14 = (undefined8 *)((longlong)iVar8 * 0x30 + lVar12);
          if (iVar2 == *(int *)(puVar14 + 2)) {
            iVar3 = *(int *)(puVar14 + 1);
            if (*(int *)(_Src + 1) == iVar3) {
              iVar13 = iVar8;
              if ((iVar3 == 0) ||
                 (iVar8 = _guard_xfg_dispatch_icall_nop
                                    ((void *)*_Src,(void *)*puVar14,(longlong)iVar3 * 0x18),
                 iVar8 == 0)) break;
              lVar12 = *param_1;
            }
          }
          iVar8 = *(int *)(puVar14 + 5);
          iVar13 = iVar18;
        } while (iVar8 != -1);
      }
    }
    bVar19 = iVar13 != -1;
    if (bVar19) {
      plVar15 = (longlong *)((longlong)iVar13 * 0x30 + *param_1);
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar15,_Src,0x28);
      iVar11 = *param_2;
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar11;
      }
      puVar10 = (undefined4 *)((longlong)iVar11 * 0x30 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      puVar10[1] = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141e32a95;
    }
  }
  if (3 < uVar17) {
    uVar9 = (uVar17 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar16 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar18;
    }
    uVar9 = (uVar17 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar16 = '\x1f' - (char)iVar18;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar17 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar17 = (int)param_1[9] - 1U & *(uint *)(_Src + 2);
    *(uint *)((longlong)_Src + 0x2c) = uVar17;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e32a95:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 141e32ac0 FUN_141e32ac0 body=821 status=ok
// SIG undefined FUN_141e32ac0(void)

int * FUN_141e32ac0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  void *_Src;
  int iVar13;
  uint uVar14;
  void *_Dst;
  bool local_res8;
  
  iVar13 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar9 * 400 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 400 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (void *)((longlong)iVar9 * 400 + *param_1);
  TPairInitializer<FVulkanDescriptorSetsLayoutInfo_const_&,FVulkanLayout_*_const_&>::
  operator<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>
            (param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x188) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar14 != 1) {
    iVar9 = iVar12;
    if (uVar14 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x40))
                       * 4);
      if (iVar10 != -1) {
        lVar3 = *param_1;
        do {
          lVar11 = (longlong)iVar10 * 400 + lVar3;
          cVar5 = FVulkanDescriptorSetsLayoutInfo::operator==(lVar11,_Src);
          iVar9 = iVar10;
          if (cVar5 != '\0') break;
          iVar10 = *(int *)(lVar11 + 0x188);
          iVar9 = iVar12;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 400 + *param_1);
      FDescriptorSetRemappingInfo::~FDescriptorSetRemappingInfo((longlong)_Dst + 0x48);
      iVar13 = *(int *)((longlong)_Dst + 0x38);
      plVar8 = *(longlong **)((longlong)_Dst + 0x30);
      if (iVar13 != 0) {
        do {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 3;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        plVar8 = *(longlong **)((longlong)_Dst + 0x30);
      }
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x188);
      iVar13 = *param_2;
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 400 + *param_1) = iVar13;
      }
      puVar7 = (undefined4 *)((longlong)iVar13 * 400 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar7[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141e32dcc;
    }
  }
  if (3 < uVar14) {
    uVar6 = (uVar14 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar5 = '\0';
    if (uVar6 != 0) {
      iVar13 = 0x1f - iVar12;
    }
    uVar6 = (uVar14 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar5 = '\x1f' - (char)iVar12;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar14 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0x40);
    *(uint *)((longlong)_Src + 0x18c) = uVar14;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x188) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e32dcc:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e32e00 FUN_141e32e00 body=569 status=ok
// SIG undefined FUN_141e32e00(void)

int * FUN_141e32e00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  plVar7 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
  plVar5 = (longlong *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *plVar7 = lVar2;
  plVar7[1] = *plVar5;
  *(undefined4 *)(plVar7 + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar2) goto LAB_141e32f5b;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141e32f5b:
    bVar10 = iVar4 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),plVar7,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar4;
      goto LAB_141e33010;
    }
  }
  cVar3 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    uVar8 = (int)((ulonglong)*plVar7 >> 0x20) * 0x17 + (int)*plVar7 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar7 + 0x14) = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar7 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141e33010:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 141e33040 FUN_141e33040 body=2895 status=ok
// SIG undefined FUN_141e33040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e33040(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStack_178 [32];
  char local_158;
  char local_157;
  longlong local_150;
  int local_148;
  int local_144;
  longlong local_140;
  undefined4 local_138;
  int local_134;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  int local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint *local_b0;
  undefined4 *local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  byte local_48 [8];
  ulonglong local_40;
  
  lVar13 = DAT_146aafdc8;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_120 = 1;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_d8 = (longlong *)0x0;
  local_128 = 0;
  local_118 = (longlong *)0x0;
  local_140 = param_1;
  local_f8 = param_2;
  local_c8 = param_3;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar14 = 4;
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), lVar8 = lVar14, DVar6 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  lVar25 = DAT_146aafdc8;
  iVar22 = *(int *)(lVar8 + lVar13);
  local_148 = iVar22;
  if (iVar22 < 2) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar6 = GetCurrentThreadId(), lVar13 = lVar14, DVar6 == DAT_1468c21c0)) {
      lVar13 = 0;
    }
    local_138 = 6;
    if (*(int *)(lVar13 + lVar25) != 1) goto LAB_141e3315c;
  }
  local_138 = 8;
LAB_141e3315c:
  lVar13 = DAT_146aafde0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar14 = 0;
  }
  local_158 = *(int *)(lVar14 + lVar13) == 2;
  local_48[0] = 0xff;
  local_48[1] = 0xff;
  local_48[2] = 0xff;
  local_48[3] = 0xff;
  local_48[4] = 0xff;
  if ((*(int *)(param_2 + 0x58) - *(int *)(param_2 + 0x84) < 1) && (*(int *)(lVar14 + lVar13) != 2))
  {
    local_157 = '\0';
    local_134 = -1;
  }
  else {
    local_134 = *(int *)(param_1 + 0x50);
    lVar13 = (longlong)local_134;
    local_157 = '\x01';
    *(int *)(param_1 + 0x50) = local_134 + 1;
    if (*(int *)(param_1 + 0x54) < local_134 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x48);
    }
    lVar14 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
    *(undefined8 *)(lVar14 + 8 + lVar13 * 0x18) = 0;
    *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) = 0;
  }
  local_110 = 0;
  local_e0 = 0;
  local_150 = 0;
  do {
    lVar13 = local_150;
    plVar12 = *(longlong **)(param_2 + 0xa0 + local_150 * 8);
    local_108 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      iVar7 = (int)plVar12[9];
      lVar8 = local_150 * 0x38;
      local_120 = CONCAT44(0x20,(undefined4)local_120);
      lVar14 = param_1 + lVar8;
      local_130 = lVar8;
      local_100 = lVar14;
      if (*(int *)(lVar14 + 0x84) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo();
        iVar7 = (int)plVar12[9];
      }
      plVar24 = local_108;
      iVar20 = 0;
      lVar25 = param_1;
      if (0 < iVar7) {
        plVar1 = (longlong *)(param_1 + 0x48);
        do {
          if (local_158 == '\0') {
            if (local_48[lVar13] == 0xff) {
              iVar22 = *(int *)(param_1 + 0x50);
              uVar26 = (ulonglong)iVar22;
              *(int *)(param_1 + 0x50) = iVar22 + 1;
              if (*(int *)(param_1 + 0x54) < iVar22 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar1);
              }
              lVar14 = *plVar1;
              local_48[lVar13] = (byte)iVar22;
              *(undefined8 *)(lVar14 + uVar26 * 0x18) = 0;
              *(undefined8 *)(lVar14 + 8 + uVar26 * 0x18) = 0;
              *(undefined4 *)(lVar14 + 0x10 + uVar26 * 0x18) = 0;
            }
            else {
              uVar26 = (ulonglong)local_48[lVar13];
            }
          }
          else {
            uVar26 = 0;
          }
          uVar26 = uVar26 & 0xff;
          iVar22 = *(int *)(*plVar1 + 8 + uVar26 * 0x18);
          plVar12 = (longlong *)(*plVar1 + uVar26 * 0x18);
          *(int *)(plVar12 + 1) = iVar22 + 1;
          if (*(int *)((longlong)plVar12 + 0xc) < iVar22 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar22);
          }
          *(undefined4 *)(*plVar12 + (longlong)iVar22 * 4) = local_138;
          if (*(short *)(local_130 + 0x40 + (longlong)plVar1) == -1) {
            *(short *)(local_130 + 0x40 + (longlong)plVar1) = (short)uVar26;
          }
          plVar12 = (longlong *)(local_130 + 0x30 + (longlong)plVar1);
          iVar7 = (int)plVar12[1];
          *(int *)(plVar12 + 1) = iVar7 + 1;
          if (*(int *)((longlong)plVar12 + 0xc) < iVar7 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar12,iVar7);
          }
          lVar25 = local_140;
          *(short *)(*plVar12 + (longlong)iVar7 * 2) = (short)iVar22;
          local_128 = CONCAT44(local_138,iVar22);
          FVulkanDescriptorSetsLayoutInfo::AddDescriptor(local_140,uVar26,&local_128);
          iVar20 = iVar20 + 1;
          lVar8 = local_130;
          lVar13 = local_150;
          plVar12 = plVar24;
          lVar14 = local_100;
          iVar22 = local_148;
        } while (iVar20 < (int)plVar24[9]);
      }
      if (*(char *)((longlong)plVar12 + 0x84) != '\0') {
        iVar7 = (int)plVar12[1];
        if (*(int *)(lVar14 + 0x74) < iVar7) {
          FUN_141e52cc0();
          iVar7 = (int)plVar12[1];
        }
        uVar26 = 0;
        if (0 < iVar7) {
          uVar23 = uVar26;
          iVar7 = 6;
          local_144 = 6;
          if (1 < iVar22) {
            iVar7 = 8;
            local_144 = 8;
          }
          do {
            puVar19 = (uint *)0x0;
            local_120 = CONCAT44(0x20,(undefined4)local_120);
            local_128 = CONCAT44(iVar7,(undefined4)local_128);
            local_f0 = *(uint *)(*plVar12 + uVar23);
            if (*(short *)(*plVar12 + 4 + uVar23) == -1) {
              plVar12 = (longlong *)(lVar8 + 0x68 + lVar25);
              iVar22 = (int)plVar12[1];
              lVar13 = (longlong)iVar22;
              *(int *)(plVar12 + 1) = iVar22 + 1;
              if (*(int *)((longlong)plVar12 + 0xc) < iVar22 + 1) {
                TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeGrow
                          (plVar12,iVar22);
              }
              lVar14 = *plVar12;
              *(undefined4 *)(lVar14 + lVar13 * 6) = 0xffffffff;
              *(undefined2 *)(lVar14 + 4 + lVar13 * 6) = 0;
              *(undefined1 *)(*plVar12 + 4 + lVar13 * 6) = 0;
            }
            else {
              if (local_157 != '\0') {
                if (*(int *)(local_f8 + 0x58) != *(int *)(local_f8 + 0x84)) {
                  lVar14 = *(longlong *)(local_f8 + 0x90);
                  if (*(longlong *)(local_f8 + 0x90) == 0) {
                    lVar14 = local_f8 + 0x88;
                  }
                  uVar21 = *(uint *)(lVar14 + ((longlong)*(int *)(local_f8 + 0x98) - 1U &
                                              (longlong)(int)local_f0) * 4);
                  if (uVar21 != 0xffffffff) {
                    do {
                      puVar9 = (uint *)((longlong)(int)uVar21 * 0x10 +
                                       *(longlong *)(local_f8 + 0x50));
                      if (*puVar9 == local_f0) {
                        if (uVar21 != 0xffffffff) goto LAB_141e33491;
                        break;
                      }
                      uVar21 = puVar9[2];
                    } while (uVar21 != 0xffffffff);
                  }
                }
                puVar9 = puVar19;
LAB_141e33491:
                puVar18 = puVar9 + 1;
                if (puVar9 == (uint *)0x0) {
                  puVar18 = puVar19;
                }
                if (puVar18 != (uint *)0x0) {
                  if ((int)local_90 != local_64) {
                    puVar10 = local_60;
                    if (local_58 != (undefined1 *)0x0) {
                      puVar10 = local_58;
                    }
                    iVar22 = *(int *)(puVar10 + (longlong)(int)(local_50 - 1U & local_f0) * 4);
                    while (iVar22 != -1) {
                      lVar13 = (longlong)iVar22 * 0x14;
                      if (*(uint *)(lVar13 + local_98) == local_f0) {
                        puVar9 = (uint *)(lVar13 + local_98);
                        if (iVar22 != -1) goto LAB_141e3350d;
                        break;
                      }
                      iVar22 = *(int *)(lVar13 + 0xc + local_98);
                    }
                  }
                  puVar9 = puVar19;
LAB_141e3350d:
                  puVar17 = puVar9 + 1;
                  if (puVar9 == (uint *)0x0) {
                    puVar17 = puVar19;
                  }
                  if (puVar17 == (uint *)0x0) {
                    local_120 = CONCAT44(*puVar18,(undefined4)local_120);
                    iVar22 = *(int *)(*(longlong *)(lVar25 + 0x48) + 8 + (longlong)local_134 * 0x18)
                    ;
                    plVar12 = (longlong *)
                              (*(longlong *)(lVar25 + 0x48) + (longlong)local_134 * 0x18);
                    *(int *)(plVar12 + 1) = iVar22 + 1;
                    if (*(int *)((longlong)plVar12 + 0xc) < iVar22 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar22);
                    }
                    lVar13 = local_130 + lVar25;
                    *(int *)(*plVar12 + (longlong)iVar22 * 4) = iVar7;
                    iVar20 = *(int *)(lVar13 + 0x70);
                    lVar14 = (longlong)iVar20;
                    *(int *)(lVar13 + 0x70) = iVar20 + 1;
                    if (*(int *)(lVar13 + 0x74) < iVar20 + 1) {
                      TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::
                      ResizeGrow(lVar13 + 0x68,iVar20);
                    }
                    iVar20 = local_134;
                    lVar8 = *(longlong *)(lVar13 + 0x68);
                    *(undefined4 *)(lVar8 + lVar14 * 6) = 0xffffffff;
                    *(undefined2 *)(lVar8 + 4 + lVar14 * 6) = 0;
                    lVar13 = *(longlong *)(lVar13 + 0x68);
                    *(undefined1 *)(lVar13 + 4 + lVar14 * 6) = 1;
                    *(short *)(lVar13 + lVar14 * 6) = (short)local_134;
                    puVar2 = (undefined4 *)(lVar13 + lVar14 * 6);
                    *(short *)((longlong)puVar2 + 2) = (short)iVar22;
                    local_ec = *puVar2;
                    local_e8 = *(undefined2 *)(puVar2 + 1);
                    local_b0 = &local_f0;
                    local_a8 = &local_ec;
                    FUN_141e32240(&local_98,local_c0,&local_b0,0);
                    local_128 = CONCAT44(local_128._4_4_,iVar22);
                    FVulkanDescriptorSetsLayoutInfo::AddDescriptor(lVar25,iVar20,&local_128);
                  }
                  else {
                    plVar12 = (longlong *)(lVar8 + 0x68 + lVar25);
                    iVar22 = (int)plVar12[1];
                    lVar13 = (longlong)iVar22;
                    *(int *)(plVar12 + 1) = iVar22 + 1;
                    if (*(int *)((longlong)plVar12 + 0xc) < iVar22 + 1) {
                      TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::
                      ResizeGrow(plVar12,iVar22);
                    }
                    lVar14 = *plVar12;
                    *(undefined4 *)(lVar14 + lVar13 * 6) = 0xffffffff;
                    *(undefined2 *)(lVar14 + 4 + lVar13 * 6) = 0;
                    puVar19 = (uint *)(*plVar12 + lVar13 * 6);
                    *(char *)(puVar19 + 1) = (char)puVar17[1];
                    *puVar19 = *puVar17;
                  }
                  goto LAB_141e337e0;
                }
              }
              if (local_158 == '\0') {
                if (local_48[lVar13] == 0xff) {
                  iVar22 = *(int *)(lVar25 + 0x50);
                  uVar15 = (ulonglong)iVar22;
                  *(int *)(lVar25 + 0x50) = iVar22 + 1;
                  if (*(int *)(lVar25 + 0x54) < iVar22 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(lVar25 + 0x48);
                  }
                  lVar14 = *(longlong *)(lVar25 + 0x48);
                  local_48[lVar13] = (byte)iVar22;
                  *(undefined8 *)(lVar14 + uVar15 * 0x18) = 0;
                  *(undefined8 *)(lVar14 + 8 + uVar15 * 0x18) = 0;
                  *(undefined4 *)(lVar14 + 0x10 + uVar15 * 0x18) = 0;
                }
                else {
                  uVar15 = (ulonglong)local_48[lVar13];
                }
              }
              else {
                uVar15 = 0;
              }
              plVar12 = (longlong *)(lVar25 + 0x48);
              iVar22 = *(int *)(*plVar12 + 8 + (uVar15 & 0xff) * 0x18);
              plVar24 = (longlong *)(*plVar12 + (uVar15 & 0xff) * 0x18);
              *(int *)(plVar24 + 1) = iVar22 + 1;
              if (*(int *)((longlong)plVar24 + 0xc) < iVar22 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24);
              }
              lVar13 = local_130;
              *(int *)(*plVar24 + (longlong)iVar22 * 4) = iVar7;
              iVar7 = *(int *)((longlong)plVar12 + local_130 + 0x28);
              lVar14 = (longlong)iVar7;
              iVar7 = iVar7 + 1;
              *(int *)((longlong)plVar12 + local_130 + 0x28) = iVar7;
              if (*(int *)((longlong)plVar12 + local_130 + 0x2c) < iVar7) {
                TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeGrow
                          ((longlong)plVar12 + local_130 + 0x20);
              }
              lVar4 = local_150;
              lVar8 = *(longlong *)((longlong)plVar12 + lVar13 + 0x20);
              local_128 = CONCAT44(local_128._4_4_,iVar22);
              *(undefined4 *)(lVar8 + lVar14 * 6) = 0xffffffff;
              *(undefined2 *)(lVar8 + 4 + lVar14 * 6) = 0;
              lVar13 = *(longlong *)((longlong)plVar12 + lVar13 + 0x20);
              *(undefined1 *)(lVar13 + 4 + lVar14 * 6) = 1;
              *(short *)(lVar13 + 2 + lVar14 * 6) = (short)iVar22;
              *(ushort *)(lVar13 + lVar14 * 6) = (ushort)uVar15 & 0xff;
              if (local_158 == '\0') {
                if (local_48[local_150] == 0xff) {
                  iVar22 = *(int *)(lVar25 + 0x50);
                  uVar15 = (ulonglong)iVar22;
                  *(int *)(lVar25 + 0x50) = iVar22 + 1;
                  if (*(int *)(lVar25 + 0x54) < iVar22 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar12);
                  }
                  lVar13 = *plVar12;
                  local_48[lVar4] = (byte)iVar22;
                  *(undefined8 *)(lVar13 + uVar15 * 0x18) = 0;
                  *(undefined8 *)(lVar13 + 8 + uVar15 * 0x18) = 0;
                  *(undefined4 *)(lVar13 + 0x10 + uVar15 * 0x18) = 0;
                }
                else {
                  uVar15 = (ulonglong)local_48[local_150];
                }
              }
              else {
                uVar15 = 0;
              }
              lVar25 = local_140;
              FVulkanDescriptorSetsLayoutInfo::AddDescriptor(local_140,uVar15 & 0xff,&local_128);
              iVar7 = local_144;
            }
LAB_141e337e0:
            uVar21 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar21;
            uVar23 = uVar23 + 0x28;
            lVar8 = local_130;
            lVar13 = local_150;
            plVar12 = local_108;
          } while ((int)uVar21 < (int)local_108[1]);
        }
      }
      iVar22 = (int)plVar12[3];
      plVar24 = (longlong *)(local_100 + 0x58);
      local_b8 = plVar24;
      if (*(int *)(local_100 + 100) < iVar22) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar24);
        iVar22 = (int)plVar12[3];
      }
      local_120 = CONCAT44(0x20,(undefined4)local_120);
      local_144 = 0;
      param_1 = lVar25;
      if (0 < iVar22) {
        plVar1 = (longlong *)(lVar25 + 0x48);
        local_d0 = 0;
        do {
          lVar14 = local_150;
          lVar13 = local_d0 + plVar12[2];
          if (local_158 == '\0') {
            if (local_48[local_150] == 0xff) {
              iVar22 = *(int *)(lVar25 + 0x50);
              uVar26 = (ulonglong)iVar22;
              *(int *)(lVar25 + 0x50) = iVar22 + 1;
              if (*(int *)(lVar25 + 0x54) < iVar22 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar1);
              }
              lVar8 = *plVar1;
              local_48[lVar14] = (byte)iVar22;
              *(undefined8 *)(lVar8 + uVar26 * 0x18) = 0;
              *(undefined8 *)(lVar8 + 8 + uVar26 * 0x18) = 0;
              *(undefined4 *)(lVar8 + 0x10 + uVar26 * 0x18) = 0;
            }
            else {
              uVar26 = (ulonglong)local_48[local_150];
            }
          }
          else {
            uVar26 = 0;
          }
          uVar3 = *(ushort *)(lVar13 + 2);
          uVar26 = uVar26 & 0xff;
          uVar21 = (uint)*(byte *)((ulonglong)*(ushort *)(lVar13 + 4) + plVar12[4]);
          local_100 = CONCAT44(local_100._4_4_,uVar21);
          if (uVar3 == 0xffff) {
            uVar16 = *(uint *)(*plVar1 + 8 + uVar26 * 0x18);
            plVar12 = (longlong *)(*plVar1 + uVar26 * 0x18);
            *(uint *)(plVar12 + 1) = uVar16 + 1;
            if (*(int *)((longlong)plVar12 + 0xc) < (int)(uVar16 + 1)) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,uVar16);
            }
            *(uint *)(*plVar12 + (longlong)(int)uVar16 * 4) = uVar21;
          }
          else {
            uVar16 = (uint)*(ushort *)
                            (*(longlong *)(local_130 + 0x10 + (longlong)plVar1) + 2 +
                            (ulonglong)uVar3 * 4);
          }
          plVar12 = (longlong *)(local_130 + 0x10 + (longlong)plVar1);
          iVar22 = (int)plVar12[1];
          *(int *)(plVar12 + 1) = iVar22 + 1;
          if (*(int *)((longlong)plVar12 + 0xc) < iVar22 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar22);
          }
          param_1 = local_140;
          lVar14 = (longlong)iVar22 * 4;
          *(undefined4 *)(lVar14 + *plVar12) = 0xffffffff;
          lVar8 = *plVar12;
          *(short *)(lVar14 + lVar8) = (short)uVar26;
          *(short *)(lVar14 + 2 + lVar8) = (short)uVar16;
          local_128 = CONCAT44((undefined4)local_100,uVar16);
          if (uVar3 == 0xffff) {
            if ((*(char *)(lVar13 + 6) != '\0') && (local_110 < (int)local_c8[1])) {
              lVar13 = *(longlong *)(*local_c8 + local_e0 * 8);
              if ((lVar13 != 0) &&
                 (plVar12 = (longlong *)(lVar13 + 0x18), local_118 = local_d8, *plVar12 != 0)) {
                local_118 = plVar12;
              }
              local_110 = local_110 + 1;
              local_e0 = local_e0 + 1;
            }
            FVulkanDescriptorSetsLayoutInfo::AddDescriptor(local_140,uVar26,&local_128);
          }
          local_144 = local_144 + 1;
          local_d0 = local_d0 + 0x18;
          local_d8 = (longlong *)0x0;
          local_118 = (longlong *)0x0;
          plVar12 = local_108;
          plVar24 = local_b8;
        } while (local_144 < (int)local_108[3]);
      }
      lVar13 = local_150;
      iVar7 = (int)plVar12[0xb];
      param_2 = local_f8;
      iVar22 = local_148;
      if (iVar7 != 0) {
        if (local_158 == '\0') {
          if (local_48[local_150] == 0xff) {
            iVar22 = *(int *)(param_1 + 0x50);
            uVar26 = (ulonglong)iVar22;
            *(int *)(param_1 + 0x50) = iVar22 + 1;
            if (*(int *)(param_1 + 0x54) < iVar22 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow((longlong *)(param_1 + 0x48));
            }
            lVar14 = *(longlong *)(param_1 + 0x48);
            local_48[lVar13] = (byte)iVar22;
            *(undefined8 *)(lVar14 + uVar26 * 0x18) = 0;
            *(undefined8 *)(lVar14 + 8 + uVar26 * 0x18) = 0;
            *(undefined4 *)(lVar14 + 0x10 + uVar26 * 0x18) = 0;
            iVar7 = (int)plVar12[0xb];
          }
          else {
            uVar26 = (ulonglong)local_48[local_150];
          }
        }
        else {
          uVar26 = 0;
        }
        param_1 = local_140;
        uVar15 = 0;
        uVar23 = uVar15;
        param_2 = local_f8;
        iVar22 = local_148;
        if (0 < iVar7) {
          do {
            iVar22 = *(int *)(param_1 + 0x178);
            uVar3 = *(ushort *)(uVar15 + plVar12[10]);
            *(int *)(param_1 + 0x178) = iVar22 + 1;
            if (*(int *)(param_1 + 0x17c) < iVar22 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x170,iVar22);
            }
            uVar21 = (int)uVar23 + 1;
            *(undefined4 *)((longlong)iVar22 * 4 + *(longlong *)(param_1 + 0x170)) = 0x2ffffff;
            puVar11 = (undefined2 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar22 * 4);
            *puVar11 = *(undefined2 *)(*plVar24 + 2 + (ulonglong)uVar3 * 4);
            *(char *)(puVar11 + 1) = (char)uVar26;
            lVar13 = uVar15 + 2;
            uVar15 = uVar15 + 4;
            *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)(lVar13 + local_108[10]);
            lVar13 = local_150;
            plVar12 = local_108;
            uVar23 = (ulonglong)uVar21;
            param_2 = local_f8;
            iVar22 = local_148;
          } while ((int)uVar21 < (int)local_108[0xb]);
        }
      }
    }
    local_150 = lVar13 + 1;
    if (0 < local_150) {
      FUN_141e42460(param_1);
      FUN_141e481d0(param_1,local_c8);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
      return;
    }
  } while( true );
}



// FUNCTION 141e33ba0 FUN_141e33ba0 body=3070 status=ok
// SIG undefined FUN_141e33ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e33ba0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined1 auStack_178 [32];
  char local_158;
  int local_154;
  char local_150;
  longlong local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  undefined4 local_130;
  int local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  int local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  uint local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  uint *local_a8;
  undefined4 *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  byte local_48 [8];
  ulonglong local_40;
  
  lVar16 = DAT_146aafdc8;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_118 = 1;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_d0 = (longlong *)0x0;
  local_120 = 0;
  local_110 = (longlong *)0x0;
  local_138 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 4;
    if (DVar7 == DAT_1468c21c0) goto LAB_141e33c57;
  }
  else {
LAB_141e33c57:
    lVar9 = 0;
  }
  lVar26 = DAT_146aafdc8;
  iVar23 = *(int *)(lVar9 + lVar16);
  local_140 = iVar23;
  if (iVar23 < 2) {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      lVar16 = 4;
      if (DVar7 == DAT_1468c21c0) goto LAB_141e33ca4;
    }
    else {
LAB_141e33ca4:
      lVar16 = 0;
    }
    local_130 = 6;
    if (*(int *)(lVar16 + lVar26) != 1) goto LAB_141e33cb9;
  }
  local_130 = 8;
LAB_141e33cb9:
  lVar16 = DAT_146aafde0;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    lVar9 = 4;
  }
  else {
    lVar9 = 0;
  }
  local_158 = *(int *)(lVar9 + lVar16) == 2;
  local_48[0] = 0xff;
  local_48[1] = 0xff;
  local_48[2] = 0xff;
  local_48[3] = 0xff;
  local_48[4] = 0xff;
  if ((*(int *)(param_2 + 0x58) - *(int *)(param_2 + 0x84) < 1) && (*(int *)(lVar9 + lVar16) != 2))
  {
    local_150 = '\0';
    local_12c = -1;
  }
  else {
    local_12c = *(int *)(param_1 + 0x50);
    lVar16 = (longlong)local_12c;
    local_150 = '\x01';
    *(int *)(param_1 + 0x50) = local_12c + 1;
    if (*(int *)(param_1 + 0x54) < local_12c + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x48,local_12c);
    }
    lVar9 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(lVar9 + lVar16 * 0x18) = 0;
    *(undefined8 *)(lVar9 + 8 + lVar16 * 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x10 + lVar16 * 0x18) = 0;
  }
  local_108 = 0;
  local_13c = 0;
  local_148 = 0;
  local_d8 = 0;
  do {
    plVar14 = *(longlong **)(param_2 + 0xa0 + local_148 * 8);
    local_100 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      if (local_13c == 0) {
        iVar23 = 0;
LAB_141e33deb:
                    /* WARNING: Could not recover jumptable at 0x000141e33df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_141e347c4 + (longlong)iVar23 * 4)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_141e347c4 + (longlong)iVar23 * 4));
        return;
      }
      if (local_13c == 1) {
        iVar23 = 3;
        goto LAB_141e33deb;
      }
      if (local_13c == 2) {
        iVar23 = 4;
        goto LAB_141e33deb;
      }
      if (local_13c == 3) {
        iVar23 = 1;
        goto LAB_141e33deb;
      }
      if (local_13c == 4) {
        iVar23 = 2;
        goto LAB_141e33deb;
      }
      iVar8 = (int)plVar14[9];
      lVar9 = local_148 * 0x38;
      local_154 = 0x7fffffff;
      local_118 = CONCAT44(0x7fffffff,(undefined4)local_118);
      lVar16 = param_1 + lVar9;
      local_128 = lVar9;
      local_f8 = lVar16;
      if (*(int *)(lVar16 + 0x84) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar16 + 0x78,iVar8);
        iVar8 = (int)plVar14[9];
      }
      plVar25 = local_100;
      iVar21 = 0;
      lVar26 = param_1;
      iVar15 = 0x7fffffff;
      if (0 < iVar8) {
        plVar1 = (longlong *)(param_1 + 0x48);
        do {
          if (local_158 == '\0') {
            if (local_48[local_148] == 0xff) {
              iVar23 = *(int *)(param_1 + 0x50);
              uVar27 = (ulonglong)iVar23;
              *(int *)(param_1 + 0x50) = iVar23 + 1;
              if (*(int *)(param_1 + 0x54) < iVar23 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar1,iVar23);
              }
              lVar16 = *plVar1;
              local_48[local_148] = (byte)iVar23;
              *(undefined8 *)(lVar16 + uVar27 * 0x18) = 0;
              *(undefined8 *)(lVar16 + 8 + uVar27 * 0x18) = 0;
              *(undefined4 *)(lVar16 + 0x10 + uVar27 * 0x18) = 0;
            }
            else {
              uVar27 = (ulonglong)local_48[local_148];
            }
          }
          else {
            uVar27 = 0;
          }
          uVar27 = uVar27 & 0xff;
          iVar23 = *(int *)(*plVar1 + 8 + uVar27 * 0x18);
          plVar14 = (longlong *)(*plVar1 + uVar27 * 0x18);
          *(int *)(plVar14 + 1) = iVar23 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar23 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar23);
          }
          *(undefined4 *)(*plVar14 + (longlong)iVar23 * 4) = local_130;
          if (*(short *)(local_128 + 0x40 + (longlong)plVar1) == -1) {
            *(short *)(local_128 + 0x40 + (longlong)plVar1) = (short)uVar27;
          }
          plVar14 = (longlong *)(local_128 + 0x30 + (longlong)plVar1);
          iVar8 = (int)plVar14[1];
          *(int *)(plVar14 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar8 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar14,iVar8);
          }
          lVar26 = local_138;
          *(short *)(*plVar14 + (longlong)iVar8 * 2) = (short)iVar23;
          local_120 = CONCAT44(local_130,iVar23);
          FVulkanDescriptorSetsLayoutInfo::AddDescriptor(local_138,uVar27,&local_120);
          iVar21 = iVar21 + 1;
          lVar9 = local_128;
          plVar14 = plVar25;
          lVar16 = local_f8;
          iVar23 = local_140;
          iVar15 = local_154;
        } while (iVar21 < (int)plVar25[9]);
      }
      if (*(char *)((longlong)plVar14 + 0x84) != '\0') {
        iVar8 = (int)plVar14[1];
        if (*(int *)(lVar16 + 0x74) < iVar8) {
          FUN_141e52cc0(lVar16 + 0x68,iVar8);
          iVar8 = (int)plVar14[1];
        }
        uVar27 = 0;
        if (0 < iVar8) {
          uVar28 = 6;
          if (1 < iVar23) {
            uVar28 = 8;
          }
          local_f0 = CONCAT44(local_f0._4_4_,uVar28);
          uVar24 = uVar27;
          do {
            lVar16 = local_148;
            puVar20 = (uint *)0x0;
            local_118 = CONCAT44(iVar15,(undefined4)local_118);
            local_120 = CONCAT44(uVar28,(undefined4)local_120);
            local_e8 = *(uint *)(*plVar14 + uVar24);
            if (*(short *)(*plVar14 + 4 + uVar24) == -1) {
              plVar14 = (longlong *)(lVar9 + 0x68 + lVar26);
              iVar23 = (int)plVar14[1];
              lVar16 = (longlong)iVar23;
              *(int *)(plVar14 + 1) = iVar23 + 1;
              if (*(int *)((longlong)plVar14 + 0xc) < iVar23 + 1) {
                TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeGrow
                          (plVar14,iVar23);
              }
              lVar9 = *plVar14;
              *(undefined4 *)(lVar9 + lVar16 * 6) = 0xffffffff;
              *(undefined2 *)(lVar9 + 4 + lVar16 * 6) = 0;
              *(undefined1 *)(*plVar14 + 4 + lVar16 * 6) = 0;
            }
            else {
              if (local_150 != '\0') {
                if (*(int *)(local_c8 + 0x58) != *(int *)(local_c8 + 0x84)) {
                  lVar10 = *(longlong *)(local_c8 + 0x90);
                  if (*(longlong *)(local_c8 + 0x90) == 0) {
                    lVar10 = local_c8 + 0x88;
                  }
                  uVar22 = *(uint *)(lVar10 + ((longlong)*(int *)(local_c8 + 0x98) - 1U &
                                              (longlong)(int)local_e8) * 4);
                  if (uVar22 != 0xffffffff) {
                    do {
                      puVar11 = (uint *)((longlong)(int)uVar22 * 0x10 +
                                        *(longlong *)(local_c8 + 0x50));
                      if (*puVar11 == local_e8) {
                        if (uVar22 != 0xffffffff) goto LAB_141e34081;
                        break;
                      }
                      uVar22 = puVar11[2];
                    } while (uVar22 != 0xffffffff);
                  }
                }
                puVar11 = puVar20;
LAB_141e34081:
                puVar19 = puVar11 + 1;
                if (puVar11 == (uint *)0x0) {
                  puVar19 = puVar20;
                }
                if (puVar19 != (uint *)0x0) {
                  if ((int)local_90 != local_64) {
                    puVar12 = local_60;
                    if (local_58 != (undefined1 *)0x0) {
                      puVar12 = local_58;
                    }
                    iVar23 = *(int *)(puVar12 + (longlong)(int)(local_50 - 1U & local_e8) * 4);
                    while (iVar23 != -1) {
                      lVar16 = (longlong)iVar23 * 0x14;
                      if (*(uint *)(lVar16 + local_98) == local_e8) {
                        puVar11 = (uint *)(lVar16 + local_98);
                        if (iVar23 != -1) goto LAB_141e340fd;
                        break;
                      }
                      iVar23 = *(int *)(lVar16 + 0xc + local_98);
                    }
                  }
                  puVar11 = puVar20;
LAB_141e340fd:
                  puVar18 = puVar11 + 1;
                  if (puVar11 == (uint *)0x0) {
                    puVar18 = puVar20;
                  }
                  if (puVar18 == (uint *)0x0) {
                    local_118 = CONCAT44(*puVar19,(undefined4)local_118);
                    iVar23 = *(int *)(*(longlong *)(lVar26 + 0x48) + 8 + (longlong)local_12c * 0x18)
                    ;
                    plVar14 = (longlong *)
                              (*(longlong *)(lVar26 + 0x48) + (longlong)local_12c * 0x18);
                    *(int *)(plVar14 + 1) = iVar23 + 1;
                    if (*(int *)((longlong)plVar14 + 0xc) < iVar23 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar23);
                    }
                    lVar16 = local_128 + lVar26;
                    *(undefined4 *)(*plVar14 + (longlong)iVar23 * 4) = uVar28;
                    iVar8 = *(int *)(lVar16 + 0x70);
                    lVar9 = (longlong)iVar8;
                    *(int *)(lVar16 + 0x70) = iVar8 + 1;
                    if (*(int *)(lVar16 + 0x74) < iVar8 + 1) {
                      TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::
                      ResizeGrow(lVar16 + 0x68,iVar8);
                    }
                    iVar8 = local_12c;
                    lVar10 = *(longlong *)(lVar16 + 0x68);
                    *(undefined4 *)(lVar10 + lVar9 * 6) = 0xffffffff;
                    *(undefined2 *)(lVar10 + 4 + lVar9 * 6) = 0;
                    lVar16 = *(longlong *)(lVar16 + 0x68);
                    *(undefined1 *)(lVar16 + 4 + lVar9 * 6) = 1;
                    *(short *)(lVar16 + lVar9 * 6) = (short)local_12c;
                    puVar2 = (undefined4 *)(lVar16 + lVar9 * 6);
                    *(short *)((longlong)puVar2 + 2) = (short)iVar23;
                    local_e4 = *puVar2;
                    local_e0 = *(undefined2 *)(puVar2 + 1);
                    local_a8 = &local_e8;
                    local_a0 = &local_e4;
                    FUN_141e32240(&local_98,local_b8,&local_a8,0);
                    local_120 = CONCAT44(local_120._4_4_,iVar23);
                    FVulkanDescriptorSetsLayoutInfo::AddDescriptor(lVar26,iVar8);
                    iVar15 = local_154;
                  }
                  else {
                    plVar14 = (longlong *)(lVar9 + 0x68 + lVar26);
                    iVar23 = (int)plVar14[1];
                    lVar16 = (longlong)iVar23;
                    *(int *)(plVar14 + 1) = iVar23 + 1;
                    if (*(int *)((longlong)plVar14 + 0xc) < iVar23 + 1) {
                      TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::
                      ResizeGrow(plVar14,iVar23);
                    }
                    lVar9 = *plVar14;
                    *(undefined4 *)(lVar9 + lVar16 * 6) = 0xffffffff;
                    *(undefined2 *)(lVar9 + 4 + lVar16 * 6) = 0;
                    puVar20 = (uint *)(*plVar14 + lVar16 * 6);
                    *(char *)(puVar20 + 1) = (char)puVar18[1];
                    *puVar20 = *puVar18;
                    iVar15 = local_154;
                  }
                  goto LAB_141e343e2;
                }
              }
              if (local_158 == '\0') {
                if (local_48[local_148] == 0xff) {
                  iVar23 = *(int *)(lVar26 + 0x50);
                  uVar17 = (ulonglong)iVar23;
                  *(int *)(lVar26 + 0x50) = iVar23 + 1;
                  if (*(int *)(lVar26 + 0x54) < iVar23 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(lVar26 + 0x48,iVar23);
                  }
                  lVar9 = *(longlong *)(lVar26 + 0x48);
                  local_48[lVar16] = (byte)iVar23;
                  *(undefined8 *)(lVar9 + uVar17 * 0x18) = 0;
                  *(undefined8 *)(lVar9 + 8 + uVar17 * 0x18) = 0;
                  *(undefined4 *)(lVar9 + 0x10 + uVar17 * 0x18) = 0;
                }
                else {
                  uVar17 = (ulonglong)local_48[local_148];
                }
              }
              else {
                uVar17 = 0;
              }
              plVar14 = (longlong *)(lVar26 + 0x48);
              iVar23 = *(int *)(*plVar14 + 8 + (uVar17 & 0xff) * 0x18);
              plVar25 = (longlong *)(*plVar14 + (uVar17 & 0xff) * 0x18);
              *(int *)(plVar25 + 1) = iVar23 + 1;
              if (*(int *)((longlong)plVar25 + 0xc) < iVar23 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar25,iVar23);
              }
              lVar16 = local_128;
              *(undefined4 *)(*plVar25 + (longlong)iVar23 * 4) = uVar28;
              iVar8 = *(int *)((longlong)plVar14 + local_128 + 0x28);
              lVar9 = (longlong)iVar8;
              *(int *)((longlong)plVar14 + local_128 + 0x28) = iVar8 + 1;
              if (*(int *)((longlong)plVar14 + local_128 + 0x2c) < iVar8 + 1) {
                TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeGrow
                          ((longlong)plVar14 + local_128 + 0x20,iVar8);
              }
              lVar5 = local_148;
              lVar10 = *(longlong *)((longlong)plVar14 + lVar16 + 0x20);
              local_120 = CONCAT44(local_120._4_4_,iVar23);
              *(undefined4 *)(lVar10 + lVar9 * 6) = 0xffffffff;
              *(undefined2 *)(lVar10 + 4 + lVar9 * 6) = 0;
              lVar16 = *(longlong *)((longlong)plVar14 + lVar16 + 0x20);
              *(undefined1 *)(lVar16 + 4 + lVar9 * 6) = 1;
              *(short *)(lVar16 + 2 + lVar9 * 6) = (short)iVar23;
              *(ushort *)(lVar16 + lVar9 * 6) = (ushort)uVar17 & 0xff;
              if (local_158 == '\0') {
                if (local_48[local_148] == 0xff) {
                  iVar23 = *(int *)(lVar26 + 0x50);
                  uVar17 = (ulonglong)iVar23;
                  *(int *)(lVar26 + 0x50) = iVar23 + 1;
                  if (*(int *)(lVar26 + 0x54) < iVar23 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar14,iVar23);
                  }
                  lVar16 = *plVar14;
                  local_48[lVar5] = (byte)iVar23;
                  *(undefined8 *)(lVar16 + uVar17 * 0x18) = 0;
                  *(undefined8 *)(lVar16 + 8 + uVar17 * 0x18) = 0;
                  *(undefined4 *)(lVar16 + 0x10 + uVar17 * 0x18) = 0;
                }
                else {
                  uVar17 = (ulonglong)local_48[local_148];
                }
              }
              else {
                uVar17 = 0;
              }
              lVar26 = local_138;
              FVulkanDescriptorSetsLayoutInfo::AddDescriptor(local_138,uVar17 & 0xff);
              iVar15 = local_154;
              uVar28 = (undefined4)local_f0;
            }
LAB_141e343e2:
            uVar22 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar22;
            uVar24 = uVar24 + 0x28;
            lVar9 = local_128;
            plVar14 = local_100;
          } while ((int)uVar22 < (int)local_100[1]);
        }
      }
      iVar23 = (int)plVar14[3];
      plVar25 = (longlong *)(local_f8 + 0x58);
      local_b0 = plVar25;
      if (*(int *)(local_f8 + 100) < iVar23) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar25,iVar23);
        iVar23 = (int)plVar14[3];
      }
      local_118 = CONCAT44(iVar15,(undefined4)local_118);
      local_154 = 0;
      param_1 = lVar26;
      if (0 < iVar23) {
        plVar1 = (longlong *)(lVar26 + 0x48);
        local_f0 = 0;
        do {
          lVar16 = local_148;
          local_f8 = local_f0 + plVar14[2];
          if (local_158 == '\0') {
            if (local_48[local_148] == 0xff) {
              iVar23 = *(int *)(lVar26 + 0x50);
              uVar27 = (ulonglong)iVar23;
              *(int *)(lVar26 + 0x50) = iVar23 + 1;
              if (*(int *)(lVar26 + 0x54) < iVar23 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar1,iVar23);
              }
              lVar9 = *plVar1;
              local_48[lVar16] = (byte)iVar23;
              *(undefined8 *)(lVar9 + uVar27 * 0x18) = 0;
              *(undefined8 *)(lVar9 + 8 + uVar27 * 0x18) = 0;
              *(undefined4 *)(lVar9 + 0x10 + uVar27 * 0x18) = 0;
            }
            else {
              uVar27 = (ulonglong)local_48[local_148];
            }
          }
          else {
            uVar27 = 0;
          }
          uVar4 = *(ushort *)(local_f8 + 2);
          uVar27 = uVar27 & 0xff;
          bVar3 = *(byte *)((ulonglong)*(ushort *)(local_f8 + 4) + plVar14[4]);
          if (uVar4 == 0xffff) {
            uVar22 = *(uint *)(*plVar1 + 8 + uVar27 * 0x18);
            plVar14 = (longlong *)(*plVar1 + uVar27 * 0x18);
            *(uint *)(plVar14 + 1) = uVar22 + 1;
            if (*(int *)((longlong)plVar14 + 0xc) < (int)(uVar22 + 1)) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,uVar22);
            }
            *(uint *)(*plVar14 + (longlong)(int)uVar22 * 4) = (uint)bVar3;
          }
          else {
            uVar22 = (uint)*(ushort *)
                            (*(longlong *)(local_128 + 0x10 + (longlong)plVar1) + 2 +
                            (ulonglong)uVar4 * 4);
          }
          plVar14 = (longlong *)(local_128 + 0x10 + (longlong)plVar1);
          iVar23 = (int)plVar14[1];
          *(int *)(plVar14 + 1) = iVar23 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar23 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar23);
          }
          param_1 = local_138;
          lVar16 = (longlong)iVar23 * 4;
          local_120 = (ulonglong)CONCAT14(bVar3,uVar22);
          *(undefined4 *)(lVar16 + *plVar14) = 0xffffffff;
          lVar9 = *plVar14;
          *(short *)(lVar16 + lVar9) = (short)uVar27;
          *(short *)(lVar16 + 2 + lVar9) = (short)uVar22;
          if (uVar4 == 0xffff) {
            if ((*(char *)(local_f8 + 6) != '\0') && (local_108 < (int)local_c0[1])) {
              lVar16 = *(longlong *)(*local_c0 + local_d8 * 8);
              if ((lVar16 != 0) &&
                 (plVar14 = (longlong *)(lVar16 + 0x18), local_110 = local_d0, *plVar14 != 0)) {
                local_110 = plVar14;
              }
              local_108 = local_108 + 1;
              local_d8 = local_d8 + 1;
            }
            FVulkanDescriptorSetsLayoutInfo::AddDescriptor(local_138,uVar27,&local_120);
          }
          local_154 = local_154 + 1;
          local_f0 = local_f0 + 0x18;
          local_d0 = (longlong *)0x0;
          local_110 = (longlong *)0x0;
          plVar14 = local_100;
          plVar25 = local_b0;
        } while (local_154 < (int)local_100[3]);
      }
      iVar8 = (int)plVar14[0xb];
      iVar23 = local_140;
      if (iVar8 != 0) {
        if (local_158 == '\0') {
          if (local_48[local_148] == 0xff) {
            iVar23 = *(int *)(param_1 + 0x50);
            uVar27 = (ulonglong)iVar23;
            *(int *)(param_1 + 0x50) = iVar23 + 1;
            if (*(int *)(param_1 + 0x54) < iVar23 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow((longlong *)(param_1 + 0x48),iVar23);
            }
            lVar16 = *(longlong *)(param_1 + 0x48);
            local_48[local_148] = (byte)iVar23;
            *(undefined8 *)(lVar16 + uVar27 * 0x18) = 0;
            *(undefined8 *)(lVar16 + 8 + uVar27 * 0x18) = 0;
            *(undefined4 *)(lVar16 + 0x10 + uVar27 * 0x18) = 0;
            iVar8 = (int)plVar14[0xb];
          }
          else {
            uVar27 = (ulonglong)local_48[local_148];
          }
        }
        else {
          uVar27 = 0;
        }
        param_1 = local_138;
        uVar17 = 0;
        uVar24 = uVar17;
        iVar23 = local_140;
        if (0 < iVar8) {
          do {
            iVar23 = *(int *)(param_1 + 0x178);
            uVar4 = *(ushort *)(uVar17 + plVar14[10]);
            *(int *)(param_1 + 0x178) = iVar23 + 1;
            if (*(int *)(param_1 + 0x17c) < iVar23 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x170,iVar23);
            }
            uVar22 = (int)uVar24 + 1;
            *(undefined4 *)((longlong)iVar23 * 4 + *(longlong *)(param_1 + 0x170)) = 0x2ffffff;
            puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar23 * 4);
            *puVar13 = *(undefined2 *)(*plVar25 + 2 + (ulonglong)uVar4 * 4);
            *(char *)(puVar13 + 1) = (char)uVar27;
            lVar16 = uVar17 + 2;
            uVar17 = uVar17 + 4;
            *(undefined1 *)((longlong)puVar13 + 3) = *(undefined1 *)(lVar16 + local_100[10]);
            plVar14 = local_100;
            uVar24 = (ulonglong)uVar22;
            iVar23 = local_140;
          } while ((int)uVar22 < (int)local_100[0xb]);
        }
      }
    }
    local_13c = local_13c + 1;
    local_148 = local_148 + 1;
    param_2 = local_c8;
    if (4 < local_13c) {
      FUN_141e42460(param_1);
      FUN_141e481d0(param_1,local_c0);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
      return;
    }
  } while( true );
}



// FUNCTION 141e347e0 FUN_141e347e0 body=508 status=ok
// SIG undefined FUN_141e347e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141e347e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_4088 [32];
  longlong local_4068;
  longlong local_4060;
  longlong local_4058;
  undefined8 local_4050;
  undefined1 local_4048 [16384];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x141e347f1;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4088;
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar8 = 0;
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x1a0) + 8) + 0x20);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      local_4060 = (ulonglong)*(uint *)(lVar1 + 0x14) +
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18) + 0x18);
      local_4068 = *(longlong *)(param_2 + 0x1a0);
      local_4058 = *(longlong *)(param_1 + 0x108);
      local_4050 = param_3;
      UpdatePackedUniformBuffers<1>
                (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x8f0),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x20) + 0x30),
                 param_1 + 0xd0,*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    if (DAT_1464c9c14 < 2) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x460);
      uVar6 = FVulkanCommonPipelineDescriptorState::GetDSetsKey(param_1);
      local_4068 = uVar2;
      FVulkanDescriptorSetCache::GetDescriptorSets
                (uVar3,uVar6,*(undefined8 *)(param_1 + 0x60),param_1 + 0x98);
      return 1;
    }
    cVar5 = FVulkanCmdBuffer::AcquirePoolSetAndDescriptorsIfNeeded
                      (param_3,*(undefined8 *)(param_1 + 0x60),1,uVar2);
    if (cVar5 != '\0') {
      plVar4 = *(longlong **)(param_1 + 0x98);
      uVar2 = **(undefined8 **)(param_1 + 0x68);
      if ((int)plVar4[3] != 0) {
        do {
          uVar7 = (int)uVar8 + 1;
          *(undefined8 *)(uVar8 * 0x40 + 0x10 + *plVar4) = uVar2;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(plVar4 + 3));
      }
      if (*(int *)(DAT_146aafcb8 + 4) == 1) {
        local_48 = (undefined1 *)0x0;
        local_40 = 0;
        FUN_141e56100(param_1 + 0x40,local_4048);
        puVar9 = local_4048;
        if (local_48 != (undefined1 *)0x0) {
          puVar9 = local_48;
        }
        local_4068 = 0;
        (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_40 & 0xffffffff,
                         puVar9,0);
        if (local_48 != (undefined1 *)0x0) {
          FMemory::Free();
          return 1;
        }
      }
      else {
        local_4068 = 0;
        (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                         *(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e349e0 FUN_141e349e0 body=717 status=ok
// SIG undefined FUN_141e349e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141e349e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 auStack_4098 [32];
  longlong local_4078;
  longlong local_4070;
  longlong local_4068;
  undefined8 local_4060;
  undefined1 local_4058 [16384];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4098;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar6 = 0;
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x1e8);
    uVar11 = 0;
    lVar1 = *(longlong *)(param_2 + 0x1a0);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x20);
    uVar14 = *(uint *)(lVar2 + 0x14);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18) + 0x18);
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x8f0);
    puVar9 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x80) + 0x30);
    do {
      if (*plVar12 != 0) {
        local_4078 = lVar1;
        local_4070 = (ulonglong)uVar14 + lVar2;
        local_4068 = *plVar12;
        local_4060 = param_3;
        bVar4 = UpdatePackedUniformBuffers<1>
                          (uVar6,*puVar9,param_1 + 0xd0 + uVar11 * 0x30,
                           (ulonglong)*(ushort *)(puVar9 + 2) * 0x58 + *(longlong *)(param_1 + 0x98)
                          );
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar4;
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar4;
        *plVar12 = 0;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      plVar12 = plVar12 + 1;
      puVar9 = puVar9 + 7;
    } while ((int)uVar10 < 5);
    if (DAT_1464c9c14 < 2) {
      if (*(char *)(param_1 + 0x90) != '\0') {
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x460);
        uVar7 = FVulkanCommonPipelineDescriptorState::GetDSetsKey(param_1);
        local_4078 = uVar6;
        FVulkanDescriptorSetCache::GetDescriptorSets
                  (uVar3,uVar7,*(undefined8 *)(param_1 + 0x60),param_1 + 0x98);
        *(undefined1 *)(param_1 + 0x90) = 0;
      }
    }
    else {
      cVar5 = FVulkanCmdBuffer::AcquirePoolSetAndDescriptorsIfNeeded
                        (param_3,*(undefined8 *)(param_1 + 0x60),*(char *)(param_1 + 0x90) != '\0',
                         *(undefined8 *)(param_1 + 0x68));
      if (cVar5 != '\0') {
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x78);
        uVar14 = 0;
        if (*(uint *)(param_1 + 0x78) != 0) {
          do {
            if ((uVar11 & 1) != 0) {
              uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar14 * 8);
              plVar12 = (longlong *)((longlong)(int)uVar14 * 0x58 + *(longlong *)(param_1 + 0x98));
              uVar10 = 0;
              if ((int)plVar12[3] != 0) {
                do {
                  uVar8 = (ulonglong)uVar10;
                  uVar10 = uVar10 + 1;
                  *(undefined8 *)(uVar8 * 0x40 + 0x10 + *plVar12) = uVar6;
                } while (uVar10 < *(uint *)(plVar12 + 3));
              }
            }
            uVar14 = uVar14 + 1;
            uVar10 = (uint)uVar11;
            uVar11 = uVar11 >> 1;
          } while (1 < uVar10);
        }
        if (*(int *)(DAT_146aafcb8 + 4) == 1) {
          local_58 = (undefined1 *)0x0;
          local_50 = 0;
          FUN_141e56100(param_1 + 0x40,local_4058);
          puVar13 = local_4058;
          if (local_58 != (undefined1 *)0x0) {
            puVar13 = local_58;
          }
          local_4078 = 0;
          (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_50 & 0xffffffff,
                           puVar13,0);
          if (local_58 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          local_4078 = 0;
          (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                           *(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0);
        }
        *(undefined1 *)(param_1 + 0x90) = 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 141e34cb0 FUN_141e34cb0 body=508 status=ok
// SIG undefined FUN_141e34cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141e34cb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_4088 [32];
  longlong local_4068;
  longlong local_4060;
  longlong local_4058;
  undefined8 local_4050;
  undefined1 local_4048 [16384];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x141e34cc1;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4088;
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar8 = 0;
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x1a0) + 8) + 0x20);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      local_4060 = (ulonglong)*(uint *)(lVar1 + 0x14) +
                   *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18) + 0x18);
      local_4068 = *(longlong *)(param_2 + 0x1a0);
      local_4058 = *(longlong *)(param_1 + 0x108);
      local_4050 = param_3;
      UpdatePackedUniformBuffers<0>
                (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x8f0),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x20) + 0x30),
                 param_1 + 0xd0,*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    if (DAT_1464c9c14 < 2) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x460);
      uVar6 = FVulkanCommonPipelineDescriptorState::GetDSetsKey(param_1);
      local_4068 = uVar2;
      FVulkanDescriptorSetCache::GetDescriptorSets
                (uVar3,uVar6,*(undefined8 *)(param_1 + 0x60),param_1 + 0x98);
      return 1;
    }
    cVar5 = FVulkanCmdBuffer::AcquirePoolSetAndDescriptorsIfNeeded
                      (param_3,*(undefined8 *)(param_1 + 0x60),1,uVar2);
    if (cVar5 != '\0') {
      plVar4 = *(longlong **)(param_1 + 0x98);
      uVar2 = **(undefined8 **)(param_1 + 0x68);
      if ((int)plVar4[3] != 0) {
        do {
          uVar7 = (int)uVar8 + 1;
          *(undefined8 *)(uVar8 * 0x40 + 0x10 + *plVar4) = uVar2;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(plVar4 + 3));
      }
      if (*(int *)(DAT_146aafcb8 + 4) == 1) {
        local_48 = (undefined1 *)0x0;
        local_40 = 0;
        FUN_141e56100(param_1 + 0x40,local_4048);
        puVar9 = local_4048;
        if (local_48 != (undefined1 *)0x0) {
          puVar9 = local_48;
        }
        local_4068 = 0;
        (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_40 & 0xffffffff,
                         puVar9,0);
        if (local_48 != (undefined1 *)0x0) {
          FMemory::Free();
          return 1;
        }
      }
      else {
        local_4068 = 0;
        (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                         *(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e34eb0 FUN_141e34eb0 body=1192 status=ok
// SIG undefined FUN_141e34eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141e34eb0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  size_t _Size;
  ushort *puVar24;
  longlong *plVar25;
  longlong lVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_40d8 [32];
  undefined8 local_40b8;
  ushort local_40a8;
  longlong local_40a0;
  longlong *local_4098;
  longlong local_4088;
  longlong local_4080;
  ulonglong local_4078;
  ulonglong *local_4070;
  undefined8 *local_4068;
  longlong local_4060;
  longlong local_4058;
  undefined1 local_4050 [16384];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_40d8;
  if (*(int *)(param_1 + 0x78) == 0) {
    return 0;
  }
  lVar23 = *(longlong *)(param_2 + 0x1a0);
  lVar22 = *(longlong *)(*(longlong *)(lVar23 + 8) + 0x20);
  local_4060 = 5;
  plVar17 = (longlong *)(param_1 + 0xd0);
  lVar22 = (ulonglong)*(uint *)(lVar22 + 0x14) +
           *(longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x20) + 0x18) + 0x18);
  uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x8f0);
  local_4070 = (ulonglong *)(param_1 + 0x1e8);
  local_4068 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x80) + 0x30);
  local_40a0 = lVar23;
  local_4088 = param_3;
  local_4080 = lVar22;
  local_4078 = uVar16;
  local_4058 = param_1;
  do {
    lVar26 = 0;
    if (*local_4070 != 0) {
      puVar24 = (ushort *)*local_4068;
      plVar25 = (longlong *)
                ((ulonglong)*(ushort *)(local_4068 + 2) * 0x58 + *(longlong *)(param_1 + 0x98));
      bVar28 = false;
      uVar15 = *local_4070;
      local_4098 = plVar17;
      do {
        if ((uVar15 & 1) != 0) {
          local_40a8 = *puVar24;
          lVar6 = *plVar17;
          lVar23 = *(longlong *)(lVar23 + 8);
          iVar21 = *(int *)((undefined8 *)(lVar6 + lVar26) + 1);
          _Size = (size_t)iVar21;
          uVar13 = (ulonglong)*(uint *)(lVar23 + 0x18);
          if (*(uint *)(lVar23 + 0x18) <= (uint)uVar16) {
            uVar13 = uVar16 & 0xffffffff;
          }
          uVar16 = *(longlong *)(lVar23 + 0x10) + -1 + uVar13 & ~(uVar13 - 1);
          if (*(ulonglong *)(lVar23 + 8) < uVar16 + _Size) {
            *(size_t *)(lVar23 + 0x10) = _Size;
            uVar16 = 0;
            *(longlong *)(lVar23 + 0x28) = param_3;
            *(undefined8 *)(lVar23 + 0x30) = *(undefined8 *)(param_3 + 0xa0);
          }
          else {
            *(ulonglong *)(lVar23 + 0x10) = uVar16 + _Size;
          }
          _guard_xfg_dispatch_icall_nop((void *)(uVar16 + lVar22),*(void **)(lVar6 + lVar26),_Size);
          lVar23 = *(longlong *)(*(longlong *)(local_40a0 + 8) + 0x20);
          lVar22 = *(longlong *)(lVar23 + 0x20);
          lVar23 = *(uint *)(lVar23 + 0x14) + uVar16;
          plVar17 = *(longlong **)((ulonglong)local_40a8 * 0x40 + 0x30 + *plVar25);
          if (DAT_1464c9c14 < 2) {
            piVar1 = (int *)(plVar25[6] + (ulonglong)local_40a8 * 0xc);
            iVar2 = *(int *)(lVar22 + 0x68);
            iVar3 = *piVar1;
            if (iVar3 != iVar2) {
              *piVar1 = iVar2;
              *plVar17 = *(longlong *)(lVar22 + 0x60);
            }
            iVar4 = piVar1[1];
            iVar20 = (int)lVar23;
            if (iVar4 != iVar20) {
              piVar1[1] = iVar20;
              plVar17[1] = lVar23;
            }
            iVar5 = piVar1[2];
            if (iVar5 != iVar21) {
              piVar1[2] = iVar21;
              plVar17[2] = _Size;
            }
            bVar27 = iVar5 != iVar21 || (iVar4 != iVar20 || iVar3 != iVar2);
            *(byte *)(plVar25 + 10) = *(byte *)(plVar25 + 10) | bVar27;
          }
          else {
            lVar22 = *(longlong *)(lVar22 + 0x60);
            lVar6 = *plVar17;
            *plVar17 = lVar22;
            lVar7 = plVar17[1];
            plVar17[1] = lVar23;
            sVar8 = plVar17[2];
            plVar17[2] = _Size;
            bVar27 = sVar8 != _Size || lVar7 != lVar23;
            if (lVar6 != lVar22) {
              bVar27 = true;
            }
          }
          plVar17 = local_4098;
          uVar16 = local_4078;
          lVar23 = local_40a0;
          param_3 = local_4088;
          lVar22 = local_4080;
          if ((bVar28) || (bVar27)) {
            bVar28 = true;
          }
        }
        lVar26 = lVar26 + 0x10;
        puVar24 = puVar24 + 1;
        bVar27 = 1 < uVar15;
        uVar15 = uVar15 >> 1;
      } while (bVar27);
      *(byte *)(local_4058 + 0x90) = *(byte *)(local_4058 + 0x90) | bVar28;
      *(byte *)(local_4058 + 0xc0) = *(byte *)(local_4058 + 0xc0) | bVar28;
      *local_4070 = 0;
      param_1 = local_4058;
    }
    local_4070 = local_4070 + 1;
    local_4068 = local_4068 + 7;
    plVar17 = plVar17 + 6;
    local_4060 = local_4060 + -1;
  } while (local_4060 != 0);
  local_4098 = plVar17;
  if (DAT_1464c9c14 < 2) {
    if (*(char *)(param_1 + 0x90) == '\0') {
      return 1;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x460);
    uVar14 = FVulkanCommonPipelineDescriptorState::GetDSetsKey(param_1);
    local_40b8 = uVar9;
    FVulkanDescriptorSetCache::GetDescriptorSets
              (uVar10,uVar14,*(undefined8 *)(param_1 + 0x60),param_1 + 0x98);
  }
  else {
    cVar11 = FVulkanCmdBuffer::AcquirePoolSetAndDescriptorsIfNeeded
                       (param_3,*(undefined8 *)(param_1 + 0x60),*(char *)(param_1 + 0x90) != '\0',
                        *(undefined8 *)(param_1 + 0x68));
    if (cVar11 == '\0') {
      return 1;
    }
    uVar19 = *(uint *)(param_1 + 0x78);
    iVar21 = 0;
    if (uVar19 != 0) {
      do {
        if ((uVar19 & 1) != 0) {
          uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar21 * 8);
          uVar16 = 0;
          plVar17 = (longlong *)((longlong)iVar21 * 0x58 + *(longlong *)(param_1 + 0x98));
          if ((int)plVar17[3] != 0) {
            do {
              uVar12 = (int)uVar16 + 1;
              *(undefined8 *)(uVar16 * 0x40 + 0x10 + *plVar17) = uVar9;
              uVar16 = (ulonglong)uVar12;
            } while (uVar12 < *(uint *)(plVar17 + 3));
          }
        }
        iVar21 = iVar21 + 1;
        bVar28 = 1 < uVar19;
        uVar19 = uVar19 >> 1;
      } while (bVar28);
    }
    if (*(int *)(DAT_146aafcb8 + 4) == 1) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      FUN_141e56100(param_1 + 0x40,local_4050);
      puVar18 = local_4050;
      if (local_50 != (undefined1 *)0x0) {
        puVar18 = local_50;
      }
      local_40b8 = 0;
      (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_48 & 0xffffffff,puVar18
                       ,0);
      if (local_50 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      local_40b8 = 0;
      (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                       *(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0);
    }
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  return 1;
}



// FUNCTION 141e35360 IntroSortInternal<FVulkanOcclusionQueryPool_*,FIdentityFunctor,TDereferenceWrapper<FVulkanOcclusionQueryPool_*,<lambda_eb21840210707ffc662778adfea9b9e7>_>_> body=921 status=ok
// SIG undefined IntroSortInternal<FVulkanOcclusionQueryPool_*,FIdentityFunctor,TDereferenceWrapper<FVulkanOcclusionQueryPool_*,<lambda_eb21840210707ffc662778adfea9b9e7>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FVulkanOcclusionQueryPool_*,FIdentityFunctor,TDereferenceWrapper<FVulkanOcclusionQueryPool_*,<lambda_eb21840210707ffc662778adfea9b9e7>_>_>
               (longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
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
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar5 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
      plVar8 = plVar5;
      if (local_338 != 0) {
LAB_141e35430:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          lVar1 = plVar8[lVar9 >> 1];
          plVar8[lVar9 >> 1] = *plVar8;
          plVar10 = plVar13 + 1;
          *plVar8 = lVar1;
          plVar5 = plVar8;
LAB_141e35460:
          plVar5 = plVar5 + 1;
          if (plVar5 <= plVar13) goto code_r0x000141e35469;
          goto LAB_141e35480;
        }
        for (; plVar10 = plVar8, plVar5 = plVar8, plVar8 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar11 = plVar10, plVar5 = plVar5 + 1, plVar5 <= plVar13) {
            plVar10 = plVar5;
            if (*(uint *)(*plVar5 + 0x20) <= *(uint *)(*plVar11 + 0x20)) {
              plVar10 = plVar11;
            }
          }
          lVar9 = *plVar11;
          *plVar11 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_141e35658;
      }
LAB_141e35535:
      iVar6 = (int)lVar9;
      iVar3 = (iVar6 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar7 = iVar3;
joined_r0x000141e35555:
        do {
          if (iVar4 < iVar6) {
            iVar4 = iVar3 * 2;
            iVar12 = iVar4 + 1;
            if (iVar4 + 2 < iVar6) {
              if (*(uint *)(plVar5[(longlong)iVar4 + 2] + 0x20) < *(uint *)(plVar5[iVar12] + 0x20))
              {
                iVar12 = iVar4;
              }
              iVar12 = iVar12 + 1;
            }
            lVar9 = plVar5[iVar3];
            if (*(uint *)(lVar9 + 0x20) < *(uint *)(plVar5[iVar12] + 0x20)) {
              iVar4 = iVar12 * 2 + 1;
              plVar5[iVar3] = plVar5[iVar12];
              plVar5[iVar12] = lVar9;
              iVar3 = iVar12;
              goto joined_r0x000141e35555;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar7 + -1;
          iVar2 = iVar4;
          iVar7 = iVar3;
        } while (-1 < iVar3);
      }
      iVar6 = iVar6 + -1;
      lVar9 = (longlong)iVar6;
      if (0 < iVar6) {
        do {
          iVar3 = 0;
          lVar1 = *plVar5;
          *plVar5 = plVar5[lVar9];
          plVar5[lVar9] = lVar1;
          if (1 < iVar6) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar6) {
                if (*(uint *)(plVar5[(longlong)iVar2 + 2] + 0x20) < *(uint *)(plVar5[iVar4] + 0x20))
                {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar5[iVar3];
              if (*(uint *)(plVar5[iVar4] + 0x20) <= *(uint *)(lVar1 + 0x20)) break;
              plVar5[iVar3] = plVar5[iVar4];
              plVar5[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar6);
          }
          iVar6 = iVar6 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_141e35658:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000141e35469:
  if (*(uint *)(*plVar5 + 0x20) <= *(uint *)(*plVar8 + 0x20)) goto LAB_141e35460;
LAB_141e35480:
  do {
    plVar11 = plVar10;
    lVar9 = plVar11[-1];
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar8) break;
  } while (*(uint *)(*plVar8 + 0x20) <= *(uint *)(lVar9 + 0x20));
  if (plVar5 <= plVar10) {
    lVar1 = *plVar5;
    *plVar5 = lVar9;
    *plVar10 = lVar1;
    goto LAB_141e35460;
  }
  lVar1 = *plVar8;
  *plVar8 = lVar9;
  *plVar10 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar5 & 0xfffffffffffffff8U)) {
    if (plVar5 < plVar13) {
      *plVar14 = (longlong)plVar5;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar10 <= plVar8 + 1) goto LAB_141e35658;
    plVar13 = plVar11 + -2;
    plVar5 = plVar8;
  }
  else {
    if (plVar8 + 1 < plVar10) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar5) goto LAB_141e35658;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
  plVar8 = plVar5;
  if (local_338 == 0) goto LAB_141e35535;
  goto LAB_141e35430;
}



// FUNCTION 141e35700 LookupShader<TVulkanBaseShader<FRHIDomainShader,2,4>_> body=238 status=ok
// SIG undefined LookupShader<TVulkanBaseShader<FRHIDomainShader,2,4>_>(void)

longlong *
FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIDomainShader,2,4>_>
          (PSRWLOCK param_1,longlong param_2)

{
  int iVar1;
  PSRWLOCK pRVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    AcquireSRWLockShared(param_1);
    plVar5 = (longlong *)0x0;
    if (*(int *)&param_1[0x16].Ptr != *(int *)((longlong)&param_1[0x1b].Ptr + 4)) {
      pRVar2 = param_1[0x1d].Ptr;
      if (param_1[0x1d].Ptr == (PSRWLOCK)0x0) {
        pRVar2 = param_1 + 0x1c;
      }
      iVar1 = *(int *)((longlong)&pRVar2->Ptr +
                      ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                      (longlong)*(int *)&param_1[0x1e].Ptr - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)param_1[0x15].Ptr + (longlong)iVar1 * 0x18);
          if (*(longlong *)((longlong)param_1[0x15].Ptr + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_141e357a3;
            break;
          }
          iVar1 = (int)plVar4[2];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar5;
LAB_141e357a3:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(*plVar3 + -0x30);
      if (*plVar3 == 0) {
        plVar4 = plVar5;
      }
      ReleaseSRWLockShared(param_1);
      return plVar4;
    }
    ReleaseSRWLockShared(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 141e357f0 LookupShader<TVulkanBaseShader<FRHIGeometryShader,4,8>_> body=238 status=ok
// SIG undefined LookupShader<TVulkanBaseShader<FRHIGeometryShader,4,8>_>(void)

longlong *
FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIGeometryShader,4,8>_>
          (PSRWLOCK param_1,longlong param_2)

{
  int iVar1;
  PSRWLOCK pRVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    AcquireSRWLockShared(param_1);
    plVar5 = (longlong *)0x0;
    if (*(int *)&param_1[0x2a].Ptr != *(int *)((longlong)&param_1[0x2f].Ptr + 4)) {
      pRVar2 = param_1[0x31].Ptr;
      if (param_1[0x31].Ptr == (PSRWLOCK)0x0) {
        pRVar2 = param_1 + 0x30;
      }
      iVar1 = *(int *)((longlong)&pRVar2->Ptr +
                      ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                      (longlong)*(int *)&param_1[0x32].Ptr - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)param_1[0x29].Ptr + (longlong)iVar1 * 0x18);
          if (*(longlong *)((longlong)param_1[0x29].Ptr + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_141e35893;
            break;
          }
          iVar1 = (int)plVar4[2];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar5;
LAB_141e35893:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(*plVar3 + -0x30);
      if (*plVar3 == 0) {
        plVar4 = plVar5;
      }
      ReleaseSRWLockShared(param_1);
      return plVar4;
    }
    ReleaseSRWLockShared(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 141e358e0 LookupShader<TVulkanBaseShader<FRHIHullShader,1,2>_> body=222 status=ok
// SIG undefined LookupShader<TVulkanBaseShader<FRHIHullShader,1,2>_>(void)

longlong *
FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIHullShader,1,2>_>
          (PSRWLOCK param_1,longlong param_2)

{
  int iVar1;
  PSRWLOCK pRVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    AcquireSRWLockShared(param_1);
    plVar5 = (longlong *)0x0;
    if (*(int *)&param_1[0xc].Ptr != *(int *)((longlong)&param_1[0x11].Ptr + 4)) {
      pRVar2 = param_1[0x13].Ptr;
      if (param_1[0x13].Ptr == (PSRWLOCK)0x0) {
        pRVar2 = param_1 + 0x12;
      }
      iVar1 = *(int *)((longlong)&pRVar2->Ptr +
                      ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                      (longlong)*(int *)&param_1[0x14].Ptr - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)param_1[0xb].Ptr + (longlong)iVar1 * 0x18);
          if (*(longlong *)((longlong)param_1[0xb].Ptr + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_141e35973;
            break;
          }
          iVar1 = (int)plVar4[2];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar5;
LAB_141e35973:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(*plVar3 + -0x30);
      if (*plVar3 == 0) {
        plVar4 = plVar5;
      }
      ReleaseSRWLockShared(param_1);
      return plVar4;
    }
    ReleaseSRWLockShared(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 141e359c0 LookupShader<TVulkanBaseShader<FRHIPixelShader,3,16>_> body=238 status=ok
// SIG undefined LookupShader<TVulkanBaseShader<FRHIPixelShader,3,16>_>(void)

longlong *
FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIPixelShader,3,16>_>
          (PSRWLOCK param_1,longlong param_2)

{
  int iVar1;
  PSRWLOCK pRVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    AcquireSRWLockShared(param_1);
    plVar5 = (longlong *)0x0;
    if (*(int *)&param_1[0x20].Ptr != *(int *)((longlong)&param_1[0x25].Ptr + 4)) {
      pRVar2 = param_1[0x27].Ptr;
      if (param_1[0x27].Ptr == (PSRWLOCK)0x0) {
        pRVar2 = param_1 + 0x26;
      }
      iVar1 = *(int *)((longlong)&pRVar2->Ptr +
                      ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                      (longlong)*(int *)&param_1[0x28].Ptr - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)param_1[0x1f].Ptr + (longlong)iVar1 * 0x18);
          if (*(longlong *)((longlong)param_1[0x1f].Ptr + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_141e35a63;
            break;
          }
          iVar1 = (int)plVar4[2];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar5;
LAB_141e35a63:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(*plVar3 + -0x30);
      if (*plVar3 == 0) {
        plVar4 = plVar5;
      }
      ReleaseSRWLockShared(param_1);
      return plVar4;
    }
    ReleaseSRWLockShared(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 141e35ab0 LookupShader<TVulkanBaseShader<FRHIVertexShader,0,1>_> body=222 status=ok
// SIG undefined LookupShader<TVulkanBaseShader<FRHIVertexShader,0,1>_>(void)

longlong *
FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIVertexShader,0,1>_>
          (PSRWLOCK param_1,longlong param_2)

{
  int iVar1;
  PSRWLOCK pRVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    AcquireSRWLockShared(param_1);
    plVar5 = (longlong *)0x0;
    if (*(int *)&param_1[2].Ptr != *(int *)((longlong)&param_1[7].Ptr + 4)) {
      pRVar2 = param_1[9].Ptr;
      if (param_1[9].Ptr == (PSRWLOCK)0x0) {
        pRVar2 = param_1 + 8;
      }
      iVar1 = *(int *)((longlong)&pRVar2->Ptr +
                      ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                      (longlong)*(int *)&param_1[10].Ptr - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)param_1[1].Ptr + (longlong)iVar1 * 0x18);
          if (*(longlong *)((longlong)param_1[1].Ptr + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_141e35b43;
            break;
          }
          iVar1 = (int)plVar4[2];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar5;
LAB_141e35b43:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)(*plVar3 + -0x30);
      if (*plVar3 == 0) {
        plVar4 = plVar5;
      }
      ReleaseSRWLockShared(param_1);
      return plVar4;
    }
    ReleaseSRWLockShared(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 141e35b90 UpdatePackedUniformBuffers<1> body=515 status=ok
// SIG undefined UpdatePackedUniformBuffers<1>(void)

char UpdatePackedUniformBuffers<1>
               (uint param_1,ushort *param_2,longlong *param_3,longlong *param_4,longlong param_5,
               longlong param_6,ulonglong param_7,longlong param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  size_t sVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  size_t _Size;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  uVar10 = param_7;
  cVar9 = '\0';
  if (param_7 != 0) {
    param_7 = 0;
    do {
      if ((uVar10 & 1) != 0) {
        lVar4 = *param_3;
        lVar5 = *(longlong *)(param_5 + 8);
        iVar1 = *(int *)((undefined8 *)(lVar4 + param_7) + 1);
        _Size = (size_t)iVar1;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (*(uint *)(lVar5 + 0x18) <= param_1) {
          uVar2 = param_1;
        }
        uVar13 = ~((ulonglong)uVar2 - 1) & (ulonglong)uVar2 + *(longlong *)(lVar5 + 0x10) + -1;
        if (*(ulonglong *)(lVar5 + 8) < uVar13 + _Size) {
          uVar13 = 0;
          *(size_t *)(lVar5 + 0x10) = _Size;
          *(longlong *)(lVar5 + 0x28) = param_8;
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_8 + 0xa0);
        }
        else {
          *(ulonglong *)(lVar5 + 0x10) = uVar13 + _Size;
        }
        _guard_xfg_dispatch_icall_nop((void *)(param_6 + uVar13),*(void **)(lVar4 + param_7),_Size);
        uVar12 = (ulonglong)*param_2;
        lVar4 = *(longlong *)(*(longlong *)(param_5 + 8) + 0x20);
        lVar5 = *(longlong *)(lVar4 + 0x20);
        uVar2 = *(uint *)(lVar4 + 0x14);
        uVar11 = (ulonglong)uVar2;
        plVar6 = *(longlong **)(uVar12 * 0x40 + 0x30 + *param_4);
        if (DAT_1464c9c14 < 2) {
          lVar4 = param_4[6];
          iVar3 = *(int *)(lVar5 + 0x68);
          bVar14 = *(int *)(lVar4 + uVar12 * 0xc) != iVar3;
          if (bVar14) {
            *(int *)(lVar4 + uVar12 * 0xc) = iVar3;
            *plVar6 = *(longlong *)(lVar5 + 0x60);
          }
          bVar15 = *(uint *)(lVar4 + 4 + uVar12 * 0xc) != uVar2;
          if (bVar15) {
            *(uint *)(lVar4 + 4 + uVar12 * 0xc) = uVar2;
            plVar6[1] = uVar11;
          }
          bVar16 = *(int *)(lVar4 + 8 + uVar12 * 0xc) != iVar1;
          if (bVar16) {
            *(int *)(lVar4 + 8 + uVar12 * 0xc) = iVar1;
            plVar6[2] = _Size;
          }
          bVar16 = bVar16 || (bVar15 || bVar14);
          *(byte *)(param_4 + 10) = *(byte *)(param_4 + 10) | bVar16;
        }
        else {
          lVar4 = *(longlong *)(lVar5 + 0x60);
          lVar5 = *plVar6;
          *plVar6 = lVar4;
          uVar7 = plVar6[1];
          plVar6[1] = uVar11;
          sVar8 = plVar6[2];
          plVar6[2] = _Size;
          bVar16 = sVar8 != _Size || uVar7 != uVar11;
          if (lVar5 != lVar4) {
            bVar16 = true;
          }
        }
        *(int *)(param_4[2] + (ulonglong)*(byte *)(param_4[1] + uVar12) * 4) = (int)uVar13;
        if ((cVar9 != '\0') || (bVar16)) {
          cVar9 = '\x01';
        }
      }
      param_7 = param_7 + 0x10;
      param_2 = param_2 + 1;
      bVar16 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar16);
  }
  return cVar9;
}



// FUNCTION 141e35da0 UpdatePackedUniformBuffers<0> body=484 status=ok
// SIG undefined UpdatePackedUniformBuffers<0>(void)

char UpdatePackedUniformBuffers<0>
               (uint param_1,ushort *param_2,longlong *param_3,longlong *param_4,longlong param_5,
               longlong param_6,ulonglong param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  size_t _Size;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  cVar9 = '\0';
  if (param_7 != 0) {
    lVar12 = 0;
    do {
      if ((param_7 & 1) != 0) {
        lVar11 = *param_3;
        lVar2 = *(longlong *)(param_5 + 8);
        iVar1 = *(int *)(lVar11 + 8 + lVar12);
        _Size = (size_t)iVar1;
        uVar7 = *(uint *)(lVar2 + 0x18);
        if (*(uint *)(lVar2 + 0x18) <= param_1) {
          uVar7 = param_1;
        }
        uVar13 = ~((ulonglong)uVar7 - 1) & (ulonglong)uVar7 + *(longlong *)(lVar2 + 0x10) + -1;
        if (*(ulonglong *)(lVar2 + 8) < uVar13 + _Size) {
          uVar13 = 0;
          *(size_t *)(lVar2 + 0x10) = _Size;
          *(longlong *)(lVar2 + 0x28) = param_8;
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_8 + 0xa0);
        }
        else {
          *(ulonglong *)(lVar2 + 0x10) = uVar13 + _Size;
        }
        _guard_xfg_dispatch_icall_nop((void *)(param_6 + uVar13),*(void **)(lVar11 + lVar12),_Size);
        uVar8 = (ulonglong)*param_2;
        lVar11 = *(longlong *)(*(longlong *)(param_5 + 8) + 0x20);
        lVar2 = *(longlong *)(lVar11 + 0x20);
        lVar11 = *(uint *)(lVar11 + 0x14) + uVar13;
        plVar3 = *(longlong **)(uVar8 * 0x40 + 0x30 + *param_4);
        if (DAT_1464c9c14 < 2) {
          lVar4 = param_4[6];
          iVar10 = *(int *)(lVar2 + 0x68);
          bVar14 = *(int *)(lVar4 + uVar8 * 0xc) != iVar10;
          if (bVar14) {
            *(int *)(lVar4 + uVar8 * 0xc) = iVar10;
            *plVar3 = *(longlong *)(lVar2 + 0x60);
          }
          iVar10 = (int)lVar11;
          bVar15 = *(int *)(lVar4 + 4 + uVar8 * 0xc) != iVar10;
          if (bVar15) {
            *(int *)(lVar4 + 4 + uVar8 * 0xc) = iVar10;
            plVar3[1] = lVar11;
          }
          bVar16 = *(int *)(lVar4 + 8 + uVar8 * 0xc) != iVar1;
          if (bVar16) {
            *(int *)(lVar4 + 8 + uVar8 * 0xc) = iVar1;
            plVar3[2] = _Size;
          }
          bVar16 = bVar16 || (bVar15 || bVar14);
          *(byte *)(param_4 + 10) = *(byte *)(param_4 + 10) | bVar16;
        }
        else {
          lVar2 = *(longlong *)(lVar2 + 0x60);
          lVar4 = *plVar3;
          *plVar3 = lVar2;
          lVar5 = plVar3[1];
          plVar3[1] = lVar11;
          sVar6 = plVar3[2];
          plVar3[2] = _Size;
          bVar16 = sVar6 != _Size || lVar5 != lVar11;
          if (lVar4 != lVar2) {
            bVar16 = true;
          }
        }
        if ((cVar9 != '\0') || (bVar16)) {
          cVar9 = '\x01';
        }
      }
      lVar12 = lVar12 + 0x10;
      param_2 = param_2 + 1;
      bVar16 = 1 < param_7;
      param_7 = param_7 >> 1;
    } while (bVar16);
  }
  return cVar9;
}



// FUNCTION 141e35f90 FCachedPool body=203 status=ok
// SIG undefined FCachedPool(void)

undefined4 *
FVulkanDescriptorSetCache::FCachedPool::FCachedPool
          (undefined4 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)param_3 * 16.0;
  if (0.0 <= fVar2) {
    iVar1 = (int)ROUND((fVar2 + fVar2) - 0.5) >> 1;
  }
  else {
    iVar1 = -((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  }
  *param_1 = (int)(longlong)(float)iVar1;
  FUN_141e37310(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  return param_1;
}



// FUNCTION 141e36060 FDescriptorSetRemappingInfo body=450 status=ok
// SIG undefined FDescriptorSetRemappingInfo(void)

undefined8 *
FDescriptorSetRemappingInfo::FDescriptorSetRemappingInfo(undefined8 *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *param_1 = 0;
  TArray<FDescriptorSetRemappingInfo::FSetInfo,FDefaultAllocator>::
  CopyToEmpty<FDescriptorSetRemappingInfo::FSetInfo>(param_1,*(undefined8 *)param_2,param_2[2],0,0);
  puVar6 = param_1 + 2;
  lVar7 = (longlong)param_1 - (longlong)param_2;
  lVar5 = 5;
  piVar3 = param_2;
  do {
    piVar4 = piVar3 + 0xe;
    *puVar6 = 0;
    lVar5 = lVar5 + -1;
    iVar1 = piVar3[6];
    pvVar2 = *(void **)(piVar3 + 4);
    *(int *)(lVar7 + -0x20 + (longlong)piVar4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)piVar3 + lVar7 + 0x1c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar2,(longlong)iVar1 << 2);
    }
    *(undefined8 *)((longlong)piVar3 + lVar7 + 0x20) = 0;
    iVar1 = piVar3[10];
    pvVar2 = *(void **)(piVar3 + 8);
    *(int *)(lVar7 + -0x10 + (longlong)piVar4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(lVar7 + -0xc + (longlong)piVar4) = 0;
    }
    else {
      TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeForCopy
                ((longlong)piVar4 + lVar7 + -0x18,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)((longlong)piVar4 + lVar7 + -0x18),pvVar2,(longlong)iVar1 * 6);
    }
    *(undefined8 *)((longlong)piVar3 + lVar7 + 0x30) = 0;
    iVar1 = *piVar4;
    pvVar2 = *(void **)(piVar3 + 0xc);
    *(int *)(lVar7 + (longlong)piVar4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(lVar7 + 4 + (longlong)piVar4) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy((longlong)piVar4 + lVar7 + -8,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)((longlong)piVar4 + lVar7 + -8),pvVar2,(longlong)iVar1 * 2);
    }
    puVar6 = puVar6 + 7;
    *(short *)((longlong)piVar3 + lVar7 + 0x40) = (short)piVar3[0x10];
    *(undefined2 *)((longlong)piVar3 + lVar7 + 0x42) = *(undefined2 *)((longlong)piVar3 + 0x42);
    piVar3 = piVar4;
  } while (lVar5 != 0);
  param_1[0x25] = 0;
  iVar1 = param_2[0x4c];
  pvVar2 = *(void **)(param_2 + 0x4a);
  *(int *)(param_1 + 0x26) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x25,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x25],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 141e36230 FDescriptorSetRemappingInfo body=245 status=ok
// SIG undefined FDescriptorSetRemappingInfo(void)

undefined8 * FDescriptorSetRemappingInfo::FDescriptorSetRemappingInfo(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 141e36330 FSetLayout body=109 status=ok
// SIG undefined FSetLayout(void)

undefined8 *
FVulkanDescriptorSetsLayoutInfo::FSetLayout::FSetLayout(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 141e363a0 FUN_141e363a0 body=930 status=ok
// SIG undefined FUN_141e363a0(void)

undefined8 * FUN_141e363a0(undefined8 *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ea4348;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined4 *)(param_1 + 0x23) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xf0001;
  *(undefined4 *)(param_1 + 0x24) = 0x1000001;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x1000f00;
  *(undefined4 *)(param_1 + 0x25) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x1000f;
  *(undefined4 *)(param_1 + 0x26) = 0xf000100;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x100;
  *(undefined4 *)(param_1 + 0x27) = 0xf0001;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x1000001;
  *(undefined4 *)(param_1 + 0x28) = 0x1000f00;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x10000;
  *(undefined4 *)(param_1 + 0x29) = 0x1000f;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xf000100;
  FBlendStateInitializerRHI::FBlendStateInitializerRHI();
  pcVar6 = (char *)((longlong)param_1 + 0x119);
  lVar8 = 8;
  puVar7 = param_1 + 6;
  do {
    uVar4 = 0;
    puVar7[-3] = 0;
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    cVar2 = pcVar6[-1];
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        uVar4 = 1;
      }
      else if (cVar2 == '\x02') {
        uVar4 = 3;
      }
      else if (cVar2 == '\x03') {
        uVar4 = 4;
      }
      else if (cVar2 == '\x04') {
        uVar4 = 2;
      }
      else {
        uVar4 = 0x7fffffff;
      }
    }
    *(undefined4 *)((longlong)puVar7 + -0xc) = uVar4;
    cVar2 = pcVar6[2];
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else if (cVar2 == '\x02') {
      uVar4 = 3;
    }
    else if (cVar2 == '\x03') {
      uVar4 = 4;
    }
    else if (cVar2 == '\x04') {
      uVar4 = 2;
    }
    else {
      uVar4 = 0x7fffffff;
    }
    *(undefined4 *)puVar7 = uVar4;
    switch(pcVar6[1]) {
    case '\0':
      uVar4 = 0;
      break;
    case '\x01':
      uVar4 = 1;
      break;
    case '\x02':
      uVar4 = 2;
      break;
    case '\x03':
      uVar4 = 3;
      break;
    case '\x04':
      uVar4 = 6;
      break;
    case '\x05':
      uVar4 = 7;
      break;
    case '\x06':
      uVar4 = 8;
      break;
    case '\a':
      uVar4 = 9;
      break;
    case '\b':
      uVar4 = 4;
      break;
    case '\t':
      uVar4 = 5;
      break;
    case '\n':
      uVar4 = 10;
      break;
    case '\v':
      uVar4 = 0xb;
      break;
    default:
      uVar4 = 0x7fffffff;
    }
    *(undefined4 *)(puVar7 + -2) = uVar4;
    switch(pcVar6[4]) {
    case '\0':
      uVar4 = 0;
      break;
    case '\x01':
      uVar4 = 1;
      break;
    case '\x02':
      uVar4 = 2;
      break;
    case '\x03':
      uVar4 = 3;
      break;
    case '\x04':
      uVar4 = 6;
      break;
    case '\x05':
      uVar4 = 7;
      break;
    case '\x06':
      uVar4 = 8;
      break;
    case '\a':
      uVar4 = 9;
      break;
    case '\b':
      uVar4 = 4;
      break;
    case '\t':
      uVar4 = 5;
      break;
    case '\n':
      uVar4 = 10;
      break;
    case '\v':
      uVar4 = 0xb;
      break;
    default:
      uVar4 = 0x7fffffff;
    }
    *(undefined4 *)((longlong)puVar7 + -4) = uVar4;
    switch(*pcVar6) {
    case '\0':
      uVar4 = 0;
      break;
    case '\x01':
      uVar4 = 1;
      break;
    case '\x02':
      uVar4 = 2;
      break;
    case '\x03':
      uVar4 = 3;
      break;
    case '\x04':
      uVar4 = 6;
      break;
    case '\x05':
      uVar4 = 7;
      break;
    case '\x06':
      uVar4 = 8;
      break;
    case '\a':
      uVar4 = 9;
      break;
    case '\b':
      uVar4 = 4;
      break;
    case '\t':
      uVar4 = 5;
      break;
    case '\n':
      uVar4 = 10;
      break;
    case '\v':
      uVar4 = 0xb;
      break;
    default:
      uVar4 = 0x7fffffff;
    }
    *(undefined4 *)((longlong)puVar7 + -0x14) = uVar4;
    switch(pcVar6[3]) {
    case '\0':
      uVar4 = 0;
      break;
    case '\x01':
      uVar4 = 1;
      break;
    case '\x02':
      uVar4 = 2;
      break;
    case '\x03':
      uVar4 = 3;
      break;
    case '\x04':
      uVar4 = 6;
      break;
    case '\x05':
      uVar4 = 7;
      break;
    case '\x06':
      uVar4 = 8;
      break;
    case '\a':
      uVar4 = 9;
      break;
    case '\b':
      uVar4 = 4;
      break;
    case '\t':
      uVar4 = 5;
      break;
    case '\n':
      uVar4 = 10;
      break;
    case '\v':
      uVar4 = 0xb;
      break;
    default:
      uVar4 = 0x7fffffff;
    }
    *(undefined4 *)(puVar7 + -1) = uVar4;
    if ((((pcVar6[-1] == '\0') && (pcVar6[1] == '\0')) && (*pcVar6 == '\x01')) &&
       (((pcVar6[2] == '\0' && (pcVar6[4] == '\0')) && (pcVar6[3] == '\x01')))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)(puVar7 + -3) = uVar4;
    bVar3 = pcVar6[5];
    *(uint *)((longlong)puVar7 + 4) = bVar3 & 1;
    uVar5 = (byte)pcVar6[5] & 2 | bVar3 & 1;
    *(uint *)((longlong)puVar7 + 4) = uVar5;
    uVar5 = (byte)pcVar6[5] & 4 | uVar5;
    *(uint *)((longlong)puVar7 + 4) = uVar5;
    pbVar1 = (byte *)(pcVar6 + 5);
    pcVar6 = pcVar6 + 7;
    *(uint *)((longlong)puVar7 + 4) = *pbVar1 & 8 | uVar5;
    puVar7 = puVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return param_1;
}



// FUNCTION 141e36810 FUN_141e36810 body=90 status=ok
// SIG undefined FUN_141e36810(void)

undefined8 * FUN_141e36810(undefined8 *param_1,longlong param_2)

{
  undefined8 *local_res8 [4];
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_144ea4460;
  local_res8[0] = param_1;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 0x1910,local_res8);
  return param_1;
}



// FUNCTION 141e36870 FUN_141e36870 body=1755 status=ok
// SIG undefined FUN_141e36870(void)

undefined8 *
FUN_141e36870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x160);
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_144ea4cd0;
  param_1[0x2f] = param_2;
  param_1[1] = &PTR_StartProfileThreadUsage_144d85030;
  param_1[0x30] = param_5;
  param_1[0x31] = param_3;
  param_1[0x32] = param_4;
  *(undefined2 *)(param_1 + 0x33) = 0x100;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x7fffffff;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  VulkanRHI::FTempFrameAllocationBuffer::FTempFrameAllocationBuffer(param_1 + 0x3f,param_3);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FTransitionAndLayoutManager::FGenerateMipsInfo::Reset();
  *(undefined1 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x97));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x97),4000);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  FUN_141e37140(param_1 + 0xa2,param_1,param_3);
  lVar1 = operator_new(0x80);
  puVar2 = puVar4;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)
             FVulkanCommandBufferManager::FVulkanCommandBufferManager(lVar1,param_3,param_1);
  }
  param_1[0x5b] = puVar2;
  puVar3 = (undefined8 *)operator_new(0x30);
  puVar2 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = param_3;
    *puVar3 = &PTR__scalar_deleting_destructor__144e9c070;
    *(undefined2 *)(puVar3 + 3) = 0;
    puVar3[4] = param_1;
    puVar3[5] = 0;
    puVar2 = puVar3;
  }
  lVar1 = param_1[0x5b];
  param_1[0xcc] = puVar2;
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
    puVar2 = (undefined8 *)param_1[0xcc];
  }
  FUN_141e5fbf0(puVar2,*(undefined8 *)(lVar1 + 0x70));
  if (param_1[0x30] == 0) {
    lVar1 = param_1[0x5b];
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
    }
    (**(code **)(*(longlong *)param_1[0xcc] + 8))
              ((longlong *)param_1[0xcc],*(undefined8 *)(lVar1 + 0x70),0);
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(param_1[0x5b],0);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(param_1[0x5b]);
  }
  puVar3 = (undefined8 *)operator_new(0x2b0);
  puVar2 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_1[0x31];
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
    puVar3[0x12] = 0;
    *(undefined4 *)(puVar3 + 0x13) = 0;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x15) = 0;
    puVar3[0x16] = 0;
    *(undefined4 *)(puVar3 + 0x17) = 0;
    puVar3[0x18] = 0;
    *(undefined4 *)(puVar3 + 0x19) = 0;
    puVar3[0x1a] = 0;
    *(undefined4 *)(puVar3 + 0x1b) = 0;
    puVar3[0x1c] = 0;
    *(undefined4 *)(puVar3 + 0x1d) = 0;
    puVar3[0x1e] = 0;
    *(undefined4 *)(puVar3 + 0x1f) = 0;
    puVar3[0x20] = 0;
    *(undefined4 *)(puVar3 + 0x21) = 0;
    puVar3[0x22] = 0;
    *(undefined4 *)(puVar3 + 0x23) = 0;
    puVar3[0x24] = 0;
    *(undefined4 *)(puVar3 + 0x25) = 0;
    puVar3[0x26] = 0;
    *(undefined4 *)(puVar3 + 0x27) = 0;
    puVar3[0x28] = 0;
    *(undefined4 *)(puVar3 + 0x29) = 0;
    puVar3[0x2a] = 0;
    *(undefined4 *)(puVar3 + 0x2b) = 0;
    puVar3[0x2c] = 0;
    *(undefined4 *)(puVar3 + 0x2d) = 0;
    puVar3[0x2e] = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(undefined4 *)(puVar3 + 0x31) = 0;
    puVar3[0x32] = 0;
    *(undefined4 *)(puVar3 + 0x33) = 0;
    puVar3[0x34] = 0;
    *(undefined4 *)(puVar3 + 0x35) = 0;
    puVar3[0x36] = 0;
    *(undefined4 *)(puVar3 + 0x37) = 0;
    puVar3[0x38] = 0;
    *(undefined4 *)(puVar3 + 0x39) = 0;
    puVar3[0x3a] = 0;
    *(undefined4 *)(puVar3 + 0x3b) = 0;
    puVar3[0x3c] = 0;
    *(undefined4 *)(puVar3 + 0x3d) = 0;
    puVar3[0x3e] = 0;
    *(undefined4 *)(puVar3 + 0x3f) = 0;
    puVar3[0x40] = 0;
    *(undefined4 *)(puVar3 + 0x41) = 0;
    puVar3[0x42] = 0;
    *(undefined4 *)(puVar3 + 0x43) = 0;
    puVar3[0x44] = 0;
    *(undefined4 *)(puVar3 + 0x45) = 0;
    puVar3[0x46] = 0;
    *(undefined4 *)(puVar3 + 0x47) = 0;
    puVar3[0x48] = 0;
    *(undefined4 *)(puVar3 + 0x49) = 0;
    puVar3[0x4a] = 0;
    *(undefined4 *)(puVar3 + 0x4b) = 0;
    puVar3[0x4c] = 0;
    *(undefined4 *)(puVar3 + 0x4d) = 0;
    puVar3[0x4e] = 0;
    *(undefined4 *)(puVar3 + 0x4f) = 0;
    puVar3[0x50] = 0;
    *(undefined4 *)(puVar3 + 0x51) = 0;
    puVar3[0x52] = 0;
    *(undefined4 *)(puVar3 + 0x53) = 0;
    puVar3[0x55] = param_1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0x26;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 0x54) = 1;
    puVar2 = puVar3;
  }
  param_1[0x9f] = puVar2;
  puVar2 = (undefined8 *)operator_new(0x80);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1[0x31];
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    puVar2[0xf] = param_1;
    puVar4 = puVar2;
  }
  param_1[0xa0] = puVar4;
  lVar1 = operator_new(0x10);
  if (lVar1 == 0) {
    param_1[0x34] = 0;
  }
  else {
    uVar5 = FUN_141e59c90(lVar1,param_1[0x31]);
    param_1[0x34] = uVar5;
  }
  return param_1;
}



// FUNCTION 141e36f50 FVulkanCommandListContextImmediate body=53 status=ok
// SIG undefined FVulkanCommandListContextImmediate(void)

undefined8 *
FVulkanCommandListContextImmediate::FVulkanCommandListContextImmediate(undefined8 *param_1)

{
  FUN_141e36870();
  *param_1 = &PTR_FUN_144ea4cd0;
  param_1[1] = &PTR_StartProfileThreadUsage_144d85030;
  return param_1;
}



// FUNCTION 141e36f90 FVulkanComputePipelineDescriptorState body=277 status=ok
// SIG undefined FVulkanComputePipelineDescriptorState(void)

undefined8 *
FVulkanComputePipelineDescriptorState::FVulkanComputePipelineDescriptorState
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cc0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = param_3;
  FPackedUniformBuffers::Init(param_1 + 0x1a,*(longlong *)(param_3 + 0x38) + 0x58);
  param_1[0xc] = *(longlong *)(param_3 + 0x18) + 0x10;
  lVar1 = *(longlong *)(param_3 + 0x18);
  param_1[0x19] = lVar1 + 0x1e8;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar1 + 0x200);
  FUN_141e43280(param_1);
  LOCK();
  *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 141e370b0 FVulkanDescriptorSetCache body=136 status=ok
// SIG undefined FVulkanDescriptorSetCache(void)

undefined8 *
FVulkanDescriptorSetCache::FVulkanDescriptorSetCache(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  uVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar2 = operator_new(200);
  if (lVar2 != 0) {
    uVar3 = FCachedPool::FCachedPool(lVar2,*param_1,0x80);
  }
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar1);
  }
  *(undefined8 *)(param_1[1] + (longlong)iVar1 * 8) = uVar3;
  return param_1;
}



// FUNCTION 141e37140 FUN_141e37140 body=462 status=ok
// SIG undefined FUN_141e37140(void)

undefined8 * FUN_141e37140(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_144da0ca0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  plVar1 = param_1 + 0x11;
  *plVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar4 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0x12);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0x12) = iVar3;
  if (*(int *)((longlong)param_1 + 0x94) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + *plVar1),0,lVar4 << 4);
  lVar4 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0xb);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0xb) = iVar3;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 10);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + param_1[10]),0,lVar4 << 4);
  *param_1 = &PTR_FUN_144ea4388;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = param_3;
  param_1[0x1d] = param_2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 141e37310 FUN_141e37310 body=664 status=ok
// SIG undefined FUN_141e37310(void)

longlong * FUN_141e37310(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  *param_1 = param_2;
  uVar1 = (uint)param_3;
  iVar3 = uVar1 * 2;
  local_70 = 1;
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = uVar1;
  uVar8 = (uint)(param_3 >> 1) & 0x7fffffff;
  uVar9 = (uint)(param_3 >> 2) & 0x3fffffff;
  local_78 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78);
  lVar7 = (longlong)(int)local_70;
  *local_78 = 0;
  iVar6 = (int)local_70 + 1;
  *(undefined4 *)local_78 = 6;
  *(int *)((longlong)local_78 + 4) = iVar3;
  if (local_70._4_4_ < iVar6) {
    uVar5 = local_70 & 0xffffffff;
    local_70._0_4_ = iVar6;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,uVar5);
    iVar6 = (int)local_70;
  }
  *(undefined4 *)(local_78 + lVar7) = 8;
  *(int *)((longlong)local_78 + lVar7 * 8 + 4) = iVar3;
  local_70._0_4_ = iVar6 + 1;
  iVar4 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    iVar4 = (int)local_70;
  }
  local_70._0_4_ = iVar4 + 1;
  *(undefined4 *)(local_78 + iVar6) = 0;
  *(uint *)((longlong)local_78 + (longlong)iVar6 * 8 + 4) = uVar8;
  iVar6 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
    iVar6 = (int)local_70;
  }
  local_70._0_4_ = iVar6 + 1;
  *(undefined4 *)(local_78 + iVar4) = 1;
  *(uint *)((longlong)local_78 + (longlong)iVar4 * 8 + 4) = uVar1 * 3;
  iVar4 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    iVar4 = (int)local_70;
  }
  local_70._0_4_ = iVar4 + 1;
  *(undefined4 *)(local_78 + iVar6) = 2;
  *(int *)((longlong)local_78 + (longlong)iVar6 * 8 + 4) = iVar3;
  iVar3 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
    iVar3 = (int)local_70;
  }
  local_70._0_4_ = iVar3 + 1;
  *(undefined4 *)(local_78 + iVar4) = 4;
  *(uint *)((longlong)local_78 + (longlong)iVar4 * 8 + 4) = uVar8;
  iVar6 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
    iVar6 = (int)local_70;
  }
  local_70._0_4_ = iVar6 + 1;
  *(undefined4 *)(local_78 + iVar3) = 5;
  *(uint *)((longlong)local_78 + (longlong)iVar3 * 8 + 4) = uVar9;
  iVar3 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    iVar3 = (int)local_70;
  }
  local_70._0_4_ = iVar3 + 1;
  *(undefined4 *)(local_78 + iVar6) = 7;
  *(uint *)((longlong)local_78 + (longlong)iVar6 * 8 + 4) = uVar9;
  iVar6 = (int)local_70;
  if (local_70._4_4_ < (int)local_70) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
    iVar6 = (int)local_70;
  }
  iVar4 = iVar6 + 1;
  local_70 = CONCAT44(local_70._4_4_,iVar4);
  *(undefined4 *)(local_78 + iVar3) = 3;
  *(uint *)((longlong)local_78 + (longlong)iVar3 * 8 + 4) = uVar9;
  if (local_70._4_4_ < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    iVar4 = (int)local_70;
  }
  puVar2 = local_78;
  *(undefined4 *)(local_78 + iVar6) = 10;
  *(uint *)((longlong)local_78 + (longlong)iVar6 * 8 + 4) = uVar1 >> 4;
  local_4c = 0;
  local_64 = 0;
  local_5c = 0;
  _local_54 = CONCAT44(iVar4,(int)param_1[1]);
  local_68 = 0x21;
  uStack_48 = SUB84(local_78,0);
  uStack_44 = (undefined4)((ulonglong)local_78 >> 0x20);
  iVar3 = (*DAT_146ab0130)(*(undefined8 *)(*param_1 + 8),&local_68,0,param_1 + 2);
  if (iVar3 != 0) {
    FUN_141e67d70(iVar3,
                  "VulkanRHI::vkCreateDescriptorPool(Device->GetInstanceHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, &DescriptorPool)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                  ,0x2d6);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  return param_1;
}



// FUNCTION 141e375b0 FVulkanGraphicsPipelineDescriptorState body=687 status=ok
// SIG undefined FVulkanGraphicsPipelineDescriptorState(void)

undefined8 *
FVulkanGraphicsPipelineDescriptorState::FVulkanGraphicsPipelineDescriptorState
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cc8;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x42] = param_3;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0xc] = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x18) + 0x10;
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x18);
  param_1[0x19] = lVar1 + 0x1e8;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar1 + 0x260);
  lVar2 = param_1[1] + 0x470;
  lVar1 = FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIVertexShader,0,1>_>
                    (lVar2,*(undefined8 *)(param_3 + 0x20));
  FPackedUniformBuffers::Init(param_1 + 0x1a,lVar1 + 0x50,param_1 + 0x38);
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar1 = FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIPixelShader,3,16>_>(lVar2);
    FPackedUniformBuffers::Init(param_1 + 0x20,lVar1 + 0x50,param_1 + 0x39);
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    lVar1 = FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIGeometryShader,4,8>_>(lVar2);
    FPackedUniformBuffers::Init(param_1 + 0x26,lVar1 + 0x50,param_1 + 0x3a);
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    lVar1 = FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIHullShader,1,2>_>(lVar2);
    FPackedUniformBuffers::Init(param_1 + 0x2c,lVar1 + 0x50,param_1 + 0x3b);
  }
  if (*(longlong *)(param_3 + 0x40) != 0) {
    lVar1 = FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIDomainShader,2,4>_>(lVar2);
    FPackedUniformBuffers::Init(param_1 + 0x32,lVar1 + 0x50,param_1 + 0x3c);
  }
  FUN_141e43280(param_1);
  LOCK();
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 141e37860 FVulkanLayout body=150 status=ok
// SIG undefined FVulkanLayout(void)

undefined8 * FVulkanLayout::FVulkanLayout(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c30;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  FDescriptorSetRemappingInfo::FDescriptorSetRemappingInfo(param_1 + 0xb);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x32] = param_2;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 141e37900 FVulkanPipelineStateCacheManager body=570 status=ok
// SIG undefined FVulkanPipelineStateCacheManager(void)

undefined8 *
FVulkanPipelineStateCacheManager::FVulkanPipelineStateCacheManager
          (undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x26));
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x5a),4000);
  return param_1;
}



// FUNCTION 141e37b40 FUN_141e37b40 body=383 status=ok
// SIG undefined FUN_141e37b40(void)

undefined8 *
FUN_141e37b40(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4438;
  local_40 = 0xb;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  local_3c = 0;
  local_34 = 0;
  *(undefined4 *)(param_1 + 4) = param_4;
  local_24 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  _local_2c = CONCAT44(*(undefined4 *)(param_1 + 4),*(undefined4 *)((longlong)param_1 + 0x24));
  iVar2 = (*DAT_146ab0058)(*(undefined8 *)(param_1[1] + 8),&local_40,0,param_1 + 2);
  if (iVar2 != 0) {
    FUN_141e67d70(iVar2,
                  "VulkanRHI::vkCreateQueryPool(Device->GetInstanceHandle(), &PoolCreateInfo, VULKAN_CPU_ALLOCATOR, &QueryPool)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp",
                  0x3c);
  }
  local_58 = 10;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  iVar2 = (*DAT_146ab0030)(*(undefined8 *)(param_1[1] + 8),&local_58,0,param_1 + 3);
  if (iVar2 != 0) {
    FUN_141e67d70(iVar2,
                  "VulkanRHI::vkCreateEvent(Device->GetInstanceHandle(), &EventCreateInfo, VULKAN_CPU_ALLOCATOR, &ResetEvent)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp",
                  0x40);
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 6);
  iVar3 = iVar1 + iVar2;
  *(int *)(param_1 + 6) = iVar3;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1[5] + (longlong)iVar1 * 8),0,(longlong)iVar2 << 3);
  (*DAT_146ab0050)(*(undefined8 *)(param_1[1] + 8),param_1[3]);
  (*DAT_146ab02e8)(*(undefined8 *)(param_3 + 0x40),param_1[2],0,*(undefined4 *)(param_1 + 4));
  return param_1;
}



// FUNCTION 141e37cc0 FVulkanQueue body=110 status=ok
// SIG undefined FVulkanQueue(void)

undefined8 * FVulkanQueue::FVulkanQueue(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_2;
  *param_1 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  (*DAT_146aaff68)(*(undefined8 *)(param_1[2] + 8),*(undefined4 *)(param_1 + 1),0,param_1);
  return param_1;
}



// FUNCTION 141e37d30 FVulkanRHIGraphicsPipelineState body=175 status=ok
// SIG undefined FVulkanRHIGraphicsPipelineState(void)

undefined8 *
FVulkanRHIGraphicsPipelineState::FVulkanRHIGraphicsPipelineState
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cb0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 9) = param_4;
  iVar3 = 0;
  puVar4 = param_1 + 4;
  do {
    if (iVar3 == 0) {
      lVar1 = *(longlong *)(param_2 + 8);
LAB_141e37daf:
      if (lVar1 == 0) goto LAB_141e37dba;
      uVar2 = *(undefined8 *)(lVar1 + 0x48);
    }
    else {
      if (iVar3 == 1) {
        lVar1 = *(longlong *)(param_2 + 0x20);
        goto LAB_141e37daf;
      }
      if (iVar3 == 2) {
        lVar1 = *(longlong *)(param_2 + 0x28);
        goto LAB_141e37daf;
      }
      if (iVar3 == 3) {
        lVar1 = *(longlong *)(param_2 + 0x10);
        goto LAB_141e37daf;
      }
      if (iVar3 == 4) {
        lVar1 = *(longlong *)(param_2 + 0x18);
        goto LAB_141e37daf;
      }
LAB_141e37dba:
      uVar2 = 0;
    }
    *puVar4 = uVar2;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    if (4 < iVar3) {
      *(bool *)((longlong)param_1 + 0x49) = *(int *)(*(longlong *)(param_3 + 0x18) + 0x38) != 0;
      return param_1;
    }
  } while( true );
}



// FUNCTION 141e37de0 FUN_141e37de0 body=1525 status=ok
// SIG undefined FUN_141e37de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141e37de0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  char cVar18;
  undefined1 auStack_d8 [32];
  char local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = *(undefined1 *)((longlong)param_3 + 0x10e);
  *(undefined2 *)((longlong)param_1 + 0x33d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33f) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((longlong)param_1 + 0x354) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_b0 = param_3;
  local_a8 = param_2;
  _guard_xfg_dispatch_icall_nop(param_1 + 9,0,0x2ec);
  cVar18 = '\0';
  param_1[0x69] = 0;
  bVar4 = false;
  iVar14 = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  local_a0 = 0;
  lVar13 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  plVar9 = param_3;
  do {
    if (*plVar9 == 0) break;
    iVar14 = iVar14 + 1;
    lVar13 = lVar13 + 1;
    plVar9 = plVar9 + 3;
  } while (lVar13 < 8);
  lVar13 = (longlong)iVar14;
  uVar8 = 0x7fffffff;
  if (0 < iVar14) {
    pbVar17 = (byte *)((longlong)param_3 + 0x15);
    cVar18 = '\0';
    do {
      lVar10 = (**(code **)(**(longlong **)(pbVar17 + -0x15) + 0x48))();
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        uVar6 = *(uint *)(lVar10 + 0x28) >> (pbVar17[-1] & 0x1f);
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        *(uint *)(param_1 + 0x69) = uVar6;
        uVar6 = *(uint *)(lVar10 + 0x2c) >> (pbVar17[-1] & 0x1f);
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        *(uint *)((longlong)param_1 + 0x34c) = uVar6;
        *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(lVar10 + 0x30);
      }
      bVar12 = *(byte *)(*(longlong *)(pbVar17 + -0x15) + 0x38);
      bVar2 = *(byte *)((longlong)param_1 + 0x334);
      *(byte *)((longlong)param_1 + 0x339) = bVar12;
      *(uint *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd8) = (uint)bVar12;
      uVar7 = FUN_141e55c30(*(undefined4 *)(*(longlong *)(pbVar17 + -0x15) + 0x3c),
                            *(uint *)(lVar10 + 0x38) >> 4 & 0xffffff01);
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd4) = uVar7;
      iVar14 = 0x7fffffff;
      bVar12 = *pbVar17 >> 2;
      if (bVar12 == 0) {
        iVar14 = 2;
      }
      else if (bVar12 == 1) {
        iVar14 = 0;
      }
      else if (bVar12 == 2) {
        iVar14 = 1;
      }
      *(int *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xdc) = iVar14;
      if ((bVar4) || (iVar14 == 1)) {
        bVar4 = true;
      }
      uVar7 = 0x7fffffff;
      bVar12 = *pbVar17 & 3;
      if ((*pbVar17 & 3) == 0) {
LAB_141e37ff0:
        uVar7 = 1;
      }
      else if (bVar12 == 1) {
        uVar7 = 0;
      }
      else if (bVar12 == 2) goto LAB_141e37ff0;
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe0) = uVar7;
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe4) = 2;
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe8) = 1;
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xec) = 2;
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xf0) = 2;
      *(uint *)(param_1 + *(byte *)((longlong)param_1 + 0x335)) =
           (uint)*(byte *)((longlong)param_1 + 0x334);
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) * 8 + 4) =
           2;
      if (((1 < *(int *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd8)) &&
          (*(longlong *)(pbVar17 + -0xd) != 0)) && (DAT_1464c9c14 < 2)) {
        uVar11 = (ulonglong)*(byte *)((longlong)param_1 + 0x334);
        puVar1 = (undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xd0);
        uVar3 = puVar1[1];
        *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xf4) = *puVar1;
        *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xfc) = uVar3;
        puVar1 = (undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xe0);
        uVar3 = puVar1[1];
        *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0x104) = *puVar1;
        *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0x10c) = uVar3;
        *(undefined4 *)((longlong)param_1 + uVar11 * 0x24 + 0x114) =
             *(undefined4 *)((longlong)param_1 + uVar11 * 0x24 + 0xf0);
        *(undefined4 *)
         ((longlong)param_1 + ((ulonglong)*(byte *)((longlong)param_1 + 0x334) + 7) * 0x24) = 1;
        *(undefined4 *)
         ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x334) * 0x24 + 0x104) = 0;
        *(uint *)(param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) + 9) =
             *(byte *)((longlong)param_1 + 0x334) + 1;
        *(undefined4 *)
         ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) * 8 + 0x4c) = 1;
        *(char *)((longlong)param_1 + 0x334) = *(char *)((longlong)param_1 + 0x334) + '\x01';
        *(undefined1 *)(param_1 + 0x67) = 1;
      }
      pbVar17 = pbVar17 + 0x18;
      bVar12 = *(byte *)((longlong)param_1 + 0x335);
      uVar11 = (ulonglong)bVar12;
      *(undefined4 *)((longlong)&local_a0 + uVar11 * 4 + 4) =
           *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd4);
      *(undefined1 *)((longlong)&local_78 + uVar11) =
           *(undefined1 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xdc);
      *(undefined4 *)((longlong)&local_68 + uVar11 * 4 + 4) = 2;
      uVar5 = *(undefined1 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe0);
      local_a0 = CONCAT71(local_a0._1_7_,(char)local_a0 + '\x01');
      *(char *)((longlong)param_1 + 0x334) = *(char *)((longlong)param_1 + 0x334) + '\x01';
      *(undefined1 *)((longlong)&local_70 + uVar11 + 2) = uVar5;
      *(byte *)((longlong)param_1 + 0x335) = bVar12 + 1;
      lVar13 = lVar13 + -1;
      param_3 = local_b0;
      local_b8 = cVar18;
    } while (lVar13 != 0);
  }
  if (param_3[0x18] == 0) goto LAB_141e38334;
  puVar1 = (undefined8 *)
           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x334) * 0x24 + 0xd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  lVar13 = (**(code **)(*(longlong *)param_3[0x18] + 0x48))();
  uVar3 = local_68;
  iVar16 = 0x7fffffff;
  iVar14 = 0x7fffffff;
  uVar7 = *(undefined4 *)(param_3[0x18] + 0x38);
  *(undefined4 *)(puVar1 + 1) = uVar7;
  *(char *)((longlong)param_1 + 0x339) = (char)uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) =
       (&DAT_1464ca1cc)[(longlong)*(int *)(param_3[0x18] + 0x3c) * 10];
  bVar12 = *(byte *)(param_3 + 0x1a) >> 6;
  if (bVar12 == 0) {
    iVar14 = 2;
  }
  else if (bVar12 == 1) {
    iVar14 = 0;
  }
  else if (bVar12 == 2) {
    iVar14 = 1;
  }
  *(int *)((longlong)puVar1 + 0xc) = iVar14;
  bVar12 = *(byte *)(param_3 + 0x1a) >> 2 & 3;
  if ((*(byte *)(param_3 + 0x1a) >> 2 & 3) == 0) {
    iVar15 = 2;
  }
  else if (bVar12 == 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = iVar16;
    if (bVar12 == 2) {
      iVar15 = 1;
    }
  }
  *(int *)((longlong)puVar1 + 0x14) = iVar15;
  if (((bVar4) || (iVar14 == 1)) || (iVar15 == 1)) {
    bVar4 = true;
  }
  bVar12 = *(byte *)(param_3 + 0x1a) >> 4 & 3;
  if ((*(byte *)(param_3 + 0x1a) >> 4 & 3) == 0) {
LAB_141e38261:
    iVar16 = 1;
  }
  else if (bVar12 == 1) {
    iVar16 = 0;
  }
  else if (bVar12 == 2) goto LAB_141e38261;
  *(int *)(puVar1 + 2) = iVar16;
  bVar12 = *(byte *)(param_3 + 0x1a) & 3;
  if ((*(byte *)(param_3 + 0x1a) & 3) == 0) {
LAB_141e38280:
    uVar8 = 1;
  }
  else if (bVar12 == 1) {
    uVar8 = 0;
  }
  else if (bVar12 == 2) goto LAB_141e38280;
  *(undefined4 *)(puVar1 + 3) = uVar8;
  if ((*(int *)((longlong)param_3 + 0xd4) - 1U & 0xffffffef) == 0) {
    uVar8 = 4;
  }
  else if ((*(int *)((longlong)param_3 + 0xd4) == 0x21) && ((*(byte *)(local_a8 + 0x18d0) & 2) != 0)
          ) {
    uVar8 = 0x3b9c9308;
  }
  else {
    uVar8 = 3;
  }
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar8;
  *(undefined4 *)(puVar1 + 4) = uVar8;
  *(uint *)(param_1 + 8) = (uint)*(byte *)((longlong)param_1 + 0x334);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar8;
  local_70._0_2_ =
       CONCAT11(*(undefined1 *)((longlong)puVar1 + 0x14),*(undefined1 *)((longlong)puVar1 + 0xc));
  local_68._4_4_ = SUB84(uVar3,4);
  local_68._0_4_ =
       CONCAT13(*(undefined1 *)(puVar1 + 3),
                CONCAT12(*(undefined1 *)(puVar1 + 2),(undefined2)local_68));
  local_48 = CONCAT44(uVar8,(undefined4)local_48);
  local_80 = CONCAT44(*(undefined4 *)((longlong)puVar1 + 4),(undefined4)local_80);
  *(byte *)((longlong)param_1 + 0x334) = *(byte *)((longlong)param_1 + 0x334) + 1;
  *(undefined1 *)((longlong)param_1 + 0x337) = 1;
  if (cVar18 == '\0') {
    *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(lVar13 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)(lVar13 + 0x2c);
    *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(lVar13 + 0x58);
  }
LAB_141e38334:
  *(undefined1 *)((longlong)param_1 + 0x33b) = *(undefined1 *)((longlong)param_3 + 0x10f);
  local_a0 = CONCAT62(CONCAT51(CONCAT41(local_a0._4_4_,*(undefined1 *)((longlong)param_3 + 0x10f)),
                               *(undefined1 *)((longlong)param_1 + 0x339)),
                      CONCAT11(*(undefined1 *)((longlong)param_1 + 0x33c),(char)local_a0));
  uVar8 = FCrc::MemCrc32(&local_a0,0x28);
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  uVar8 = FCrc::MemCrc32(&local_78,0x38,uVar8);
  *(undefined4 *)((longlong)param_1 + 0x344) = uVar8;
  if (bVar4) {
    uVar5 = *(undefined1 *)((longlong)param_1 + 0x334);
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x33a) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x354) = 1;
  return param_1;
}



// FUNCTION 141e383e0 FUN_141e383e0 body=1506 status=ok
// SIG undefined FUN_141e383e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141e383e0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_d8 [32];
  char local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  iVar17 = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((longlong)param_1 + 0x354) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_b0 = param_2;
  _guard_xfg_dispatch_icall_nop(param_1 + 9,0,0x2ec);
  cVar15 = '\0';
  param_1[0x69] = 0;
  bVar5 = false;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_b8 = '\0';
  if (0 < *(int *)(param_3 + 0xc0)) {
    puVar14 = (undefined4 *)(param_3 + 8);
    do {
      if (*(longlong **)(puVar14 + -2) != (longlong *)0x0) {
        lVar10 = (**(code **)(**(longlong **)(puVar14 + -2) + 0x48))();
        if (cVar15 == '\0') {
          uVar8 = *(uint *)(lVar10 + 0x28) >> ((byte)*puVar14 & 0x1f);
          local_b8 = '\x01';
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          *(uint *)(param_1 + 0x69) = uVar8;
          uVar8 = *(uint *)(lVar10 + 0x2c) >> ((byte)*puVar14 & 0x1f);
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          *(uint *)((longlong)param_1 + 0x34c) = uVar8;
          *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(lVar10 + 0x30);
        }
        bVar2 = *(byte *)(lVar10 + 0x74);
        bVar3 = *(byte *)((longlong)param_1 + 0x334);
        *(byte *)((longlong)param_1 + 0x339) = bVar2;
        *(uint *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xd8) = (uint)bVar2;
        uVar9 = FUN_141e55c30(*(undefined4 *)(*(longlong *)(puVar14 + -2) + 0x3c),
                              *(uint *)(lVar10 + 0x38) >> 4 & 0xffffff01);
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xd4) = uVar9;
        uVar9 = 0x7fffffff;
        iVar13 = 0x7fffffff;
        cVar15 = *(char *)(puVar14 + 2);
        if (cVar15 == '\0') {
          iVar13 = 2;
        }
        else if (cVar15 == '\x01') {
          iVar13 = 0;
        }
        else if (cVar15 == '\x02') {
          iVar13 = 1;
        }
        *(int *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xdc) = iVar13;
        if ((bVar5) || (iVar13 == 1)) {
          bVar5 = true;
        }
        cVar15 = *(char *)((longlong)puVar14 + 9);
        if (((cVar15 == '\0') || (cVar15 == '\x01')) || (cVar15 == '\x02')) {
          uVar9 = 0;
        }
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xe0) = uVar9;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xe4) = 2;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xe8) = 1;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xec) = 2;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xf0) = 2;
        *(uint *)(param_1 + *(byte *)((longlong)param_1 + 0x335)) =
             (uint)*(byte *)((longlong)param_1 + 0x334);
        *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) * 8 + 4)
             = 2;
        if ((*(char *)(param_3 + 0x188) == '\0') || (*(longlong *)(puVar14 + 0x30) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (((1 < *(int *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xd8)) && (bVar6)) &&
           (DAT_1464c9c14 < 2)) {
          uVar11 = (ulonglong)*(byte *)((longlong)param_1 + 0x334);
          puVar1 = (undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xd0);
          uVar4 = puVar1[1];
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xf4) = *puVar1;
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xfc) = uVar4;
          puVar1 = (undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xe0);
          uVar4 = puVar1[1];
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0x104) = *puVar1;
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0x10c) = uVar4;
          *(undefined4 *)((longlong)param_1 + uVar11 * 0x24 + 0x114) =
               *(undefined4 *)((longlong)param_1 + uVar11 * 0x24 + 0xf0);
          *(undefined4 *)
           ((longlong)param_1 + ((ulonglong)*(byte *)((longlong)param_1 + 0x334) + 7) * 0x24) = 1;
          *(undefined4 *)
           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x334) * 0x24 + 0x104) = 0;
          *(uint *)(param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) + 9) =
               *(byte *)((longlong)param_1 + 0x334) + 1;
          *(undefined4 *)
           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) * 8 + 0x4c) = 2;
          *(char *)((longlong)param_1 + 0x334) = *(char *)((longlong)param_1 + 0x334) + '\x01';
          *(undefined1 *)(param_1 + 0x67) = 1;
        }
        bVar2 = *(byte *)((longlong)param_1 + 0x335);
        uVar11 = (ulonglong)bVar2;
        *(undefined4 *)((longlong)&local_a8 + uVar11 * 4 + 4) =
             *(undefined4 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xd4);
        *(undefined1 *)((longlong)&local_80 + uVar11) =
             *(undefined1 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xdc);
        uVar7 = *(undefined1 *)((longlong)param_1 + (ulonglong)bVar3 * 0x24 + 0xe0);
        local_a8 = CONCAT71(local_a8._1_7_,(char)local_a8 + '\x01');
        *(char *)((longlong)param_1 + 0x334) = *(char *)((longlong)param_1 + 0x334) + '\x01';
        *(undefined1 *)((longlong)&local_78 + uVar11 + 2) = uVar7;
        *(undefined4 *)((longlong)&local_70 + uVar11 * 4 + 4) = 2;
        *(byte *)((longlong)param_1 + 0x335) = bVar2 + 1;
        cVar15 = local_b8;
      }
      iVar17 = iVar17 + 1;
      puVar14 = puVar14 + 6;
      param_2 = local_b0;
    } while (iVar17 < *(int *)(param_3 + 0xc0));
  }
  if (*(longlong *)(param_3 + 400) != 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x334);
    *(undefined8 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd0) = 0;
    *(undefined8 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd8) = 0;
    *(undefined8 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe0) = 0;
    *(undefined8 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe8) = 0;
    *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xf0) = 0;
    lVar10 = (**(code **)(**(longlong **)(param_3 + 400) + 0x48))();
    uVar4 = local_70;
    iVar13 = 0x7fffffff;
    iVar16 = 0x7fffffff;
    bVar3 = *(byte *)(lVar10 + 0x74);
    *(byte *)((longlong)param_1 + 0x339) = bVar3;
    *(uint *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd8) = (uint)bVar3;
    *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd4) =
         (&DAT_1464ca1cc)[(longlong)*(int *)(*(longlong *)(param_3 + 400) + 0x3c) * 10];
    cVar15 = *(char *)(param_3 + 0x198);
    iVar17 = 1;
    if (cVar15 == '\0') {
      iVar16 = 2;
    }
    else if (cVar15 == '\x01') {
      iVar16 = 0;
    }
    else if (cVar15 == '\x02') {
      iVar16 = 1;
    }
    *(int *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xdc) = iVar16;
    cVar15 = *(char *)(param_3 + 0x19a);
    if (cVar15 == '\0') {
      iVar12 = 2;
    }
    else if (cVar15 == '\x01') {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar13;
      if (cVar15 == '\x02') {
        iVar12 = iVar17;
      }
    }
    *(int *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe4) = iVar12;
    if (((bVar5) || (iVar16 == 1)) || (iVar12 == 1)) {
      bVar5 = true;
    }
    if (bVar3 == 1) {
      cVar15 = *(char *)(param_3 + 0x199);
      if (((cVar15 == '\0') || (cVar15 == '\x01')) || (cVar15 == '\x02')) {
        iVar13 = 0;
      }
      *(int *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe0) = iVar13;
      cVar15 = *(char *)(param_3 + 0x19b);
      if (((cVar15 == '\0') || (cVar15 == '\x01')) || (iVar17 = 0x7fffffff, cVar15 == '\x02')) {
        iVar17 = 0;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe0) = 1;
    }
    *(int *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe8) = iVar17;
    if ((*(int *)(param_3 + 0x19c) - 1U & 0xffffffef) == 0) {
      uVar9 = 4;
    }
    else if ((*(int *)(param_3 + 0x19c) == 0x21) && ((*(byte *)(param_2 + 0x18d0) & 2) != 0)) {
      uVar9 = 0x3b9c9308;
    }
    else {
      uVar9 = 3;
    }
    *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xec) = uVar9;
    *(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xf0) = uVar9;
    *(uint *)(param_1 + 8) = (uint)*(byte *)((longlong)param_1 + 0x334);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar9;
    local_78._0_2_ =
         CONCAT11(*(undefined1 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe4),
                  *(undefined1 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xdc));
    local_70._4_4_ = SUB84(uVar4,4);
    local_70._0_4_ =
         CONCAT13(*(undefined1 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe8),
                  CONCAT12(*(undefined1 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xe0),
                           (undefined2)local_70));
    local_50 = CONCAT44(uVar9,(undefined4)local_50);
    local_88 = CONCAT44(*(undefined4 *)((longlong)param_1 + (ulonglong)bVar2 * 0x24 + 0xd4),
                        (undefined4)local_88);
    *(byte *)((longlong)param_1 + 0x334) = *(byte *)((longlong)param_1 + 0x334) + 1;
    *(undefined1 *)((longlong)param_1 + 0x337) = 1;
    if (local_b8 == '\0') {
      *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(lVar10 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)(lVar10 + 0x2c);
      *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(lVar10 + 0x58);
    }
  }
  uVar4 = local_a8;
  *(undefined1 *)((longlong)param_1 + 0x33b) = 0;
  local_a8._0_4_ = (uint)*(byte *)((longlong)param_1 + 0x339) << 0x10;
  local_a8._0_1_ = (char)uVar4;
  local_a8._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_1 + 0x33c),(char)local_a8);
  uVar9 = FCrc::MemCrc32(&local_a8,0x28);
  *(undefined4 *)(param_1 + 0x68) = uVar9;
  uVar9 = FCrc::MemCrc32(&local_80,0x38,uVar9);
  *(undefined4 *)((longlong)param_1 + 0x344) = uVar9;
  if (bVar5) {
    uVar7 = *(undefined1 *)((longlong)param_1 + 0x334);
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x33a) = uVar7;
  *(undefined1 *)((longlong)param_1 + 0x354) = 1;
  return param_1;
}



// FUNCTION 141e389d0 FUN_141e389d0 body=1282 status=ok
// SIG undefined FUN_141e389d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141e389d0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar14;
  int iVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
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
  ulonglong local_38;
  ulonglong uVar13;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined2 *)((longlong)param_1 + 0x33d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33f) = 0;
  uVar13 = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((longlong)param_1 + 0x354) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 9,0,0x2ec);
  bVar6 = false;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  bVar8 = *(byte *)(param_2 + 0xb4);
  *(byte *)((longlong)param_1 + 0x339) = bVar8;
  if (*(int *)(param_2 + 0x50) != 0) {
    do {
      iVar15 = *(int *)(param_2 + 0x54 + uVar13 * 4);
      if (iVar15 != 0) {
        bVar8 = *(byte *)((longlong)param_1 + 0x334);
        *(uint *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd8) =
             (uint)*(byte *)((longlong)param_1 + 0x339);
        uVar10 = FUN_141e55c30(iVar15,*(uint *)(param_2 + 0x74 + uVar13 * 4) >> 4 & 0xffffff01);
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd4) = uVar10;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xdc) = 2;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe0) = 1;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe4) = 2;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe8) = 1;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xec) = 2;
        *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xf0) = 2;
        *(uint *)(param_1 + *(byte *)((longlong)param_1 + 0x335)) =
             (uint)*(byte *)((longlong)param_1 + 0x334);
        *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) * 8 + 4)
             = 2;
        if ((1 < *(int *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd8)) &&
           (DAT_1464c9c14 < 2)) {
          uVar11 = (ulonglong)*(byte *)((longlong)param_1 + 0x334);
          puVar1 = (undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xd0);
          uVar5 = puVar1[1];
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xf4) = *puVar1;
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xfc) = uVar5;
          puVar1 = (undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0xe0);
          uVar5 = puVar1[1];
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0x104) = *puVar1;
          *(undefined8 *)((longlong)param_1 + uVar11 * 0x24 + 0x10c) = uVar5;
          *(undefined4 *)((longlong)param_1 + uVar11 * 0x24 + 0x114) =
               *(undefined4 *)((longlong)param_1 + uVar11 * 0x24 + 0xf0);
          *(undefined4 *)
           ((longlong)param_1 + ((ulonglong)*(byte *)((longlong)param_1 + 0x334) + 7) * 0x24) = 1;
          *(undefined4 *)
           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x334) * 0x24 + 0x104) = 0;
          *(uint *)(param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) + 9) =
               *(byte *)((longlong)param_1 + 0x334) + 1;
          *(undefined4 *)
           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x335) * 8 + 0x4c) = 1;
          *(char *)((longlong)param_1 + 0x334) = *(char *)((longlong)param_1 + 0x334) + '\x01';
          *(undefined1 *)(param_1 + 0x67) = 1;
        }
        bVar2 = *(byte *)((longlong)param_1 + 0x335);
        uVar11 = (ulonglong)bVar2;
        *(undefined4 *)((longlong)&local_98 + uVar11 * 4 + 4) =
             *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd4);
        *(undefined1 *)((longlong)&local_70 + uVar11) =
             *(undefined1 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xdc);
        uVar9 = *(undefined1 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe0);
        local_98 = CONCAT71(local_98._1_7_,(char)local_98 + '\x01');
        *(char *)((longlong)param_1 + 0x334) = *(char *)((longlong)param_1 + 0x334) + '\x01';
        *(undefined1 *)((longlong)&local_68 + uVar11 + 2) = uVar9;
        *(undefined4 *)((longlong)&local_60 + uVar11 * 4 + 4) = 2;
        *(byte *)((longlong)param_1 + 0x335) = bVar2 + 1;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < *(uint *)(param_2 + 0x50));
    bVar8 = *(byte *)((longlong)param_1 + 0x339);
  }
  uVar7 = local_60;
  uVar5 = local_98;
  if (*(int *)(param_2 + 0xa4) == 0) goto LAB_141e38e3f;
  bVar8 = *(byte *)((longlong)param_1 + 0x334);
  *(undefined8 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xf0) = 0;
  bVar2 = *(byte *)((longlong)param_1 + 0x339);
  *(uint *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd8) = (uint)bVar2;
  *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd4) =
       (&DAT_1464ca1cc)[(longlong)*(int *)(param_2 + 0xa4) * 10];
  cVar3 = *(char *)(param_2 + 0xac);
  if (cVar3 == '\0') {
    iVar15 = 2;
  }
  else {
    iVar15 = 0;
    if ((cVar3 != '\x01') && (iVar15 = 0x7fffffff, cVar3 == '\x02')) {
      iVar15 = 1;
    }
  }
  *(int *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xdc) = iVar15;
  iVar14 = 0x7fffffff;
  cVar3 = *(char *)(param_2 + 0xae);
  if (cVar3 == '\0') {
    iVar14 = 2;
  }
  else if (cVar3 == '\x01') {
    iVar14 = 0;
  }
  else if (cVar3 == '\x02') {
    iVar14 = 1;
  }
  *(int *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe4) = iVar14;
  if ((iVar15 == 1) || (bVar6 = false, iVar14 == 1)) {
    bVar6 = true;
  }
  if (bVar2 == 1) {
    bVar4 = *(byte *)(param_2 + 0xaf);
    if (bVar4 == 0) {
LAB_141e38d90:
      uVar10 = 0;
    }
    else {
      uVar12 = (uint)bVar2;
      if ((bVar4 == uVar12) || (uVar10 = 0x7fffffff, bVar4 - uVar12 == uVar12)) goto LAB_141e38d90;
    }
    *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe0) = uVar10;
    cVar3 = *(char *)(param_2 + 0xaf);
    if (((cVar3 == '\0') || (cVar3 == '\x01')) || (iVar15 = 0x7fffffff, cVar3 == '\x02')) {
      iVar15 = 0;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe0) = 1;
    iVar15 = 1;
  }
  *(int *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe8) = iVar15;
  *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xec) = 3;
  *(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xf0) = 3;
  *(uint *)(param_1 + 8) = (uint)*(byte *)((longlong)param_1 + 0x334);
  *(undefined4 *)((longlong)param_1 + 0x44) = 3;
  local_68._0_2_ =
       CONCAT11(*(undefined1 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe4),
                *(undefined1 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xdc));
  local_60._4_4_ = SUB84(uVar7,4);
  local_60._0_4_ =
       CONCAT13(*(undefined1 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe8),
                CONCAT12(*(undefined1 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xe0),
                         (undefined2)local_60));
  local_40 = CONCAT44(3,(undefined4)local_40);
  local_78 = CONCAT44(*(undefined4 *)((longlong)param_1 + (ulonglong)bVar8 * 0x24 + 0xd4),
                      (undefined4)local_78);
  bVar8 = *(byte *)((longlong)param_1 + 0x339);
  *(byte *)((longlong)param_1 + 0x334) = *(byte *)((longlong)param_1 + 0x334) + 1;
  *(undefined1 *)((longlong)param_1 + 0x337) = 1;
LAB_141e38e3f:
  *(undefined1 *)((longlong)param_1 + 0x33b) = 0;
  local_98._0_4_ = (uint)bVar8 << 0x10;
  local_98._0_1_ = (char)uVar5;
  local_98._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_1 + 0x33c),(char)local_98);
  uVar10 = FCrc::MemCrc32(&local_98,0x28);
  *(undefined4 *)(param_1 + 0x68) = uVar10;
  uVar10 = FCrc::MemCrc32(&local_70,0x38,uVar10);
  *(undefined4 *)((longlong)param_1 + 0x344) = uVar10;
  if (bVar6) {
    uVar9 = *(undefined1 *)((longlong)param_1 + 0x334);
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x33a) = uVar9;
  *(undefined1 *)((longlong)param_1 + 0x354) = 1;
  return param_1;
}



// FUNCTION 141e38ee0 FVulkanRingBuffer body=117 status=ok
// SIG undefined FVulkanRingBuffer(void)

longlong *
FVulkanRingBuffer::FVulkanRingBuffer
          (longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = FUN_141e22d90(param_2 + 0x248,param_3 & 0xffffffff,param_4,param_5,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",
                        0x66e);
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x24);
  param_1[2] = param_3;
  return param_1;
}



// FUNCTION 141e38f60 FVulkanShader body=283 status=ok
// SIG undefined FVulkanShader(void)

undefined8 *
FVulkanShader::FVulkanShader
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea43d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)((longlong)param_1 + 0xa6) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x144) = param_3;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_2;
  return param_1;
}



// FUNCTION 141e39080 FUN_141e39080 body=305 status=ok
// SIG undefined FUN_141e39080(void)

undefined8 *
FUN_141e39080(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  LARGE_INTEGER local_res8;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  QueryPerformanceCounter(&local_res8);
  param_1[10] = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
  FUN_141e5c460(param_4,param_1[0xb],param_1 + 3);
  FUN_141e51960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return param_1;
}



// FUNCTION 141e391c0 ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator> body=104 status=ok
// SIG undefined ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>(void)

void TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>::
     ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e39230 ~TArray<FVulkanDescriptorSetWriter,FDefaultAllocator> body=142 status=ok
// SIG undefined ~TArray<FVulkanDescriptorSetWriter,FDefaultAllocator>(void)

void TArray<FVulkanDescriptorSetWriter,FDefaultAllocator>::
     ~TArray<FVulkanDescriptorSetWriter,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    lVar2 = lVar2 + 0x20;
    do {
      plVar1 = *(longlong **)(lVar2 + 0x28);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x10);
      }
      TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
      ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(lVar2);
      lVar2 = lVar2 + 0x58;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e392c0 FUN_141e392c0 body=204 status=ok
// SIG undefined FUN_141e392c0(void)

void FUN_141e392c0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    *puVar1 = &PTR_FUN_144ea4358;
    FUN_141e66e10(puVar1 + 3);
    OGLInputStream::~OGLInputStream(puVar1 + 3);
    *puVar1 = &PTR_FUN_144da0c50;
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e39390 ~TRefCountPtr<FVulkanGfxPipeline> body=175 status=ok
// SIG undefined ~TRefCountPtr<FVulkanGfxPipeline>(void)

void TRefCountPtr<FVulkanGfxPipeline>::~TRefCountPtr<FVulkanGfxPipeline>(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x20);
    LOCK();
    piVar1 = (int *)(lVar5 + 0x28);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(lVar5 + 0x30) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x000141e39436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar6)(puVar6,1);
        return;
      }
      LOCK();
      bVar7 = *(int *)(lVar5 + 0x2c) == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x2c) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar5 + 8) = puVar6;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141e39440 ~TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=401 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_141e39501;
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
LAB_141e39501:
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
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1 + 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 141e395e0 ~TSparseArray<TSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=223 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_38 + 0x10 + (longlong)local_1c * 0x28);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x10);
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



// FUNCTION 141e396c0 ~TSparseArray<TSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=222 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar1 = *(longlong **)((longlong)local_1c * 0x68 + *local_38 + 0x10);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x10);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 141e397a0 ~FDescriptorSetRemappingInfo body=108 status=ok
// SIG undefined ~FDescriptorSetRemappingInfo(void)

void FDescriptorSetRemappingInfo::~FDescriptorSetRemappingInfo(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  TStaticArray<FDescriptorSetRemappingInfo::FStageInfo,5,8>::TArrayStorage::~TArrayStorage
            (param_1 + 2);
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141e39810 ~FGenerateMipsInfo body=113 status=ok
// SIG undefined ~FGenerateMipsInfo(void)

void FTransitionAndLayoutManager::FGenerateMipsInfo::~FGenerateMipsInfo(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = 8;
  puVar3 = (undefined8 *)(param_1 + 0xd0);
  do {
    iVar4 = *(int *)(puVar3 + -2);
    puVar3 = puVar3 + -3;
    plVar1 = (longlong *)*puVar3;
    lVar2 = lVar2 + -1;
    if (iVar4 != 0) {
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar1 = (longlong *)*puVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 141e39890 ~FPackedUniformBuffers body=110 status=ok
// SIG undefined ~FPackedUniformBuffers(void)

void FPackedUniformBuffers::~FPackedUniformBuffers(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141e39900 ~FPackageMapAckState body=127 status=ok
// SIG undefined ~FPackageMapAckState(void)

void FPackageMapAckState::~FPackageMapAckState(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 141e39980 FUN_141e39980 body=462 status=ok
// SIG undefined FUN_141e39980(void)

void FUN_141e39980(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_144ea4cd0;
  param_1[1] = &PTR_StartProfileThreadUsage_144d85030;
  FUN_141e66e10(param_1[0xcc]);
  puVar4 = (undefined8 *)param_1[0xcc];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar1 = param_1[0x5b];
  param_1[0xcc] = 0;
  if (lVar1 != 0) {
    FVulkanCommandBufferManager::~FVulkanCommandBufferManager(lVar1);
    FMemory::operator_delete(lVar1,0x80);
  }
  puVar4 = param_1 + 0x5c;
  if (param_1[0x30] == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  param_1[0x5b] = 0;
  FTransitionAndLayoutManager::Destroy(param_1 + 0x5c,param_1[0x31],puVar4);
  lVar1 = param_1[0x34];
  if (lVar1 != 0) {
    FVulkanUniformBufferUploader::~FVulkanUniformBufferUploader(lVar1);
    FMemory::operator_delete(lVar1,0x10);
  }
  lVar1 = param_1[0x9f];
  if (lVar1 != 0) {
    FVulkanPendingGfxState::~FVulkanPendingGfxState(lVar1);
    FMemory::operator_delete(lVar1,0x2b0);
  }
  lVar1 = param_1[0xa0];
  if (lVar1 != 0) {
    FVulkanPendingComputeState::~FVulkanPendingComputeState(lVar1);
    FMemory::operator_delete(lVar1,0x80);
  }
  VulkanRHI::FTempFrameAllocationBuffer::Destroy(param_1 + 0x3f);
  FUN_141e3a0d0(param_1 + 0xa2);
  if (param_1[0x9d] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x97));
  FTransitionAndLayoutManager::FGenerateMipsInfo::~FGenerateMipsInfo(param_1 + 0x7a);
  FPackageMapAckState::~FPackageMapAckState(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5a);
  plVar3 = (longlong *)param_1[0x59];
  if (iVar2 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)param_1[0x59];
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  VulkanRHI::FTempFrameAllocationBuffer::~FTempFrameAllocationBuffer(param_1 + 0x3f);
  *param_1 = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[1] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 2);
  return;
}



// FUNCTION 141e39b50 ~FVulkanCommonPipelineDescriptorState body=185 status=ok
// SIG undefined ~FVulkanCommonPipelineDescriptorState(void)

void FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState
               (undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x17];
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cb8;
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x10);
  }
  TArray<FVulkanDescriptorSetWriter,FDefaultAllocator>::
  ~TArray<FVulkanDescriptorSetWriter,FDefaultAllocator>(param_1 + 0x13);
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
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
  return;
}



// FUNCTION 141e39c10 ~FVulkanDescriptorPoolSetContainer body=714 status=ok
// SIG undefined ~FVulkanDescriptorPoolSetContainer(void)

void FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar11 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar7) goto LAB_141e39cdc;
      uVar4 = puVar13[lVar11 + 1];
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
LAB_141e39cdc:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar10 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141e39da2;
      uVar10 = puVar13[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar12 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141e39da2:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar11 = *(longlong *)(*plVar1 + 8 + (longlong)(int)uStack_5c * 0x18);
    if (lVar11 != 0) {
      plVar8 = *(longlong **)(lVar11 + 0x18);
      while (plVar8 != (longlong *)0x0) {
        plVar5 = (longlong *)*plVar8;
        plVar6 = (longlong *)plVar8[1];
        if (plVar5 != (longlong *)0x0) {
          if (plVar5[4] != 0) {
            (*DAT_146ab0138)(*(undefined8 *)(*plVar5 + 8),plVar5[4],0);
            plVar5[4] = 0;
          }
          FMemory::operator_delete(plVar5,0x28);
        }
        FMemory::operator_delete(plVar8,0x10);
        plVar8 = plVar6;
      }
      *(undefined4 *)(lVar11 + 0x10) = 0;
      FMemory::operator_delete(lVar11,0x28);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(plVar1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  return;
}



// FUNCTION 141e39ee0 ~FVulkanDescriptorPoolsManager body=203 status=ok
// SIG undefined ~FVulkanDescriptorPoolsManager(void)

void FVulkanDescriptorPoolsManager::~FVulkanDescriptorPoolsManager(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  uVar2 = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x40) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(lVar1);
        FMemory::operator_delete(lVar1,0x60);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x44)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x000141e39fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 141e39fb0 ~FVulkanDescriptorSetCache body=101 status=ok
// SIG undefined ~FVulkanDescriptorSetCache(void)

void FVulkanDescriptorSetCache::~FVulkanDescriptorSetCache(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>::operator()
            (param_1 + 0x18,*(undefined8 *)(param_1 + 0x18));
  iVar2 = *(int *)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (iVar2 != 0) {
    do {
      TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>::operator()(puVar1,*puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 141e3a020 ~FVulkanDescriptorSetsLayout body=167 status=ok
// SIG undefined ~FVulkanDescriptorSetsLayout(void)

void FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 400) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x194)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x188,0);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FDescriptorSetRemappingInfo::~FDescriptorSetRemappingInfo(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141e3a0d0 FUN_141e3a0d0 body=99 status=ok
// SIG undefined FUN_141e3a0d0(void)

void FUN_141e3a0d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf0);
  FUN_141e392c0(param_1 + 200);
  FUN_141a24df0(param_1);
  return;
}



// FUNCTION 141e3a140 ~FVulkanPendingComputeState body=445 status=ok
// SIG undefined ~FVulkanPendingComputeState(void)

void FVulkanPendingComputeState::~FVulkanPendingComputeState(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
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
  
  plVar1 = (longlong *)(param_1 + 0x28);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x50);
  puStack_28 = (uint *)(param_1 + 0x38);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar7 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar7 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar7 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar7;
      if (bVar4) goto LAB_141e3a1fd;
      uVar7 = puVar8[lVar6 + 1];
    }
    uStack_74 = -uVar7 & uVar7;
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
LAB_141e3a1fd:
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
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x50);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      puVar3 = *(undefined8 **)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e3a300 ~FVulkanPendingGfxState body=542 status=ok
// SIG undefined ~FVulkanPendingGfxState(void)

void FVulkanPendingGfxState::~FVulkanPendingGfxState(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
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
  
  plVar1 = (longlong *)(param_1 + 0x50);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x78);
  puVar2 = (uint *)(param_1 + 0x60);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_141e3a3cc;
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
LAB_141e3a3cc:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x78);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
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
    puVar11 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141e3a492;
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
LAB_141e3a492:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    puVar5 = *(undefined8 **)(*plVar1 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  return;
}



// FUNCTION 141e3a520 FUN_141e3a520 body=2000 status=ok
// SIG undefined FUN_141e3a520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e3a520(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  uVar9 = 0;
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    lVar7 = param_1[6];
    if (lVar7 != 0) {
      uVar8 = uVar9;
      uVar14 = uVar9;
      iVar5 = DAT_1464c0cc0;
      if (0 < DAT_1464c0cc0) {
        do {
          plVar13 = (longlong *)(DAT_1464c0cb8 + uVar14);
          if ((((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
             && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8),
                iVar5 = DAT_1464c0cc0, *plVar6 == lVar7)) {
            if (((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar6 + 0x28))(plVar6,0);
              if (*plVar13 != 0) {
                lVar7 = FMemory::Realloc(*plVar13,0,0);
                *plVar13 = lVar7;
              }
              *(undefined4 *)(plVar13 + 1) = 0;
              iVar5 = DAT_1464c0cc0;
            }
            break;
          }
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar12;
          uVar14 = uVar14 + 0x10;
        } while ((int)uVar12 < iVar5);
      }
      if (DAT_1464c0ccc < 1) {
        uVar8 = uVar9;
        uVar14 = uVar9;
        iVar10 = iVar5;
        if (0 < iVar5) {
          do {
            if (((*(int *)(uVar14 + 8 + DAT_1464c0cb8) == 0) ||
                (*(longlong **)(uVar14 + DAT_1464c0cb8) == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)(uVar14 + DAT_1464c0cb8) + 0x10))(),
               cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464c0cb8,uVar8,1,1);
            }
            else {
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar14 = uVar14 + 0x10;
            }
            iVar10 = DAT_1464c0cc0;
          } while ((int)uVar8 < DAT_1464c0cc0);
        }
        _DAT_1464c0cc8 = iVar10 * 2;
        if (iVar10 * 2 < 3) {
          _DAT_1464c0cc8 = 2;
        }
        if ((_DAT_1464c0cc8 < iVar5) && (DAT_1464c0cc4 != iVar10)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464c0cb8);
        }
      }
    }
    lVar7 = param_1[7];
    if (lVar7 != 0) {
      uVar8 = uVar9;
      uVar14 = uVar9;
      iVar5 = DAT_1464c0cf0;
      if (0 < DAT_1464c0cf0) {
        do {
          plVar13 = (longlong *)(DAT_1464c0ce8 + uVar14);
          if ((((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
             && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8),
                iVar5 = DAT_1464c0cf0, *plVar6 == lVar7)) {
            if (((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar6 + 0x28))(plVar6,0);
              if (*plVar13 != 0) {
                lVar7 = FMemory::Realloc(*plVar13,0,0);
                *plVar13 = lVar7;
              }
              *(undefined4 *)(plVar13 + 1) = 0;
              iVar5 = DAT_1464c0cf0;
            }
            break;
          }
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar12;
          uVar14 = uVar14 + 0x10;
        } while ((int)uVar12 < iVar5);
      }
      if (DAT_1464c0cfc < 1) {
        uVar8 = uVar9;
        uVar14 = uVar9;
        iVar10 = iVar5;
        if (0 < iVar5) {
          do {
            if (((*(int *)(uVar14 + 8 + DAT_1464c0ce8) == 0) ||
                (*(longlong **)(uVar14 + DAT_1464c0ce8) == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)(uVar14 + DAT_1464c0ce8) + 0x10))(),
               cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464c0ce8,uVar8,1,1);
            }
            else {
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar14 = uVar14 + 0x10;
            }
            iVar10 = DAT_1464c0cf0;
          } while ((int)uVar8 < DAT_1464c0cf0);
        }
        _DAT_1464c0cf8 = iVar10 * 2;
        if (iVar10 * 2 < 3) {
          _DAT_1464c0cf8 = 2;
        }
        if ((_DAT_1464c0cf8 < iVar5) && (DAT_1464c0cf4 != iVar10)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464c0ce8);
        }
      }
    }
  }
  FUN_141e46420(param_1);
  plVar13 = param_1 + 0x46;
  uStack_94 = 1;
  uVar12 = *(uint *)(param_1 + 0x4b);
  puVar1 = (uint *)(param_1 + 0x48);
  local_98 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  if (uVar12 != 0) {
    puVar16 = (uint *)param_1[0x4a];
    if ((uint *)param_1[0x4a] == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar2 = *puVar16;
    uVar8 = uVar9;
    uVar14 = uVar9;
    while (uVar2 == 0) {
      iVar5 = (int)uVar8;
      uStack_80 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_80;
      local_98 = iVar5 + 1;
      uVar8 = (ulonglong)local_98;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_141e3a85d;
      uVar2 = puVar16[(longlong)iVar5 + 1];
    }
    uStack_94 = -uVar2 & uVar2;
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
    uStack_84 = (uStack_80 - iVar5) + 0x1f;
    if ((int)uVar12 < (int)uStack_84) {
LAB_141e3a85d:
      uStack_84 = uVar12;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x4b);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,uStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar15 = uVar2 & 0xffffffe0;
  uStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar13;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar2;
  if (uVar2 != uVar12) {
    puVar16 = (uint *)param_1[0x4a];
    if ((uint *)param_1[0x4a] == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar11 = puVar16[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar5 = (int)uVar2 >> 5;
    while (uVar11 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_141e3a933;
      uVar11 = puVar16[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar5 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar15 - iVar5) + 0x1f;
    if ((int)uVar12 < (int)uStack_84) {
LAB_141e3a933:
      uStack_84 = uVar12;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    puVar3 = *(undefined8 **)((longlong)(int)uStack_5c * 400 + 0x180 + *plVar13);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  plVar6 = param_1 + 0x50;
  uStack_94 = 1;
  uVar12 = *(uint *)(param_1 + 0x55);
  puVar1 = (uint *)(param_1 + 0x52);
  local_98 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  if (uVar12 != 0) {
    puVar16 = (uint *)param_1[0x54];
    if ((uint *)param_1[0x54] == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar2 = *puVar16;
    uVar8 = uVar9;
    while (uVar2 == 0) {
      iVar5 = (int)uVar9;
      uStack_80 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uStack_80;
      local_98 = iVar5 + 1;
      uVar9 = (ulonglong)local_98;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_141e3aa3d;
      uVar2 = puVar16[(longlong)iVar5 + 1];
    }
    uStack_94 = -uVar2 & uVar2;
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
    uStack_84 = (uStack_80 - iVar5) + 0x1f;
    if ((int)uVar12 < (int)uStack_84) {
LAB_141e3aa3d:
      uStack_84 = uVar12;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x55);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,uStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar15 = uVar2 & 0xffffffe0;
  uStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar6;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar2;
  if (uVar2 != uVar12) {
    puVar16 = (uint *)param_1[0x54];
    if ((uint *)param_1[0x54] == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar11 = puVar16[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar5 = (int)uVar2 >> 5;
    while (uVar11 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_141e3ab12;
      uVar11 = puVar16[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar5 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar15 - iVar5) + 0x1f;
    if ((int)uVar12 < (int)uStack_84) {
LAB_141e3ab12:
      uStack_84 = uVar12;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (*DAT_146ab0128)(*(undefined8 *)(*param_1 + 8),
                     *(undefined8 *)(*plVar6 + 0x18 + (longlong)(int)uStack_5c * 0x30));
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  (*DAT_146ab00d0)(*(undefined8 *)(*param_1 + 8),param_1[0x31],0);
  param_1[0x31] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5a));
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (plVar6);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(plVar13,0);
  if (param_1[0x4a] != 0) {
    FMemory::Free();
  }
  if (*plVar13 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1c);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e3acf0 ~FVulkanQueryPool body=96 status=ok
// SIG undefined ~FVulkanQueryPool(void)

void FVulkanQueryPool::~FVulkanQueryPool(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4438;
  (*DAT_146ab0060)(*(undefined8 *)(param_1[1] + 8),param_1[2],0);
  (*DAT_146ab0038)(*(undefined8 *)(param_1[1] + 8),param_1[3],0);
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e3ad50 FUN_141e3ad50 body=11 status=ok
// SIG undefined FUN_141e3ad50(void)

void FUN_141e3ad50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141e3ad54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 141e3ad60 ~FVulkanRingBuffer body=21 status=ok
// SIG undefined ~FVulkanRingBuffer(void)

void FVulkanRingBuffer::~FVulkanRingBuffer(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e3ad71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 141e3ad80 ~FVulkanShader body=195 status=ok
// SIG undefined ~FVulkanShader(void)

void FVulkanShader::~FVulkanShader(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ea43d0;
  FUN_141e4af00();
  lVar1 = param_1[0x2b];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x470));
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  ::Remove(lVar1 + 0x478 + (longlong)*(int *)((longlong)param_1 + 0x144) * 0x50,param_1[3]);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x470));
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1e);
  FVulkanShaderHeader::~FVulkanShaderHeader(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141e3ae50 ~FVulkanShaderFactory body=133 status=ok
// SIG undefined ~FVulkanShaderFactory(void)

void FVulkanShaderFactory::~FVulkanShaderFactory(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = param_1 + 8; lVar1 != param_1 + 0x1e8; lVar1 = lVar1 + 0x50) {
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Empty(lVar1,0);
  }
  lVar2 = 6;
  lVar1 = param_1 + 0x1e8;
  do {
    lVar2 = lVar2 + -1;
    *(undefined4 *)(lVar1 + -8) = 0;
    if (*(longlong *)(lVar1 + -0x10) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + -0x50);
    lVar1 = lVar1 + -0x50;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 141e3aee0 ~FVulkanShaderHeader body=161 status=ok
// SIG undefined ~FVulkanShaderHeader(void)

void FVulkanShaderHeader::~FVulkanShaderHeader(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x10);
  TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>::
  ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>(param_1);
  return;
}



// FUNCTION 141e3af90 ~FVulkanVertexInputStateInfo body=98 status=ok
// SIG undefined ~FVulkanVertexInputStateInfo(void)

void FVulkanVertexInputStateInfo::~FVulkanVertexInputStateInfo(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  return;
}



// FUNCTION 141e3b000 ~TArrayStorage body=96 status=ok
// SIG undefined ~TArrayStorage(void)

void TStaticArray<FDescriptorSetRemappingInfo::FStageInfo,5,8>::TArrayStorage::~TArrayStorage
               (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 5;
  plVar1 = (longlong *)(param_1 + 0x118);
  do {
    lVar2 = lVar2 + -1;
    if (plVar1[-3] != 0) {
      FMemory::Free();
    }
    if (plVar1[-5] != 0) {
      FMemory::Free();
    }
    if (plVar1[-7] != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + -7;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 141e3b060 operator= body=349 status=ok
// SIG undefined operator=(void)

longlong TStaticArray<FDescriptorSetRemappingInfo::FStageInfo,5,8>::TArrayStorage::operator=
                   (longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  param_2 = param_2 - param_1;
  piVar5 = (int *)(param_1 + 0x1c);
  lVar6 = 5;
  do {
    piVar4 = (int *)(param_2 + -0x1c + (longlong)piVar5);
    piVar1 = piVar5 + -7;
    if (piVar1 != piVar4) {
      iVar2 = *(int *)(param_2 + -0x14 + (longlong)piVar5);
      pvVar3 = *(void **)piVar4;
      piVar5[-5] = iVar2;
      if ((iVar2 == 0) && (piVar5[-4] == 0)) {
        piVar5[-4] = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 2);
      }
    }
    piVar4 = (int *)(param_2 + -0xc + (longlong)piVar5);
    piVar1 = piVar5 + -3;
    if (piVar1 != piVar4) {
      iVar2 = *(int *)((longlong)piVar5 + param_2 + -4);
      pvVar3 = *(void **)piVar4;
      piVar5[-1] = iVar2;
      if ((iVar2 == 0) && (*piVar5 == 0)) {
        *piVar5 = 0;
      }
      else {
        TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeForCopy
                  (piVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 * 6);
      }
    }
    piVar4 = (int *)(param_2 + 4 + (longlong)piVar5);
    piVar1 = piVar5 + 1;
    if (piVar1 != piVar4) {
      iVar2 = *(int *)(param_2 + 0xc + (longlong)piVar5);
      pvVar3 = *(void **)piVar4;
      piVar5[3] = iVar2;
      if ((iVar2 == 0) && (piVar5[4] == 0)) {
        piVar5[4] = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 * 2);
      }
    }
    *(undefined2 *)(piVar5 + 5) = *(undefined2 *)(param_2 + 0x14 + (longlong)piVar5);
    *(undefined2 *)((longlong)piVar5 + 0x16) = *(undefined2 *)(param_2 + 0x16 + (longlong)piVar5);
    piVar5 = piVar5 + 0xe;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 141e3b1c0 FUN_141e3b1c0 body=586 status=ok
// SIG undefined FUN_141e3b1c0(void)

longlong * FUN_141e3b1c0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 5,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 6,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 7,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 7) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 9,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 9) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,8);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,8);
    }
  }
  else {
    *(undefined8 *)(param_2 + 4) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar3 = *(undefined8 **)param_1[1];
  if (puVar3 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *(undefined8 *)(param_2 + 6) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,8);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 6,8);
  }
  return param_1;
}



// FUNCTION 141e3b410 FUN_141e3b410 body=188 status=ok
// SIG undefined FUN_141e3b410(void)

longlong * FUN_141e3b410(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined8 **)param_1[1];
  if (puVar2 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *(undefined8 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,8);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 2,8);
  }
  return param_1;
}



// FUNCTION 141e3b4d0 FUN_141e3b4d0 body=404 status=ok
// SIG undefined FUN_141e3b4d0(void)

longlong * FUN_141e3b4d0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*param_1 + 8))();
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 1),1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,1);
  }
  else {
    *(undefined1 *)(param_2 + 3) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,1);
  }
  else {
    *(undefined1 *)(param_2 + 4) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,1);
  }
  else {
    *(undefined1 *)(param_2 + 5) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,1);
  }
  else {
    *(undefined1 *)(param_2 + 6) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)(param_2 + 7) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 7),1);
  return param_1;
}



// FUNCTION 141e3b670 FUN_141e3b670 body=1013 status=ok
// SIG undefined FUN_141e3b670(void)

longlong * FUN_141e3b670(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 1);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 2);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 4);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 3);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,1);
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,1);
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,1);
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,1);
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x18,1);
  }
  else {
    param_2[0x18] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x19,1);
  }
  else {
    param_2[0x19] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1a,1);
  }
  else {
    param_2[0x1a] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1b,1);
  }
  else {
    param_2[0x1b] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x1c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x20,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x20,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x24) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x24,4);
  }
  return param_1;
}



// FUNCTION 141e3ba70 FUN_141e3ba70 body=213 status=ok
// SIG undefined FUN_141e3ba70(void)

longlong * FUN_141e3ba70(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)((longlong)param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)((longlong)param_2 + 5),1);
  return param_1;
}



// FUNCTION 141e3bb50 FUN_141e3bb50 body=715 status=ok
// SIG undefined FUN_141e3bb50(void)

longlong * FUN_141e3bb50(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 6,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,(longlong)param_2 + 6,2);
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_141e3ccb0(param_1,param_2 + 4);
  FUN_141e3e050(param_1,param_2 + 8);
  FUN_141e3ded0(param_1,param_2 + 0xc);
  FUN_141e3dd50(param_1,param_2 + 0x10);
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x14) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x51,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x51) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x15,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x15,4);
    }
  }
  else {
    param_2[0x15] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x16,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x16,4);
    }
  }
  else {
    param_2[0x16] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_141e3b670(param_1,param_2 + 0x17);
  uVar4 = 0;
  do {
    FUN_141661e90(param_1,param_2 + (longlong)(int)uVar4 * 5 + 0x22);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  FUN_141e3c2a0(param_1,param_2 + 0x3c);
  return param_1;
}



// FUNCTION 141e3be20 FUN_141e3be20 body=328 status=ok
// SIG undefined FUN_141e3be20(void)

longlong * FUN_141e3be20(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,2);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,1);
  }
  else {
    *(undefined1 *)(param_2 + 3) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14158ce90(param_1,param_2 + 4);
  return param_1;
}



// FUNCTION 141e3bf70 FUN_141e3bf70 body=164 status=ok
// SIG undefined FUN_141e3bf70(void)

longlong * FUN_141e3bf70(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  return param_1;
}



// FUNCTION 141e3c020 FUN_141e3c020 body=215 status=ok
// SIG undefined FUN_141e3c020(void)

longlong * FUN_141e3c020(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)((longlong)param_2 + 3),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 3) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14158ce90(param_1,param_2 + 4);
  return param_1;
}



// FUNCTION 141e3c100 FUN_141e3c100 body=404 status=ok
// SIG undefined FUN_141e3c100(void)

longlong * FUN_141e3c100(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 6,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 6) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 3,4);
  }
  return param_1;
}



// FUNCTION 141e3c2a0 FUN_141e3c2a0 body=658 status=ok
// SIG undefined FUN_141e3c2a0(void)

longlong * FUN_141e3c2a0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0x40),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x41,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x41) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x44,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x44) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_141e3cb30(param_1,param_2);
  FUN_141e3cb30(param_1,param_2 + 0x10);
  FUN_141e3b410(param_1,param_2 + 0x20);
  FUN_141e3c9b0(param_1,param_2 + 0x30);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0x42),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x42) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x43,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x43) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x48,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x48,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x48) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x4c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x4c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x50,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x50,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x50) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x54) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x54,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x54,4);
  }
  return param_1;
}



// FUNCTION 141e3c540 FUN_141e3c540 body=261 status=ok
// SIG undefined FUN_141e3c540(void)

longlong * FUN_141e3c540(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)((longlong)param_2 + 6),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 6) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_141e3d800(param_1,param_2 + 2);
  FUN_14158ce90(param_1,param_2 + 6);
  return param_1;
}



// FUNCTION 141e3c650 FUN_141e3c650 body=280 status=ok
// SIG undefined FUN_141e3c650(void)

longlong * FUN_141e3c650(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *(undefined2 *)((longlong)param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 6,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,(longlong)param_2 + 6,2);
  }
  return param_1;
}



// FUNCTION 141e3c770 FUN_141e3c770 body=568 status=ok
// SIG undefined FUN_141e3c770(void)

longlong * FUN_141e3c770(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_res8 [2];
  
  FUN_141e3db60();
  FUN_141e3cfb0(param_1,param_2 + 0x10);
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 0x28),(longlong)*(int *)(param_2 + 0x2c));
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x28);
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (-1 < (char)*(byte *)(param_1 + 5)) {
    if ((-1 < local_res8[0]) &&
       (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
      *(int *)(param_2 + 0x28) = local_res8[0];
      if (((local_res8[0] != 0) || (iVar3 = 0, *(int *)(param_2 + 0x2c) != 0)) &&
         (iVar3 = local_res8[0], (*(byte *)(param_1 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_2 + 0x20,local_res8[0],*(undefined4 *)(param_2 + 0x2c));
        iVar3 = *(int *)(param_2 + 0x28);
      }
      (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_2 + 0x20),(longlong)iVar3);
      goto LAB_141e3c860;
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
LAB_141e3c860:
  FUN_141e3d310(param_1,param_2 + 0x30);
  FUN_141e3d4e0(param_1,param_2 + 0x40);
  FUN_141e3d180(param_1,param_2 + 0x50);
  FUN_1408bda20(param_1,param_2 + 0x60);
  FUN_141e3d9d0(param_1,param_2 + 0x70);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x80,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x80,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x80) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x84);
  FUN_141661e90(param_1,param_2 + 0x88);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x9c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x9c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x9c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_141e3d670(param_1,param_2 + 0xa0);
  FUN_141e3d670(param_1,param_2 + 0xb0);
  FUN_14158ce90(param_1,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 141e3c9b0 FUN_141e3c9b0 body=375 status=ok
// SIG undefined FUN_141e3c9b0(void)

longlong * FUN_141e3c9b0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x80000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3b1c0(param_1,(longlong)iVar4 * 0x20 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar2);
        }
        FUN_141e3b1c0(param_1,(longlong)iVar2 * 0x20 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3cb30 FUN_141e3cb30 body=375 status=ok
// SIG undefined FUN_141e3cb30(void)

longlong * FUN_141e3cb30(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  iVar4 = 0;
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
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3b410(param_1,(longlong)iVar4 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141e3b410(param_1,(longlong)iVar2 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3ccb0 FUN_141e3ccb0 body=373 status=ok
// SIG undefined FUN_141e3ccb0(void)

longlong * FUN_141e3ccb0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3b4d0(param_1,*param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141e3b4d0(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3ce30 FUN_141e3ce30 body=373 status=ok
// SIG undefined FUN_141e3ce30(void)

longlong * FUN_141e3ce30(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3ba70(param_1,*param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141e3ba70(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3cfb0 FUN_141e3cfb0 body=457 status=ok
// SIG undefined FUN_141e3cfb0(void)

longlong * FUN_141e3cfb0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  ulonglong uVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
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
  iVar3 = local_res8[0];
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_141e3be20(param_1,*param_2 + (longlong)(int)uVar6 * 0x18);
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar5 = (int)param_2[1];
    if (iVar5 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,iVar3);
    }
    uVar9 = uVar6;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        uVar1 = *param_2 + (longlong)iVar3 * 0x18;
        uVar4 = uVar6;
        if (uVar1 != 0) {
          *(undefined2 *)(uVar1 + 6) = 0;
          *(undefined8 *)(uVar1 + 8) = 0;
          *(undefined8 *)(uVar1 + 0x10) = 0;
          uVar4 = uVar1;
        }
        FUN_141e3be20(param_1,uVar4);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 141e3d180 FUN_141e3d180 body=389 status=ok
// SIG undefined FUN_141e3d180(void)

longlong * FUN_141e3d180(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x400000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3bf70(param_1,*param_2 + (longlong)(int)uVar6 * 4);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  uVar8 = uVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    uVar1 = *param_2 + (longlong)iVar3 * 4;
    uVar5 = uVar6;
    if (uVar1 != 0) {
      *(undefined1 *)(uVar1 + 3) = 0;
      uVar5 = uVar1;
    }
    FUN_141e3bf70(param_1,uVar5);
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141e3d310 FUN_141e3d310 body=457 status=ok
// SIG undefined FUN_141e3d310(void)

longlong * FUN_141e3d310(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  ulonglong uVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
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
  iVar3 = local_res8[0];
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_141e3c020(param_1,*param_2 + (longlong)(int)uVar6 * 0x18);
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar5 = (int)param_2[1];
    if (iVar5 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,iVar3);
    }
    uVar9 = uVar6;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        uVar1 = *param_2 + (longlong)iVar3 * 0x18;
        uVar4 = uVar6;
        if (uVar1 != 0) {
          *(undefined8 *)(uVar1 + 8) = 0;
          *(undefined8 *)(uVar1 + 0x10) = 0;
          uVar4 = uVar1;
        }
        FUN_141e3c020(param_1,uVar4);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 141e3d4e0 FUN_141e3d4e0 body=389 status=ok
// SIG undefined FUN_141e3d4e0(void)

longlong * FUN_141e3d4e0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  uVar6 = 0;
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
        FUN_141e3c100(param_1,(longlong)(int)uVar6 * 0x10 + *param_2);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  uVar8 = uVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    uVar4 = (longlong)iVar2 * 0x10 + *param_2;
    uVar5 = uVar6;
    if (uVar4 != 0) {
      *(undefined1 *)(uVar4 + 7) = 0;
      uVar5 = uVar4;
    }
    FUN_141e3c100(param_1,uVar5);
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141e3d670 FUN_141e3d670 body=389 status=ok
// SIG undefined FUN_141e3d670(void)

longlong * FUN_141e3d670(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_140d66f10(param_1,*param_2 + (longlong)(int)puVar6 * 8);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 8);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0xffffffffffffffff;
      puVar5 = puVar1;
    }
    FUN_140d66f10(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141e3d800 FUN_141e3d800 body=457 status=ok
// SIG undefined FUN_141e3d800(void)

longlong * FUN_141e3d800(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  ulonglong uVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
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
  iVar3 = local_res8[0];
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_141e3be20(param_1,*param_2 + (longlong)(int)uVar6 * 0x18);
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar5 = (int)param_2[1];
    if (iVar5 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,iVar3);
    }
    uVar9 = uVar6;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        uVar1 = *param_2 + (longlong)iVar3 * 0x18;
        uVar4 = uVar6;
        if (uVar1 != 0) {
          *(undefined1 *)(uVar1 + 7) = 0;
          *(undefined8 *)(uVar1 + 8) = 0;
          *(undefined8 *)(uVar1 + 0x10) = 0;
          uVar4 = uVar1;
        }
        FUN_141e3be20(param_1,uVar4);
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 141e3d9d0 FUN_141e3d9d0 body=393 status=ok
// SIG undefined FUN_141e3d9d0(void)

longlong * FUN_141e3d9d0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 10,(longlong)*(int *)((longlong)param_2 + 0xc) * 10
            );
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x199999 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3e200(param_1,*param_2 + (longlong)iVar4 * 10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<CrossCompiler::FUniformBufferCopyInfo,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<CrossCompiler::FUniformBufferCopyInfo,FDefaultAllocator>::ResizeGrow(param_2,iVar2)
          ;
        }
        FUN_141e3e200(param_1,*param_2 + (longlong)iVar2 * 10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3db60 FUN_141e3db60 body=489 status=ok
// SIG undefined FUN_141e3db60(void)

longlong * FUN_141e3db60(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  iVar3 = local_res8[0];
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x66667)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_141e3c540(param_1,*param_2 + (longlong)(int)uVar6 * 0x28);
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
        } while ((int)uVar9 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar8 = (int)param_2[1];
    if (iVar8 != 0) {
      lVar7 = *param_2 + 8;
      do {
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (lVar7);
        lVar7 = lVar7 + 0x28;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,iVar3);
    }
    uVar10 = uVar6;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        uVar1 = *param_2 + (longlong)iVar3 * 0x28;
        uVar5 = uVar6;
        if (uVar1 != 0) {
          *(undefined1 *)(uVar1 + 7) = 0;
          *(undefined8 *)(uVar1 + 8) = 0;
          *(undefined8 *)(uVar1 + 0x10) = 0;
          *(undefined8 *)(uVar1 + 0x18) = 0;
          *(undefined8 *)(uVar1 + 0x20) = 0;
          uVar5 = uVar1;
        }
        FUN_141e3c540(param_1,uVar5);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 141e3dd50 FUN_141e3dd50 body=375 status=ok
// SIG undefined FUN_141e3dd50(void)

longlong * FUN_141e3dd50(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  iVar4 = 0;
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
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_140da9f70(param_1,(longlong)iVar4 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_140da9f70(param_1,(longlong)iVar2 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3ded0 FUN_141e3ded0 body=373 status=ok
// SIG undefined FUN_141e3ded0(void)

longlong * FUN_141e3ded0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3c650(param_1,*param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141e3c650(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e3e050 FUN_141e3e050 body=421 status=ok
// SIG undefined FUN_141e3e050(void)

longlong * FUN_141e3e050(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
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
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          FUN_141e3ce30(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e3ce30(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 141e3e200 FUN_141e3e200 body=491 status=ok
// SIG undefined FUN_141e3e200(void)

longlong * FUN_141e3e200(longlong *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 3,1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 3) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_141e3e32d;
  cVar1 = *(char *)(param_2 + 2);
  if (cVar1 == 'h') {
LAB_141e3e328:
    uVar4 = 0;
  }
  else if (cVar1 == 'i') {
    uVar4 = 3;
  }
  else if (cVar1 == 'l') {
    uVar4 = 2;
  }
  else if (cVar1 == 'm') {
    uVar4 = 1;
  }
  else {
    if (cVar1 != 'u') goto LAB_141e3e328;
    uVar4 = 4;
  }
  *(undefined1 *)((longlong)param_2 + 5) = uVar4;
LAB_141e3e32d:
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,2);
    }
  }
  else {
    param_2[3] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    param_2[4] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 4,2);
  }
  return param_1;
}



// FUNCTION 141e3e3f0 operator== body=405 status=ok
// SIG undefined operator==(void)

ulonglong FDescriptorSetRemappingInfo::operator==(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = (ulonglong)(int)param_1[0x26];
  if ((int)param_1[0x26] == (int)param_2[0x26]) {
    iVar4 = (int)param_1[1];
    if (iVar4 == (int)param_2[1]) {
      iVar2 = ::_guard_xfg_dispatch_icall_nop
                        ((void *)param_1[0x25],(void *)param_2[0x25],uVar5 << 2);
      uVar5 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) {
        uVar7 = 0;
        if (0 < iVar4) {
          lVar8 = 0;
          lVar9 = *param_1 - *param_2;
          puVar6 = (ushort *)(*param_2 + 0x12);
          do {
            uVar5 = (ulonglong)*puVar6;
            if ((*(ushort *)(lVar9 + (longlong)puVar6) != *puVar6) ||
               (uVar5 = (ulonglong)puVar6[-1],
               *(ushort *)(lVar9 + -2 + (longlong)puVar6) != puVar6[-1])) goto LAB_141e3e564;
            iVar2 = *(int *)(lVar9 + -10 + (longlong)puVar6);
            uVar5 = (ulonglong)iVar2;
            if (iVar2 != *(int *)(puVar6 + -5)) goto LAB_141e3e564;
            if (iVar2 != 0) {
              iVar2 = ::_guard_xfg_dispatch_icall_nop
                                (*(void **)(lVar9 + -0x12 + (longlong)puVar6),
                                 *(void **)(puVar6 + -9),uVar5 << 2);
              uVar5 = CONCAT44(extraout_var_00,iVar2);
              if (iVar2 != 0) goto LAB_141e3e564;
            }
            lVar8 = lVar8 + 1;
            puVar6 = puVar6 + 0xc;
          } while (lVar8 < iVar4);
        }
        puVar6 = (ushort *)(param_1 + 8);
        lVar8 = (longlong)param_2 - (longlong)param_1;
        while ((((uVar5 = (ulonglong)*(ushort *)(lVar8 + (longlong)puVar6),
                 *puVar6 == *(ushort *)(lVar8 + (longlong)puVar6) &&
                 (uVar1 = *(ushort *)(lVar8 + 2 + (longlong)puVar6), uVar5 = (ulonglong)uVar1,
                 puVar6[1] == uVar1)) &&
                (uVar5 = (ulonglong)*(int *)(puVar6 + -0x14),
                *(int *)(puVar6 + -0x14) == *(int *)(lVar8 + -0x28 + (longlong)puVar6))) &&
               ((iVar4 = *(int *)(puVar6 + -4), iVar4 == *(int *)(lVar8 + -8 + (longlong)puVar6) &&
                (iVar2 = *(int *)(puVar6 + -0xc),
                iVar2 == *(int *)(lVar8 + -0x18 + (longlong)puVar6)))))) {
          iVar3 = ::_guard_xfg_dispatch_icall_nop
                            (*(void **)(puVar6 + -0x18),*(void **)(lVar8 + -0x30 + (longlong)puVar6)
                             ,uVar5 << 2);
          uVar5 = CONCAT44(extraout_var_01,iVar3);
          if (iVar3 != 0) break;
          iVar4 = ::_guard_xfg_dispatch_icall_nop
                            (*(void **)(puVar6 + -8),*(void **)(lVar8 + -0x10 + (longlong)puVar6),
                             (longlong)iVar4 * 2);
          uVar5 = CONCAT44(extraout_var_02,iVar4);
          if (iVar4 != 0) break;
          iVar4 = ::_guard_xfg_dispatch_icall_nop
                            (*(void **)(puVar6 + -0x10),*(void **)(lVar8 + -0x20 + (longlong)puVar6)
                             ,(longlong)iVar2 * 6);
          uVar5 = CONCAT44(extraout_var_03,iVar4);
          if (iVar4 != 0) break;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0x1c;
          if (4 < uVar7) {
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
LAB_141e3e564:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141e3e590 operator== body=202 status=ok
// SIG undefined operator==(void)

undefined8 FVulkanDescriptorSetsLayoutInfo::operator==(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40)) {
    iVar1 = *(int *)(param_2 + 0x38);
    if ((iVar1 == *(int *)(param_1 + 0x38)) &&
       (*(int *)(param_2 + 0x44) == *(int *)(param_1 + 0x44))) {
      if (0 < iVar1) {
        lVar5 = 0;
        puVar4 = *(undefined8 **)(param_2 + 0x30);
        piVar6 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
        lVar7 = *(longlong *)(param_1 + 0x30) - (longlong)puVar4;
        do {
          if (piVar6[2] != *(int *)(puVar4 + 2)) {
            return 0;
          }
          iVar3 = *(int *)(puVar4 + 1);
          if (*piVar6 != iVar3) {
            return 0;
          }
          if ((iVar3 != 0) &&
             (iVar3 = ::_guard_xfg_dispatch_icall_nop
                                (*(void **)(lVar7 + (longlong)puVar4),(void *)*puVar4,
                                 (longlong)iVar3 * 0x18), iVar3 != 0)) {
            return 0;
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
          puVar4 = puVar4 + 3;
        } while (lVar5 < iVar1);
      }
      cVar2 = FDescriptorSetRemappingInfo::operator==(param_1 + 0x48,param_2 + 0x48);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141e3e660 operator() body=594 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void <lambda_24908703bb04cd999d453686f6064f77>::operator()
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,int param_6,int param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined4 *local_e8;
  int local_d8 [2];
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0xa0,local_d8,*(undefined8 *)(param_4 + 0x10));
  if (local_d8[0] == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0xa0) + (longlong)local_d8[0] * 0x18;
  }
  local_d8[0] = *(int *)(lVar5 + 8);
  uVar1 = *(uint *)(param_5 + 0x70);
  piVar4 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                            (param_2,*(undefined8 *)(param_5 + 0x10),0);
  uVar2 = *(uint *)(param_5 + 0x30);
  local_b8 = *(undefined4 *)(param_4 + 0x70);
  local_cc = param_8[9];
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  local_b0 = 1;
  if (param_6 == 6) {
    local_ac = *param_8;
  }
  else {
    local_ac = 0;
  }
  local_a8 = 1;
  local_c8 = 1;
  local_ac = param_8[10] * param_6 + local_ac;
  local_d0 = *(undefined4 *)(param_5 + 0x70);
  if (param_7 == 6) {
    local_c4 = *param_8;
  }
  else {
    local_c4 = 0;
  }
  local_c0 = 1;
  local_c4 = param_8[0xb] * param_7 + local_c4;
  local_f8 = &local_b8;
  local_b4 = local_cc;
  VulkanSetImageLayout(uVar3,*(undefined8 *)(param_4 + 0x10),local_d8[0],6);
  local_f8 = &local_d0;
  VulkanSetImageLayout(uVar3,*(undefined8 *)(param_5 + 0x10),0,7);
  local_94 = param_8[9];
  local_88 = 0;
  local_80 = 0;
  local_6c = 0;
  local_64 = 0;
  local_60 = *(uint *)(param_4 + 0x20) >> ((byte)local_94 & 0x1f);
  if (local_60 < 2) {
    local_60 = 1;
  }
  local_58 = 1;
  local_5c = *(uint *)(param_4 + 0x24) >> ((byte)local_94 & 0x1f);
  local_8c = 1;
  local_70 = 1;
  if (local_5c < 2) {
    local_5c = 1;
  }
  local_98 = *(undefined4 *)(param_4 + 0x70);
  local_90 = local_ac;
  local_7c = *(undefined4 *)(param_5 + 0x70);
  local_74 = local_c4;
  local_e8 = &local_98;
  local_f0 = 1;
  local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,7);
  local_78 = local_94;
  (*DAT_146ab0268)(uVar3,*(undefined8 *)(param_4 + 0x10),6,*(undefined8 *)(param_5 + 0x10));
  local_f8 = &local_b8;
  VulkanSetImageLayout(uVar3,*(undefined8 *)(param_4 + 0x10),6);
  local_f8 = &local_d0;
  if ((uVar2 >> 0x12 & 1) == 0) {
    *piVar4 = 5 - (uint)((uVar1 & 6) != 0);
    VulkanSetImageLayout(uVar3,*(undefined8 *)(param_5 + 0x10),7);
  }
  else {
    VulkanSetImageLayout(uVar3,*(undefined8 *)(param_5 + 0x10),7,1);
    *piVar4 = 1;
  }
  return;
}



// FUNCTION 141e3e8c0 operator() body=613 status=ok
// SIG undefined operator()(void)

void <lambda_44b253514e53c75da30c0b826ddceba7>::operator()
               (longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
               longlong param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *local_48;
  int local_40;
  
  local_48 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  local_40 = *(int *)((undefined8 *)param_1[1] + 1);
  lVar10 = (longlong)local_40;
  pvVar2 = *(void **)param_1[1];
  iVar9 = local_40;
  if (local_40 != 0) {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    puVar7 = local_48;
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar10 * 0x38);
    iVar9 = local_40;
  }
  puVar6 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_40 = *(int *)((undefined8 *)*param_1 + 1);
  lVar10 = (longlong)local_40;
  pvVar2 = *(void **)*param_1;
  if (local_40 != 0) {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0)
    ;
    puVar6 = local_48;
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar10 * 0x48);
  }
  iVar3 = local_40;
  puVar11 = puVar7 + (longlong)iVar9 * 0xe;
  if (puVar7 != puVar11) {
    puVar4 = puVar7 + 6;
    do {
      puVar4[-1] = 0;
      *puVar4 = param_2;
      puVar4[1] = param_3;
      puVar5 = puVar4 + 8;
      puVar4 = puVar4 + 0xe;
    } while (puVar5 != puVar11);
  }
  puVar4 = puVar6 + (longlong)local_40 * 0x12;
  if (puVar6 != puVar4) {
    puVar5 = puVar6 + 8;
    do {
      puVar5[-3] = 0;
      *puVar5 = param_2;
      puVar5[1] = param_3;
      puVar1 = puVar5 + 10;
      puVar5 = puVar5 + 0x12;
    } while (puVar1 != puVar4);
  }
  lVar8 = 0;
  (*DAT_146ab02d0)(*(undefined8 *)(param_4 + 0x40),param_6,1,0,0,0,iVar9,puVar7,local_40,puVar6);
  lVar10 = lVar8;
  puVar5 = puVar7;
  while (puVar1 = puVar6, puVar5 != puVar11) {
    *(undefined4 *)((longlong)puVar7 + lVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar7 + lVar10 + 0x14) =
         *(undefined4 *)((longlong)(int)(lVar10 / 0x38) * 0x38 + 0x14 + *(longlong *)param_1[1]);
    lVar10 = lVar10 + 0x38;
    puVar5 = (undefined4 *)(lVar10 + (longlong)puVar7);
  }
  while (puVar1 != puVar4) {
    *(undefined4 *)((longlong)puVar6 + lVar8 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar6 + lVar8 + 0x14) =
         puVar6[(longlong)(int)(lVar8 / 0x48) * 0x12 + 5];
    lVar8 = lVar8 + 0x48;
    puVar1 = (undefined4 *)(lVar8 + (longlong)puVar6);
  }
  (*DAT_146ab02d0)(*(undefined8 *)(param_5 + 0x40),1,param_7,0,0,0,iVar9,puVar7,iVar3,puVar6);
  if (puVar6 != (undefined4 *)0x0) {
    FMemory::Free(puVar6);
  }
  if (puVar7 != (undefined4 *)0x0) {
    FMemory::Free(puVar7);
  }
  return;
}



// FUNCTION 141e3eb30 FUN_141e3eb30 body=899 status=ok
// SIG undefined FUN_141e3eb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141e3eb30(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,int *param_7,longlong *param_8)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 *local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8 [3];
  undefined4 local_e0;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  bVar3 = (byte)param_5;
  local_c0 = param_2 + 0x3f0;
  iVar11 = (*(uint *)(param_4 + 0x24) >> (bVar3 & 0x1f)) *
           (*(uint *)(param_4 + 0x20) >> (bVar3 & 0x1f)) * 8;
  local_d0 = param_3;
  local_c8 = param_2;
  local_f8[0] = FUN_141e22090(local_c0,iVar11,2,1);
  iVar5 = 0;
  if (DAT_146aafc04 == 0) {
    local_70 = *(undefined4 *)(param_4 + 0x70);
    local_78 = *(uint *)(param_4 + 0x20) >> (bVar3 & 0x1f);
    local_74 = *(uint *)(param_4 + 0x24) >> (bVar3 & 0x1f);
    local_80 = 0;
    local_60 = 0;
    local_58 = 0;
    local_6c = param_5;
    local_68 = param_6;
    local_64 = 1;
    local_4c = 1;
    local_54 = local_78;
    local_50 = local_74;
    piVar2 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                              (*(longlong *)(param_2 + 0x18b0) + 0x2e0,
                               *(undefined8 *)(param_4 + 0x10),0 >> (bVar3 & 0x1f));
    puVar6 = (undefined8 *)(local_d0 + 0x40);
    local_d8 = *piVar2;
    if (local_d8 != 6) {
      local_128 = local_f8 + 1;
      local_f8[1] = 1;
      local_f8[2] = 1;
      local_e0 = 1;
      VulkanSetImageLayout(*puVar6,*(undefined8 *)(param_4 + 0x10),local_d8,6);
    }
    local_120 = &local_80;
    local_128 = (longlong *)CONCAT44(local_128._4_4_,1);
    (*DAT_146ab0280)(*puVar6,*(undefined8 *)(param_4 + 0x10),6,*(undefined8 *)(local_f8[0] + 0x18));
    if ((local_d8 == 0) || (*piVar2 == 6)) {
      *piVar2 = 6;
    }
    else {
      local_128 = local_f8 + 1;
      local_f8[1] = 1;
      local_f8[2] = 1;
      local_e0 = 1;
      VulkanSetImageLayout(*puVar6,*(undefined8 *)(param_4 + 0x10),6);
    }
  }
  else {
    puVar6 = (undefined8 *)(local_d0 + 0x40);
    local_128 = (longlong *)CONCAT44(local_128._4_4_,0x3c003c00);
    (*DAT_146ab0290)(*puVar6,*(undefined8 *)(local_f8[0] + 0x18),0,iVar11);
  }
  local_100 = 0;
  local_108 = 0;
  local_88 = (ulonglong)*(uint *)(local_f8[0] + 0x24);
  local_98 = *(undefined8 *)(local_f8[0] + 0x18);
  local_110 = &local_b8;
  local_118 = 1;
  local_120 = (undefined8 *)0x0;
  local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
  local_b4 = 0;
  local_ac = 0;
  local_a0 = 0;
  local_b8 = 0x2c;
  local_a8 = 0x1000;
  local_a4 = 0x2000;
  local_90 = 0;
  (*DAT_146ab02d0)(*puVar6,0x1000,0x4000,0);
  lVar1 = local_c8;
  FVulkanCommandBufferManager::SubmitUploadCmdBuffer
            (*(undefined8 *)(*(longlong *)(local_c8 + 0x18b0) + 0x2d8),0,0);
  FUN_141e2a740(lVar1);
  lVar1 = *(longlong *)(local_f8[0] + 0x10);
  FUN_141e29710(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x1c),
                *(undefined4 *)(lVar1 + 0x18));
  TArray<FFloat16Color,FDefaultAllocator>::SetNum
            (param_8,(param_7[3] - param_7[1]) * (param_7[2] - *param_7),1);
  iVar11 = param_7[1];
  if (iVar11 < param_7[3]) {
    iVar10 = param_7[2];
    do {
      uVar9 = (ulonglong)*param_7;
      puVar7 = (undefined2 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(local_f8[0] + 0x10) + 0x28) + 0x18) +
                ((*(uint *)(param_4 + 0x20) >> (bVar3 & 0x1f)) * iVar11 + uVar9) * 8 +
               (ulonglong)*(uint *)(*(longlong *)(local_f8[0] + 0x10) + 0x24));
      if (*param_7 < iVar10) {
        do {
          lVar1 = *param_8;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          lVar4 = (longlong)iVar5;
          iVar5 = iVar5 + 1;
          *(undefined2 *)(lVar1 + lVar4 * 8) = *puVar7;
          *(undefined2 *)(lVar1 + 2 + lVar4 * 8) = puVar7[1];
          *(undefined2 *)(lVar1 + 4 + lVar4 * 8) = puVar7[2];
          *(undefined2 *)(lVar1 + 6 + lVar4 * 8) = puVar7[3];
          iVar10 = param_7[2];
          puVar7 = puVar7 + 4;
        } while ((int)uVar8 < iVar10);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_7[3]);
  }
  FUN_141e2d4b0(local_c0,local_d0,local_f8);
  return;
}



// FUNCTION 141e3eec0 FUN_141e3eec0 body=1711 status=ok
// SIG undefined FUN_141e3eec0(void)

void FUN_141e3eec0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  
  param_1 = (longlong *)*param_1;
  uVar7 = 0;
  local_res8[0] = 0;
  local_res10 = uVar7;
  if (param_1[1] != 0) {
    local_res10 = *(ulonglong *)(param_1[1] + 0x48);
  }
  plVar1 = (longlong *)param_2[1];
  if ((ulonglong)plVar1[1] < *plVar1 + 8U) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res10,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res10,8);
    }
  }
  else {
    *plVar1 = *plVar1 + 8;
  }
  local_res10 = uVar7;
  if (param_1[4] != 0) {
    local_res10 = *(ulonglong *)(param_1[4] + 0x48);
  }
  plVar1 = (longlong *)param_2[1];
  if ((ulonglong)plVar1[1] < *plVar1 + 8U) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res10,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res10,8);
    }
  }
  else {
    *plVar1 = *plVar1 + 8;
  }
  local_res10 = uVar7;
  if (param_1[5] != 0) {
    local_res10 = *(ulonglong *)(param_1[5] + 0x48);
  }
  plVar1 = (longlong *)param_2[1];
  if ((ulonglong)plVar1[1] < *plVar1 + 8U) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res10,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res10,8);
    }
  }
  else {
    *plVar1 = *plVar1 + 8;
  }
  local_res10 = uVar7;
  if (param_1[2] != 0) {
    local_res10 = *(ulonglong *)(param_1[2] + 0x48);
  }
  plVar1 = (longlong *)param_2[1];
  if ((ulonglong)plVar1[1] < *plVar1 + 8U) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res10,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res10,8);
    }
  }
  else {
    *plVar1 = *plVar1 + 8;
  }
  local_res10 = uVar7;
  if (param_1[3] != 0) {
    local_res10 = *(ulonglong *)(param_1[3] + 0x48);
  }
  plVar1 = (longlong *)param_2[1];
  if ((ulonglong *)plVar1[1] < (ulonglong *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res10,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res10,8);
    }
  }
  else {
    local_res10 = *(ulonglong *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  FUN_1419de870(param_2,*param_1 + 0x18);
  lVar2 = param_1[7];
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,lVar2 + 0x58,1);
  }
  else {
    *(undefined1 *)(lVar2 + 0x58) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,lVar2 + 0x59,1);
  }
  else {
    *(undefined1 *)(lVar2 + 0x59) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,lVar2 + 0x5c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,lVar2 + 0x5c,4);
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x5c) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,lVar2 + 0x60,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,lVar2 + 0x60,4);
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x60) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,lVar2 + 100);
  (**(code **)(*param_2 + 8))(param_2,lVar2 + 0x65);
  FUN_1419dbaa0(param_2,param_1[8] + 0x18);
  lVar2 = param_1[6];
  if ((int)param_1[10] != 0) {
    do {
      puVar3 = *(undefined1 **)param_2[1];
      puVar8 = (undefined1 *)(uVar7 * 7 + lVar2 + 0x118);
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8,1);
      }
      else {
        *puVar8 = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 1,1);
      }
      else {
        puVar8[1] = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 2,1);
      }
      else {
        puVar8[2] = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 3,1);
      }
      else {
        puVar8[3] = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 4,1);
      }
      else {
        puVar8[4] = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 5,1);
      }
      else {
        puVar8[5] = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 6,1);
      }
      else {
        puVar8[6] = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      local_res8[0] =
           FUN_141e55c30(*(undefined4 *)((longlong)param_1 + uVar7 * 4 + 0x54),
                         *(uint *)((longlong)param_1 + uVar7 * 4 + 0x74) >> 4 & 0xffffff01);
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 10));
  }
  (**(code **)(*param_2 + 8))(param_2,lVar2 + 0x150);
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x16,4);
  plVar1 = (longlong *)param_2[1];
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0xa4);
  if ((ulonglong)plVar1[1] < *plVar1 + 4U) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_2[1];
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x4c);
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 9);
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 10) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0xb4,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,(longlong)param_1 + 0xb4,2);
    }
  }
  else {
    *(undefined2 *)((longlong)param_1 + 0xb4) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  return;
}



// FUNCTION 141e3f570 operator() body=138 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>::operator()
               (undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0xb8) = 0;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_2 + 0x70);
    *(undefined4 *)(param_2 + 0x68) = 0;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x18) != 0) {
      (*DAT_146ab0138)(*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),*(longlong *)(param_2 + 0x18)
                       ,0);
    }
    FMemory::operator_delete(param_2,200);
  }
  return;
}



// FUNCTION 141e3f640 FUN_141e3f640 body=84 status=ok
// SIG undefined FUN_141e3f640(void)

undefined8 * FUN_141e3f640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_144ea4fe8;
  FUN_1415b5910(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141e3f6a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TVulkanBaseShader<FRHIComputeShader,5,32>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FVulkanShader::~FVulkanShader(param_1 + 7);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 141e3f6f0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TVulkanBaseShader<FRHIDomainShader,2,4>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FVulkanShader::~FVulkanShader(param_1 + 6);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 141e3f740 FUN_141e3f740 body=211 status=ok
// SIG undefined FUN_141e3f740(void)

longlong FUN_141e3f740(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x28);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 141e3f820 FUN_141e3f820 body=43 status=ok
// SIG undefined FUN_141e3f820(void)

undefined8 * FUN_141e3f820(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 141e3f850 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanBoundShaderState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4408;
  FCachedBoundShaderStateLink_Threadsafe::RemoveFromCache(param_1 + 3);
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141e3f8b0 FUN_141e3f8b0 body=340 status=ok
// SIG undefined FUN_141e3f8b0(void)

undefined8 * FUN_141e3f8b0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = param_1[3];
  *param_1 = &PTR_FUN_144ea4460;
  lVar2 = (longlong)*(int *)(lVar1 + 0x1918);
  if (*(int *)(lVar1 + 0x1918) != 0) {
    iVar7 = 0;
    bVar8 = (undefined8 *)**(longlong **)(lVar1 + 0x1910) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x1910) + lVar4 * 8);
        do {
          if (bVar8 != ((undefined8 *)*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x1910) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x1910) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(lVar1 + 0x1918) = iVar7;
  }
  if (param_1[4] != 0) {
    FUN_141e254e0(param_1[3] + 0x3b0,2);
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e3fa10 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ALandscapeStreamingProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141e39980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x668);
  }
  return param_1;
}



// FUNCTION 141e3fa50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVulkanCommonPipelineDescriptorState::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FVulkanCommonPipelineDescriptorState();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141e3fa90 `scalar_deleting_destructor' body=111 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanComputeLayout::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c30;
  if (param_1[0x3c] != 0) {
    FUN_141e254e0(param_1[1] + 0x3b0,6);
    param_1[0x3c] = 0;
  }
  FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 141e3fb00 `scalar_deleting_destructor' body=140 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanComputePipeline::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c68;
  param_1[4] = &PTR_LAB_144ea4c70;
  FUN_141e2a1e0(param_1[1],param_1);
  param_1[4] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c60;
  if (param_1[2] != 0) {
    FUN_141e254e0(param_1[1] + 0x3b0,5);
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141e3fb90 `scalar_deleting_destructor' body=233 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanComputePipelineDescriptorState::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  lVar5 = param_1[0x22];
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cc0;
  puVar6 = (undefined8 *)(lVar5 + 0x20);
  LOCK();
  piVar1 = (int *)(lVar5 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if ((*(char *)(lVar5 + 0x30) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(lVar5 + 0x2c) == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x2c) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar5 + 8) = puVar6;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
      }
    }
    else {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  FPackedUniformBuffers::~FPackedUniformBuffers(param_1 + 0x1a);
  FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141e3fc80 FUN_141e3fc80 body=172 status=ok
// SIG undefined FUN_141e3fc80(void)

undefined8 * FUN_141e3fc80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ea4478;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144d83eb0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141e3fd30 FUN_141e3fd30 body=110 status=ok
// SIG undefined FUN_141e3fd30(void)

undefined8 * FUN_141e3fd30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ea4358;
  FUN_141e66e10(param_1 + 3);
  OGLInputStream::~OGLInputStream(param_1 + 3);
  *param_1 = &PTR_FUN_144da0c50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e3fda0 FUN_141e3fda0 body=52 status=ok
// SIG undefined FUN_141e3fda0(void)

undefined8 FUN_141e3fda0(undefined8 param_1,ulonglong param_2)

{
  FUN_141e3a0d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141e3fde0 `scalar_deleting_destructor' body=111 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanGfxLayout::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c30;
  if (param_1[0x3c] != 0) {
    FUN_141e254e0(param_1[1] + 0x3b0,6);
    param_1[0x3c] = 0;
  }
  FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 141e3fe50 FUN_141e3fe50 body=116 status=ok
// SIG undefined FUN_141e3fe50(void)

undefined8 * FUN_141e3fe50(undefined8 *param_1,ulonglong param_2)

{
  FVulkanVertexInputStateInfo::~FVulkanVertexInputStateInfo(param_1 + 7);
  param_1[4] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c60;
  if (param_1[2] != 0) {
    FUN_141e254e0(param_1[1] + 0x3b0,5);
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 141e3fed0 `scalar_deleting_destructor' body=261 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanGraphicsPipelineDescriptorState::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)param_1[0x42];
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cc8;
  LOCK();
  piVar1 = (int *)(puVar6 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if ((*(char *)(puVar6 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)((longlong)puVar6 + 0xc) == 0;
      if (bVar7) {
        *(int *)((longlong)puVar6 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar5 + 8) = puVar6;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
      }
    }
    else {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  lVar5 = 5;
  puVar6 = param_1 + 0x38;
  do {
    puVar6 = puVar6 + -6;
    FPackedUniformBuffers::~FPackedUniformBuffers(puVar6);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 141e3ffe0 `scalar_deleting_destructor' body=111 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanLayout::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c30;
  if (param_1[0x3c] != 0) {
    FUN_141e254e0(param_1[1] + 0x3b0,6);
    param_1[0x3c] = 0;
  }
  FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 141e40050 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanOcclusionQuery::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ea4450;
  if (*(int *)(param_1 + 7) != 0) {
    uVar2 = *(uint *)(param_1 + 5);
    if (uVar2 != 0xffffffff) {
      lVar3 = param_1[6];
      puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (ulonglong)(uVar2 >> 6) * 8);
      *puVar1 = *puVar1 & ~(1L << (uVar2 & 0x3f));
      *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
    }
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141e400e0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVulkanOcclusionQueryPool::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FVulkanQueryPool::~FVulkanQueryPool(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141e40140 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanPipeline::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4c60;
  if (param_1[2] != 0) {
    FUN_141e254e0(param_1[1] + 0x3b0,5);
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141e401a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FVulkanQueryPool::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FVulkanQueryPool();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e401e0 `scalar_deleting_destructor' body=285 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanRHIGraphicsPipelineState::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ea4cb0;
  if (param_1[3] != 0) {
    FUN_141e2a240(*(undefined8 *)(param_1[3] + 8),param_1);
    lVar3 = param_1[3];
    lVar6 = 0;
    param_1[3] = 0;
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 0x20);
      LOCK();
      piVar1 = (int *)(lVar3 + 0x28);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(lVar3 + 0x30) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)(lVar3 + 0x2c) == 0;
          if (bVar8) {
            *(int *)(lVar3 + 0x2c) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar7;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
  }
  TRefCountPtr<FVulkanGfxPipeline>::~TRefCountPtr<FVulkanGfxPipeline>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e40300 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FVulkanShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FVulkanShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 141e40340 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanStructuredBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4468;
  param_1[5] = &PTR_LAB_144ea4470;
  FUN_141e21670();
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141e403a0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanTimingQuery::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ea4458;
  FUN_141e2d4b0(param_1[7] + 0x3f0,0,param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  FVulkanQueryPool::~FVulkanQueryPool(param_1 + 6);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141e40420 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVulkanTimingQueryPool::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FVulkanQueryPool::~FVulkanQueryPool(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141e40470 Abandon body=81 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::Abandon
               (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(lVar1);
    FMemory::operator_delete(lVar1,0x60);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  return;
}



// FUNCTION 141e404d0 FUN_141e404d0 body=352 status=ok
// SIG undefined FUN_141e404d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_141e404d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  lVar2 = param_1[1];
  local_res8[0] = 0;
  iVar5 = (iVar1 + 1) % *(int *)(param_1 + 0xd);
  *(int *)((longlong)param_1 + 0x24) = iVar5;
  FUN_141e2e100(lVar2 + 0x438,*(undefined8 *)(param_1[0xe] + (longlong)iVar5 * 8));
  uVar3 = **(undefined8 **)(param_1[0xe] + (longlong)*(int *)((longlong)param_1 + 0x24) * 8);
  QueryPerformanceCounter(&local_res20);
  iVar5 = (*DAT_146ab0340)(*(undefined8 *)(param_1[1] + 8),*param_1,0xffffffffffffffff,
                           *(undefined8 *)
                            (*(longlong *)
                              (param_1[0xc] + (longlong)*(int *)((longlong)param_1 + 0x24) * 8) +
                            0x18),uVar3,local_res8);
  QueryPerformanceCounter(&local_res18);
  cVar4 = FUN_1415e13e0();
  if (cVar4 == '\0') {
    cVar4 = IsInActualRenderingThread();
    if (cVar4 != '\0') {
      DAT_146ac3ad0 = DAT_146ac3ad0 + (local_res18.s.LowPart - local_res20._0_4_);
      _DAT_146ac3af0 = _DAT_146ac3af0 + 1;
    }
  }
  else {
    _DAT_146ab6390 = _DAT_146ab6390 + (local_res18.s.LowPart - local_res20._0_4_);
  }
  if (iVar5 == -0x3b9acdec) {
    *(int *)((longlong)param_1 + 0x24) = iVar1;
    return 0xffffffff;
  }
  if (iVar5 == -1000000000) {
    *(int *)((longlong)param_1 + 0x24) = iVar1;
    return 0xfffffffe;
  }
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  *param_2 = *(undefined8 *)(param_1[0xc] + (longlong)*(int *)((longlong)param_1 + 0x24) * 8);
  *(undefined4 *)(param_1 + 4) = local_res8[0];
  FUN_141e30ab0(lVar2 + 0x438,
                *(undefined8 *)(param_1[0xe] + (longlong)*(int *)((longlong)param_1 + 0x24) * 8),
                0xffffffffffffffff);
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 141e40630 FUN_141e40630 body=1092 status=ok
// SIG undefined FUN_141e40630(void)

undefined8 * FUN_141e40630(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint local_res10 [2];
  
  if (param_2 < 2) {
    param_2 = 1;
  }
  bVar5 = false;
  uVar21 = param_2 + 0xff & 0xffffff00;
  iVar15 = *(int *)(param_1 + 0x13f8) + -1;
  if (-1 < iVar15) {
    plVar1 = (longlong *)(param_1 + 0x13f0);
    local_res10[0] = 4;
    lVar22 = (longlong)iVar15 * 8;
    lVar23 = lVar22;
    do {
      uVar16 = 0;
      lVar2 = *(longlong *)(*plVar1 + lVar23);
      uVar17 = (ulonglong)(*(uint *)(lVar2 + 0x40) >> 6);
      if (uVar17 != 0) {
        plVar10 = *(longlong **)(lVar2 + 0x58);
        uVar12 = uVar16;
        do {
          if (*plVar10 != 0) goto LAB_141e406f9;
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          plVar10 = plVar10 + 1;
        } while ((ulonglong)(longlong)(int)uVar11 < uVar17);
      }
      uVar12 = (1L << ((byte)*(uint *)(lVar2 + 0x40) & 0x3f)) - 1;
      if ((uVar12 == 0) ||
         ((*(ulonglong *)(*(longlong *)(lVar2 + 0x58) + uVar17 * 8) & uVar12) == 0)) {
LAB_141e40791:
        iVar7 = *(int *)(param_1 + 0x13f8);
        iVar6 = (iVar7 - iVar15) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar22),(void *)(*plVar1 + (longlong)(iVar7 - iVar6) * 8),
                     (longlong)iVar6 << 3);
          iVar7 = *(int *)(param_1 + 0x13f8);
        }
        *(int *)(param_1 + 0x13f8) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar7 = *(int *)(param_1 + 0x1408);
        *(int *)(param_1 + 0x1408) = iVar7 + 1;
        if (*(int *)(param_1 + 0x140c) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1400,iVar7);
        }
        bVar5 = true;
        *(longlong *)(*(longlong *)(param_1 + 0x1400) + (longlong)iVar7 * 8) = lVar2;
        *(uint *)(lVar2 + 0x3c) = DAT_1464aaa90;
      }
      else {
LAB_141e406f9:
        if (*(int *)(lVar2 + 0x78) + 10U < DAT_1464aaa90) {
          uVar17 = uVar16;
          uVar12 = uVar16;
          uVar20 = uVar16;
          if (0 < *(int *)(lVar2 + 0x60)) {
            do {
              lVar9 = *(longlong *)(lVar2 + 0x58);
              uVar8 = *(ulonglong *)(lVar9 + uVar20);
              uVar18 = uVar16;
              if (uVar8 != 0) {
                do {
                  if ((uVar8 & 1) != 0) {
                    lVar9 = (longlong)((int)uVar12 + (int)uVar18) * 8;
                    lVar3 = *(longlong *)(lVar9 + *(longlong *)(lVar2 + 0x48));
                    *(undefined8 *)(lVar3 + 0x30) = 0;
                    uVar11 = 0;
                    if (*(int *)(lVar3 + 0x38) == 3) {
                      uVar11 = local_res10[0];
                    }
                    *(uint *)(lVar3 + 0x38) = uVar11;
                    *(undefined4 *)(lVar3 + 0x28) = 0xffffffff;
                    *(undefined8 *)(lVar9 + *(longlong *)(lVar2 + 0x48)) = 0;
                  }
                  uVar18 = (ulonglong)((int)uVar18 + 1);
                  uVar8 = uVar8 >> 1;
                } while (uVar8 != 0);
                lVar9 = *(longlong *)(lVar2 + 0x58);
              }
              *(undefined8 *)(uVar20 + lVar9) = 0;
              uVar11 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar11;
              uVar12 = (ulonglong)((int)uVar12 + 0x40);
              uVar20 = uVar20 + 8;
            } while ((int)uVar11 < *(int *)(lVar2 + 0x60));
          }
          goto LAB_141e40791;
        }
      }
      lVar22 = lVar22 + -8;
      lVar23 = lVar23 + -8;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  puVar14 = (undefined8 *)0x0;
  iVar15 = *(int *)(param_1 + 0x1408);
  if (0 < iVar15) {
    if (bVar5) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      AlgoImpl::
      IntroSortInternal<FVulkanOcclusionQueryPool_*,FIdentityFunctor,TDereferenceWrapper<FVulkanOcclusionQueryPool_*,<lambda_eb21840210707ffc662778adfea9b9e7>_>_>
                (*(undefined8 *)(param_1 + 0x1400),(longlong)iVar15,0,local_res10);
      iVar15 = *(int *)(param_1 + 0x1408);
    }
    if (0 < iVar15) {
      plVar1 = *(longlong **)(param_1 + 0x1400);
      plVar10 = plVar1;
      puVar13 = puVar14;
      puVar19 = puVar14;
      do {
        iVar7 = (int)puVar19;
        if (uVar21 <= *(uint *)(*plVar10 + 0x20)) {
          iVar15 = *(int *)(param_1 + 0x1408);
          puVar14 = (undefined8 *)plVar1[iVar7];
          iVar6 = (iVar15 - iVar7) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar1 + iVar7,plVar1 + (iVar7 + 1),(longlong)iVar6 << 3);
            iVar15 = *(int *)(param_1 + 0x1408);
          }
          *(int *)(param_1 + 0x1408) = iVar15 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x1400);
          iVar15 = *(int *)(param_1 + 0x13f8);
          *(int *)(param_1 + 0x13f8) = iVar15 + 1;
          if (*(int *)(param_1 + 0x13fc) < iVar15 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (param_1 + 0x13f0,iVar15);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x13f0) + (longlong)iVar15 * 8) = puVar14;
          return puVar14;
        }
        puVar19 = (undefined8 *)(ulonglong)(iVar7 + 1);
        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
        plVar10 = plVar10 + 1;
      } while ((longlong)puVar13 < (longlong)iVar15);
    }
  }
  uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18b0) + 0x2d8) + 0x70);
  puVar13 = (undefined8 *)operator_new(0x80);
  if (puVar13 != (undefined8 *)0x0) {
    FUN_141e37b40(puVar13,param_1,uVar4,uVar21,0);
    *(undefined4 *)(puVar13 + 7) = 0;
    *puVar13 = &PTR__scalar_deleting_destructor__144ea4440;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar13 + 8) = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0xffffffffffffffff;
    *(undefined4 *)(puVar13 + 0xf) = 0xffffffff;
    iVar15 = *(int *)(puVar13 + 0xc);
    iVar7 = (uVar21 >> 6) + iVar15;
    *(int *)(puVar13 + 0xc) = iVar7;
    if (*(int *)((longlong)puVar13 + 100) < iVar7) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar13 + 0xb);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(puVar13[0xb] + (longlong)iVar15 * 8),0,(ulonglong)(uVar21 >> 6) << 3);
    iVar15 = *(int *)(puVar13 + 10);
    iVar7 = iVar15 + uVar21;
    *(int *)(puVar13 + 10) = iVar7;
    if (*(int *)((longlong)puVar13 + 0x54) < iVar7) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar13 + 9);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(puVar13[9] + (longlong)iVar15 * 8),0,(longlong)(int)uVar21 << 3);
    puVar14 = puVar13;
  }
  iVar15 = *(int *)(param_1 + 0x13f8);
  *(int *)(param_1 + 0x13f8) = iVar15 + 1;
  if (*(int *)(param_1 + 0x13fc) < iVar15 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x13f0,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x13f0) + (longlong)iVar15 * 8) = puVar14;
  return puVar14;
}



// FUNCTION 141e40a80 AcquirePoolSetContainer body=256 status=ok
// SIG undefined AcquirePoolSetContainer(void)

undefined8 * FVulkanDescriptorPoolsManager::AcquirePoolSetContainer(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  plVar5 = (longlong *)param_1[7];
  plVar1 = plVar5 + *(int *)(param_1 + 8);
  do {
    if (plVar5 == plVar1) {
      puVar4 = (undefined8 *)operator_new(0x60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *param_1;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        *(undefined4 *)(puVar4 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
        puVar4[9] = 0;
        *(undefined4 *)(puVar4 + 10) = 0;
        *(undefined4 *)(puVar4 + 0xb) = DAT_1464aaa90;
        *(undefined1 *)((longlong)puVar4 + 0x5c) = 1;
      }
      iVar2 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x44) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar2);
      }
      *(undefined8 **)(param_1[7] + (longlong)iVar2 * 8) = puVar4;
LAB_141e40b5d:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      return puVar4;
    }
    puVar4 = (undefined8 *)*plVar5;
    if (*(char *)((longlong)puVar4 + 0x5c) == '\0') {
      *(undefined1 *)((longlong)puVar4 + 0x5c) = 1;
      *(undefined4 *)(puVar4 + 0xb) = DAT_1464aaa90;
      goto LAB_141e40b5d;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 141e40b80 AcquireTypedPoolSet body=275 status=ok
// SIG undefined AcquireTypedPoolSet(void)

undefined8 *
FVulkanDescriptorPoolSetContainer::AcquireTypedPoolSet(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  int *local_28;
  undefined8 **local_20;
  
  local_res8[0] = *(int *)(param_2 + 0x44);
  if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
    puVar3 = (undefined8 *)param_1[9];
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      puVar3 = param_1 + 8;
    }
    iVar2 = *(int *)((longlong)puVar3 +
                    ((longlong)*(int *)(param_1 + 10) - 1U & (longlong)local_res8[0]) * 4);
    if (iVar2 != -1) {
      lVar1 = param_1[1];
      do {
        lVar4 = (longlong)iVar2;
        if (*(int *)(lVar1 + lVar4 * 0x18) == local_res8[0]) {
          if ((iVar2 != -1) && (lVar1 = lVar1 + lVar4 * 0x18, lVar1 != 0)) {
            local_res18 = *(undefined8 **)(lVar1 + 8);
            goto LAB_141e40be9;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_res18 = (undefined8 *)0x0;
LAB_141e40be9:
  if (local_res18 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x28);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = *param_1;
      puVar3[1] = param_2;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      FVulkanTypedDescriptorPoolSet::PushNewPool(puVar3);
    }
    local_28 = local_res8;
    local_20 = &local_res18;
    local_res18 = puVar3;
    FUN_141711280(param_1 + 1,local_res10,&local_28,0);
  }
  return local_res18;
}



// FUNCTION 141e40ca0 FUN_141e40ca0 body=441 status=ok
// SIG undefined FUN_141e40ca0(void)

void FUN_141e40ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar6 = (float)DAT_1464c955c / *(float *)(param_1 + 4);
  if (0.0 <= fVar6) {
    iVar3 = -((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
  }
  else {
    iVar3 = (int)ROUND((fVar6 + fVar6) - 0.5) >> 1;
  }
  lVar4 = param_1[3];
  puVar1 = param_1 + 3;
  uVar5 = 0;
  if (lVar4 != 0) {
    fVar6 = (float)((longlong)(float)iVar3 & 0xffffffff);
    fVar6 = ((float)*(uint *)(lVar4 + 0x10) - fVar6) / fVar6;
    if ((-0.1 <= fVar6) && (fVar6 <= 0.5)) {
      iVar3 = (*DAT_146ab0140)(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 8),
                               *(undefined8 *)(lVar4 + 0x18),0);
      if (iVar3 != 0) {
        FUN_141e67d70(iVar3,
                      "VulkanRHI::vkResetDescriptorPool(Device->GetInstanceHandle(), DescriptorPool, 0)"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                      ,0x2ea);
      }
      FUN_141e513a0(lVar4 + 0x20);
      FUN_141e51270(lVar4 + 0x70);
      puVar2 = param_1 + 1;
      iVar3 = *(int *)(param_1 + 2);
      *(int *)(param_1 + 2) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x14) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar2,iVar3);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*puVar2 + 8),(void *)*puVar2,(longlong)iVar3 << 3);
      *(undefined8 *)*puVar2 = *puVar1;
      *puVar1 = 0;
      return;
    }
    *puVar1 = 0;
    TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>::operator()(puVar1,lVar4);
  }
  lVar4 = operator_new(200);
  if (lVar4 != 0) {
    uVar5 = FVulkanDescriptorSetCache::FCachedPool::FCachedPool
                      (lVar4,*param_1,(longlong)(float)iVar3 & 0xffffffff);
  }
  puVar1 = param_1 + 1;
  iVar3 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)*puVar1 + 8),(void *)*puVar1,(longlong)iVar3 << 3);
  *(undefined8 *)*puVar1 = uVar5;
  return;
}



// FUNCTION 141e40e60 AddDescriptor body=293 status=ok
// SIG undefined AddDescriptor(void)

void FVulkanDescriptorSetsLayoutInfo::AddDescriptor
               (longlong param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  
  piVar1 = (int *)(param_1 + (longlong)*(int *)((longlong)param_3 + 4) * 4);
  *piVar1 = *piVar1 + 1;
  if (*(int *)(param_1 + 0x38) <= param_2) {
    iVar5 = *(int *)(param_1 + 0x38);
    iVar8 = param_2 + 1;
    if (iVar5 < iVar8) {
      *(int *)(param_1 + 0x38) = iVar8;
      iVar9 = iVar8 - iVar5;
      if (*(int *)(param_1 + 0x3c) < iVar8) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x30,iVar5);
      }
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x18);
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 3;
      }
    }
    else if (iVar8 < iVar5) {
      TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                (param_1 + 0x30,iVar8,iVar5 - iVar8,0);
    }
  }
  lVar3 = (longlong)param_2 * 0x18;
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar3);
  iVar5 = (int)plVar10[1];
  *(int *)(plVar10 + 1) = iVar5 + 1;
  if (*(int *)((longlong)plVar10 + 0xc) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar10,iVar5);
  }
  lVar6 = *plVar10;
  uVar7 = param_3[1];
  puVar2 = (undefined8 *)(lVar6 + (longlong)iVar5 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = param_3[2];
  iVar5 = *(int *)((longlong)param_3 + 4);
  if (iVar5 < 0) {
    return;
  }
  if (3 < iVar5) {
    if (iVar5 < 6) {
      return;
    }
    if (iVar5 < 9) {
      psVar4 = (short *)(*(longlong *)(param_1 + 0x48) + 0x12 + lVar3);
      *psVar4 = *psVar4 + 1;
      return;
    }
    if (iVar5 != 10) {
      return;
    }
  }
  psVar4 = (short *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar3);
  *psVar4 = *psVar4 + 1;
  return;
}



// FUNCTION 141e40f90 AddImageBarrier body=188 status=ok
// SIG undefined AddImageBarrier(void)

int VulkanRHI::FPendingBarrier::AddImageBarrier
              (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar2 = (longlong)iVar3 * 0x48;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x20 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x30 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x38 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar4) = 0;
  puVar5 = (undefined4 *)(lVar2 + *plVar1);
  puVar5[0xc] = param_3;
  puVar5[0xe] = param_4;
  *puVar5 = 0x2d;
  *(undefined8 *)(puVar5 + 10) = param_2;
  puVar5[0x10] = param_5;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  return iVar3;
}



// FUNCTION 141e41050 FUN_141e41050 body=195 status=ok
// SIG undefined FUN_141e41050(void)

int FUN_141e41050(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar2 = (longlong)iVar3 * 0x48;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x20 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x30 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x38 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar4) = 0;
  puVar5 = (undefined4 *)(lVar2 + *plVar1);
  puVar5[0xe] = param_5;
  puVar5[0xc] = param_3;
  puVar5[0xd] = param_4;
  puVar5[0x10] = param_6;
  *puVar5 = 0x2d;
  *(undefined8 *)(puVar5 + 10) = param_2;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  return iVar3;
}



// FUNCTION 141e41140 AllocateDescriptorSets body=233 status=ok
// SIG undefined AllocateDescriptorSets(void)

undefined8
FVulkanTypedDescriptorPoolSet::AllocateDescriptorSets
          (longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (0 < *(int *)(param_2 + 400)) {
    local_38 = *(undefined8 *)(param_2 + 0x1a8);
    uStack_30 = *(undefined8 *)(param_2 + 0x1b0);
    uStack_20 = *(undefined4 *)(param_2 + 0x1c0);
    uStack_1c = *(undefined4 *)(param_2 + 0x1c4);
    local_18 = *(undefined8 *)(param_2 + 0x1c8);
    local_28 = ((longlong *)**(longlong **)(param_1 + 0x20))[4];
    iVar2 = (*DAT_146ab0148)(*(undefined8 *)(*(longlong *)**(longlong **)(param_1 + 0x20) + 8),
                             &local_38);
    while (iVar2 != 0) {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
      if (puVar1 == (undefined8 *)0x0) {
        plVar3 = (longlong *)PushNewPool(param_1);
      }
      else {
        *(undefined8 **)(param_1 + 0x20) = puVar1;
        plVar3 = (longlong *)*puVar1;
      }
      local_28 = plVar3[4];
      local_38 = *(undefined8 *)(param_2 + 0x1a8);
      uStack_30 = *(undefined8 *)(param_2 + 0x1b0);
      uStack_20 = *(undefined4 *)(param_2 + 0x1c0);
      uStack_1c = *(undefined4 *)(param_2 + 0x1c4);
      local_18 = *(undefined8 *)(param_2 + 0x1c8);
      iVar2 = (*DAT_146ab0148)(*(undefined8 *)(*plVar3 + 8),&local_38,param_3);
    }
  }
  return 1;
}



// FUNCTION 141e41230 FUN_141e41230 body=1391 status=ok
// SIG undefined FUN_141e41230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e41230(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  int local_238 [2];
  undefined8 *local_230;
  int local_228 [2];
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c0;
  int *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 *puStack_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  longlong local_170 [9];
  longlong *local_128;
  undefined8 local_120;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8 [36];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1e0 = param_7;
  local_1e8 = param_8;
  local_208 = param_5;
  local_230 = param_2;
  local_220 = param_4;
  local_218 = param_1;
  local_1f0 = param_3;
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
  iVar14 = 0;
  plVar9 = param_5;
  if (0 < (int)param_5[0x18]) {
    puVar12 = local_d8 + 1;
    do {
      plVar2 = (longlong *)*param_5;
      if (plVar2 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar2 + 0x48))(plVar2);
        plVar9 = (longlong *)(param_1 + 0xa0);
        uVar16 = *(undefined8 *)(lVar8 + 0x18);
        local_210 = uVar16;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(plVar9,local_228,uVar16);
        if (local_228[0] == -1) {
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar9 + (longlong)local_228[0] * 0x18;
        }
        piVar13 = (int *)(lVar8 + 8);
        if (lVar8 == 0) {
          piVar13 = (int *)0x0;
        }
        if (piVar13 == (int *)0x0) {
          local_1c0 = &local_210;
          local_228[1] = 0;
          local_1b8 = local_228 + 1;
          TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                    (plVar9,local_238,&local_1c0,0);
          piVar13 = (int *)(*plVar9 + ((longlong)local_238[0] * 3 + 1) * 8);
          uVar16 = local_210;
        }
        if (*piVar13 != 2) {
          if (*piVar13 == 0) {
            local_248 = &local_1a0;
            local_1d8 = 1;
            uStack_1d0 = 1;
            local_190 = CONCAT44(local_190._4_4_,1);
            local_1a0 = 1;
            puStack_198 = (undefined8 *)0x1;
            VulkanRHI::ImagePipelineBarrier(*(undefined8 *)(local_220 + 0x40),uVar16,0);
          }
          else {
            local_dc = (undefined4)param_5[1];
            local_128 = (longlong *)0x0;
            local_f8 = 0;
            local_e8 = 0;
            local_120 = 1;
            local_f0 = 0;
            TArray<FRHITexture_*,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(local_170,0);
            plVar9 = local_170;
            if (local_128 != (longlong *)0x0) {
              plVar9 = local_128;
            }
            *plVar9 = (longlong)plVar2;
            plVar9 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
            puVar10 = local_230;
            (**(code **)(*plVar9 + 0x20))(plVar9,local_230,1);
            if (0 < (int)local_120) {
              local_178[0] = 1;
              FUN_141e55010(puVar10,local_178);
            }
            if (local_f8 != 0) {
              FMemory::Free();
            }
            if (local_128 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
        if ((int)plVar2[4] == 0) {
          puVar10 = &local_1b0;
          local_1b0 = _DAT_1464aa6e0;
          uStack_1a8 = _DAT_1464aa6e8;
        }
        else {
          puVar10 = &local_200;
          local_200 = *(undefined8 *)((longlong)plVar2 + 0x24);
          uStack_1f8 = *(undefined8 *)((longlong)plVar2 + 0x2c);
        }
        uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar6 = *(undefined4 *)(puVar10 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0xc);
        puVar12[-1] = *(undefined4 *)puVar10;
        puVar12[2] = uVar3;
        *puVar12 = uVar5;
        puVar12[1] = uVar6;
        *piVar13 = 2;
        param_1 = local_218;
        plVar9 = local_208;
      }
      iVar14 = iVar14 + 1;
      param_5 = param_5 + 3;
      puVar12 = puVar12 + 4;
      param_2 = local_230;
    } while (iVar14 < (int)plVar9[0x18]);
  }
  plVar2 = (longlong *)plVar9[0x32];
  if (plVar2 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar2 + 0x48))(plVar2);
    lVar8 = local_218;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(local_218 + 0xa0,local_238,*(undefined8 *)(lVar11 + 0x18));
    if ((local_238[0] == -1) ||
       (lVar15 = *(longlong *)(lVar8 + 0xa0) + (longlong)local_238[0] * 0x18, lVar15 == 0)) {
      local_230 = (undefined8 *)(lVar11 + 0x18);
      TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(lVar8 + 0xa0,local_238,&local_230,0);
      lVar15 = *(longlong *)(lVar8 + 0xa0) + (longlong)local_238[0] * 0x18;
    }
    if ((*(int *)((longlong)plVar9 + 0x19c) - 1U & 0xffffffef) == 0) {
      iVar14 = 4;
    }
    else if ((*(int *)((longlong)plVar9 + 0x19c) == 0x21) &&
            ((*(byte *)(local_1f0 + 0x18d0) & 2) != 0)) {
      iVar14 = 0x3b9c9308;
    }
    else {
      iVar14 = 3;
    }
    if (*(int *)(lVar15 + 8) != iVar14) {
      uVar5 = *(undefined4 *)(lVar11 + 0x78);
      uVar16 = *(undefined8 *)(lVar11 + 0x18);
      local_1a0 = 0;
      puStack_198 = (undefined8 *)0x0;
      local_188 = 0;
      local_180 = 0;
      local_190 = 1;
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&puStack_198,0);
      *puStack_198 = 0;
      puStack_198[1] = 0;
      puStack_198[2] = 0;
      puStack_198[3] = 0;
      puStack_198[4] = 0;
      puStack_198[5] = 0;
      puStack_198[6] = 0;
      puStack_198[7] = 0;
      puStack_198[8] = 0;
      *(undefined4 *)puStack_198 = 0x2d;
      puStack_198[5] = uVar16;
      *(undefined4 *)(puStack_198 + 6) = uVar5;
      *(undefined4 *)(puStack_198 + 7) = 1;
      *(undefined4 *)(puStack_198 + 8) = 1;
      puStack_198[4] = 0xffffffffffffffff;
      uVar5 = FUN_141e48650(*(undefined4 *)(lVar15 + 8));
      uVar6 = FUN_141e48650(iVar14);
      puVar10 = puStack_198;
      uVar7 = FUN_141e26f50(uVar5,puStack_198 + 2,puStack_198 + 3);
      local_1a0._0_4_ = (uint)local_1a0 | uVar7;
      uVar7 = FUN_141e26f50(uVar6,(longlong)puVar10 + 0x14,(longlong)puVar10 + 0x1c);
      local_1a0 = CONCAT44(local_1a0._4_4_ | uVar7,(uint)local_1a0);
      if ((0 < (int)local_190) || (0 < (int)local_180)) {
        VulkanRHI::FPendingBarrier::InnerExecute(&local_1a0,local_220,1);
      }
      *(int *)(lVar15 + 8) = iVar14;
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (puStack_198 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    if ((int)plVar2[4] != 0) {
      lVar8 = plVar2[5];
      lVar11 = local_208[0x18];
      local_d8[(longlong)(int)lVar11 * 4] = *(undefined4 *)((longlong)plVar2 + 0x24);
      local_d8[(longlong)(int)lVar11 * 4 + 1] = (int)lVar8;
    }
  }
  uVar4 = local_1e0;
  uVar16 = local_1e8;
  local_248 = (undefined8 *)local_d8;
  FVulkanCmdBuffer::BeginRenderPass(local_220,local_1e0,local_1e0);
  lVar8 = param_2[0x9f];
  uVar7 = *(uint *)(param_6 + 0x34c);
  uVar1 = *(uint *)(param_6 + 0x348);
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(float *)(lVar8 + 0x10) = (float)uVar1;
  *(float *)(lVar8 + 0x14) = (float)uVar7;
  *(undefined8 *)(lVar8 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar8 + 0x24) = 0;
  *(uint *)(lVar8 + 0x28) = uVar1;
  *(uint *)(lVar8 + 0x2c) = uVar7;
  *(undefined1 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(local_218 + 0x1d0) = uVar16;
  *(undefined8 *)(local_218 + 0x1c8) = uVar4;
  return;
}



// FUNCTION 141e417a0 FUN_141e417a0 body=2474 status=ok
// SIG undefined FUN_141e417a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e417a0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6,longlong param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  longlong lVar21;
  undefined1 auStack_2b8 [32];
  undefined4 *local_298;
  uint local_288;
  int local_284;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  int local_250;
  longlong local_248;
  longlong *local_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  longlong local_220;
  undefined8 *local_218;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_168 [72];
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  uVar16 = 0;
  local_1f0 = param_8;
  local_1e8 = param_7;
  local_250 = *(int *)(param_7 + 0x360);
  local_228 = param_5;
  local_288 = 0;
  local_238 = param_4;
  local_230 = param_1;
  local_218 = param_3;
  local_208 = param_2;
  _guard_xfg_dispatch_icall_nop(local_168,0,0x120);
  plVar10 = param_5;
  uVar13 = uVar16;
  uVar15 = uVar16;
  do {
    uVar14 = (uint)uVar15;
    if (*plVar10 == 0) break;
    uVar14 = uVar14 + 1;
    uVar15 = (ulonglong)uVar14;
    uVar13 = uVar13 + 1;
    plVar10 = plVar10 + 3;
  } while ((longlong)uVar13 < 8);
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  if (*(char *)((longlong)param_5 + 0x10d) != '\0') {
    *(uint *)(param_1 + 0xf0) = uVar14;
  }
  local_210 = (longlong)(int)uVar14;
  if (0 < (int)uVar14) {
    local_220 = (longlong)param_5 - param_1;
    plVar10 = (longlong *)(param_1 + 0x100);
    do {
      local_258 = *(longlong **)(local_220 + -0x100 + (longlong)plVar10);
      local_240 = local_258;
      lVar11 = (**(code **)(*local_258 + 0x48))(local_258);
      uVar3 = *(undefined8 *)(lVar11 + 0x18);
      lVar21 = lVar11 + 8;
      local_248 = lVar21;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0xa0),&local_284,uVar3);
      param_5 = local_228;
      if (local_284 == -1) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(param_1 + 0xa0) + (longlong)local_284 * 0x18;
      }
      piVar20 = (int *)(lVar18 + 8);
      if (lVar18 == 0) {
        piVar20 = (int *)0x0;
      }
      if (*(char *)((longlong)local_228 + 0x10d) == '\0') {
        if (*piVar20 == 0) {
          local_298 = &local_1a0;
          local_1e0 = 1;
          uStack_1d8 = 1;
          local_190 = 1;
          local_1a0 = 1;
          uStack_19c = 0;
          uStack_198 = 1;
          uStack_194 = 0;
          VulkanRHI::ImagePipelineBarrier(*(undefined8 *)(local_238 + 0x40),uVar3,0);
          *piVar20 = 2;
          plVar17 = local_240;
        }
        else if ((*piVar20 == 2) && ((*(byte *)(local_220 + -0xeb + (longlong)plVar10) & 0xfc) == 4)
                ) {
          local_298 = &local_188;
          local_1c8 = 1;
          uStack_1c0 = 1;
          local_178 = 1;
          local_188 = 1;
          uStack_184 = 0;
          uStack_180 = 1;
          uStack_17c = 0;
          VulkanRHI::ImagePipelineBarrier(*(undefined8 *)(local_238 + 0x40),uVar3,2);
          *piVar20 = 2;
          plVar17 = local_240;
        }
        else {
          FUN_141e50040(local_208,1,&local_258);
          *piVar20 = 2;
          plVar17 = local_258;
        }
      }
      else {
        iVar6 = *(int *)(lVar11 + 0x70);
        local_258 = (longlong *)CONCAT44(local_258._4_4_,iVar6);
        if (*(char *)(param_1 + 0xf4) == '\0') {
          iVar7 = *(int *)(lVar11 + 0x60);
          if ((iVar7 < 0) || (iVar7 < 3)) {
LAB_141e41972:
            iVar7 = 1;
          }
          else if (iVar7 == 3) {
            iVar7 = 6;
          }
          else if (iVar7 == 5) {
            iVar7 = *(int *)(lVar11 + 0x58);
          }
          else {
            if (iVar7 != 6) goto LAB_141e41972;
            iVar7 = *(int *)(lVar11 + 0x58) * 6;
          }
          *(undefined1 *)(param_1 + 0xf4) = 1;
          plVar10[2] = *(longlong *)(lVar11 + 0x18);
          iVar5 = *(int *)((longlong)plVar10 + 0xc);
          plVar17 = (longlong *)*plVar10;
          iVar19 = (int)plVar10[1];
          if (iVar5 < 0) {
            if (iVar19 != 0) {
              do {
                if (*plVar17 != 0) {
                  FMemory::Free();
                }
                plVar17 = plVar17 + 2;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
              iVar5 = *(int *)((longlong)plVar10 + 0xc);
            }
            *(undefined4 *)(plVar10 + 1) = 0;
            if (iVar5 != 0) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
            }
          }
          else {
            for (; iVar19 != 0; iVar19 = iVar19 + -1) {
              if (*plVar17 != 0) {
                FMemory::Free();
              }
              plVar17 = plVar17 + 2;
            }
            *(undefined4 *)(plVar10 + 1) = 0;
          }
          lVar21 = 0;
          lVar11 = (longlong)iVar7;
          if (0 < iVar7) {
            do {
              lVar18 = plVar10[1];
              iVar6 = (int)lVar18 + 1;
              *(int *)(plVar10 + 1) = iVar6;
              if (*(int *)((longlong)plVar10 + 0xc) < iVar6) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
              }
              puVar12 = (undefined8 *)((longlong)(int)lVar18 * 0x10 + *plVar10);
              *puVar12 = 0;
              puVar12[1] = 0;
              if (0 < (int)local_258) {
                uVar13 = (ulonglong)local_258 & 0xffffffff;
                do {
                  plVar17 = (longlong *)(*plVar10 + lVar21);
                  lVar18 = plVar17[1];
                  iVar6 = (int)lVar18 + 1;
                  *(int *)(plVar17 + 1) = iVar6;
                  if (*(int *)((longlong)plVar17 + 0xc) < iVar6) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar17);
                  }
                  *(int *)(*plVar17 + (longlong)(int)lVar18 * 4) = *piVar20;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar21 = lVar21 + 0x10;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            iVar6 = (int)local_258;
          }
          if (*piVar20 != 5) {
            *piVar20 = 5;
          }
        }
        uVar13 = local_270;
        iVar7 = *(int *)(local_220 + -0xf0 + (longlong)plVar10);
        bVar1 = *(byte *)(local_220 + -0xec + (longlong)plVar10);
        uVar15 = (ulonglong)bVar1;
        iVar5 = 0;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        lVar21 = (longlong)iVar5;
        *(int *)(local_230 + 0xf8) = iVar5;
        *(bool *)(local_230 + 0xf5) = (uint)bVar1 == iVar6 - 1U;
        *(uint *)(local_230 + 0xfc) = (uint)bVar1;
        if (*(int *)(*(longlong *)(*plVar10 + lVar21 * 0x10) + -4 + uVar15 * 4) != 5) {
          lVar11 = (longlong)(int)local_270;
          iVar6 = (int)local_270 + 1;
          uVar3 = *(undefined8 *)(local_248 + 0x10);
          local_270 = CONCAT44(local_270._4_4_,iVar6);
          if (local_270._4_4_ < iVar6) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                      (&local_278,uVar13 & 0xffffffff);
          }
          *(undefined8 *)(local_278 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 8 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x10 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x18 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x20 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x28 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x30 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x38 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x40 + lVar11 * 0x48) = 0;
          *(undefined4 *)(local_278 + lVar11 * 0x48) = 0x2d;
          *(undefined8 *)(local_278 + 0x28 + lVar11 * 0x48) = uVar3;
          *(undefined4 *)(local_278 + 0x30 + lVar11 * 0x48) = 1;
          *(undefined4 *)(local_278 + 0x38 + lVar11 * 0x48) = 1;
          *(undefined4 *)(local_278 + 0x40 + lVar11 * 0x48) = 1;
          *(undefined8 *)(local_278 + 0x20 + lVar11 * 0x48) = 0xffffffffffffffff;
          *(uint *)(local_278 + 0x34 + lVar11 * 0x48) = bVar1 - 1;
          *(int *)(local_278 + 0x3c + lVar11 * 0x48) = iVar5;
          *(undefined4 *)(local_278 + 0x10 + lVar11 * 0x48) = 0x100;
          *(undefined4 *)(local_278 + 0x18 + lVar11 * 0x48) = 2;
          *(undefined4 *)(local_278 + 0x14 + lVar11 * 0x48) = 0x20;
          *(undefined4 *)(local_278 + 0x1c + lVar11 * 0x48) = 5;
          local_280 = local_280 | 0x8000000400;
          *(undefined4 *)(*(longlong *)(*plVar10 + lVar21 * 0x10) + -4 + uVar15 * 4) = 5;
        }
        if (*(int *)(*(longlong *)(*plVar10 + lVar21 * 0x10) + uVar15 * 4) != 2) {
          lVar11 = (longlong)(int)local_270;
          uVar3 = *(undefined8 *)(local_248 + 0x10);
          iVar6 = (int)local_270 + 1;
          local_270 = CONCAT44(local_270._4_4_,iVar6);
          if (local_270._4_4_ < iVar6) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_278);
          }
          *(undefined8 *)(local_278 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 8 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x10 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x18 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x20 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x28 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x30 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x38 + lVar11 * 0x48) = 0;
          *(undefined8 *)(local_278 + 0x40 + lVar11 * 0x48) = 0;
          *(undefined4 *)(local_278 + lVar11 * 0x48) = 0x2d;
          *(undefined8 *)(local_278 + 0x28 + lVar11 * 0x48) = uVar3;
          *(undefined4 *)(local_278 + 0x30 + lVar11 * 0x48) = 1;
          *(undefined4 *)(local_278 + 0x38 + lVar11 * 0x48) = 1;
          *(undefined4 *)(local_278 + 0x40 + lVar11 * 0x48) = 1;
          *(undefined8 *)(local_278 + 0x20 + lVar11 * 0x48) = 0xffffffffffffffff;
          *(uint *)(local_278 + 0x34 + lVar11 * 0x48) = (uint)bVar1;
          *(int *)(local_278 + 0x3c + lVar11 * 0x48) = iVar5;
          *(undefined4 *)(local_278 + 0x10 + lVar11 * 0x48) = 0x20;
          *(undefined4 *)(local_278 + 0x18 + lVar11 * 0x48) = 5;
          *(undefined4 *)(local_278 + 0x14 + lVar11 * 0x48) = 0x100;
          *(undefined4 *)(local_278 + 0x1c + lVar11 * 0x48) = 2;
          local_280 = local_280 | 0x40000000080;
          *(undefined4 *)(*(longlong *)(*plVar10 + lVar21 * 0x10) + uVar15 * 4) = 2;
        }
        uVar16 = (ulonglong)local_288;
        plVar17 = local_240;
        lVar21 = local_248;
        param_1 = local_230;
        param_5 = local_228;
      }
      uVar13 = uVar16;
      if (local_250 != 0) {
        if ((int)plVar17[4] == 0) {
          puVar12 = &local_1b0;
          local_1b0 = _DAT_1464aa6e0;
          uStack_1a8 = _DAT_1464aa6e8;
        }
        else {
          puVar12 = &local_200;
          local_200 = *(undefined8 *)((longlong)plVar17 + 0x24);
          uStack_1f8 = *(undefined8 *)((longlong)plVar17 + 0x2c);
        }
        uVar8 = *(undefined4 *)((longlong)puVar12 + 4);
        uVar9 = *(undefined4 *)(puVar12 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
        local_288 = (int)uVar16 + 1;
        uVar13 = (ulonglong)local_288;
        local_168[uVar16 * 4] = *(undefined4 *)puVar12;
        local_168[uVar16 * 4 + 3] = uVar4;
        local_168[uVar16 * 4 + 1] = uVar8;
        local_168[uVar16 * 4 + 2] = uVar9;
        if (1 < *(uint *)(lVar21 + 0x6c)) {
          local_288 = (int)uVar16 + 2;
          uVar13 = (ulonglong)local_288;
        }
      }
      plVar10 = plVar10 + 3;
      local_210 = local_210 + -1;
      uVar16 = uVar13;
    } while (local_210 != 0);
    local_210 = 0;
    param_3 = local_218;
  }
  plVar10 = (longlong *)param_5[0x18];
  if (plVar10 != (longlong *)0x0) {
    lVar21 = (**(code **)(*plVar10 + 0x48))(plVar10);
    plVar17 = (longlong *)(param_1 + 0xa0);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar17,&local_284,*(undefined8 *)(lVar21 + 0x18));
    if ((local_284 == -1) || (lVar11 = *plVar17 + (longlong)local_284 * 0x18, lVar11 == 0)) {
      local_218 = (undefined8 *)(lVar21 + 0x18);
      TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(plVar17,&local_284,&local_218,0);
      lVar11 = *plVar17 + (longlong)local_284 * 0x18;
    }
    uVar13 = local_270;
    if ((*(int *)((longlong)param_5 + 0xd4) - 1U & 0xffffffef) == 0) {
      iVar6 = 4;
    }
    else if ((*(int *)((longlong)param_5 + 0xd4) == 0x21) && ((*(byte *)(param_3 + 0x31a) & 2) != 0)
            ) {
      iVar6 = 0x3b9c9308;
    }
    else {
      iVar6 = 3;
    }
    if (*(int *)(lVar11 + 8) != iVar6) {
      lVar18 = (longlong)(int)local_270;
      uVar8 = *(undefined4 *)(lVar21 + 0x78);
      uVar3 = *(undefined8 *)(lVar21 + 0x18);
      iVar7 = (int)local_270 + 1;
      local_270 = CONCAT44(local_270._4_4_,iVar7);
      if (local_270._4_4_ < iVar7) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_278,uVar13 & 0xffffffff);
      }
      *(undefined8 *)(local_278 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 8 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x10 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x18 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x20 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x28 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x30 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x38 + lVar18 * 0x48) = 0;
      *(undefined8 *)(local_278 + 0x40 + lVar18 * 0x48) = 0;
      *(undefined4 *)(local_278 + lVar18 * 0x48) = 0x2d;
      *(undefined8 *)(local_278 + 0x28 + lVar18 * 0x48) = uVar3;
      *(undefined4 *)(local_278 + 0x30 + lVar18 * 0x48) = uVar8;
      *(undefined4 *)(local_278 + 0x38 + lVar18 * 0x48) = 1;
      *(undefined4 *)(local_278 + 0x40 + lVar18 * 0x48) = 1;
      *(undefined8 *)(local_278 + 0x20 + lVar18 * 0x48) = 0xffffffffffffffff;
      uVar8 = FUN_141e48650(*(undefined4 *)(lVar11 + 8));
      uVar9 = FUN_141e48650(iVar6);
      lVar21 = local_278;
      uVar14 = FUN_141e26f50(uVar8,local_278 + 0x10 + lVar18 * 0x48,local_278 + 0x18 + lVar18 * 0x48
                            );
      local_280._0_4_ = (uint)local_280 | uVar14;
      uVar14 = FUN_141e26f50(uVar9,lVar21 + 0x14 + lVar18 * 0x48,lVar21 + 0x1c + lVar18 * 0x48);
      local_280 = CONCAT44(local_280._4_4_ | uVar14,(uint)local_280);
      *(int *)(lVar11 + 8) = iVar6;
    }
    if (((int)plVar10[4] != 0) && (local_250 != 0)) {
      lVar21 = plVar10[5];
      local_168[(ulonglong)local_288 * 4] = *(undefined4 *)((longlong)plVar10 + 0x24);
      local_168[(ulonglong)local_288 * 4 + 1] = (int)lVar21;
    }
  }
  if ((0 < (int)local_270) || (0 < (int)local_260)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_280,local_238,1);
  }
  lVar11 = local_1e8;
  uVar3 = local_1f0;
  local_298 = local_168;
  FVulkanCmdBuffer::BeginRenderPass(local_238,local_1e8,local_1e8);
  uVar14 = *(uint *)(param_6 + 0x348);
  uVar2 = *(uint *)(param_6 + 0x34c);
  lVar21 = *(longlong *)(local_208 + 0x4f8);
  *(undefined8 *)(lVar21 + 8) = 0;
  *(undefined4 *)(lVar21 + 0x18) = 0;
  *(float *)(lVar21 + 0x10) = (float)uVar14;
  *(float *)(lVar21 + 0x14) = (float)uVar2;
  *(undefined8 *)(lVar21 + 0x1c) = 0x3f800000;
  *(uint *)(lVar21 + 0x28) = uVar14;
  *(undefined4 *)(lVar21 + 0x24) = 0;
  *(uint *)(lVar21 + 0x2c) = uVar2;
  *(undefined1 *)(lVar21 + 0x38) = 0;
  *(undefined8 *)(local_230 + 0x1d0) = uVar3;
  *(longlong *)(local_230 + 0x1c8) = lVar11;
  *(undefined1 *)(local_230 + 0x1c0) = 1;
  if (local_268 != 0) {
    FMemory::Free();
  }
  if (local_278 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e42150 FUN_141e42150 body=78 status=ok
// SIG undefined FUN_141e42150(void)

undefined8 FUN_141e42150(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 3;
  case 2:
    return 4;
  case 3:
    return 6;
  case 4:
    return 2;
  case 5:
    return 5;
  case 6:
    return 0;
  case 7:
    return 7;
  default:
    return 0x7fffffff;
  }
}



// FUNCTION 141e421c0 FUN_141e421c0 body=662 status=ok
// SIG undefined FUN_141e421c0(void)

void FUN_141e421c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined8 local_78;
  int local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  IsRHIDeviceIntel();
  plVar1 = (longlong *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != *(int *)(param_1 + 0x38)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
  }
  if ((DAT_1464c9c14 < 2) &&
     (*(undefined4 *)(param_1 + 0x1a0) = 0, *(int *)(param_1 + 0x1a4) != *(int *)(param_1 + 0x38)))
  {
    TArray<float,FDefaultAllocator>::ResizeTo();
  }
  puVar8 = *(undefined8 **)(param_1 + 0x30);
  puVar2 = puVar8 + (longlong)*(int *)(param_1 + 0x38) * 3;
  for (; puVar8 != puVar2; puVar8 = puVar8 + 3) {
    piVar7 = (int *)0x0;
    iVar4 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar4 + 1;
    if (*(int *)(param_1 + 0x194) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 8);
    if (DAT_1464c9c14 < 2) {
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(int *)(param_1 + 0x1a0) = iVar4 + 1;
      if (*(int *)(param_1 + 0x1a4) < iVar4 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x198,iVar4);
      }
      piVar7 = (int *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 4);
    }
    lVar5 = 0;
    TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
    ::FindId(param_2,local_res8,puVar8);
    if (local_res8[0] != -1) {
      lVar5 = (longlong)local_res8[0] * 0x30 + *param_2;
    }
    puVar6 = (undefined8 *)(lVar5 + 0x18);
    if (lVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 == (undefined8 *)0x0) {
      local_58 = 0x20;
      local_54 = 0;
      local_4c = 0;
      local_44 = *(undefined4 *)(puVar8 + 1);
      uStack_40 = (undefined4)*puVar8;
      uStack_3c = (undefined4)((ulonglong)*puVar8 >> 0x20);
      iVar4 = (*DAT_146ab0120)(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 8),&local_58,0,
                               puVar3);
      if (iVar4 != 0) {
        FUN_141e67d70(iVar4,
                      "VulkanRHI::vkCreateDescriptorSetLayout(Device->GetInstanceHandle(), &DescriptorLayoutInfo, VULKAN_CPU_ALLOCATOR, LayoutHandle)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",
                      0x538);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        UNLOCK();
        iVar4 = (int)DAT_146aafd68;
        DAT_146aafd68 = DAT_146aafd68 + 1;
        *piVar7 = iVar4 + 1;
      }
      local_70 = 0;
      local_78 = *puVar3;
      if (piVar7 != (int *)0x0) {
        local_70 = *piVar7;
      }
      local_60 = &local_78;
      local_68 = puVar8;
      FUN_141e32790(param_2,local_res18,&local_68,0);
    }
    else {
      *puVar3 = *puVar6;
      if (piVar7 != (int *)0x0) {
        *piVar7 = *(int *)(puVar6 + 1);
      }
    }
  }
  if (*(int *)(param_1 + 0x44) == -1) {
    FUN_141e42460(param_1);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0x22;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
  *(longlong *)(param_1 + 0x1c8) = *plVar1;
  return;
}



// FUNCTION 141e42460 FUN_141e42460 body=394 status=ok
// SIG undefined FUN_141e42460(void)

void FUN_141e42460(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  int *local_18;
  int *local_10;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafd90);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafd90);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aafe94) && (_Init_thread_header(&DAT_146aafe94), DAT_146aafe94 == -1))
  {
    atexit(FUN_143e9e080);
    _Init_thread_footer(&DAT_146aafe94);
  }
  local_res8[0] = FCrc::MemCrc32(param_1,0x2c);
  if (DAT_1464c9618 != DAT_1464c9644) {
    puVar3 = DAT_1464c9650;
    if (DAT_1464c9650 == (undefined *)0x0) {
      puVar3 = &DAT_1464c9648;
    }
    iVar1 = *(int *)(puVar3 + ((longlong)DAT_1464c9658 - 1U & (longlong)local_res8[0]) * 4);
    while (iVar1 != -1) {
      lVar5 = (longlong)iVar1;
      if (*(int *)(DAT_1464c9610 + lVar5 * 0x10) == local_res8[0]) {
        puVar6 = (undefined4 *)(DAT_1464c9610 + lVar5 * 0x10);
        if (iVar1 != -1) goto LAB_141e42536;
        break;
      }
      iVar1 = *(int *)(DAT_1464c9610 + lVar5 * 0x10 + 8);
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_141e42536:
  puVar4 = puVar6 + 1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  if (puVar4 == (undefined4 *)0x0) {
    local_res10[0] = DAT_1464c9660;
    DAT_1464c9660 = DAT_1464c9660 + 1;
    local_18 = local_res8;
    local_10 = local_res10;
    FUN_1417ab330(&DAT_1464c9610,local_res18,&local_18,0);
    puVar4 = (undefined4 *)(DAT_1464c9610 + 4 + (longlong)local_res18[0] * 0x10);
  }
  *(undefined4 *)(param_1 + 0x44) = *puVar4;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafd90);
  return;
}



// FUNCTION 141e425f0 CopyDataDeep body=223 status=ok
// SIG undefined CopyDataDeep(void)

void TDataKeyBase<1>::CopyDataDeep(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  plVar3 = (longlong *)operator_new(0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    *plVar3 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar3,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(longlong)iVar1);
    }
  }
  puVar2 = (undefined8 *)(param_2 + 0x10);
  if (puVar2 == &local_res8) {
    if (plVar3 == (longlong *)0x0) goto LAB_141e426ba;
    plVar4 = plVar3;
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  }
  else {
    plVar4 = (longlong *)*puVar2;
    *puVar2 = plVar3;
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(param_2 + 8) = plVar3;
      return;
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
  }
  FMemory::operator_delete(plVar4,0x10);
LAB_141e426ba:
  *(undefined8 *)(param_2 + 8) = *puVar2;
  return;
}



// FUNCTION 141e426d0 FUN_141e426d0 body=325 status=ok
// SIG undefined FUN_141e426d0(void)

void FUN_141e426d0(longlong param_1,longlong param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uVar2 = (ulonglong)param_5;
  local_48 = 0xd;
  uStack_28 = (&DAT_146aaf8a0)[param_3];
  local_34 = 0;
  local_24 = 0;
  local_44 = 0;
  local_3c = 0;
  *(uint *)(param_1 + 0x30) = param_4;
  *(uint *)(param_1 + 0x34) = param_5;
  uStack_30 = (undefined4)*(undefined8 *)(param_2 + 0x50);
  local_2c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  local_1c = 0;
  switch(uStack_28) {
  case 4:
  case 0x10:
  case 0x46:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x7c:
    param_5 = param_5 >> 2;
    break;
  default:
    param_5 = param_5 >> 1;
    break;
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2c:
  case 0x40:
  case 0x4d:
  case 0x51:
  case 0x53:
  case 0x62:
  case 99:
  case 100:
  case 0x7a:
  case 0x7d:
  case 0x7e:
  case 0x81:
    param_5 = param_5 >> 3;
    break;
  case 0x5b:
  case 0x5c:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x67:
    param_5 = param_5 >> 4;
    break;
  case 0x6b:
  case 0x6d:
    param_5 = param_5 >> 5;
  }
  if (*(uint *)(*(longlong *)(param_1 + 0x18) + 0x7c4) <= param_5) {
    uVar2 = 0xffffffffffffffff;
  }
  if ((ulonglong)*(uint *)(param_2 + 0x20) < uVar2 + param_4) {
    uVar2 = 0xffffffffffffffff;
  }
  uStack_18 = (undefined4)uVar2;
  local_14 = (undefined4)(uVar2 >> 0x20);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_2 + 0x14) & 0xc;
  uStack_20 = param_4;
  iVar1 = (*DAT_146ab0080)(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),&local_48,0,
                           param_1 + 0x20);
  if (iVar1 != 0) {
    FUN_141e67d70(iVar1,
                  "VulkanRHI::vkCreateBufferView(GetParent()->GetInstanceHandle(), &ViewInfo, VULKAN_CPU_ALLOCATOR, &View)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",0x5a3
                 );
  }
  if (DAT_1464c9c14 < 2) {
    LOCK();
    UNLOCK();
    iVar1 = (int)DAT_146aafd50;
    DAT_146aafd50 = DAT_146aafd50 + 1;
    *(int *)(param_1 + 0x28) = iVar1 + 1;
  }
  return;
}



// FUNCTION 141e428b0 FUN_141e428b0 body=678 status=ok
// SIG undefined FUN_141e428b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141e428b0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 local_res18 [4];
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 **local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 *puStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_res18[0] = param_3;
  puVar6 = (undefined8 *)operator_new(0x4a8);
  puVar9 = (undefined8 *)0x0;
  puVar7 = puVar9;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = *param_1;
    *puVar6 = &PTR__scalar_deleting_destructor__144ea4c60;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
    *(undefined2 *)(puVar6 + 6) = 0x100;
    *puVar6 = &PTR_FUN_144ea4ca0;
    puVar6[4] = &PTR_LAB_144ea4ca8;
    FUN_141e59e30(puVar6 + 7);
    *(undefined1 *)(puVar6 + 0x94) = 0;
    puVar7 = puVar6;
  }
  FUN_141e5ef90(puVar7 + 7,*param_2,*(undefined4 *)(param_2[1] + 0xd0));
  *(undefined1 *)(puVar7 + 0x94) = 1;
  QueryPerformanceCounter(&local_80);
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (undefined8 *)(param_2[1] + 0x30);
  if (param_2[1] == 0) {
    local_70 = puVar9;
  }
  local_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  if (param_2[4] != 0) {
    local_68 = param_2[4] + 0x30;
  }
  if (param_2[5] != 0) {
    lStack_60 = param_2[5] + 0x30;
  }
  if (param_2[2] != 0) {
    local_58 = param_2[2] + 0x30;
    puStack_50 = (undefined8 *)(param_2[3] + 0x30);
    if (param_2[3] == 0) {
      puStack_50 = puVar9;
    }
  }
  FUN_141e44360(param_1,*param_4,&local_70,puVar7);
  if (puVar7[2] == 0) {
    (**(code **)*puVar7)(puVar7,1);
    plVar4 = (longlong *)param_4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    puVar7 = (undefined8 *)0x0;
  }
  else {
    QueryPerformanceCounter(&local_78);
    lVar8 = operator_new(0x50);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)
               FVulkanRHIGraphicsPipelineState::FVulkanRHIGraphicsPipelineState
                         (lVar8,param_2,puVar7,*(undefined4 *)((longlong)param_2 + 0x4c));
    }
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    local_b8 = puVar9;
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    }
    local_a0 = local_res18;
    local_98 = &local_b8;
    FUN_141e31890(param_1 + 8,local_b0,&local_a0,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
    local_a8 = local_b8[3];
    local_90 = &stack0x00000028;
    local_88 = &local_a8;
    FUN_141e31890(param_1 + 0x3c,local_ac,&local_90,0);
    puVar7 = local_b8;
    plVar4 = (longlong *)param_4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return puVar7;
}



// FUNCTION 141e42b60 FUN_141e42b60 body=922 status=ok
// SIG undefined FUN_141e42b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141e42b60(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_2f8;
  undefined1 local_2f4 [20];
  undefined4 local_2e0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [312];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar6 = (undefined8 *)0x0;
  puVar8 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = *param_1;
    *puVar2 = &PTR__scalar_deleting_destructor__144ea4c60;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined2 *)(puVar2 + 6) = 0x100;
    *puVar2 = &PTR__scalar_deleting_destructor__144ea4c68;
    puVar2[4] = &PTR_LAB_144ea4c70;
    puVar2[7] = 0;
    puVar8 = puVar2;
  }
  local_198 = (longlong *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0xffffffff;
  FDescriptorSetRemappingInfo::FDescriptorSetRemappingInfo(local_180);
  local_298 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_290 = 0;
  local_270 = 0;
  local_240 = 0;
  local_220 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_328 = &local_298;
  local_278 = 0;
  local_268 = 0xffffffff;
  local_264 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_228 = 0;
  local_218 = 0xffffffff;
  local_214 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_141e4ac10(&local_1c8,0x20,0,param_2 + 0x58);
  local_310 = 0;
  local_308 = 0;
  FUN_141e33040(&local_1c8,&local_298,&local_310);
  lVar3 = FUN_141e478a0(param_1,&local_1c8,1);
  if (*(char *)(lVar3 + 0x210) == '\0') {
    *(undefined8 *)(lVar3 + 0x1f0) = *(undefined8 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar3 + 0x1e8) = *(undefined8 *)(lVar3 + 0x78);
    *(undefined8 *)(lVar3 + 0x1f8) = *(undefined8 *)(lVar3 + 0x88);
    *(longlong **)(lVar3 + 0x208) = (longlong *)(lVar3 + 0x58);
    if (0 < *(int *)(lVar3 + 0x60)) {
      uVar5 = 1;
      puVar2 = puVar6;
      do {
        if (0 < *(int *)(*(longlong *)(lVar3 + 0x58) + 8 + (longlong)puVar6)) {
          *(uint *)(lVar3 + 0x200) = *(uint *)(lVar3 + 0x200) | uVar5;
        }
        uVar9 = (int)puVar2 + 1;
        puVar2 = (undefined8 *)(ulonglong)uVar9;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
        puVar6 = puVar6 + 3;
      } while ((int)uVar9 < *(int *)(lVar3 + 0x60));
    }
    *(undefined1 *)(lVar3 + 0x210) = 1;
  }
  uVar4 = FVulkanShader::GetOrCreateHandle(param_2 + 0x38,lVar3,*(undefined4 *)(lVar3 + 0x50));
  local_2f8 = 0x1d;
  _guard_xfg_dispatch_icall_nop(local_2f4,0,0x5c);
  local_2e0 = 0x12;
  local_2cc = 0x20;
  local_2c8 = uVar4;
  TCString<wchar_t>::SprintfImpl
            (local_48,"main_%0.8x_%0.8x",(longlong)*(int *)(param_2 + 0x188) << 2,
             *(undefined4 *)(param_2 + 0xf4));
  local_2c0 = local_48;
  local_2b0 = *(undefined8 *)(lVar3 + 0x1e0);
  local_328 = (undefined8 *)0x0;
  local_320 = puVar8 + 2;
  iVar1 = (*DAT_146ab00f0)(*(undefined8 *)(*param_1 + 8),param_1[0x31],1,&local_2f8);
  if (iVar1 != 0) {
    FUN_141e67d70(iVar1,
                  "VulkanRHI::vkCreateComputePipelines(Device->GetInstanceHandle(), PipelineCache, 1, &PipelineInfo, VULKAN_CPU_ALLOCATOR, &Pipeline->Pipeline)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp",
                  0x737);
  }
  local_318 = puVar8[2];
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*param_1 + 0x1920,&local_318);
  puVar8[3] = lVar3;
  local_200 = 0;
  if (local_208 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_248);
  local_250 = 0;
  if (local_258 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_298);
  FDescriptorSetRemappingInfo::~FDescriptorSetRemappingInfo(local_180);
  plVar7 = local_198;
  for (iVar1 = (int)local_190; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 3;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  return puVar8;
}



// FUNCTION 141e42f00 FUN_141e42f00 body=49 status=ok
// SIG undefined FUN_141e42f00(void)

longlong * FUN_141e42f00(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIComputeShader,5,32>_>
                    (*(longlong *)(param_1 + 0x70) + 0x470,param_4);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e42f40 CreateDescriptorSets body=824 status=ok
// SIG undefined CreateDescriptorSets(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FVulkanDescriptorSetCache::FCachedPool::CreateDescriptorSets
                    (uint *param_1,undefined4 *param_2,longlong param_3,longlong *param_4,
                    void *param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d4 [4];
  longlong *local_d0;
  longlong local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined4 *local_b0;
  void *local_a8;
  undefined8 local_a0 [8];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong uVar15;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar12 = 0;
  local_a8 = param_5;
  local_60 = (ulonglong)*(uint *)(param_4 + 1);
  local_d0 = param_4;
  local_c8 = param_3;
  local_b0 = param_2;
  if (0 < (int)*(uint *)(param_4 + 1)) {
    local_108 = 0;
    uVar15 = uVar12;
    do {
      plVar13 = (longlong *)(*param_4 + uVar12);
      if ((int)plVar13[3] == 0) {
        local_a0[uVar15] = 0;
        lVar10 = local_108;
      }
      else {
        if ((char)plVar13[10] != '\0') {
          lVar10 = plVar13[6];
          iVar11 = ((int)plVar13[3] + 1) * 0xc;
          TDataKeyBase<1>::SetData(plVar13 + 7,lVar10,iVar11);
          uVar4 = FCrc::MemCrc32(lVar10,iVar11,0);
          *(undefined4 *)(plVar13 + 7) = uVar4;
          *(undefined1 *)(plVar13 + 10) = 0;
        }
        lVar3 = local_c8;
        lVar10 = local_108;
        TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x1c,&local_d8,plVar13 + 7);
        if (local_d8 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0x1c) + (longlong)local_d8 * 0x28;
        }
        puVar6 = (undefined8 *)(lVar9 + 0x18);
        if (lVar9 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        if (puVar6 == (undefined8 *)0x0) {
          uVar7 = (ulonglong)(param_1[0x1e] - param_1[0x29]);
          if (param_1[0x1e] - param_1[0x29] == *param_1) {
LAB_141e43274:
            return uVar7 & 0xffffffffffffff00;
          }
          local_100 = 0x22;
          local_108 = *(longlong *)(lVar10 + *(longlong *)(lVar3 + 0x188));
          uStack_f4 = 0;
          local_e4 = 0;
          local_fc = 0;
          uStack_f8 = 0;
          uStack_f0 = (undefined4)*(undefined8 *)(param_1 + 6);
          uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
          uStack_e0 = &local_108;
          uStack_e8 = 1;
          puVar6 = local_a0 + uVar15;
          uVar7 = (*DAT_146ab0148)(*(undefined8 *)(*(longlong *)(param_1 + 2) + 8),&local_100,puVar6
                                  );
          if ((int)uVar7 != 0) goto LAB_141e43274;
          puVar8 = (undefined4 *)FVulkanDescriptorSetWriter::GetKey();
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          local_100 = *puVar8;
          TDataKeyBase<1>::CopyDataDeep(puVar8,&local_100);
          local_c0 = &local_100;
          local_b8 = puVar6;
          FUN_141e31b50(param_1 + 0x1c,local_d4,&local_c0,0);
          plVar2 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
          if (plVar2 != (longlong *)0x0) {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            FMemory::operator_delete(plVar2,0x10);
          }
          uVar7 = 0;
          uVar1 = *puVar6;
          uVar14 = 0;
          if ((int)plVar13[3] != 0) {
            do {
              uVar5 = (int)uVar7 + 1;
              *(undefined8 *)(uVar7 * 0x40 + 0x10 + *plVar13) = uVar1;
              uVar14 = *(uint *)(plVar13 + 3);
              uVar7 = (ulonglong)uVar5;
            } while (uVar5 < uVar14);
          }
          local_118 = 0;
          (*DAT_146ab0158)(*(undefined8 *)(*(longlong *)(param_1 + 2) + 8),uVar14,*plVar13,0);
          param_4 = local_d0;
        }
        else {
          local_a0[uVar15] = *puVar6;
          param_4 = local_d0;
        }
      }
      local_108 = lVar10 + 8;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar12 = uVar12 + 0x58;
    } while ((int)uVar14 < (int)local_60);
  }
  _Dst = local_a8;
  local_100 = *local_b0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  TDataKeyBase<1>::CopyDataDeep(local_b0,&local_100);
  local_c0 = &local_100;
  local_b8 = local_a0;
  FUN_141e31ec0(param_1 + 8,local_d4,&local_c0,0);
  plVar13 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
  if (plVar13 != (longlong *)0x0) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar13,0x10);
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst,local_a0,(longlong)(int)local_60 << 3);
  uVar14 = DAT_1464aaa90;
  param_1[0x30] = DAT_1464aaa90;
  return CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
}



// FUNCTION 141e43280 FUN_141e43280 body=1154 status=ok
// SIG undefined FUN_141e43280(void)

void FUN_141e43280(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong local_res8;
  longlong local_res20;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong uVar17;
  
  uVar11 = 0;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x50);
  lVar19 = (longlong)iVar8;
  uVar14 = uVar11;
  local_res8 = lVar19;
  if (0 < iVar8) {
    do {
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x48) + uVar14;
      if (DAT_1464c9c14 < 2) {
        iVar9 = *(int *)(param_1 + 0x18);
        iVar12 = *(int *)(lVar21 + 8) + 1;
        iVar7 = iVar9 + iVar12;
        *(int *)(param_1 + 0x18) = iVar7;
        if (*(int *)(param_1 + 0x1c) < iVar7) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xc),0,
                   (longlong)iVar12 * 0xc);
      }
      iVar9 = *(int *)(lVar21 + 8);
      iVar7 = *(int *)(param_1 + 0x48);
      iVar12 = iVar7 + iVar9;
      *(int *)(param_1 + 0x48) = iVar12;
      if (*(int *)(param_1 + 0x4c) < iVar12) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x40);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1 + 0x40)),0,
                 (longlong)iVar9 << 6);
      uVar4 = *(ushort *)(lVar21 + 0x10);
      iVar9 = *(int *)(param_1 + 0x28);
      iVar7 = iVar9 + (uint)uVar4;
      *(int *)(param_1 + 0x28) = iVar7;
      if (*(int *)(param_1 + 0x2c) < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow((longlong *)(param_1 + 0x20));
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 0x18),0,
                 (ulonglong)uVar4 * 0x18);
      uVar4 = *(ushort *)(lVar21 + 0x12);
      iVar9 = *(int *)(param_1 + 0x38);
      iVar7 = iVar9 + (uint)uVar4;
      *(int *)(param_1 + 0x38) = iVar7;
      if (*(int *)(param_1 + 0x3c) < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x30);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x18),0,
                 (ulonglong)uVar4 * 0x18);
      iVar9 = *(int *)(lVar21 + 8) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar9;
      if (*(int *)(param_1 + 0x5c) < iVar9) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x50);
      }
      local_res8 = local_res8 + -1;
      uVar14 = uVar14 + 0x18;
    } while (local_res8 != 0);
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x50),0xff,(longlong)*(int *)(param_1 + 0x58));
  plVar1 = (longlong *)(param_1 + 0x98);
  iVar9 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar9 + iVar8;
  if (*(int *)(param_1 + 0xa4) < iVar9 + iVar8) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
  }
  puVar10 = (undefined8 *)((longlong)iVar9 * 0x58 + *plVar1);
  if (iVar8 != 0) {
    lVar21 = (longlong)puVar10 + 0x2c;
    iVar9 = iVar8;
    do {
      *puVar10 = 0;
      puVar10 = puVar10 + 0xb;
      *(undefined8 *)(lVar21 + -0x24) = 0;
      *(undefined8 *)(lVar21 + -0x1c) = 0;
      *(undefined4 *)(lVar21 + -0x14) = 0;
      *(undefined8 *)(lVar21 + -0xc) = 0;
      *(undefined8 *)(lVar21 + -4) = 0;
      *(undefined8 *)(lVar21 + 4) = 0;
      *(undefined4 *)(lVar21 + 0xc) = 0;
      *(undefined8 *)(lVar21 + 0x14) = 0;
      *(undefined8 *)(lVar21 + 0x1c) = 0;
      *(undefined1 *)(lVar21 + 0x24) = 1;
      lVar21 = lVar21 + 0x58;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  lVar21 = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(lVar21 + 0x658);
  uVar14 = uVar11;
  if (DAT_1464c9c14 < 2) {
    uVar14 = *(ulonglong *)(param_1 + 0x10);
  }
  local_res20 = *(longlong *)(param_1 + 0x40);
  local_88 = *(longlong *)(param_1 + 0x20);
  local_80 = *(longlong *)(param_1 + 0x30);
  local_78 = *(longlong *)(param_1 + 0x50);
  local_58 = (void *)0x0;
  local_4c = 0;
  local_50 = iVar8;
  if (0 < iVar8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  pvVar6 = local_58;
  _guard_xfg_dispatch_icall_nop(local_58,0,lVar19 * 4);
  uVar15 = 0;
  uVar17 = uVar11;
  uVar18 = uVar11;
  uVar20 = uVar11;
  if (0 < lVar19) {
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x48);
      *(int *)((longlong)pvVar6 + uVar18 * 4) = (int)uVar17;
      lVar13 = lVar13 + uVar20;
      iVar9 = FUN_141e54350((longlong)(int)uVar11 * 0x58 + *plVar1,lVar13,uVar14,local_res20,
                            local_88,local_80,local_78,uVar5,lVar21 + 0x668);
      uVar15 = uVar15 + iVar9;
      uVar17 = (ulonglong)uVar15;
      if (uVar14 != 0) {
        puVar10 = (undefined8 *)(uVar14 + (longlong)*(int *)(lVar13 + 8) * 0xc);
        *puVar10 = 0xffffffffffffffff;
        *(undefined4 *)(puVar10 + 1) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x198) + uVar18 * 4);
        uVar14 = (longlong)puVar10 + 0xc;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      local_78 = local_78 + *(int *)(lVar13 + 8);
      uVar18 = uVar18 + 1;
      local_res20 = local_res20 + (longlong)*(int *)(lVar13 + 8) * 0x40;
      local_88 = local_88 + (ulonglong)*(ushort *)(lVar13 + 0x10) * 0x18;
      local_80 = local_80 + (ulonglong)*(ushort *)(lVar13 + 0x12) * 0x18;
      uVar20 = uVar20 + 0x18;
    } while ((longlong)uVar18 < lVar19);
  }
  lVar21 = 0;
  plVar2 = (longlong *)(param_1 + 0x80);
  iVar9 = *(int *)(param_1 + 0x88);
  iVar7 = iVar9 + (uint)uVar17;
  *(int *)(param_1 + 0x88) = iVar7;
  uVar16 = (uint)uVar17;
  if (*(int *)(param_1 + 0x8c) < iVar7) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2);
    uVar16 = uVar15;
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar2 + (longlong)iVar9 * 4),0,(longlong)(int)uVar16 << 2);
  lVar13 = lVar21;
  if (0 < lVar19) {
    do {
      lVar3 = lVar21 * 4;
      lVar21 = lVar21 + 1;
      *(ulonglong *)(lVar13 + 0x10 + *plVar1) =
           *plVar2 + (ulonglong)*(uint *)((longlong)pvVar6 + lVar3) * 4;
      lVar13 = lVar13 + 0x58;
    } while (lVar21 < lVar19);
  }
  iVar9 = *(int *)(param_1 + 0x70);
  iVar8 = iVar9 + iVar8;
  *(int *)(param_1 + 0x70) = iVar8;
  if (*(int *)(param_1 + 0x74) < iVar8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x68);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar9 * 8),0,lVar19 * 8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return;
}



// FUNCTION 141e43710 FUN_141e43710 body=366 status=ok
// SIG undefined FUN_141e43710(void)

undefined8 *
FUN_141e43710(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 *local_res20;
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_4 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_4,uVar1,0);
  local_res10[0] = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIDomainShader,2,4>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,2,4);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_4,local_res10[0]);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = local_res10;
    local_res20 = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    local_40 = &local_res20;
    FUN_141e32e00(lVar2 + 0x518,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e43880 FUN_141e43880 body=104 status=ok
// SIG undefined FUN_141e43880(void)

void FUN_141e43880(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x88);
  if (lVar1 != 0) {
    FUN_141e577a0(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0xe8),
                  *(undefined8 *)(param_1 + 0xe0));
    return;
  }
  return;
}



// FUNCTION 141e438f0 FUN_141e438f0 body=366 status=ok
// SIG undefined FUN_141e438f0(void)

undefined8 *
FUN_141e438f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 *local_res20;
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_4 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_4,uVar1,0);
  local_res10[0] = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIGeometryShader,4,8>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,4,8);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_4,local_res10[0]);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = local_res10;
    local_res20 = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    local_40 = &local_res20;
    FUN_141e32e00(lVar2 + 0x5b8,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e43a60 FUN_141e43a60 body=2237 status=ok
// SIG undefined FUN_141e43a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_141e43a60(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  char cVar19;
  char cVar20;
  undefined4 **ppuVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_988 [32];
  uint local_968;
  int local_960;
  longlong local_958;
  undefined4 *local_950;
  longlong local_948;
  undefined1 local_934 [16];
  undefined4 local_924;
  undefined4 local_91c;
  undefined4 local_914;
  undefined4 local_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined8 local_900;
  undefined4 local_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  uint local_8e4;
  uint uStack_8e0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined1 local_838 [20];
  uint local_824;
  longlong local_820;
  uint local_818;
  longlong local_810;
  undefined1 local_7f8 [64];
  longlong local_7b8;
  undefined4 local_7b0;
  undefined1 local_7a8 [64];
  longlong local_768;
  undefined4 local_760;
  undefined1 local_3c8 [864];
  undefined4 *local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined4 *puStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_988;
  local_948 = param_2;
  puVar11 = (undefined4 *)operator_new(0x188);
  puVar16 = (undefined4 *)0x0;
  if (puVar11 == (undefined4 *)0x0) {
    local_950 = (undefined4 *)0x0;
    puVar11 = puVar16;
  }
  else {
    *puVar11 = 0;
    *(undefined1 *)(puVar11 + 1) = 0;
    *(undefined2 *)((longlong)puVar11 + 6) = 0;
    puVar11[3] = 0;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0;
    *(undefined8 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 10) = 0;
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined8 *)(puVar11 + 0xe) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x12) = 0;
    local_950 = puVar11;
    _guard_xfg_dispatch_icall_nop(puVar11 + 0x27,0,0x50);
    _guard_xfg_dispatch_icall_nop(puVar11 + 0x22,0,100);
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + 0x3c) = 0;
    *(undefined8 *)(puVar11 + 0x3e) = 0;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x42) = 0;
    *(undefined8 *)(puVar11 + 0x48) = 0;
    *(undefined8 *)(puVar11 + 0x4a) = 0;
    *(undefined8 *)(puVar11 + 0x5c) = 0;
    *(undefined8 *)(puVar11 + 0x5e) = 0;
    *(undefined1 *)(puVar11 + 0x60) = 0;
    *(undefined8 *)(puVar11 + 0x14) = 0;
    *(undefined8 *)(puVar11 + 0x16) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)(puVar11 + 0x1a) = 0;
    *(undefined8 *)(puVar11 + 0x1c) = 0;
    *(undefined8 *)(puVar11 + 0x1e) = 0;
    *(undefined8 *)(puVar11 + 0x52) = 0;
    *(undefined8 *)(puVar11 + 0x54) = 0;
    *(undefined8 *)(puVar11 + 0x56) = 0;
    *(undefined8 *)(puVar11 + 0x58) = 0;
    *(undefined8 *)(puVar11 + 0x5a) = 0;
  }
  local_60 = 0;
  lStack_58 = 0;
  local_68 = (undefined4 *)(*(longlong *)(param_2 + 8) + 0x30);
  if (*(longlong *)(param_2 + 8) == 0) {
    local_68 = puVar16;
  }
  local_50 = 0;
  puStack_48 = (undefined4 *)0x0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    local_60 = *(longlong *)(param_2 + 0x20) + 0x30;
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lStack_58 = *(longlong *)(param_2 + 0x28) + 0x30;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    local_50 = *(longlong *)(param_2 + 0x10) + 0x30;
    puStack_48 = (undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x30);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      puStack_48 = puVar16;
    }
  }
  FUN_141e59e30(local_838);
  uVar12 = FUN_141e48f20(param_1,param_2,&local_68,local_838);
  *(undefined8 *)(puVar11 + 0x5e) = uVar12;
  lVar5 = *(longlong *)(*param_1 + 0x18b0);
  FUN_141e389d0(local_3c8,param_2);
  lVar13 = FUN_141e48d10(lVar5 + 0x2e0,*(undefined8 *)(lVar5 + 0x188),local_3c8);
  *(longlong *)(puVar11 + 0x5c) = lVar13;
  *(undefined1 *)(puVar11 + 0x60) = 0;
  lVar5 = *(longlong *)(param_2 + 0x18);
  *(undefined2 *)((longlong)puVar11 + 6) = *(undefined2 *)(lVar13 + 0xd8);
  iVar8 = *(int *)(param_2 + 0x4c);
  uVar10 = 0;
  if (lVar5 == 0) {
    *(undefined2 *)(puVar11 + 2) = 0;
    if (iVar8 == 0) {
      uVar10 = 3;
    }
    else if (iVar8 == 1) {
      uVar10 = 4;
    }
    else if (iVar8 == 2) {
      uVar10 = 1;
    }
    else if (iVar8 != 4) {
      uVar10 = 0x7fffffff;
    }
  }
  else {
    switch(iVar8) {
    case 0:
      *(undefined2 *)(puVar11 + 2) = 3;
      uVar10 = 10;
      break;
    default:
      *(undefined2 *)(puVar11 + 2) = 0;
      uVar10 = 0x7fffffff;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      uVar10 = 10;
      *(short *)(puVar11 + 2) = (short)iVar8 + -5;
    }
  }
  puVar11[3] = uVar10;
  iVar8 = (uint)*(byte *)(*(longlong *)(puVar11 + 0x5c) + 0x335) + puVar11[6];
  puVar11[6] = iVar8;
  if ((int)puVar11[7] < iVar8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar11 + 4);
  }
  puVar14 = puVar16;
  puVar15 = puVar16;
  puVar23 = puVar16;
  if (0 < (int)puVar11[6]) {
    do {
      lVar5 = *(longlong *)(param_2 + 0x30);
      lVar13 = *(longlong *)(puVar11 + 4);
      uVar22 = (int)puVar23 + 1;
      *(bool *)((longlong)puVar14 + lVar13) = *(int *)((longlong)puVar15 + lVar5 + 0x18) != 0;
      *(undefined1 *)((longlong)puVar14 + lVar13 + 1) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x24);
      *(undefined1 *)((longlong)puVar14 + lVar13 + 2) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x1c);
      *(undefined1 *)((longlong)puVar14 + lVar13 + 3) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x20);
      *(undefined1 *)((longlong)puVar14 + lVar13 + 4) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x30);
      *(undefined1 *)((longlong)puVar14 + lVar13 + 5) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x28);
      *(undefined1 *)((longlong)puVar14 + lVar13 + 6) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x2c);
      *(undefined1 *)((longlong)puVar14 + lVar13 + 7) =
           *(undefined1 *)((longlong)puVar15 + lVar5 + 0x34);
      puVar14 = puVar14 + 2;
      puVar15 = puVar15 + 8;
      puVar23 = (undefined4 *)(ulonglong)uVar22;
    } while ((int)uVar22 < (int)puVar11[6]);
  }
  iVar8 = puVar11[0xe];
  puVar11[0xe] = local_824 + iVar8;
  if ((int)puVar11[0xf] < (int)(local_824 + iVar8)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar11 + 0xc);
  }
  puVar14 = puVar16;
  if (local_824 != 0) {
    do {
      lVar5 = *(longlong *)(puVar11 + 0xc);
      lVar13 = (longlong)(int)puVar14;
      uVar22 = (int)puVar14 + 1;
      *(undefined2 *)(lVar5 + 4 + lVar13 * 8) = *(undefined2 *)(local_820 + (longlong)puVar14 * 0xc)
      ;
      *(undefined2 *)(lVar5 + 6 + lVar13 * 8) =
           *(undefined2 *)(local_820 + 8 + (longlong)puVar14 * 0xc);
      *(undefined4 *)(lVar5 + lVar13 * 8) = *(undefined4 *)(local_820 + 4 + (longlong)puVar14 * 0xc)
      ;
      puVar14 = (undefined4 *)(ulonglong)uVar22;
    } while (uVar22 < local_824);
  }
  iVar8 = puVar11[0x12];
  puVar11[0x12] = local_818 + iVar8;
  if ((int)puVar11[0x13] < (int)(local_818 + iVar8)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar11 + 0x10);
  }
  puVar14 = puVar16;
  if (local_818 != 0) {
    do {
      uVar22 = (int)puVar14 + 1;
      puVar15 = (undefined4 *)((longlong)puVar14 * 0x10 + local_810);
      puVar14 = (undefined4 *)((longlong)(int)puVar14 * 0x10 + *(longlong *)(puVar11 + 0x10));
      puVar14[1] = puVar15[1];
      puVar14[2] = puVar15[2];
      *puVar14 = *puVar15;
      puVar14[3] = puVar15[3];
      puVar14 = (undefined4 *)(ulonglong)uVar22;
    } while (uVar22 < local_818);
  }
  lVar5 = *(longlong *)(puVar11 + 0x5e);
  iVar8 = puVar11[10];
  iVar4 = *(int *)(lVar5 + 0x48);
  iVar9 = iVar8 + iVar4;
  puVar11[10] = iVar9;
  if ((int)puVar11[0xb] < iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar11 + 8);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar8 * 0x10 + *(longlong *)(puVar11 + 8)),0,(longlong)iVar4 << 4);
  local_968 = 0;
  puVar14 = puVar11;
  if (0 < *(int *)(lVar5 + 0x48)) {
    local_958 = 0;
    puVar15 = puVar16;
    puVar23 = puVar16;
    do {
      local_960 = 0;
      lVar13 = local_958;
      puVar14 = puVar16;
      uVar22 = (uint)puVar15;
      if (0 < *(int *)((longlong)puVar23 + *(longlong *)(lVar5 + 0x40) + 8)) {
        do {
          plVar17 = (longlong *)(*(longlong *)(puVar11 + 8) + lVar13);
          iVar8 = (int)plVar17[1];
          lVar18 = (longlong)iVar8;
          *(int *)(plVar17 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar17 + 0xc) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar8);
            lVar13 = local_958;
          }
          lVar6 = *plVar17;
          lVar7 = *(longlong *)((longlong)puVar23 + *(longlong *)(lVar5 + 0x40));
          *(undefined4 *)(lVar6 + lVar18 * 8) = *(undefined4 *)((longlong)puVar14 + lVar7);
          *(undefined1 *)(lVar6 + 4 + lVar18 * 8) = *(undefined1 *)((longlong)puVar14 + lVar7 + 4);
          *(undefined1 *)(lVar6 + 5 + lVar18 * 8) = *(undefined1 *)((longlong)puVar14 + lVar7 + 0xc)
          ;
          local_960 = local_960 + 1;
          puVar14 = puVar14 + 6;
          uVar22 = local_968;
        } while (local_960 < *(int *)((longlong)puVar23 + *(longlong *)(lVar5 + 0x40) + 8));
      }
      local_968 = uVar22 + 1;
      puVar15 = (undefined4 *)(ulonglong)local_968;
      local_958 = lVar13 + 0x10;
      puVar23 = puVar23 + 6;
      puVar14 = local_950;
      param_2 = local_948;
    } while ((int)local_968 < *(int *)(lVar5 + 0x48));
  }
  lVar5 = *(longlong *)(param_2 + 0x38);
  *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(lVar5 + 0x34);
  *(undefined1 *)((longlong)puVar14 + 0x51) = *(undefined1 *)(lVar5 + 0x38);
  puVar14[0x15] = *(undefined4 *)(lVar5 + 0x4c);
  puVar14[0x16] = *(undefined4 *)(lVar5 + 0x44);
  lVar5 = *(longlong *)(param_2 + 0x40);
  _guard_xfg_dispatch_icall_nop(local_934,0,100);
  cVar20 = *(char *)(lVar5 + 0x18);
  if ((*(char *)(lVar5 + 0x19) == '\a') && (cVar20 == '\0')) {
    local_924 = 0;
  }
  else {
    local_924 = 1;
  }
  local_91c = FUN_141e42150(*(char *)(lVar5 + 0x19));
  cVar1 = *(char *)(param_2 + 0x48);
  cVar19 = *(char *)(lVar5 + 0x1f);
  if ((*(char *)(lVar5 + 0x1a) == '\0') && (cVar19 == '\0')) {
    local_914 = 0;
  }
  else {
    local_914 = 1;
  }
  local_8f4 = FUN_141e54cb0(*(undefined1 *)(lVar5 + 0x1c));
  uStack_8f0 = FUN_141e54cb0(*(undefined1 *)(lVar5 + 0x1e));
  uStack_8ec = FUN_141e54cb0(*(undefined1 *)(lVar5 + 0x1d));
  uStack_904 = FUN_141e42150(*(undefined1 *)(lVar5 + 0x1b));
  bVar2 = *(byte *)(lVar5 + 0x24);
  uVar22 = (uint)bVar2;
  bVar3 = *(byte *)(lVar5 + 0x25);
  uVar24 = (uint)bVar3;
  local_8e4 = (uint)bVar2;
  uStack_8e0 = (uint)bVar3;
  uStack_8e8 = uStack_904;
  if (cVar19 == '\0') {
    local_900 = (ulonglong)CONCAT14(bVar3,local_8e4);
    local_910 = local_8f4;
    uStack_90c = uStack_8f0;
    uStack_908 = uStack_8ec;
  }
  else {
    uVar22 = (uint)bVar2;
    uVar24 = (uint)bVar3;
    local_910 = FUN_141e54cb0(*(undefined1 *)(lVar5 + 0x21));
    uStack_90c = FUN_141e54cb0(*(undefined1 *)(lVar5 + 0x23));
    uStack_908 = FUN_141e54cb0(*(undefined1 *)(lVar5 + 0x22));
    uStack_904 = FUN_141e42150(*(undefined1 *)(lVar5 + 0x20));
    local_900 = CONCAT44(uVar24,uVar22);
  }
  puVar11 = puVar14 + 0x22;
  *(undefined1 *)(puVar14 + 0x17) = (undefined1)local_91c;
  ppuVar21 = &local_68;
  *(undefined1 *)((longlong)puVar14 + 0x5d) = (undefined1)local_924;
  puVar14[0x1c] = 0;
  *(bool *)((longlong)puVar14 + 0x5e) = cVar20 != '\0';
  puVar14[0x1e] = uVar22;
  puVar14[0x1f] = uVar24;
  *(bool *)(puVar14 + 0x18) = cVar1 != '\0';
  *(undefined1 *)((longlong)puVar14 + 0x5f) = (undefined1)local_914;
  *(undefined1 *)((longlong)puVar14 + 0x61) = (undefined1)local_910;
  *(char *)((longlong)puVar14 + 0x62) = (char)uStack_90c;
  *(undefined1 *)((longlong)puVar14 + 99) = (undefined1)uStack_908;
  *(char *)(puVar14 + 0x19) = (char)uStack_904;
  puVar14[0x1a] = (uint)(byte)local_900;
  puVar14[0x1b] = (int)(local_900 >> 0x20);
  *(undefined1 *)(puVar14 + 0x1d) = (undefined1)local_8f4;
  *(undefined1 *)((longlong)puVar14 + 0x75) = (undefined1)uStack_8f0;
  *(undefined1 *)((longlong)puVar14 + 0x76) = (undefined1)uStack_8ec;
  *(undefined1 *)((longlong)puVar14 + 0x77) = (undefined1)uStack_8e8;
  puVar14[0x20] = 0;
  do {
    iVar8 = (int)puVar16;
    if (*ppuVar21 != (undefined4 *)0x0) {
      if (iVar8 == 0) {
        lVar5 = *(longlong *)(param_2 + 8);
        if (lVar5 == 0) {
          local_850._0_4_ = 0;
          local_850._4_4_ = 0;
          uVar10 = 0;
          local_850 = 0;
          uStack_848 = 0;
          uVar25 = (undefined4)local_850;
          uVar26 = local_850._4_4_;
          uVar27 = (undefined4)local_850;
          uVar28 = local_850._4_4_;
        }
        else {
          uVar25 = *(undefined4 *)(lVar5 + 0xd8);
          uVar26 = *(undefined4 *)(lVar5 + 0xdc);
          uVar27 = *(undefined4 *)(lVar5 + 0xe0);
          uVar28 = *(undefined4 *)(lVar5 + 0xe4);
          uVar10 = *(undefined4 *)(lVar5 + 0xe8);
        }
      }
      else if (iVar8 == 1) {
        lVar5 = *(longlong *)(param_2 + 0x20);
        if (lVar5 == 0) {
          local_868._0_4_ = 0;
          local_868._4_4_ = 0;
          uVar10 = 0;
          local_868 = 0;
          uStack_860 = 0;
          uVar25 = (undefined4)local_868;
          uVar26 = local_868._4_4_;
          uVar27 = (undefined4)local_868;
          uVar28 = local_868._4_4_;
        }
        else {
          uVar25 = *(undefined4 *)(lVar5 + 0xd8);
          uVar26 = *(undefined4 *)(lVar5 + 0xdc);
          uVar27 = *(undefined4 *)(lVar5 + 0xe0);
          uVar28 = *(undefined4 *)(lVar5 + 0xe4);
          uVar10 = *(undefined4 *)(lVar5 + 0xe8);
        }
      }
      else if (iVar8 == 2) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (lVar5 == 0) {
          local_880._0_4_ = 0;
          local_880._4_4_ = 0;
          uVar10 = 0;
          local_880 = 0;
          uStack_878 = 0;
          uVar25 = (undefined4)local_880;
          uVar26 = local_880._4_4_;
          uVar27 = (undefined4)local_880;
          uVar28 = local_880._4_4_;
        }
        else {
          uVar25 = *(undefined4 *)(lVar5 + 0xd8);
          uVar26 = *(undefined4 *)(lVar5 + 0xdc);
          uVar27 = *(undefined4 *)(lVar5 + 0xe0);
          uVar28 = *(undefined4 *)(lVar5 + 0xe4);
          uVar10 = *(undefined4 *)(lVar5 + 0xe8);
        }
      }
      else if (iVar8 == 3) {
        lVar5 = *(longlong *)(param_2 + 0x10);
        if (lVar5 == 0) {
          local_898._0_4_ = 0;
          local_898._4_4_ = 0;
          uVar10 = 0;
          local_898 = 0;
          uStack_890 = 0;
          uVar25 = (undefined4)local_898;
          uVar26 = local_898._4_4_;
          uVar27 = (undefined4)local_898;
          uVar28 = local_898._4_4_;
        }
        else {
          uVar25 = *(undefined4 *)(lVar5 + 0xd8);
          uVar26 = *(undefined4 *)(lVar5 + 0xdc);
          uVar27 = *(undefined4 *)(lVar5 + 0xe0);
          uVar28 = *(undefined4 *)(lVar5 + 0xe4);
          uVar10 = *(undefined4 *)(lVar5 + 0xe8);
        }
      }
      else if (iVar8 == 4) {
        lVar5 = *(longlong *)(param_2 + 0x18);
        if (lVar5 == 0) {
          local_8b0._0_4_ = 0;
          local_8b0._4_4_ = 0;
          uVar10 = 0;
          local_8b0 = 0;
          uStack_8a8 = 0;
          uVar25 = (undefined4)local_8b0;
          uVar26 = local_8b0._4_4_;
          uVar27 = (undefined4)local_8b0;
          uVar28 = local_8b0._4_4_;
        }
        else {
          uVar25 = *(undefined4 *)(lVar5 + 0xd8);
          uVar26 = *(undefined4 *)(lVar5 + 0xdc);
          uVar27 = *(undefined4 *)(lVar5 + 0xe0);
          uVar28 = *(undefined4 *)(lVar5 + 0xe4);
          uVar10 = *(undefined4 *)(lVar5 + 0xe8);
        }
      }
      else {
        uVar10 = 0;
        local_8c8 = 0;
        uStack_8c0 = 0;
        local_8c8._0_4_ = 0;
        local_8c8._4_4_ = 0;
        uStack_8c0._0_4_ = 0;
        uStack_8c0._4_4_ = 0;
        uVar25 = (undefined4)local_8c8;
        uVar26 = local_8c8._4_4_;
        uVar27 = (undefined4)uStack_8c0;
        uVar28 = uStack_8c0._4_4_;
      }
      *puVar11 = uVar25;
      puVar11[1] = uVar26;
      puVar11[2] = uVar27;
      puVar11[3] = uVar28;
      puVar11[4] = uVar10;
    }
    puVar16 = (undefined4 *)(ulonglong)(iVar8 + 1U);
    ppuVar21 = ppuVar21 + 1;
    puVar11 = puVar11 + 5;
  } while ((int)(iVar8 + 1U) < 5);
  FVulkanPipelineStateCacheManager::FGfxPipelineEntry::FRenderTargets::ReadFrom
            (puVar14 + 0x3c,*(undefined8 *)(puVar14 + 0x5c));
  uVar10 = FCrc::MemCrc32(puVar14 + 0x22,100);
  puVar14[0x21] = uVar10;
  local_760 = 0;
  if (local_768 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_7a8);
  local_7b0 = 0;
  if (local_7b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_7f8);
  return puVar14;
}



// FUNCTION 141e44360 FUN_141e44360 body=2221 status=ok
// SIG undefined FUN_141e44360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e44360(longlong *param_1,longlong param_2,longlong *param_3,LARGE_INTEGER param_4)

{
  longlong lVar1;
  bool bVar2;
  LARGE_INTEGER LVar3;
  ushort uVar4;
  DWORD DVar5;
  longlong lVar6;
  LARGE_INTEGER *pLVar7;
  LARGE_INTEGER *pLVar8;
  LARGE_INTEGER LVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  longlong lVar17;
  LARGE_INTEGER LVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_5d8 [32];
  undefined8 local_5b8;
  longlong local_5b0;
  LARGE_INTEGER local_5a8;
  uint local_5a0;
  uint local_59c;
  LARGE_INTEGER local_598;
  int local_590 [2];
  undefined4 local_588;
  undefined8 local_584;
  undefined8 local_57c;
  undefined8 local_574;
  ulonglong local_56c;
  undefined4 local_564;
  uint uStack_560;
  ulonglong local_55c;
  undefined4 local_554;
  undefined4 uStack_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined8 local_544;
  undefined8 local_53c;
  undefined4 local_534;
  undefined8 *puStack_530;
  undefined1 local_528 [8];
  longlong *local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined8 local_50c;
  uint local_504;
  undefined4 local_500;
  undefined8 local_4fc;
  undefined8 local_4f4;
  uint local_4ec;
  DWORD DStack_4e8;
  LONG local_4e4;
  uint uStack_4e0;
  undefined4 local_4dc;
  DWORD DStack_4d8;
  LONG local_4d4;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined8 local_4c4;
  ulonglong local_4bc;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined8 local_4ac;
  undefined8 local_4a4;
  undefined8 local_49c;
  undefined8 local_494;
  undefined8 local_48c;
  undefined4 local_484;
  int *local_480;
  LARGE_INTEGER *local_478;
  undefined4 local_470;
  undefined8 local_46c;
  undefined8 local_464;
  ulonglong local_45c;
  undefined8 local_454;
  undefined8 local_44c;
  undefined4 local_444;
  undefined4 local_438;
  undefined1 local_434 [16];
  uint local_424;
  undefined4 *local_420;
  undefined4 *local_418;
  undefined4 *local_410;
  undefined4 *local_408;
  undefined4 *local_400;
  undefined4 *local_3f8;
  undefined4 *local_3f0;
  undefined4 *local_3e8;
  undefined4 *local_3e0;
  undefined4 *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  uint local_3c0;
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined8 local_39c;
  undefined8 local_394;
  int local_38c;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_368;
  undefined1 local_364 [16];
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2c8 [5];
  undefined4 uStack_2b4;
  longlong alStack_2b0 [27];
  uint local_1d8 [64];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  local_598 = param_4;
  local_520 = param_1;
  if (*(char *)(param_2 + 4) == '\0') {
    lVar17 = 5;
    plVar19 = param_3;
    do {
      lVar1 = *plVar19;
      if (lVar1 != 0) {
        iVar13 = *(int *)(*(longlong *)(param_2 + 0x178) + 0x50);
        if (*(int *)(lVar1 + 0xf8) != *(int *)(lVar1 + 0x124)) {
          lVar6 = *(longlong *)(lVar1 + 0x130);
          if (*(longlong *)(lVar1 + 0x130) == 0) {
            lVar6 = lVar1 + 0x128;
          }
          DVar5 = *(DWORD *)(lVar6 + ((longlong)*(int *)(lVar1 + 0x138) - 1U & (longlong)iVar13) * 4
                            );
          if (DVar5 != 0xffffffff) {
            lVar6 = *(longlong *)(lVar1 + 0xf0);
            do {
              pLVar8 = (LARGE_INTEGER *)(lVar6 + (longlong)(int)DVar5 * 0x18);
              if (*(int *)(lVar6 + (longlong)(int)DVar5 * 0x18) == iVar13) {
                if (DVar5 != 0xffffffff) goto LAB_141e44434;
                break;
              }
              DVar5 = pLVar8[2].s.LowPart;
            } while (DVar5 != 0xffffffff);
          }
        }
        pLVar8 = (LARGE_INTEGER *)0x0;
LAB_141e44434:
        pLVar7 = pLVar8 + 1;
        if (pLVar8 == (LARGE_INTEGER *)0x0) {
          pLVar7 = (LARGE_INTEGER *)0x0;
        }
        if (pLVar7 == (LARGE_INTEGER *)0x0) {
          local_5b8 = CONCAT44(local_5b8._4_4_,*(undefined4 *)(lVar1 + 0x140));
          local_590[0] = iVar13;
          local_5a8.QuadPart =
               FUN_141e45660(*(longlong *)(param_2 + 0x178),lVar1 + 0x148,
                             *(undefined4 *)(lVar1 + 0x144),lVar1 + 0x20);
          local_480 = local_590;
          local_478 = &local_5a8;
          FUN_1404981d0((longlong *)(lVar1 + 0xf0),local_528,&local_480,0);
          LVar9 = local_5a8;
        }
        else {
          LVar9 = *pLVar7;
        }
        *(LARGE_INTEGER *)((param_2 - (longlong)param_3) + 0x148 + (longlong)plVar19) = LVar9;
      }
      plVar19 = plVar19 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  LVar9.QuadPart = 0;
  local_438 = 0x1c;
  _guard_xfg_dispatch_icall_nop(local_434,0,0x8c);
  iVar13 = *(int *)(param_2 + 0x18);
  lVar17 = (longlong)iVar13;
  local_3d0 = *(undefined8 *)(*(longlong *)(param_2 + 0x178) + 0x1e0);
  uStack_388._0_4_ = 0;
  local_3a8 = 0x1a;
  local_3a4 = 0;
  local_39c = 0;
  local_394 = 0;
  uStack_388._4_4_ = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  local_38c = iVar13;
  _guard_xfg_dispatch_icall_nop(local_1d8,0,0x100);
  uVar16 = 0;
  if (0 < iVar13) {
    pcVar10 = *(char **)(param_2 + 0x10);
    puVar12 = local_1d8 + 1;
    do {
      puVar12[-1] = (uint)(*pcVar10 != '\0');
      puVar12[2] = (uint)(byte)pcVar10[1];
      *puVar12 = (uint)(byte)pcVar10[2];
      puVar12[1] = (uint)(byte)pcVar10[3];
      puVar12[5] = (uint)(byte)pcVar10[4];
      puVar12[3] = (uint)(byte)pcVar10[5];
      puVar12[4] = (uint)(byte)pcVar10[6];
      puVar12[6] = (uint)(byte)pcVar10[7];
      lVar17 = lVar17 + -1;
      pcVar10 = pcVar10 + 8;
      puVar12 = puVar12 + 8;
    } while (lVar17 != 0);
  }
  uStack_388 = local_1d8;
  local_4b0 = 0x16;
  local_4ac = 0;
  local_4a4 = 0;
  local_48c = 0;
  local_484 = 0;
  local_46c = 0;
  local_464 = 0;
  local_454 = 0;
  local_44c = 0;
  local_444 = 0;
  uVar4 = *(ushort *)(param_2 + 6);
  local_49c = 1;
  uStack_380 = 0x3f800000;
  uStack_37c = 0x3f800000;
  uStack_378 = 0x3f800000;
  uStack_374 = 0x3f800000;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  local_494 = 0x100000000;
  local_45c = (ulonglong)uVar4;
  local_470 = 0x18;
  _guard_xfg_dispatch_icall_nop(local_2c8,0,0xf0);
  local_420 = local_2c8;
  bVar2 = false;
  uVar21 = 0;
  iVar13 = 0;
  lVar17 = param_2 - (longlong)param_3;
  local_424 = uVar16;
  do {
    lVar1 = *(longlong *)((longlong)param_3 + lVar17 + 0x148);
    if (lVar1 != 0) {
      local_2c8[uVar21 * 0xc] = 0x12;
      uVar23 = uVar16;
      if (iVar13 == 0) {
LAB_141e446cc:
                    /* WARNING: Could not recover jumptable at 0x000141e446d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_141e44c38 + (longlong)(int)uVar23 * 4)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_141e44c38 + (longlong)(int)uVar23 * 4));
        return;
      }
      if (iVar13 == 1) {
        uVar23 = 3;
        goto LAB_141e446cc;
      }
      if (iVar13 == 2) {
        uVar23 = 4;
        goto LAB_141e446cc;
      }
      uVar23 = 1;
      if (iVar13 == 3) goto LAB_141e446cc;
      if (iVar13 == 4) {
        uVar23 = 2;
        goto LAB_141e446cc;
      }
      (&uStack_2b4)[uVar21 * 0xc] = 0x7fffffff;
      bVar2 = true;
      alStack_2b0[uVar21 * 6] = lVar1;
      TCString<wchar_t>::SprintfImpl
                (local_d8 + uVar21 * 0x18,"main_%0.8x_%0.8x",
                 (longlong)*(int *)(*param_3 + 0x150) << 2,*(undefined4 *)(*param_3 + 0xbc));
      uVar22 = (ulonglong)local_424;
      local_424 = local_424 + 1;
      uVar21 = (ulonglong)local_424;
      alStack_2b0[uVar22 * 6 + 1] = (longlong)(local_d8 + uVar22 * 0x18);
    }
    iVar13 = iVar13 + 1;
    param_3 = param_3 + 1;
    if (4 < iVar13) {
      puVar14 = *(undefined4 **)(param_2 + 0x30);
      local_4fc = 0;
      local_4f4 = 0;
      local_4ec = 0;
      DStack_4e8 = 0;
      uVar23 = 0;
      local_4e4 = 0;
      uStack_4e0 = 0;
      local_4dc = 0;
      DStack_4d8 = 0;
      local_4d4 = 0;
      local_500 = 0x13;
      puVar15 = puVar14 + (longlong)*(int *)(param_2 + 0x38) * 2;
      local_5a8.QuadPart = LVar9.QuadPart;
      local_59c = uVar16;
      for (; puVar14 != puVar15; puVar14 = puVar14 + 2) {
        lVar17 = (longlong)(int)uVar16;
        local_5a0 = uVar16 + 1;
        if ((int)uVar23 < (int)local_5a0) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_5a8,uVar16);
          LVar9 = local_5a8;
          uVar23 = local_59c;
        }
        *(uint *)(LVar9.QuadPart + lVar17 * 0xc) = (uint)*(ushort *)(puVar14 + 1);
        *(uint *)(LVar9.QuadPart + 8 + lVar17 * 0xc) = (uint)*(ushort *)((longlong)puVar14 + 6);
        *(undefined4 *)(LVar9.QuadPart + 4 + lVar17 * 0xc) = *puVar14;
        uVar16 = local_5a0;
      }
      LVar18.QuadPart = 0;
      puVar15 = *(undefined4 **)(param_2 + 0x40);
      local_59c = 0;
      uVar20 = 0;
      puVar14 = puVar15 + (longlong)*(int *)(param_2 + 0x48) * 4;
      DStack_4e8 = LVar9.s.LowPart;
      local_4e4 = LVar9.s.HighPart;
      uVar23 = local_59c;
      local_5a8.QuadPart = LVar18.QuadPart;
      local_4ec = uVar16;
      for (; puVar15 != puVar14; puVar15 = puVar15 + 4) {
        local_5a0 = uVar23 + 1;
        if ((int)uVar20 < (int)local_5a0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_5a8,uVar23);
          LVar18 = local_5a8;
          uVar20 = local_59c;
        }
        puVar11 = (undefined4 *)((longlong)(int)uVar23 * 0x10 + LVar18.QuadPart);
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[3] = puVar15[3];
        uVar23 = local_5a0;
      }
      local_418 = &local_500;
      local_3e0 = &local_3a8;
      local_3f0 = &local_470;
      local_400 = &local_4b0;
      DStack_4d8 = LVar18.s.LowPart;
      local_4d4 = LVar18.s.HighPart;
      local_3c8 = *(undefined8 *)(*(longlong *)(param_2 + 0x170) + 0x358);
      local_3c0 = (uint)*(byte *)(param_2 + 0x180);
      local_4cc = 0;
      local_4c4 = 0;
      local_4b4 = 0;
      local_4bc = (ulonglong)*(uint *)(param_2 + 0xc);
      local_410 = &local_4d0;
      local_584 = 0;
      local_57c = 0;
      local_54c = 0;
      local_56c = (ulonglong)
                  CONCAT14(*(undefined1 *)(param_2 + 0x51),(uint)*(byte *)(param_2 + 0x50));
      local_4d0 = 0x14;
      local_588 = 0x17;
      uStack_560 = (uint)(*(float *)(param_2 + 0x58) != 0.0);
      local_564 = 1;
      _local_554 = CONCAT44(0x3f800000,*(undefined4 *)(param_2 + 0x54));
      local_55c = (ulonglong)(uint)*(float *)(param_2 + 0x58);
      local_574 = 0;
      local_368 = 0x19;
      uStack_4e0 = uVar23;
      _guard_xfg_dispatch_icall_nop(local_364,0,100);
      local_34c = (uint)*(byte *)(param_2 + 0x5c);
      local_354 = (uint)*(byte *)(param_2 + 0x5d);
      local_350 = (uint)*(byte *)(param_2 + 0x5e);
      local_348 = (uint)*(byte *)(param_2 + 0x60);
      local_344 = (uint)*(byte *)(param_2 + 0x5f);
      local_340 = (uint)*(byte *)(param_2 + 0x61);
      local_33c = (uint)*(byte *)(param_2 + 0x62);
      local_338 = (uint)*(byte *)(param_2 + 99);
      local_334 = (uint)*(byte *)(param_2 + 100);
      local_330 = *(undefined4 *)(param_2 + 0x68);
      local_32c = *(undefined4 *)(param_2 + 0x6c);
      local_328 = *(undefined4 *)(param_2 + 0x70);
      local_324 = (uint)*(byte *)(param_2 + 0x74);
      local_320 = (uint)*(byte *)(param_2 + 0x75);
      local_31c = (uint)*(byte *)(param_2 + 0x76);
      local_318 = (uint)*(byte *)(param_2 + 0x77);
      local_310 = *(undefined4 *)(param_2 + 0x7c);
      local_314 = *(undefined4 *)(param_2 + 0x78);
      local_30c = *(undefined4 *)(param_2 + 0x80);
      local_3f8 = &local_588;
      local_3e8 = &local_368;
      local_544 = 0;
      local_53c = 0;
      puStack_530 = &local_2f8;
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2e0 = 0;
      local_2d8 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_2f8._0_4_ = 0;
      local_548 = 0x1b;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_2f0._0_4_ = 8;
      local_534 = 4;
      local_3d8 = &local_548;
      if (bVar2) {
        local_518 = 0x15;
        local_514 = 0;
        local_50c = 0;
        local_408 = &local_518;
        local_504 = (uint)*(ushort *)(param_2 + 8);
        local_564 = 0;
      }
      QueryPerformanceCounter(&local_5a8);
      plVar19 = local_520;
      LVar3 = local_598;
      local_5b0 = local_598.QuadPart + 0x10;
      local_5b8 = 0;
      iVar13 = (*DAT_146ab00e8)(*(undefined8 *)(*local_520 + 8),local_520[0x31],1,&local_438);
      if (iVar13 == 0) {
        local_598 = *(LARGE_INTEGER *)(LVar3.QuadPart + 0x10);
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*plVar19 + 0x1920,&local_598);
        QueryPerformanceCounter(&local_598);
        *(undefined8 *)(LVar3.QuadPart + 0x18) = *(undefined8 *)(param_2 + 0x178);
      }
      else {
        *(undefined8 *)(LVar3.QuadPart + 0x10) = 0;
      }
      if (LVar18.QuadPart != 0) {
        FMemory::Free(LVar18.QuadPart);
      }
      if (LVar9.QuadPart != 0) {
        FMemory::Free(LVar9.QuadPart);
      }
      return;
    }
  } while( true );
}



// FUNCTION 141e44c50 FUN_141e44c50 body=366 status=ok
// SIG undefined FUN_141e44c50(void)

undefined8 *
FUN_141e44c50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 *local_res20;
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_4 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_4,uVar1,0);
  local_res10[0] = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIHullShader,1,2>_>(lVar2 + 0x470)
  ;
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,1,2);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_4,local_res10[0]);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = local_res10;
    local_res20 = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    local_40 = &local_res20;
    FUN_141e32e00(lVar2 + 0x4c8,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e44dc0 FUN_141e44dc0 body=49 status=ok
// SIG undefined FUN_141e44dc0(void)

undefined8
FUN_141e44dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_141e2b040(param_1,param_2,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 141e44e00 FUN_141e44e00 body=2132 status=ok
// SIG undefined FUN_141e44e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e4527e) */

void FUN_141e44e00(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  void *_Src;
  bool bVar3;
  short *psVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  char *pcVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  int iVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  int iVar24;
  wchar_t *pwVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  undefined2 *puVar30;
  undefined1 auStack_388 [32];
  uint local_368 [2];
  undefined2 *local_360;
  undefined8 local_358;
  undefined2 *local_350;
  undefined2 *local_348;
  undefined2 *local_340;
  undefined2 *local_338;
  uint local_330;
  undefined4 local_32c;
  undefined2 *local_328;
  uint local_320;
  int local_31c;
  undefined4 local_318;
  undefined8 local_314;
  undefined8 local_30c;
  undefined4 local_304;
  undefined8 *puStack_300;
  int iStack_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  int iStack_2e8;
  undefined4 local_2e4;
  undefined4 uStack_2e0;
  undefined4 local_2dc;
  undefined8 *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined2 *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined2 local_298 [64];
  undefined2 *local_218;
  undefined2 *local_210;
  uint local_208;
  undefined1 local_1f8 [128];
  longlong local_178;
  undefined8 local_170;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  ulonglong uVar20;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar8 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderDevelopmentMode");
  lVar29 = 0;
  lVar9 = lVar29;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar8 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DisableEngineAndAppRegistration");
  if ((plVar8 == (longlong *)0x0) || (lVar10 = (**(code **)(*plVar8 + 0x38))(plVar8), lVar10 == 0))
  {
LAB_141e44ef6:
    if (lVar9 != 0) {
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar6 = GetCurrentThreadId(), lVar10 = 4, DVar6 == DAT_1468c21c0)) {
        lVar10 = lVar29;
      }
      if (*(int *)(lVar10 + lVar9) != 0) goto LAB_141e44f30;
    }
    bVar3 = false;
  }
  else {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      lVar11 = 4;
      if (DVar6 == DAT_1468c21c0) goto LAB_141e44eed;
    }
    else {
LAB_141e44eed:
      lVar11 = lVar29;
    }
    if (*(int *)(lVar11 + lVar10) == 0) goto LAB_141e44ef6;
LAB_141e44f30:
    bVar3 = true;
  }
  uVar12 = FEngineVersion::Current();
  puVar13 = (undefined8 *)FEngineVersion::ToString(uVar12,&local_328,1);
  puVar14 = (undefined8 *)FApp::GetEpicProductIdentifier(&local_338);
  iVar7 = *(int *)(puVar14 + 1);
  if (iVar7 < 2) {
    local_340 = (undefined2 *)*puVar13;
    *puVar13 = 0;
    iVar7 = *(int *)(puVar13 + 1);
    puVar13[1] = 0;
  }
  else {
    iVar28 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar28 = 0;
    }
    if ((iVar7 != 0) || (iVar21 = 1, iVar28 == 0)) {
      iVar21 = 0;
    }
    local_360 = (undefined2 *)*puVar14;
    *puVar14 = 0;
    iVar24 = *(int *)((longlong)puVar14 + 0xc);
    local_358 = CONCAT44(iVar24,iVar7);
    puVar14[1] = 0;
    if (iVar24 < iVar21 + iVar28 + iVar7) {
      local_340 = local_360;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_360);
      iVar7 = (int)local_358;
      iVar24 = local_358._4_4_;
    }
    _Src = (void *)*puVar13;
    local_340 = local_360;
    if (iVar28 != 0) {
      iVar21 = iVar7 + (uint)(iVar7 == 0) + iVar28;
      local_358 = CONCAT44(local_358._4_4_,iVar21);
      if (iVar24 < iVar21) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,iVar7);
        local_340 = local_360;
        iVar21 = (int)local_358;
      }
      puVar30 = local_340 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
      local_360 = local_340;
      _guard_xfg_dispatch_icall_nop(puVar30,_Src,(longlong)iVar28 * 2);
      puVar30[iVar28] = 0;
      iVar7 = iVar21;
    }
  }
  puVar30 = local_340;
  puVar18 = (undefined2 *)0x0;
  if (local_338 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_328 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar15 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar15 = puVar30;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_1f8,puVar15);
  local_218 = (undefined2 *)0x0;
  uVar19 = 0xffffffffffffffff;
  do {
    uVar20 = uVar19;
    uVar19 = uVar20 + 1;
  } while ((&DAT_146299580)[uVar19] != 0);
  local_368[0] = 0;
  FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_368,(int)uVar19 * 4,&DAT_146299580,uVar19 & 0xffffffff);
  local_208 = local_368[0];
  uVar27 = local_368[0] + 1;
  puVar15 = puVar18;
  if ((0x80 < uVar27) && (puVar15 = (undefined2 *)0x0, uVar27 != 0)) {
    puVar15 = (undefined2 *)FMemory::Realloc(0,(longlong)(int)uVar27,0);
    local_218 = puVar15;
  }
  local_350 = local_298;
  if (puVar15 != (undefined2 *)0x0) {
    local_350 = puVar15;
  }
  local_210 = local_350;
  FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_350,uVar27,&DAT_146299580,(int)uVar20 + 2);
  local_2d0 = 0;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  local_2c0 = local_210;
  if (bVar3) {
    local_2c0 = (undefined2 *)0x0;
    local_170 = 0;
  }
  local_2b0 = local_170;
  lVar9 = FEngineVersion::Current();
  puVar1 = (ulonglong *)(param_1 + 0x40);
  local_304 = 0;
  iStack_2f8 = 0;
  local_314 = 0;
  local_30c = 0;
  local_2f4 = 0;
  uStack_2f0 = 0;
  local_2ec = 0;
  iStack_2e8 = 0;
  local_2e4 = 0;
  uStack_2e0 = 0;
  local_2dc = 0;
  puStack_300 = &local_2d0;
  local_2a8 = CONCAT44(0x401000,(uint)*(ushort *)(lVar9 + 2));
  local_318 = 1;
  FUN_141e270a0(puVar1,param_1 + 0x50,param_1 + 0xa8);
  iStack_2e8 = *(int *)(param_1 + 0x48);
  if (iStack_2e8 == 0) {
    uStack_2e0 = 0;
    local_2dc = 0;
  }
  else {
    uStack_2e0 = (undefined4)*puVar1;
    local_2dc = (undefined4)(*puVar1 >> 0x20);
  }
  iStack_2f8 = *(int *)(param_1 + 0x58);
  if (iStack_2f8 == 0) {
    uStack_2f0 = 0;
    local_2ec = 0;
  }
  else {
    uStack_2f0 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    local_2ec = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  }
  local_2d8 = (undefined8 *)(param_1 + 0x38);
  iVar7 = (*DAT_146aafeb0)(&local_318,0,local_2d8);
  if (iVar7 == -9) {
    pwVar17 = 
    L"Cannot find a compatible Vulkan driver (ICD).\n\nPlease look at the Getting Started guide for additional information."
    ;
    pwVar25 = L"Incompatible Vulkan driver found!";
LAB_141e4563e:
    FUN_1416a4860(0,pwVar17,pwVar25);
    _dynamic_initializer_for__GSystemSettings__(1);
    goto LAB_141e455cc;
  }
  if (iVar7 == -7) {
    local_328 = (undefined2 *)0x0;
    local_31c = 0;
    (*DAT_146aafec8)(0,local_368,0);
    local_360 = (undefined2 *)0x0;
    local_358 = 0;
    if ((int)local_368[0] < 1) {
      if (((int)local_368[0] < 0) && (local_368[0] != 0)) {
        local_358 = (ulonglong)local_368[0];
        TArray<VkExtensionProperties,FDefaultAllocator>::ResizeShrink(&local_360);
      }
    }
    else {
      local_358 = (ulonglong)local_368[0];
      TArray<VkExtensionProperties,FDefaultAllocator>::ResizeGrow(&local_360,0);
    }
    puVar30 = local_360;
    (*DAT_146aafec8)(0,local_368,local_360);
    plVar8 = (longlong *)*puVar1;
    local_348 = (undefined2 *)0x0;
    puVar15 = (undefined2 *)((longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff);
    if (plVar8 + *(int *)(param_1 + 0x48) < plVar8) {
      puVar15 = (undefined2 *)0x0;
    }
    puVar22 = puVar18;
    uVar27 = local_368[0];
    local_350 = puVar15;
    if (puVar15 == (undefined2 *)0x0) {
LAB_141e45523:
      puVar15 = &DAT_143f3eda8;
    }
    else {
      do {
        puVar23 = (undefined2 *)0x0;
        puVar22 = puVar23;
        bVar3 = false;
        if (uVar27 != 0) {
          do {
            pcVar16 = (char *)(puVar30 + (longlong)(int)puVar22 * 0x82);
            lVar9 = *plVar8 - (longlong)pcVar16;
            do {
              cVar5 = *pcVar16;
              cVar2 = pcVar16[lVar9];
              if (cVar5 != cVar2) break;
              pcVar16 = pcVar16 + 1;
            } while (cVar2 != '\0');
            puVar15 = local_350;
            if (cVar5 == cVar2) {
              bVar3 = true;
              break;
            }
            uVar26 = (int)puVar22 + 1;
            puVar22 = (undefined2 *)(ulonglong)uVar26;
            bVar3 = false;
          } while (uVar26 < uVar27);
        }
        if (!bVar3) {
          TStringConversion<TStringConvert<char,wchar_t>,128>::
          TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,*plVar8);
          psVar4 = local_50;
          local_338 = (undefined2 *)0x0;
          local_32c = 0;
          puVar22 = puVar23;
          if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
            lVar9 = -1;
            do {
              lVar29 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (local_50[lVar29] != 0);
            local_330 = (int)lVar9 + 1;
            lVar9 = (longlong)(int)local_330;
            if (0 < (int)local_330) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
            }
            puVar22 = local_338;
            puVar23 = (undefined2 *)(ulonglong)local_330;
            FGenericPlatformString::Memcpy(local_338,psVar4,lVar9 * 2);
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          iVar7 = (int)puVar23;
          local_360 = (undefined2 *)0x0;
          local_358._0_4_ = iVar7;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_360,(2 - (uint)(iVar7 != 0)) + iVar7,0);
          puVar15 = local_360;
          _guard_xfg_dispatch_icall_nop(local_360,puVar22,(longlong)iVar7 * 2);
          iVar28 = (int)local_358;
          lVar9 = (longlong)(int)local_358;
          iVar7 = (2 - (uint)((int)local_358 != 0)) + (int)local_358;
          local_358 = CONCAT44(local_358._4_4_,iVar7);
          if (local_358._4_4_ < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,iVar28);
            puVar15 = local_360;
            iVar7 = (int)local_358;
          }
          local_360 = (undefined2 *)0x0;
          local_358 = 0;
          puVar15[lVar9 - (ulonglong)(iVar28 != 0)] = 10;
          (puVar15 + (lVar9 - (ulonglong)(iVar28 != 0)))[1] = 0;
          if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
            iVar28 = (int)puVar18;
            local_320 = iVar7 + -1 + (uint)(iVar28 == 0) + iVar28;
            if (local_31c < (int)local_320) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,puVar18);
            }
            puVar18 = (undefined2 *)(ulonglong)local_320;
            puVar23 = local_328 + ((longlong)iVar28 - (ulonglong)(iVar28 != 0));
            _guard_xfg_dispatch_icall_nop(puVar23,puVar15,(longlong)iVar7 * 2 - 2);
            puVar23[(longlong)iVar7 + -1] = 0;
          }
          if (puVar15 != (undefined2 *)0x0) {
            FMemory::Free(puVar15);
          }
          puVar15 = local_350;
          uVar27 = local_368[0];
          if (puVar22 != (undefined2 *)0x0) {
            FMemory::Free(puVar22);
            puVar15 = local_350;
            uVar27 = local_368[0];
          }
        }
        local_348 = (undefined2 *)((longlong)local_348 + 1);
        plVar8 = plVar8 + 1;
      } while (local_348 != puVar15);
      puVar22 = local_328;
      puVar15 = local_328;
      if ((int)puVar18 == 0) goto LAB_141e45523;
    }
    FString::PrintfImpl(&local_338,
                        L"Vulkan driver doesn\'t contain specified extensions:\n%s;\n\t\t\tmake sure your layers path is set appropriately."
                        ,puVar15);
    puVar18 = &DAT_143f3eda8;
    if (local_330 != 0) {
      puVar18 = local_338;
    }
    FUN_1416a4860(0,puVar18,L"Incomplete Vulkan driver found!");
    if (local_338 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar30 != (undefined2 *)0x0) {
      FMemory::Free(puVar30);
    }
    if (puVar22 != (undefined2 *)0x0) {
      FMemory::Free(puVar22);
    }
    FUN_141e67d70(0xfffffff9,"Result",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",0x1be)
    ;
    puVar30 = local_340;
  }
  else if (iVar7 != 0) {
    pwVar17 = 
    L"Vulkan failed to create instance (apiVersion=0x%x)\n\nDo you have a compatible Vulkan driver (ICD) installed?\nPlease look at the Getting Started guide for additional information."
    ;
    pwVar25 = L"No Vulkan driver found!";
    goto LAB_141e4563e;
  }
  cVar5 = FVulkanWindowsPlatform::LoadVulkanInstanceFunctions(*local_2d8);
  if (cVar5 == '\0') {
    FUN_1416a4860(0,L"Failed to find all required Vulkan entry points! Try updating your driver.",
                  L"No Vulkan entry points found!");
  }
LAB_141e455cc:
  if (local_218 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (puVar30 != (undefined2 *)0x0) {
    FMemory::Free(puVar30);
  }
  return;
}



// FUNCTION 141e45660 FUN_141e45660 body=634 status=ok
// SIG undefined FUN_141e45660(void)

undefined8 FUN_141e45660(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *puStack_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  local_40 = 0x10;
  local_3c = 0;
  puStack_38 = (undefined4 *)0x0;
  uStack_30 = 0;
  local_2c = 0;
  switch(param_3) {
  case 0:
  case 5:
    lVar3 = 0x68;
    break;
  case 1:
    lVar3 = 0x110;
    break;
  case 2:
    lVar3 = 0x148;
    break;
  case 3:
    lVar3 = 0xa0;
    break;
  case 4:
    lVar3 = 0xd8;
    break;
  default:
    lVar3 = 0x3800000030;
  }
  uVar5 = 0;
  plVar1 = (longlong *)(lVar3 + param_1);
  if ((*(char *)(param_4 + 0x84) != '\0') &&
     (uVar6 = uVar5, uVar7 = uVar5, uVar9 = uVar5, 0 < *(int *)(param_4 + 0xa8))) {
    do {
      if (*(char *)(plVar1[2] + 4 + uVar7) != '\0') {
        iVar2 = *(int *)(*(longlong *)(param_4 + 0xa0) + 4 + uVar6);
        *(uint *)(*param_2 + (longlong)*(int *)(*(longlong *)(param_4 + 0xa0) + uVar6) * 4) =
             (uint)*(ushort *)(plVar1[2] + uVar7);
        *(uint *)(*param_2 + (longlong)iVar2 * 4) = (uint)*(ushort *)(uVar7 + 2 + plVar1[2]);
      }
      uVar8 = (int)uVar9 + 1;
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 6;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_4 + 0xa8));
  }
  uVar6 = uVar5;
  uVar7 = uVar5;
  uVar9 = uVar5;
  if (0 < *(int *)(param_4 + 0xb8)) {
    do {
      uVar6 = uVar6 + 8;
      uVar8 = (int)uVar9 + 1;
      iVar2 = *(int *)(*(longlong *)(param_4 + 0xb0) + -4 + uVar6);
      *(uint *)(*param_2 + (longlong)*(int *)(*(longlong *)(param_4 + 0xb0) + -8 + uVar6) * 4) =
           (uint)*(ushort *)(uVar7 + *plVar1);
      *(uint *)(*param_2 + (longlong)iVar2 * 4) = (uint)*(ushort *)(uVar7 + 2 + *plVar1);
      uVar7 = uVar7 + 4;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_4 + 0xb8));
  }
  uVar6 = uVar5;
  uVar7 = uVar5;
  if (0 < *(int *)(param_4 + 0x48)) {
    do {
      uVar8 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar8;
      iVar2 = *(int *)(uVar7 + 0xc + *(longlong *)(param_4 + 0x40));
      *(uint *)(*param_2 + (longlong)*(int *)(uVar7 + 8 + *(longlong *)(param_4 + 0x40)) * 4) =
           (uint)*(ushort *)(plVar1 + 6);
      *(uint *)(*param_2 + (longlong)iVar2 * 4) = (uint)*(ushort *)(uVar6 + plVar1[4]);
      uVar6 = uVar6 + 2;
      uVar7 = uVar7 + 0x10;
    } while ((int)uVar8 < *(int *)(param_4 + 0x48));
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)(int)param_2[1] << 2;
  uStack_28 = (undefined4)lVar4;
  local_24 = (undefined4)((ulonglong)lVar4 >> 0x20);
  uStack_20 = (undefined4)*param_2;
  local_1c = (undefined4)((ulonglong)*param_2 >> 0x20);
  if ((*(byte *)(lVar3 + 0x18d0) & 0x20) != 0) {
    local_58 = 0x3b9d3b01;
    local_4c = 0;
    local_54 = 0;
    uStack_48 = (undefined4)*(undefined8 *)(lVar3 + 0x18d8);
    local_44 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x18d8) >> 0x20);
    puStack_38 = &local_58;
  }
  iVar2 = (*DAT_146ab00b8)(*(undefined8 *)(lVar3 + 8),&local_40,0,&local_res8);
  if (iVar2 != 0) {
    FUN_141e67d70(iVar2,
                  "VulkanRHI::vkCreateShaderModule(Device->GetInstanceHandle(), &ModuleCreateInfo, VULKAN_CPU_ALLOCATOR, &ShaderModule)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp",
                  0xd1);
  }
  local_res10 = local_res8;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*(longlong *)(param_1 + 8) + 0x18e0,&local_res10)
  ;
  return local_res8;
}



// FUNCTION 141e45900 FUN_141e45900 body=366 status=ok
// SIG undefined FUN_141e45900(void)

undefined8 *
FUN_141e45900(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 *local_res20;
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_4 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_4,uVar1,0);
  local_res10[0] = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIPixelShader,3,16>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,3,0x10);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_4,local_res10[0]);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = local_res10;
    local_res20 = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    local_40 = &local_res20;
    FUN_141e32e00(lVar2 + 0x568,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e45a70 FUN_141e45a70 body=605 status=ok
// SIG undefined FUN_141e45a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141e45a70(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8 [2];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8 [2];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 *puStack_1b0;
  undefined4 uStack_1a8;
  uint local_1a4;
  undefined4 *puStack_1a0;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined8 *puStack_190;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 *puStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 *local_e0;
  ulonglong local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  puVar2 = (undefined4 *)0x0;
  local_1b4 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  uStack_1a8 = 0;
  uStack_198 = 1;
  local_118 = param_2;
  if (*(byte *)((longlong)param_2 + 0x335) == 0) {
    local_118 = puVar2;
  }
  local_194 = 0;
  uStack_188 = 0;
  local_184 = 0;
  local_1b8 = 0x26;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_11c = 0;
  local_100 = 0;
  local_f8 = 0;
  local_120 = (uint)*(byte *)((longlong)param_2 + 0x335);
  local_110 = puVar2;
  if ((*(char *)((longlong)param_2 + 0x33b) != '\x01') &&
     (local_110 = param_2 + 0x12, *(char *)(param_2 + 0xce) == '\0')) {
    local_110 = (undefined4 *)0x0;
  }
  local_108 = param_2 + 0x10;
  if (*(char *)((longlong)param_2 + 0x337) == '\0') {
    local_108 = puVar2;
  }
  if (*(char *)((longlong)param_2 + 0x33b) == '\x01') {
    uStack_198 = 2;
    local_c8 = param_2 + 0x12;
    if (*(char *)(param_2 + 0xce) == '\0') {
      local_c8 = puVar2;
    }
    local_68 = *local_108;
    local_e0 = &local_68;
    local_c0 = &local_68;
    local_b8 = 0;
    local_b0 = 0;
    uStack_188 = 1;
    local_f0 = 0;
    local_d8 = (ulonglong)local_120;
    local_64 = 4;
    local_e8 = 1;
    local_a8 = 0;
    local_a4 = 1;
    local_a0 = 0x300;
    local_9c = 0x80;
    local_98 = 0x400;
    local_94 = 0x10;
    local_90 = 1;
    local_d0 = local_118;
  }
  local_1a4 = (uint)*(byte *)(param_2 + 0xcd);
  puStack_1a0 = param_2 + 0x34;
  puStack_190 = &local_138;
  puStack_180 = &local_a8;
  local_1d0 = 3;
  local_1cc = 3;
  local_1d8[0] = 3;
  if (*(char *)(param_2 + 0xcf) != '\0') {
    local_160 = &local_1d0;
    local_178 = 0x3b9b9908;
    local_140 = local_1d8;
    puStack_1b0 = &local_178;
    local_164 = 0;
    local_158 = 0;
    local_148 = 1;
    local_170 = 0;
    local_150 = 0;
    local_168 = uStack_198;
  }
  iVar1 = (*DAT_146ab0170)(*(undefined8 *)(param_1 + 8),&local_1b8,0,local_1c8);
  if (iVar1 < 0) {
    FUN_141e67d70(iVar1,
                  "VulkanRHI::vkCreateRenderPass(InDevice.GetInstanceHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &RenderPassHandle)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",0x616
                 );
  }
  return local_1c8[0];
}



// FUNCTION 141e45cd0 FUN_141e45cd0 body=40 status=ok
// SIG undefined FUN_141e45cd0(void)

undefined8
FUN_141e45cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  FUN_141e63af0(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 141e45d00 CreateVertexBuffer_RenderThread body=41 status=ok
// SIG undefined CreateVertexBuffer_RenderThread(void)

undefined8
FOpenGLDynamicRHI::CreateVertexBuffer_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6)

{
  FUN_141e64770(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 141e45d30 FUN_141e45d30 body=365 status=ok
// SIG undefined FUN_141e45d30(void)

undefined8 *
FUN_141e45d30(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 *local_res20;
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_4 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_4,uVar1,0);
  local_res10[0] = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIVertexShader,0,1>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,0,1);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_4,local_res10[0]);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = local_res10;
    local_res20 = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    local_40 = &local_res20;
    FUN_141e32e00(lVar2 + 0x478,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e45ea0 Destroy body=1185 status=ok
// SIG undefined Destroy(void)

void FTransitionAndLayoutManager::Destroy(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_3 == 0) {
    uVar3 = *(uint *)(param_1 + 5);
    puVar1 = (uint *)(param_1 + 2);
    iVar9 = 0;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar4 = *puVar12;
      iStack_80 = iVar9;
      local_98 = iVar9;
      while (uVar4 == 0) {
        lVar11 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar8 = local_98 + 1;
        bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar8;
        if (bVar7) goto LAB_141e45fad;
        uVar4 = puVar12[lVar11 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      iVar8 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (iStack_80 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_141e45fad:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 5);
    uStack_60._0_4_ = 0xffffffff;
    uStack_60._4_4_ = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar13 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = param_1;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38._0_4_ = (uint)uStack_60;
    uStack_38._4_4_ = uStack_60._4_4_;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar8 = (int)uVar4 >> 5;
      while (uVar10 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_141e46083;
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
      uStack_84 = (uVar13 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_141e46083:
        uStack_84 = uVar3;
      }
    }
    while ((uStack_60._4_4_ != uStack_84 || (local_68 != puVar1))) {
      lVar11 = *(longlong *)(*param_1 + 8 + (longlong)(int)uStack_60._4_4_ * 0x18);
      if (lVar11 != 0) {
        FUN_141e254e0(*(longlong *)(lVar11 + 0x368) + 0x3b0,0,*(undefined8 *)(lVar11 + 0x358));
        *(undefined8 *)(lVar11 + 0x358) = 0;
        FMemory::operator_delete(lVar11,0x370);
      }
      uStack_60._0_4_ = (uint)uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    plVar2 = param_1 + 10;
    uStack_94 = 1;
    uVar3 = *(uint *)(param_1 + 0xf);
    puVar1 = (uint *)(param_1 + 0xc);
    local_98 = 0;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar12 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar4 = *puVar12;
      iStack_80 = iVar9;
      local_98 = iVar9;
      while (uVar4 == 0) {
        lVar11 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar9 = local_98 + 1;
        bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar9;
        if (bVar7) goto LAB_141e4619d;
        uVar4 = puVar12[lVar11 + 1];
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
LAB_141e4619d:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xf);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar13 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar12 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar10 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_141e46262;
        uVar10 = puVar12[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_84 = (uVar13 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_141e46262:
        uStack_84 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_60._4_4_ == uStack_84) && (local_68 == puVar1)) break;
      plVar5 = *(longlong **)(*plVar2 + 8 + (longlong)(int)uStack_60._4_4_ * 0x18);
      iVar9 = (int)plVar5[1] + -1;
      lVar11 = (longlong)iVar9;
      if (-1 < iVar9) {
        do {
          FVulkanFramebuffer::Destroy(*(undefined8 *)(*plVar5 + lVar11 * 8),param_2);
          lVar6 = *(longlong *)(*plVar5 + lVar11 * 8);
          if (lVar6 != 0) {
            FVulkanFramebuffer::~FVulkanFramebuffer(lVar6);
            FMemory::operator_delete(lVar6,0xe8);
          }
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar5,0x10);
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  else {
    TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
    ::Append<FDefaultSetAllocator>(param_3,param_1);
    TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
    ::Append<FDefaultSetAllocator>(param_3 + 0x50,param_1 + 10);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 10);
  return;
}



// FUNCTION 141e46350 FUN_141e46350 body=202 status=ok
// SIG undefined FUN_141e46350(void)

void FUN_141e46350(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  FUN_141e2a740(param_1[1]);
  (*DAT_146ab0330)(*(undefined8 *)(param_1[1] + 8),*param_1,0);
  lVar4 = param_1[1];
  iVar5 = 0;
  *param_1 = 0;
  if (0 < *(int *)(param_1 + 0xf)) {
    do {
      FUN_141e2d700(lVar4 + 0x438,param_1[0xe] + (longlong)iVar5 * 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xf));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar4 + param_1[0xc]);
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(param_1 + 0xd));
  }
  (*DAT_146ab0350)(param_1[0xb],param_1[3],0);
  param_1[3] = 0;
  return;
}



// FUNCTION 141e46420 FUN_141e46420 body=1609 status=ok
// SIG undefined FUN_141e46420(void)

void FUN_141e46420(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  longlong local_res20;
  uint local_138;
  uint uStack_134;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  uint *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  uint *puStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  int local_a8;
  uint local_98;
  uint uStack_94;
  uint local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  uint local_60;
  uint uStack_5c;
  
  uVar11 = 0;
  plVar16 = param_1 + 8;
  local_118 = 0;
  uVar7 = *(uint *)(param_1 + 0xd);
  puVar1 = (uint *)(param_1 + 10);
  uStack_114 = 1;
  uStack_104 = 0;
  uStack_100 = 0;
  if (uVar7 != 0) {
    puVar19 = (uint *)param_1[0xc];
    if ((uint *)param_1[0xc] == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = *puVar19;
    uVar9 = uVar11;
    uVar17 = uVar11;
    while (uVar14 == 0) {
      iVar6 = (int)uVar17;
      uStack_100 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)uStack_100;
      local_118 = iVar6 + 1;
      uVar17 = (ulonglong)local_118;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141e46503;
      uVar14 = puVar19[(longlong)iVar6 + 1];
    }
    uStack_114 = -uVar14 & uVar14;
    iVar6 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_104 = (uStack_100 - iVar6) + 0x1f;
    if ((int)uVar7 < (int)uStack_104) {
LAB_141e46503:
      uStack_104 = uVar7;
    }
  }
  uStack_94 = *(uint *)(param_1 + 0xd);
  uStack_c8 = CONCAT44(uStack_114,local_118);
  uStack_e0 = 0xffffffff;
  uStack_dc = uStack_104;
  local_d8 = CONCAT44(uStack_fc,uStack_100);
  local_a8 = (int)uStack_94 >> 5;
  local_98 = -1 << ((byte)uStack_94 & 0x1f);
  local_90 = uStack_94 & 0xffffffe0;
  uStack_f0 = CONCAT44(uStack_114,local_118);
  local_e8 = puVar1;
  local_d0 = plVar16;
  puStack_c0 = puVar1;
  uStack_b0 = local_d8;
  uStack_b8 = uStack_e0;
  uStack_b4 = uStack_dc;
  uVar14 = uStack_94;
  if (uStack_94 != uVar7) {
    puVar19 = (uint *)param_1[0xc];
    if ((uint *)param_1[0xc] == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = puVar19[local_a8] & local_98;
    while (uVar14 == 0) {
      lVar10 = (longlong)local_a8;
      local_90 = local_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar21 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar21) goto LAB_141e465ee;
      uVar14 = puVar19[lVar10 + 1];
      local_98 = 0xffffffff;
    }
    uVar14 = -uVar14 & uVar14;
    iVar6 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (local_90 - iVar6) + 0x1f;
    uVar14 = uStack_94;
    if ((int)uVar7 < (int)uStack_94) {
LAB_141e465ee:
      uStack_94 = uVar7;
      uVar14 = uVar7;
    }
  }
  while ((uStack_dc != uVar14 || (local_e8 != puVar1))) {
    puVar3 = *(undefined8 **)(*plVar16 + 8 + (longlong)(int)uStack_dc * 0x18);
    if (DAT_146ab62c8 == '\0') {
      LOCK();
      if (*(int *)(puVar3 + 1) == 0) {
        *(int *)(puVar3 + 1) = 0;
      }
      UNLOCK();
    }
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar21 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar21) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar21) {
          uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
          uVar9 = uVar11;
          if (uVar7 != 0) {
            uVar9 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(uVar9 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(plVar16);
  uStack_134 = 1;
  local_138 = 0;
  plVar16 = param_1 + 0x1c;
  uStack_124 = 0;
  uStack_120 = 0;
  uVar7 = *(uint *)(param_1 + 0x21);
  puVar1 = (uint *)(param_1 + 0x1e);
  if (uVar7 != 0) {
    puVar19 = (uint *)param_1[0x20];
    if ((uint *)param_1[0x20] == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar14 = *puVar19;
    uVar9 = uVar11;
    while (uVar14 == 0) {
      iVar6 = (int)uVar11;
      uStack_120 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)uStack_120;
      local_138 = iVar6 + 1;
      uVar11 = (ulonglong)local_138;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141e467b2;
      uVar14 = puVar19[(longlong)iVar6 + 1];
    }
    uStack_134 = -uVar14 & uVar14;
    iVar6 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_124 = (uStack_120 - iVar6) + 0x1f;
    if ((int)uVar7 < (int)uStack_124) {
LAB_141e467b2:
      uStack_124 = uVar7;
    }
  }
  uStack_5c = *(uint *)(param_1 + 0x21);
  uStack_f0 = CONCAT44(uStack_134,local_138);
  uStack_b8 = 0xffffffff;
  uStack_b4 = uStack_124;
  local_d8 = CONCAT44(uStack_11c,uStack_120);
  local_60 = -1 << ((byte)uStack_5c & 0x1f);
  uVar14 = uStack_5c & 0xffffffe0;
  uStack_c8 = CONCAT44(uStack_134,local_138);
  if (uStack_5c != uVar7) {
    puVar19 = (uint *)param_1[0x20];
    if ((uint *)param_1[0x20] == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar15 = puVar19[(int)uStack_5c >> 5] & local_60;
    iVar6 = (int)uStack_5c >> 5;
    while (uVar15 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141e46882;
      uVar15 = puVar19[(longlong)iVar6 + 1];
      local_60 = 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    uVar15 = -uVar15 & uVar15;
    iVar6 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_5c = (uVar14 - iVar6) + 0x1f;
    if ((int)uVar7 < (int)uStack_5c) {
LAB_141e46882:
      uStack_5c = uVar7;
    }
  }
  local_78 = (ulonglong)uStack_5c;
  local_e8 = puVar1;
  local_d0 = plVar16;
  puStack_c0 = puVar1;
  uStack_b0 = local_d8;
  local_80 = plVar16;
  uStack_e0 = uStack_b8;
  uStack_dc = uStack_b4;
  do {
    if (((uStack_b4 == (uint)local_78) && (puStack_c0 == puVar1)) && (local_d0 == plVar16)) {
      TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
      ::Reset(plVar16);
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
      if (BVar8 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
      }
      TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
      ::Reset(param_1 + 0x3c);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
      TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
      ::Reset(param_1 + 0x27);
      return;
    }
    local_88 = *(longlong *)((longlong)(int)uStack_b4 * 0x20 + 8 + *local_d0);
    if (*(char *)(local_88 + 4) != '\0') {
      lVar10 = *param_1;
      plVar16 = (longlong *)(local_88 + 0x148);
      local_res20 = 5;
      do {
        lVar4 = *plVar16;
        if (lVar4 != 0) {
          lVar12 = (longlong)*(int *)(lVar10 + 0x18e8);
          if (*(int *)(lVar10 + 0x18e8) != 0) {
            uVar17 = 0;
            bVar21 = **(longlong **)(lVar10 + 0x18e0) != lVar4;
            uVar11 = uVar17;
            uVar9 = uVar17;
            do {
              iVar6 = (int)uVar11;
              uVar17 = uVar17 + 1;
              uVar11 = (ulonglong)(iVar6 + 1);
              if ((longlong)uVar17 < lVar12) {
                plVar13 = (longlong *)(*(longlong *)(lVar10 + 0x18e0) + uVar17 * 8);
                do {
                  if (bVar21 != (*plVar13 != lVar4)) break;
                  uVar11 = (ulonglong)((int)uVar11 + 1);
                  uVar17 = uVar17 + 1;
                  plVar13 = plVar13 + 1;
                } while ((longlong)uVar17 < lVar12);
              }
              iVar18 = (int)uVar11 - iVar6;
              if (bVar21 != false) {
                iVar20 = (int)uVar9;
                if (iVar20 != iVar6) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(lVar10 + 0x18e0) + (longlong)iVar20 * 8),
                             (void *)(*(longlong *)(lVar10 + 0x18e0) + (longlong)iVar6 * 8),
                             (longlong)iVar18 << 3);
                }
                uVar9 = (ulonglong)(uint)(iVar20 + iVar18);
              }
              bVar21 = (bool)(bVar21 ^ 1);
            } while ((longlong)uVar17 < lVar12);
            *(int *)(lVar10 + 0x18e8) = (int)uVar9;
          }
          (*DAT_146ab00c0)(*(undefined8 *)(lVar10 + 8),*plVar16);
          *plVar16 = 0;
        }
        plVar16 = plVar16 + 1;
        local_res20 = local_res20 + -1;
      } while (local_res20 != 0);
      *(undefined1 *)(local_88 + 4) = 0;
      plVar16 = local_80;
    }
    uStack_b8 = uStack_b8 & ~uStack_c8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c8);
  } while( true );
}



// FUNCTION 141e46a70 FUN_141e46a70 body=20 status=ok
// SIG undefined FUN_141e46a70(void)

void FUN_141e46a70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141e3f740(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 141e46a90 DoWork body=66 status=ok
// SIG undefined DoWork(void)

void FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::DoWork
               (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(lVar1);
    FMemory::operator_delete(lVar1,0x60);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  return;
}



// FUNCTION 141e46ae0 Empty body=485 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint local_58;
  uint uStack_54;
  int iStack_44;
  uint uStack_40;
  uint local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  uint uStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = 0;
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    uVar9 = uVar8;
    uVar7 = uVar8;
    while (uVar5 == 0) {
      iVar4 = (int)uVar9;
      uStack_40 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_40;
      local_58 = iVar4 + 1;
      uVar9 = (ulonglong)local_58;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141e46bb1;
      uVar5 = puVar10[(longlong)iVar4 + 1];
    }
    uStack_54 = -uVar5 & uVar5;
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
    iStack_44 = (uStack_40 - iVar4) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141e46bb1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  uStack_18 = uStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                (*param_1 + ((longlong)iStack_1c * 3 + 1) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  cVar3 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      uVar7 = (longlong)(int)param_1[9] - 1U & uVar8;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)plVar6 + uVar7 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


