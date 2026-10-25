// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408d4730 FUN_1408d4730 body=47 status=ok
// SIG undefined FUN_1408d4730(void)

longlong FUN_1408d4730(void)

{
  if (DAT_146861940 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861940,&PTR_FUN_146280730);
  }
  return DAT_146861940;
}



// FUNCTION 1408d4760 FUN_1408d4760 body=47 status=ok
// SIG undefined FUN_1408d4760(void)

longlong FUN_1408d4760(void)

{
  if (DAT_146861950 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861950,&PTR_FUN_146280780);
  }
  return DAT_146861950;
}



// FUNCTION 1408d4790 FUN_1408d4790 body=53 status=ok
// SIG undefined FUN_1408d4790(void)

void FUN_1408d4790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1441348d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d47d0 FUN_1408d47d0 body=53 status=ok
// SIG undefined FUN_1408d47d0(void)

void FUN_1408d47d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1441349e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d4810 FUN_1408d4810 body=53 status=ok
// SIG undefined FUN_1408d4810(void)

void FUN_1408d4810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144134b00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d4850 FUN_1408d4850 body=53 status=ok
// SIG undefined FUN_1408d4850(void)

void FUN_1408d4850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144134c18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d4890 FUN_1408d4890 body=53 status=ok
// SIG undefined FUN_1408d4890(void)

void FUN_1408d4890(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144134d30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408d48f0 operator= body=110 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FDetectedFaceFeature2D,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
  }
  return param_1;
}



// FUNCTION 1408d4960 operator= body=189 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FDetectedFaceFeatureRegion,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    iVar4 = (int)param_1[1];
    if (iVar4 != 0) {
      plVar2 = (longlong *)(*param_1 + 8);
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (int)param_2[1];
    lVar3 = *param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      lVar5 = *param_1;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        FDetectedFeatureRegion::FDetectedFeatureRegion(lVar5,lVar3);
        puVar1 = (undefined1 *)(lVar3 + 0x18);
        lVar3 = lVar3 + 0x20;
        *(undefined1 *)(lVar5 + 0x18) = *puVar1;
        lVar5 = lVar5 + 0x20;
      }
    }
  }
  return param_1;
}



// FUNCTION 1408d4a50 Copy body=129 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDetectedFace>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x18);
    do {
      puVar5[-6] = *(undefined4 *)(param_3 + -0x18 + (longlong)puVar5);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (puVar5 + -4,param_3 + -0x10 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5[4] = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar5);
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::operator=
                (puVar5 + 6,param_3 + 0x18 + (longlong)puVar5);
      TArray<FDetectedFaceFeatureRegion,FDefaultAllocator>::operator=
                (puVar5 + 10,param_3 + 0x28 + (longlong)puVar5);
      puVar5 = puVar5 + 0x14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d4ae0 Copy body=89 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDetectedFaceFeatureRegion>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x18);
    do {
      *(undefined4 *)(puVar1 + -0x18) = *(undefined4 *)(puVar1 + param_3 + -0x18);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (puVar1 + -0x10,puVar1 + param_3 + -0x10);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d4b40 Copy body=80 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDetectedFeatureRegion>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined4 *)(param_3 + (longlong)param_2);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 2,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d4b90 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FFaceDetectionResult>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FDetectedFace,FDefaultAllocator>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d4be0 Destruct body=57 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FDetectedFace>::Destruct(undefined8 param_1,longlong param_2)

{
  FUN_1408708d0(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408d4c30 EDetectedFaceFeatureType_StaticEnum body=85 status=ok
// SIG undefined EDetectedFaceFeatureType_StaticEnum(void)

void EDetectedFaceFeatureType_StaticEnum(void)

{
  if (DAT_1468618a0 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    DAT_1468618a0 = GetStaticEnum(FUN_1408d50e0,DAT_1468618a8,L"EDetectedFaceFeatureType");
  }
  return;
}



// FUNCTION 1408d4c90 Get_Z_Construct_UScriptStruct_FDetectedFaceFeature2D_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDetectedFaceFeature2D_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDetectedFaceFeature2D_CRC(void)

{
  return 0x5c15ac27;
}



// FUNCTION 1408d4ca0 Get_Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_CRC(void)

{
  return 0xa3d4e958;
}



// FUNCTION 1408d4cb0 Get_Z_Construct_UScriptStruct_FDetectedFace_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDetectedFace_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDetectedFace_CRC(void)

{
  return 0xb90865;
}



// FUNCTION 1408d4cc0 Get_Z_Construct_UScriptStruct_FDetectedFeature2D_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDetectedFeature2D_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDetectedFeature2D_CRC(void)

{
  return 0xa4d012e9;
}



// FUNCTION 1408d4cd0 Get_Z_Construct_UScriptStruct_FDetectedFeatureRegion_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDetectedFeatureRegion_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDetectedFeatureRegion_CRC(void)

{
  return 0xb0371dfe;
}



// FUNCTION 1408d4ce0 Get_Z_Construct_UScriptStruct_FDetectedFeature_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDetectedFeature_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDetectedFeature_CRC(void)

{
  return 0x8357fc8f;
}



// FUNCTION 1408d4cf0 Get_Z_Construct_UScriptStruct_FFaceDetectionResult_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFaceDetectionResult_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFaceDetectionResult_CRC(void)

{
  return 0x4649100c;
}



// FUNCTION 1408d4d00 StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy body=34 status=ok
// SIG undefined StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy(void)

void UAppleVisionDetectFacesAsyncTaskBlueprintProxy::
     StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CreateProxyObjectForDetectFaces_1441347e8,1);
  return;
}



// FUNCTION 1408d4d30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDetectedFace::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468618f8 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FDetectedFace_CRC();
    DAT_1468618f8 = GetStaticStruct(FUN_1408d5110,lVar1,L"DetectedFace",0x50,uVar2);
  }
  return;
}



// FUNCTION 1408d4db0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDetectedFaceFeature2D::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861908 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FDetectedFaceFeature2D_CRC();
    DAT_146861908 = GetStaticStruct(FUN_1408d5140,lVar1,L"DetectedFaceFeature2D",0x1c,uVar2);
  }
  return;
}



// FUNCTION 1408d4e30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDetectedFaceFeatureRegion::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861918 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_CRC();
    DAT_146861918 = GetStaticStruct(FUN_1408d5170,lVar1,L"DetectedFaceFeatureRegion",0x20,uVar2);
  }
  return;
}



// FUNCTION 1408d4eb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDetectedFeature2D::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861938 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FDetectedFeature2D_CRC();
    DAT_146861938 = GetStaticStruct(FUN_1408d4730,lVar1,L"DetectedFeature2D",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408d4f30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDetectedFeature::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861948 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FDetectedFeature_CRC();
    DAT_146861948 = GetStaticStruct(FUN_1408d4760,lVar1,L"DetectedFeature",4,uVar2);
  }
  return;
}



// FUNCTION 1408d4fb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDetectedFeatureRegion::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861928 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FDetectedFeatureRegion_CRC();
    DAT_146861928 = GetStaticStruct(FUN_1408d4700,lVar1,L"DetectedFeatureRegion",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408d5030 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFaceDetectionResult::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468618e8 == 0) {
    if (DAT_1468618a8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
    }
    lVar1 = DAT_1468618a8;
    uVar2 = Get_Z_Construct_UScriptStruct_FFaceDetectionResult_CRC();
    DAT_1468618e8 = GetStaticStruct(FUN_1408d51a0,lVar1,L"FaceDetectionResult",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408d50b0 FUN_1408d50b0 body=47 status=ok
// SIG undefined FUN_1408d50b0(void)

longlong FUN_1408d50b0(void)

{
  if (DAT_1468618b0 == 0) {
    FUN_141786a30(&DAT_1468618b0,&PTR_FUN_146280030);
  }
  return DAT_1468618b0;
}



// FUNCTION 1408d50e0 FUN_1408d50e0 body=47 status=ok
// SIG undefined FUN_1408d50e0(void)

longlong FUN_1408d50e0(void)

{
  if (DAT_1468618e0 == 0) {
    FUN_1417866a0(&DAT_1468618e0,&PTR_FUN_1462807d0);
  }
  return DAT_1468618e0;
}



// FUNCTION 1408d5110 FUN_1408d5110 body=47 status=ok
// SIG undefined FUN_1408d5110(void)

longlong FUN_1408d5110(void)

{
  if (DAT_146861900 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861900,&PTR_FUN_146280440);
  }
  return DAT_146861900;
}



// FUNCTION 1408d5140 FUN_1408d5140 body=47 status=ok
// SIG undefined FUN_1408d5140(void)

longlong FUN_1408d5140(void)

{
  if (DAT_146861910 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861910,&PTR_FUN_146280540);
  }
  return DAT_146861910;
}



// FUNCTION 1408d5170 FUN_1408d5170 body=47 status=ok
// SIG undefined FUN_1408d5170(void)

longlong FUN_1408d5170(void)

{
  if (DAT_146861920 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861920,&PTR_FUN_146280610);
  }
  return DAT_146861920;
}



// FUNCTION 1408d51a0 FUN_1408d51a0 body=47 status=ok
// SIG undefined FUN_1408d51a0(void)

longlong FUN_1408d51a0(void)

{
  if (DAT_1468618f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468618f0,&PTR_FUN_146280290);
  }
  return DAT_1468618f0;
}



// FUNCTION 1408d51d0 execCreateProxyObjectForDetectFaces body=128 status=ok
// SIG undefined execCreateProxyObjectForDetectFaces(void)

void UAppleVisionDetectFacesAsyncTaskBlueprintProxy::execCreateProxyObjectForDetectFaces
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
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
  uVar1 = CreateProxyObjectForDetectFaces(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408d5250 FUN_1408d5250 body=365 status=ok
// SIG undefined FUN_1408d5250(void)

undefined8 * FUN_1408d5250(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x58);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FBackChannelConnection::FBackChannelConnection(lVar3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_1441367c0;
    plVar5[2] = (longlong)plVar4;
    plVar7 = plVar5;
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_1408d5368;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
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
  }
LAB_1408d5368:
  *param_2 = plVar4;
  param_2[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar7 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  return param_2;
}



// FUNCTION 1408d53c0 FBackChannelConnection body=96 status=ok
// SIG undefined FBackChannelConnection(void)

undefined8 * FBackChannelConnection::FBackChannelConnection(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1441366e0;
  *(undefined4 *)(param_1 + 3) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1408d5420 FUN_1408d5420 body=148 status=ok
// SIG undefined FUN_1408d5420(void)

undefined1 FUN_1408d5420(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar7 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar7 = param_1 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar7 + 8))();
    }
  }
  uVar5 = (*(code *)*param_1)(uVar6,param_2);
  plVar7 = *(longlong **)(param_2 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1408d54c0 FUN_1408d54c0 body=238 status=ok
// SIG undefined FUN_1408d54c0(void)

undefined8 * FUN_1408d54c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_1441366e0;
  if (param_1[9] != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[9] + 8))();
      uVar4 = FName::FName(local_res8,L"WINDOWS",1);
      plVar5 = (longlong *)FUN_1419c6b80(uVar4);
      (**(code **)(*plVar5 + 0x28))(plVar5,param_1[9]);
      param_1[9] = 0;
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *param_1 = &PTR__purecall_144136680;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408d55b0 FUN_1408d55b0 body=43 status=ok
// SIG undefined FUN_1408d55b0(void)

undefined8 * FUN_1408d55b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144136680;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408d55e0 Attach body=77 status=ok
// SIG undefined Attach(void)

undefined4 FBackChannelConnection::Attach(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 1;
}



// FUNCTION 1408d5630 FUN_1408d5630 body=695 status=ok
// SIG undefined FUN_1408d5630(void)

longlong * FUN_1408d5630(char *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  short *psVar11;
  bool bVar12;
  undefined2 *puVar13;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  
  bVar12 = false;
  local_res10[0] = 0;
  FName::FName(local_res20,L"WINDOWS",1);
  plVar6 = (longlong *)FUN_1419c6b80();
  if (plVar6 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  puVar13 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x18) == 0) {
    psVar11 = &DAT_143f3eda8;
  }
  else {
    psVar11 = *(short **)(param_1 + 0x10);
  }
  local_58 = 0;
  local_50 = 0;
  lVar10 = -1;
  if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (psVar11[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_50 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar11,(longlong)(int)uVar9 * 2);
  }
  local_res18 = 0x119;
  plVar7 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_res18,&local_58,1);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (plVar7 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  cVar5 = (**(code **)(*plVar7 + 0xb8))(plVar7,param_1[0x34]);
  if (((cVar5 == '\0') ||
      (cVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7,param_1[0x20],*(undefined4 *)(param_1 + 0x24)),
      cVar5 == '\0')) || (cVar5 = (**(code **)(*plVar7 + 200))(plVar7,1), cVar5 == '\0'))
  goto LAB_1408d58ab;
  if (param_1[1] == '\0') {
LAB_1408d57db:
    bVar4 = false;
  }
  else {
    (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_48,0,0);
    (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 4));
    (**(code **)(*local_48 + 0x30))(local_48,*(undefined2 *)(param_1 + 8));
    bVar12 = true;
    cVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,local_48);
    if (cVar5 != '\0') goto LAB_1408d57db;
    bVar4 = true;
  }
  if ((bVar12) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (((!bVar4) &&
      ((param_1[0x28] == '\0' ||
       (cVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,*(undefined4 *)(param_1 + 0x2c)), cVar5 != '\0'
       )))) && (cVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*param_1 == '\0'), cVar5 != '\0')) {
    if (0 < *(int *)(param_1 + 0x30)) {
      (**(code **)(*plVar7 + 0xd8))(plVar7,*(int *)(param_1 + 0x30),local_res10);
    }
    if (*(int *)(param_1 + 0x38) < 1) {
      return plVar7;
    }
    (**(code **)(*plVar7 + 0xd0))(plVar7,*(int *)(param_1 + 0x38),local_res10);
    return plVar7;
  }
LAB_1408d58ab:
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar13 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar8 = FUN_141672640();
  FOutputDevice::LogfImpl
            (uVar8,L"FTcpSocketBuilder: Failed to create the socket %s as configured",puVar13);
  (**(code **)(*plVar6 + 0x28))(plVar6,plVar7);
  return (longlong *)0x0;
}



// FUNCTION 1408d58f0 Close body=127 status=ok
// SIG undefined Close(void)

void FBackChannelConnection::Close(longlong param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
    uVar2 = FName::FName(local_res8,L"WINDOWS",1);
    plVar3 = (longlong *)FUN_1419c6b80(uVar2);
    (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408d5968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1408d5970 CloseWithError body=325 status=ok
// SIG undefined CloseWithError(void)

void FBackChannelConnection::CloseWithError(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  void **ppvVar6;
  undefined4 local_res8 [2];
  void *local_38;
  undefined8 local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  bVar4 = true;
  bVar3 = false;
  local_res8[0] = 0;
  uVar5 = FName::FName(local_res8,L"WINDOWS",1);
  uVar5 = FUN_1419c6b80(uVar5);
  ISocketSubsystem::GetSocketError(uVar5,0x38);
  if ((param_3 == 0) && (param_3 = param_1[9], param_3 == 0)) {
    local_38 = (void *)0x0;
    local_30 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"(No Socket)",0x18);
    ppvVar6 = &local_38;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x18);
    pvVar2 = *(void **)(param_3 + 0x10);
    local_28 = (void *)0x0;
    local_20 = iVar1;
    if (iVar1 == 0) {
      local_1c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop(local_28,pvVar2,(longlong)iVar1 * 2);
    }
    ppvVar6 = &local_28;
  }
  pvVar2 = *ppvVar6;
  *ppvVar6 = (void *)0x0;
  ppvVar6[1] = (void *)0x0;
  if (bVar3) {
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}



// FUNCTION 1408d5ac0 FUN_1408d5ac0 body=1202 status=ok
// SIG undefined FUN_1408d5ac0(void)

bool FUN_1408d5ac0(longlong *param_1,short *param_2)

{
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  void *_Src;
  void *pvVar13;
  short *psVar14;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined2 local_res1c;
  undefined1 local_res20 [8];
  longlong local_168;
  ulonglong local_160;
  void *local_158;
  ulonglong local_150;
  undefined2 local_148;
  undefined4 local_144;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_104;
  longlong local_f8 [2];
  undefined1 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined2 *local_b8;
  int local_b0;
  short *local_a8;
  int local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined8 local_94;
  longlong local_88 [2];
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_58 [24];
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  _Src = (void *)0x0;
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  local_168 = 0;
  local_160 = 0;
  lVar12 = -1;
  if ((param_2 != (short *)0x0) && (lVar11 = lVar12, *param_2 != 0)) {
    do {
      lVar11 = lVar11 + 1;
    } while (param_2[lVar11] != 0);
    uVar9 = (int)lVar11 + 1;
    local_160 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    FGenericPlatformString::Memcpy(local_168,param_2,(longlong)(int)uVar9 * 2);
  }
  FString::PrintfImpl(&local_a8,&DAT_144135110,param_2);
  local_res10[0] = 0x200000;
  local_res8[0] = 0x200000;
  FConfigCacheIni::GetInt(DAT_1468b6148,L"BackChannel",L"SendBufferSize",local_res8,&DAT_1468e2360);
  FConfigCacheIni::GetInt(DAT_1468b6148,L"BackChannel",L"RecvBufferSize",local_res10,&DAT_1468e2360)
  ;
  local_158 = (void *)0x0;
  psVar14 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    psVar14 = local_a8;
  }
  local_150 = 0;
  pvVar13 = _Src;
  if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
    do {
      lVar12 = lVar12 + 1;
    } while (psVar14[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_150 = (ulonglong)uVar10;
    uVar9 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      uVar9 = (uint)local_150;
    }
    _Src = local_158;
    pvVar13 = (void *)(ulonglong)uVar9;
    FGenericPlatformString::Memcpy(local_158,psVar14,(longlong)(int)uVar10 * 2);
  }
  local_148._0_1_ = 0;
  local_148 = 0;
  local_148._1_1_ = 0;
  local_144 = DAT_1469f59a0;
  uStack_140 = 0;
  local_138 = (void *)0x0;
  iVar4 = (int)pvVar13;
  local_130 = iVar4;
  if (iVar4 == 0) {
    local_12c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,pvVar13,0);
    _guard_xfg_dispatch_icall_nop(local_138,_Src,(longlong)iVar4 * 2);
  }
  local_110 = local_res8[0];
  local_104 = CONCAT26(uStack_13e,CONCAT24(uStack_140,local_144));
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0;
  local_108 = (undefined1)local_148;
  local_107 = local_148._1_1_;
  FString::FString(local_f8,&local_138);
  local_e8 = local_128;
  local_e4 = local_124;
  local_e0 = local_120;
  local_dc = local_11c;
  local_d4 = local_114;
  local_d0 = local_110;
  local_d8 = local_res10[0];
  local_98 = local_108;
  local_97 = local_107;
  local_94 = local_104;
  FString::FString(local_88,local_f8);
  local_78 = local_e8;
  local_74 = local_e4;
  local_70 = local_e0;
  local_6c = local_dc;
  local_68 = local_d8;
  local_64 = local_d4;
  local_60 = local_d0;
  plVar5 = (longlong *)FUN_1408d5630(&local_98);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (plVar5 != (longlong *)0x0) {
    FIPv4Endpoint::Parse(&local_168,&local_res18);
    (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_c8,0,0);
    (**(code **)(*local_c8 + 0x10))(local_c8,local_res18);
    (**(code **)(*local_c8 + 0x30))(local_c8,local_res1c);
    cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,local_c8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_c0 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (cVar2 == '\0') {
      uVar6 = FName::FName(local_res20,L"WINDOWS",1);
      plVar7 = (longlong *)FUN_1419c6b80(uVar6);
      iVar4 = (**(code **)(*plVar7 + 0x88))(plVar7);
      if (1 < iVar4 - 7U) {
        FString::PrintfImpl(&local_b8,L"Failed to open connection to %s.",param_2);
        puVar8 = &DAT_143f3eda8;
        if (local_b0 != 0) {
          puVar8 = local_b8;
        }
        FBackChannelConnection::CloseWithError(param_1,puVar8,plVar5);
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar6 = FName::FName(local_58,L"WINDOWS",1);
        plVar7 = (longlong *)FUN_1419c6b80(uVar6);
        (**(code **)(*plVar7 + 0x28))(plVar7,plVar5);
        goto LAB_1408d5f2a;
      }
    }
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
    param_1[9] = (longlong)plVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
LAB_1408d5f2a:
  lVar12 = param_1[9];
  if (local_a8 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return lVar12 != 0;
}



// FUNCTION 1408d5f80 FUN_1408d5f80 body=22 status=ok
// SIG undefined FUN_1408d5f80(void)

void FUN_1408d5f80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408d5f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1408d5fa0 GetDescription body=323 status=ok
// SIG undefined GetDescription(void)

undefined8 * FBackChannelConnection::GetDescription(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  BOOL BVar5;
  void **ppvVar6;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  int local_20;
  undefined4 uStack_1c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 == 0) {
    local_38 = (void *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"No Socket",0x14);
    ppvVar6 = &local_38;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x18);
    _Src = *(void **)(lVar2 + 0x10);
    local_28 = (void *)0x0;
    local_20 = iVar1;
    if (iVar1 == 0) {
      ppvVar6 = &local_28;
      uStack_1c = 0;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar1 * 2);
      ppvVar6 = &local_28;
      bVar4 = true;
      bVar3 = false;
    }
  }
  *param_2 = *ppvVar6;
  *ppvVar6 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar6 + 1);
  ppvVar6[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  if (bVar3) {
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1408d60f0 FUN_1408d60f0 body=4 status=ok
// SIG undefined FUN_1408d60f0(void)

undefined4 FUN_1408d60f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// FUNCTION 1408d6100 FUN_1408d6100 body=39 status=ok
// SIG undefined FUN_1408d6100(void)

void FUN_1408d6100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144136638;
    return;
  }
  return;
}



// FUNCTION 1408d6130 IsConnected body=91 status=ok
// SIG undefined IsConnected(void)

undefined4 FBackChannelConnection::IsConnected(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))();
    if (iVar2 == 1) {
      uVar3 = 1;
      goto LAB_1408d6173;
    }
  }
  uVar3 = 0;
LAB_1408d6173:
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}



// FUNCTION 1408d61a0 FUN_1408d61a0 body=1413 status=ok
// SIG undefined FUN_1408d61a0(void)

