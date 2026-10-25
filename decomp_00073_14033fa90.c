// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14033fa90 `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame'' body=96 status=ok
// SIG undefined `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NetCmds::_dynamic_initializer_for__MaxConnectionsToTickPerServerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c78 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.Enabled",0,
                  L"Whether the build watermark is drawn to screen. Ignored when GBX_BUILD_WATERMARK_FORCED == 1"
                  ,0);
  _DAT_146af4c70 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead5d0);
  return;
}



// FUNCTION 14033faf0 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4cb8 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.FontSize",0x41f00000,
                  L"Size of the font used for the watermark text",0);
  _DAT_146af4cb0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead620);
  return;
}



// FUNCTION 14033fb60 `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar'' body=137 status=ok
// SIG undefined `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCompileMaterialsForShaderFormatCVar__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c88 =
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TestString",local_18,
                  L"If this CVar has a value it will be used instead of the standard string. Intended for testing only and does NOT WORK when GBX_BUILD_WATERMARK_FORCED == 1"
                  ,0);
  _DAT_146af4c80 = &PTR_FUN_143f3ecf0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  _DAT_146af4c80 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead670);
  return;
}



// FUNCTION 14033fbf0 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d28 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextOpacityFadeSpeed",0x3f400000,
                  L"Adjusts the speed which we lerp between min and max text opacity",0);
  _DAT_146af4d20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead6c0);
  return;
}



// FUNCTION 14033fc60 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d18 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextOpacityMax",0x3ecccccd,
                  L"Maximum opacity of the watermark text",0);
  _DAT_146af4d10 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead710);
  return;
}



// FUNCTION 14033fcd0 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4d08 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextOpacityMin",0x3dcccccd,
                  L"Minimum opacity of the watermark text",0);
  _DAT_146af4d00 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead760);
  return;
}



// FUNCTION 14033fd40 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ce8 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextOutlineOpacity",0x3f000000,
                  L"Opacity of the text outline, if it\'s enabled with gbx.BuildWatermark.TextOutlinesEnabled"
                  ,0);
  _DAT_146af4ce0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead7b0);
  return;
}



// FUNCTION 14033fdb0 `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame'' body=96 status=ok
// SIG undefined `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NetCmds::_dynamic_initializer_for__MaxConnectionsToTickPerServerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4cc8 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextOutlinesEnabled",0,
                  L"Whether or not we do outlines for the watermark text",0);
  _DAT_146af4cc0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead800);
  return;
}



// FUNCTION 14033fe10 `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame'' body=96 status=ok
// SIG undefined `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NetCmds::_dynamic_initializer_for__MaxConnectionsToTickPerServerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4cd8 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextShadowEnabled",0,
                  L"Whether or not we do drop shadow for the watermark text",0);
  _DAT_146af4cd0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead850);
  return;
}



// FUNCTION 14033fe70 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4cf8 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TextShadowOpacity",0x3f000000,
                  L"Opacity of the text drop shadows, if it\'s enabled with gbx.BuildWatermark.TextShadowEnabled"
                  ,0);
  _DAT_146af4cf0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead8a0);
  return;
}



// FUNCTION 14033fee0 FUN_14033fee0 body=99 status=ok
// SIG undefined FUN_14033fee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033fee0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c98 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TileNumX",2,
                  L"Number of string we tile across the screen horizintally",0);
  _DAT_146af4c90 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead8f0);
  return;
}



// FUNCTION 14033ff50 FUN_14033ff50 body=99 status=ok
// SIG undefined FUN_14033ff50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ff50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4ca8 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.BuildWatermark.TileNumY",10,
                  L"Number of string we tile across the screen vertically",0);
  _DAT_146af4ca0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ead940);
  return;
}



// FUNCTION 14033ffc0 `dynamic_initializer_for_'CVarMaxPlayersOverride'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxPlayersOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxPlayersOverride__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4a90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"net.MaxPlayersOverride",0,
                  L"If greater than 0, will override the standard max players count. Useful for testing full servers."
                  ,0);
  _DAT_146af4a88 = &PTR_FUN_143f3ecf8;
  DAT_146af4a98 = (**(code **)(*DAT_146af4a90 + 0x38))(DAT_146af4a90);
  atexit(FUN_143ead990);
  return;
}



// FUNCTION 140340030 `dynamic_initializer_for_'CVarScreenshotDelegate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarScreenshotDelegate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarScreenshotDelegate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4b58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ScreenshotDelegate",1,
                  L"ScreenshotDelegates prevent processing of incoming screenshot request and break some features. This allows to disable them.\nIdeally we rework the delegate code to not make that needed.\n 0: off\n 1: delegates are on (default)"
                  ,0);
  _DAT_146af4b50 = &PTR_FUN_143f3ecf8;
  DAT_146af4b60 = (**(code **)(*DAT_146af4b58 + 0x38))(DAT_146af4b58);
  atexit(FUN_143ead9e0);
  return;
}



// FUNCTION 1403400b0 `dynamic_initializer_for_'CVarSecondaryScreenPercentage'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSecondaryScreenPercentage''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSecondaryScreenPercentage__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4b70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SecondaryScreenPercentage.GameViewport",0,
                  L"Override secondary screen percentage for game viewport.\n 0: Compute secondary screen percentage = 100 / DPIScalefactor automaticaly (default);\n 1: override secondary screen percentage."
                  ,0);
  _DAT_146af4b68 = &PTR_FUN_143f3ecf8;
  DAT_146af4b78 = (**(code **)(*DAT_146af4b70 + 0x40))(DAT_146af4b70);
  atexit(FUN_143eada30);
  return;
}



// FUNCTION 140340120 `dynamic_initializer_for_'CVarSetBlackBordersEnabled'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSetBlackBordersEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSetBlackBordersEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4b40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.BlackBorders",0,
                  L"To draw black borders around the rendered image\n(prevents artifacts from post processing passes that read outside of the image e.g. PostProcessAA)\nin pixels, 0:off"
                  ,0);
  _DAT_146af4b38 = &PTR_FUN_143f3ecf8;
  DAT_146af4b48 = (**(code **)(*DAT_146af4b40 + 0x38))(DAT_146af4b40);
  atexit(FUN_143eada80);
  return;
}



// FUNCTION 140340190 FUN_140340190 body=100 status=ok
// SIG undefined FUN_140340190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340190(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.AnimManager.CanUse",&DAT_146af4a60,
                  L"Enables/Disables GbxAnimManager. Disable: 0 - Enable: 1",0x40);
  _DAT_146af4c20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eadad0);
  return;
}



// FUNCTION 140340200 FUN_140340200 body=100 status=ok
// SIG undefined FUN_140340200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340200(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c58 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.AnimManager.ForcedUpdateRate",&DAT_146af4a70,
                  L"Non-zero to update rate. \'X\' means update every X seconds.",0x40);
  _DAT_146af4c50 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eadb20);
  return;
}



// FUNCTION 140340270 FUN_140340270 body=100 status=ok
// SIG undefined FUN_140340270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340270(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c48 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.AnimManager.MaxNumUpdates",&DAT_146532704,
                  L"Maximum number of anim updates per frame, unless more than this require updates every frame."
                  ,0x40);
  _DAT_146af4c40 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eadb70);
  return;
}



// FUNCTION 1403402e0 FUN_1403402e0 body=100 status=ok
// SIG undefined FUN_1403402e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403402e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af4c38 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.AnimManager.PretendNothingIsRendered",&DAT_146af4a64,
                  L"Set to 1 to make the system think that nothing is rendered.",0x40);
  _DAT_146af4c30 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eadbc0);
  return;
}



// FUNCTION 1403403d0 FUN_1403403d0 body=81 status=ok
// SIG undefined FUN_1403403d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403403d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146532750;
  uStack_14 = uRam0000000146532754;
  uStack_10 = uRam0000000146532758;
  uStack_c = uRam000000014653275c;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxSkyVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146af4c10,&local_18,1,*puVar1);
  atexit((_func_5014 *)&LAB_143eadca0);
  return;
}



// FUNCTION 1403404a0 FUN_1403404a0 body=115 status=ok
// SIG undefined FUN_1403404a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403404a0(void)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined2 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  local_18 = 0x46584247;
  local_14 = 0x444f;
  _DAT_146af5868 = 6;
  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&DAT_146af5860,6,0);
  _guard_xfg_dispatch_icall_nop(DAT_146af5860,&local_18,6);
  atexit((_func_5014 *)&LAB_143eadd40);
  return;
}



// FUNCTION 140340530 FUN_140340530 body=59 status=ok
// SIG undefined FUN_140340530(void)

void FUN_140340530(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146532880,0);
  FGenericPlatformString::Memcpy(DAT_146532880,L".fod3",0xc);
  atexit((_func_5014 *)&LAB_143eadd80);
  return;
}



// FUNCTION 140340570 FUN_140340570 body=51 status=ok
// SIG undefined FUN_140340570(void)

void FUN_140340570(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af57b8,4000);
  atexit((_func_5014 *)&LAB_143eadda0);
  return;
}



// FUNCTION 1403405b0 FUN_1403405b0 body=170 status=ok
// SIG undefined FUN_1403405b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403405b0(void)

{
  FShaderType::FShaderType
            (&DAT_146af5b50,0,L"FGbxZoneMapFODFillCS<1 GBX_COMMA ZMFM_FODClear>",
             L"/Engine/Private/GbxZoneMapFODFillCS.usf",L"CSMainFOD",5,1,FUN_142499320,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5b50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af5c80 = FUN_142498c60;
  _DAT_146af5c88 = &LAB_1424ad6d0;
  _DAT_146af5c90 = BuildSettings::IsPromotedBuild;
  _DAT_146af5c98 = FUN_1424a4530;
  atexit((_func_5014 *)&LAB_143eaddb0);
  return;
}



// FUNCTION 140340660 FUN_140340660 body=170 status=ok
// SIG undefined FUN_140340660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340660(void)

{
  FShaderType::FShaderType
            (&DAT_146af5ca0,0,L"FGbxZoneMapFODFillCS<1 GBX_COMMA ZMFM_FODTexture>",
             L"/Engine/Private/GbxZoneMapFODFillCS.usf",L"CSMainFOD",5,1,FUN_142499320,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5ca0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af5dd0 = FUN_142498c60;
  _DAT_146af5dd8 = &LAB_1424ad6d0;
  _DAT_146af5de0 = BuildSettings::IsPromotedBuild;
  _DAT_146af5de8 = FUN_1424a4630;
  atexit((_func_5014 *)&LAB_143eaddc0);
  return;
}



// FUNCTION 140340710 FUN_140340710 body=170 status=ok
// SIG undefined FUN_140340710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340710(void)

{
  FShaderType::FShaderType
            (&DAT_146af5df0,0,L"FGbxZoneMapFODFillCS<1 GBX_COMMA ZMFM_ChunkMapDiscovered>",
             L"/Engine/Private/GbxZoneMapFODFillCS.usf",L"CSMainChunkMapDiscovered",5,1,
             FUN_142499320,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5df0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af5f20 = FUN_142498c60;
  _DAT_146af5f28 = &LAB_1424ad6d0;
  _DAT_146af5f30 = BuildSettings::IsPromotedBuild;
  _DAT_146af5f38 = FUN_1424a4730;
  atexit((_func_5014 *)&LAB_143eaddd0);
  return;
}



// FUNCTION 1403407c0 FUN_1403407c0 body=170 status=ok
// SIG undefined FUN_1403407c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403407c0(void)

{
  FShaderType::FShaderType
            (&DAT_146af5f40,0,L"FGbxZoneMapFODFillCS<1 GBX_COMMA ZMFM_ChunkMapValidTexels>",
             L"/Engine/Private/GbxZoneMapFODFillCS.usf",L"CSMainChunkMapValidTexels",5,1,
             FUN_142499320,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af5f40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6070 = FUN_142498c60;
  _DAT_146af6078 = &LAB_1424ad6d0;
  _DAT_146af6080 = BuildSettings::IsPromotedBuild;
  _DAT_146af6088 = FUN_1424a4830;
  atexit((_func_5014 *)&LAB_143eadde0);
  return;
}



// FUNCTION 140340870 FUN_140340870 body=170 status=ok
// SIG undefined FUN_140340870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340870(void)

{
  FShaderType::FShaderType
            (&DAT_146af6090,0,L"FGbxZoneMapFODFillCS<1 GBX_COMMA ZMFM_ChunkMapAccumulatedDiscovery>"
             ,L"/Engine/Private/GbxZoneMapFODFillCS.usf",L"CSMainChunkMapAccumulatedDiscovery",5,1,
             FUN_142499320,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6090 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af61c0 = FUN_142498c60;
  _DAT_146af61c8 = &LAB_1424ad6d0;
  _DAT_146af61d0 = BuildSettings::IsPromotedBuild;
  _DAT_146af61d8 = FUN_1424a4930;
  atexit((_func_5014 *)&LAB_143eaddf0);
  return;
}



// FUNCTION 140340920 FUN_140340920 body=170 status=ok
// SIG undefined FUN_140340920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340920(void)

{
  FShaderType::FShaderType
            (&DAT_146af64b0,0,L"FGbxZoneMapFODReadbackCS<1>",
             L"/Engine/Private/GbxZoneMapFODReadbackCS.usf",L"ComputeShaderMain",5,1,FUN_1424993c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af64b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af65e0 = FUN_142498c90;
  _DAT_146af65e8 = &LAB_1424ad6d0;
  _DAT_146af65f0 = BuildSettings::IsPromotedBuild;
  _DAT_146af65f8 = FUN_1424a4a30;
  atexit((_func_5014 *)&LAB_143eade00);
  return;
}



// FUNCTION 1403409d0 FUN_1403409d0 body=170 status=ok
// SIG undefined FUN_1403409d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403409d0(void)

{
  FShaderType::FShaderType
            (&DAT_146af6600,0,L"FGbxZoneMapFODReadbackCS<2>",
             L"/Engine/Private/GbxZoneMapFODReadbackCS.usf",L"ComputeShaderMain",5,1,FUN_142499440,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6600 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6730 = FUN_142498db0;
  _DAT_146af6738 = &LAB_1424ad6d0;
  _DAT_146af6740 = BuildSettings::IsPromotedBuild;
  _DAT_146af6748 = FUN_1424a4a80;
  atexit((_func_5014 *)&LAB_143eade10);
  return;
}



// FUNCTION 140340a80 FUN_140340a80 body=170 status=ok
// SIG undefined FUN_140340a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340a80(void)

{
  FShaderType::FShaderType
            (&DAT_146af6750,0,L"FGbxZoneMapFODReadbackCS<4>",
             L"/Engine/Private/GbxZoneMapFODReadbackCS.usf",L"ComputeShaderMain",5,1,FUN_1424994c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6750 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6880 = FUN_142498ed0;
  _DAT_146af6888 = &LAB_1424ad6d0;
  _DAT_146af6890 = BuildSettings::IsPromotedBuild;
  _DAT_146af6898 = FUN_1424a4ad0;
  atexit((_func_5014 *)&LAB_143eade20);
  return;
}



// FUNCTION 140340b30 FUN_140340b30 body=170 status=ok
// SIG undefined FUN_140340b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340b30(void)

{
  FShaderType::FShaderType
            (&DAT_146af61e0,0,L"FGbxZoneMapFODReadbackCS<8>",
             L"/Engine/Private/GbxZoneMapFODReadbackCS.usf",L"ComputeShaderMain",5,1,FUN_142499540,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af61e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6310 = FUN_142498ff0;
  _DAT_146af6318 = &LAB_1424ad6d0;
  _DAT_146af6320 = BuildSettings::IsPromotedBuild;
  _DAT_146af6328 = FUN_1424a4b20;
  atexit((_func_5014 *)&LAB_143eade30);
  return;
}



// FUNCTION 140340be0 FUN_140340be0 body=170 status=ok
// SIG undefined FUN_140340be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340be0(void)

{
  FShaderType::FShaderType
            (&DAT_146af68a0,0,L"FGbxZoneMapFODReadbackCS<16>",
             L"/Engine/Private/GbxZoneMapFODReadbackCS.usf",L"ComputeShaderMain",5,1,FUN_1424995c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af68a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af69d0 = FUN_142499110;
  _DAT_146af69d8 = &LAB_1424ad6d0;
  _DAT_146af69e0 = BuildSettings::IsPromotedBuild;
  _DAT_146af69e8 = FUN_1424a4b70;
  atexit((_func_5014 *)&LAB_143eade40);
  return;
}



// FUNCTION 140340c90 FUN_140340c90 body=170 status=ok
// SIG undefined FUN_140340c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340c90(void)

{
  FShaderType::FShaderType
            (&DAT_146af6f30,0,L"FGbxZoneMapFODUpdateCS<1 GBX_COMMA true>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_142499640,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6f30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af7060 = FUN_142499230;
  _DAT_146af7068 = &LAB_1424ad6d0;
  _DAT_146af7070 = BuildSettings::IsPromotedBuild;
  _DAT_146af7078 = FUN_1424a4bc0;
  atexit((_func_5014 *)&LAB_143eade50);
  return;
}



// FUNCTION 140340d40 FUN_140340d40 body=170 status=ok
// SIG undefined FUN_140340d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340d40(void)

{
  FShaderType::FShaderType
            (&DAT_146af69f0,0,L"FGbxZoneMapFODUpdateCS<1 GBX_COMMA false>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_142499640,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af69f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6b20 = FUN_142499230;
  _DAT_146af6b28 = &LAB_1424ad6d0;
  _DAT_146af6b30 = BuildSettings::IsPromotedBuild;
  _DAT_146af6b38 = FUN_1424a4c50;
  atexit((_func_5014 *)&LAB_143eade60);
  return;
}



// FUNCTION 140340df0 FUN_140340df0 body=170 status=ok
// SIG undefined FUN_140340df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340df0(void)

{
  FShaderType::FShaderType
            (&DAT_146af7080,0,L"FGbxZoneMapFODUpdateCS<2 GBX_COMMA true>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_1424996e0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af7080 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af71b0 = FUN_142499260;
  _DAT_146af71b8 = &LAB_1424ad6d0;
  _DAT_146af71c0 = BuildSettings::IsPromotedBuild;
  _DAT_146af71c8 = FUN_1424a4ce0;
  atexit((_func_5014 *)&LAB_143eade70);
  return;
}



// FUNCTION 140340ea0 FUN_140340ea0 body=170 status=ok
// SIG undefined FUN_140340ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340ea0(void)

{
  FShaderType::FShaderType
            (&DAT_146af6b40,0,L"FGbxZoneMapFODUpdateCS<2 GBX_COMMA false>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_1424996e0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6b40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6c70 = FUN_142499260;
  _DAT_146af6c78 = &LAB_1424ad6d0;
  _DAT_146af6c80 = BuildSettings::IsPromotedBuild;
  _DAT_146af6c88 = FUN_1424a4d70;
  atexit((_func_5014 *)&LAB_143eade80);
  return;
}



// FUNCTION 140340f50 FUN_140340f50 body=170 status=ok
// SIG undefined FUN_140340f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140340f50(void)

{
  FShaderType::FShaderType
            (&DAT_146af71d0,0,L"FGbxZoneMapFODUpdateCS<4 GBX_COMMA true>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_142499780,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af71d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af7300 = FUN_142499290;
  _DAT_146af7308 = &LAB_1424ad6d0;
  _DAT_146af7310 = BuildSettings::IsPromotedBuild;
  _DAT_146af7318 = FUN_1424a4e00;
  atexit((_func_5014 *)&LAB_143eade90);
  return;
}



// FUNCTION 140341000 FUN_140341000 body=170 status=ok
// SIG undefined FUN_140341000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341000(void)

{
  FShaderType::FShaderType
            (&DAT_146af6c90,0,L"FGbxZoneMapFODUpdateCS<4 GBX_COMMA false>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_142499780,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6c90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6dc0 = FUN_142499290;
  _DAT_146af6dc8 = &LAB_1424ad6d0;
  _DAT_146af6dd0 = BuildSettings::IsPromotedBuild;
  _DAT_146af6dd8 = FUN_1424a4e90;
  atexit((_func_5014 *)&LAB_143eadea0);
  return;
}



// FUNCTION 1403410b0 FUN_1403410b0 body=170 status=ok
// SIG undefined FUN_1403410b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403410b0(void)

{
  FShaderType::FShaderType
            (&DAT_146af7320,0,L"FGbxZoneMapFODUpdateCS<8 GBX_COMMA true>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_142499820,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af7320 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af7450 = FUN_1424992c0;
  _DAT_146af7458 = &LAB_1424ad6d0;
  _DAT_146af7460 = BuildSettings::IsPromotedBuild;
  _DAT_146af7468 = FUN_1424a4f20;
  atexit((_func_5014 *)&LAB_143eadeb0);
  return;
}



// FUNCTION 140341160 FUN_140341160 body=170 status=ok
// SIG undefined FUN_140341160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341160(void)

{
  FShaderType::FShaderType
            (&DAT_146af6de0,0,L"FGbxZoneMapFODUpdateCS<8 GBX_COMMA false>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_142499820,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6de0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6f10 = FUN_1424992c0;
  _DAT_146af6f18 = &LAB_1424ad6d0;
  _DAT_146af6f20 = BuildSettings::IsPromotedBuild;
  _DAT_146af6f28 = FUN_1424a4fb0;
  atexit((_func_5014 *)&LAB_143eadec0);
  return;
}



// FUNCTION 140341210 FUN_140341210 body=170 status=ok
// SIG undefined FUN_140341210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341210(void)

{
  FShaderType::FShaderType
            (&DAT_146af7470,0,L"FGbxZoneMapFODUpdateCS<16 GBX_COMMA true>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_1424998c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af7470 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af75a0 = FUN_1424992f0;
  _DAT_146af75a8 = &LAB_1424ad6d0;
  _DAT_146af75b0 = BuildSettings::IsPromotedBuild;
  _DAT_146af75b8 = FUN_1424a5040;
  atexit((_func_5014 *)&LAB_143eaded0);
  return;
}



// FUNCTION 1403412c0 FUN_1403412c0 body=170 status=ok
// SIG undefined FUN_1403412c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403412c0(void)

{
  FShaderType::FShaderType
            (&DAT_146af6360,0,L"FGbxZoneMapFODUpdateCS<16 GBX_COMMA false>",
             L"/Engine/Private/GbxZoneMapFODUpdateCS.usf",L"ComputeShaderMain",5,1,FUN_1424998c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af6360 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af6490 = FUN_1424992f0;
  _DAT_146af6498 = &LAB_1424ad6d0;
  _DAT_146af64a0 = BuildSettings::IsPromotedBuild;
  _DAT_146af64a8 = FUN_1424a50d0;
  atexit((_func_5014 *)&LAB_143eadee0);
  return;
}



// FUNCTION 140341370 FUN_140341370 body=112 status=ok
// SIG undefined FUN_140341370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341370(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5710 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.ShowAllStalls",0,
                  L"0: Only stalls on stalled bounding thread are shown1: All stalls are shown",0);
  _DAT_146af5708 = &PTR_FUN_143f3ecf8;
  _DAT_146af5718 = (**(code **)(*DAT_146af5710 + 0x38))(DAT_146af5710);
  atexit(FUN_143eadef0);
  return;
}



// FUNCTION 1403413e0 FUN_1403413e0 body=112 status=ok
// SIG undefined FUN_1403413e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403413e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5680 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.ShowRawStats",0,
                  L"0: Average stats are shown on screen1: Raw stats are shown on screen",0);
  _DAT_146af5678 = &PTR_FUN_143f3ecf8;
  DAT_146af5688 = (**(code **)(*DAT_146af5680 + 0x38))(DAT_146af5680);
  atexit(FUN_143eadf40);
  return;
}



// FUNCTION 140341450 FUN_140341450 body=112 status=ok
// SIG undefined FUN_140341450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341450(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5698 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.ShowStats",0,
                  L"0: Nothing shown on screen1: FPS stat shown on screen2: Full stats shown on screen 3: Maybe something extra? :)"
                  ,0);
  _DAT_146af5690 = &PTR_FUN_143f3ecf8;
  DAT_146af56a0 = (**(code **)(*DAT_146af5698 + 0x38))(DAT_146af5698);
  atexit(FUN_143eadf90);
  return;
}



// FUNCTION 1403414c0 FUN_1403414c0 body=112 status=ok
// SIG undefined FUN_1403414c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403414c0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af56e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.ShowStatsEditor",0,
                  L"0: Nothing shown in editor1: Value from GbxCoreStat.ShowStats is used for stats level"
                  ,0);
  _DAT_146af56d8 = &PTR_FUN_143f3ecf8;
  _DAT_146af56e8 = (**(code **)(*DAT_146af56e0 + 0x38))(DAT_146af56e0);
  atexit(FUN_143eadfe0);
  return;
}



// FUNCTION 140341530 FUN_140341530 body=115 status=ok
// SIG undefined FUN_140341530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341530(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af56f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.ShowStatsWhenBenchmarking",2,&DAT_1450bd904,0);
  _DAT_146af56f0 = &PTR_FUN_143f3ecf8;
  DAT_146af5700 = (**(code **)(*DAT_146af56f8 + 0x38))(DAT_146af56f8);
  atexit(FUN_143eae030);
  return;
}



// FUNCTION 1403415b0 FUN_1403415b0 body=112 status=ok
// SIG undefined FUN_1403415b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403415b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af56c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.StatsFont",0,L"0: Monospace, 1: UnitStatFont",0);
  _DAT_146af56c0 = &PTR_FUN_143f3ecf8;
  _DAT_146af56d0 = (**(code **)(*DAT_146af56c8 + 0x38))(DAT_146af56c8);
  atexit(FUN_143eae080);
  return;
}



// FUNCTION 140341620 FUN_140341620 body=115 status=ok
// SIG undefined FUN_140341620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341620(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af56b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxCoreStat.StatsFontSize",10,L"Font size for on screen stats",0);
  _DAT_146af56a8 = &PTR_FUN_143f3ecf8;
  DAT_146af56b8 = (**(code **)(*DAT_146af56b0 + 0x38))(DAT_146af56b0);
  atexit(FUN_143eae0d0);
  return;
}



// FUNCTION 1403416a0 FUN_1403416a0 body=117 status=ok
// SIG undefined FUN_1403416a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403416a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5728 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GbxCoreStat.StatsPosX",0x3f0ccccd,
                  L"PosX = View.SizeX * GbxCoreStat.StatsPosX",0);
  _DAT_146af5720 = &PTR_FUN_143f3ecf8;
  _DAT_146af5730 = (**(code **)(*DAT_146af5728 + 0x40))(DAT_146af5728);
  atexit(FUN_143eae120);
  return;
}



// FUNCTION 140341720 FUN_140341720 body=112 status=ok
// SIG undefined FUN_140341720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341720(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5740 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GbxCoreStat.StatsPosY",0,
                  L"PosY = View.SizeY * GbxCoreStat.StatsPosY",0);
  _DAT_146af5738 = &PTR_FUN_143f3ecf8;
  DAT_146af5748 = (**(code **)(*DAT_146af5740 + 0x40))(DAT_146af5740);
  atexit(FUN_143eae170);
  return;
}



// FUNCTION 140341790 FUN_140341790 body=112 status=ok
// SIG undefined FUN_140341790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341790(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af57a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.FlushLogsWhileLoading",0,
                  L"0: Disabled, 1: Logs are flushed every frame when we are playing loading movies"
                  ,0);
  _DAT_146af57a0 = &PTR_FUN_143f3ecf8;
  _DAT_146af57b0 = (**(code **)(*DAT_146af57a8 + 0x38))(DAT_146af57a8);
  atexit(FUN_143eae1c0);
  return;
}



// FUNCTION 140341800 FUN_140341800 body=115 status=ok
// SIG undefined FUN_140341800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341800(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5790 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.ForceAlwaysFrameScope",1,
                  L"0: Disabled, 1: Enabled when FrameScopeHandler is RFSH_Slate, 2: Always enabled"
                  ,0);
  _DAT_146af5788 = &PTR_FUN_143f3ecf8;
  DAT_146af5798 = (**(code **)(*DAT_146af5790 + 0x38))(DAT_146af5790);
  atexit(FUN_143eae210);
  return;
}



// FUNCTION 140341880 FUN_140341880 body=115 status=ok
// SIG undefined FUN_140341880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341880(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5778 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.HandleFrameScoping",1,
                  L"0: Disabled, 1: Enabled when !WITH_EDITOR, 2: Always enabled",0);
  _DAT_146af5770 = &PTR_FUN_143f3ecf8;
  DAT_146af5780 = (**(code **)(*DAT_146af5778 + 0x38))(DAT_146af5778);
  atexit(FUN_143eae260);
  return;
}