bool FUN_1408d61a0(longlong param_1,short param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  char cVar5;
  char cVar6;
  BOOL BVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  int local_res8 [2];
  char local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  uint6 local_1a4;
  undefined2 uStack_19e;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  uint local_168;
  short sStack_164;
  undefined2 uStack_162;
  undefined8 local_160;
  void *local_158;
  ulonglong local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined8 local_144;
  longlong local_138 [2];
  undefined1 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_104;
  longlong local_f8 [2];
  undefined1 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a4;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  uVar4 = DAT_1469f59a0;
  local_168 = DAT_1469f59a0;
  local_res8[0] = 0x200000;
  local_res18[0] = 0x200000;
  sStack_164 = param_2;
  FConfigCacheIni::GetInt(DAT_1468b6148,L"BackChannel",L"SendBufferSize",local_res18,&DAT_1468e2360)
  ;
  FConfigCacheIni::GetInt(DAT_1468b6148,L"BackChannel",L"RecvBufferSize",local_res8,&DAT_1468e2360);
  local_150 = 0x24;
  local_158 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  _Src = local_158;
  FGenericPlatformString::Memcpy(local_158,L"FBackChannelConnection ListenSocket",0x48);
  lVar13 = (longlong)(int)local_150;
  local_1a8 = 0;
  local_1a4 = (uint6)DAT_1469f59a0;
  local_198 = (void *)0x0;
  local_190 = (int)local_150;
  if ((int)local_150 == 0) {
    local_18c = 0;
    local_108 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_198,local_150 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_198,_Src,lVar13 * 2);
    local_108 = (undefined1)local_1a8;
  }
  _local_1a4 = CONCAT26(uStack_162,CONCAT24(sStack_164,local_168));
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_1a8 = CONCAT11(1,(undefined1)local_1a8);
  local_107 = 1;
  local_104 = _local_1a4;
  FString::FString(local_f8,&local_198);
  local_e8 = local_188;
  local_e4 = local_184;
  local_d8 = local_178;
  local_d4 = local_174;
  local_d0 = local_170;
  local_148 = local_108;
  local_147 = local_107;
  local_144 = local_104;
  local_e0 = 1;
  local_dc = 8;
  FString::FString(local_138,local_f8);
  local_128 = local_e8;
  local_124 = local_e4;
  local_120 = local_e0;
  local_11c = local_dc;
  local_118 = local_d8;
  local_114 = local_d4;
  local_a8 = local_148;
  local_a7 = local_147;
  local_a4 = local_144;
  local_110 = 0x200000;
  FString::FString(local_98,local_138);
  local_88 = local_128;
  local_84 = local_124;
  local_80 = local_120;
  local_7c = local_11c;
  local_78 = local_118;
  local_74 = local_114;
  local_70 = local_110;
  plVar8 = (longlong *)FUN_1408d5630(&local_a8);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  uVar9 = FName::FName(local_68,L"WINDOWS",1);
  plVar10 = (longlong *)FUN_1419c6b80(uVar9);
  if (plVar8 == (longlong *)0x0) {
    if (plVar10 != (longlong *)0x0) {
      local_1b0 = 0x24;
      local_1b8 = plVar8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      FGenericPlatformString::Memcpy(local_1b8,L"FBackChannelConnection ListenSocket",0x48);
      local_160 = 0x119;
      plVar8 = (longlong *)(**(code **)(*plVar10 + 0x18))(plVar10,&local_160,&local_1b8,1);
      if (local_1b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (plVar8 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar8 + 0xb8))(plVar8,1);
        cVar6 = '\0';
        if (cVar5 != '\0') {
          cVar6 = (**(code **)(*plVar8 + 200))(plVar8,1);
        }
        if (cVar6 != '\0') {
          (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_c8,0,0);
          (**(code **)(*local_c8 + 0x10))(local_c8,uVar4);
          (**(code **)(*local_c8 + 0x30))(local_c8,param_2);
          cVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,local_c8);
          local_res10 = cVar6 == '\0';
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c0 + 1;
            lVar13 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar2 = (int *)((longlong)local_c0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_c0 + 8))(local_c0,1);
              }
            }
          }
          if (local_res10 == '\0') {
            cVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,2);
            if (cVar6 != '\0') {
              cVar6 = (**(code **)(*plVar8 + 0x88))(plVar8,1);
              if (cVar6 != '\0') {
                if (0 < local_res8[0]) {
                  (**(code **)(*plVar8 + 0xd8))(plVar8,local_res8[0],local_res20);
                }
                if (0 < local_res18[0]) {
                  (**(code **)(*plVar8 + 0xd0))(plVar8,local_res18[0],local_res20);
                }
                goto LAB_1408d6605;
              }
            }
          }
        }
        uVar9 = FName::FName(local_60,L"WINDOWS",1);
        uVar9 = FUN_1419c6b80(uVar9);
        uVar9 = ISocketSubsystem::GetSocketError(uVar9,0x38);
        uVar11 = FUN_141672640();
        FOutputDevice::LogfImpl
                  (uVar11,L"FTcpSocketBuilder: Failed to create the socket %s as configured. %s",
                   L"Pfft",uVar9);
        (**(code **)(*plVar10 + 0x28))(plVar10,plVar8);
        plVar8 = (longlong *)0x0;
      }
    }
    uVar9 = FName::FName(local_58,L"WINDOWS",1);
    uVar9 = FUN_1419c6b80(uVar9);
    ISocketSubsystem::GetSocketError(uVar9,0x38);
    FString::PrintfImpl(&local_b8,L"Failed to start listening on port %d",(int)param_2);
    puVar12 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar12 = local_b8;
    }
    FBackChannelConnection::CloseWithError(param_1,puVar12,0);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
LAB_1408d6605:
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    }
    *(longlong **)(param_1 + 0x48) = plVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return plVar8 != (longlong *)0x0;
}



// FUNCTION 1408d6730 ReceiveData body=129 status=ok
// SIG undefined ReceiveData(void)

int FBackChannelConnection::ReceiveData(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  int local_res8 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar3 = 0;
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = 0;
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3,local_res8,0);
    iVar3 = local_res8[0];
    if (0 < local_res8[0]) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar3;
}



// FUNCTION 1408d67c0 SendData body=130 status=ok
// SIG undefined SendData(void)

undefined4 FBackChannelConnection::SendData(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    local_res8[0] = 0;
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,local_res8);
    uVar3 = local_res8[0];
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}



// FUNCTION 1408d6850 FUN_1408d6850 body=1199 status=ok
// SIG undefined FUN_1408d6850(void)

ulonglong FUN_1408d6850(longlong param_1,double param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  longlong *extraout_RAX;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  byte local_b8;
  char local_b7 [7];
  longlong local_b0 [3];
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [32];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    plVar5 = extraout_RAX;
    if (*(int *)(param_3 + 0x40) != 0) {
      plVar5 = *(longlong **)(param_3 + 0x30);
      plVar7 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        plVar7 = (longlong *)(param_3 + 0x10);
      }
      if (plVar7 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (*(longlong *)(param_3 + 0x30) != 0) {
      plVar5 = (longlong *)FMemory::Free();
    }
    return (ulonglong)plVar5 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)0x0;
  FTimespan::Assign(&local_98,0,0,0,(int)param_2,0);
  local_b7[0] = '\0';
  lVar8 = **(longlong **)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x50) == '\0') {
    iVar4 = (**(code **)(lVar8 + 0x70))();
    if (iVar4 != 2) {
      local_b8 = 1;
      local_b7[0] = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x68))
                              (*(longlong **)(param_1 + 0x48),1,local_98);
      goto LAB_1408d69a0;
    }
    uVar6 = FName::FName(local_60,L"WINDOWS",1);
    uVar6 = FUN_1419c6b80(uVar6);
    ISocketSubsystem::GetSocketError(uVar6,0x38);
  }
  else {
    local_b8 = (**(code **)(lVar8 + 0x28))(*(longlong **)(param_1 + 0x48),local_b7,&local_98);
    if (local_b8 != 0) {
LAB_1408d69a0:
      if (local_b7[0] != '\0') {
        if (*(char *)(param_1 + 0x50) == '\0') {
          plVar7 = *(longlong **)(param_1 + 0x10);
          plVar10 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            iVar4 = (int)plVar7[1];
            bVar12 = iVar4 == 0;
            if (bVar12) {
              *(int *)(plVar7 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
            while (plVar10 = plVar5, !bVar12) {
              LOCK();
              bVar12 = iVar4 == (int)plVar7[1];
              if (bVar12) {
                *(int *)(plVar7 + 1) = iVar4 + 1;
              }
              UNLOCK();
              if (bVar12) {
                plVar10 = plVar7;
                plVar5 = (longlong *)0x0;
                if (plVar7 != (longlong *)0x0) {
                  plVar5 = *(longlong **)(param_1 + 8);
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar10 = plVar7 + 1;
                  lVar8 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  plVar10 = plVar7;
                  if ((int)lVar8 == 1) {
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
                break;
              }
              LOCK();
              iVar4 = (int)plVar7[1];
              bVar12 = iVar4 == 0;
              if (bVar12) {
                *(int *)(plVar7 + 1) = 0;
                iVar4 = 0;
              }
              UNLOCK();
            }
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_90 = plVar5;
          local_88 = plVar10;
          FUN_1408d5420(param_3,&local_90);
          local_68 = plVar10;
        }
        else {
          uVar6 = FName::FName(local_58,L"WINDOWS",1);
          plVar7 = (longlong *)FUN_1419c6b80(uVar6);
          (**(code **)(*plVar7 + 0x70))(plVar7,&local_70,0,0);
          local_b0[0] = 0;
          local_b0[1] = 0x11;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b0,0);
          FGenericPlatformString::Memcpy(local_b0[0],L"RemoteConnection",0x22);
          lVar8 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
                            (*(longlong **)(param_1 + 0x48),local_70,local_b0);
          local_b0[2] = lVar8;
          if (local_b0[0] != 0) {
            FMemory::Free();
          }
          if (lVar8 != 0) {
            lVar8 = operator_new(0x58);
            plVar7 = plVar5;
            if (lVar8 != 0) {
              plVar7 = (longlong *)FBackChannelConnection::FBackChannelConnection(lVar8);
            }
            plVar9 = (longlong *)operator_new(0x18);
            plVar10 = plVar5;
            if (plVar9 != (longlong *)0x0) {
              *(undefined4 *)(plVar9 + 1) = 1;
              *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
              *plVar9 = (longlong)&PTR_FUN_1441367c0;
              plVar9[2] = (longlong)plVar7;
              plVar10 = plVar9;
            }
            plVar9 = plVar7 + 1;
            if (plVar7 == (longlong *)0x0) {
              plVar9 = plVar5;
            }
            if (plVar9 != (longlong *)0x0) {
              if ((*plVar9 != 0) && (plVar9[1] != 0)) {
                piVar1 = (int *)(plVar9[1] + 8);
                LOCK();
                iVar4 = *piVar1;
                if (iVar4 == 0) {
                  *piVar1 = 0;
                  iVar4 = 0;
                }
                UNLOCK();
                if (0 < iVar4) goto LAB_1408d6be3;
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              *plVar9 = (longlong)plVar7;
              plVar5 = (longlong *)plVar9[1];
              if (plVar10 != plVar5) {
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
                  UNLOCK();
                  plVar5 = (longlong *)plVar9[1];
                }
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
                plVar9[1] = (longlong)plVar10;
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar10 + 1;
                lVar8 = *plVar5;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
            }
LAB_1408d6be3:
            FBackChannelConnection::Attach(plVar7,local_b0[2]);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            local_80 = plVar7;
            local_78 = plVar10;
            cVar2 = FUN_1408d5420(param_3,&local_80);
            if (cVar2 == '\0') {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar10 + 1;
              lVar8 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
          }
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_68 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
      }
      uVar11 = (ulonglong)local_b8;
      goto LAB_1408d6c99;
    }
  }
  uVar11 = 0;
  FBackChannelConnection::CloseWithError(param_1,L"Connection Check Failed",0);
LAB_1408d6c99:
  LeaveCriticalSection(lpCriticalSection);
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
  return uVar11;
}



// FUNCTION 1408d6d10 FUN_1408d6d10 body=60 status=ok
// SIG undefined FUN_1408d6d10(void)

void FUN_1408d6d10(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UPhysicalMaterial::GetPrivateStaticClass();
  uVar1 = FUN_141799c90(uVar1,0,
                        L"/GbxBlockingVolumes/PM_GbxBlockingVolumeEmpty.PM_GbxBlockingVolumeEmpty",0
                        ,0,0,1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 1408d6d50 GetInstance body=5 status=ok
// SIG undefined GetInstance(void)

undefined8 FNiagaraEmitterHandle::GetInstance(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 1408d6d80 FUN_1408d6d80 body=135 status=ok
// SIG undefined FUN_1408d6d80(void)

undefined8 * FUN_1408d6d80(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  param_1[1] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 2) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = IModuleInterface::vftable;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408d6e10 FUN_1408d6e10 body=115 status=ok
// SIG undefined FUN_1408d6e10(void)

undefined8 * FUN_1408d6e10(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR__scalar_deleting_destructor__144136c90;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49a) = 0x1010100;
  *(undefined1 *)((longlong)param_1 + 0x49e) = 1;
  FUN_14234fe40(param_1[0x8e],1);
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146861a90);
  *(undefined1 *)(param_1[0x8e] + 0x303) = 0;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 2;
  return param_1;
}



// FUNCTION 1408d6e90 FUN_1408d6e90 body=46 status=ok
// SIG undefined FUN_1408d6e90(void)

undefined8 * FUN_1408d6e90(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143fcf3b0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ecccccd;
  return param_1;
}



// FUNCTION 1408d6ec0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UOculusMR_PlaneMeshComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 1408d6f30 FUN_1408d6f30 body=324 status=ok
// SIG undefined FUN_1408d6f30(void)

undefined8 * FUN_1408d6f30(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  puVar3 = (undefined8 *)operator_new(0x30);
  lVar7 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_FUN_144136b50;
    puVar3[1] = &PTR__scalar_deleting_destructor__143f73ca8;
    *(undefined1 *)(puVar3 + 2) = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar4 = GetTransientPackage();
        FUN_1417846f0(uVar4,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,puVar3 + 1);
      *(undefined1 *)(puVar3 + 2) = 1;
    }
    *puVar3 = &PTR_FUN_144136b98;
    puVar3[1] = &PTR_LAB_144136be0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408d7080 FUN_1408d7080 body=164 status=ok
// SIG undefined FUN_1408d7080(void)

void FUN_1408d7080(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  FUN_1422384a0();
  FUN_1408d7130(param_1);
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (DAT_146b17150 != 0)) {
    lVar2 = FUN_14270d150(*(undefined8 *)(param_1 + 0x470));
    if ((lVar2 == 0) || (lVar2 == *(longlong *)(DAT_146b17150 + 0x6c8))) {
      puVar3 = (undefined8 *)FName::FName(local_res8,"GbxBlockingVolumes",1);
      uVar6 = *puVar3;
      uVar4 = FUN_14168dc80();
      plVar5 = (longlong *)FUN_141690010(uVar4,uVar6);
      plVar1 = *(longlong **)(param_1 + 0x470);
      lVar2 = *plVar1;
      uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
      (**(code **)(lVar2 + 0x850))(plVar1,uVar6);
    }
  }
  return;
}



// FUNCTION 1408d7130 FUN_1408d7130 body=778 status=ok
// SIG undefined FUN_1408d7130(void)

void FUN_1408d7130(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x838))(*(longlong **)(param_1 + 0x470),0);
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x648))(*(longlong **)(param_1 + 0x470),0);
  if (((*(char *)(param_1 + 0x495) != '\0') && (*(char *)(param_1 + 0x496) != '\0')) ||
     ((*(char *)(param_1 + 0x497) != '\0' && (*(char *)(param_1 + 0x494) != '\0')))) {
    *(undefined2 *)(param_1 + 0x494) = 0x101;
    *(undefined1 *)(param_1 + 0x497) = 1;
    *(undefined1 *)(param_1 + 0x496) = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))(*(longlong **)(param_1 + 0x470),0x1d);
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))(*(longlong **)(param_1 + 0x470),0x1c);
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))(*(longlong **)(param_1 + 0x470),0x1f);
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))(*(longlong **)(param_1 + 0x470),0x1e);
  if (*(char *)(param_1 + 0x495) == '\0') {
    if (*(char *)(param_1 + 0x497) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),6,2);
      (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))
                (*(longlong **)(param_1 + 0x470),0x1e,1);
      uVar2 = 4;
      goto LAB_1408d7286;
    }
  }
  else {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x470) + 0x830);
    if (*(char *)(param_1 + 0x497) == '\0') {
      (*pcVar1)(*(longlong **)(param_1 + 0x470),6);
      (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))
                (*(longlong **)(param_1 + 0x470),0x1f,1);
      uVar2 = 8;
LAB_1408d7286:
      (**(code **)(**(longlong **)(param_1 + 0x470) + 0x550))(*(longlong **)(param_1 + 0x470),uVar2)
      ;
    }
    else {
      (*pcVar1)();
    }
  }
  if ((*(char *)(param_1 + 0x499) != '\0') &&
     ((*(char *)(param_1 + 0x494) != '\0' || (*(char *)(param_1 + 0x496) != '\0')))) {
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),3,2);
  }
  if (*(char *)(param_1 + 0x494) == '\0') {
    if (*(char *)(param_1 + 0x496) == '\0') goto LAB_1408d736c;
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),2,2);
    uVar2 = 0x1c;
  }
  else {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x470) + 0x830);
    if (*(char *)(param_1 + 0x496) != '\0') {
      (*pcVar1)();
      (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),2,2);
      goto LAB_1408d736c;
    }
    (*pcVar1)(*(longlong **)(param_1 + 0x470),5);
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),2,2);
    uVar2 = 0x1d;
  }
  (**(code **)(**(longlong **)(param_1 + 0x470) + 0x898))(*(longlong **)(param_1 + 0x470),uVar2,1);
LAB_1408d736c:
  if (*(char *)(param_1 + 0x493) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),0x14,2);
  }
  if (*(char *)(param_1 + 0x491) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),0xe,2);
  }
  if (*(char *)(param_1 + 0x49a) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),4,2);
  }
  if (*(char *)(param_1 + 0x492) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),0xf,2);
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),0xe,2);
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x830))(*(longlong **)(param_1 + 0x470),0x13,2);
  }
  return;
}



// FUNCTION 1408d7440 FUN_1408d7440 body=162 status=ok
// SIG undefined FUN_1408d7440(void)

longlong FUN_1408d7440(void)

{
  if (DAT_146861bb0 == 0) {
    FUN_14171ccd0(L"/Script/GbxBlockingVolumes",L"GbxBlockingVolume",&DAT_146861bb0,FUN_140447710,
                  0x4a0,0x10000000,0,L"Engine",&LAB_1408d75f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146861bb0;
}



// FUNCTION 1408d74f0 FUN_1408d74f0 body=47 status=ok
// SIG undefined FUN_1408d74f0(void)

longlong FUN_1408d74f0(void)

{
  if (DAT_146861bb8 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146861bb8,&PTR_s__Script_GbxBlockingVolumes_144137940);
  }
  return DAT_146861bb8;
}



// FUNCTION 1408d7540 FUN_1408d7540 body=151 status=ok
// SIG undefined FUN_1408d7540(void)

longlong FUN_1408d7540(void)

{
  if (DAT_146861bc8 == 0) {
    FUN_14171ccd0(L"/Script/GbxBlockingVolumes",L"GbxBlockingVolumeUserSettings",&DAT_146861bc8,
                  FUN_140447710,0x38,0x10000004,0,L"EditorPerProjectUserSettings",&LAB_1408d7610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146861bc8;
}



// FUNCTION 1408d76f0 FUN_1408d76f0 body=47 status=ok
// SIG undefined FUN_1408d76f0(void)

longlong FUN_1408d76f0(void)

{
  if (DAT_146861ba8 == 0) {
    FUN_141786440(&DAT_146861ba8,&PTR_FUN_144137460);
  }
  return DAT_146861ba8;
}



// FUNCTION 1408d7720 FUN_1408d7720 body=47 status=ok
// SIG undefined FUN_1408d7720(void)

longlong FUN_1408d7720(void)

{
  if (DAT_146861bc0 == 0) {
    FUN_141786440(&DAT_146861bc0,&PTR_FUN_144137720);
  }
  return DAT_146861bc0;
}



// FUNCTION 1408d7750 HeapSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_> body=380 status=ok
// SIG undefined HeapSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>(void)

void AlgoImpl::
     HeapSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar5 = iVar8;
    iVar9 = iVar7;
joined_r0x0001408d7789:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar12 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          cVar6 = FUN_1408d7b60(param_4,param_1[(longlong)iVar8 + 2],param_1[iVar12]);
          if (cVar6 != '\0') {
            iVar12 = iVar8;
          }
          iVar12 = iVar12 + 1;
        }
        puVar1 = param_1 + iVar12;
        puVar2 = param_1 + iVar7;
        cVar6 = FUN_1408d7b60(param_4,param_1[iVar7],param_1[iVar12]);
        if (cVar6 != '\0') {
          uVar3 = *puVar2;
          *puVar2 = *puVar1;
          iVar8 = iVar12 * 2 + 1;
          *puVar1 = uVar3;
          iVar7 = iVar12;
          goto joined_r0x0001408d7789;
        }
      }
      iVar8 = iVar5 + -2;
      iVar7 = iVar9 + -1;
      iVar5 = iVar8;
      iVar9 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar11 = 0;
      uVar3 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar3;
      if (1 < param_2) {
        do {
          iVar7 = (int)uVar11;
          uVar4 = iVar7 * 2;
          uVar13 = uVar4 + 1;
          if ((int)(uVar4 + 2) < param_2) {
            cVar6 = FUN_1408d7b60(param_4,param_1[(longlong)(int)uVar4 + 2],param_1[(int)uVar13]);
            if (cVar6 != '\0') {
              uVar13 = uVar4;
            }
            uVar13 = uVar13 + 1;
          }
          uVar14 = (ulonglong)uVar13;
          puVar1 = param_1 + (int)uVar13;
          puVar2 = param_1 + iVar7;
          cVar6 = FUN_1408d7b60(param_4,param_1[iVar7],param_1[(int)uVar13]);
          if (cVar6 == '\0') break;
          uVar3 = *puVar2;
          *puVar2 = *puVar1;
          uVar11 = uVar14 & 0xffffffff;
          *puVar1 = uVar3;
        } while ((int)uVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 1408d78d0 IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_> body=647 status=ok
// SIG undefined IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar10 = ::_guard_xfg_dispatch_icall_nop(fVar10);
    local_328 = (undefined4)(longlong)(fVar10 + fVar10);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar9 = &local_338;
    do {
      puVar6 = (undefined8 *)*plVar9;
      puVar8 = (undefined8 *)plVar9[1];
      local_348 = plVar9[2];
      lVar3 = ((longlong)puVar8 - (longlong)puVar6 >> 3) + 1;
      puVar5 = puVar6;
      iVar4 = (int)local_348;
      if ((int)local_348 != 0) {
LAB_1408d79a0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar7 = puVar8 + 1;
          uVar1 = puVar5[lVar3 >> 1];
          puVar5[lVar3 >> 1] = *puVar5;
          *puVar5 = uVar1;
          puVar6 = puVar5;
LAB_1408d79d0:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar8) goto code_r0x0001408d79d9;
          goto LAB_1408d79f0;
        }
        for (; puVar7 = puVar5, puVar6 = puVar5, puVar5 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar8) {
            cVar2 = FUN_1408d7b60(param_4,*puVar7,*puVar6);
            if (cVar2 != '\0') {
              puVar7 = puVar6;
            }
          }
          uVar1 = *puVar7;
          *puVar7 = *puVar8;
          *puVar8 = uVar1;
        }
        goto LAB_1408d7ab1;
      }
LAB_1408d7aa2:
      HeapSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_1408d7ab1:
      plVar9 = plVar9 + -3;
    } while (&local_338 <= plVar9);
  }
  return;