// FUNCTION 140341900 FUN_140341900 body=115 status=ok
// SIG undefined FUN_140341900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341900(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af59c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.AllowReadbacks",1,&DAT_1450bd0a4,0);
  _DAT_146af59b8 = &PTR_FUN_143f3ecf8;
  DAT_146af59c8 = (**(code **)(*DAT_146af59c0 + 0x38))(DAT_146af59c0);
  atexit(FUN_143eae2b0);
  return;
}



// FUNCTION 140341980 FUN_140341980 body=117 status=ok
// SIG undefined FUN_140341980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341980(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5930 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ZoneMap.FOD.ChunkCacheIntervalSeconds",0x3e800000,
                  L"Min wait time between reading back data from FOD texture",0);
  _DAT_146af5928 = &PTR_FUN_143f3ecf8;
  DAT_146af5938 = (**(code **)(*DAT_146af5930 + 0x40))(DAT_146af5930);
  atexit(FUN_143eae300);
  return;
}



// FUNCTION 140341a00 FUN_140341a00 body=117 status=ok
// SIG undefined FUN_140341a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341a00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af58b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ZoneMap.FOD.ChunkFullDiscoveryThreshold",0x3f7ae148,
                  L"If percentage of full discovered texels OR percentage of accumulated discovery for a chunk is >= this percentage, the chunk will be considered fully discovered"
                  ,0);
  _DAT_146af58b0 = &PTR_FUN_143f3ecf8;
  DAT_146af58c0 = (**(code **)(*DAT_146af58b8 + 0x40))(DAT_146af58b8);
  atexit(FUN_143eae350);
  return;
}



// FUNCTION 140341a80 FUN_140341a80 body=117 status=ok
// SIG undefined FUN_140341a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341a80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5948 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ZoneMap.FOD.ChunkMapCacheIntervalSeconds",0x3f800000,
                  L"Min wait time between reading back data from ChunkMap texture",0);
  _DAT_146af5940 = &PTR_FUN_143f3ecf8;
  DAT_146af5950 = (**(code **)(*DAT_146af5948 + 0x40))(DAT_146af5948);
  atexit(FUN_143eae3a0);
  return;
}



// FUNCTION 140341b00 `dynamic_initializer_for_'CVarRHICmdMinDrawsPerParallelCmdList'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdMinDrawsPerParallelCmdList''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdMinDrawsPerParallelCmdList__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af58a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.ChunkSize",0x40,
                  L"FODTexture is divided up to chunks based on ChunkSize. Must be power of 2! 512 FOD Texture with 64 ChunkSize will result in a 8x8 ChunkMap, for example"
                  ,0);
  _DAT_146af5898 = &PTR_FUN_143f3ecf8;
  DAT_146af58a8 = (**(code **)(*DAT_146af58a0 + 0x38))(DAT_146af58a0);
  atexit(FUN_143eae3f0);
  return;
}



// FUNCTION 140341b80 FUN_140341b80 body=116 status=ok
// SIG undefined FUN_140341b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341b80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5990 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.CompressionMode",DAT_14653287c,&DAT_1450bd024,0);
  _DAT_146af5988 = &PTR_FUN_143f3ecf8;
  DAT_146af5998 = (**(code **)(*DAT_146af5990 + 0x38))(DAT_146af5990);
  atexit(FUN_143eae440);
  return;
}



// FUNCTION 140341c00 FUN_140341c00 body=117 status=ok
// SIG undefined FUN_140341c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341c00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af58d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ZoneMap.FOD.DiscoveryRadiusXY",0x44bb8000,
                  L"Default FOD discovery radius for XY. If it\'s negative it\'ll be used as an override."
                  ,0);
  _DAT_146af58c8 = &PTR_FUN_143f3ecf8;
  DAT_146af58d8 = (**(code **)(*DAT_146af58d0 + 0x40))(DAT_146af58d0);
  atexit(FUN_143eae490);
  return;
}



// FUNCTION 140341c80 FUN_140341c80 body=112 status=ok
// SIG undefined FUN_140341c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341c80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af58e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ZoneMap.FOD.DiscoveryRadiusZ",0,
                  L"Same behavior as DiscoveryRadiusXY, except that if value is 0, DiscoveryRadiusXY will be used"
                  ,0);
  _DAT_146af58e0 = &PTR_FUN_143f3ecf8;
  DAT_146af58f0 = (**(code **)(*DAT_146af58e8 + 0x40))(DAT_146af58e8);
  atexit(FUN_143eae4e0);
  return;
}



// FUNCTION 140341cf0 FUN_140341cf0 body=115 status=ok
// SIG undefined FUN_140341cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341cf0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5888 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.Enabled",1,L"0: off 1: game 2: editor 3: editor+game",
                  0);
  _DAT_146af5880 = &PTR_FUN_143f3ecf8;
  DAT_146af5890 = (**(code **)(*DAT_146af5888 + 0x38))(DAT_146af5888);
  atexit(FUN_143eae530);
  return;
}



// FUNCTION 140341d70 FUN_140341d70 body=115 status=ok
// SIG undefined FUN_140341d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341d70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5918 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.FrameDelayBeforeMappingCPUTexture",3,&DAT_1450bcfcc,0)
  ;
  _DAT_146af5910 = &PTR_FUN_143f3ecf8;
  DAT_146af5920 = (**(code **)(*DAT_146af5918 + 0x38))(DAT_146af5918);
  atexit(FUN_143eae580);
  return;
}



// FUNCTION 140341df0 FUN_140341df0 body=115 status=ok
// SIG undefined FUN_140341df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341df0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5900 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.FrameDelayBeforeResolvingCPUTexture",2,&DAT_1450bcfa4,
                  0);
  _DAT_146af58f8 = &PTR_FUN_143f3ecf8;
  DAT_146af5908 = (**(code **)(*DAT_146af5900 + 0x38))(DAT_146af5900);
  atexit(FUN_143eae5d0);
  return;
}



// FUNCTION 140341e70 FUN_140341e70 body=115 status=ok
// SIG undefined FUN_140341e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341e70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af59a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.RHIMapBehavior",1,&DAT_1450bd04c,0);
  _DAT_146af59a0 = &PTR_FUN_143f3ecf8;
  DAT_146af59b0 = (**(code **)(*DAT_146af59a8 + 0x38))(DAT_146af59a8);
  atexit(FUN_143eae620);
  return;
}



// FUNCTION 140341ef0 FUN_140341ef0 body=117 status=ok
// SIG undefined FUN_140341ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341ef0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5960 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ZoneMap.FOD.UpdateIntervalSeconds",0x3dcccccd,
                  L"Min wait time between reading back data from ChunkMap texture",0);
  _DAT_146af5958 = &PTR_FUN_143f3ecf8;
  DAT_146af5968 = (**(code **)(*DAT_146af5960 + 0x40))(DAT_146af5960);
  atexit(FUN_143eae670);
  return;
}



// FUNCTION 140341f70 FUN_140341f70 body=115 status=ok
// SIG undefined FUN_140341f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341f70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5978 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ZoneMap.FOD.UpdateMethod",1,
                  L"0: FogOfDiscoveryComponent FODTexture updates only. 1: GbxZoneMapFODManager FODTexture updates only. 2: Both"
                  ,0);
  _DAT_146af5970 = &PTR_FUN_143f3ecf8;
  DAT_146af5980 = (**(code **)(*DAT_146af5978 + 0x38))(DAT_146af5978);
  atexit(FUN_143eae6c0);
  return;
}



// FUNCTION 140341ff0 FUN_140341ff0 body=100 status=ok
// SIG undefined FUN_140341ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140341ff0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af5858 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ZoneMap.Version",&DAT_146532870,&DAT_1450bd22c,4);
  _DAT_146af5850 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eae710);
  return;
}



// FUNCTION 140342160 FUN_140342160 body=158 status=ok
// SIG undefined FUN_140342160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140342160(void)

{
  char cVar1;
  
  FUN_1424b32a0(&DAT_146af89b0);
  _DAT_146af8e08 = 0;
  _DAT_146af89b0 = &PTR__scalar_deleting_destructor__1450cd4e0;
  _DAT_146af8e18 = 4;
  _DAT_146af8e00 = &PTR_LAB_1450cd4e8;
  DAT_146af8e10 = &PTR_LAB_1450cd510;
  _DAT_146af8e20 = 0;
  uRam0000000146af8e28 = 0;
  DAT_146af8e38 = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (*(code *)DAT_146af8e10[5])();
    atexit(FUN_143eae920);
    return;
  }
  FUN_141edf270(&DAT_146af8e10);
  atexit(FUN_143eae920);
  return;
}



// FUNCTION 140342200 FUN_140342200 body=277 status=ok
// SIG undefined FUN_140342200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140342200(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_1424bdbf0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146af78b8 = &PTR_FUN_143f3ece8;
  DAT_146af78c0 = &local_18;
  _DAT_146af78c8 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146af78c0);
  _DAT_146af78c8 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140342304;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140342304:
  atexit((_func_5014 *)&LAB_143eae9c0);
  return;
}



// FUNCTION 140342320 FUN_140342320 body=51 status=ok
// SIG undefined FUN_140342320(void)

void FUN_140342320(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c48);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af9c48,4000);
  atexit((_func_5014 *)&LAB_143eae9d0);
  return;
}



// FUNCTION 140342360 FUN_140342360 body=158 status=ok
// SIG undefined FUN_140342360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140342360(void)

{
  char cVar1;
  
  FUN_1424b32a0(&DAT_146af8ff0);
  _DAT_146af9448 = 0;
  _DAT_146af8ff0 = &PTR__scalar_deleting_destructor__1450cd4e0;
  _DAT_146af9458 = 4;
  _DAT_146af9440 = &PTR_LAB_1450cd4e8;
  DAT_146af9450 = &PTR_LAB_1450cd510;
  _DAT_146af9460 = 0;
  uRam0000000146af9468 = 0;
  DAT_146af9478 = 0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (*(code *)DAT_146af9450[5])();
    atexit(FUN_143eae9e0);
    return;
  }
  FUN_141edf270(&DAT_146af9450);
  atexit(FUN_143eae9e0);
  return;
}



// FUNCTION 140342410 StaticStruct'' body=132 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FAPEXClothUniformShaderParameters::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  uVar1 = FName::FName(local_res8,L"FAPEXClothUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146af7a60,uVar1,L"FAPEXClothUniformShaderParameters",L"APEXClothParam",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x10,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eaeaa0);
  return;
}



// FUNCTION 1403424a0 StaticStruct'' body=252 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FBoneMatricesUniformShaderParameters::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  undefined8 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined2 *puStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_40 = 1;
  local_48 = (undefined8 *)0x0;
  local_38 = L"BoneMatrices";
  puStack_30 = &DAT_143f3eda8;
  local_28 = 0;
  uStack_24 = 4;
  uStack_1c = 3;
  local_18 = 4;
  uStack_14 = 0x4b;
  uStack_10 = 0;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,0);
  *local_48 = local_38;
  local_48[1] = puStack_30;
  *(undefined4 *)(local_48 + 2) = local_28;
  *(undefined4 *)((longlong)local_48 + 0x14) = (undefined4)uStack_24;
  *(undefined4 *)(local_48 + 3) = uStack_24._4_4_;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uStack_1c;
  *(undefined4 *)(local_48 + 4) = local_18;
  *(undefined4 *)((longlong)local_48 + 0x24) = uStack_14;
  *(undefined4 *)(local_48 + 5) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_10._4_4_;
  uVar1 = FName::FName(local_res8,L"FBoneMatricesUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146af7b00,uVar1,L"FBoneMatricesUniformShaderParameters",L"Bones",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0xe10,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eaeab0);
  return;
}



// FUNCTION 1403425a0 StaticStruct'' body=137 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FRadixSortParameters::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  FRadixSortParameters::zzGetMembersBefore(local_18,local_res8[0]);
  uVar1 = FName::FName(local_res8,L"FRadixSortParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146af9480,uVar1,L"FRadixSortParameters",L"RadixSortUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x20,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eaeac0);
  return;
}



// FUNCTION 140342630 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa8d0,0,L"FRecomputeTangentsPerTrianglePassCS<1>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa8d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afaa00 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afaa08 = &LAB_1424d3ea0;
  _DAT_146afaa10 = BuildSettings::IsPromotedBuild;
  _DAT_146afaa18 = FRecomputeTangentsPerTrianglePassCS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaead0);
  return;
}



// FUNCTION 1403426e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afaa20,0,L"FRecomputeTangentsPerTrianglePassCS<2>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afaa20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afab50 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afab58 = &LAB_1424d3ea0;
  _DAT_146afab60 = BuildSettings::IsPromotedBuild;
  _DAT_146afab68 = FRecomputeTangentsPerTrianglePassCS<2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeae0);
  return;
}



// FUNCTION 140342790 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afab70,0,L"FRecomputeTangentsPerTrianglePassCS<3>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afab70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afaca0 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afaca8 = &LAB_1424d3ea0;
  _DAT_146afacb0 = BuildSettings::IsPromotedBuild;
  _DAT_146afacb8 = FRecomputeTangentsPerTrianglePassCS<3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeaf0);
  return;
}



// FUNCTION 140342840 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afacc0,0,L"FRecomputeTangentsPerTrianglePassCS<4>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afacc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afadf0 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afadf8 = &LAB_1424d3ea0;
  _DAT_146afae00 = BuildSettings::IsPromotedBuild;
  _DAT_146afae08 = FRecomputeTangentsPerTrianglePassCS<4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb00);
  return;
}



// FUNCTION 1403428f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afae10,0,L"FRecomputeTangentsPerTrianglePassCS<5>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afae10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afaf40 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afaf48 = &LAB_1424d3ea0;
  _DAT_146afaf50 = BuildSettings::IsPromotedBuild;
  _DAT_146afaf58 = FRecomputeTangentsPerTrianglePassCS<5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb10);
  return;
}



// FUNCTION 1403429a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afaf60,0,L"FRecomputeTangentsPerTrianglePassCS<6>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afaf60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afb090 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afb098 = &LAB_1424d3ea0;
  _DAT_146afb0a0 = BuildSettings::IsPromotedBuild;
  _DAT_146afb0a8 = FRecomputeTangentsPerTrianglePassCS<6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb20);
  return;
}



// FUNCTION 140342a50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<7>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afb0b0,0,L"FRecomputeTangentsPerTrianglePassCS<7>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afb0b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afb1e0 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afb1e8 = &LAB_1424d3ea0;
  _DAT_146afb1f0 = BuildSettings::IsPromotedBuild;
  _DAT_146afb1f8 = FRecomputeTangentsPerTrianglePassCS<7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb30);
  return;
}



// FUNCTION 140342b00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerTrianglePassCS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa780,0,L"FRecomputeTangentsPerTrianglePassCS<0>",
             L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
             FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa780 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa8b0 = FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance;
  _DAT_146afa8b8 = &LAB_1424d3ea0;
  _DAT_146afa8c0 = BuildSettings::IsPromotedBuild;
  _DAT_146afa8c8 = FRecomputeTangentsPerTrianglePassCS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb40);
  return;
}



// FUNCTION 140342bb0 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'TGPUSkinAPEXClothVertexFactory<1>::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afb8c0,L"TGPUSkinAPEXClothVertexFactorytrue",
             L"/Engine/Private/GpuSkinVertexFactory.ush",1,0,1,0,0,FUN_1424b1770,FUN_1424d3c40,
             FUN_1424cace0,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaeb50);
  return;
}



// FUNCTION 140342c30 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'TGPUSkinAPEXClothVertexFactory<0>::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afba70,L"TGPUSkinAPEXClothVertexFactoryfalse",
             L"/Engine/Private/GpuSkinVertexFactory.ush",1,0,1,0,0,FUN_1424b1770,FUN_1424d3cc0,
             FUN_1424cadb0,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaeb60);
  return;
}



// FUNCTION 140342cb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TGPUSkinCacheCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa0f0,0,L"TGPUSkinCacheCS<1>",L"/Engine/Private/GpuSkinCacheComputeShader.usf"
             ,L"SkinCacheUpdateBatchCS",5,1,TGPUSkinCacheCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa0f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa220 = TGPUSkinCacheCS<1>::ConstructCompiledInstance;
  _DAT_146afa228 = TGPUSkinCacheCS<1>::ShouldCompilePermutation;
  _DAT_146afa230 = BuildSettings::IsPromotedBuild;
  _DAT_146afa238 = TGPUSkinCacheCS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb70);
  return;
}



// FUNCTION 140342d60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TGPUSkinCacheCS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa240,0,L"TGPUSkinCacheCS<2>",L"/Engine/Private/GpuSkinCacheComputeShader.usf"
             ,L"SkinCacheUpdateBatchCS",5,1,TGPUSkinCacheCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa240 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa370 = TGPUSkinCacheCS<1>::ConstructCompiledInstance;
  _DAT_146afa378 = TGPUSkinCacheCS<1>::ShouldCompilePermutation;
  _DAT_146afa380 = BuildSettings::IsPromotedBuild;
  _DAT_146afa388 = TGPUSkinCacheCS<2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb80);
  return;
}



// FUNCTION 140342e10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TGPUSkinCacheCS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa390,0,L"TGPUSkinCacheCS<4>",L"/Engine/Private/GpuSkinCacheComputeShader.usf"
             ,L"SkinCacheUpdateBatchCS",5,1,TGPUSkinCacheCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa390 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa4c0 = TGPUSkinCacheCS<1>::ConstructCompiledInstance;
  _DAT_146afa4c8 = TGPUSkinCacheCS<1>::ShouldCompilePermutation;
  _DAT_146afa4d0 = BuildSettings::IsPromotedBuild;
  _DAT_146afa4d8 = TGPUSkinCacheCS<4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeb90);
  return;
}



// FUNCTION 140342ec0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TGPUSkinCacheCS<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa4e0,0,L"TGPUSkinCacheCS<5>",L"/Engine/Private/GpuSkinCacheComputeShader.usf"
             ,L"SkinCacheUpdateBatchCS",5,1,TGPUSkinCacheCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa4e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa610 = TGPUSkinCacheCS<1>::ConstructCompiledInstance;
  _DAT_146afa618 = TGPUSkinCacheCS<1>::ShouldCompilePermutation;
  _DAT_146afa620 = BuildSettings::IsPromotedBuild;
  _DAT_146afa628 = TGPUSkinCacheCS<5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaeba0);
  return;
}



// FUNCTION 140342f70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TGPUSkinCacheCS<6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146afa630,0,L"TGPUSkinCacheCS<6>",L"/Engine/Private/GpuSkinCacheComputeShader.usf"
             ,L"SkinCacheUpdateBatchCS",5,1,TGPUSkinCacheCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146afa630 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa760 = TGPUSkinCacheCS<1>::ConstructCompiledInstance;
  _DAT_146afa768 = TGPUSkinCacheCS<1>::ShouldCompilePermutation;
  _DAT_146afa770 = BuildSettings::IsPromotedBuild;
  _DAT_146afa778 = TGPUSkinCacheCS<6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaebb0);
  return;
}



// FUNCTION 140343020 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TGPUSkinCacheCS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af9fa0,0,L"TGPUSkinCacheCS<0>",L"/Engine/Private/GpuSkinCacheComputeShader.usf"
             ,L"SkinCacheUpdateBatchCS",5,1,TGPUSkinCacheCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af9fa0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146afa0d0 = TGPUSkinCacheCS<1>::ConstructCompiledInstance;
  _DAT_146afa0d8 = TGPUSkinCacheCS<1>::ShouldCompilePermutation;
  _DAT_146afa0e0 = BuildSettings::IsPromotedBuild;
  _DAT_146afa0e8 = TGPUSkinCacheCS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaebc0);
  return;
}



// FUNCTION 1403430d0 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'TGPUSkinMorphVertexFactory<1>::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afb710,L"TGPUSkinMorphVertexFactorytrue",
             L"/Engine/Private/GpuSkinVertexFactory.ush",1,0,1,0,0,FUN_1424b17e0,
             FSplineMeshVertexFactory::ShouldCompilePermutation,FUN_1424cb1d0,
             BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaebd0);
  return;
}



// FUNCTION 140343150 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'TGPUSkinMorphVertexFactory<0>::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afb560,L"TGPUSkinMorphVertexFactoryfalse",
             L"/Engine/Private/GpuSkinVertexFactory.ush",1,0,1,0,0,FUN_1424b17e0,FUN_1424d3dc0,
             FUN_1424cb2a0,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaebe0);
  return;
}



// FUNCTION 1403431d0 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'TGPUSkinVertexFactory<1>::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afb200,L"TGPUSkinVertexFactorytrue",L"/Engine/Private/GpuSkinVertexFactory.ush"
             ,1,0,1,0,0,FUN_1424b17e0,FUN_1424d3df0,FUN_1424cb370,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaebf0);
  return;
}



// FUNCTION 140343250 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'TGPUSkinVertexFactory<0>::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afb3b0,L"TGPUSkinVertexFactoryfalse",
             L"/Engine/Private/GpuSkinVertexFactory.ush",1,0,1,0,0,FUN_1424b17e0,
             FOutputDevice::CanBeUsedOnAnyThread,FUN_1424cb450,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaec00);
  return;
}



// FUNCTION 1403432d0 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FGPUSkinPassthroughVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146af8e40,L"FGPUSkinPassthroughVertexFactory",
             L"/Engine/Private/LocalVertexFactory.ush",1,0,1,0,0,FUN_1424bf820,FUN_1424d3ee0,
             FUN_1424cb530,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaec10);
  return;
}



// FUNCTION 140343350 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FGeometryCacheVertexVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146af7660,L"FGeometryCacheVertexVertexFactory",
             L"/Engine/Private/GeometryCacheVertexFactory.ush",1,0,1,0,1,
             ConstructFGeometryCacheVertexVertexFactoryShaderParameters,FUN_1424d3f80,
             AK::MemoryMgr::StartProfileThreadUsage,FOutputDevice::CanBeUsedOnAnyThread);
  atexit((_func_5014 *)&LAB_143eaec20);
  return;
}



// FUNCTION 1403433d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRadixSortClearOffsetsCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af9510,0,L"FRadixSortClearOffsetsCS",L"/Engine/Private/RadixSortShaders.usf",
             L"RadixSort_ClearOffsets",5,1,FResolveDepth2XPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af9510 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af9640 = FRadixSortClearOffsetsCS::ConstructCompiledInstance;
  _DAT_146af9648 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146af9650 = BuildSettings::IsPromotedBuild;
  _DAT_146af9658 = FUN_1424cb810;
  atexit((_func_5014 *)&LAB_143eaec30);
  return;
}



// FUNCTION 140343480 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRadixSortDownsweepCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af9900,0,L"FRadixSortDownsweepCS",L"/Engine/Private/RadixSortShaders.usf",
             L"RadixSort_Downsweep",5,1,FUN_141c48400,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af9900 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af9a30 = FRadixSortDownsweepCS::ConstructCompiledInstance;
  _DAT_146af9a38 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146af9a40 = BuildSettings::IsPromotedBuild;
  _DAT_146af9a48 = FRadixSortDownsweepCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaec40);
  return;
}



// FUNCTION 140343530 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRadixSortSpineCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af97b0,0,L"FRadixSortSpineCS",L"/Engine/Private/RadixSortShaders.usf",
             L"RadixSort_Spine",5,1,FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af97b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af98e0 = FRadixSortSpineCS::ConstructCompiledInstance;
  _DAT_146af98e8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146af98f0 = BuildSettings::IsPromotedBuild;
  _DAT_146af98f8 = FUN_1424cb8c0;
  atexit((_func_5014 *)&LAB_143eaec50);
  return;
}



// FUNCTION 1403435e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRadixSortUpsweepCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af9660,0,L"FRadixSortUpsweepCS",L"/Engine/Private/RadixSortShaders.usf",
             L"RadixSort_Upsweep",5,1,FUN_1424bf950,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af9660 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af9790 = FRadixSortUpsweepCS::ConstructCompiledInstance;
  _DAT_146af9798 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146af97a0 = BuildSettings::IsPromotedBuild;
  _DAT_146af97a8 = FUN_1424cb8f0;
  atexit((_func_5014 *)&LAB_143eaec60);
  return;
}



// FUNCTION 140343690 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRecomputeTangentsPerVertexPassCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146af78d0,0,L"FRecomputeTangentsPerVertexPassCS",
             L"/Engine/Private/RecomputeTangentsPerVertexPass.usf",L"MainCS",5,1,FUN_141b2e110,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146af78d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146af7a00 = FRecomputeTangentsPerVertexPassCS::ConstructCompiledInstance;
  _DAT_146af7a08 = &LAB_1424d3ea0;
  _DAT_146af7a10 = BuildSettings::IsPromotedBuild;
  _DAT_146af7a18 = FRecomputeTangentsPerVertexPassCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eaec70);
  return;
}



// FUNCTION 140343750 FUN_140343750 body=51 status=ok
// SIG undefined FUN_140343750(void)

void FUN_140343750(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af9c20,4000);
  atexit((_func_5014 *)&LAB_143eaeca0);
  return;
}



// FUNCTION 1403437a0 FUN_1403437a0 body=59 status=ok
// SIG undefined FUN_1403437a0(void)

void FUN_1403437a0(void)

{
  hkBaseSystem::InitNode::internalConstruct
            (&DAT_146af9ba8,"$hkCompatFormats",FUN_1424b3000,FUN_1424b3080,&DAT_146af9ba0,1);
  return;
}



// FUNCTION 1403437e0 `dynamic_initializer_for_'CVarCullAll'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCullAll''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCullAll__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9d70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.CullAll",0,
                  L"If greater than zero, everything is considered culled.",0x40);
  _DAT_146af9d68 = &PTR_FUN_143f3ecf8;
  DAT_146af9d78 = (**(code **)(*DAT_146af9d70 + 0x38))(DAT_146af9d70);
  atexit(FUN_143eaecc0);
  return;
}



// FUNCTION 140343850 `dynamic_initializer_for_'CVarDebugOffsets'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugOffsets''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDebugOffsets__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7af0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GPUSort.DebugOffsets",0,L"Debug GPU sort offsets.",0);
  _DAT_146af7ae8 = &PTR_FUN_143f3ecf8;
  DAT_146af7af8 = (**(code **)(*DAT_146af7af0 + 0x38))(DAT_146af7af0);
  atexit(FUN_143eaed10);
  return;
}



// FUNCTION 1403438c0 `dynamic_initializer_for_'CVarDebugSort'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugSort''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDebugSort__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7b90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GPUSort.DebugSort",0,L"Debug GPU sorting.",0);
  _DAT_146af7b88 = &PTR_FUN_143f3ecf8;
  DAT_146af7b98 = (**(code **)(*DAT_146af7b90 + 0x38))(DAT_146af7b90);
  atexit(FUN_143eaed60);
  return;
}



// FUNCTION 140343930 `dynamic_initializer_for_'CVarDisableCull'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDisableCull''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDisableCull__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9d58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.DisableCull",0,
                  L"If greater than zero, no culling occurs based on frustum.",0);
  _DAT_146af9d50 = &PTR_FUN_143f3ecf8;
  DAT_146af9d60 = (**(code **)(*DAT_146af9d58 + 0x38))(DAT_146af9d58);
  atexit(FUN_143eaedb0);
  return;
}



// FUNCTION 1403439a0 `dynamic_initializer_for_'CVarDitheredLOD'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDitheredLOD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDitheredLOD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9d88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.DitheredLOD",1,
                  L"If greater than zero, dithered LOD is used, otherwise popping LOD is used.",0);
  _DAT_146af9d80 = &PTR_FUN_143f3ecf8;
  DAT_146af9d90 = (**(code **)(*DAT_146af9d88 + 0x38))(DAT_146af9d88);
  atexit(FUN_143eaee00);
  return;
}