code_r0x0001408d79d9:
  cVar2 = FUN_1408d7b60(param_4,*puVar5,*puVar6);
  if (cVar2 == '\0') goto LAB_1408d79d0;
LAB_1408d79f0:
  do {
    puVar7 = puVar7 + -1;
    if (puVar7 <= puVar5) break;
    cVar2 = FUN_1408d7b60(param_4,*puVar7,*puVar5);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar7) {
    uVar1 = *puVar6;
    *puVar6 = *puVar7;
    *puVar7 = uVar1;
    goto LAB_1408d79d0;
  }
  uVar1 = *puVar5;
  iVar4 = iVar4 + -1;
  *puVar5 = *puVar7;
  *puVar7 = uVar1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar5) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar8) {
      *plVar9 = (longlong)puVar6;
      plVar9[1] = (longlong)puVar8;
      *(int *)(plVar9 + 2) = iVar4;
      plVar9 = plVar9 + 3;
    }
    if (puVar7 <= puVar5 + 1) goto LAB_1408d7ab1;
    puVar8 = puVar7 + -1;
    puVar6 = puVar5;
  }
  else {
    if (puVar5 + 1 < puVar7) {
      *plVar9 = (longlong)puVar5;
      plVar9[1] = (longlong)(puVar7 + -1);
      *(int *)(plVar9 + 2) = iVar4;
      plVar9 = plVar9 + 3;
    }
    if (puVar8 <= puVar6) goto LAB_1408d7ab1;
  }
  lVar3 = ((longlong)puVar8 - (longlong)puVar6 >> 3) + 1;
  puVar5 = puVar6;
  if (iVar4 == 0) goto LAB_1408d7aa2;
  goto LAB_1408d79a0;
}



// FUNCTION 1408d7b60 FUN_1408d7b60 body=424 status=ok
// SIG undefined FUN_1408d7b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408d7b60(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(longlong *)(*param_1 + 0x168);
  if (lVar1 == 0) {
    local_1c = _DAT_1468b5d90;
    local_14 = DAT_1468b5d98;
  }
  else {
    local_1c = *(undefined8 *)(lVar1 + 0x220);
    local_14 = *(float *)(lVar1 + 0x228);
  }
  fVar5 = local_14;
  uVar3 = local_1c;
  lVar2 = *(longlong *)(param_2 + 0x168);
  if (lVar2 == 0) {
    local_1c = _DAT_1468b5d90;
    local_14 = DAT_1468b5d98;
  }
  else {
    local_1c = *(undefined8 *)(lVar2 + 0x220);
    local_14 = *(float *)(lVar2 + 0x228);
  }
  uStack_24 = (float)((ulonglong)uVar3 >> 0x20);
  fVar7 = (float)((ulonglong)local_1c >> 0x20) - uStack_24;
  local_28 = (float)uVar3;
  fVar6 = (float)local_1c - local_28;
  fVar5 = local_14 - fVar5;
  if (lVar1 == 0) {
    local_1c = _DAT_1468b5d90;
    local_14 = DAT_1468b5d98;
  }
  else {
    local_1c = *(undefined8 *)(lVar1 + 0x220);
    local_14 = *(float *)(lVar1 + 0x228);
  }
  fVar4 = local_14;
  uVar3 = local_1c;
  lVar1 = *(longlong *)(param_3 + 0x168);
  if (lVar1 == 0) {
    local_1c = _DAT_1468b5d90;
    local_14 = DAT_1468b5d98;
  }
  else {
    local_1c = *(undefined8 *)(lVar1 + 0x220);
    local_14 = *(float *)(lVar1 + 0x228);
  }
  uStack_24 = (float)((ulonglong)uVar3 >> 0x20);
  uStack_24 = (float)((ulonglong)local_1c >> 0x20) - uStack_24;
  local_28 = (float)uVar3;
  local_28 = (float)local_1c - local_28;
  return CONCAT31((int3)((uint)local_14 >> 8),
                  fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 <
                  uStack_24 * uStack_24 + local_28 * local_28 +
                  (local_14 - fVar4) * (local_14 - fVar4));
}



// FUNCTION 1408d7d10 FUN_1408d7d10 body=52 status=ok
// SIG undefined FUN_1408d7d10(void)

ulonglong FUN_1408d7d10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (param_1 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x1a0);
    plVar1 = in_RAX + *(int *)(param_1 + 0x1a8);
    for (; in_RAX != plVar1; in_RAX = in_RAX + 1) {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408d7d50 FUN_1408d7d50 body=105 status=ok
// SIG undefined FUN_1408d7d50(void)

void FUN_1408d7d50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1a0);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    plVar2 = plVar4 + iVar3;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = param_2;
  }
  return;
}



// FUNCTION 1408d7dc0 FUN_1408d7dc0 body=105 status=ok
// SIG undefined FUN_1408d7dc0(void)

void FUN_1408d7dc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x90);
    plVar2 = plVar4 + iVar3;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x90) = iVar3 + 1;
    if (*(int *)(param_1 + 0x94) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = param_2;
  }
  return;
}



// FUNCTION 1408d7e30 FUN_1408d7e30 body=231 status=ok
// SIG undefined FUN_1408d7e30(void)

void FUN_1408d7e30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if ((param_1 != (longlong *)0x0) &&
     ((((int)param_2 != 0 || ((int)((ulonglong)param_2 >> 0x20) != 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)))) {
    puVar2 = (ulonglong *)UDynamicEntryBox::GetAllEntries(lVar1);
    uVar4 = 0;
    plVar5 = (longlong *)*puVar2;
    uVar6 = (longlong)(int)puVar2[1] & 0x1fffffffffffffff;
    if (plVar5 + (int)puVar2[1] < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        if (((*plVar5 != 0) && ((*(byte *)(*plVar5 + 0x204) & 0x10) != 0)) &&
           ((plVar3 = (longlong *)ULevel::GetLevelScriptActor(), plVar3 != (longlong *)0x0 &&
            ((lVar1 = UObject::FindFunction(plVar3,param_2), lVar1 != 0 &&
             (*(char *)(lVar1 + 0x8c) == '\0')))))) {
          (**(code **)(*plVar3 + 0x208))(plVar3,lVar1,0);
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 1408d7f20 FUN_1408d7f20 body=76 status=ok
// SIG undefined FUN_1408d7f20(void)

undefined8 *
FUN_1408d7f20(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_1408d8010(param_2 + 0x1a0,param_3 + 0x1a0,param_1);
    *param_4 = uVar1;
  }
  return param_1;
}



// FUNCTION 1408d7f70 FUN_1408d7f70 body=76 status=ok
// SIG undefined FUN_1408d7f70(void)

undefined8 *
FUN_1408d7f70(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_1408d8010(param_2 + 0x1a0,param_3 + 0x88,param_1);
    *param_4 = uVar1;
  }
  return param_1;
}



// FUNCTION 1408d7fc0 FUN_1408d7fc0 body=76 status=ok
// SIG undefined FUN_1408d7fc0(void)

undefined8 *
FUN_1408d7fc0(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_1408d8010(param_2 + 0x88,param_3 + 0x88,param_1);
    *param_4 = uVar1;
  }
  return param_1;
}



// FUNCTION 1408d8010 FUN_1408d8010 body=197 status=ok
// SIG undefined FUN_1408d8010(void)

undefined8 FUN_1408d8010(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar5 = 0;
  plVar7 = (longlong *)*param_1;
  plVar4 = plVar7 + (int)param_1[1];
  uVar6 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar4 < plVar7) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      plVar4 = (longlong *)*param_2;
      lVar3 = *plVar7;
      plVar1 = plVar4 + (int)param_2[1];
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
          }
          plVar4 = (longlong *)*param_3;
          plVar4[iVar2] = lVar3;
          break;
        }
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),(int)param_3[1] < 1);
}



// FUNCTION 1408d80e0 FUN_1408d80e0 body=52 status=ok
// SIG undefined FUN_1408d80e0(void)

ulonglong FUN_1408d80e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (param_1 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x88);
    plVar1 = in_RAX + *(int *)(param_1 + 0x90);
    for (; in_RAX != plVar1; in_RAX = in_RAX + 1) {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408d8120 FUN_1408d8120 body=475 status=ok
// SIG undefined FUN_1408d8120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1408d8120(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong *local_70;
  float local_68;
  uint local_64;
  
  plVar6 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_64 = 0;
  plVar8 = plVar6;
  plVar3 = plVar6;
  plVar7 = plVar6;
  plVar9 = plVar6;
  do {
    lVar1 = FUN_1424501c0(param_1,plVar3);
    if (lVar1 != 0) {
      iVar4 = (int)plVar8;
      local_68 = (float)(iVar4 + 1);
      if ((int)plVar7 < (int)local_68) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70,plVar8);
        plVar7 = (longlong *)(ulonglong)local_64;
        plVar9 = local_70;
      }
      plVar8 = (longlong *)(ulonglong)(uint)local_68;
      plVar9[iVar4] = lVar1;
    }
    uVar5 = (int)plVar3 + 1;
    plVar3 = (longlong *)(ulonglong)uVar5;
  } while ((int)uVar5 < 4);
  fVar11 = 3.4028235e+38;
  if (0 < (int)plVar8) {
    plVar3 = plVar9;
    plVar7 = plVar6;
    do {
      lVar1 = ((longlong *)*plVar3)[0x2d];
      if (lVar1 == 0) {
        local_7c = _DAT_1468b5d90;
        puVar2 = &local_7c;
        local_74 = DAT_1468b5d98;
      }
      else {
        puVar2 = (undefined8 *)&local_88;
        local_88 = *(undefined4 *)(lVar1 + 0x220);
        local_80 = *(undefined4 *)(lVar1 + 0x228);
        uStack_84 = *(undefined4 *)(lVar1 + 0x224);
      }
      local_68 = *(float *)(puVar2 + 1);
      fVar12 = (float)*puVar2 - *param_2;
      fVar10 = (float)((ulonglong)*puVar2 >> 0x20) - param_2[1];
      fVar10 = fVar12 * fVar12 + fVar10 * fVar10 + (local_68 - param_2[2]) * (local_68 - param_2[2])
      ;
      plVar6 = (longlong *)*plVar3;
      if (fVar11 <= fVar10) {
        plVar6 = plVar7;
        fVar10 = fVar11;
      }
      fVar11 = fVar10;
      plVar3 = plVar3 + 1;
      plVar8 = (longlong *)((longlong)plVar8 + -1);
      plVar7 = plVar6;
    } while (plVar8 != (longlong *)0x0);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return plVar6;
}



// FUNCTION 1408d8300 FUN_1408d8300 body=297 status=ok
// SIG undefined FUN_1408d8300(void)

float FUN_1408d8300(float param_1,float param_2,float *param_3,float param_4,float param_5,
                   float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1;
  if (param_6 != 0.0) {
    if (param_4 <= 0.001) {
      param_4 = 0.001;
    }
    param_5 = param_4 * param_5;
    fVar3 = 1.0 / param_4 + 1.0 / param_4;
    fVar1 = fVar3 * param_6;
    fVar2 = param_1 - param_2;
    fVar4 = 1.0 / (((fVar1 * 0.235 + 0.48) * fVar1 + 1.0) * fVar1 + 1.0);
    fVar1 = -param_5;
    if ((-param_5 <= fVar2) && (fVar1 = param_5, fVar2 <= param_5)) {
      fVar1 = fVar2;
    }
    param_6 = (fVar1 * fVar3 + *param_3) * param_6;
    fVar1 = (param_6 + fVar1) * fVar4 + (param_1 - fVar1);
    *param_3 = (*param_3 - param_6 * fVar3) * fVar4;
    if (0.0 < param_2 - param_1 == param_2 < fVar1) {
      *param_3 = 0.0;
      fVar1 = param_2;
    }
  }
  return fVar1;
}



// FUNCTION 1408d8430 FUN_1408d8430 body=1232 status=ok
// SIG undefined FUN_1408d8430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d8430(longlong *param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  float local_48;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  plVar12 = (longlong *)0x0;
  local_78 = *(longlong **)(param_2 + 0x70);
  iVar1 = *(int *)((longlong)local_78 + 0x34);
  if (local_78 != (longlong *)0x0) {
    lVar7 = UObjectPropertyBase::GetPrivateStaticClass();
    if ((*(int *)(local_78[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_78[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1408d84be;
  }
  local_78 = (longlong *)0x0;
LAB_1408d84be:
  FUN_1428dfc70();
  iVar2 = (int)param_1[1];
  iVar10 = 0;
  fVar17 = 3.4028235e+38;
  if (3 < iVar2) {
    lVar14 = (longlong)(iVar1 * 2);
    local_70 = iVar1 - lVar14;
    lVar8 = iVar1 * 3 - lVar14;
    local_60 = lVar8;
    uVar6 = (iVar2 - 4U >> 2) + 1;
    uVar13 = (ulonglong)uVar6;
    iVar10 = uVar6 * 4;
    lVar7 = lVar14;
    do {
      if (iVar2 != 0) {
        lVar3 = *param_1;
        plVar11 = (longlong *)((lVar7 - lVar14) + lVar3);
        if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
          lVar4 = *(longlong *)(*plVar11 + 0x168);
          if (lVar4 == 0) {
            local_70 = _DAT_1468b5d90;
            plVar9 = &local_70;
            local_68 = DAT_1468b5d98;
          }
          else {
            plVar9 = &local_60;
            local_58 = *(undefined4 *)(lVar4 + 0x228);
            local_60 = *(longlong *)(lVar4 + 0x220);
          }
          local_48 = *(float *)(plVar9 + 1);
          fVar16 = (float)*plVar9 - *param_3;
          fVar15 = (float)((ulonglong)*plVar9 >> 0x20) - param_3[1];
          fVar15 = fVar16 * fVar16 + fVar15 * fVar15 +
                   (local_48 - param_3[2]) * (local_48 - param_3[2]);
          if (fVar15 < fVar17) {
            plVar12 = plVar11;
            fVar17 = fVar15;
          }
        }
        plVar11 = (longlong *)(lVar7 + (iVar1 - lVar14) + lVar3);
        if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
          lVar4 = *(longlong *)(*plVar11 + 0x168);
          if (lVar4 == 0) {
            local_70 = _DAT_1468b5d90;
            plVar9 = &local_70;
            local_68 = DAT_1468b5d98;
          }
          else {
            plVar9 = &local_60;
            local_58 = *(undefined4 *)(lVar4 + 0x228);
            local_60 = *(longlong *)(lVar4 + 0x220);
          }
          local_48 = *(float *)(plVar9 + 1);
          fVar16 = (float)*plVar9 - *param_3;
          fVar15 = (float)((ulonglong)*plVar9 >> 0x20) - param_3[1];
          fVar15 = fVar16 * fVar16 + fVar15 * fVar15 +
                   (local_48 - param_3[2]) * (local_48 - param_3[2]);
          if (fVar15 < fVar17) {
            plVar12 = plVar11;
            fVar17 = fVar15;
          }
        }
        plVar11 = (longlong *)(lVar7 + lVar3);
        if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
          lVar4 = *(longlong *)(*plVar11 + 0x168);
          if (lVar4 == 0) {
            local_70 = _DAT_1468b5d90;
            plVar9 = &local_70;
            local_68 = DAT_1468b5d98;
          }
          else {
            plVar9 = &local_60;
            local_58 = *(undefined4 *)(lVar4 + 0x228);
            local_60 = *(longlong *)(lVar4 + 0x220);
          }
          local_48 = *(float *)(plVar9 + 1);
          fVar16 = (float)*plVar9 - *param_3;
          fVar15 = (float)((ulonglong)*plVar9 >> 0x20) - param_3[1];
          fVar15 = fVar16 * fVar16 + fVar15 * fVar15 +
                   (local_48 - param_3[2]) * (local_48 - param_3[2]);
          if (fVar15 < fVar17) {
            plVar12 = plVar11;
            fVar17 = fVar15;
          }
        }
        plVar11 = (longlong *)(lVar8 + lVar7 + lVar3);
        if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
          lVar3 = *(longlong *)(*plVar11 + 0x168);
          if (lVar3 == 0) {
            local_70 = _DAT_1468b5d90;
            plVar9 = &local_70;
            local_68 = DAT_1468b5d98;
          }
          else {
            plVar9 = &local_60;
            local_58 = *(undefined4 *)(lVar3 + 0x228);
            local_60 = *(longlong *)(lVar3 + 0x220);
          }
          local_48 = *(float *)(plVar9 + 1);
          fVar16 = (float)*plVar9 - *param_3;
          fVar15 = (float)((ulonglong)*plVar9 >> 0x20) - param_3[1];
          fVar15 = fVar16 * fVar16 + fVar15 * fVar15 +
                   (local_48 - param_3[2]) * (local_48 - param_3[2]);
          if (fVar15 < fVar17) {
            plVar12 = plVar11;
            fVar17 = fVar15;
          }
        }
      }
      lVar7 = lVar7 + iVar1 * 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (iVar10 < iVar2) {
    uVar13 = (ulonglong)(uint)(iVar2 - iVar10);
    lVar7 = (longlong)(iVar1 * iVar10);
    do {
      if (((iVar2 != 0) && (plVar11 = (longlong *)(*param_1 + lVar7), plVar11 != (longlong *)0x0))
         && (*plVar11 != 0)) {
        lVar8 = *(longlong *)(*plVar11 + 0x168);
        if (lVar8 == 0) {
          local_70 = _DAT_1468b5d90;
          plVar9 = &local_70;
          local_68 = DAT_1468b5d98;
        }
        else {
          plVar9 = &local_60;
          local_58 = *(undefined4 *)(lVar8 + 0x228);
          local_60 = *(longlong *)(lVar8 + 0x220);
        }
        local_48 = *(float *)(plVar9 + 1);
        fVar16 = (float)*plVar9 - *param_3;
        fVar15 = (float)((ulonglong)*plVar9 >> 0x20) - param_3[1];
        fVar15 = fVar16 * fVar16 + fVar15 * fVar15 +
                 (local_48 - param_3[2]) * (local_48 - param_3[2]);
        if (fVar15 < fVar17) {
          plVar12 = plVar11;
          fVar17 = fVar15;
        }
      }
      lVar7 = lVar7 + iVar1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x318))(local_78,param_4,plVar12);
  }
  return;
}



// FUNCTION 1408d8900 FBitReaderMark body=14 status=ok
// SIG undefined FBitReaderMark(void)

undefined8 * FBitReaderMark::FBitReaderMark(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 1408d8910 FUN_1408d8910 body=9 status=ok
// SIG undefined FUN_1408d8910(void)

void FUN_1408d8910(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x6c);
  return;
}



// FUNCTION 1408d8920 FUN_1408d8920 body=9 status=ok
// SIG undefined FUN_1408d8920(void)

void FUN_1408d8920(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x74);
  return;
}



// FUNCTION 1408d8930 FUN_1408d8930 body=6 status=ok
// SIG undefined FUN_1408d8930(void)

undefined4 FUN_1408d8930(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 1408d8940 FUN_1408d8940 body=19 status=ok
// SIG undefined FUN_1408d8940(void)

undefined8 * FUN_1408d8940(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1408d8960 FUN_1408d8960 body=19 status=ok
// SIG undefined FUN_1408d8960(void)

undefined8 * FUN_1408d8960(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *param_1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1408d8980 FUN_1408d8980 body=9 status=ok
// SIG undefined FUN_1408d8980(void)

void FUN_1408d8980(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 100);
  return;
}



// FUNCTION 1408d8990 HasStart body=6 status=ok
// SIG undefined HasStart(void)

byte USequencerScriptingRangeExtensions::HasStart(byte *param_1)

{
  return *param_1 & 1;
}



// FUNCTION 1408d89a0 FUN_1408d89a0 body=685 status=ok
// SIG undefined FUN_1408d89a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d89a0(float *param_1,longlong param_2,float param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_d8;
  float fStack_d4;
  float local_d0;
  ulonglong local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [160];
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_c8 = _DAT_1468b5d90;
      pfVar4 = (float *)&local_c8;
      local_c0 = (float)DAT_1468b5d98;
    }
    else {
      pfVar4 = &local_d8;
      local_d8 = *(float *)(lVar1 + 0x220);
      local_d0 = (float)*(undefined4 *)(lVar1 + 0x228);
      fStack_d4 = (float)*(undefined4 *)(lVar1 + 0x224);
    }
    local_c8 = *(ulonglong *)pfVar4;
    local_b8 = param_1[4];
    fStack_b4 = param_1[5];
    fStack_b0 = param_1[6];
    fStack_ac = param_1[7];
    fVar6 = (float)local_c8 - local_b8;
    fVar7 = (float)(local_c8 >> 0x20) - fStack_b4;
    local_c0 = pfVar4[2];
    fVar5 = pfVar4[2] - fStack_b0;
    if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <= param_3) {
      if (lVar1 == 0) {
        local_c8 = _DAT_1468b5d90;
        pfVar4 = (float *)&local_c8;
        local_c0 = (float)DAT_1468b5d98;
      }
      else {
        pfVar4 = &local_d8;
        local_d8 = *(float *)(lVar1 + 0x220);
        local_d0 = (float)*(undefined4 *)(lVar1 + 0x228);
        fStack_d4 = (float)*(undefined4 *)(lVar1 + 0x224);
      }
      local_c8 = *(ulonglong *)pfVar4;
      local_c0 = pfVar4[2];
      local_d8 = (float)local_c8 - local_b8;
      fStack_d4 = (float)(local_c8 >> 0x20) - fStack_b4;
      local_d0 = local_c0 - fStack_b0;
      uVar3 = FRotationMatrix::MakeFromX(local_a8,&local_d8);
      FMatrix::Rotator(uVar3,&local_c8);
      fVar5 = *param_1;
      fVar6 = param_1[1];
      fVar7 = param_1[2];
      fVar2 = param_1[3];
      local_c0 = 0.0;
      local_c8 = local_c8 & 0xffffffff00000000;
      fVar9 = -fVar6;
      fVar9 = fVar9 + fVar9;
      fVar8 = fVar7 + fVar7;
      pfVar4 = (float *)FRotator::Vector(&local_c8,&local_d8);
      fVar6 = (fVar8 * fVar2 - fVar9 * fVar5) * pfVar4[1] +
              ((fVar9 * fVar6 - fVar8 * fVar7) + 1.0) * *pfVar4 +
              (fVar9 * fVar2 + fVar8 * fVar5) * pfVar4[2];
      fVar5 = -1.0;
      if ((-1.0 <= fVar6) && (fVar5 = fVar6, 1.0 <= fVar6)) {
        fVar5 = 1.0;
      }
      fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
      return fVar5 * 57.295776 <= param_4;
    }
  }
  return false;
}



// FUNCTION 1408d8c50 FUN_1408d8c50 body=161 status=ok
// SIG undefined FUN_1408d8c50(void)

float FUN_1408d8c50(float param_1,uint param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  fVar4 = 1.0;
  if ((int)param_2 < 1) {
    fVar3 = 0.0;
  }
  else {
    uVar1 = (ulonglong)param_2;
    do {
      fVar2 = (float)FUN_1415ba3b0(fVar4 * param_1,0);
      fVar4 = fVar4 * (1.0 / param_3);
      fVar3 = fVar3 + fVar2 * param_4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return fVar3;
}



// FUNCTION 1408d8d00 FUN_1408d8d00 body=217 status=ok
// SIG undefined FUN_1408d8d00(void)

float FUN_1408d8d00(undefined8 param_1,uint param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_78;
  float fStack_74;
  
  fVar5 = 1.0;
  fVar6 = 0.0;
  if ((int)param_2 < 1) {
    fVar6 = 0.0;
  }
  else {
    fStack_74 = (float)((ulonglong)param_1 >> 0x20);
    fVar2 = fStack_74;
    local_78 = (float)param_1;
    fVar1 = local_78;
    uVar3 = (ulonglong)param_2;
    do {
      _local_78 = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
      fVar4 = (float)FUN_1415b8570(&local_78,0);
      fVar5 = fVar5 * (1.0 / param_3);
      fVar6 = fVar6 + fVar4 * param_4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return fVar6;
}



// FUNCTION 1408d8de0 FUN_1408d8de0 body=77 status=ok
// SIG undefined FUN_1408d8de0(void)

void FUN_1408d8de0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res10 [3];
  
  if (param_1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x1a0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x1a8);
    if (plVar2 != plVar1) {
      while (*plVar2 != param_2) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          return;
        }
      }
      local_res10[0] = param_2;
      TArray<FName,FDefaultAllocator>::Remove((longlong *)(param_1 + 0x1a0),local_res10);
    }
  }
  return;
}



// FUNCTION 1408d8e30 FUN_1408d8e30 body=77 status=ok
// SIG undefined FUN_1408d8e30(void)

void FUN_1408d8e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res10 [3];
  
  if (param_1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x88);
    plVar1 = plVar2 + *(int *)(param_1 + 0x90);
    if (plVar2 != plVar1) {
      while (*plVar2 != param_2) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          return;
        }
      }
      local_res10[0] = param_2;
      TArray<FName,FDefaultAllocator>::Remove((longlong *)(param_1 + 0x88),local_res10);
    }
  }
  return;
}



// FUNCTION 1408d8e80 FUN_1408d8e80 body=158 status=ok
// SIG undefined FUN_1408d8e80(void)

void FUN_1408d8e80(ulonglong *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = (longlong *)*param_1;
  uVar3 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_1[1] < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4d0))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 1408d8f20 FUN_1408d8f20 body=7 status=ok
// SIG undefined FUN_1408d8f20(void)

void FUN_1408d8f20(undefined8 param_1)

{
  FUN_1415ba3b0(param_1,0);
  return;
}



// FUNCTION 1408d8f30 FUN_1408d8f30 body=7 status=ok
// SIG undefined FUN_1408d8f30(void)

void FUN_1408d8f30(undefined8 param_1)

{
  FUN_1415b8570(param_1,0);
  return;
}



// FUNCTION 1408d8f40 FUN_1408d8f40 body=7 status=ok
// SIG undefined FUN_1408d8f40(void)

void FUN_1408d8f40(undefined8 param_1)

{
  FUN_1415b9a00(param_1,0);
  return;
}



// FUNCTION 1408d8f50 FUN_1408d8f50 body=7 status=ok
// SIG undefined FUN_1408d8f50(void)

void FUN_1408d8f50(undefined8 param_1)

{
  FUN_1415b8a60(param_1,0);
  return;
}



// FUNCTION 1408d8f60 FUN_1408d8f60 body=45 status=ok
// SIG undefined FUN_1408d8f60(void)

void FUN_1408d8f60(ulonglong param_1,undefined8 *param_2)

{
  ulonglong local_res8 [4];
  
  if (param_1 != 0) {
    local_res8[0] = param_1;
    AlgoImpl::
    IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
              (*param_2,(longlong)*(int *)(param_2 + 1),param_1 & 0xff,local_res8);
  }
  return;
}



// FUNCTION 1408d8f90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidgetLayoutLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146861e18 == 0) {
    FUN_14171ccd0(L"/Script/GbxBlueprintFunctionLibraries",L"GbxBlueprintFunctionLibrariesBPLibrary"
                  ,&DAT_146861e18,StaticRegisterNativesUWidgetLayoutLibrary,0x28,0x10000000,0,
                  L"Engine",&LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146861e18;
}



// FUNCTION 1408d9040 FUN_1408d9040 body=47 status=ok
// SIG undefined FUN_1408d9040(void)

longlong FUN_1408d9040(void)

{
  if (DAT_146861e10 == 0) {
    FUN_141786440(&DAT_146861e10,&PTR_GetPrivateStaticClass_1441382e0);
  }
  return DAT_146861e10;
}



// FUNCTION 1408d9070 FUN_1408d9070 body=47 status=ok
// SIG undefined FUN_1408d9070(void)

longlong FUN_1408d9070(void)

{
  if (DAT_146861d90 == 0) {
    FUN_141786a30(&DAT_146861d90,&PTR_FUN_146280f20);
  }
  return DAT_146861d90;
}



// FUNCTION 1408d90a0 FUN_1408d90a0 body=47 status=ok
// SIG undefined FUN_1408d90a0(void)

longlong FUN_1408d90a0(void)

{
  if (DAT_146861d98 == 0) {
    FUN_141786a30(&DAT_146861d98,&PTR_FUN_146280fe0);
  }
  return DAT_146861d98;
}



// FUNCTION 1408d90d0 FUN_1408d90d0 body=47 status=ok
// SIG undefined FUN_1408d90d0(void)

longlong FUN_1408d90d0(void)

{
  if (DAT_146861da0 == 0) {
    FUN_141786a30(&DAT_146861da0,&PTR_FUN_1462810d0);
  }
  return DAT_146861da0;
}



// FUNCTION 1408d9100 FUN_1408d9100 body=47 status=ok
// SIG undefined FUN_1408d9100(void)

longlong FUN_1408d9100(void)

{
  if (DAT_146861da8 == 0) {
    FUN_141786a30(&DAT_146861da8,&PTR_FUN_1462811d0);
  }
  return DAT_146861da8;
}



// FUNCTION 1408d9130 FUN_1408d9130 body=47 status=ok
// SIG undefined FUN_1408d9130(void)

longlong FUN_1408d9130(void)

{
  if (DAT_146861db0 == 0) {
    FUN_141786a30(&DAT_146861db0,&PTR_FUN_1462813d0);
  }
  return DAT_146861db0;
}



// FUNCTION 1408d9160 FUN_1408d9160 body=47 status=ok
// SIG undefined FUN_1408d9160(void)

longlong FUN_1408d9160(void)

{
  if (DAT_146861db8 == 0) {
    FUN_141786a30(&DAT_146861db8,&PTR_FUN_146281480);
  }
  return DAT_146861db8;
}



// FUNCTION 1408d9190 FUN_1408d9190 body=47 status=ok
// SIG undefined FUN_1408d9190(void)

longlong FUN_1408d9190(void)

{
  if (DAT_146861dc0 == 0) {
    FUN_141786a30(&DAT_146861dc0,&PTR_FUN_146281540);
  }
  return DAT_146861dc0;
}



// FUNCTION 1408d91c0 FUN_1408d91c0 body=47 status=ok
// SIG undefined FUN_1408d91c0(void)

longlong FUN_1408d91c0(void)

{
  if (DAT_146861dc8 == 0) {
    FUN_141786a30(&DAT_146861dc8,&PTR_FUN_146281680);
  }
  return DAT_146861dc8;
}



// FUNCTION 1408d91f0 FUN_1408d91f0 body=47 status=ok
// SIG undefined FUN_1408d91f0(void)

longlong FUN_1408d91f0(void)

{
  if (DAT_146861dd0 == 0) {
    FUN_141786a30(&DAT_146861dd0,&PTR_FUN_1462817a0);
  }
  return DAT_146861dd0;
}



// FUNCTION 1408d9220 FUN_1408d9220 body=47 status=ok
// SIG undefined FUN_1408d9220(void)

longlong FUN_1408d9220(void)

{
  if (DAT_146861dd8 == 0) {
    FUN_141786a30(&DAT_146861dd8,&PTR_FUN_146281900);
  }
  return DAT_146861dd8;
}



// FUNCTION 1408d9250 FUN_1408d9250 body=47 status=ok
// SIG undefined FUN_1408d9250(void)

longlong FUN_1408d9250(void)

{
  if (DAT_146861de0 == 0) {
    FUN_141786a30(&DAT_146861de0,&PTR_FUN_146281af0);
  }
  return DAT_146861de0;
}



// FUNCTION 1408d9280 FUN_1408d9280 body=47 status=ok
// SIG undefined FUN_1408d9280(void)

longlong FUN_1408d9280(void)

{
  if (DAT_146861de8 == 0) {
    FUN_141786a30(&DAT_146861de8,&PTR_FUN_146281ba0);
  }
  return DAT_146861de8;
}



// FUNCTION 1408d92b0 FUN_1408d92b0 body=47 status=ok
// SIG undefined FUN_1408d92b0(void)

longlong FUN_1408d92b0(void)

{
  if (DAT_146861df0 == 0) {
    FUN_141786a30(&DAT_146861df0,&PTR_FUN_146281c20);
  }
  return DAT_146861df0;
}



// FUNCTION 1408d92e0 FUN_1408d92e0 body=47 status=ok
// SIG undefined FUN_1408d92e0(void)

longlong FUN_1408d92e0(void)

{
  if (DAT_146861df8 == 0) {
    FUN_141786a30(&DAT_146861df8,&PTR_FUN_146281d10);
  }
  return DAT_146861df8;
}



// FUNCTION 1408d9310 FUN_1408d9310 body=47 status=ok
// SIG undefined FUN_1408d9310(void)

longlong FUN_1408d9310(void)

{
  if (DAT_146861e00 == 0) {
    FUN_141786a30(&DAT_146861e00,&PTR_FUN_146281d90);
  }
  return DAT_146861e00;
}



// FUNCTION 1408d9340 FUN_1408d9340 body=47 status=ok
// SIG undefined FUN_1408d9340(void)

longlong FUN_1408d9340(void)

{
  if (DAT_146861e08 == 0) {
    FUN_141786a30(&DAT_146861e08,&PTR_FUN_146281eb0);
  }
  return DAT_146861e08;
}



// FUNCTION 1408d9370 FUN_1408d9370 body=47 status=ok
// SIG undefined FUN_1408d9370(void)

longlong FUN_1408d9370(void)

{
  if (DAT_146861d88 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146861d88,&PTR_s__Script_GbxBlueprintFunctionLibr_144139260);
  }
  return DAT_146861d88;
}



// FUNCTION 1408d93c0 FUN_1408d93c0 body=162 status=ok
// SIG undefined FUN_1408d93c0(void)

longlong FUN_1408d93c0(void)

{
  if (DAT_146861e68 == 0) {
    FUN_14171ccd0(L"/Script/GbxBlueprintFunctionLibraries",L"HitResultFunctionLibrary",
                  &DAT_146861e68,FUN_1408d9960,0x28,0x10000000,0,L"Engine",&LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146861e68;
}



// FUNCTION 1408d9470 FUN_1408d9470 body=47 status=ok
// SIG undefined FUN_1408d9470(void)

longlong FUN_1408d9470(void)

{
  if (DAT_146861e60 == 0) {
    FUN_141786440(&DAT_146861e60,&PTR_FUN_144138920);
  }
  return DAT_146861e60;
}



// FUNCTION 1408d94a0 FUN_1408d94a0 body=47 status=ok
// SIG undefined FUN_1408d94a0(void)

longlong FUN_1408d94a0(void)

{
  if (DAT_146861e20 == 0) {
    FUN_141786a30(&DAT_146861e20,&PTR_FUN_146281fa0);
  }
  return DAT_146861e20;
}



// FUNCTION 1408d94d0 FUN_1408d94d0 body=47 status=ok
// SIG undefined FUN_1408d94d0(void)

longlong FUN_1408d94d0(void)

{
  if (DAT_146861e28 == 0) {
    FUN_141786a30(&DAT_146861e28,&PTR_FUN_146282060);
  }
  return DAT_146861e28;
}



// FUNCTION 1408d9500 FUN_1408d9500 body=47 status=ok
// SIG undefined FUN_1408d9500(void)

longlong FUN_1408d9500(void)

{
  if (DAT_146861e30 == 0) {
    FUN_141786a30(&DAT_146861e30,&PTR_FUN_146282120);
  }
  return DAT_146861e30;
}



// FUNCTION 1408d9530 FUN_1408d9530 body=47 status=ok
// SIG undefined FUN_1408d9530(void)

longlong FUN_1408d9530(void)

{
  if (DAT_146861e38 == 0) {
    FUN_141786a30(&DAT_146861e38,&PTR_FUN_1462821a0);
  }
  return DAT_146861e38;
}



// FUNCTION 1408d9560 FUN_1408d9560 body=47 status=ok
// SIG undefined FUN_1408d9560(void)

longlong FUN_1408d9560(void)

{
  if (DAT_146861e40 == 0) {
    FUN_141786a30(&DAT_146861e40,&PTR_FUN_146282260);
  }
  return DAT_146861e40;
}



// FUNCTION 1408d9590 FUN_1408d9590 body=47 status=ok
// SIG undefined FUN_1408d9590(void)

longlong FUN_1408d9590(void)

{
  if (DAT_146861e48 == 0) {
    FUN_141786a30(&DAT_146861e48,&PTR_FUN_146282320);
  }
  return DAT_146861e48;
}



// FUNCTION 1408d95c0 FUN_1408d95c0 body=47 status=ok
// SIG undefined FUN_1408d95c0(void)

longlong FUN_1408d95c0(void)

{
  if (DAT_146861e50 == 0) {
    FUN_141786a30(&DAT_146861e50,&PTR_FUN_1462823e0);
  }
  return DAT_146861e50;
}



// FUNCTION 1408d95f0 FUN_1408d95f0 body=47 status=ok
// SIG undefined FUN_1408d95f0(void)

longlong FUN_1408d95f0(void)

{
  if (DAT_146861e58 == 0) {
    FUN_141786a30(&DAT_146861e58,&PTR_FUN_1462824d0);
  }
  return DAT_146861e58;
}



// FUNCTION 1408d9630 FUN_1408d9630 body=162 status=ok
// SIG undefined FUN_1408d9630(void)

longlong FUN_1408d9630(void)

{
  if (DAT_146861ec8 == 0) {
    FUN_14171ccd0(L"/Script/GbxBlueprintFunctionLibraries",L"TagsFunctionLibrary",&DAT_146861ec8,
                  FUN_1408d9990,0x28,0x10000000,0,L"Engine",&LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146861ec8;
}



// FUNCTION 1408d96e0 FUN_1408d96e0 body=47 status=ok
// SIG undefined FUN_1408d96e0(void)

longlong FUN_1408d96e0(void)

{
  if (DAT_146861ec0 == 0) {
    FUN_141786440(&DAT_146861ec0,&PTR_FUN_144139020);
  }
  return DAT_146861ec0;
}



// FUNCTION 1408d9710 FUN_1408d9710 body=47 status=ok
// SIG undefined FUN_1408d9710(void)

longlong FUN_1408d9710(void)

{
  if (DAT_146861e78 == 0) {
    FUN_141786a30(&DAT_146861e78,&PTR_FUN_1462825d0);
  }
  return DAT_146861e78;
}



// FUNCTION 1408d9740 FUN_1408d9740 body=47 status=ok
// SIG undefined FUN_1408d9740(void)

longlong FUN_1408d9740(void)

{
  if (DAT_146861e80 == 0) {
    FUN_141786a30(&DAT_146861e80,&PTR_FUN_1462826c0);
  }
  return DAT_146861e80;
}



// FUNCTION 1408d9770 FUN_1408d9770 body=47 status=ok
// SIG undefined FUN_1408d9770(void)

longlong FUN_1408d9770(void)

{
  if (DAT_146861e88 == 0) {
    FUN_141786a30(&DAT_146861e88,&PTR_FUN_146282740);
  }
  return DAT_146861e88;
}



// FUNCTION 1408d97a0 FUN_1408d97a0 body=47 status=ok
// SIG undefined FUN_1408d97a0(void)

longlong FUN_1408d97a0(void)

{
  if (DAT_146861e90 == 0) {
    FUN_141786a30(&DAT_146861e90,&PTR_FUN_1462828f0);
  }
  return DAT_146861e90;
}



// FUNCTION 1408d97d0 FUN_1408d97d0 body=47 status=ok
// SIG undefined FUN_1408d97d0(void)

longlong FUN_1408d97d0(void)

{
  if (DAT_146861e98 == 0) {
    FUN_141786a30(&DAT_146861e98,&PTR_FUN_146282aa0);
  }
  return DAT_146861e98;
}



// FUNCTION 1408d9800 FUN_1408d9800 body=47 status=ok
// SIG undefined FUN_1408d9800(void)

longlong FUN_1408d9800(void)

{
  if (DAT_146861ea0 == 0) {
    FUN_141786a30(&DAT_146861ea0,&PTR_FUN_146282c50);
  }
  return DAT_146861ea0;
}



// FUNCTION 1408d9830 FUN_1408d9830 body=47 status=ok
// SIG undefined FUN_1408d9830(void)

longlong FUN_1408d9830(void)

{
  if (DAT_146861ea8 == 0) {
    FUN_141786a30(&DAT_146861ea8,&PTR_FUN_146282d50);
  }
  return DAT_146861ea8;
}



// FUNCTION 1408d9860 FUN_1408d9860 body=47 status=ok
// SIG undefined FUN_1408d9860(void)

longlong FUN_1408d9860(void)

{
  if (DAT_146861eb0 == 0) {
    FUN_141786a30(&DAT_146861eb0,&PTR_FUN_146282e40);
  }
  return DAT_146861eb0;
}



// FUNCTION 1408d9890 FUN_1408d9890 body=47 status=ok
// SIG undefined FUN_1408d9890(void)

longlong FUN_1408d9890(void)

{
  if (DAT_146861eb8 == 0) {
    FUN_141786a30(&DAT_146861eb8,&PTR_FUN_146282ec0);
  }
  return DAT_146861eb8;
}



// FUNCTION 1408d98d0 FUN_1408d98d0 body=85 status=ok
// SIG undefined FUN_1408d98d0(void)

void FUN_1408d98d0(void)

{
  if (DAT_146861cc0 == 0) {
    if (DAT_146861d88 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146861d88,&PTR_s__Script_GbxBlueprintFunctionLibr_144139260);
    }
    DAT_146861cc0 = GetStaticEnum(FUN_1408d99c0,DAT_146861d88,L"ECompareTag");
  }
  return;
}



// FUNCTION 1408d9930 StaticRegisterNativesUWidgetLayoutLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUWidgetLayoutLibrary(void)

void UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BroadcastRemoteEvent_1441392e0,0x10);
  return;
}



// FUNCTION 1408d9960 FUN_1408d9960 body=34 status=ok
// SIG undefined FUN_1408d9960(void)

void FUN_1408d9960(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408d93c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetBoneName_1441393e0,8);
  return;
}



// FUNCTION 1408d9990 FUN_1408d9990 body=34 status=ok
// SIG undefined FUN_1408d9990(void)

void FUN_1408d9990(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408d9630();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActorContainsTag_144139480,9);
  return;
}



// FUNCTION 1408d99c0 FUN_1408d99c0 body=47 status=ok
// SIG undefined FUN_1408d99c0(void)

longlong FUN_1408d99c0(void)

{
  if (DAT_146861e70 == 0) {
    FUN_1417866a0(&DAT_146861e70,&PTR_FUN_146282f30);
  }
  return DAT_146861e70;
}



// FUNCTION 1408d99f0 FUN_1408d99f0 body=190 status=ok
// SIG undefined FUN_1408d99f0(void)