// FUNCTION 140343a20 `dynamic_initializer_for_'CVarEnableGPUSkinCache'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableGPUSkinCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableGPUSkinCache__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7828 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SkinCache.Mode",1,
                  L"Whether or not to use the GPU compute skinning cache.\nThis will perform skinning on a compute job and not skin on the vertex shader.\nRequires r.SkinCache.CompileShaders=1\n 0: off\n 1: on(default)\n 2: only use skin cache for skinned meshes that ticked the Recompute Tangents checkbox (unavailable in shipping builds)"
                  ,0x20);
  _DAT_146af7820 = &PTR_FUN_143f3ecf8;
  DAT_146af7830 = (**(code **)(*DAT_146af7828 + 0x38))(DAT_146af7828);
  atexit(FUN_143eaee50);
  return;
}



// FUNCTION 140343aa0 `dynamic_initializer_for_'CVarEnableGPUSkinCacheShaders'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableGPUSkinCacheShaders''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableGPUSkinCacheShaders__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7818 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SkinCache.CompileShaders",&DAT_146af7634,
                  L"Whether or not to compile the GPU compute skinning cache shaders.\nThis will compile the shaders for skinning on a compute job and not skin on the vertex shader.\nGPUSkinVertexFactory.usf needs to be touched to cause a recompile if this changes.\n0 is off(default), 1 is on"
                  ,0x24);
  _DAT_146af7810 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaeea0);
  return;
}



// FUNCTION 140343b10 `dynamic_initializer_for_'CVarFoliageDensityScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFoliageDensityScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFoliageDensityScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9e78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"foliage.DensityScale",0x3f800000,
                  L"Controls the amount of foliage to render. Foliage must opt-in to density scaling through the foliage type."
                  ,0x40);
  _DAT_146af9e70 = &PTR_FUN_143f3ecf8;
  DAT_146af9e80 = (**(code **)(*DAT_146af9e78 + 0x40))(DAT_146af9e78);
  atexit(FUN_143eaeef0);
  return;
}



// FUNCTION 140343b90 `dynamic_initializer_for_'CVarFoliageLODDistanceScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFoliageLODDistanceScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFoliageLODDistanceScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9de8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"foliage.LODDistanceScale",0x3f800000,
                  L"Scale factor for the distance used in computing LOD for foliage.",0);
  _DAT_146af9de0 = &PTR_FUN_143f3ecf8;
  DAT_146af9df0 = (**(code **)(*DAT_146af9de8 + 0x40))(DAT_146af9de8);
  atexit(FUN_143eaef40);
  return;
}



// FUNCTION 140343c10 `dynamic_initializer_for_'CVarFoliageMinimumScreenSize'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFoliageMinimumScreenSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFoliageMinimumScreenSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9dd0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"foliage.MinimumScreenSize",0x36a7c5ac,
                  L"This controls the screen size at which we cull foliage instances entirely.",0x40
                 );
  _DAT_146af9dc8 = &PTR_FUN_143f3ecf8;
  DAT_146af9dd8 = (**(code **)(*DAT_146af9dd0 + 0x40))(DAT_146af9dd0);
  atexit(FUN_143eaef90);
  return;
}



// FUNCTION 140343c90 FUN_140343c90 body=277 status=ok
// SIG undefined FUN_140343c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140343c90(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_1424c46b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146af9e88 = &PTR_FUN_143f3ece8;
  DAT_146af9e90 = &local_18;
  _DAT_146af9e98 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146af9e90);
  _DAT_146af9e98 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140343d94;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140343d94:
  atexit((_func_5014 *)&LAB_143eaefe0);
  return;
}



// FUNCTION 140343db0 `dynamic_initializer_for_'CVarFoliageSplitFactor'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFoliageSplitFactor''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFoliageSplitFactor__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9ca0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.SplitFactor",0x10,
                  L"This controls the branching factor of the foliage tree.",0);
  _DAT_146af9c98 = &PTR_FUN_143f3ecf8;
  DAT_146af9ca8 = (**(code **)(*DAT_146af9ca0 + 0x38))(DAT_146af9ca0);
  atexit(FUN_143eaeff0);
  return;
}



// FUNCTION 140343e30 `dynamic_initializer_for_'CVarForceLOD'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceLOD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceLOD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9d28 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.ForceLOD",0xffffffff,
                  L"If greater than or equal to zero, forces the foliage LOD to that level.",0);
  _DAT_146af9d20 = &PTR_FUN_143f3ecf8;
  DAT_146af9d30 = (**(code **)(*DAT_146af9d28 + 0x38))(DAT_146af9d28);
  atexit(FUN_143eaf040);
  return;
}



// FUNCTION 140343eb0 `dynamic_initializer_for_'CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af78b0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SkinCache.AllowDupedVertsForRecomputeTangents",&DAT_146af763c,
                  L"0: off (default)\n1: Forces that vertices at the same position will be treated differently and has the potential to cause seams when verts are split.\n"
                  ,0x20);
  _DAT_146af78a8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaf090);
  return;
}



// FUNCTION 140343f20 `dynamic_initializer_for_'CVarGPUSkinCacheDebug'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinCacheDebug''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinCacheDebug__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7880 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SkinCache.Debug",0x3f800000,
                  L"A scaling constant passed to the SkinCache shader, useful for debugging",0x20);
  _DAT_146af7878 = &PTR_FUN_143f3ecf8;
  DAT_146af7888 = (**(code **)(*DAT_146af7880 + 0x40))(DAT_146af7880);
  atexit(FUN_143eaf0e0);
  return;
}



// FUNCTION 140343fa0 `dynamic_initializer_for_'CVarGPUSkinCacheForceRecomputeTangents'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinCacheForceRecomputeTangents''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinCacheForceRecomputeTangents__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7858 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SkinCache.ForceRecomputeTangents",&DAT_146af7638,
                  L"0: off (default)\n1: Forces enabling and using the skincache and forces all skinned object to Recompute Tangents\n"
                  ,0x24);
  _DAT_146af7850 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaf130);
  return;
}



// FUNCTION 140344010 `dynamic_initializer_for_'CVarGPUSkinCacheRecomputeTangents'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinCacheRecomputeTangents''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinCacheRecomputeTangents__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7840 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SkinCache.RecomputeTangents",2,
                  L"This option enables recomputing the vertex tangents on the GPU.\nCan be changed at runtime, requires both r.SkinCache.CompileShaders=1 and r.SkinCache.Mode=1\n 0: off\n 1: on, forces all skinned object to Recompute Tangents\n 2: on, only recompute tangents on skinned objects who ticked the Recompute Tangents checkbox(default)\n"
                  ,0x20);
  _DAT_146af7838 = &PTR_FUN_143f3ecf8;
  DAT_146af7848 = (**(code **)(*DAT_146af7840 + 0x38))(DAT_146af7840);
  atexit(FUN_143eaf180);
  return;
}



// FUNCTION 140344090 `dynamic_initializer_for_'CVarGPUSkinCacheSceneMemoryLimitInMB'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinCacheSceneMemoryLimitInMB''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinCacheSceneMemoryLimitInMB__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7898 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SkinCache.SceneMemoryLimitInMB",0x43000000,
                  L"Maximum memory allowed to be allocated per World/Scene in Megs",0x20);
  _DAT_146af7890 = &PTR_FUN_143f3ecf8;
  DAT_146af78a0 = (**(code **)(*DAT_146af7898 + 0x40))(DAT_146af7898);
  atexit(FUN_143eaf1d0);
  return;
}



// FUNCTION 140344110 `dynamic_initializer_for_'CVarGPUSkinLimit2BoneInfluences'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinLimit2BoneInfluences''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinLimit2BoneInfluences__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7a38 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUSkin.Limit2BoneInfluences",0,
                  L"Whether to use 2 bones influence instead of default 4 for GPU skinning. Cannot be changed at runtime."
                  ,4);
  _DAT_146af7a30 = &PTR_FUN_143f3ecf8;
  DAT_146af7a40 = (**(code **)(*DAT_146af7a38 + 0x38))(DAT_146af7a38);
  atexit(FUN_143eaf220);
  return;
}



// FUNCTION 140344180 `dynamic_initializer_for_'CVarGPUSkinNumTangentIntermediateBuffers'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUSkinNumTangentIntermediateBuffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUSkinNumTangentIntermediateBuffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7868 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SkinCache.NumTangentIntermediateBuffers",0x3f800000,
                  L"How many intermediate buffers to use for intermediate results while\ndoing Recompute Tangents; more may allow the GPU to overlap compute jobs."
                  ,0x20);
  _DAT_146af7860 = &PTR_FUN_143f3ecf8;
  DAT_146af7870 = (**(code **)(*DAT_146af7868 + 0x40))(DAT_146af7868);
  atexit(FUN_143eaf270);
  return;
}



// FUNCTION 140344200 FUN_140344200 body=112 status=ok
// SIG undefined FUN_140344200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344200(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9c00 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"hk.ShowThreadPoolTimers",0,
                  L"If true Havok thread pool timers (used by Cloth) will be shown in the VDB in addition to the timers of UE\'s task graph worker threads. Default: 0 (false)\nWe disable this by default because it breaks the Stat Graph Overlay in the VDB when the thread pool has no timers"
                  ,0);
  _DAT_146af9bf8 = &PTR_FUN_143f3ecf8;
  DAT_146af9c08 = (**(code **)(*DAT_146af9c00 + 0x38))(DAT_146af9c00);
  atexit(FUN_143eaf2c0);
  return;
}



// FUNCTION 140344270 FUN_140344270 body=112 status=ok
// SIG undefined FUN_140344270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344270(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9c88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ai.HavokVDB",0,
                  L"0: Do not allow use of Havok\'s Visual Debugger (default)\n1: Allow use of Havok\'s Visual Debugger"
                  ,0);
  _DAT_146af9c80 = &PTR_FUN_143f3ecf8;
  DAT_146af9c90 = (**(code **)(*DAT_146af9c88 + 0x40))(DAT_146af9c88);
  atexit(FUN_143eaf310);
  return;
}



// FUNCTION 1403442e0 `dynamic_initializer_for_'CVarMaxGPUSkinBones'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxGPUSkinBones''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxGPUSkinBones__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7a28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Compat.MAX_GPUSKIN_BONES",&DAT_146532b9c,
                  L"Max number of bones that can be skinned on the GPU in a single draw call. Cannot be changed at runtime."
                  ,4);
  _DAT_146af7a20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaf360);
  return;
}



// FUNCTION 140344350 `dynamic_initializer_for_'CVarMaxOcclusionQueriesPerComponent'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxOcclusionQueriesPerComponent''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxOcclusionQueriesPerComponent__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9e30 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.MaxOcclusionQueriesPerComponent",0x10,
                  L"Controls the granularity of occlusion culling. 16-128 is a reasonable range.",0)
  ;
  _DAT_146af9e28 = &PTR_FUN_143f3ecf8;
  DAT_146af9e38 = (**(code **)(*DAT_146af9e30 + 0x38))(DAT_146af9e30);
  atexit(FUN_143eaf3b0);
  return;
}



// FUNCTION 1403443d0 `dynamic_initializer_for_'CVarMaxTrianglesToRender'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxTrianglesToRender''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxTrianglesToRender__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9db8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.MaxTrianglesToRender",100000000,
                  L"This is an absolute limit on the number of foliage triangles to render in one traversal. This is used to prevent a silly LOD parameter mistake from causing the OS to kill the GPU."
                  ,0);
  _DAT_146af9db0 = &PTR_FUN_143f3ecf8;
  DAT_146af9dc0 = (**(code **)(*DAT_146af9db8 + 0x38))(DAT_146af9db8);
  atexit(FUN_143eaf400);
  return;
}



// FUNCTION 140344450 `dynamic_initializer_for_'CVarMinInstancesPerOcclusionQuery'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMinInstancesPerOcclusionQuery''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMinInstancesPerOcclusionQuery__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9e60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.MinInstancesPerOcclusionQuery",0x100,
                  L"Controls the granualrity of occlusion culling. 1024 to 65536 is a reasonable range. This is not exact, actual minimum might be off by a factor of two."
                  ,0);
  _DAT_146af9e58 = &PTR_FUN_143f3ecf8;
  DAT_146af9e68 = (**(code **)(*DAT_146af9e60 + 0x38))(DAT_146af9e60);
  atexit(FUN_143eaf450);
  return;
}



// FUNCTION 1403444d0 `dynamic_initializer_for_'CVarMinOcclusionQueriesPerComponent'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMinOcclusionQueriesPerComponent''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMinOcclusionQueriesPerComponent__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9e48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.MinOcclusionQueriesPerComponent",6,
                  L"Controls the granularity of occlusion culling. 2 should be the Min.",0);
  _DAT_146af9e40 = &PTR_FUN_143f3ecf8;
  DAT_146af9e50 = (**(code **)(*DAT_146af9e48 + 0x38))(DAT_146af9e48);
  atexit(FUN_143eaf4a0);
  return;
}



// FUNCTION 140344550 `dynamic_initializer_for_'CVarMinVertsToSplitNode'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMinVertsToSplitNode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMinVertsToSplitNode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9e18 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.MinVertsToSplitNode",0x2000,
                  L"Controls the accuracy between culling and LOD accuracy and culling and CPU performance."
                  ,0);
  _DAT_146af9e10 = &PTR_FUN_143f3ecf8;
  DAT_146af9e20 = (**(code **)(*DAT_146af9e18 + 0x38))(DAT_146af9e18);
  atexit(FUN_143eaf4f0);
  return;
}



// FUNCTION 1403445d0 `dynamic_initializer_for_'CVarOnlyLOD'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarOnlyLOD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarOnlyLOD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9d40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.OnlyLOD",0xffffffff,
                  L"If greater than or equal to zero, only renders the foliage LOD at that level.",0
                 );
  _DAT_146af9d38 = &PTR_FUN_143f3ecf8;
  DAT_146af9d48 = (**(code **)(*DAT_146af9d40 + 0x38))(DAT_146af9d40);
  atexit(FUN_143eaf540);
  return;
}