void FUN_1408d99f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408d7d10(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408d9ab0 FUN_1408d9ab0 body=175 status=ok
// SIG undefined FUN_1408d9ab0(void)

void FUN_1408d9ab0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408d7d50(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408d9b60 FUN_1408d9b60 body=175 status=ok
// SIG undefined FUN_1408d9b60(void)

void FUN_1408d9b60(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408d7dc0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408d9c10 FUN_1408d9c10 body=175 status=ok
// SIG undefined FUN_1408d9c10(void)

void FUN_1408d9c10(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408d7e30(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408d9cc0 FUN_1408d9cc0 body=319 status=ok
// SIG undefined FUN_1408d9cc0(void)

void FUN_1408d9cc0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_28 [2];
  
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_1408d7f20(local_28,local_res20,local_res18,puVar2);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408d9e00 FUN_1408d9e00 body=319 status=ok
// SIG undefined FUN_1408d9e00(void)

void FUN_1408d9e00(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_28 [2];
  
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_1408d7f70(local_28,local_res20,local_res18,puVar2);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408d9f40 FUN_1408d9f40 body=319 status=ok
// SIG undefined FUN_1408d9f40(void)

void FUN_1408d9f40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_28 [2];
  
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_1408d7fc0(local_28,local_res20,local_res18,puVar2);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408da080 FUN_1408da080 body=190 status=ok
// SIG undefined FUN_1408da080(void)

void FUN_1408da080(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408d80e0(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408da140 execConv_SoftObjectReferenceToObject body=182 status=ok
// SIG undefined execConv_SoftObjectReferenceToObject(void)

void UKismetSystemLibrary::execConv_SoftObjectReferenceToObject
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  long lVar2;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  lVar2 = (long)&local_38;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    lVar2 = (long)*(longlong *)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pwVar1 = AK::MemoryMgr::GetPoolName(lVar2);
  *param_3 = pwVar1;
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408da200 FUN_1408da200 body=622 status=ok
// SIG undefined FUN_1408da200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1408da200(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *_Dst;
  undefined1 *puVar12;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined1 auStack_30 [8];
  ulonglong local_28;
  
  puVar11 = auStack_58;
  local_28 = DAT_1468387a8 ^ (ulonglong)local_38;
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
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
    lVar7 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (plVar3 = *(longlong **)(lVar1 + 0x70), plVar3 != (longlong *)0x0)) {
      lVar7 = UObjectPropertyBase::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar8 = FUN_1428dfc70();
        for (lVar7 = plVar3[0xe]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar8) {
            if (*(longlong *)(param_2 + 0x20) == 0) {
              *(undefined8 *)(param_2 + 0x80) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
              FUN_14179aca0(param_2,local_38);
            }
            else {
              FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
            }
            iVar10 = *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6];
            puVar11 = auStack_58;
            if (iVar10 != 0) {
              uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
              if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
                uVar9 = 0xffffffffffffff0;
              }
              _Dst = auStack_30 + -(uVar9 & 0xfffffffffffffff0);
              puVar11 = auStack_58 + -(uVar9 & 0xfffffffffffffff0);
            }
            if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
              pcVar5 = *(code **)(*plVar3 + 0x330);
              *(undefined8 *)(puVar11 + -8) = 0x1408da3d8;
              (*pcVar5)(plVar3,_Dst);
            }
            else {
              *(undefined8 *)(puVar11 + -8) = 0x1408da3c7;
              _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
            }
            *(undefined8 *)(param_2 + 0x38) = 0;
            if (*(longlong *)(param_2 + 0x20) == 0) {
              *(undefined8 *)(param_2 + 0x80) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
              *(undefined8 *)(puVar11 + -8) = 0x1408da40d;
              FUN_14179aca0(param_2,_Dst);
            }
            else {
              uVar4 = *(undefined8 *)(param_2 + 0x18);
              *(undefined8 *)(puVar11 + -8) = 0x1408da3f1;
              FFrame::Step(param_2,uVar4,_Dst);
            }
            if ((*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) ||
               (puVar12 = *(undefined1 **)(param_2 + 0x38),
               *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10) != plVar3[2])) {
              puVar12 = _Dst;
            }
            *(ulonglong *)(param_2 + 0x20) =
                 (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
            *(undefined8 *)(puVar11 + -8) = 0x1408da448;
            FUN_1408d8430(uVar2,lVar1,local_38,puVar12);
            if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
              pcVar5 = *(code **)(*plVar3 + 0x328);
              *(undefined8 *)(puVar11 + -8) = 0x1408da469;
              (*pcVar5)(plVar3,_Dst);
            }
            goto LAB_1408da315;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_1408da315:
  *(undefined8 *)(puVar11 + -8) = 0x1408da321;
  return;
}



// FUNCTION 1408da470 FUN_1408da470 body=201 status=ok
// SIG undefined FUN_1408da470(void)

void FUN_1408da470(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408d8120(local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408da540 FUN_1408da540 body=458 status=ok
// SIG undefined FUN_1408da540(void)

void FUN_1408da540(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
  local_30[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = 0;
  puVar1 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_1408d8300(local_30[0],local_34,puVar1,local_38,local_res20[0],local_res18[0]);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1408da710 FUN_1408da710 body=124 status=ok
// SIG undefined FUN_1408da710(void)

void FUN_1408da710(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  
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
  uVar1 = FGenericPlatformMisc::GetDeviceTemperatureLevel(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408da790 FUN_1408da790 body=415 status=ok
// SIG undefined FUN_1408da790(void)

void FUN_1408da790(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_8c = local_11c;
  local_84 = local_114;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = local_108;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_6c = local_fc;
  local_94 = local_124;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  puVar1 = (undefined8 *)FBitReaderMark::FBitReaderMark(local_res10,local_98);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1408da930 FUN_1408da930 body=408 status=ok
// SIG undefined FUN_1408da930(void)

void FUN_1408da930(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_8c = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_84 = local_114;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_78 = local_108;
  local_94 = local_124;
  local_6c = local_fc;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  uVar1 = FUN_1408d8910(local_98);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408daad0 FUN_1408daad0 body=408 status=ok
// SIG undefined FUN_1408daad0(void)

void FUN_1408daad0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_8c = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_84 = local_114;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_78 = local_108;
  local_94 = local_124;
  local_6c = local_fc;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  uVar1 = FUN_1408d8920(local_98);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408dac70 FUN_1408dac70 body=409 status=ok
// SIG undefined FUN_1408dac70(void)

void FUN_1408dac70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_8c = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_84 = local_114;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_78 = local_108;
  local_94 = local_124;
  local_6c = local_fc;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  uVar1 = FUN_1408d8930(local_98);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408dae10 FUN_1408dae10 body=423 status=ok
// SIG undefined FUN_1408dae10(void)

void FUN_1408dae10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte local_138 [4];
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
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
  undefined1 local_18 [16];
  
  _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
  local_12c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_138);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  local_9c = local_12c;
  local_94 = local_124;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_118;
  local_a8[0] = local_a8[0] ^ (local_a8[0] ^ local_138[0]) & 3;
  local_7c = local_10c;
  local_a4 = local_134;
  local_70 = local_100;
  local_a0 = local_a0 ^ (local_a0 ^ local_130) & 1;
  local_8c = local_11c;
  local_80 = local_110;
  local_74 = local_104;
  local_68 = local_f8;
  local_5c = local_ec;
  local_50 = local_e0;
  local_48 = local_d8;
  local_44 = local_d4;
  local_40 = local_d0;
  local_3c = local_cc;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_64 = local_f4;
  local_28 = local_b8;
  local_58 = local_e8;
  local_20 = local_b0;
  local_98 = local_128;
  local_4c = local_dc;
  puVar1 = (undefined8 *)FUN_1408d8940(local_18,local_a8);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1408dafc0 FUN_1408dafc0 body=423 status=ok
// SIG undefined FUN_1408dafc0(void)

void FUN_1408dafc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte local_138 [4];
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
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
  undefined1 local_18 [16];
  
  _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
  local_12c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_138);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  local_9c = local_12c;
  local_94 = local_124;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_118;
  local_a8[0] = local_a8[0] ^ (local_a8[0] ^ local_138[0]) & 3;
  local_7c = local_10c;
  local_a4 = local_134;
  local_70 = local_100;
  local_a0 = local_a0 ^ (local_a0 ^ local_130) & 1;
  local_8c = local_11c;
  local_80 = local_110;
  local_74 = local_104;
  local_68 = local_f8;
  local_5c = local_ec;
  local_50 = local_e0;
  local_48 = local_d8;
  local_44 = local_d4;
  local_40 = local_d0;
  local_3c = local_cc;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_64 = local_f4;
  local_28 = local_b8;
  local_58 = local_e8;
  local_20 = local_b0;
  local_98 = local_128;
  local_4c = local_dc;
  puVar1 = (undefined8 *)FUN_1408d8960(local_18,local_a8);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1408db170 FUN_1408db170 body=408 status=ok
// SIG undefined FUN_1408db170(void)

void FUN_1408db170(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_8c = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_84 = local_114;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_78 = local_108;
  local_94 = local_124;
  local_6c = local_fc;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  uVar1 = FUN_1408d8980(local_98);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408db310 FUN_1408db310 body=407 status=ok
// SIG undefined FUN_1408db310(void)

void FUN_1408db310(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_8c = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_84 = local_114;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_78 = local_108;
  local_94 = local_124;
  local_6c = local_fc;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  uVar1 = USequencerScriptingRangeExtensions::HasStart(local_98);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408db4b0 FUN_1408db4b0 body=402 status=ok
// SIG undefined FUN_1408db4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408db4b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = _DAT_146861d10 & _DAT_146861d20;
  uStack_34 = uRam0000000146861d14 & uRam0000000146861d24;
  uStack_30 = uRam0000000146861d18 & uRam0000000146861d28;
  uStack_2c = uRam0000000146861d1c & uRam0000000146861d2c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146861d1c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  puVar2 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408d89a0(puVar2,local_60,local_64,local_68);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408db650 FUN_1408db650 body=306 status=ok
// SIG undefined FUN_1408db650(void)

void FUN_1408db650(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  uVar1 = FUN_1408d8c50(local_28[0],local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408db790 FUN_1408db790 body=297 status=ok
// SIG undefined FUN_1408db790(void)

void FUN_1408db790(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_28 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  uVar1 = FUN_1408d8d00(local_28[0],local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408db8c0 FUN_1408db8c0 body=175 status=ok
// SIG undefined FUN_1408db8c0(void)

void FUN_1408db8c0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408d8de0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408db970 FUN_1408db970 body=175 status=ok
// SIG undefined FUN_1408db970(void)

void FUN_1408db970(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408d8e30(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1408dba20 FUN_1408dba20 body=452 status=ok
// SIG undefined FUN_1408dba20(void)

void FUN_1408dba20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30 [3];
  
  local_30[0] = 0;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res10[0] = 0;
  plVar1 = local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
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
  FUN_1408d8e80(plVar1,bVar2,bVar3,local_34,local_38);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408dbbf0 FUN_1408dbbf0 body=124 status=ok
// SIG undefined FUN_1408dbbf0(void)

void FUN_1408dbbf0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  
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
  uVar1 = FUN_1408d8f20(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408dbc70 FUN_1408dbc70 body=139 status=ok
// SIG undefined FUN_1408dbc70(void)

void FUN_1408dbc70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_res10 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_1408d8f30(puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1408dbd00 FUN_1408dbd00 body=139 status=ok
// SIG undefined FUN_1408dbd00(void)

void FUN_1408dbd00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_1408d8f40(puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1408dbd90 FUN_1408dbd90 body=151 status=ok
// SIG undefined FUN_1408dbd90(void)

void FUN_1408dbd90(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_1408d8f50(puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1408dbe30 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408d8f60(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408dbf10 FUN_1408dbf10 body=104 status=ok
// SIG undefined FUN_1408dbf10(void)

undefined8 * FUN_1408dbf10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144139570;
  param_1[5] = &PTR_LAB_144139ab8;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 4;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  return param_1;
}



// FUNCTION 1408dbf80 FUN_1408dbf80 body=48 status=ok
// SIG undefined FUN_1408dbf80(void)

undefined8 * FUN_1408dbf80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UDeveloperSettings::UDeveloperSettings(param_1,uVar1);
  *(undefined1 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_144139ae8;
  return param_1;
}



// FUNCTION 1408dbfc0 FUN_1408dbfc0 body=134 status=ok
// SIG undefined FUN_1408dbfc0(void)

undefined8 * FUN_1408dbfc0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1408dc050 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ABrush::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 1408dc0a0 FUN_1408dc0a0 body=79 status=ok
// SIG undefined FUN_1408dc0a0(void)

void FUN_1408dc0a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    FMemory::operator_delete(lVar3,0x10);
    return;
  }
  return;
}



// FUNCTION 1408dc0f0 FUN_1408dc0f0 body=301 status=ok
// SIG undefined FUN_1408dc0f0(void)

undefined8 FUN_1408dc0f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong local_res8;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  cVar5 = FText::IsEmpty(param_1 + 0x28);
  bVar7 = cVar5 != '\0';
  if (bVar7) {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FName::ToString(&local_res8,local_48);
    uVar6 = FText::FromString(local_38,local_48);
  }
  else {
    uVar6 = FText::FText(local_20,param_1 + 0x28);
  }
  FText::FText(param_2,uVar6);
  if (bVar7) {
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
  }
  if (bVar7) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar7) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1408dc220 FUN_1408dc220 body=341 status=ok
// SIG undefined FUN_1408dc220(void)

undefined8 * FUN_1408dc220(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar4 = &PTR_FUN_144139d80;
  plVar5 = (longlong *)operator_new(0x10);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144139dc0;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
  }
  puVar4[1] = plVar7;
  puVar4[2] = plVar6;
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return puVar4;
        }
      }
      plVar6 = (longlong *)puVar4[2];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar5 = (longlong *)plVar7[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar7[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return puVar4;
}



// FUNCTION 1408dc380 FUN_1408dc380 body=155 status=ok
// SIG undefined FUN_1408dc380(void)

void FUN_1408dc380(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x48))) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    iVar4 = *(int *)(param_1 + 0x48) + -1;
    iVar3 = 0;
    iVar5 = iVar3;
    if ((-1 < iVar1) && (iVar5 = iVar4, iVar1 < iVar4)) {
      iVar5 = iVar1;
    }
    plVar2 = (longlong *)FUN_142a07000();
    if (plVar2[0x1f] == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
    }
    if (((*(int *)(param_1 + 0x48) != 0) && (iVar1 = *(int *)(param_1 + 0x48) + -1, -1 < iVar5)) &&
       (iVar3 = iVar1, iVar5 < iVar1)) {
      iVar3 = iVar5;
    }
    FUN_14175d020(param_2,1);
    *(int *)(param_2 + 0x2d8) = iVar3;
    *(undefined1 *)(param_2 + 0x2dc) = 0;
  }
  return;
}



// FUNCTION 1408dc440 FUN_1408dc440 body=47 status=ok
// SIG undefined FUN_1408dc440(void)

longlong FUN_1408dc440(void)

{
  if (DAT_146862088 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146862088,&PTR_s__Script_GbxLevelEditorPreview_14413a780);
  }
  return DAT_146862088;
}



// FUNCTION 1408dc470 FUN_1408dc470 body=151 status=ok
// SIG undefined FUN_1408dc470(void)

longlong FUN_1408dc470(void)

{
  if (DAT_1468620b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelEditorPreview",L"GbxLevelEditorPreviewDefinition",&DAT_1468620b8
                  ,FUN_140447710,0x40,0x10000001,0,L"Engine",FUN_1408dc880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468620b8;
}



// FUNCTION 1408dc510 FUN_1408dc510 body=162 status=ok
// SIG undefined FUN_1408dc510(void)

longlong FUN_1408dc510(void)

{
  if (DAT_1468620a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelEditorPreview",L"GbxLevelEditorPreviewComponent",&DAT_1468620a8,
                  FUN_140447710,0x2f0,0x10000000,0,L"Engine",&LAB_1408dc870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_1468620a8;
}



// FUNCTION 1408dc5c0 FUN_1408dc5c0 body=53 status=ok
// SIG undefined FUN_1408dc5c0(void)

void FUN_1408dc5c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14413aa88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408dc620 FUN_1408dc620 body=47 status=ok
// SIG undefined FUN_1408dc620(void)

longlong FUN_1408dc620(void)

{
  if (DAT_1468620b0 == 0) {
    FUN_141786440(&DAT_1468620b0,&PTR_FUN_14413a130);
  }
  return DAT_1468620b0;
}



// FUNCTION 1408dc660 FUN_1408dc660 body=162 status=ok
// SIG undefined FUN_1408dc660(void)

longlong FUN_1408dc660(void)

{
  if (DAT_1468620d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelEditorPreview",L"GbxLevelEditorPreviewAnimation",&DAT_1468620d8,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",FUN_1408dc820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1408dc470,&LAB_140447700,0);
  }
  return DAT_1468620d8;
}



// FUNCTION 1408dc710 FUN_1408dc710 body=53 status=ok
// SIG undefined FUN_1408dc710(void)

void FUN_1408dc710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14413ae40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408dc760 FUN_1408dc760 body=162 status=ok
// SIG undefined FUN_1408dc760(void)

longlong FUN_1408dc760(void)

{
  if (DAT_1468620e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelEditorPreview",L"GbxLevelEditorPreviewSettings",&DAT_1468620e8,
                  FUN_140447710,0x40,0x10000000,0,L"Editor",&LAB_1408dc8c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468620e8;
}



// FUNCTION 1408dc820 FUN_1408dc820 body=70 status=ok
// SIG undefined FUN_1408dc820(void)

void FUN_1408dc820(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14413a7a8;
    FText::FText(puVar1 + 5);
    *puVar1 = &PTR__scalar_deleting_destructor__14413aba0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1408dc880 FUN_1408dc880 body=55 status=ok
// SIG undefined FUN_1408dc880(void)

void FUN_1408dc880(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14413a7a8;
    FText::FText(puVar1 + 5);
    return;
  }
  return;
}



// FUNCTION 1408dc8d0 ~UGameplayEffectUIData_TextOnly body=96 status=ok
// SIG undefined ~UGameplayEffectUIData_TextOnly(void)

void UGameplayEffectUIData_TextOnly::~UGameplayEffectUIData_TextOnly(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  return;
}



// FUNCTION 1408dc930 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameplayEffectUIData_TextOnlyWithSetByCaller::_scalar_deleting_destructor_
                   (longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  UGameplayEffectUIData_TextOnly::~UGameplayEffectUIData_TextOnly(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1408dc9b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UFGCDBeltMustSnap::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  UGameplayEffectUIData_TextOnly::~UGameplayEffectUIData_TextOnly();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408dc9f0 FUN_1408dc9f0 body=196 status=ok
// SIG undefined FUN_1408dc9f0(void)

undefined8 FUN_1408dc9f0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar3 + -2) {
        iVar2 = *(int *)(puVar3 + -1);
        _Src = (void *)puVar3[-2];
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 2);
        }
      }
      param_2[2] = *puVar3;
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 4;
      param_2[3] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408dcac0 FUN_1408dcac0 body=6 status=ok
// SIG undefined FUN_1408dcac0(void)

undefined8 FUN_1408dcac0(void)

{
  return 0x6ef24e6d;
}



// FUNCTION 1408dcad0 FUN_1408dcad0 body=6 status=ok
// SIG undefined FUN_1408dcad0(void)

undefined8 FUN_1408dcad0(void)

{
  return 0xa6ea8bf1;
}



// FUNCTION 1408dcae0 FUN_1408dcae0 body=113 status=ok
// SIG undefined FUN_1408dcae0(void)

void FUN_1408dcae0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862090 == 0) {
    if (DAT_146862088 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146862088,&PTR_s__Script_GbxLevelEditorPreview_14413a780);
    }
    lVar1 = DAT_146862088;
    uVar2 = FUN_1408dcac0();
    DAT_146862090 =
         GetStaticStruct(FUN_1408dcc70,lVar1,L"GbxLevelEditorPreviewInstanceData",8,uVar2);
  }
  return;
}



// FUNCTION 1408dcb60 FUN_1408dcb60 body=113 status=ok
// SIG undefined FUN_1408dcb60(void)

void FUN_1408dcb60(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468620c0 == 0) {
    if (DAT_146862088 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146862088,&PTR_s__Script_GbxLevelEditorPreview_14413a780);
    }
    lVar1 = DAT_146862088;
    uVar2 = FUN_1408dcad0();
    DAT_1468620c0 = GetStaticStruct(FUN_1408dcca0,lVar1,L"PreviewAnimationDescriptor",0x20,uVar2);
  }
  return;
}



// FUNCTION 1408dcbe0 Z_Construct_UClass_ULevelStreamingNotifier body=47 status=ok
// SIG undefined Z_Construct_UClass_ULevelStreamingNotifier(void)

longlong Z_Construct_UClass_ULevelStreamingNotifier(void)

{
  if (DAT_1468620d0 == 0) {
    FUN_141786440(&DAT_1468620d0,&PTR_FUN_14413a3b0);
  }
  return DAT_1468620d0;
}



// FUNCTION 1408dcc10 FUN_1408dcc10 body=47 status=ok
// SIG undefined FUN_1408dcc10(void)

longlong FUN_1408dcc10(void)

{
  if (DAT_1468620a0 == 0) {
    FUN_141786440(&DAT_1468620a0,&PTR_FUN_144139f40);
  }
  return DAT_1468620a0;
}



// FUNCTION 1408dcc40 FUN_1408dcc40 body=47 status=ok
// SIG undefined FUN_1408dcc40(void)

longlong FUN_1408dcc40(void)

{
  if (DAT_1468620e0 == 0) {
    FUN_141786440(&DAT_1468620e0,&PTR_FUN_14413a560);
  }
  return DAT_1468620e0;
}



// FUNCTION 1408dcc70 FUN_1408dcc70 body=47 status=ok
// SIG undefined FUN_1408dcc70(void)

longlong FUN_1408dcc70(void)

{
  if (DAT_146862098 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862098,&PTR_FUN_1462830b0);
  }
  return DAT_146862098;
}



// FUNCTION 1408dcca0 FUN_1408dcca0 body=47 status=ok
// SIG undefined FUN_1408dcca0(void)

longlong FUN_1408dcca0(void)

{
  if (DAT_1468620c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468620c8,&PTR_FUN_1462832f0);
  }
  return DAT_1468620c8;
}



// FUNCTION 1408dccd0 FindExistingActionWithPredicate<FStreamLevelAction,`FLatentActionManager::FindExistingAction<FStreamLevelAction>'::`2'::FFirstItemPredicate> body=474 status=ok
// SIG undefined FindExistingActionWithPredicate<FStreamLevelAction,`FLatentActionManager::FindExistingAction<FStreamLevelAction>'::`2'::FFirstItemPredicate>(void)

undefined8
FLatentActionManager::
FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
          (longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int local_res8 [2];
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_30;
  int iStack_2c;
  longlong *plVar6;
  
  FWeakObjectPtr::operator=(&local_48);
  local_40[0] = local_48;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,local_40);
  plVar6 = (longlong *)0x0;
  plVar2 = plVar6;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = plVar6;
  }
  plVar2 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = (longlong *)*plVar3;
  }
  if (plVar2 != (longlong *)0x0) {
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar2,(int)plVar2[1] - *(int *)((longlong)plVar2 + 0x34),0);
    if ((int)plVar2[9] != 0) {
      plVar3 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar3 = plVar2 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 + ((longlong)(int)plVar2[9] - 1U & (longlong)param_3) * 4);
      iVar1 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*plVar2 + 0x10 + (longlong)iVar1 * 0x18);
          if (*(int *)(*plVar2 + (longlong)iVar1 * 0x18) == param_3) break;
          iVar1 = iVar5;
        } while (iVar5 != -1);
      }
      if (iVar1 != -1) {
        do {
          uVar4 = (int)plVar6 + 1;
          plVar6 = (longlong *)(ulonglong)uVar4;
          if (iVar5 == -1) break;
          iVar1 = iVar5;
          do {
            iVar5 = *(int *)(*plVar2 + 0x10 + (longlong)iVar1 * 0x18);
            if (*(int *)(*plVar2 + (longlong)iVar1 * 0x18) == param_3) break;
            iVar1 = iVar5;
          } while (iVar5 != -1);
        } while (iVar1 != -1);
        if (0 < (int)uVar4) {
          iStack_2c = -1;
          local_30 = param_3;
          TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(plVar2,(int)plVar2[1] - *(int *)((longlong)plVar2 + 0x34),0);
          iVar5 = -1;
          if ((int)plVar2[9] != 0) {
            plVar6 = (longlong *)plVar2[8];
            if ((longlong *)plVar2[8] == (longlong *)0x0) {
              plVar6 = plVar2 + 7;
            }
            iVar5 = *(int *)((longlong)plVar6 +
                            ((longlong)(int)plVar2[9] - 1U & (longlong)param_3) * 4);
            iStack_2c = iVar5;
            if (iVar5 != -1) {
              do {
                iVar1 = *(int *)(*plVar2 + 0x10 + (longlong)iVar5 * 0x18);
                iStack_2c = iVar5;
                if (*(int *)(*plVar2 + (longlong)iVar5 * 0x18) == param_3) break;
                iVar5 = iVar1;
                iStack_2c = iVar1;
              } while (iVar1 != -1);
            }
          }
          if (iStack_2c != -1) {
            return *(undefined8 *)(*plVar2 + 8 + (longlong)iVar5 * 0x18);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1408dceb0 FUN_1408dceb0 body=3310 status=ok
// SIG undefined FUN_1408dceb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1408dceb0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,char param_4,
             longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  wint_t wVar10;
  wint_t wVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  wint_t *pwVar18;
  int iVar19;
  undefined2 *puVar20;
  char *pcVar21;
  undefined1 auStack_3f8 [32];
  undefined2 local_3d8;
  undefined4 local_3c8;
  ulonglong local_3c0;
  longlong *local_3b8;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined1 local_388 [8];
  longlong *local_380;
  int local_378 [2];
  longlong local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  longlong *plStack_348;
  longlong local_340 [2];
  undefined2 *local_330;
  int local_328;
  longlong local_320 [3];
  undefined4 *local_308;
  ulonglong *puStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 *local_2e8;
  undefined4 *puStack_2e0;
  undefined8 *local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  undefined8 *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined1 local_298 [16];
  longlong local_288 [2];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  longlong local_258 [2];
  undefined1 local_248 [8];
  longlong *local_240;
  undefined8 local_230;
  longlong *local_228;
  longlong local_218 [2];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  char local_80 [8];
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  puVar16 = (undefined8 *)*param_2;
  bVar7 = false;
  bVar6 = false;
  local_3c0 = local_3c0 & 0xffffffff00000000;
  local_3b0 = (undefined8 *)0x0;
  local_3c8 = 0;
  local_3b8 = param_2;
  local_3a8 = param_3;
  if (puVar16 == (undefined8 *)0x0) {
LAB_1408dcf7d:
    bVar8 = false;
  }
  else {
    local_340[0] = 0;
    local_340[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_340,0);
    local_3d8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_340[0],5,&DAT_14413af84);
    bVar7 = true;
    bVar6 = true;
    uVar13 = (**(code **)*puVar16)(puVar16,local_218);
    cVar9 = FString::StartsWith(uVar13,local_340,1);
    if (cVar9 == '\0') goto LAB_1408dcf7d;
    bVar8 = true;
  }
  if ((bVar6) && (local_218[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_340[0] != 0)) {
    FMemory::Free();
  }
  if (bVar8) {
    plVar5 = (longlong *)param_5[7];
    if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_2d8);
    puVar16 = local_2d8;
    iVar19 = local_2d0;
  }
  else {
    plVar5 = (longlong *)*local_3a8;
    if (param_4 == '\0') {
      local_2a8 = 0;
      plStack_2a0 = (longlong *)0x0;
      puVar16 = (undefined8 *)*local_3b8;
      uVar12 = (**(code **)(*plVar5 + 0x40))();
      uVar17 = FText::AsNumber(local_140,uVar12,0,&local_2a8);
      local_3c0 = uVar17;
      uVar13 = (**(code **)*puVar16)(puVar16,local_258);
      lVar14 = FText::FromString(local_128,uVar13);
      local_390 = lVar14;
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_1a8,
                          L"Please contact the automation team. {0} failed with HTTP code {1}.",
                          L"Editor",L"QatalystHttpFailed");
      puVar16 = (undefined8 *)FTextFormat::FTextFormat(local_190,uVar13);
      local_a8[0] = 4;
      local_3b0 = puVar16;
      FText::FText(local_98,lVar14);
      local_80[0] = '\x01';
      local_78 = 4;
      FText::FText(local_68,uVar17);
      local_308 = local_a8;
      local_50 = 1;
      puStack_300 = local_48;
      local_2b8 = *puVar16;
      local_2b0 = puVar16[1];
      if (local_2b0 != 0) {
        LOCK();
        *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
        UNLOCK();
      }
      local_278 = local_308;
      uStack_270 = puStack_300;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_268,&local_278);
      uVar13 = FText::Format(local_1c0,&local_2b8,uVar13);
      FText::FText(&local_230,uVar13);
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1b8 + 1;
        lVar14 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar3 = (int *)((longlong)local_1b8 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_268);
      lVar14 = 2;
      pcVar21 = &stack0xffffffffffffffe0;
      do {
        lVar14 = lVar14 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar21 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              iVar19 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar14 != 0);
      plVar5 = (longlong *)local_3b0[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(local_390 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(local_3c0 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FText::FText(param_1,&local_230);
      *(undefined1 *)(param_1 + 3) = 0;
      if (local_228 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_228 + 1;
        lVar14 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_228)(local_228);
          LOCK();
          piVar3 = (int *)((longlong)local_228 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_228 + 8))(local_228,1);
          }
        }
      }
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1a0 + 1;
        lVar14 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar3 = (int *)((longlong)local_1a0 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if (local_258[0] != 0) {
        FMemory::Free();
      }
      plVar5 = plStack_2a0;
      if (plStack_2a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_2a0 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_2a0)(plStack_2a0);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3b8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3a8);
      goto LAB_1408ddb2b;
    }
    (**(code **)(*plVar5 + 0x48))(plVar5,local_340 + 2);
    TJsonReaderFactory<wchar_t>::Create(local_388,local_340 + 2);
    local_3a0 = 0;
    local_398 = 0;
    local_370 = 0;
    local_350 = 0;
    plStack_348 = (longlong *)0x0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    cVar9 = FUN_1404a6f40(local_388,local_378);
    plVar5 = plStack_348;
    if ((cVar9 == '\0') || (local_378[0] != 5)) {
      if (plStack_348 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_348 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_348)(plStack_348);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plStack_348 + 8))(plStack_348,1);
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_360);
      if (local_370 != 0) {
        FMemory::Free();
      }
      pwVar18 = &DAT_14413b31c;
      puVar20 = &DAT_143f3eda8;
      if (local_328 != 0) {
        puVar20 = local_330;
      }
      for (; (wVar10 = *(wint_t *)((longlong)(puVar20 + -0xa209d98e) + (longlong)pwVar18),
             wVar10 != 0 || (*pwVar18 != 0)); pwVar18 = pwVar18 + 1) {
        if (wVar10 != *pwVar18) {
          wVar10 = towlower(wVar10);
          wVar11 = towlower(*pwVar18);
          if (wVar10 != wVar11) {
            puVar16 = (undefined8 *)*local_3b8;
            lVar14 = FText::FromString(local_170,local_340 + 2);
            local_3c0 = lVar14;
            uVar13 = (**(code **)*puVar16)(puVar16,local_288);
            lVar15 = FText::FromString(local_158,uVar13);
            local_390 = lVar15;
            uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_1f0,
                                L"Please contact the automation team. {0} returned an unparseable result:\n\n\n{1}"
                                ,L"Editor",L"QatalystInvalid");
            puVar16 = (undefined8 *)FTextFormat::FTextFormat(local_180,uVar13);
            local_108[0] = 4;
            local_3b0 = puVar16;
            FText::FText(local_f8,lVar15);
            local_e0 = 1;
            local_d8 = 4;
            FText::FText(local_c8,lVar14);
            local_2e8 = local_108;
            local_b0 = 1;
            puStack_2e0 = local_a8;
            local_308 = (undefined4 *)*puVar16;
            puStack_300 = (ulonglong *)puVar16[1];
            if (puStack_300 != (ulonglong *)0x0) {
              LOCK();
              *(int *)((longlong)puStack_300 + 8) = *(int *)((longlong)puStack_300 + 8) + 1;
              UNLOCK();
            }
            uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                     TArray<FFormatArgumentValue,FDefaultAllocator>(local_298,&local_2e8);
            uVar13 = FText::Format(local_208,&local_308,uVar13);
            FText::FText(local_248,uVar13);
            if (local_200 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_200 + 1;
              lVar14 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_200)(local_200);
                LOCK();
                piVar3 = (int *)((longlong)local_200 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*local_200 + 8))(local_200,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_298);
            lVar14 = 2;
            pcVar21 = local_80;
            do {
              lVar14 = lVar14 + -1;
              pcVar2 = pcVar21 + -0x30;
              if (*pcVar2 != '\0') {
                *pcVar2 = '\0';
                plVar5 = *(longlong **)(pcVar21 + -0x40);
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar5 + 1;
                  lVar15 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*plVar5)(plVar5);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar5 + 0xc);
                    iVar19 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar19 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
              }
              pcVar21 = pcVar2;
            } while (lVar14 != 0);
            plVar5 = (longlong *)local_3b0[1];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar5 = *(longlong **)(local_390 + 8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar5 = *(longlong **)(local_3c0 + 8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            FText::FText(param_1,local_248);
            *(undefined1 *)(param_1 + 3) = 0;
            if (local_240 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_240 + 1;
              lVar14 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_240)(local_240);
                LOCK();
                piVar3 = (int *)((longlong)local_240 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*local_240 + 8))(local_240,1);
                }
              }
            }
            if (local_1e8 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_1e8 + 1;
              lVar14 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_1e8)(local_1e8);
                LOCK();
                piVar3 = (int *)((longlong)local_1e8 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*local_1e8 + 8))(local_1e8,1);
                }
              }
            }
            if (local_288[0] != 0) {
              FMemory::Free();
            }
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_3a0);
            plVar5 = local_380;
            if (local_380 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_380 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_380)(local_380);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar19 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*local_380 + 8))(local_380,1);
                }
              }
            }
            if (local_330 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3b8);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3a8);
            FUN_14074ea20(param_5);
            FUN_14074ea20(param_6);
            return param_1;
          }
        }
      }
      puVar16 = local_3b0;
      iVar19 = (int)local_3b0;
    }
    else {
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_3a0,&local_360);
      plVar5 = plStack_348;
      if (plStack_348 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_348 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_348)(plStack_348);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plStack_348 + 8))(plStack_348,1);
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_360);
      if (local_370 != 0) {
        FMemory::Free();
      }
      plVar5 = (longlong *)param_6[7];
      local_2f8 = local_3a0;
      local_2f0 = (undefined4)local_398;
      local_2ec = local_398._4_4_;
      local_398 = 0;
      local_3a0 = 0;
      if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_2c8,&local_2f8);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_2f8);
      local_3c8 = local_2bc;
      puVar16 = local_2c8;
      iVar19 = local_2c0;
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_3a0);
    plVar5 = local_380;
    if (local_380 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_380 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_380)(local_380);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_380 + 8))(local_380,1);
        }
      }
    }
    local_2cc = local_3c8;
    if (local_330 != (undefined2 *)0x0) {
      FMemory::Free();
      local_2cc = local_3c8;
    }
  }
  if (iVar19 == 0) {
    local_320[1] = 0x2e;
    local_320[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_320,0);
    local_3d8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_320[0],0x2e,"There is no such data available for this map.");
    uVar13 = FText::FromString(local_1d8,local_320);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FText::FText(param_1,uVar13);
    *(undefined1 *)(param_1 + 3) = 0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1d0 + 1;
      lVar14 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar3 = (int *)((longlong)local_1d0 + 0xc);
        iVar19 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_320[0] != 0) {
      FMemory::Free();
    }
    if (puVar16 != (undefined8 *)0x0) {
      FMemory::Free(puVar16);
    }
    plVar5 = (longlong *)local_3b8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar19 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = (longlong *)local_3a8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar19 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = (longlong *)param_5[7];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != param_5);
      param_5[7] = 0;
    }
    plVar5 = (longlong *)param_6[7];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != param_6);
    param_6[7] = 0;
    return param_1;
  }
  param_1[2] = 0;
  *param_1 = puVar16;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2cc;
  *(int *)(param_1 + 1) = iVar19;
  *(undefined1 *)(param_1 + 3) = 1;
  plVar5 = (longlong *)local_3b8[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar19 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)local_3a8[1];
  local_278 = (undefined4 *)CONCAT44(local_278._4_4_,(undefined4)local_278);
  uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,(undefined4)uStack_270);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_278 = (undefined4 *)CONCAT44(local_278._4_4_,(undefined4)local_278);
    uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,(undefined4)uStack_270);
    if ((int)lVar14 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar19 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
LAB_1408ddb2b:
  plVar5 = (longlong *)param_5[7];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != param_5);
    param_5[7] = 0;
  }
  plVar5 = (longlong *)param_6[7];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != param_6);
    param_6[7] = 0;
  }
  return param_1;
}



// FUNCTION 1408ddba0 FUN_1408ddba0 body=179 status=ok
// SIG undefined FUN_1408ddba0(void)

void FUN_1408ddba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_2 + 3);
  if (*(float *)(param_1 + 3) <= fVar6 && fVar6 != *(float *)(param_1 + 3)) {
    uVar3 = param_1[1];
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = *(undefined4 *)(param_2 + 3);
    *param_2 = *param_1;
    param_2[1] = uVar3;
    param_2[2] = param_1[2];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    fVar6 = *(float *)(param_2 + 3);
  }
  if (fVar6 < *(float *)(param_3 + 3)) {
    uVar3 = param_2[1];
    uVar2 = *(undefined4 *)(param_3 + 3);
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar1 = param_3[2];
    *param_3 = *param_2;
    param_3[1] = uVar3;
    param_3[2] = param_2[2];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_2 + 3);
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar1;
    *(undefined4 *)(param_2 + 3) = uVar2;
    if (*(float *)(param_1 + 3) < *(float *)(param_2 + 3)) {
      uVar3 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar3;
      param_2[2] = param_1[2];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
    }
  }
  return;
}



// FUNCTION 1408ddc60 FUN_1408ddc60 body=1363 status=ok
// SIG undefined FUN_1408ddc60(void)

undefined8 *
FUN_1408ddc60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  
  puVar14 = (undefined8 *)
            ((((longlong)param_3 - (longlong)param_2) / 0x1c >> 1) * 0x1c + (longlong)param_2);
  lVar1 = ((longlong)param_3 + (-0x1c - (longlong)param_2)) / 0x1c;
  if (lVar1 < 0x29) {
    FUN_1408ddba0(param_2,puVar14,(longlong)param_3 + -0x1c,param_4);
  }
  else {
    lVar8 = lVar1 + 1 >> 3;
    lVar1 = lVar8 * 0x1c + (longlong)param_2;
    FUN_1408ddba0(param_2,lVar1,param_2 + lVar8 * 7,param_4);
    FUN_1408ddba0((longlong)puVar14 + lVar8 * -0x1c,puVar14,lVar8 * 0x1c + (longlong)puVar14,param_4
                 );
    lVar10 = (longlong)param_3 + lVar8 * -0x1c + -0x1c;
    FUN_1408ddba0((longlong)param_3 + lVar8 * -0x38 + -0x1c,lVar10,(longlong)param_3 + -0x1c,param_4
                 );
    FUN_1408ddba0(lVar1,puVar14,lVar10,param_4);
  }
  puVar9 = (undefined8 *)((longlong)puVar14 + 0x1c);
  for (; param_2 < puVar14; puVar14 = (undefined8 *)((longlong)puVar14 + -0x1c)) {
    if ((*(float *)(puVar14 + 3) < *(float *)((longlong)puVar14 + -4)) ||
       (*(float *)((longlong)puVar14 + -4) < *(float *)(puVar14 + 3))) break;
  }
  puVar11 = puVar9;
  puVar15 = puVar14;
  if (puVar9 < param_3) {
    do {
      puVar11 = puVar9;
      if ((*(float *)(puVar14 + 3) < *(float *)(puVar9 + 3)) ||
         (*(float *)(puVar9 + 3) < *(float *)(puVar14 + 3))) break;
      puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
      puVar11 = puVar9;
    } while (puVar9 < param_3);
  }
LAB_1408dddd0:
  puVar7 = puVar14;
  puVar12 = puVar11;
  if (puVar11 < param_3) {
    if (0x6f < (ulonglong)((longlong)param_3 + (0x1b - (longlong)puVar11))) {
      puVar13 = (undefined8 *)((longlong)puVar11 + 0x1c);
      do {
        fVar16 = *(float *)(puVar15 + 3);
        if (fVar16 <= *(float *)((longlong)puVar13 - 4)) {
          puVar12 = puVar11;
          if (fVar16 < *(float *)((longlong)puVar13 - 4)) goto joined_r0x0001408ddfc4;
          if (puVar9 != puVar11) {
            uVar4 = puVar11[1];
            uVar3 = *(undefined4 *)(puVar9 + 3);
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            uVar2 = puVar9[2];
            *puVar9 = *puVar11;
            puVar9[1] = uVar4;
            puVar9[2] = puVar11[2];
            *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar11 + 3);
            *puVar11 = uVar5;
            puVar11[1] = uVar6;
            puVar11[2] = uVar2;
            *(undefined4 *)(puVar11 + 3) = uVar3;
            fVar16 = *(float *)(puVar15 + 3);
          }
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
        }
        if (fVar16 <= *(float *)(puVar13 + 3)) {
          puVar12 = puVar13;
          if (fVar16 < *(float *)(puVar13 + 3)) goto joined_r0x0001408ddfc4;
          if (puVar9 != puVar13) {
            uVar4 = puVar13[1];
            uVar3 = *(undefined4 *)(puVar9 + 3);
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            uVar2 = puVar9[2];
            *puVar9 = *puVar13;
            puVar9[1] = uVar4;
            puVar9[2] = puVar13[2];
            *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar13 + 3);
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
            puVar13[2] = uVar2;
            *(undefined4 *)(puVar13 + 3) = uVar3;
            fVar16 = *(float *)(puVar15 + 3);
          }
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
        }
        if (fVar16 <= *(float *)((longlong)puVar13 + 0x34)) {
          puVar12 = (undefined8 *)((longlong)puVar13 + 0x1c);
          if (fVar16 < *(float *)((longlong)puVar13 + 0x34)) goto joined_r0x0001408ddfc4;
          if (puVar9 != puVar12) {
            uVar4 = *(undefined8 *)((longlong)puVar13 + 0x24);
            uVar3 = *(undefined4 *)(puVar9 + 3);
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            uVar2 = puVar9[2];
            *puVar9 = *puVar12;
            puVar9[1] = uVar4;
            puVar9[2] = *(undefined8 *)((longlong)puVar13 + 0x2c);
            *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)puVar13 + 0x34);
            *puVar12 = uVar5;
            *(undefined8 *)((longlong)puVar13 + 0x24) = uVar6;
            *(undefined8 *)((longlong)puVar13 + 0x2c) = uVar2;
            *(undefined4 *)((longlong)puVar13 + 0x34) = uVar3;
            fVar16 = *(float *)(puVar15 + 3);
          }
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
        }
        if (fVar16 <= *(float *)(puVar13 + 10)) {
          puVar12 = puVar13 + 7;
          if (fVar16 < *(float *)(puVar13 + 10)) goto joined_r0x0001408ddfc4;
          if (puVar9 != puVar12) {
            uVar4 = puVar13[8];
            uVar3 = *(undefined4 *)(puVar9 + 3);
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            uVar2 = puVar9[2];
            *puVar9 = *puVar12;
            puVar9[1] = uVar4;
            puVar9[2] = puVar13[9];
            *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar13 + 10);
            *puVar12 = uVar5;
            puVar13[8] = uVar6;
            puVar13[9] = uVar2;
            *(undefined4 *)(puVar13 + 10) = uVar3;
          }
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
        }
        puVar11 = puVar11 + 0xe;
        puVar13 = puVar13 + 0xe;
      } while (puVar11 < (undefined8 *)((longlong)param_3 - 0x54U));
    }
    for (; puVar12 = puVar11, puVar11 < param_3; puVar11 = (undefined8 *)((longlong)puVar11 + 0x1c))
    {
      if (*(float *)(puVar15 + 3) <= *(float *)(puVar11 + 3)) {
        if (*(float *)(puVar15 + 3) < *(float *)(puVar11 + 3)) break;
        if (puVar9 != puVar11) {
          uVar4 = puVar11[1];
          uVar3 = *(undefined4 *)(puVar9 + 3);
          uVar5 = *puVar9;
          uVar6 = puVar9[1];
          uVar2 = puVar9[2];
          *puVar9 = *puVar11;
          puVar9[1] = uVar4;
          puVar9[2] = puVar11[2];
          *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar11 + 3);
          *puVar11 = uVar5;
          puVar11[1] = uVar6;
          puVar11[2] = uVar2;
          *(undefined4 *)(puVar11 + 3) = uVar3;
        }
        puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
      }
    }
  }