// FUNCTION 140344650 `dynamic_initializer_for_'CVarOverestimateLOD'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarOverestimateLOD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarOverestimateLOD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9da0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.OverestimateLOD",0,
                  L"If greater than zero and dithered LOD is not used, then we use an overestimate of LOD instead of an underestimate."
                  ,0);
  _DAT_146af9d98 = &PTR_FUN_143f3ecf8;
  DAT_146af9da8 = (**(code **)(*DAT_146af9da0 + 0x38))(DAT_146af9da0);
  atexit(FUN_143eaf590);
  return;
}



// FUNCTION 1403446c0 `dynamic_initializer_for_'CVarRHICmdDeferSkeletalLockAndFillToRHIThread'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdDeferSkeletalLockAndFillToRHIThread''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdDeferSkeletalLockAndFillToRHIThread__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af7a50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdDeferSkeletalLockAndFillToRHIThread",0,
                  L"If > 0, then do the bone and cloth copies on the RHI thread. Experimental option."
                  ,0);
  _DAT_146af7a48 = &PTR_FUN_143f3ecf8;
  DAT_146af7a58 = (**(code **)(*DAT_146af7a50 + 0x38))(DAT_146af7a50);
  atexit(FUN_143eaf5e0);
  return;
}



// FUNCTION 140344730 `dynamic_initializer_for_'CVarRandomLODRange'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRandomLODRange''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRandomLODRange__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9e00 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"foliage.RandomLODRange",0,
                  L"Random distance added to each instance distance to compute LOD.",0);
  _DAT_146af9df8 = &PTR_FUN_143f3ecf8;
  DAT_146af9e08 = (**(code **)(*DAT_146af9e00 + 0x40))(DAT_146af9e00);
  atexit(FUN_143eaf630);
  return;
}



// FUNCTION 140344820 FUN_140344820 body=269 status=ok
// SIG undefined FUN_140344820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344820(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9eb8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"foliage.Freeze",
                  L"Useful for debugging. Freezes the foliage culling and LOD.",&local_18,0);
  _DAT_146af9eb0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14034491c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14034491c:
  atexit(FUN_143eaf680);
  return;
}



// FUNCTION 140344930 FUN_140344930 body=67 status=ok
// SIG undefined FUN_140344930(void)

void FUN_140344930(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146532c60 + 0x28))();
    atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_146532c60);
  atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
  return;
}



// FUNCTION 140344980 FUN_140344980 body=67 status=ok
// SIG undefined FUN_140344980(void)

void FUN_140344980(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146532c00 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_146532c00);
  atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
  return;
}



// FUNCTION 140344a00 FUN_140344a00 body=269 status=ok
// SIG undefined FUN_140344a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344a00(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)&LAB_1424ca850;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9ee8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"foliage.LogFoliageFrame",
                  L"Useful for debugging. Logs all foliage rendered in a frame.",&local_18,0);
  _DAT_146af9ee0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140344afc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140344afc:
  atexit(FUN_143eaf780);
  return;
}



// FUNCTION 140344bb0 FUN_140344bb0 body=269 status=ok
// SIG undefined FUN_140344bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344bb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_1424cd540;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9f68 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"foliage.RebuildFoliageTrees",
                  L"Rebuild the trees for non-grass foliage.",&local_18,0);
  _DAT_146af9f60 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140344cac;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140344cac:
  atexit(FUN_143eaf7d0);
  return;
}



// FUNCTION 140344ce0 FUN_140344ce0 body=32 status=ok
// SIG undefined FUN_140344ce0(void)

void FUN_140344ce0(void)

{
  DAT_146af9a60 = TlsAlloc();
  atexit(FUN_143eaf820);
  return;
}



// FUNCTION 140344d20 FUN_140344d20 body=269 status=ok
// SIG undefined FUN_140344d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344d20(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_1424d5b60;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9ea8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"foliage.Test",L"Useful for debugging.",&local_18,0);
  _DAT_146af9ea0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140344e1c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140344e1c:
  atexit(FUN_143eaf840);
  return;
}



// FUNCTION 140344e30 FUN_140344e30 body=269 status=ok
// SIG undefined FUN_140344e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344e30(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)&LAB_1424d60e0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9ed8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"foliage.ToggleVectorCull",
                  L"Useful for debugging. Toggles the optimized cull.",&local_18,0);
  _DAT_146af9ed0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140344f2c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140344f2c:
  atexit(FUN_143eaf890);
  return;
}



// FUNCTION 140344f60 FUN_140344f60 body=269 status=ok
// SIG undefined FUN_140344f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344f60(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146af9ec8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"foliage.UnFreeze",
                  L"Useful for debugging. Freezes the foliage culling and LOD.",&local_18,0);
  _DAT_146af9ec0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14034505c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14034505c:
  atexit(FUN_143eaf8e0);
  return;
}



// FUNCTION 140345cf0 FUN_140345cf0 body=52 status=ok
// SIG undefined FUN_140345cf0(void)

void FUN_140345cf0(void)

{
  hkBaseSystem::InitNode::internalConstruct
            (&DAT_146af9bd0,"ProductFeaturesCommon",FUN_1424d8f00,0,0,1);
  return;
}



// FUNCTION 140345d30 FUN_140345d30 body=52 status=ok
// SIG undefined FUN_140345d30(void)

void FUN_140345d30(void)

{
  hkBaseSystem::InitNode::internalConstruct(&DAT_146af9b78,"Set Keycodes",FUN_1424db4b0,0,0,1);
  return;
}



// FUNCTION 140345d70 Enabled'' body=71 status=ok
// SIG undefined Enabled''(void)

void `dynamic_initializer_for_'FInGamePerformanceTracker::Enabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbd10 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"InGamePerformanceTracking.Enabled",0,
                  L"If in-game performance tracking is enabled. Most games will likely not use or need this so it should be left disabled."
                  ,0);
  return;
}



// FUNCTION 140345dc0 HistorySize'' body=74 status=ok
// SIG undefined HistorySize''(void)

void `dynamic_initializer_for_'FInGamePerformanceTracker::HistorySize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbd18 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"InGamePerformanceTracking.HistorySize",0x1e,
                  L"How many frames in game performance tracking should store in it\'s history.",0);
  return;
}



// FUNCTION 140345e30 SCSDefaultSceneRootOverrideNamePrefix'' body=59 status=ok
// SIG undefined SCSDefaultSceneRootOverrideNamePrefix''(void)

void `dynamic_initializer_for_'UInheritableComponentHandler::SCSDefaultSceneRootOverrideNamePrefix__
               (void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533160,0);
  FGenericPlatformString::Memcpy(DAT_146533160,L"ICH-",10);
  atexit((_func_5014 *)&LAB_143eaf950);
  return;
}



// FUNCTION 140345e70 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FEmulatedInstancedStaticMeshVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afc100,L"FEmulatedInstancedStaticMeshVertexFactory",
             L"/Engine/Private/LocalVertexFactory.ush",1,1,1,1,1,&LAB_1424e9650,FUN_142509c30,
             FEmulatedInstancedStaticMeshVertexFactory::ModifyCompilationEnvironment,
             BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaf970);
  return;
}



// FUNCTION 140345ef0 FUN_140345ef0 body=117 status=ok
// SIG undefined FUN_140345ef0(void)

void FUN_140345ef0(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afbf50,L"FGbxInstancedStaticMeshVertexFactory",
             L"/Engine/Private/LocalVertexFactory.ush",1,1,1,1,1,&LAB_1424e9650,
             FGeometryCollectionVertexFactory::ShouldCompilePermutation,
             FEmulatedInstancedStaticMeshVertexFactory::ModifyCompilationEnvironment,
             BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaf980);
  return;
}



// FUNCTION 140345f70 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FInstancedStaticMeshVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afbda0,L"FInstancedStaticMeshVertexFactory",
             L"/Engine/Private/LocalVertexFactory.ush",1,1,1,1,1,&LAB_1424e9650,
             FGeometryCollectionVertexFactory::ShouldCompilePermutation,FUN_1424fdb80,
             BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eaf990);
  return;
}



// FUNCTION 140346010 `dynamic_initializer_for_'CVarCullAllInVertexShader'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCullAllInVertexShader''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCullAllInVertexShader__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbd90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.CullAllInVertexShader",0,
                  L"Debugging, if this is greater than 0, cull all instances in the vertex shader.",
                  0);
  _DAT_146afbd88 = &PTR_FUN_143f3ecf8;
  DAT_146afbd98 = (**(code **)(*DAT_146afbd90 + 0x38))(DAT_146afbd90);
  atexit(FUN_143eaf9a0);
  return;
}



// FUNCTION 140346080 `dynamic_initializer_for_'CVarMinLOD'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMinLOD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMinLOD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbd78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"foliage.MinLOD",0xffffffff,
                  L"Used to discard the top LODs for performance evaluation. -1: Disable all effects of this cvar."
                  ,0);
  _DAT_146afbd70 = &PTR_FUN_143f3ecf8;
  DAT_146afbd80 = (**(code **)(*DAT_146afbd78 + 0x38))(DAT_146afbd78);
  atexit(FUN_143eaf9f0);
  return;
}



// FUNCTION 140346100 `dynamic_initializer_for_'CVarSaveEXRCompressionQuality'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSaveEXRCompressionQuality''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSaveEXRCompressionQuality__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbc90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SaveEXR.CompressionQuality",1,
                  L"Defines how we save HDR screenshots in the EXR format.\n 0: no compression\n 1: default compression which can be slow (default)"
                  ,0x20);
  _DAT_146afbc88 = &PTR_FUN_143f3ecf8;
  _DAT_146afbc98 = (**(code **)(*DAT_146afbc90 + 0x38))(DAT_146afbc90);
  atexit(FUN_143eafa40);
  return;
}



// FUNCTION 140346180 FUN_140346180 body=100 status=ok
// SIG undefined FUN_140346180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346180(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afc2b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ISM.UseMobilityForPhysX",&DAT_146533118,
                  L"Create PhysX actors for ISMC/HISMC based on the components mobility. (default behavior is just to create static actors, this will create kinematic ones for movable components)"
                  ,0);
  _DAT_146afc2b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eafa90);
  return;
}



// FUNCTION 140346280 `dynamic_initializer_for_'GRegisterEditableMeshCustomVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterEditableMeshCustomVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterEditableMeshCustomVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146533170;
  uStack_14 = uRam0000000146533174;
  uStack_10 = uRam0000000146533178;
  uStack_c = uRam000000014653317c;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InstancedStaticMeshVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146afbd60,&local_18,3,*puVar1);
  atexit((_func_5014 *)&LAB_143eafb00);
  return;
}



// FUNCTION 1403462e0 `dynamic_initializer_for_'GSafeZoneVisualizationAlphaCVar'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'GSafeZoneVisualizationAlphaCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GSafeZoneVisualizationAlphaCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbce0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DebugSafeZone.OverlayAlpha",0x3e4ccccd,
                  L"The alpha value of the safe zone overlay (0..1)\n default: 0.2",0);
  _DAT_146afbcd8 = &PTR_FUN_143f3ecf8;
  _DAT_146afbce8 = (**(code **)(*DAT_146afbce0 + 0x40))(DAT_146afbce0);
  atexit(FUN_143eafb10);
  return;
}



// FUNCTION 140346360 `dynamic_initializer_for_'GSafeZoneVisualizationModeCVar'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GSafeZoneVisualizationModeCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GSafeZoneVisualizationModeCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afbcc8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DebugSafeZone.Mode",0,
                  L"The safe zone visualization mode (0..2)\n 0: Disabled (default)\n 1: Show Title Safe Zone\n 2: Show Action Safe Zone"
                  ,0);
  _DAT_146afbcc0 = &PTR_FUN_143f3ecf8;
  _DAT_146afbcd0 = (**(code **)(*DAT_146afbcc8 + 0x38))(DAT_146afbcc8);
  atexit(FUN_143eafb60);
  return;
}



// FUNCTION 140346530 `dynamic_initializer_for_'CVarMinYResolutionFor3DView'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMinYResolutionFor3DView''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMinYResolutionFor3DView__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afc6b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MinYResolutionFor3DView",0x168,
                  L"Defines the smallest Y resolution we want to support in the 3D view",0x20);
  _DAT_146afc6b0 = &PTR_FUN_143f3ecf8;
  DAT_146afc6c0 = (**(code **)(*DAT_146afc6b8 + 0x38))(DAT_146afc6b8);
  atexit(FUN_143eafdf0);
  return;
}



// FUNCTION 1403465b0 `dynamic_initializer_for_'CVarMinYResolutionForUI'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMinYResolutionForUI''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMinYResolutionForUI__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afc6a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MinYResolutionForUI",0x2d0,
                  L"Defines the smallest Y resolution we want to support in the UI (default is 720)"
                  ,0x20);
  _DAT_146afc698 = &PTR_FUN_143f3ecf8;
  DAT_146afc6a8 = (**(code **)(*DAT_146afc6a0 + 0x38))(DAT_146afc6a0);
  atexit(FUN_143eafe40);
  return;
}



// FUNCTION 140346630 FUN_140346630 body=100 status=ok
// SIG undefined FUN_140346630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346630(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afc6d0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gc.ActorClusteringEnabled",&DAT_1465332b0,
                  L"Whether to allow levels to create actor clusters for GC.",0);
  _DAT_146afc6c8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eafe90);
  return;
}



// FUNCTION 140346980 FUN_140346980 body=269 status=ok
// SIG undefined FUN_140346980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346980(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_142542c50;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcb68 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"r.CopyLockedViews",
                  L"Copies all locked views in to a string that r.LockView will accept to reload them."
                  ,&local_18,0);
  _DAT_146afcb60 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140346a7c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140346a7c:
  atexit(FUN_143eafee0);
  return;
}



// FUNCTION 140346a90 FUN_140346a90 body=100 status=ok
// SIG undefined FUN_140346a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346a90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afca38 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"AllowAsyncRenderThreadUpdates",&DAT_14653335c,
                  L"Used to control async renderthread updates. Also gated on FApp::ShouldUseThreadingForPerformance()."
                  ,0);
  _DAT_146afca30 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaff30);
  return;
}



// FUNCTION 140346b00 FUN_140346b00 body=100 status=ok
// SIG undefined FUN_140346b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346b00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afca48 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"AllowAsyncRenderThreadUpdatesDuringGamethreadUpdates",
                  &DAT_146533360,
                  L"If > 0 then we do the gamethread updates _while_ doing parallel updates.",0);
  _DAT_146afca40 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaff80);
  return;
}



// FUNCTION 140346b70 FUN_140346b70 body=100 status=ok
// SIG undefined FUN_140346b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346b70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afca58 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"AllowAsyncRenderThreadUpdatesEditor",&DAT_146afc8dc,
                  L"Used to control async renderthread updates in the editor.",0);
  _DAT_146afca50 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eaffd0);
  return;
}



// FUNCTION 140346be0 FUN_140346be0 body=115 status=ok
// SIG undefined FUN_140346be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346be0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afc928 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"editor.AllowWorldSettingsDebugLogging",1,
                  L"Whether additional logging should be performed when, in editor, the WorldSettings actor is deleted in a possibly unintended way.\n 0: Disabled;\n 1: Enabled (default)."
                  ,0);
  _DAT_146afc920 = &PTR_FUN_143f3ecf8;
  _DAT_146afc930 = (**(code **)(*DAT_146afc928 + 0x38))(DAT_146afc928);
  atexit(FUN_143eb0020);
  return;
}



// FUNCTION 140346c60 FUN_140346c60 body=100 status=ok
// SIG undefined FUN_140346c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346c60(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afc918 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"p.EncroachEpsilon",&DAT_146533354,
                  L"Epsilon value used during encroachment checking for shape components\n0: use full sized shape. > 0: shrink shape size by this amount (world units)"
                  ,0);
  _DAT_146afc910 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb0070);
  return;
}



// FUNCTION 140346cd0 FUN_140346cd0 body=115 status=ok
// SIG undefined FUN_140346cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346cd0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcad8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Lightmass.LightmapExpand",1,
                  L"Whether T + Left mouse click in the editor selects lightmap texels for debugging Lightmass.  Lightmass must be recompiled with ALLOW_LIGHTMAP_SAMPLE_DEBUGGING enabled for this to work."
                  ,0);
  _DAT_146afcad0 = &PTR_FUN_143f3ecf8;
  _DAT_146afcae0 = (**(code **)(*DAT_146afcad8 + 0x38))(DAT_146afcad8);
  atexit(FUN_143eb00c0);
  return;
}



// FUNCTION 140346d50 FUN_140346d50 body=115 status=ok
// SIG undefined FUN_140346d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346d50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcac0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Lightmass.LightmapsFill",1,
                  L"Whether T + Left mouse click in the editor selects lightmap texels for debugging Lightmass.  Lightmass must be recompiled with ALLOW_LIGHTMAP_SAMPLE_DEBUGGING enabled for this to work."
                  ,0);
  _DAT_146afcab8 = &PTR_FUN_143f3ecf8;
  _DAT_146afcac8 = (**(code **)(*DAT_146afcac0 + 0x38))(DAT_146afcac0);
  atexit(FUN_143eb0110);
  return;
}



// FUNCTION 140346dd0 FUN_140346dd0 body=115 status=ok
// SIG undefined FUN_140346dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346dd0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcaf0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPreCache.Allow",1,&DAT_1450e973c,0x20);
  _DAT_146afcae8 = &PTR_FUN_143f3ecf8;
  DAT_146afcaf8 = (**(code **)(*DAT_146afcaf0 + 0x38))(DAT_146afcaf0);
  atexit(FUN_143eb0160);
  return;
}



// FUNCTION 140346e50 FUN_140346e50 body=115 status=ok
// SIG undefined FUN_140346e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346e50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcb08 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPreCache.AllowViewOverlay",1,&DAT_1450e9924,0x20);
  _DAT_146afcb00 = &PTR_FUN_143f3ecf8;
  DAT_146afcb10 = (**(code **)(*DAT_146afcb08 + 0x38))(DAT_146afcb08);
  atexit(FUN_143eb01b0);
  return;
}



// FUNCTION 140346ed0 FUN_140346ed0 body=112 status=ok
// SIG undefined FUN_140346ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346ed0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcb50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPreCache.FadeInNumFrames",0,&DAT_1450e99ec,0x20);
  _DAT_146afcb48 = &PTR_FUN_143f3ecf8;
  DAT_146afcb58 = (**(code **)(*DAT_146afcb50 + 0x38))(DAT_146afcb50);
  atexit(FUN_143eb0200);
  return;
}



// FUNCTION 140346f40 `dynamic_initializer_for_'CVarRayTracingReflectionsSortSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRayTracingReflectionsSortSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRayTracingReflectionsSortSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcb38 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPreCache.PerformNumFrames",5,&DAT_1450e99ac,0x20);
  _DAT_146afcb30 = &PTR_FUN_143f3ecf8;
  DAT_146afcb40 = (**(code **)(*DAT_146afcb38 + 0x38))(DAT_146afcb38);
  atexit(FUN_143eb0250);
  return;
}



// FUNCTION 140346fc0 `dynamic_initializer_for_'CVarRayTracingReflectionsSortSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRayTracingReflectionsSortSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRayTracingReflectionsSortSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcb20 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPreCache.PrepareNumFrames",5,&DAT_1450e996c,0x20);
  _DAT_146afcb18 = &PTR_FUN_143f3ecf8;
  DAT_146afcb28 = (**(code **)(*DAT_146afcb20 + 0x38))(DAT_146afcb20);
  atexit(FUN_143eb02a0);
  return;
}



// FUNCTION 140347040 `dynamic_initializer_for_'CVarTexelDebugging'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTexelDebugging''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTexelDebugging__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcaa8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.TexelDebugging",0,
                  L"Whether T + Left mouse click in the editor selects lightmap texels for debugging Lightmass.  Lightmass must be recompiled with ALLOW_LIGHTMAP_SAMPLE_DEBUGGING enabled for this to work."
                  ,0);
  _DAT_146afcaa0 = &PTR_FUN_143f3ecf8;
  _DAT_146afcab0 = (**(code **)(*DAT_146afcaa8 + 0x38))(DAT_146afcaa8);
  atexit(FUN_143eb02f0);
  return;
}



// FUNCTION 1403470b0 FUN_1403470b0 body=115 status=ok
// SIG undefined FUN_1403470b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403470b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afca20 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.WorldTeleportPreGroundCheck",1,L"0: Disabled1: Enabled",0);
  _DAT_146afca18 = &PTR_FUN_143f3ecf8;
  DAT_146afca28 = (**(code **)(*DAT_146afca20 + 0x38))(DAT_146afca20);
  atexit(FUN_143eb0340);
  return;
}



// FUNCTION 140347130 FUN_140347130 body=117 status=ok
// SIG undefined FUN_140347130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347130(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afca08 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.WorldTeleportPreGroundCheckExtentWeight",0x3f733333,
                  L"Percentage of actor\'s Z extent that the spawn point is adjusted by",0);
  _DAT_146afca00 = &PTR_FUN_143f3ecf8;
  DAT_146afca10 = (**(code **)(*DAT_146afca08 + 0x40))(DAT_146afca08);
  atexit(FUN_143eb0390);
  return;
}



// FUNCTION 1403472e0 FUN_1403472e0 body=277 status=ok
// SIG undefined FUN_1403472e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403472e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_142572b50;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146afd030 = &PTR_FUN_143f3ece8;
  DAT_146afd038 = &local_18;
  _DAT_146afd040 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146afd038);
  _DAT_146afd040 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403473e4;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403473e4:
  atexit((_func_5014 *)&LAB_143eb0490);
  return;
}



// FUNCTION 140347420 FUN_140347420 body=407 status=ok
// SIG undefined FUN_140347420(void)

void FUN_140347420(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_142579f20(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"VertexFetch_ColorComponents0Buffer";
  local_28 = 0x48;
  pwStack_30 = L"Buffer<float4>";
  local_40 = local_40 + 1;
  uStack_24 = 6;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  pwVar4 = pwStack_30;
  iVar3 = local_40;
  pwStack_30 = L"Buffer<float4>";
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0x50;
  uStack_24 = 6;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  lVar14 = (longlong)local_40;
  local_38 = L"VertexFetch_ColorComponents1Buffer";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar13 = FName::FName(local_res8,L"FLocalVertexFactoryUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146afcd60,uVar13,L"FLocalVertexFactoryUniformShaderParameters",L"LocalVF",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x60,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eb04d0);
  return;
}



// FUNCTION 1403475c0 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FLocalVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146afce00,L"FLocalVertexFactory",L"/Engine/Private/LocalVertexFactory.ush",1,1,1,1
             ,1,ConstructFLocalVertexFactoryShaderParameters,BuildSettings::IsPromotedBuild,
             FUN_1424cb720,BuildSettings::IsPromotedBuild);
  atexit((_func_5014 *)&LAB_143eb04e0);
  return;
}



// FUNCTION 140347640 `dynamic_initializer_for_'CVarDiscardUnusedQualityLevels'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDiscardUnusedQualityLevels''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDiscardUnusedQualityLevels__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afd080 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DiscardUnusedQuality",0,
                  L"Wether to keep or discard unused quality level shadermaps in memory.\n0: keep all quality levels in memory. (default)\n1: Discard unused quality levels on load."
                  ,4);
  _DAT_146afd078 = &PTR_FUN_143f3ecf8;
  DAT_146afd088 = (**(code **)(*DAT_146afd080 + 0x38))(DAT_146afd080);
  atexit(FUN_143eb04f0);
  return;
}



// FUNCTION 1403476b0 `dynamic_initializer_for_'CVarHLODDistanceOverride'' body=192 status=ok
// SIG undefined `dynamic_initializer_for_'CVarHLODDistanceOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarHLODDistanceOverride__(void)

{
  undefined4 in_stack_ffffffffffffffd8;
  undefined2 uVar1;
  longlong local_18 [3];
  
  uVar1 = (undefined2)((uint)in_stack_ffffffffffffffd8 >> 0x10);
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],4,&DAT_1450f227c,4,CONCAT22(uVar1,0x3f))
  ;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcdf0 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.HLOD.DistanceOverride",local_18,
                  L"If non-zero, overrides the distance that HLOD transitions will take place for all objects at the HLOD level index, formatting is as follows:\n\'r.HLOD.DistanceOverride 5000, 10000, 20000\' would result in HLOD levels 0, 1 and 2 transitioning at 5000, 1000 and 20000 respectively."
                  ,0x40);
  _DAT_146afcde8 = &PTR_FUN_143f3ecf8;
  DAT_146afcdf8 = (**(code **)(*DAT_146afcdf0 + 0x48))(DAT_146afcdf0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eb0540);
  return;
}



// FUNCTION 140347770 `dynamic_initializer_for_'CVarHLODDitherPauseTime'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarHLODDitherPauseTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarHLODDitherPauseTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afcd50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.HLOD.DitherPauseTime",0x3f000000,
                  L"HLOD dither pause time in seconds\n",0x60);
  _DAT_146afcd48 = &PTR_FUN_143f3ecf8;
  DAT_146afcd58 = (**(code **)(*DAT_146afcd50 + 0x40))(DAT_146afcd50);
  atexit(FUN_143eb0590);
  return;
}



// FUNCTION 1403477f0 `dynamic_initializer_for_'CVarMaximumAllowedHLODLevel'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaximumAllowedHLODLevel''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaximumAllowedHLODLevel__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afd018 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.HLOD.MaximumLevel",&DAT_1465333a0,
                  L"How far down the LOD hierarchy to allow showing (can be used to limit quality loss and streaming texture memory usage on high scalability settings)\n-1: No maximum level (default)\n0: Prevent ever showing a HLOD cluster instead of individual meshes\n1: Allow only the first level of HLOD clusters to be shown\n2+: Allow up to the Nth level of HLOD clusters to be shown"
                  ,0x40);
  _DAT_146afd010 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb05e0);
  return;
}



// FUNCTION 140347860 FUN_140347860 body=269 status=ok
// SIG undefined FUN_140347860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347860(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_142572830;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afd0a8 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"r.ListSceneColorMaterials",
                  L"Lists all materials that read from scene color.",&local_18,0);
  _DAT_146afd0a0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14034795c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14034795c:
  atexit(FUN_143eb0650);
  return;
}



// FUNCTION 1403479b0 `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar'' body=137 status=ok
// SIG undefined `dynamic_initializer_for_'GCompileMaterialsForShaderFormatCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCompileMaterialsForShaderFormatCVar__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afd098 =
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.CompileMaterialsForShaderFormat",local_18,
                  L"When enabled, compile materials for this shader format in addition to those for the running platform.\nNote that these shaders are compiled and immediately tossed. This is only useful when directly inspecting output via r.DebugDumpShaderInfo."
                  ,0);
  _DAT_146afd090 = &PTR_FUN_143f3ecf0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  _DAT_146afd090 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb3280);
  return;
}



// FUNCTION 140347a40 `dynamic_initializer_for_'GComponentsWithLegacyLightmaps'' body=71 status=ok
// SIG undefined `dynamic_initializer_for_'GComponentsWithLegacyLightmaps''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GComponentsWithLegacyLightmaps__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1465334f8,4000);
  DAT_146533520 = 0;
  DAT_146533528 = 0;
  _DAT_146533530 = 0;
  atexit((_func_5014 *)&LAB_143eb32d0);
  return;
}



// FUNCTION 140347a90 FUN_140347a90 body=81 status=ok
// SIG undefined FUN_140347a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347a90(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146533598,4000);
  _DAT_1465335c0 = 0;
  _DAT_1465335c8 = 0;
  _DAT_1465335d0 = 0;
  _DAT_1465335d8 = 0;
  atexit((_func_5014 *)&LAB_143eb32e0);
  return;
}



// FUNCTION 140347af0 FUN_140347af0 body=81 status=ok
// SIG undefined FUN_140347af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347af0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146533638,4000);
  _DAT_146533660 = 0;
  _DAT_146533668 = 0;
  _DAT_146533670 = 0;
  _DAT_146533678 = 0;
  atexit((_func_5014 *)&LAB_143eb32f0);
  return;
}



// FUNCTION 140347b50 FUN_140347b50 body=74 status=ok
// SIG undefined FUN_140347b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347b50(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1465336d8,4000);
  _DAT_146533700 = 0;
  _DAT_146533708 = 0;
  _DAT_146533710 = 0;
  atexit((_func_5014 *)&LAB_143eb3300);
  return;
}



// FUNCTION 140347ba0 FUN_140347ba0 body=67 status=ok
// SIG undefined FUN_140347ba0(void)