joined_r0x0001408ddfc4:
  do {
    if (puVar7 <= param_2) break;
    puVar13 = (undefined8 *)((longlong)puVar14 + -0x1c);
    puVar11 = puVar15;
    if (*(float *)((longlong)puVar14 + -4) <= *(float *)(puVar15 + 3)) {
      if (*(float *)((longlong)puVar14 + -4) < *(float *)(puVar15 + 3)) break;
      puVar11 = (undefined8 *)((longlong)puVar15 + -0x1c);
      if (puVar11 != puVar13) {
        uVar4 = *(undefined8 *)((longlong)puVar14 + -0x14);
        uVar3 = *(undefined4 *)((longlong)puVar15 + -4);
        uVar5 = *puVar11;
        uVar6 = *(undefined8 *)((longlong)puVar15 + -0x14);
        uVar2 = *(undefined8 *)((longlong)puVar15 + -0xc);
        *puVar11 = *puVar13;
        *(undefined8 *)((longlong)puVar15 + -0x14) = uVar4;
        *(undefined8 *)((longlong)puVar15 + -0xc) = *(undefined8 *)((longlong)puVar14 + -0xc);
        *(undefined4 *)((longlong)puVar15 + -4) = *(undefined4 *)((longlong)puVar14 + -4);
        *puVar13 = uVar5;
        *(undefined8 *)((longlong)puVar14 + -0x14) = uVar6;
        *(undefined8 *)((longlong)puVar14 + -0xc) = uVar2;
        *(undefined4 *)((longlong)puVar14 + -4) = uVar3;
      }
    }
    puVar7 = (undefined8 *)((longlong)puVar7 + -0x1c);
    puVar14 = puVar13;
    puVar15 = puVar11;
  } while( true );
  if (puVar7 == param_2) {
    if (puVar12 == param_3) {
      *param_1 = puVar15;
      param_1[1] = puVar9;
      return param_1;
    }
    if (puVar9 != puVar12) {
      uVar4 = puVar9[1];
      uVar3 = *(undefined4 *)(puVar15 + 3);
      uVar5 = *puVar15;
      uVar6 = puVar15[1];
      uVar2 = puVar15[2];
      *puVar15 = *puVar9;
      puVar15[1] = uVar4;
      puVar15[2] = puVar9[2];
      *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(puVar9 + 3);
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      puVar9[2] = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
    }
    uVar4 = puVar12[1];
    uVar3 = *(undefined4 *)(puVar15 + 3);
    uVar5 = *puVar15;
    uVar6 = puVar15[1];
    uVar2 = puVar15[2];
    *puVar15 = *puVar12;
    puVar15[1] = uVar4;
    puVar15[2] = puVar12[2];
    *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(puVar12 + 3);
    *puVar12 = uVar5;
    puVar12[1] = uVar6;
    puVar12[2] = uVar2;
    *(undefined4 *)(puVar12 + 3) = uVar3;
    puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
    puVar11 = (undefined8 *)((longlong)puVar12 + 0x1c);
    puVar14 = puVar7;
    puVar15 = (undefined8 *)((longlong)puVar15 + 0x1c);
  }
  else {
    puVar14 = (undefined8 *)((longlong)puVar7 + -0x1c);
    if (puVar12 == param_3) {
      puVar13 = (undefined8 *)((longlong)puVar15 + -0x1c);
      if (puVar14 != puVar13) {
        uVar4 = *(undefined8 *)((longlong)puVar15 + -0x14);
        uVar3 = *(undefined4 *)((longlong)puVar7 + -4);
        uVar5 = *puVar14;
        uVar6 = *(undefined8 *)((longlong)puVar7 + -0x14);
        uVar2 = *(undefined8 *)((longlong)puVar7 + -0xc);
        *puVar14 = *puVar13;
        *(undefined8 *)((longlong)puVar7 + -0x14) = uVar4;
        *(undefined8 *)((longlong)puVar7 + -0xc) = *(undefined8 *)((longlong)puVar15 + -0xc);
        *(undefined4 *)((longlong)puVar7 + -4) = *(undefined4 *)((longlong)puVar15 + -4);
        *puVar13 = uVar5;
        *(undefined8 *)((longlong)puVar15 + -0x14) = uVar6;
        *(undefined8 *)((longlong)puVar15 + -0xc) = uVar2;
        *(undefined4 *)((longlong)puVar15 + -4) = uVar3;
      }
      uVar4 = *(undefined8 *)((longlong)puVar9 - 0x14);
      uVar3 = *(undefined4 *)((longlong)puVar15 + -4);
      uVar5 = *puVar13;
      uVar6 = *(undefined8 *)((longlong)puVar15 + -0x14);
      uVar2 = *(undefined8 *)((longlong)puVar15 + -0xc);
      *puVar13 = *(undefined8 *)((longlong)puVar9 - 0x1c);
      *(undefined8 *)((longlong)puVar15 + -0x14) = uVar4;
      *(undefined8 *)((longlong)puVar15 + -0xc) = *(undefined8 *)((longlong)puVar9 - 0xc);
      *(undefined4 *)((longlong)puVar15 + -4) = *(undefined4 *)((longlong)puVar9 - 4);
      *(undefined8 *)((longlong)puVar9 - 0x1cU) = uVar5;
      *(undefined8 *)((longlong)puVar9 - 0x14) = uVar6;
      *(undefined8 *)((longlong)puVar9 - 0xc) = uVar2;
      *(undefined4 *)((longlong)puVar9 - 4) = uVar3;
      puVar9 = (undefined8 *)((longlong)puVar9 - 0x1cU);
      puVar11 = puVar12;
      puVar15 = puVar13;
    }
    else {
      uVar4 = *puVar12;
      uVar5 = puVar12[1];
      uVar3 = *(undefined4 *)(puVar12 + 3);
      uVar2 = puVar12[2];
      uVar6 = *(undefined8 *)((longlong)puVar7 + -0x14);
      *puVar12 = *puVar14;
      puVar12[1] = uVar6;
      puVar12[2] = *(undefined8 *)((longlong)puVar7 + -0xc);
      *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)puVar7 + -4);
      *puVar14 = uVar4;
      *(undefined8 *)((longlong)puVar7 + -0x14) = uVar5;
      *(undefined8 *)((longlong)puVar7 + -0xc) = uVar2;
      *(undefined4 *)((longlong)puVar7 + -4) = uVar3;
      puVar11 = (undefined8 *)((longlong)puVar12 + 0x1c);
    }
  }
  goto LAB_1408dddd0;
}



// FUNCTION 1408de1c0 FUN_1408de1c0 body=314 status=ok
// SIG undefined FUN_1408de1c0(void)

void FUN_1408de1c0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar8) {
    fVar3 = *(float *)(lVar6 * 0x38 + 0x50 + param_1);
    pfVar1 = (float *)(lVar6 * 0x38 + 0x34 + param_1);
    lVar7 = lVar6 * 2 + 1;
    if (fVar3 < *pfVar1 || fVar3 == *pfVar1) {
      lVar7 = lVar6 * 2 + 2;
    }
    lVar6 = lVar6 * 0x1c;
    lVar5 = lVar7 * 0x1c;
    uVar4 = ((undefined8 *)(lVar5 + param_1))[1];
    *(undefined8 *)(lVar6 + param_1) = *(undefined8 *)(lVar5 + param_1);
    ((undefined8 *)(lVar6 + param_1))[1] = uVar4;
    *(undefined8 *)(lVar6 + 0x10 + param_1) = *(undefined8 *)(lVar5 + 0x10 + param_1);
    *(undefined4 *)(lVar6 + 0x18 + param_1) = *(undefined4 *)(lVar5 + 0x18 + param_1);
    lVar6 = lVar7;
  }
  if ((lVar6 == lVar8) && ((param_3 & 1) == 0)) {
    lVar8 = param_3 * 0x1c;
    lVar7 = lVar6 * 0x1c;
    puVar2 = (undefined8 *)(lVar8 + -0x1c + param_1);
    uVar4 = puVar2[1];
    lVar6 = param_3 - 1;
    *(undefined8 *)(lVar7 + param_1) = *puVar2;
    ((undefined8 *)(lVar7 + param_1))[1] = uVar4;
    *(undefined8 *)(lVar7 + 0x10 + param_1) = *(undefined8 *)(lVar8 + -0xc + param_1);
    *(undefined4 *)(lVar7 + 0x18 + param_1) = *(undefined4 *)(lVar8 + -4 + param_1);
  }
  while (param_2 < lVar6) {
    lVar7 = lVar6 + -1 >> 1;
    lVar8 = lVar7 * 0x1c;
    if (*(float *)(lVar8 + 0x18 + param_1) <= *(float *)(param_4 + 3)) break;
    uVar4 = ((undefined8 *)(lVar8 + param_1))[1];
    lVar6 = lVar6 * 0x1c;
    *(undefined8 *)(lVar6 + param_1) = *(undefined8 *)(lVar8 + param_1);
    ((undefined8 *)(lVar6 + param_1))[1] = uVar4;
    *(undefined8 *)(lVar6 + 0x10 + param_1) = *(undefined8 *)(lVar8 + 0x10 + param_1);
    *(undefined4 *)(lVar6 + 0x18 + param_1) = *(undefined4 *)(lVar8 + 0x18 + param_1);
    lVar6 = lVar7;
  }
  uVar4 = param_4[1];
  lVar6 = lVar6 * 0x1c;
  *(undefined8 *)(lVar6 + param_1) = *param_4;
  ((undefined8 *)(lVar6 + param_1))[1] = uVar4;
  *(undefined8 *)(lVar6 + 0x10 + param_1) = param_4[2];
  *(undefined4 *)(lVar6 + 0x18 + param_1) = *(undefined4 *)(param_4 + 3);
  return;
}



// FUNCTION 1408de300 FUN_1408de300 body=1049 status=ok
// SIG undefined FUN_1408de300(void)

void FUN_1408de300(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  float local_40;
  
  lVar19 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar19 = lVar19 / 0x1c;
    if (lVar19 < 0x21) {
LAB_1408de419:
      if (((1 < lVar19) && (param_1 != param_2)) &&
         (puVar17 = (undefined8 *)((longlong)param_1 + 0x1c), puVar17 != param_2)) {
        _Size = 0x1c;
        puVar16 = puVar17;
        do {
          fVar3 = *(float *)(puVar16 + 3);
          uVar7 = *puVar16;
          uVar8 = puVar16[1];
          uVar2 = puVar16[2];
          if (fVar3 < *(float *)(param_1 + 3) || fVar3 == *(float *)(param_1 + 3)) {
            pfVar1 = (float *)((longlong)param_1 + (_Size - 4));
            puVar10 = (undefined8 *)((_Size - 0x1c) + (longlong)param_1);
            puVar15 = puVar16;
            puVar14 = puVar16;
            if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
              do {
                puVar15 = puVar10;
                uVar9 = puVar15[1];
                *puVar14 = *puVar15;
                puVar14[1] = uVar9;
                puVar14[2] = puVar15[2];
                *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar15 + 3);
                puVar10 = (undefined8 *)((longlong)puVar15 + -0x1c);
                puVar14 = puVar15;
              } while (*(float *)((longlong)puVar15 + -4) <= fVar3 &&
                       fVar3 != *(float *)((longlong)puVar15 + -4));
            }
            *puVar15 = uVar7;
            puVar15[1] = uVar8;
            puVar15[2] = uVar2;
            *(float *)(puVar15 + 3) = fVar3;
          }
          else {
            local_40 = fVar3;
            _guard_xfg_dispatch_icall_nop(puVar17,param_1,_Size);
            *param_1 = uVar7;
            param_1[1] = uVar8;
            param_1[2] = uVar2;
            *(float *)(param_1 + 3) = fVar3;
          }
          puVar16 = (undefined8 *)((longlong)puVar16 + 0x1c);
          _Size = _Size + 0x1c;
        } while (puVar16 != param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar19) {
        uVar20 = ((longlong)param_2 - (longlong)param_1) / 0x1c;
        lVar19 = (longlong)uVar20 >> 1;
        if (0 < lVar19) {
          lVar18 = (longlong)(uVar20 - 1) >> 1;
          puVar17 = (undefined8 *)(lVar19 * 0x1c + (longlong)param_1);
          do {
            fVar3 = *(float *)((longlong)puVar17 + -4);
            uVar7 = *(undefined8 *)((longlong)puVar17 + -0x1c);
            uVar8 = *(undefined8 *)((longlong)puVar17 + -0x14);
            lVar19 = lVar19 + -1;
            uVar2 = *(undefined8 *)((longlong)puVar17 + -0xc);
            lVar13 = lVar19;
            while (lVar13 < lVar18) {
              pfVar1 = (float *)(lVar13 * 0x38 + 0x34 + (longlong)param_1);
              lVar12 = lVar13 * 2 + 1;
              if (*(float *)(param_1 + lVar13 * 7 + 10) < *pfVar1 ||
                  *(float *)(param_1 + lVar13 * 7 + 10) == *pfVar1) {
                lVar12 = lVar13 * 2 + 2;
              }
              lVar13 = lVar13 * 0x1c;
              lVar11 = lVar12 * 0x1c;
              uVar9 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
              *(undefined8 *)(lVar13 + (longlong)param_1) =
                   *(undefined8 *)(lVar11 + (longlong)param_1);
              ((undefined8 *)(lVar13 + (longlong)param_1))[1] = uVar9;
              *(undefined8 *)(lVar13 + 0x10 + (longlong)param_1) =
                   *(undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
              *(undefined4 *)(lVar13 + 0x18 + (longlong)param_1) =
                   *(undefined4 *)(lVar11 + 0x18 + (longlong)param_1);
              lVar13 = lVar12;
            }
            if ((lVar13 == lVar18) && ((uVar20 & 1) == 0)) {
              lVar12 = uVar20 * 0x1c;
              lVar11 = lVar13 * 0x1c;
              puVar16 = (undefined8 *)(lVar12 + -0x1c + (longlong)param_1);
              uVar9 = puVar16[1];
              lVar13 = uVar20 - 1;
              *(undefined8 *)(lVar11 + (longlong)param_1) = *puVar16;
              ((undefined8 *)(lVar11 + (longlong)param_1))[1] = uVar9;
              *(undefined8 *)(lVar11 + 0x10 + (longlong)param_1) =
                   *(undefined8 *)(lVar12 + -0xc + (longlong)param_1);
              *(undefined4 *)(lVar11 + 0x18 + (longlong)param_1) =
                   *(undefined4 *)(lVar12 + -4 + (longlong)param_1);
            }
            while (lVar19 < lVar13) {
              lVar11 = lVar13 + -1 >> 1;
              lVar12 = lVar11 * 0x1c;
              if (*(float *)(lVar12 + 0x18 + (longlong)param_1) <= fVar3) break;
              uVar9 = ((undefined8 *)(lVar12 + (longlong)param_1))[1];
              lVar13 = lVar13 * 0x1c;
              *(undefined8 *)(lVar13 + (longlong)param_1) =
                   *(undefined8 *)(lVar12 + (longlong)param_1);
              ((undefined8 *)(lVar13 + (longlong)param_1))[1] = uVar9;
              *(undefined8 *)(lVar13 + 0x10 + (longlong)param_1) =
                   *(undefined8 *)(lVar12 + 0x10 + (longlong)param_1);
              *(undefined4 *)(lVar13 + 0x18 + (longlong)param_1) =
                   *(undefined4 *)(lVar12 + 0x18 + (longlong)param_1);
              lVar13 = lVar11;
            }
            lVar13 = lVar13 * 0x1c;
            *(undefined8 *)(lVar13 + (longlong)param_1) = uVar7;
            ((undefined8 *)(lVar13 + (longlong)param_1))[1] = uVar8;
            *(undefined8 *)(lVar13 + 0x10 + (longlong)param_1) = uVar2;
            *(float *)(lVar13 + 0x18 + (longlong)param_1) = fVar3;
            puVar17 = (undefined8 *)((longlong)puVar17 + -0x1c);
          } while (0 < lVar19);
        }
        if ((longlong)uVar20 < 2) {
          return;
        }
        param_2 = (undefined8 *)((longlong)param_2 + -0x1c);
        do {
          if (1 < (longlong)uVar20) {
            local_40 = *(float *)(param_2 + 3);
            local_58 = (undefined8 *)*param_2;
            puStack_50 = (undefined8 *)param_2[1];
            local_48 = param_2[2];
            uVar4 = *(undefined4 *)((longlong)param_1 + 4);
            uVar5 = *(undefined4 *)(param_1 + 1);
            uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
            *(undefined4 *)param_2 = *(undefined4 *)param_1;
            *(undefined4 *)((longlong)param_2 + 4) = uVar4;
            *(undefined4 *)(param_2 + 1) = uVar5;
            *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
            param_2[2] = param_1[2];
            *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
            FUN_1408de1c0(param_1,0,((longlong)param_2 - (longlong)param_1) / 0x1c,&local_58,param_4
                         );
          }
          param_2 = (undefined8 *)((longlong)param_2 + -0x1c);
          uVar20 = ((longlong)param_2 + (0x1c - (longlong)param_1)) / 0x1c;
        } while (1 < (longlong)uVar20);
        return;
      }
      goto LAB_1408de419;
    }
    FUN_1408ddc60(&local_58,param_1,param_2,param_4);
    puVar16 = puStack_50;
    puVar17 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_58 - (longlong)param_1) / 0x1c <
        ((longlong)param_2 - (longlong)puStack_50) / 0x1c) {
      FUN_1408de300(param_1,local_58,param_3,param_4);
      puVar17 = param_2;
      param_1 = puVar16;
    }
    else {
      FUN_1408de300(puStack_50,param_2,param_3,param_4);
    }
    lVar19 = (longlong)puVar17 - (longlong)param_1;
    param_2 = puVar17;
  } while( true );
}



// FUNCTION 1408de720 FUN_1408de720 body=151 status=ok
// SIG undefined FUN_1408de720(void)

void FUN_1408de720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = (ulonglong)((longlong)param_2 + (3 - (longlong)param_1)) >> 2;
  if (param_2 < param_1) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    if (3 < uVar5) {
      uVar1 = *param_3;
      if ((param_3 < param_1) || (param_1 + (uVar5 - 1) < param_3)) {
        do {
          uVar4 = uVar4 + 4;
        } while (uVar4 != (uVar5 & 0xfffffffffffffffc));
        puVar3 = param_1;
        for (uVar2 = uVar5 & 0x3ffffffffffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + (uVar5 & 0xfffffffffffffffc);
      }
    }
    for (; uVar4 != uVar5; uVar4 = uVar4 + 1) {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 1408de7c0 FUN_1408de7c0 body=749 status=ok
// SIG undefined FUN_1408de7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408de7c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_128 [32];
  undefined ***local_108;
  undefined ***local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined **local_d0;
  code *local_c8;
  undefined ***local_98;
  undefined **local_90;
  code *local_88;
  undefined ***local_58;
  longlong local_50;
  int local_48;
  undefined4 uStack_44;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_d0 = &PTR_LAB_14413b658;
  local_c8 = FUN_1408e0060;
  local_98 = &local_d0;
  local_90 = &PTR_LAB_14413b628;
  local_88 = FUN_1408df170;
  local_58 = &local_90;
  local_f0 = *param_3;
  local_e8 = param_3[1];
  if (local_e8 != 0) {
    LOCK();
    *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
    UNLOCK();
  }
  local_e0 = *param_2;
  local_d8 = param_2[1];
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  local_100 = &local_d0;
  local_108 = &local_90;
  FUN_1408dceb0(&local_50,&local_e0,&local_f0);
  lVar5 = param_1[2];
  if (local_38 != '\0') {
    lVar11 = (longlong)local_48 * 0x1c + local_50;
    FUN_1408de300(local_50,lVar11,(lVar11 - local_50) / 0x1c,local_f8);
    lVar12 = (longlong)local_48 * 0x1c;
    uVar3 = lVar12 + local_50;
    lVar11 = (longlong)local_48;
    if ((ulonglong)((longlong)(int)lVar5 * 0x1c + local_50) <= uVar3) {
      lVar11 = (longlong)(int)lVar5;
    }
    uVar9 = lVar11 * 0x1c + local_50;
    if ((uVar9 != uVar3) &&
       (iVar8 = (int)((longlong)((lVar12 - uVar9) + local_50) / 0x1c), 0 < iVar8)) {
      iVar10 = (int)((longlong)(uVar9 - local_50) / 0x1c);
      iVar7 = (local_48 - iVar10) - iVar8;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x1c + local_50),
                   (void *)((longlong)(iVar10 + iVar8) * 0x1c + local_50),(longlong)iVar7 * 0x1c);
      }
      local_48 = local_48 - iVar8;
      TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(&local_50);
    }
  }
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar6 != '\0')) {
    if ((int)param_1[1] == 0) {
      param_1 = (longlong *)0x0;
    }
    else {
      param_1 = (longlong *)*param_1;
    }
    (**(code **)(*param_1 + 0x40))(param_1,&local_50);
  }
  if (local_38 == '\0') {
    plVar4 = (longlong *)CONCAT44(uStack_44,local_48);
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
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  else if (local_50 != 0) {
    FMemory::Free(local_50);
  }
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1408deab0 FUN_1408deab0 body=66 status=ok
// SIG undefined FUN_1408deab0(void)

undefined8 * FUN_1408deab0(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408deb00 FUN_1408deb00 body=98 status=ok
// SIG undefined FUN_1408deb00(void)

undefined8 * FUN_1408deb00(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408deb70 FUN_1408deb70 body=134 status=ok
// SIG undefined FUN_1408deb70(void)

undefined8 * FUN_1408deb70(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1408dec00 FUN_1408dec00 body=139 status=ok
// SIG undefined FUN_1408dec00(void)

void FUN_1408dec00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_14413b508;
    plVar1 = puVar3 + 1;
    *plVar1 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != plVar1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 8), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x18);
    puVar3[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar3 = &PTR_GetPoolName_14413b550;
  }
  return;
}



// FUNCTION 1408dec90 FUN_1408dec90 body=94 status=ok
// SIG undefined FUN_1408dec90(void)

void FUN_1408dec90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14413b598;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_14413b5e0;
  }
  return;
}