void FUN_140347ba0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146533450 + 0x28))();
    atexit(FUN_143eb3310);
    return;
  }
  FUN_141edf270(&PTR_PTR_146533450);
  atexit(FUN_143eb3310);
  return;
}



// FUNCTION 140347d60 FUN_140347d60 body=49 status=ok
// SIG undefined FUN_140347d60(void)

void FUN_140347d60(void)

{
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Empty(&DAT_146533d40,0x22);
  FUN_1425991a0(&DAT_146533d40);
  atexit(`dynamic_atexit_destructor_for_'FMaterialAttributeDefinitionMap::
         GMaterialPropertyAttributesMap__);
  return;
}



// FUNCTION 140347dd0 FUN_140347dd0 body=115 status=ok
// SIG undefined FUN_140347dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347dd0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afee98 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AllowDiscardLocalVertexFactory",1,
                  L"Disables registration of FLocalVertexFactory on materials which have bDisableDefaultVertexFactory set to true"
                  ,4);
  _DAT_146afee90 = &PTR_FUN_143f3ecf8;
  _DAT_146afeea0 = (**(code **)(*DAT_146afee98 + 0x38))(DAT_146afee98);
  atexit(FUN_143eb36c0);
  return;
}



// FUNCTION 140347e50 `dynamic_initializer_for_'CVarDeferUniformExpressionCaching'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDeferUniformExpressionCaching''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDeferUniformExpressionCaching__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afee88 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DeferUniformExpressionCaching",&DAT_146533c48,
                  L"Whether to defer caching of uniform expressions until a rendering command needs them up to date.  Deferring updates is more efficient because multiple SetVectorParameterValue calls in a frame will only result in one update."
                  ,0x20);
  _DAT_146afee80 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb3710);
  return;
}



// FUNCTION 140347ec0 FUN_140347ec0 body=100 status=ok
// SIG undefined FUN_140347ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347ec0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afee68 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.EnableUniformParameterCache",&DAT_146533c40,
                  L"Whether to enable the cache of uniform parameters for UMaterialInstanceDynamic objects."
                  ,0x20);
  _DAT_146afee60 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb3760);
  return;
}



// FUNCTION 140347f30 FUN_140347f30 body=139 status=ok
// SIG undefined FUN_140347f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347f30(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afe410 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.MaterialStatDumpDebugMaterialName",local_18,&DAT_145107224,0);
  _DAT_146afe408 = &PTR_FUN_143f3ecf8;
  _DAT_146afe418 = (**(code **)(*DAT_146afe410 + 0x48))(DAT_146afe410);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eb37b0);
  return;
}



// FUNCTION 140347fc0 FUN_140347fc0 body=139 status=ok
// SIG undefined FUN_140347fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140347fc0(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afee38 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.MaterialStatDumpDebugShaderName",local_18,&DAT_145107404,0);
  _DAT_146afee30 = &PTR_FUN_143f3ecf8;
  _DAT_146afee40 = (**(code **)(*DAT_146afee38 + 0x48))(DAT_146afee38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eb3800);
  return;
}



// FUNCTION 140348050 FUN_140348050 body=139 status=ok
// SIG undefined FUN_140348050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140348050(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afee50 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.MaterialStatDumpDebugVertexFactoryName",local_18,&DAT_14510746c,
                  0);
  _DAT_146afee48 = &PTR_FUN_143f3ecf8;
  _DAT_146afee58 = (**(code **)(*DAT_146afee50 + 0x48))(DAT_146afee50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143eb3850);
  return;
}



// FUNCTION 1403480e0 FUN_1403480e0 body=112 status=ok
// SIG undefined FUN_1403480e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403480e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afe3f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SingleMaterialResourceMap",0,
                  L"Allocates only a single material resource per UMaterial/UMaterialInstance for a set quality level when set to true\n0: Use a material resource allocation per each material quality level\n1: Use only a single material resource allocation for the set material quality level\n"
                  ,0x40);
  _DAT_146afe3f0 = &PTR_FUN_143f3ecf8;
  _DAT_146afe400 = (**(code **)(*DAT_146afe3f8 + 0x38))(DAT_146afe3f8);
  atexit(FUN_143eb38a0);
  return;
}



// FUNCTION 140348150 FUN_140348150 body=100 status=ok
// SIG undefined FUN_140348150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140348150(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146afee78 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UniformParameterThreadingThreshold",&DAT_146533c44,
                  L"Number of deferred uniform updates required before a ParallelFor is used to calculate them.  (-1 = never thread)"
                  ,0x20);
  _DAT_146afee70 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb38f0);
  return;
}



// FUNCTION 1403481c0 `dynamic_initializer_for_'ColorMaterialInput_Ops'' body=105 status=ok
// SIG undefined `dynamic_initializer_for_'ColorMaterialInput_Ops''(void)

void _dynamic_initializer_for__ColorMaterialInput_Ops__(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ColorMaterialInput",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x38;
    *puVar2 = &PTR_FUN_145109a58;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 8;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 140348230 `dynamic_initializer_for_'ExpressionInput_Ops'' body=105 status=ok
// SIG undefined `dynamic_initializer_for_'ExpressionInput_Ops''(void)

void _dynamic_initializer_for__ExpressionInput_Ops__(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ExpressionInput",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x30;
    *puVar2 = &PTR_FUN_145109b70;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 8;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 1403482a0 `dynamic_initializer_for_'MaterialAttributesInput_Ops'' body=105 status=ok
// SIG undefined `dynamic_initializer_for_'MaterialAttributesInput_Ops''(void)

void _dynamic_initializer_for__MaterialAttributesInput_Ops__(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MaterialAttributesInput",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x38;
    *puVar2 = &PTR_FUN_145109710;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 8;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 140348310 `dynamic_initializer_for_'MaterialQualityLevelNames'' body=108 status=ok
// SIG undefined `dynamic_initializer_for_'MaterialQualityLevelNames''(void)

void _dynamic_initializer_for__MaterialQualityLevelNames__(void)

{
  FName::FName(&DAT_146afeea8,&DAT_1451082e8,1);
  FName::FName(&DAT_146afeeb0,L"High",1);
  FName::FName(&DAT_146afeeb8,L"Medium",1);
  FName::FName(&DAT_146afeec0,&DAT_1451084d8,1);
  return;
}



// FUNCTION 140348440 `dynamic_initializer_for_'ScalarMaterialInput_Ops'' body=105 status=ok
// SIG undefined `dynamic_initializer_for_'ScalarMaterialInput_Ops''(void)

void _dynamic_initializer_for__ScalarMaterialInput_Ops__(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ScalarMaterialInput",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x38;
    *puVar2 = &PTR_FUN_145109a58;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 8;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 1403484b0 `dynamic_initializer_for_'Vector2MaterialInput_Ops'' body=105 status=ok
// SIG undefined `dynamic_initializer_for_'Vector2MaterialInput_Ops''(void)

void _dynamic_initializer_for__Vector2MaterialInput_Ops__(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Vector2MaterialInput",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x40;
    *puVar2 = &PTR_FUN_145109828;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 8;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 140348520 `dynamic_initializer_for_'VectorMaterialInput_Ops'' body=105 status=ok
// SIG undefined `dynamic_initializer_for_'VectorMaterialInput_Ops''(void)

void _dynamic_initializer_for__VectorMaterialInput_Ops__(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VectorMaterialInput",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x40;
    *puVar2 = &PTR_FUN_145109940;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 8;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 1403485d0 FUN_1403485d0 body=288 status=ok
// SIG undefined FUN_1403485d0(void)

void FUN_1403485d0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  undefined2 *puStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FMeshParticleUniformParameters::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar5 = (longlong)local_40;
  local_38 = L"bUseLocalSpace";
  puStack_30 = &DAT_143f3eda8;
  uStack_10 = 0;
  local_40 = local_40 + 1;
  local_28 = 0x20;
  uStack_24 = 2;
  uStack_1c = 1;
  local_18 = 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar5 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar5 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar5 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar4 = FName::FName(local_res8,L"FMeshParticleUniformParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146aff3a0,uVar4,L"FMeshParticleUniformParameters",L"MeshParticleVF",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x30,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eb3cb0);
  return;
}



// FUNCTION 1403486f0 FUN_1403486f0 body=94 status=ok
// SIG undefined FUN_1403486f0(void)

void FUN_1403486f0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionAbs_146534088;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348750 FUN_140348750 body=94 status=ok
// SIG undefined FUN_140348750(void)

void FUN_140348750(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionAppend_146533fb8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403487b0 FUN_1403487b0 body=94 status=ok
// SIG undefined FUN_1403487b0(void)

void FUN_1403487b0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionArcCos_146533eb8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348810 FUN_140348810 body=94 status=ok
// SIG undefined FUN_140348810(void)

void FUN_140348810(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionArcSin_146533ea8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348870 FUN_140348870 body=94 status=ok
// SIG undefined FUN_140348870(void)

void FUN_140348870(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionArcTan_146533ee8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403488d0 FUN_1403488d0 body=94 status=ok
// SIG undefined FUN_1403488d0(void)

void FUN_1403488d0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionArcTan_146533ed8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348930 FUN_140348930 body=94 status=ok
// SIG undefined FUN_140348930(void)

void FUN_140348930(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionCeil_146534028;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348990 FUN_140348990 body=94 status=ok
// SIG undefined FUN_140348990(void)

void FUN_140348990(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionClamp_146533fe8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403489f0 FUN_1403489f0 body=94 status=ok
// SIG undefined FUN_1403489f0(void)

void FUN_1403489f0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionCompon_146534008;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348a50 FUN_140348a50 body=94 status=ok
// SIG undefined FUN_140348a50(void)

void FUN_140348a50(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionConsta_146533e38;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348ab0 FUN_140348ab0 body=94 status=ok
// SIG undefined FUN_140348ab0(void)

void FUN_140348ab0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionDegree_146533ef8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348b10 FUN_140348b10 body=94 status=ok
// SIG undefined FUN_140348b10(void)

void FUN_140348b10(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExpone_146533f28;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348b70 FUN_140348b70 body=94 status=ok
// SIG undefined FUN_140348b70(void)

void FUN_140348b70(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExpone_146533f18;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348bd0 FUN_140348bd0 body=94 status=ok
// SIG undefined FUN_140348bd0(void)

void FUN_140348bd0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExtern_146533e28;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348c30 FUN_140348c30 body=94 status=ok
// SIG undefined FUN_140348c30(void)

void FUN_140348c30(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExtern_146533e18;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348c90 FUN_140348c90 body=94 status=ok
// SIG undefined FUN_140348c90(void)

void FUN_140348c90(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExtern_1465340b8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348cf0 FUN_140348cf0 body=94 status=ok
// SIG undefined FUN_140348cf0(void)

void FUN_140348cf0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExtern_1465340a8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348d50 FUN_140348d50 body=94 status=ok
// SIG undefined FUN_140348d50(void)

void FUN_140348d50(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionExtern_146533e88;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348db0 FUN_140348db0 body=94 status=ok
// SIG undefined FUN_140348db0(void)

void FUN_140348db0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionFlipBo_146533e78;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348e10 FUN_140348e10 body=94 status=ok
// SIG undefined FUN_140348e10(void)

void FUN_140348e10(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionFloor_146534018;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348e70 FUN_140348e70 body=94 status=ok
// SIG undefined FUN_140348e70(void)

void FUN_140348e70(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionFmod_146534078;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348ed0 FUN_140348ed0 body=94 status=ok
// SIG undefined FUN_140348ed0(void)

void FUN_140348ed0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionFolded_146533f98;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348f30 FUN_140348f30 body=94 status=ok
// SIG undefined FUN_140348f30(void)

void FUN_140348f30(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionFrac_146534068;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348f90 FUN_140348f90 body=94 status=ok
// SIG undefined FUN_140348f90(void)

void FUN_140348f90(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionLength_146533f68;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140348ff0 FUN_140348ff0 body=94 status=ok
// SIG undefined FUN_140348ff0(void)

void FUN_140348ff0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionLogari_146533f88;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349050 FUN_140349050 body=94 status=ok
// SIG undefined FUN_140349050(void)

void FUN_140349050(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionLogari_146533f78;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403490b0 FUN_1403490b0 body=94 status=ok
// SIG undefined FUN_1403490b0(void)

void FUN_1403490b0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionLogari_146533f38;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349110 FUN_140349110 body=94 status=ok
// SIG undefined FUN_140349110(void)

void FUN_140349110(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionMax_146533fd8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349170 FUN_140349170 body=94 status=ok
// SIG undefined FUN_140349170(void)

void FUN_140349170(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionMin_146533fc8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403491d0 FUN_1403491d0 body=94 status=ok
// SIG undefined FUN_1403491d0(void)

void FUN_1403491d0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionOrigin_1465340c8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349230 FUN_140349230 body=94 status=ok
// SIG undefined FUN_140349230(void)

void FUN_140349230(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionPeriod_146533fa8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349290 FUN_140349290 body=94 status=ok
// SIG undefined FUN_140349290(void)

void FUN_140349290(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionRadian_146533f08;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403492f0 FUN_1403492f0 body=94 status=ok
// SIG undefined FUN_1403492f0(void)

void FUN_1403492f0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionRound_146534038;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349350 FUN_140349350 body=94 status=ok
// SIG undefined FUN_140349350(void)

void FUN_140349350(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionSatura_146533ff8;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 1403493b0 FUN_1403493b0 body=94 status=ok
// SIG undefined FUN_1403493b0(void)

void FUN_1403493b0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionScalar_146533e58;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349410 FUN_140349410 body=94 status=ok
// SIG undefined FUN_140349410(void)

void FUN_140349410(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionSign_146534058;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}



// FUNCTION 140349470 FUN_140349470 body=94 status=ok
// SIG undefined FUN_140349470(void)

void FUN_140349470(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = (longlong)&PTR_u_FMaterialUniformExpressionSine_146533e98;
    plVar1[1] = 0;
  }
  if (DAT_146aff648 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146aff648 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146aff648;
  plVar1[1] = (longlong)&DAT_146aff648;
  DAT_146aff648 = plVar1;
  return;
}