// FUNCTION 1408decf0 DestroyObject body=52 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FOnlineAuthSteam::FSteamAuthUser,SharedPointerInternals::DefaultDeleter<FOnlineAuthSteam::FSteamAuthUser>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 1408ded30 DestroyObject body=52 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FString,SharedPointerInternals::DefaultDeleter<FString>_>::
     DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x10);
    return;
  }
  return;
}



// FUNCTION 1408ded70 FUN_1408ded70 body=216 status=ok
// SIG undefined FUN_1408ded70(void)

void FUN_1408ded70(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1408de7c0(param_1 + 8,&local_18,&local_28);
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
  plVar4 = (longlong *)param_3[1];
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



// FUNCTION 1408dee50 FUN_1408dee50 body=142 status=ok
// SIG undefined FUN_1408dee50(void)

void FUN_1408dee50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))(plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1408deee0 FUN_1408deee0 body=356 status=ok
// SIG undefined FUN_1408deee0(void)

undefined8 FUN_1408deee0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_3[1];
  local_38 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  local_20 = plVar5;
  FUN_1408de7c0(param_1 + 8,&local_28,&local_38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return 1;
}



// FUNCTION 1408df050 FUN_1408df050 body=278 status=ok
// SIG undefined FUN_1408df050(void)

undefined8 FUN_1408df050(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_1408df122;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x0001408df0fa;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_1408df09a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x0001408df0fa:
  plVar7 = plVar8;
  if (bVar9) goto LAB_1408df122;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_1408df122;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x0001408df0fa;
LAB_1408df122:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  uVar6 = 1;
  goto LAB_1408df09a;
}



// FUNCTION 1408df170 FUN_1408df170 body=245 status=ok
// SIG undefined FUN_1408df170(void)

longlong * FUN_1408df170(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 4;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow();
  _guard_xfg_dispatch_icall_nop((void *)*param_1,0,0x70);
  *(undefined4 *)(*param_1 + 0x18) = 0x41c00000;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(*param_1 + 0x34) = 0x42400000;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x1c) = 0x43fa000043fa0000;
  *(undefined4 *)(lVar2 + 0x24) = 0x43fa0000;
  *(undefined4 *)(*param_1 + 0x50) = 0x42200000;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x38) = 0x447a0000447a0000;
  *(undefined4 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(*param_1 + 0x6c) = 0x42000000;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x54) = 0x43320000c3908000;
  *(undefined4 *)(lVar2 + 0x5c) = 0x41d80000;
  return param_1;
}



// FUNCTION 1408df270 FUN_1408df270 body=1364 status=ok
// SIG undefined FUN_1408df270(void)

void FUN_1408df270(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  undefined4 uVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 *local_res20;
  longlong *local_120;
  longlong *local_118;
  longlong local_110 [2];
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  undefined4 local_c8;
  longlong local_c0 [3];
  undefined4 local_a8;
  void *local_a0;
  ulonglong local_98;
  longlong local_90 [2];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  if ((param_2 != (longlong *)0x0) &&
     (local_res18 = param_3, local_res20 = param_4, lVar4 = (**(code **)(*param_2 + 0x148))(param_2)
     , lVar4 != 0)) {
    if (*(longlong *)(lVar4 + 400) == 0) {
      lVar14 = lVar4 + 0x400;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(lVar4 + 400) + 0x98);
    }
    uVar3 = param_4[1];
    local_f0 = *(undefined8 *)(param_4 + 4);
    lVar5 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar14,local_f0,uVar3,local_res10);
    if (lVar5 == 0) {
      plVar6 = (longlong *)operator_new(0x18);
      local_118 = (longlong *)0x0;
      local_120 = local_118;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined1 *)(plVar6 + 2) = 0;
        local_120 = plVar6;
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_14413b688;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        plVar6[2] = (longlong)local_120;
        local_118 = plVar6;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_120,local_120,local_120);
      plVar2 = local_118;
      plVar6 = local_120;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_GetPoolName_14413b598;
        plVar7[1] = (longlong)plVar6;
        plVar7[2] = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
        }
        plVar7[3] = (longlong)FUN_1408df900;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar5;
        *plVar7 = (longlong)&PTR_GetPoolName_14413b5e0;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar2)(plVar2);
          piVar13 = (int *)((longlong)plVar2 + 0xc);
          LOCK();
          iVar12 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        piVar13 = (int *)((longlong)plVar2 + 0xc);
        LOCK();
        plVar6 = plVar2 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          iVar12 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      uVar8 = FUN_1428cc8c0(lVar4,local_90);
      FUN_1428d4fe0(&local_a0,uVar8);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_e8);
      }
      _Src = local_a0;
      local_100 = (void *)0x0;
      iVar12 = (int)local_98;
      local_f8 = iVar12;
      if (iVar12 == 0) {
        local_f4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,local_98 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_100,_Src,(longlong)iVar12 * 2);
      }
      local_c0[0] = 0;
      local_c0[1] = 0;
      local_110[0] = 0;
      local_110[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,0);
      FGenericPlatformString::Memcpy(local_110[0],L"HotSpotsXbox",0x1a);
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
        (**(code **)(*local_e8 + 0x30))(local_e8,&local_d8);
      }
      local_c8 = local_res18;
      local_c0[2] = 0;
      local_a8 = 0;
      puVar9 = (undefined8 *)operator_new(0x30,local_c0 + 2);
      if (puVar9 != (undefined8 *)0x0) {
        pplVar1 = (longlong **)(puVar9 + 1);
        *puVar9 = &PTR_GetPoolName_14413b508;
        *pplVar1 = (longlong *)0x0;
        *(undefined4 *)(puVar9 + 2) = 0;
        if (((&local_d8 != pplVar1) && (local_d0 != 0)) && (local_d8 != (longlong *)0x0)) {
          (**(code **)(*local_d8 + 0x30))(local_d8,pplVar1);
        }
        *(undefined4 *)(puVar9 + 3) = local_c8;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar9[5] = uVar8;
        *puVar9 = &PTR_GetPoolName_14413b550;
      }
      uVar8 = FString::FString(local_80,local_110);
      uVar10 = FString::FString(local_70,local_c0);
      uVar11 = FString::FString(local_60,&local_100);
      FUN_1408df980(uVar11,uVar10,uVar8,local_c0 + 2);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (local_110[0] != 0) {
        FMemory::Free();
      }
      if (local_c0[0] != 0) {
        FMemory::Free();
      }
      if (local_100 != (void *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
      puVar9 = (undefined8 *)operator_new(0x38);
      plVar6 = local_118;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
        uVar8 = local_f0;
      }
      else {
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        *puVar9 = &PTR_FUN_14413b4e8;
        puVar9[1] = local_120;
        puVar9[2] = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        puVar9[3] = *(undefined8 *)(local_res20 + 2);
        *(undefined4 *)(puVar9 + 4) = *local_res20;
        FWeakObjectPtr::operator=((longlong)puVar9 + 0x24,param_1);
        uVar8 = local_f0;
        FWeakObjectPtr::operator=((longlong)puVar9 + 0x2c,local_f0);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar13 = (int *)((longlong)plVar6 + 0xc);
            iVar12 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
      FUN_142514cf0(lVar14,uVar8,uVar3,puVar9);
      if (local_a0 != (void *)0x0) {
        FMemory::Free();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar4 = FMemory::Realloc(plVar7,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      plVar6 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_118 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar13 = (int *)((longlong)plVar6 + 0xc);
          iVar12 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408df7d0 FUN_1408df7d0 body=226 status=ok
// SIG undefined FUN_1408df7d0(void)

undefined8 * FUN_1408df7d0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_146299580 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while ((&DAT_146299580)[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,&DAT_146299580,(longlong)iVar1 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_14413af8c,5,0x3f);
  FString::RemoveFromEnd(param_1,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1408df8c0 FUN_1408df8c0 body=55 status=ok
// SIG undefined FUN_1408df8c0(void)

undefined8 * FUN_1408df8c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144139d80;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408df900 FUN_1408df900 body=128 status=ok
// SIG undefined FUN_1408df900(void)

void FUN_1408df900(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if ((*(char *)(param_2 + 3) == '\0') || (param_1 == param_2)) {
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  _Src = (void *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 1) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 1408df980 FUN_1408df980 body=1584 status=ok
// SIG undefined FUN_1408df980(void)

void FUN_1408df980(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  void *local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8 [6];
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar5 = (longlong *)UTextureLODSettings::GetPrivateStaticClass();
  lVar9 = plVar5[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar9 = plVar5[0x1f];
  }
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(lVar9 + 0x30);
  lVar8 = (longlong)local_b0;
  pvVar3 = *(void **)(lVar9 + 0x28);
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_b8,pvVar3,lVar8 * 2);
  }
  if ((local_b0 != 0) && (0 < local_b0 + -1)) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_78);
    local_68 = (void *)0x0;
    local_60 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    pvVar3 = local_68;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_68,0x2b,"/gbgraph/map_overlays/show_for_editor?map=",0x2b,0x3f);
    iVar7 = local_b0;
    if (((int)local_60 != 0) && (iVar10 = (int)local_60 + -1, iVar10 != 0)) {
      lVar9 = (longlong)local_b0;
      local_b0 = (uint)(local_b0 == 0) + local_b0 + iVar10;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
      }
      pvVar2 = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar10 = local_b0;
    pvVar3 = (void *)*param_1;
    iVar7 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      lVar9 = (longlong)local_b0;
      local_b0 = (uint)(local_b0 == 0) + iVar7 + local_b0;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar10);
      }
      pvVar2 = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar2) = 0;
    }
    local_58 = (void *)0x0;
    local_50 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    pvVar3 = local_58;
    FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"&name=",7,0x3f);
    iVar7 = local_b0;
    if (((int)local_50 != 0) && (iVar10 = (int)local_50 + -1, iVar10 != 0)) {
      lVar9 = (longlong)local_b0;
      local_b0 = (uint)(local_b0 == 0) + local_b0 + iVar10;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
      }
      pvVar2 = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar10 = local_b0;
    pvVar3 = (void *)*param_3;
    iVar7 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      lVar9 = (longlong)local_b0;
      local_b0 = (uint)(local_b0 == 0) + iVar7 + local_b0;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar10);
      }
      pvVar2 = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar2) = 0;
    }
    local_48 = (void *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar3 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,10,"&project=",10,0x3f);
    iVar7 = local_b0;
    if (((int)local_40 != 0) && (iVar10 = (int)local_40 + -1, iVar10 != 0)) {
      lVar9 = (longlong)local_b0;
      local_b0 = (uint)(local_b0 == 0) + local_b0 + iVar10;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
      }
      pvVar2 = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    puVar6 = (undefined8 *)FUN_1408df7d0(local_38);
    iVar7 = local_b0;
    pvVar3 = (void *)*puVar6;
    iVar10 = *(int *)(puVar6 + 1) + -1;
    if (*(int *)(puVar6 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      lVar9 = (longlong)local_b0;
      local_b0 = (uint)(local_b0 == 0) + iVar10 + local_b0;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar7);
      }
      pvVar2 = (void *)((longlong)local_b8 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_a8[2] = 0;
    local_a8[3] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a8[2],0x11,"application/json",0x11,0x3f);
    local_a8[0] = 0;
    local_a8[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a8[0],0xd,"Content-Type",0xd,0x3f);
    (**(code **)(*local_78 + 0x68))(local_78,local_a8,local_a8 + 2);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (local_a8[2] != 0) {
      FMemory::Free();
    }
    (**(code **)(*local_78 + 0x50))(local_78,&local_b8);
    local_a8[4] = 0;
    local_a8[5] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a8[4],4,&DAT_14413afbc,4,0x3f);
    (**(code **)(*local_78 + 0x48))(local_78,local_a8 + 4);
    if (local_a8[4] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)(**(code **)(*local_78 + 0x80))();
    if (param_4 != plVar5) {
      if (((int)param_4[1] == 0) || (plVar4 = (longlong *)*param_4, plVar4 == (longlong *)0x0)) {
        if (((int)plVar5[1] != 0) && (plVar4 = (longlong *)*plVar5, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar5 != 0) {
            lVar9 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar9;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,plVar5);
      }
    }
    (**(code **)(*local_78 + 0x78))();
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return;
}



// FUNCTION 1408dffb0 ResizeShrink body=162 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x1c) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x1c,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 4);
      }
      goto LAB_1408e0024;
    }
    if (iVar5 == 0) goto LAB_1408e0024;
  }
  iVar5 = iVar6;
LAB_1408e0024:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1c,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1408e0060 FUN_1408e0060 body=1381 status=ok
// SIG undefined FUN_1408e0060(void)

longlong * FUN_1408e0060(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float *pfVar2;
  ushort _C;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  char cVar6;
  wint_t wVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  ushort *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ushort *local_res18;
  undefined8 *local_res20;
  undefined8 local_138;
  longlong local_128 [8];
  undefined8 *local_e8;
  ushort *local_e0;
  int local_d8;
  longlong local_d0 [2];
  longlong *local_c0;
  undefined8 *local_b8;
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [4];
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar10 = (undefined8 *)*param_2;
  puVar15 = puVar10 + (longlong)(int)param_2[1] * 2;
  local_e8 = puVar10;
  local_b8 = puVar15;
  if (puVar10 != puVar15) {
    do {
      local_res20 = (undefined8 *)0x0;
      local_e8 = puVar10;
      cVar6 = (**(code **)(*(longlong *)*puVar10 + 0x28))((longlong *)*puVar10,&local_res20);
      if (cVar6 != '\0') {
        local_d0[0] = 0;
        local_d0[1] = 0;
        local_128[0] = 0;
        local_128[1] = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_128[0],6,"build",6,0x3f);
        FUN_1416b40a0(*local_res20,local_128,local_d0);
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        local_128[2] = 0;
        local_128[3] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 2,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_128[2],5,&DAT_14413b2f8,5,0x3f);
        FUN_1416b3850(*local_res20,local_128 + 2,&local_c0);
        if (local_128[2] != 0) {
          FMemory::Free();
        }
        if (local_c0 != (longlong *)0x0) {
          puVar17 = (undefined8 *)*local_c0;
          puVar16 = puVar17 + (longlong)(int)local_c0[1] * 2;
          if (puVar17 != puVar16) {
LAB_1408e01c7:
            plVar9 = (longlong *)(*(code *)**(undefined8 **)*puVar17)();
            plVar3 = (longlong *)plVar9[1];
            lVar4 = *plVar9;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            if (lVar4 != 0) {
              local_128[4] = 0;
              local_128[5] = 9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 4,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_128[4],9,"raw_heat",9,0x3f);
              dVar5 = (double)FJsonObject::GetNumberField(lVar4,local_128 + 4);
              if (local_128[4] != 0) {
                FMemory::Free();
              }
              local_128[6] = 0;
              local_128[7] = 9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 6,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_128[6],9,"location",9,0x3f);
              FJsonObject::GetStringField(lVar4,&local_e0,local_128 + 6);
              if (local_128[6] != 0) {
                FMemory::Free();
              }
              pcVar14 = "0.0";
              puVar13 = &DAT_143f3eda8;
              if (local_d8 != 0) {
                puVar13 = local_e0;
              }
              do {
                _C = *puVar13;
                if ((_C == 0) && (*pcVar14 == '\0')) goto LAB_1408e0508;
                if ((uint)_C != (int)*pcVar14) {
                  wVar7 = towlower(_C);
                  iVar8 = tolower((int)*pcVar14);
                  if ((uint)wVar7 != (int)(char)iVar8) goto LAB_1408e030e;
                }
                pcVar14 = pcVar14 + 1;
                puVar13 = puVar13 + 1;
              } while( true );
            }
            goto LAB_1408e0518;
          }
        }
LAB_1408e056e:
        if (local_d0[0] != 0) {
          FMemory::Free();
        }
      }
      puVar10 = puVar10 + 2;
      local_e8 = puVar10;
    } while (puVar10 != puVar15);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2);
  return param_1;
LAB_1408e030e:
  if ((uint)wVar7 != (int)(char)iVar8) {
    local_res18 = local_e0;
    puVar10 = (undefined8 *)FParse::Token(local_b0,&local_res18,0);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    dVar18 = _wtof(pwVar11);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    puVar10 = (undefined8 *)FParse::Token(local_a0,&local_res18,0);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    dVar19 = _wtof(pwVar11);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    puVar10 = (undefined8 *)FParse::Token(local_90,&local_res18,0);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    dVar20 = _wtof(pwVar11);
    if (local_90[0] != 0) {
      FMemory::Free();
    }
    puVar10 = (undefined8 *)FParse::Token(local_80,&local_res18,0);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    dVar21 = _wtof(pwVar11);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    puVar10 = (undefined8 *)FParse::Token(local_70,&local_res18,0);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    dVar22 = _wtof(pwVar11);
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    puVar10 = (undefined8 *)FParse::Token(local_60,&local_res18,0);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    dVar23 = _wtof(pwVar11);
    local_138 = CONCAT44((float)dVar23,(float)dVar22);
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    lVar4 = *param_1;
    lVar12 = (longlong)iVar8 * 0x1c;
    pfVar2 = (float *)(lVar12 + lVar4);
    *pfVar2 = (float)dVar18;
    pfVar2[1] = (float)dVar19;
    pfVar2[2] = (float)dVar20;
    pfVar2[3] = (float)dVar21;
    *(undefined8 *)(lVar12 + 0x10 + lVar4) = local_138;
    *(float *)(lVar12 + 0x18 + lVar4) = (float)dVar5;
  }
LAB_1408e0508:
  if (local_e0 != (ushort *)0x0) {
    FMemory::Free();
  }
LAB_1408e0518:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  puVar17 = puVar17 + 2;
  puVar10 = local_e8;
  puVar15 = local_b8;
  if (puVar17 == puVar16) goto LAB_1408e056e;
  goto LAB_1408e01c7;
}



// FUNCTION 1408e05d0 FUN_1408e05d0 body=233 status=ok
// SIG undefined FUN_1408e05d0(void)

void FUN_1408e05d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0x10);
  if (cVar2 != '\0') {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x24);
    if (lVar9 != 0) {
      plVar7 = *(longlong **)(param_1 + 8);
      plVar1 = (longlong *)(lVar9 + 0x28);
      if (plVar1 != plVar7) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = *plVar7;
        *plVar7 = 0;
        *(int *)(lVar9 + 0x30) = (int)plVar7[1];
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)((longlong)plVar7 + 0xc);
        plVar7[1] = 0;
      }
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(char *)(param_2 + 0x70) = cVar2;
  if (cVar2 != '\0') {
    iVar6 = *(int *)(param_2 + 0x68);
    lVar9 = (longlong)iVar6;
    *(int *)(param_2 + 0x68) = iVar6 + 1;
    if (*(int *)(param_2 + 0x6c) < iVar6 + 1) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar6);
    }
    lVar10 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar10 = param_2;
    }
    *(undefined8 *)(lVar10 + lVar9 * 0x18) = uVar8;
    *(undefined4 *)(lVar10 + 8 + lVar9 * 0x18) = uVar5;
    *(undefined4 *)(lVar10 + 0xc + lVar9 * 0x18) = uVar3;
    *(undefined4 *)(lVar10 + 0x10 + lVar9 * 0x18) = uVar4;
  }
  return;
}



// FUNCTION 1408e0700 FUN_1408e0700 body=120 status=ok
// SIG undefined FUN_1408e0700(void)

undefined8 * FUN_1408e0700(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18 [2];
  
  local_28 = *param_3;
  *param_3 = 0;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  puVar1 = (undefined8 *)(**(code **)(param_1 + 8))(local_18,&local_28);
  *param_2 = 0;
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408e0780 FUN_1408e0780 body=74 status=ok
// SIG undefined FUN_1408e0780(void)

undefined8 * FUN_1408e0780(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(**(code **)(param_1 + 8))(local_18);
  *param_2 = 0;
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408e07f0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureLODSettings::GetPrivateStaticClass(void)

{
  if (DAT_1468621f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxPerfScope",L"GbxPerfScopeOptions",&DAT_1468621f0,FUN_140447710,0x38,
                  0x10000004,0,L"Engine",FUN_1408e09f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468621f0;
}



// FUNCTION 1408e0890 FUN_1408e0890 body=47 status=ok
// SIG undefined FUN_1408e0890(void)

longlong FUN_1408e0890(void)

{
  if (DAT_1468621f8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468621f8,&PTR_s__Script_GbxPerfScope_14413bdb0);
  }
  return DAT_1468621f8;
}



// FUNCTION 1408e08e0 FUN_1408e08e0 body=151 status=ok
// SIG undefined FUN_1408e08e0(void)

longlong FUN_1408e08e0(void)

{
  if (DAT_146862210 == 0) {
    FUN_14171ccd0(L"/Script/GbxPerfScope",L"GbxPerfScopePerfSampleData",&DAT_146862210,FUN_1408e0ac0
                  ,0x38,0x10000000,0,L"Engine",FUN_1408e0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862210;
}



// FUNCTION 1408e0980 FUN_1408e0980 body=47 status=ok
// SIG undefined FUN_1408e0980(void)

longlong FUN_1408e0980(void)

{
  if (DAT_146862208 == 0) {
    FUN_141786440(&DAT_146862208,&PTR_FUN_14413b990);
  }
  return DAT_146862208;
}



// FUNCTION 1408e09b0 FUN_1408e09b0 body=47 status=ok
// SIG undefined FUN_1408e09b0(void)

longlong FUN_1408e09b0(void)

{
  if (DAT_146862200 == 0) {
    FUN_141786a30(&DAT_146862200,&PTR_FUN_146283760);
  }
  return DAT_146862200;
}



// FUNCTION 1408e09f0 FUN_1408e09f0 body=48 status=ok
// SIG undefined FUN_1408e09f0(void)

void FUN_1408e09f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar1);
    *puVar1 = &PTR_FUN_14413bb08;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 1408e0a20 FUN_1408e0a20 body=51 status=ok
// SIG undefined FUN_1408e0a20(void)

void FUN_1408e0a20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_14413bb08;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 1408e0a60 FUN_1408e0a60 body=70 status=ok
// SIG undefined FUN_1408e0a60(void)

longlong FUN_1408e0a60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}


