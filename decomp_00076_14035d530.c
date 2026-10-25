// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14035d530 FUN_14035d530 body=100 status=ok
// SIG undefined FUN_14035d530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d530(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16648 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.Streaming.AdaptiveBoostLowerBoundBudget",&DAT_146534ed8,
                  L"if visible textures are under this percentage of the memory budget, potentially increase adaptive boost"
                  ,0);
  _DAT_146b16640 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebb320);
  return;
}



// FUNCTION 14035d5a0 FUN_14035d5a0 body=117 status=ok
// SIG undefined FUN_14035d5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d5a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b166a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.AdaptiveBoostScale",0x3f800000,
                  L">0: Scales adaptive boost\n0: Adaptive boost is disabled",0);
  _DAT_146b16698 = &PTR_FUN_143f3ecf8;
  DAT_146b166a8 = (**(code **)(*DAT_146b166a0 + 0x40))(DAT_146b166a0);
  atexit(FUN_143ebb370);
  return;
}



// FUNCTION 14035d620 FUN_14035d620 body=100 status=ok
// SIG undefined FUN_14035d620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d620(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16668 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.Streaming.AdaptiveBoostTargetVisibleMipsPercentage",
                  &DAT_146534ee0,L"The target percentage of visible mips we want loaded",0);
  _DAT_146b16660 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebb3c0);
  return;
}



// FUNCTION 14035d690 FUN_14035d690 body=100 status=ok
// SIG undefined FUN_14035d690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d690(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16678 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.Streaming.AdaptiveBoostTargetVisibleMipsTolerance",
                  &DAT_146534ee4,
                  L"reduce boost if visible mips exceeds (r.Streaming.AdaptiveBoostTargetVisibleMipsPercentage + tolerance)\nallow boost increase if visible mips is under (r.Streaming.AdaptiveBoostTargetVisibleMipsPercentage - tolerance)"
                  ,0);
  _DAT_146b16670 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebb410);
  return;
}



// FUNCTION 14035d700 FUN_14035d700 body=100 status=ok
// SIG undefined FUN_14035d700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d700(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16658 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.Streaming.AdaptiveBoostUpperBoundBudget",&DAT_146534edc,
                  L"if visible textures are over this percentage of the memory budget, decrease adaptive boost"
                  ,0);
  _DAT_146b16650 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebb460);
  return;
}



// FUNCTION 14035d770 FUN_14035d770 body=112 status=ok
// SIG undefined FUN_14035d770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d770(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16748 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.AllowLODSettingsFOVBoost",0,&DAT_1451bd12c,0);
  _DAT_146b16740 = &PTR_FUN_143f3ecf8;
  DAT_146b16750 = (**(code **)(*DAT_146b16748 + 0x38))(DAT_146b16748);
  atexit(FUN_143ebb4b0);
  return;
}



// FUNCTION 14035d7e0 FUN_14035d7e0 body=115 status=ok
// SIG undefined FUN_14035d7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d7e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16730 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.AllowTerrainPriority",1,
                  L"1: Give terrain textures priority over other textures when streaming (Epic default setting)\n0: Treat terrain textures like any other texture"
                  ,0);
  _DAT_146b16728 = &PTR_FUN_143f3ecf8;
  DAT_146b16738 = (**(code **)(*DAT_146b16730 + 0x38))(DAT_146b16730);
  atexit(FUN_143ebb500);
  return;
}



// FUNCTION 14035d860 FUN_14035d860 body=117 status=ok
// SIG undefined FUN_14035d860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d860(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b166b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.ViewBoostScale",0x3f800000,
                  L">0: Stremaing boost factor from view (due to FOV changes (zooming, etc)) is allowed to affect texture streaming\n0: View boost factor is ignored"
                  ,0);
  _DAT_146b166b0 = &PTR_FUN_143f3ecf8;
  DAT_146b166c0 = (**(code **)(*DAT_146b166b8 + 0x40))(DAT_146b166b8);
  atexit(FUN_143ebb550);
  return;
}



// FUNCTION 14035d8e0 `dynamic_initializer_for_'CVarTextureStreamingAmortizeCPUToGPUCopy'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTextureStreamingAmortizeCPUToGPUCopy''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTextureStreamingAmortizeCPUToGPUCopy__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b166d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.AmortizeCPUToGPUCopy",0,
                  L"If set and r.Streaming.MaxNumTexturesToStreamPerFrame > 0, limit the number of 2D textures streamed from CPU memory to GPU memory each frame"
                  ,0x40);
  _DAT_146b166c8 = &PTR_FUN_143f3ecf8;
  DAT_146b166d8 = (**(code **)(*DAT_146b166d0 + 0x38))(DAT_146b166d0);
  atexit(FUN_143ebb5a0);
  return;
}



// FUNCTION 14035d950 `dynamic_initializer_for_'CVarTextureStreamingMaxNumTexturesToStreamPerFrame'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTextureStreamingMaxNumTexturesToStreamPerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTextureStreamingMaxNumTexturesToStreamPerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b166e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.MaxNumTexturesToStreamPerFrame",0,
                  L"Maximum number of 2D textures allowed to stream from CPU memory to GPU memory each frame. <= 0 means no limit. This has no effect if r.Streaming.AmortizeCPUToGPUCopy is not set"
                  ,0x40);
  _DAT_146b166e0 = &PTR_FUN_143f3ecf8;
  DAT_146b166f0 = (**(code **)(*DAT_146b166e8 + 0x38))(DAT_146b166e8);
  atexit(FUN_143ebb5f0);
  return;
}



// FUNCTION 14035d9c0 `dynamic_initializer_for_'CVarUseBackgroundThreadPool'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseBackgroundThreadPool''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseBackgroundThreadPool__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16718 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.UseBackgroundThreadPool",1,
                  L"If true, use the background thread pool for mip calculations.",0);
  _DAT_146b16710 = &PTR_FUN_143f3ecf8;
  DAT_146b16720 = (**(code **)(*DAT_146b16718 + 0x38))(DAT_146b16718);
  atexit(FUN_143ebb640);
  return;
}



// FUNCTION 14035daa0 `dynamic_initializer_for_'CVarFlushRHIThreadOnSTreamingTextureLocks'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFlushRHIThreadOnSTreamingTextureLocks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFlushRHIThreadOnSTreamingTextureLocks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17048 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FlushRHIThreadOnSTreamingTextureLocks",0,
                  L"If set to 0, we won\'t do any flushes for streaming textures. This is safe because the texture streamer deals with these hazards explicitly."
                  ,0x20);
  _DAT_146b17040 = &PTR_FUN_143f3ecf8;
  DAT_146b17050 = (**(code **)(*DAT_146b17048 + 0x38))(DAT_146b17048);
  atexit(FUN_143ebb6a0);
  return;
}



// FUNCTION 14035db10 `dynamic_initializer_for_'CVarForceHighestMipOnUITexturesEnabled'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceHighestMipOnUITexturesEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceHighestMipOnUITexturesEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17060 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ForceHighestMipOnUITextures",0,
                  L"If set to 1, texutres in the UI Group will have their highest mip level forced."
                  ,0x20);
  _DAT_146b17058 = &PTR_FUN_143f3ecf8;
  DAT_146b17068 = (**(code **)(*DAT_146b17060 + 0x38))(DAT_146b17060);
  atexit(FUN_143ebb6f0);
  return;
}



// FUNCTION 14035db80 `dynamic_initializer_for_'CVarMobileMaxLoadedMips'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMobileMaxLoadedMips''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMobileMaxLoadedMips__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17090 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MobileMaxLoadedMips",0xe,
                  L"Maximum number of loaded mips for nonstreaming mobile platforms.\n",0x20);
  _DAT_146b17088 = &PTR_FUN_143f3ecf8;
  _DAT_146b17098 = (**(code **)(*DAT_146b17090 + 0x38))(DAT_146b17090);
  atexit(FUN_143ebb740);
  return;
}



// FUNCTION 14035dc00 `dynamic_initializer_for_'CVarMobileReduceLoadedMips'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMobileReduceLoadedMips''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMobileReduceLoadedMips__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17078 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MobileReduceLoadedMips",0,
                  L"Reduce loaded texture mipmaps for nonstreaming mobile platforms.\n",0x20);
  _DAT_146b17070 = &PTR_FUN_143f3ecf8;
  _DAT_146b17080 = (**(code **)(*DAT_146b17078 + 0x38))(DAT_146b17078);
  atexit(FUN_143ebb790);
  return;
}



// FUNCTION 14035dc70 `dynamic_initializer_for_'CVarSetMipMapLODBias'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSetMipMapLODBias''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSetMipMapLODBias__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17018 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.MipMapLODBias",0,
                  L"Apply additional mip map bias for all 2D textures, range of -15.0 to 15.0",0x60)
  ;
  _DAT_146b17010 = &PTR_FUN_143f3ecf8;
  DAT_146b17020 = (**(code **)(*DAT_146b17018 + 0x40))(DAT_146b17018);
  atexit(FUN_143ebb7e0);
  return;
}



// FUNCTION 14035dce0 `dynamic_initializer_for_'CVarSetTextureStreaming'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSetTextureStreaming''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSetTextureStreaming__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16d40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.TextureStreaming",1,
                  L"Allows to define if texture streaming is enabled, can be changed at run time.\n0: off\n1: on (default)"
                  ,0x20);
  _DAT_146b16d38 = &PTR_FUN_143f3ecf8;
  DAT_146b16d48 = (**(code **)(*DAT_146b16d40 + 0x38))(DAT_146b16d40);
  atexit(FUN_143ebb830);
  return;
}



// FUNCTION 14035dd60 `dynamic_initializer_for_'CVarStreamingBoost'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingBoost''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingBoost__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16cf8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.Boost",0x3f800000,
                  L"=1.0: normal\n<1.0: decrease wanted mip levels\n>1.0: increase wanted mip levels"
                  ,0x40);
  _DAT_146b16cf0 = &PTR_FUN_143f3ecf8;
  DAT_146b16d00 = (**(code **)(*DAT_146b16cf8 + 0x40))(DAT_146b16cf8);
  atexit(FUN_143ebb880);
  return;
}



// FUNCTION 14035dde0 `dynamic_initializer_for_'CVarStreamingCheckBuildStatus'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingCheckBuildStatus''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingCheckBuildStatus__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16ec0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.CheckBuildStatus",0,
                  L"If non-zero, the engine will check whether texture streaming needs rebuild.",
                  0x40);
  _DAT_146b16eb8 = &PTR_FUN_143f3ecf8;
  DAT_146b16ec8 = (**(code **)(*DAT_146b16ec0 + 0x38))(DAT_146b16ec0);
  atexit(FUN_143ebb8d0);
  return;
}



// FUNCTION 14035de50 `dynamic_initializer_for_'CVarStreamingDefragDynamicBounds'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingDefragDynamicBounds''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingDefragDynamicBounds__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f08 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.DefragDynamicBounds",1,
                  L"If non-zero, unused dynamic bounds will be removed from the update loop",0);
  _DAT_146b16f00 = &PTR_FUN_143f3ecf8;
  DAT_146b16f10 = (**(code **)(*DAT_146b16f08 + 0x38))(DAT_146b16f08);
  atexit(FUN_143ebb920);
  return;
}



// FUNCTION 14035ded0 `dynamic_initializer_for_'CVarStreamingDropMips'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingDropMips''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingDropMips__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16da0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.DropMips",0,
                  L"0: Drop No Mips \n1: Drop Cached Mips\n2: Drop Cached and Hidden Mips",1);
  _DAT_146b16d98 = &PTR_FUN_143f3ecf8;
  DAT_146b16da8 = (**(code **)(*DAT_146b16da0 + 0x38))(DAT_146b16da0);
  atexit(FUN_143ebb970);
  return;
}



// FUNCTION 14035df40 FUN_14035df40 body=115 status=ok
// SIG undefined FUN_14035df40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035df40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16ea8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.ExpandPoolSizeToVRAM",1,
                  L"If non-zero, expand texture pool size to use (VRAM x PoolSizeVRAMPercentage)",
                  0x40);
  _DAT_146b16ea0 = &PTR_FUN_143f3ecf8;
  _DAT_146b16eb0 = (**(code **)(*DAT_146b16ea8 + 0x38))(DAT_146b16ea8);
  atexit(FUN_143ebb9c0);
  return;
}



// FUNCTION 14035dfc0 FUN_14035dfc0 body=112 status=ok
// SIG undefined FUN_14035dfc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035dfc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.FullyLoadAllTextures",0,
                  L"If non-zero, all texture will be fully streamed in as fast as possible",0);
  _DAT_146b16e40 = &PTR_FUN_143f3ecf8;
  DAT_146b16e50 = (**(code **)(*DAT_146b16e48 + 0x38))(DAT_146b16e48);
  atexit(FUN_143ebba10);
  return;
}



// FUNCTION 14035e030 `dynamic_initializer_for_'CVarStreamingFullyLoadUsedTextures'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingFullyLoadUsedTextures''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingFullyLoadUsedTextures__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.FullyLoadUsedTextures",0,
                  L"If non-zero, all used texture will be fully streamed in as fast as possible",0);
  _DAT_146b16e58 = &PTR_FUN_143f3ecf8;
  DAT_146b16e68 = (**(code **)(*DAT_146b16e60 + 0x38))(DAT_146b16e60);
  atexit(FUN_143ebba60);
  return;
}



// FUNCTION 14035e0a0 `dynamic_initializer_for_'CVarStreamingHLODStrategy'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingHLODStrategy''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingHLODStrategy__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16db8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.HLODStrategy",0,
                  L"Define the HLOD streaming strategy.\n0: stream\n1: stream only mip 0\n2: disable streaming"
                  ,0);
  _DAT_146b16db0 = &PTR_FUN_143f3ecf8;
  DAT_146b16dc0 = (**(code **)(*DAT_146b16db8 + 0x38))(DAT_146b16db8);
  atexit(FUN_143ebbab0);
  return;
}



// FUNCTION 14035e110 `dynamic_initializer_for_'CVarStreamingHiddenPrimitiveScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingHiddenPrimitiveScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingHiddenPrimitiveScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e00 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.HiddenPrimitiveScale",0x3f000000,
                  L"Define the resolution scale to apply when not in range.\n.5: drop one mip\n1: ignore visiblity"
                  ,0);
  _DAT_146b16df8 = &PTR_FUN_143f3ecf8;
  DAT_146b16e08 = (**(code **)(*DAT_146b16e00 + 0x40))(DAT_146b16e00);
  atexit(FUN_143ebbb00);
  return;
}



// FUNCTION 14035e190 FUN_14035e190 body=117 status=ok
// SIG undefined FUN_14035e190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035e190(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f98 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.LastRenderTimeForVisible",0x43960000,
                  L"The time in seconds for last rendertime to qualify as visible",0);
  _DAT_146b16f90 = &PTR_FUN_143f3ecf8;
  DAT_146b16fa0 = (**(code **)(*DAT_146b16f98 + 0x40))(DAT_146b16f98);
  atexit(FUN_143ebbb50);
  return;
}



// FUNCTION 14035e210 `dynamic_initializer_for_'CVarStreamingLimitPoolSizeToVRAM'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingLimitPoolSizeToVRAM''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingLimitPoolSizeToVRAM__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.LimitPoolSizeToVRAM",0,
                  L"If non-zero, texture pool size with be limited to how much GPU mem is available."
                  ,0x40);
  _DAT_146b16e88 = &PTR_FUN_143f3ecf8;
  DAT_146b16e98 = (**(code **)(*DAT_146b16e90 + 0x38))(DAT_146b16e90);
  atexit(FUN_143ebbba0);
  return;
}



// FUNCTION 14035e280 `dynamic_initializer_for_'CVarStreamingMaxHiddenPrimitiveViewBoost'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMaxHiddenPrimitiveViewBoost''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMaxHiddenPrimitiveViewBoost__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16de8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.MaxHiddenPrimitiveViewBoost",0x3fc00000,
                  L"Maximum view boost that can affect hidden primitive.\nThis prevents temporary small FOV from streaming all textures to their highest mips."
                  ,0);
  _DAT_146b16de0 = &PTR_FUN_143f3ecf8;
  DAT_146b16df0 = (**(code **)(*DAT_146b16de8 + 0x40))(DAT_146b16de8);
  atexit(FUN_143ebbbf0);
  return;
}



// FUNCTION 14035e300 `dynamic_initializer_for_'CVarStreamingMaxTempMemoryAllowed'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMaxTempMemoryAllowed''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMaxTempMemoryAllowed__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16d88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.MaxTempMemoryAllowed",0x32,
                  L"Maximum temporary memory used when streaming in or out texture mips.\nThis memory contains mips used for the new updated texture.\nThe value must be high enough to not be a limiting streaming speed factor.\n"
                  ,0);
  _DAT_146b16d80 = &PTR_FUN_143f3ecf8;
  DAT_146b16d90 = (**(code **)(*DAT_146b16d88 + 0x38))(DAT_146b16d88);
  atexit(FUN_143ebbc40);
  return;
}



// FUNCTION 14035e380 `dynamic_initializer_for_'CVarStreamingMaxTextureUVDensity'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMaxTextureUVDensity''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMaxTextureUVDensity__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.MaxTextureUVDensity",0,
                  L"If non-zero, the max UV density a static entry can have.\nUsed to improve level culling from MinLevelTextureScreenSize.\nComponent with bigger entries become handled as dynamic component.\n"
                  ,0);
  _DAT_146b16f48 = &PTR_FUN_143f3ecf8;
  DAT_146b16f58 = (**(code **)(*DAT_146b16f50 + 0x40))(DAT_146b16f50);
  atexit(FUN_143ebbc90);
  return;
}



// FUNCTION 14035e3f0 `dynamic_initializer_for_'CVarStreamingMinBoost'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMinBoost''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMinBoost__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16d10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.MinBoost",0,L"Minimum clamp for r.Streaming.Boost",0);
  _DAT_146b16d08 = &PTR_FUN_143f3ecf8;
  DAT_146b16d18 = (**(code **)(*DAT_146b16d10 + 0x40))(DAT_146b16d10);
  atexit(FUN_143ebbce0);
  return;
}



// FUNCTION 14035e460 `dynamic_initializer_for_'CVarStreamingMinLevelTextureScreenSize'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMinLevelTextureScreenSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMinLevelTextureScreenSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f38 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.MinLevelTextureScreenSize",0x42c80000,
                  L"If non-zero, levels only get handled if any of their referenced texture could be required of this size. Using conservative metrics on the level data."
                  ,0);
  _DAT_146b16f30 = &PTR_FUN_143f3ecf8;
  DAT_146b16f40 = (**(code **)(*DAT_146b16f38 + 0x40))(DAT_146b16f38);
  atexit(FUN_143ebbd30);
  return;
}



// FUNCTION 14035e4e0 `dynamic_initializer_for_'CVarStreamingMinMipForSplitRequest'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMinMipForSplitRequest''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMinMipForSplitRequest__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f20 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.MinMipForSplitRequest",10,
                  L"If non-zero, the minimum hidden mip for which load requests will first load the visible mip"
                  ,0);
  _DAT_146b16f18 = &PTR_FUN_143f3ecf8;
  DAT_146b16f28 = (**(code **)(*DAT_146b16f20 + 0x38))(DAT_146b16f20);
  atexit(FUN_143ebbd80);
  return;
}



// FUNCTION 14035e560 `dynamic_initializer_for_'CVarStreamingMipBias'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingMipBias''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingMipBias__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e18 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.MipBias",0,
                  L"0..x reduce texture quality for streaming by a floating point number.\n0: use full resolution (default)\n1: drop one mip\n2: drop two mips"
                  ,0x40);
  _DAT_146b16e10 = &PTR_FUN_143f3ecf8;
  DAT_146b16e20 = (**(code **)(*DAT_146b16e18 + 0x40))(DAT_146b16e18);
  atexit(FUN_143ebbdd0);
  return;
}



// FUNCTION 14035e5d0 `dynamic_initializer_for_'CVarStreamingNumStaticComponentsProcessedPerFrame'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingNumStaticComponentsProcessedPerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingNumStaticComponentsProcessedPerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16ef0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.NumStaticComponentsProcessedPerFrame",0x32,
                  L"If non-zero, the engine will incrementaly inserting levels by processing this amount of components per frame before they become visible"
                  ,0);
  _DAT_146b16ee8 = &PTR_FUN_143f3ecf8;
  DAT_146b16ef8 = (**(code **)(*DAT_146b16ef0 + 0x38))(DAT_146b16ef0);
  atexit(FUN_143ebbe20);
  return;
}



// FUNCTION 14035e650 FUN_14035e650 body=115 status=ok
// SIG undefined FUN_14035e650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035e650(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f68 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.OverrideMemoryMargin",0xffffffff,
                  L"Override the value of TextureStreaming.MemoryMargin (safety pool) in MB [if >= 0].\n"
                  ,0);
  _DAT_146b16f60 = &PTR_FUN_143f3ecf8;
  DAT_146b16f70 = (**(code **)(*DAT_146b16f68 + 0x38))(DAT_146b16f68);
  atexit(FUN_143ebbe70);
  return;
}



// FUNCTION 14035e6d0 `dynamic_initializer_for_'CVarStreamingPerTextureBiasViewBoostThreshold'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingPerTextureBiasViewBoostThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingPerTextureBiasViewBoostThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16dd0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.PerTextureBiasViewBoostThreshold",0x3fc00000,
                  L"Maximum view boost at which per texture bias will be increased.\nThis prevents temporary small FOV from downgrading permanentely texture quality."
                  ,0);
  _DAT_146b16dc8 = &PTR_FUN_143f3ecf8;
  DAT_146b16dd8 = (**(code **)(*DAT_146b16dd0 + 0x40))(DAT_146b16dd0);
  atexit(FUN_143ebbec0);
  return;
}



// FUNCTION 14035e750 `dynamic_initializer_for_'CVarStreamingPoolSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingPoolSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingPoolSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16d70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.PoolSize",0xffffffff,
                  L"-1: Default texture pool size, otherwise the size in MB",0x40);
  _DAT_146b16d68 = &PTR_FUN_143f3ecf8;
  DAT_146b16d78 = (**(code **)(*DAT_146b16d70 + 0x38))(DAT_146b16d70);
  atexit(FUN_143ebbf10);
  return;
}



// FUNCTION 14035e7d0 `dynamic_initializer_for_'CVarStreamingScreenSizeEffectiveMax'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingScreenSizeEffectiveMax''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingScreenSizeEffectiveMax__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16d28 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.MaxEffectiveScreenSize",0,
                  L"0: Use current actual vertical screen size\n> 0: Clamp wanted mip size calculation to this value for the vertical screen size component."
                  ,0x40);
  _DAT_146b16d20 = &PTR_FUN_143f3ecf8;
  DAT_146b16d30 = (**(code **)(*DAT_146b16d28 + 0x40))(DAT_146b16d28);
  atexit(FUN_143ebbf60);
  return;
}



// FUNCTION 14035e840 FUN_14035e840 body=117 status=ok
// SIG undefined FUN_14035e840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035e840(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16f80 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Streaming.TempMemoryReserved",0x3f800000,
                  L"Fraction of r.Streaming.MaxTempMemoryAllowed that is forced to remain unallocated in the pool (0.0 - 1.0).\n"
                  ,0);
  _DAT_146b16f78 = &PTR_FUN_143f3ecf8;
  DAT_146b16f88 = (**(code **)(*DAT_146b16f80 + 0x40))(DAT_146b16f80);
  atexit(FUN_143ebbfb0);
  return;
}



// FUNCTION 14035e8c0 `dynamic_initializer_for_'CVarStreamingUseAllMips'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingUseAllMips''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingUseAllMips__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.UseAllMips",0,
                  L"If non-zero, all available mips will be used",0);
  _DAT_146b16e70 = &PTR_FUN_143f3ecf8;
  DAT_146b16e80 = (**(code **)(*DAT_146b16e78 + 0x38))(DAT_146b16e78);
  atexit(FUN_143ebc000);
  return;
}



// FUNCTION 14035e930 `dynamic_initializer_for_'CVarStreamingUseFixedPoolSize'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingUseFixedPoolSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingUseFixedPoolSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16d58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.UseFixedPoolSize",0,
                  L"If non-zero, do not allow the pool size to change at run time.",4);
  _DAT_146b16d50 = &PTR_FUN_143f3ecf8;
  DAT_146b16d60 = (**(code **)(*DAT_146b16d58 + 0x38))(DAT_146b16d58);
  atexit(FUN_143ebc050);
  return;
}



// FUNCTION 14035e9a0 `dynamic_initializer_for_'CVarStreamingUseMaterialData'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingUseMaterialData''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingUseMaterialData__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16ed8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.UseMaterialData",1,
                  L"If non-zero, material texture scales and coord will be used",0);
  _DAT_146b16ed0 = &PTR_FUN_143f3ecf8;
  DAT_146b16ee0 = (**(code **)(*DAT_146b16ed8 + 0x38))(DAT_146b16ed8);
  atexit(FUN_143ebc0a0);
  return;
}



// FUNCTION 14035ea20 `dynamic_initializer_for_'CVarStreamingUseNewMetrics'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingUseNewMetrics''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingUseNewMetrics__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16ce0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.UseNewMetrics",1,
                  L"If non-zero, will use improved set of metrics and heuristics.",0);
  _DAT_146b16cd8 = &PTR_FUN_143f3ecf8;
  DAT_146b16ce8 = (**(code **)(*DAT_146b16ce0 + 0x38))(DAT_146b16ce0);
  atexit(FUN_143ebc0f0);
  return;
}



// FUNCTION 14035eaa0 `dynamic_initializer_for_'CVarStreamingUsePerTextureBias'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamingUsePerTextureBias''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamingUsePerTextureBias__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16e30 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.UsePerTextureBias",1,
                  L"If non-zero, each texture will be assigned a mip bias between 0 and MipBias as required to fit in budget."
                  ,0);
  _DAT_146b16e28 = &PTR_FUN_143f3ecf8;
  DAT_146b16e38 = (**(code **)(*DAT_146b16e30 + 0x38))(DAT_146b16e30);
  atexit(FUN_143ebc140);
  return;
}



// FUNCTION 14035eb20 FUN_14035eb20 body=115 status=ok
// SIG undefined FUN_14035eb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035eb20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16fe0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Texture.AllowUpdateContext",1,
                  L"0: Skips calling FMaterialUpdateContext in UTexture::PostEditChangeProperty1: Not skipped (default)"
                  ,0);
  _DAT_146b16fd8 = &PTR_FUN_143f3ecf8;
  _DAT_146b16fe8 = (**(code **)(*DAT_146b16fe0 + 0x38))(DAT_146b16fe0);
  atexit(FUN_143ebc190);
  return;
}



// FUNCTION 14035eba0 `dynamic_initializer_for_'CVarUseMaxQualityMode'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseMaxQualityMode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseMaxQualityMode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16fb0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MaxQualityMode",0,
                  L"If set to 1, override certain system settings to highest quality regardless of performance impact"
                  ,0x20);
  _DAT_146b16fa8 = &PTR_FUN_143f3ecf8;
  DAT_146b16fb8 = (**(code **)(*DAT_146b16fb0 + 0x38))(DAT_146b16fb0);
  atexit(FUN_143ebc1e0);
  return;
}



// FUNCTION 14035ec10 `dynamic_initializer_for_'CVarVirtualTextureEnabled'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVirtualTextureEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVirtualTextureEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17030 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.VirtualTexture",1,
                  L"If set to 1, textures will use virtual memory so they can be partially resident."
                  ,0x20);
  _DAT_146b17028 = &PTR_FUN_143f3ecf8;
  _DAT_146b17038 = (**(code **)(*DAT_146b17030 + 0x38))(DAT_146b17030);
  atexit(FUN_143ebc230);
  return;
}



// FUNCTION 14035ed50 FUN_14035ed50 body=51 status=ok
// SIG undefined FUN_14035ed50(void)

void FUN_14035ed50(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b17330);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146b17330,4000);
  atexit((_func_5014 *)&LAB_143ebc290);
  return;
}



// FUNCTION 14035ed90 FUN_14035ed90 body=115 status=ok
// SIG undefined FUN_14035ed90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035ed90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17378 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.DoConcurrencyTest",2,
                  L"Assert if concurrent access to SetTickFunctionEnable is detected (1=CS+ASSERT,2=CS,3=COUNTER,4=THREADID)."
                  ,0);
  _DAT_146b17370 = &PTR_FUN_143f3ecf8;
  _DAT_146b17380 = (**(code **)(*DAT_146b17378 + 0x38))(DAT_146b17378);
  atexit(FUN_143ebc2a0);
  return;
}



// FUNCTION 14035eea0 FUN_14035eea0 body=266 status=ok
// SIG undefined FUN_14035eea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035eea0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)FUN_142864fc0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b173d0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"tick.AddIndirectTestTickFunctions",
                  L"Add no-op ticks to test performance of ticking infrastructure.",&local_18,0);
  _DAT_146b173c8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035ef99;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035ef99:
  atexit(FUN_143ebc410);
  return;
}



// FUNCTION 14035efb0 FUN_14035efb0 body=266 status=ok
// SIG undefined FUN_14035efb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035efb0(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)FUN_142865a30;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b173c0 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"tick.AddTestTickFunctions",
                  L"Add no-op ticks to test performance of ticking infrastructure.",&local_18,0);
  _DAT_146b173b8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035f0a9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035f0a9:
  atexit(FUN_143ebc460);
  return;
}



// FUNCTION 14035f0c0 FUN_14035f0c0 body=269 status=ok
// SIG undefined FUN_14035f0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035f0c0(void)

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
    plVar1[1] = (longlong)FUN_142868260;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b177a8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"DelayedCmd",
                  L"Performs a console command after a delay specified in frames or seconds.\nUsage:\nTo open playground_p in 10 seconds: \'DelayedCmd 10s open Playground_P\'\nTo take a screenshot in 100 frames: \'DelayedCmd 100f screenshot\'"
                  ,&local_18,0);
  _DAT_146b177a0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035f1bc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035f1bc:
  atexit(FUN_143ebc4b0);
  return;
}



// FUNCTION 14035f1d0 `dynamic_initializer_for_'CPrio_CleanupTaskPriority'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'CPrio_CleanupTaskPriority''(void)

void _dynamic_initializer_for__CPrio_CleanupTaskPriority__(void)

{
  FUN_141eb92c0(&DAT_146b172a0,L"TaskGraph.TaskPriorities.TickCleanupTaskPriority",
                L"Task and thread priority for tick cleanup.",0,0,0xffffffff);
  atexit(FUN_143ebc500);
  return;
}



// FUNCTION 14035f220 FUN_14035f220 body=68 status=ok
// SIG undefined FUN_14035f220(void)

void FUN_14035f220(void)

{
  FUN_141eb92c0(&DAT_146b17270,L"TaskGraph.TaskPriorities.TickDispatchTaskPriority",
                L"Task and thread priority for tick tasks dispatch.",0x800,0,0x200);
  atexit(FUN_143ebc560);
  return;
}



// FUNCTION 14035f270 FUN_14035f270 body=68 status=ok
// SIG undefined FUN_14035f270(void)

void FUN_14035f270(void)

{
  FUN_141eb92c0(&DAT_146b17300,L"TaskGraph.TaskPriorities.HiPriAsyncTickTaskPriority",
                L"Task and thread priority for async ticks that are high priority.",0x800,0,0x200);
  atexit(FUN_143ebc5c0);
  return;
}



// FUNCTION 14035f2c0 `dynamic_initializer_for_'CPrio_NormalAsyncTickTaskPriority'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'CPrio_NormalAsyncTickTaskPriority''(void)

void _dynamic_initializer_for__CPrio_NormalAsyncTickTaskPriority__(void)

{
  FUN_141eb92c0(&DAT_146b172d0,L"TaskGraph.TaskPriorities.NormalAsyncTickTaskPriority",
                L"Task and thread priority for async ticks that are not high priority.",0,0,
                0xffffffff);
  atexit(FUN_143ebc620);
  return;
}



// FUNCTION 14035f310 FUN_14035f310 body=100 status=ok
// SIG undefined FUN_14035f310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035f310(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b175d0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DisableAnnoyingMessages",&DAT_146b1718c,
                  L"diables Lighting Needs rebuilt and texture streaming pool messages",0);
  _DAT_146b175c8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebc680);
  return;
}



// FUNCTION 14035f380 `dynamic_initializer_for_'CVarAllowAsyncComponentTicks'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowAsyncComponentTicks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowAsyncComponentTicks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17218 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.AllowAsyncComponentTicks",1,
                  L"Used to control async component ticks.",0);
  _DAT_146b17210 = &PTR_FUN_143f3ecf8;
  DAT_146b17220 = (**(code **)(*DAT_146b17218 + 0x38))(DAT_146b17218);
  atexit(FUN_143ebc6d0);
  return;
}



// FUNCTION 14035f400 `dynamic_initializer_for_'CVarAllowAsyncTickCleanup'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowAsyncTickCleanup''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowAsyncTickCleanup__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17260 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.AllowAsyncTickCleanup",1,
                  L"If true, ticks are cleaned up in a task thread.",0);
  _DAT_146b17258 = &PTR_FUN_143f3ecf8;
  DAT_146b17268 = (**(code **)(*DAT_146b17260 + 0x38))(DAT_146b17260);
  atexit(FUN_143ebc720);
  return;
}



// FUNCTION 14035f480 `dynamic_initializer_for_'CVarAllowAsyncTickDispatch'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowAsyncTickDispatch''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowAsyncTickDispatch__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17248 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.AllowAsyncTickDispatch",0,
                  L"If true, ticks are dispatched in a task thread.",0);
  _DAT_146b17240 = &PTR_FUN_143f3ecf8;
  DAT_146b17250 = (**(code **)(*DAT_146b17248 + 0x38))(DAT_146b17248);
  atexit(FUN_143ebc770);
  return;
}



// FUNCTION 14035f4f0 `dynamic_initializer_for_'CVarAllowConcurrentQueue'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowConcurrentQueue''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowConcurrentQueue__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17230 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.AllowConcurrentTickQueue",1,
                  L"If true, queue ticks concurrently.",0);
  _DAT_146b17228 = &PTR_FUN_143f3ecf8;
  _DAT_146b17238 = (**(code **)(*DAT_146b17230 + 0x38))(DAT_146b17230);
  atexit(FUN_143ebc7c0);
  return;
}



// FUNCTION 14035f570 FUN_14035f570 body=115 status=ok
// SIG undefined FUN_14035f570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035f570(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17708 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AllowFramerateSmoothing",1,
                  L"Set to 0 to force framerate smoothing to be disabled. If it\'s set to 1 the value UEngine::bSmoothFrameRate is used to determine whether smoothing is used"
                  ,0);
  _DAT_146b17700 = &PTR_FUN_143f3ecf8;
  DAT_146b17710 = (**(code **)(*DAT_146b17708 + 0x38))(DAT_146b17708);
  atexit(FUN_143ebc810);
  return;
}



// FUNCTION 14035f5f0 `dynamic_initializer_for_'CVarAllowHighQualityLightMaps'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowHighQualityLightMaps''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowHighQualityLightMaps__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17778 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.HighQualityLightMaps",1,
                  L"If set to 1, allow high quality lightmaps which don\'t bake in direct lighting of stationary lights"
                  ,0x24);
  _DAT_146b17770 = &PTR_FUN_143f3ecf8;
  DAT_146b17780 = (**(code **)(*DAT_146b17778 + 0x38))(DAT_146b17778);
  atexit(FUN_143ebc860);
  return;
}



// FUNCTION 14035f670 `dynamic_initializer_for_'CVarAllowOneFrameThreadLag'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowOneFrameThreadLag''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowOneFrameThreadLag__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b175f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.OneFrameThreadLag",1,
                  L"Whether to allow the rendering thread to lag one frame behind the game thread (0: disabled, otherwise enabled)"
                  ,0);
  _DAT_146b175f0 = &PTR_FUN_143f3ecf8;
  _DAT_146b17600 = (**(code **)(*DAT_146b175f8 + 0x38))(DAT_146b175f8);
  atexit(FUN_143ebc8b0);
  return;
}



// FUNCTION 14035f6f0 `dynamic_initializer_for_'CVarCauseHitches'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCauseHitches''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCauseHitches__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b176c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"CauseHitches",0,
                  L"Causes a 200ms hitch every second. Size of the hitch is controlled by CauseHitchesHitchMS"
                  ,0);
  _DAT_146b176b8 = &PTR_FUN_143f3ecf8;
  DAT_146b176c8 = (**(code **)(*DAT_146b176c0 + 0x38))(DAT_146b176c0);
  atexit(FUN_143ebc900);
  return;
}



// FUNCTION 14035f760 `dynamic_initializer_for_'CVarCauseHitchesMS'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCauseHitchesMS''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCauseHitchesMS__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b176d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"CauseHitchesHitchMS",200,
                  L"Controls the size of the hitch caused by CauseHitches in ms.",0);
  _DAT_146b176d0 = &PTR_FUN_143f3ecf8;
  DAT_146b176e0 = (**(code **)(*DAT_146b176d8 + 0x38))(DAT_146b176d8);
  atexit(FUN_143ebc950);
  return;
}



// FUNCTION 14035f7e0 `dynamic_initializer_for_'CVarCollectGarbageEveryFrame'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCollectGarbageEveryFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCollectGarbageEveryFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17670 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gc.CollectGarbageEveryFrame",0,
                  L"Used to debug garbage collection...Collects garbage every frame if the value is > 0."
                  ,0);
  _DAT_146b17668 = &PTR_FUN_143f3ecf8;
  DAT_146b17678 = (**(code **)(*DAT_146b17670 + 0x38))(DAT_146b17670);
  atexit(FUN_143ebc9a0);
  return;
}



// FUNCTION 14035f850 `dynamic_initializer_for_'CVarDumpCopyPropertiesForUnrelatedObjects'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDumpCopyPropertiesForUnrelatedObjects''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDumpCopyPropertiesForUnrelatedObjects__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17750 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"DumpCopyPropertiesForUnrelatedObjects",0,
                  L"Dump the objects that are cross class copied",0);
  _DAT_146b17748 = &PTR_FUN_143f3ecf8;
  DAT_146b17758 = (**(code **)(*DAT_146b17750 + 0x38))(DAT_146b17750);
  atexit(FUN_143ebc9f0);
  return;
}



// FUNCTION 14035f8c0 `dynamic_initializer_for_'CVarDynamicResOperationMode'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDynamicResOperationMode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDynamicResOperationMode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17620 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DynamicRes.OperationMode",0,
                  L"Select the operation mode for dynamic resolution.\n 0: Disabled (default);\n 1: Enable according to the game user settings;\n 2: Enable regardless of the game user settings."
                  ,0x20);
  _DAT_146b17618 = &PTR_FUN_143f3ecf8;
  DAT_146b17628 = (**(code **)(*DAT_146b17620 + 0x38))(DAT_146b17620);
  atexit(FUN_143ebca40);
  return;
}



// FUNCTION 14035f930 FUN_14035f930 body=112 status=ok
// SIG undefined FUN_14035f930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035f930(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17538 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.EditorShowSceneDrawCounter",0,
                  L"0: Scene Draw Counter is not shown in editor (due to viewports like Material Editor counting as Scenes\n1: Scene Draw Counter is always shown in editor"
                  ,0);
  _DAT_146b17530 = &PTR_FUN_143f3ecf8;
  _DAT_146b17540 = (**(code **)(*DAT_146b17538 + 0x38))(DAT_146b17538);
  atexit(FUN_143ebca90);
  return;
}



// FUNCTION 14035f9a0 `dynamic_initializer_for_'CVarFullSizeUnitGraph'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFullSizeUnitGraph''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFullSizeUnitGraph__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17580 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"FullSizeUnitGraph",0,
                  L"If true, the unit graph is the old full size, full brightness version.",0);
  _DAT_146b17578 = &PTR_FUN_143f3ecf8;
  _DAT_146b17588 = (**(code **)(*DAT_146b17580 + 0x38))(DAT_146b17580);
  atexit(FUN_143ebcc20);
  return;
}



// FUNCTION 14035fa10 `dynamic_initializer_for_'CVarLogTicks'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLogTicks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLogTicks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b171e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.LogPauseTicks",0,L"Spew ticks for debugging.",0);
  _DAT_146b171e0 = &PTR_FUN_143f3ecf8;
  _DAT_146b171f0 = (**(code **)(*DAT_146b171e8 + 0x38))(DAT_146b171e8);
  atexit(FUN_143ebcc70);
  return;
}



// FUNCTION 14035fa80 `dynamic_initializer_for_'CVarLogTicks'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLogTicks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLogTicks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b171d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.LogTicks",0,L"Spew ticks for debugging.",0);
  _DAT_146b171c8 = &PTR_FUN_143f3ecf8;
  DAT_146b171d8 = (**(code **)(*DAT_146b171d0 + 0x38))(DAT_146b171d0);
  atexit(FUN_143ebccc0);
  return;
}



// FUNCTION 14035faf0 `dynamic_initializer_for_'CVarLogTicksShowPrerequistes'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLogTicksShowPrerequistes''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLogTicksShowPrerequistes__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17200 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"tick.ShowPrerequistes",1,
                  L"When logging ticks, show the prerequistes; debugging.",0);
  _DAT_146b171f8 = &PTR_FUN_143f3ecf8;
  DAT_146b17208 = (**(code **)(*DAT_146b17200 + 0x38))(DAT_146b17200);
  atexit(FUN_143ebcd10);
  return;
}



// FUNCTION 14035fb70 `dynamic_initializer_for_'CVarMaxFPS'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxFPS''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxFPS__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b176a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"t.MaxFPS",0,
                  L"Caps FPS to the given value.  Set to <= 0 to be uncapped.",0);
  _DAT_146b176a0 = &PTR_FUN_143f3ecf8;
  DAT_146b176b0 = (**(code **)(*DAT_146b176a8 + 0x40))(DAT_146b176a8);
  atexit(FUN_143ebcd60);
  return;
}



// FUNCTION 14035fbe0 FUN_14035fbe0 body=112 status=ok
// SIG undefined FUN_14035fbe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035fbe0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17520 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShowDetailedFPSUnitStat",0,
                  L"0: FPS unit stat is displayed as normal\'1: FPS unit stat is displayed followed by an \'S\' if FrameRate Smoothing is enabled and a \'V\' is VSync is enabled "
                  ,0);
  _DAT_146b17518 = &PTR_FUN_143f3ecf8;
  _DAT_146b17528 = (**(code **)(*DAT_146b17520 + 0x38))(DAT_146b17520);
  atexit(FUN_143ebcdb0);
  return;
}



// FUNCTION 14035fc50 FUN_14035fc50 body=112 status=ok
// SIG undefined FUN_14035fc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035fc50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b174f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShowGpuBusyUnitStat",0,
                  L"0: GPU Busy unit stat will be surpressed in \'stat unit\'1: GPU Busy unit stat will be included in \'stat unit\'2: GPU Busy unit stat will replace GPU unit stat\'"
                  ,0);
  _DAT_146b174e8 = &PTR_FUN_143f3ecf8;
  DAT_146b174f8 = (**(code **)(*DAT_146b174f0 + 0x38))(DAT_146b174f0);
  atexit(FUN_143ebce00);
  return;
}



// FUNCTION 14035fcc0 FUN_14035fcc0 body=115 status=ok
// SIG undefined FUN_14035fcc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035fcc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b174d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShowRHIThreadUnitStat",1,
                  L"If set to 1, RHI thread unit stat will be included in \'stat unit\'\nIf set to 2, Epic\'s RHI thread timing will be used instead of GBX\'s"
                  ,0);
  _DAT_146b174d0 = &PTR_FUN_143f3ecf8;
  DAT_146b174e0 = (**(code **)(*DAT_146b174d8 + 0x38))(DAT_146b174d8);
  atexit(FUN_143ebce50);
  return;
}



// FUNCTION 14035fd40 FUN_14035fd40 body=112 status=ok
// SIG undefined FUN_14035fd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035fd40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17508 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShowRenderThreadIdleUnitStat",0,
                  L"0: Nothing is displayed1: RenderThread unit timer will display Idle, Query and Flip values representing GRenderThreadIdle"
                  ,0);
  _DAT_146b17500 = &PTR_FUN_143f3ecf8;
  DAT_146b17510 = (**(code **)(*DAT_146b17508 + 0x38))(DAT_146b17508);
  atexit(FUN_143ebcea0);
  return;
}



// FUNCTION 14035fdb0 `dynamic_initializer_for_'CVarStallStartFrame'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStallStartFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStallStartFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b171b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CriticalPathStall.TickStartFrame",0,
                  L"Sleep for the given time in start frame. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
                  ,0);
  _DAT_146b171b0 = &PTR_FUN_143f3ecf8;
  _DAT_146b171c0 = (**(code **)(*DAT_146b171b8 + 0x40))(DAT_146b171b8);
  atexit(FUN_143ebcef0);
  return;
}



// FUNCTION 14035fe20 FUN_14035fe20 body=112 status=ok
// SIG undefined FUN_14035fe20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035fe20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b175e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.StatNamedEventsMaxStack",0,
                  L"NamedEvents will not be emitted for events past this value.",0);
  _DAT_146b175d8 = &PTR_FUN_143f3ecf8;
  DAT_146b175e8 = (**(code **)(*DAT_146b175e0 + 0x38))(DAT_146b175e0);
  atexit(FUN_143ebcf40);
  return;
}



// FUNCTION 14035fe90 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17658 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.StatsHudXPosition",0x3f4ccccd,
                  L"Sets the Horizontal position of the Stats Hud [0 to 1].",0);
  _DAT_146b17650 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebcf90);
  return;
}



// FUNCTION 14035ff00 `dynamic_initializer_for_'OctreeIncrementalUpdateLimit'' body=101 status=ok
// SIG undefined `dynamic_initializer_for_'OctreeIncrementalUpdateLimit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EditableMesh::_dynamic_initializer_for__OctreeIncrementalUpdateLimit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17648 =
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.StatsHudYPosition",0x3dcccccd,
                  L"Sets the Vertical position of the Stats Hud [0 to 1].",0);
  _DAT_146b17640 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebcfe0);
  return;
}



// FUNCTION 14035ff70 `dynamic_initializer_for_'CVarSystemResolution'' body=179 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSystemResolution''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSystemResolution__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"1280x720w",0x14);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17610 =
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.SetRes",local_18,
                  L"Set the display resolution for the current game view. Has no effect in the editor.\ne.g. 1280x720w for windowed\n     1920x1080f for fullscreen\n     1920x1080wf for windowed fullscreen\n"
                  ,0);
  _DAT_146b17608 = &PTR_FUN_143f3ecf0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  _DAT_146b17608 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebd030);
  return;
}



// FUNCTION 140360030 `dynamic_initializer_for_'CVarTimeBetweenPurgingPendingKillObjects'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTimeBetweenPurgingPendingKillObjects''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTimeBetweenPurgingPendingKillObjects__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17688 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gc.TimeBetweenPurgingPendingKillObjects",&DAT_146535184,
                  L"Time in seconds (game time) we should wait between purging object references to objects that are pending kill."
                  ,0);
  _DAT_146b17680 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebd080);
  return;
}



// FUNCTION 1403600a0 `dynamic_initializer_for_'CVarTimeBetweenPurgingPendingKillObjectsOnIdleServerMultiplier'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTimeBetweenPurgingPendingKillObjectsOnIdleServerMultiplier''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTimeBetweenPurgingPendingKillObjectsOnIdleServerMultiplier__
               (void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17698 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gc.TimeBetweenPurgingPendingKillObjectsOnIdleServerMultiplier",
                  &DAT_146535188,
                  L"Multiplier to apply to time between purging pending kill objects when on an idle server."
                  ,0);
  _DAT_146b17690 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebd0d0);
  return;
}



// FUNCTION 140360110 `dynamic_initializer_for_'CVarUnsteadyFPS'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUnsteadyFPS''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUnsteadyFPS__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b176f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"t.UnsteadyFPS",0,
                  L"Causes FPS to bounce around randomly in the 8-32 range.",0);
  _DAT_146b176e8 = &PTR_FUN_143f3ecf8;
  DAT_146b176f8 = (**(code **)(*DAT_146b176f0 + 0x38))(DAT_146b176f0);
  atexit(FUN_143ebd120);
  return;
}



// FUNCTION 1403601c0 `dynamic_initializer_for_'GDoAsyncLoadingWhileWaitingForVSyncCVar'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GDoAsyncLoadingWhileWaitingForVSyncCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GDoAsyncLoadingWhileWaitingForVSyncCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17720 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Engine.DoAsyncLoadingWhileWaitingForVSync",&DAT_146535178,
                  L"If true process async loading while we wait for vsync.",0);
  _DAT_146b17718 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebd210);
  return;
}



// FUNCTION 140360230 FUN_140360230 body=269 status=ok
// SIG undefined FUN_140360230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140360230(void)

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
    plVar1[1] = (longlong)SetNearClipPlane;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17768 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"r.SetNearClipPlane",L"Set the near clipping plane (in cm)",
                  &local_18,0);
  _DAT_146b17760 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14036032c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14036032c:
  atexit(FUN_143ebd2a0);
  return;
}



// FUNCTION 140360340 `dynamic_initializer_for_'GSupressWarningsInOnScreenDisplayCVar'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GSupressWarningsInOnScreenDisplayCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GSupressWarningsInOnScreenDisplayCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17638 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Engine.SupressWarningsInOnScreenDisplay",&DAT_146b17198,
                  L"0: Show both errors and warnings on screen, 1: Show only errors on screen (in either case only when DurationOfErrorsAndWarningsOnHUD is greater than zero)"
                  ,0);
  _DAT_146b17630 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebd2f0);
  return;
}



// FUNCTION 1403603b0 FUN_1403603b0 body=67 status=ok
// SIG undefined FUN_1403603b0(void)

void FUN_1403603b0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146535200 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_146535200);
  atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
  return;
}



// FUNCTION 140360400 FUN_140360400 body=67 status=ok
// SIG undefined FUN_140360400(void)

void FUN_140360400(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146535330 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_146535330);
  atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
  return;
}



// FUNCTION 140360460 FUN_140360460 body=266 status=ok
// SIG undefined FUN_140360460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140360460(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)OnListTimers;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b173e0 =
       (**(code **)(*DAT_1468b1f88 + 0x78))(DAT_1468b1f88,L"ListTimers",&DAT_1451ca254,&local_18,0);
  _DAT_146b173d8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140360559;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140360559:
  atexit(FUN_143ebd3c0);
  return;
}



// FUNCTION 140360590 `dynamic_initializer_for_'ModuleRegistrantEngine'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantEngine''(void)

void _dynamic_initializer_for__ModuleRegistrantEngine__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b174b9;
    plVar1[2] = (longlong)FUN_14287eea0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Engine",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1403606f0 FUN_1403606f0 body=105 status=ok
// SIG undefined FUN_1403606f0(void)

void FUN_1403606f0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PostProcessSettings",1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0x600;
    *puVar2 = &PTR_FUN_1451dd450;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x10;
    UScriptStruct::DeferCppStructOps(uVar1,puVar2);
    return;
  }
  UScriptStruct::DeferCppStructOps(uVar1,0);
  return;
}



// FUNCTION 140360760 FUN_140360760 body=269 status=ok
// SIG undefined FUN_140360760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140360760(void)

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
    plVar1[1] = (longlong)RemoveTestTickFunctions;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b173b0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"tick.RemoveTestTickFunctions",
                  L"Remove no-op ticks to test performance of ticking infrastructure.",&local_18,0);
  _DAT_146b173a8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14036085c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14036085c:
  atexit(FUN_143ebd410);
  return;
}



// FUNCTION 140360870 FUN_140360870 body=269 status=ok
// SIG undefined FUN_140360870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140360870(void)

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
    plVar1[1] = (longlong)FUN_14288f600;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b17798 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"SetThreadAffinity",
                  L"Sets the thread affinity. A single arg of default resets the thread affinity, otherwise pairs of args [GT|RT|RHI|Task] [Hex affinity] sets the affinity."
                  ,&local_18,0);
  _DAT_146b17790 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14036096c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14036096c:
  atexit(FUN_143ebd460);
  return;
}



// FUNCTION 1403609b0 FUN_1403609b0 body=32 status=ok
// SIG undefined FUN_1403609b0(void)

void FUN_1403609b0(void)

{
  FUN_1408bb700(&DAT_146b173e8);
  atexit((_func_5014 *)&LAB_143ebd6a0);
  return;
}



// FUNCTION 140360aa0 StaticStruct'' body=407 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FCompositeAnimatedVectorFieldUniformParameters::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
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
  undefined2 *puStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FCompositeAnimatedVectorFieldUniformParameters::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"NoiseMax";
  local_28 = 0x34;
  puStack_30 = &DAT_143f3eda8;
  local_40 = local_40 + 1;
  uStack_24 = 4;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  puVar4 = puStack_30;
  iVar3 = local_40;
  puStack_30 = &DAT_143f3eda8;
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0x38;
  uStack_24 = 3;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puVar4;
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
  local_38 = L"Op";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puStack_30;
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
  uVar13 = FName::FName(local_res8,L"FCompositeAnimatedVectorFieldUniformParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b18ab0,uVar13,L"FCompositeAnimatedVectorFieldUniformParameters",&DAT_1451e1598,
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x40,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143ebd770);
  return;
}



// FUNCTION 140360c40 StaticStruct'' body=601 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FVectorFieldVisualizationParameters::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined8 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined2 *puStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_40 = 1;
  local_48 = (undefined8 *)0x0;
  local_38 = L"VolumeToWorld";
  puStack_30 = &DAT_143f3eda8;
  local_28 = 0;
  uStack_10 = 0;
  uStack_24 = 4;
  uStack_1c = 4;
  local_18 = 4;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,0);
  uVar6 = uStack_1c;
  uVar3 = local_28;
  puVar2 = puStack_30;
  puStack_30 = &DAT_143f3eda8;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x40;
  *local_48 = local_38;
  local_48[1] = puVar2;
  uStack_24 = 4;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uStack_1c = 4;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
  local_18 = 4;
  *(undefined4 *)(local_48 + 4) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar8;
  *(undefined4 *)(local_48 + 5) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_10._4_4_;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"VolumeToWorldNoScale";
  uStack_10 = 0;
  iVar11 = (int)local_40 + 1;
  if (local_40._4_4_ < iVar11) {
    uVar13 = local_40 & 0xffffffff;
    local_40._0_4_ = iVar11;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar13);
    iVar11 = (int)local_40;
  }
  local_40._0_4_ = iVar11;
  uVar6 = uStack_1c;
  uVar3 = local_28;
  puVar2 = puStack_30;
  iVar11 = (int)local_40;
  puStack_30 = &DAT_143f3eda8;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x80;
  uStack_24 = 4;
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = puVar2;
  uStack_1c = 1;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uVar9 = (undefined4)uStack_10;
  uVar10 = uStack_10._4_4_;
  local_18 = 3;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
  uStack_10 = 0;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar8;
  *(undefined4 *)(puVar1 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar10;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"VoxelSize";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
  }
  uVar6 = uStack_1c;
  uVar3 = local_28;
  puVar2 = puStack_30;
  iVar11 = (int)local_40;
  puStack_30 = &DAT_143f3eda8;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x8c;
  uStack_24 = 4;
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = puVar2;
  uStack_1c = 1;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uVar9 = (undefined4)uStack_10;
  uVar10 = uStack_10._4_4_;
  local_18 = 1;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
  uStack_10 = 0;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar8;
  *(undefined4 *)(puVar1 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar10;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"Scale";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
  }
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = puStack_30;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = local_28;
  *(undefined4 *)((longlong)puVar1 + 4) = (undefined4)uStack_24;
  *(undefined4 *)(puVar1 + 1) = uStack_24._4_4_;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_1c;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = (undefined4)local_18;
  *(undefined4 *)((longlong)puVar1 + 4) = local_18._4_4_;
  *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_10._4_4_;
  uVar12 = FName::FName(local_res8,L"FVectorFieldVisualizationParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b18c90,uVar12,L"FVectorFieldVisualizationParameters",L"VectorFieldVis",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x90,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143ebd780);
  return;
}



// FUNCTION 140360ea0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCopyDataCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b19050,0,L"TCopyDataCS<1>",L"/Engine/Private/UpdateTextureShaders.usf",
             L"CopyData1CS",5,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b19050 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b19180 = TCopyDataCS<1>::ConstructCompiledInstance;
  _DAT_146b19188 = &LAB_1424ad6d0;
  _DAT_146b19190 = BuildSettings::IsPromotedBuild;
  _DAT_146b19198 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebd790);
  return;
}



// FUNCTION 140360f50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCopyDataCS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b18f00,0,L"TCopyDataCS<2>",L"/Engine/Private/UpdateTextureShaders.usf",
             L"CopyData2CS",5,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b18f00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b19030 = TCopyDataCS<1>::ConstructCompiledInstance;
  _DAT_146b19038 = &LAB_1424ad6d0;
  _DAT_146b19040 = BuildSettings::IsPromotedBuild;
  _DAT_146b19048 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebd7a0);
  return;
}



// FUNCTION 140361000 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCompositeAnimatedVectorFieldCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b18b40,0,L"FCompositeAnimatedVectorFieldCS",
             L"/Engine/Private/VectorFieldCompositeShaders.usf",L"CompositeAnimatedVectorField",5,1,
             FUN_141c48400,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b18b40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b18c70 = FCompositeAnimatedVectorFieldCS::ConstructCompiledInstance;
  _DAT_146b18c78 = &LAB_1424ad6d0;
  _DAT_146b18c80 = BuildSettings::IsPromotedBuild;
  _DAT_146b18c88 = FUN_1428b3fd0;
  atexit((_func_5014 *)&LAB_143ebd7b0);
  return;
}



// FUNCTION 1403610b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopyTexture2DCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b18770,0,L"FCopyTexture2DCS",L"/Engine/Private/UpdateTextureShaders.usf",
             L"CopyTexture2DCS",5,1,FUN_1428a1d60,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b18770 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b188a0 = FCopyTexture2DCS::ConstructCompiledInstance;
  _DAT_146b188a8 = &LAB_1424ad6d0;
  _DAT_146b188b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b188b8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebd7c0);
  return;
}



// FUNCTION 140361160 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FUpdateTexture2DSubresouceCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b184d0,0,L"FUpdateTexture2DSubresouceCS",
             L"/Engine/Private/UpdateTextureShaders.usf",L"UpdateTexture2DSubresourceCS",5,1,
             FUN_1428a1db0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b184d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b18600 = FUpdateTexture2DSubresouceCS::ConstructCompiledInstance;
  _DAT_146b18608 = &LAB_1424ad6d0;
  _DAT_146b18610 = BuildSettings::IsPromotedBuild;
  _DAT_146b18618 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebd7d0);
  return;
}



// FUNCTION 140361210 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FUpdateTexture3DSubresouceCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b18620,0,L"FUpdateTexture3DSubresouceCS",
             L"/Engine/Private/UpdateTextureShaders.usf",L"UpdateTexture3DSubresourceCS",5,1,
             FUN_1428a1e00,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b18620 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b18750 = FUpdateTexture3DSubresouceCS::ConstructCompiledInstance;
  _DAT_146b18758 = &LAB_1424ad6d0;
  _DAT_146b18760 = BuildSettings::IsPromotedBuild;
  _DAT_146b18768 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebd7e0);
  return;
}



// FUNCTION 1403612c0 StaticType'' body=117 status=ok
// SIG undefined StaticType''(void)

void `dynamic_initializer_for_'FVectorFieldVisualizationVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_146b18d20,L"FVectorFieldVisualizationVertexFactory",
             L"/Engine/Private/VectorFieldVisualizationVertexFactory.ush",1,0,1,0,0,
             ConstructFVectorFieldVisualizationVertexFactoryShaderParameters,FUN_1428bcff0,
             AK::MemoryMgr::StartProfileThreadUsage,FOutputDevice::CanBeUsedOnAnyThread);
  atexit((_func_5014 *)&LAB_143ebd7f0);
  return;
}



// FUNCTION 140361360 FUN_140361360 body=112 status=ok
// SIG undefined FUN_140361360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361360(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b18960 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.CanvasDisableDPIScaling",0,
                  L"0: No Override. 1: Disable DPI Scaling when HighDPI mode is enabled, 2: Always disable DPI scaling"
                  ,0);
  _DAT_146b18958 = &PTR_FUN_143f3ecf8;
  DAT_146b18968 = (**(code **)(*DAT_146b18960 + 0x38))(DAT_146b18960);
  atexit(FUN_143ebd900);
  return;
}



// FUNCTION 140361540 FUN_140361540 body=67 status=ok
// SIG undefined FUN_140361540(void)

void FUN_140361540(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1465355e8 + 0x28))();
    atexit(FUN_143ebd9d0);
    return;
  }
  FUN_141edf270(&PTR_PTR_1465355e8);
  atexit(FUN_143ebd9d0);
  return;
}



// FUNCTION 140361590 FUN_140361590 body=67 status=ok
// SIG undefined FUN_140361590(void)

void FUN_140361590(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1465355b0 + 0x28))();
    atexit(FUN_143ebda20);
    return;
  }
  FUN_141edf270(&PTR_PTR_1465355b0);
  atexit(FUN_143ebda20);
  return;
}



// FUNCTION 1403615e0 `dynamic_initializer_for_'GVisualLoggerVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GVisualLoggerVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GVisualLoggerVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146535620;
  uStack_14 = uRam0000000146535624;
  uStack_10 = uRam0000000146535628;
  uStack_c = uRam000000014653562c;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VisualLogger",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b18ed0,&local_18,4,*puVar1);
  atexit((_func_5014 *)&LAB_143ebda60);
  return;
}



// FUNCTION 140361640 `dynamic_initializer_for_'LeadingInputText'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'LeadingInputText''(void)

void ConsoleDefs::_dynamic_initializer_for__LeadingInputText__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146535598,0);
  FGenericPlatformString::Memcpy(DAT_146535598,&DAT_1451e1a18,8);
  atexit((_func_5014 *)&LAB_143ebdb20);
  return;
}



// FUNCTION 1403618b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FWriteToSliceGS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b19770,0,L"FWriteToSliceGS",L"/Engine/Private/TranslucentLightingShaders.usf",
             L"WriteToSliceMainGS",4,1,FClearReplacementPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b19770 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b198a0 = FWriteToSliceGS::ConstructCompiledInstance;
  _DAT_146b198a8 = FWriteToSliceGS::ShouldCompilePermutation;
  _DAT_146b198b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b198b8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebde30);
  return;
}



// FUNCTION 140361960 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FWriteToSliceVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b198c0,0,L"FWriteToSliceVS",L"/Engine/Private/TranslucentLightingShaders.usf",
             L"WriteToSliceMainVS",0,1,FUN_141dc6ed0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b198c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b199f0 = FUN_1428c7c50;
  _DAT_146b199f8 = &LAB_1428d8300;
  _DAT_146b19a00 = BuildSettings::IsPromotedBuild;
  _DAT_146b19a08 = FWriteToBoundingSphereVS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143ebde40);
  return;
}



// FUNCTION 140361a30 `dynamic_initializer_for_'CVarAllowVolumeTextureAssetCreation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowVolumeTextureAssetCreation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowVolumeTextureAssetCreation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19760 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AllowVolumeTextureAssetCreation",0,
                  L"Enable UVolumeTexture assets",4);
  _DAT_146b19758 = &PTR_FUN_143f3ecf8;
  _DAT_146b19768 = (**(code **)(*DAT_146b19760 + 0x38))(DAT_146b19760);
  atexit(FUN_143ebdee0);
  return;
}



// FUNCTION 140361aa0 `dynamic_initializer_for_'CVarDisableRemapScriptActors'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDisableRemapScriptActors''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDisableRemapScriptActors__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19a48 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"net.DisableRemapScriptActors",&DAT_146b196d0,
                  L"When set, disables name remapping of compiled script actors (for networking)",0)
  ;
  _DAT_146b19a40 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebdf30);
  return;
}



// FUNCTION 140361b10 FUN_140361b10 body=112 status=ok
// SIG undefined FUN_140361b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361b10(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19a58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ForceBuildAutoCompleteList",0,
                  L"0: Console autocomplete list is built when the console receives input for the first time (this can cause a ~1 sec hitch)\n1: Console autocomplete list is built in UWorld::InitializeActorsForPlay()"
                  ,0);
  _DAT_146b19a50 = &PTR_FUN_143f3ecf8;
  DAT_146b19a60 = (**(code **)(*DAT_146b19a58 + 0x38))(DAT_146b19a58);
  atexit(FUN_143ebdf80);
  return;
}



// FUNCTION 140361b80 `dynamic_initializer_for_'CVarVoiceSilenceDetectionAttackTime'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVoiceSilenceDetectionAttackTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVoiceSilenceDetectionAttackTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19718 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"voice.SilenceDetectionAttackTime",0x40000000,
                  L"Attack time to be set for the VOIP microphone\'s silence detection algorithm in milliseconds.\n"
                  ,0);
  _DAT_146b19710 = &PTR_FUN_143f3ecf8;
  _DAT_146b19720 = (**(code **)(*DAT_146b19718 + 0x40))(DAT_146b19718);
  atexit(FUN_143ebdfd0);
  return;
}



// FUNCTION 140361c00 `dynamic_initializer_for_'CVarVoiceSilenceDetectionReleaseTime'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVoiceSilenceDetectionReleaseTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVoiceSilenceDetectionReleaseTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19730 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"voice.SilenceDetectionReleaseTime",0x44898000,
                  L"Release time to be set for the VOIP microphone\'s silence detection algorithm in milliseconds.\n"
                  ,0);
  _DAT_146b19728 = &PTR_FUN_143f3ecf8;
  _DAT_146b19738 = (**(code **)(*DAT_146b19730 + 0x40))(DAT_146b19730);
  atexit(FUN_143ebe020);
  return;
}



// FUNCTION 140361c80 `dynamic_initializer_for_'CVarVoiceSilenceDetectionThreshold'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVoiceSilenceDetectionThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVoiceSilenceDetectionThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19748 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"voice.SilenceDetectionThreshold",0x3ca3d70a,
                  L"Threshold to be set for the VOIP microphone\'s silence detection algorithm.\n",0
                 );
  _DAT_146b19740 = &PTR_FUN_143f3ecf8;
  _DAT_146b19750 = (**(code **)(*DAT_146b19748 + 0x40))(DAT_146b19748);
  atexit(FUN_143ebe070);
  return;
}



// FUNCTION 140361d00 FUN_140361d00 body=112 status=ok
// SIG undefined FUN_140361d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361d00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19a18 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.VolumetricLightMapVolume.ShowBrush",0,&DAT_1451e585c,0);
  _DAT_146b19a10 = &PTR_FUN_143f3ecf8;
  DAT_146b19a20 = (**(code **)(*DAT_146b19a18 + 0x38))(DAT_146b19a18);
  atexit(FUN_143ebe0c0);
  return;
}



// FUNCTION 140361d70 FUN_140361d70 body=266 status=ok
// SIG undefined FUN_140361d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361d70(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1428c8f50;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19ab8 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"DumpLevelCollections",
                  L"Dump level collections in the current world.",&local_18,0);
  _DAT_146b19ab0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140361e69;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140361e69:
  atexit(FUN_143ebe130);
  return;
}



// FUNCTION 140361e80 FUN_140361e80 body=266 status=ok
// SIG undefined FUN_140361e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361e80(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_1428c91b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19aa8 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"DumpVisibleActors",L"Dump visible actors in current world.",
                  &local_18,0);
  _DAT_146b19aa0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140361f79;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140361f79:
  atexit(FUN_143ebe180);
  return;
}



// FUNCTION 140361fc0 FUN_140361fc0 body=269 status=ok
// SIG undefined FUN_140361fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361fc0(void)

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
    plVar1[1] = (longlong)ForceBuildStreamingData;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b19a98 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"ForceBuildStreamingData",
                  L"Forces streaming data to be rebuilt for the current world.",&local_18,0);
  _DAT_146b19a90 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403620bc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403620bc:
  atexit(FUN_143ebe1d0);
  return;
}



// FUNCTION 1403620d0 FUN_1403620d0 body=67 status=ok
// SIG undefined FUN_1403620d0(void)

void FUN_1403620d0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1465358d0 + 0x28))();
    atexit(FUN_143ebe220);
    return;
  }
  FUN_141edf270(&PTR_PTR_1465358d0);
  atexit(FUN_143ebe220);
  return;
}



// FUNCTION 140362580 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AActor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AActor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AActor__(void)

{
  UObjectCompiledInDefer(FUN_1428de1c0,&LAB_140493a70,L"AActor",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140362770 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAlphaBlend'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAlphaBlend''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAlphaBlend__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451faff0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AlphaBlend",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403627d0 FUN_1403627d0 body=92 status=ok
// SIG undefined FUN_1403627d0(void)

void FUN_1403627d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fba70;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimCompressProfile",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362830 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInfo__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fbed0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimGroupInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362890 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInstance'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInstance''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInstance__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fb3e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimGroupInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403628f0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimParentNodeAssetOverride__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144134d30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimParentNodeAssetOverride",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362950 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimTickRecord'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimTickRecord''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimTickRecord__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fb4f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimTickRecord",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403629b0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimationGroupReference'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimationGroupReference''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimationGroupReference__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fb1b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimationGroupReference",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362a10 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimationRecordingSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimationRecordingSettings''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimationRecordingSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1451fb958;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimationRecordingSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362a70 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFBlendFilter'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFBlendFilter''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFBlendFilter__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fb728;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BlendFilter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362ad0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFBlendSampleData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFBlendSampleData''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFBlendSampleData__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fb840;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BlendSampleData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362b30 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fbb88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ComponentSpacePose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362b90 FUN_140362b90 body=92 status=ok
// SIG undefined FUN_140362b90(void)

void FUN_140362b90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fade0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"KAggregateGeom",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362bf0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fbb88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LocalSpacePose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362c50 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFMarkerSyncAnimPosition'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFMarkerSyncAnimPosition''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFMarkerSyncAnimPosition__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fb610;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MarkerSyncAnimPosition",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362cb0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedColor'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedColor''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFNamedColor__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144001b28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NamedColor",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362d10 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedFloat'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedFloat''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFNamedFloat__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144001b28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NamedFloat",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362d70 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedTransform'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedTransform''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFNamedTransform__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_1451fbca0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NamedTransform",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362dd0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedVector'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFNamedVector''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFNamedVector__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1451fbdb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NamedVector",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362e30 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFRootMotionMovementParams'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFRootMotionMovementParams''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFRootMotionMovementParams__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_1451fb2c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RootMotionMovementParams",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362e90 FUN_140362e90 body=92 status=ok
// SIG undefined FUN_140362e90(void)

void FUN_140362e90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1451fab30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TickOptimizationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140362f10 FUN_140362f10 body=66 status=ok
// SIG undefined FUN_140362f10(void)

void FUN_140362f10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAlphaBlendOption",1);
  UObjectCompiledInDeferEnum(EAlphaBlendOption_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140362f60 FUN_140362f60 body=66 status=ok
// SIG undefined FUN_140362f60(void)

void FUN_140362f60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAnimGroupRole",1);
  UObjectCompiledInDeferEnum(EAnimGroupRole_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140362fb0 FUN_140362fb0 body=66 status=ok
// SIG undefined FUN_140362fb0(void)

void FUN_140362fb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EComponentCreationMethod",1);
  UObjectCompiledInDeferEnum(EComponentCreationMethod_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363000 FUN_140363000 body=66 status=ok
// SIG undefined FUN_140363000(void)

void FUN_140363000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AlphaBlend",1);
  UObjectCompiledInDeferStruct(FAlphaBlend::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363050 FUN_140363050 body=66 status=ok
// SIG undefined FUN_140363050(void)

void FUN_140363050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimCompressProfile",1);
  UObjectCompiledInDeferStruct(FUN_1428e8070,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403630a0 FUN_1403630a0 body=66 status=ok
// SIG undefined FUN_1403630a0(void)

void FUN_1403630a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimGroupInfo",1);
  UObjectCompiledInDeferStruct(FAnimGroupInfo::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403630f0 FUN_1403630f0 body=66 status=ok
// SIG undefined FUN_1403630f0(void)

void FUN_1403630f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimGroupInstance",1);
  UObjectCompiledInDeferStruct(FAnimGroupInstance::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363140 FUN_140363140 body=66 status=ok
// SIG undefined FUN_140363140(void)

void FUN_140363140(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimParentNodeAssetOverride",1);
  UObjectCompiledInDeferStruct
            (FAnimParentNodeAssetOverride::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363190 FUN_140363190 body=66 status=ok
// SIG undefined FUN_140363190(void)

void FUN_140363190(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimTickRecord",1);
  UObjectCompiledInDeferStruct(FAnimTickRecord::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403631e0 FUN_1403631e0 body=66 status=ok
// SIG undefined FUN_1403631e0(void)

void FUN_1403631e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimationGroupReference",1);
  UObjectCompiledInDeferStruct(FAnimationGroupReference::StaticStruct,L"/Script/Engine",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 140363230 FUN_140363230 body=66 status=ok
// SIG undefined FUN_140363230(void)

void FUN_140363230(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimationRecordingSettings",1);
  UObjectCompiledInDeferStruct
            (FAnimationRecordingSettings::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363280 FUN_140363280 body=66 status=ok
// SIG undefined FUN_140363280(void)

void FUN_140363280(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BlendFilter",1);
  UObjectCompiledInDeferStruct(FBlendFilter::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403632d0 FUN_1403632d0 body=66 status=ok
// SIG undefined FUN_1403632d0(void)

void FUN_1403632d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BlendSampleData",1);
  UObjectCompiledInDeferStruct(FBlendSampleData::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363320 FUN_140363320 body=66 status=ok
// SIG undefined FUN_140363320(void)

void FUN_140363320(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ComponentSpacePose",1);
  UObjectCompiledInDeferStruct(FComponentSpacePose::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363370 FUN_140363370 body=66 status=ok
// SIG undefined FUN_140363370(void)

void FUN_140363370(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"KAggregateGeom",1);
  UObjectCompiledInDeferStruct(FUN_1428e8430,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403633c0 FUN_1403633c0 body=66 status=ok
// SIG undefined FUN_1403633c0(void)

void FUN_1403633c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LocalSpacePose",1);
  UObjectCompiledInDeferStruct(FLocalSpacePose::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363410 FUN_140363410 body=66 status=ok
// SIG undefined FUN_140363410(void)

void FUN_140363410(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MarkerSyncAnimPosition",1);
  UObjectCompiledInDeferStruct(FMarkerSyncAnimPosition::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363460 FUN_140363460 body=66 status=ok
// SIG undefined FUN_140363460(void)

void FUN_140363460(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NamedColor",1);
  UObjectCompiledInDeferStruct(FNamedColor::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403634b0 FUN_1403634b0 body=66 status=ok
// SIG undefined FUN_1403634b0(void)

void FUN_1403634b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NamedFloat",1);
  UObjectCompiledInDeferStruct(FNamedFloat::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363500 FUN_140363500 body=66 status=ok
// SIG undefined FUN_140363500(void)

void FUN_140363500(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NamedTransform",1);
  UObjectCompiledInDeferStruct(FNamedTransform::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363550 FUN_140363550 body=66 status=ok
// SIG undefined FUN_140363550(void)

void FUN_140363550(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NamedVector",1);
  UObjectCompiledInDeferStruct(FNamedVector::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403635a0 FUN_1403635a0 body=66 status=ok
// SIG undefined FUN_1403635a0(void)

void FUN_1403635a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootMotionMovementParams",1);
  UObjectCompiledInDeferStruct
            (FRootMotionMovementParams::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403635f0 FUN_1403635f0 body=66 status=ok
// SIG undefined FUN_1403635f0(void)

void FUN_1403635f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TickOptimizationData",1);
  UObjectCompiledInDeferStruct(FUN_1428e8730,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140363640 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AAmbientSound'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AAmbientSound''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AAmbientSound__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e62c0,UParticleModuleTypeDataGpu::GetPrivateStaticClass,L"AAmbientSound",
             L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363680 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISystemBase'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISystemBase''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISystemBase__(void)

{
  UObjectCompiledInDefer(FUN_1428e8790,FUN_1428e6120,L"UAISystemBase",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 1403636c0 FUN_1403636c0 body=58 status=ok
// SIG undefined FUN_1403636c0(void)

void FUN_1403636c0(void)

{
  UObjectCompiledInDefer
            (FUN_1428e87c0,FUN_1428e63f0,L"UActorArchetypeProviderInterface",L"/Script/Engine",0,0,0
            );
  return;
}



// FUNCTION 140363700 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorChannel'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorChannel''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UActorChannel__(void)

{
  UObjectCompiledInDefer(FUN_1428e87f0,FUN_1428e6c20,L"UActorChannel",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363740 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UActorComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e64a0,thunk_FUN_1428e7a40,L"UActorComponent",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363780 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAimOffsetBlendSpace1D'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAimOffsetBlendSpace1D''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAimOffsetBlendSpace1D__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e8820,UAimOffsetBlendSpace1D::StaticClass,L"UAimOffsetBlendSpace1D",
             L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 1403637c0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAimOffsetBlendSpace'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAimOffsetBlendSpace''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAimOffsetBlendSpace__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e8850,UAimOffsetBlendSpace::StaticClass,L"UAimOffsetBlendSpace",
             L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363800 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimBlueprint'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimBlueprint''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimBlueprint__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e8880,UPlatformEventsComponent::GetPrivateStaticClass,L"UAnimBlueprint",
             L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363840 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimationAsset'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimationAsset''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimationAsset__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e88b0,UAnimationAsset::StaticClass,L"UAnimationAsset",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363880 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimationSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimationSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimationSettings__(void)

{
  UObjectCompiledInDefer(FUN_1428e88e0,FUN_1428e5be0,L"UAnimationSettings",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140363b10 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFA2CSPose'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFA2CSPose''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFA2CSPose__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202ec8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"A2CSPose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363b70 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFA2Pose'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFA2Pose''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFA2Pose__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202fe0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"A2Pose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363bd0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_145201d90;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimBlueprintDebugData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363c30 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452029e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimCurveBase",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363c90 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202af8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimCurveParam",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363cf0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimSegment'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimSegment''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimSegment__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452023a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimSegment",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363d50 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimTrack'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimTrack''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimTrack__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202290;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimTrack",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363db0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_145201d90;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimationFrameSnapshot",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363e10 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFFloatCurve'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFFloatCurve''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFFloatCurve__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452028c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FloatCurve",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363e70 FUN_140363e70 body=92 status=ok
// SIG undefined FUN_140363e70(void)

void FUN_140363e70(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202580;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RawCurveTracks",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363ed0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RootMotionExtractionStep",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363f30 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFSlotEvaluationPose'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFSlotEvaluationPose''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFSlotEvaluationPose__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202db0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SlotEvaluationPose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363f90 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145201ea8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StateMachineDebugData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140363ff0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFTransformCurve'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFTransformCurve''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFTransformCurve__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x470;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145202698;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TransformCurve",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364050 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFVectorCurve'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFVectorCurve''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFVectorCurve__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452027b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VectorCurve",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403640d0 FUN_1403640d0 body=66 status=ok
// SIG undefined FUN_1403640d0(void)

void FUN_1403640d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimationCompressionFormat",1);
  UObjectCompiledInDeferEnum(AnimationCompressionFormat_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364120 FUN_140364120 body=66 status=ok
// SIG undefined FUN_140364120(void)

void FUN_140364120(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAdditiveBasePoseType",1);
  UObjectCompiledInDeferEnum(EAdditiveBasePoseType_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364170 FUN_140364170 body=66 status=ok
// SIG undefined FUN_140364170(void)

void FUN_140364170(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAnimAssetCurveFlags",1);
  UObjectCompiledInDeferEnum(EAnimAssetCurveFlags_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403641c0 FUN_1403641c0 body=66 status=ok
// SIG undefined FUN_1403641c0(void)

void FUN_1403641c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAnimCurveType",1);
  UObjectCompiledInDeferEnum(EAnimCurveType_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364210 FUN_140364210 body=66 status=ok
// SIG undefined FUN_140364210(void)

void FUN_140364210(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EMontagePlayReturnType",1);
  UObjectCompiledInDeferEnum(EMontagePlayReturnType_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364260 FUN_140364260 body=66 status=ok
// SIG undefined FUN_140364260(void)

void FUN_140364260(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERawCurveTrackTypes",1);
  UObjectCompiledInDeferEnum(ERawCurveTrackTypes_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403642b0 FUN_1403642b0 body=66 status=ok
// SIG undefined FUN_1403642b0(void)

void FUN_1403642b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERootMotionMode",1);
  UObjectCompiledInDeferEnum(ERootMotionMode_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364300 FUN_140364300 body=66 status=ok
// SIG undefined FUN_140364300(void)

void FUN_140364300(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERootMotionRootLock",1);
  UObjectCompiledInDeferEnum(ERootMotionRootLock_StaticEnum,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364350 FUN_140364350 body=66 status=ok
// SIG undefined FUN_140364350(void)

void FUN_140364350(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"A2CSPose",1);
  UObjectCompiledInDeferStruct(FA2CSPose::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403643a0 FUN_1403643a0 body=66 status=ok
// SIG undefined FUN_1403643a0(void)

void FUN_1403643a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"A2Pose",1);
  UObjectCompiledInDeferStruct(FA2Pose::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403643f0 FUN_1403643f0 body=66 status=ok
// SIG undefined FUN_1403643f0(void)

void FUN_1403643f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimBlueprintDebugData",1);
  UObjectCompiledInDeferStruct(FAnimBlueprintDebugData::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364440 FUN_140364440 body=66 status=ok
// SIG undefined FUN_140364440(void)

void FUN_140364440(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimCurveBase",1);
  UObjectCompiledInDeferStruct(FAnimCurveBase::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364490 FUN_140364490 body=66 status=ok
// SIG undefined FUN_140364490(void)

void FUN_140364490(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimCurveParam",1);
  UObjectCompiledInDeferStruct(FAnimCurveParam::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403644e0 FUN_1403644e0 body=66 status=ok
// SIG undefined FUN_1403644e0(void)

void FUN_1403644e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimSegment",1);
  UObjectCompiledInDeferStruct(FAnimSegment::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364530 FUN_140364530 body=66 status=ok
// SIG undefined FUN_140364530(void)

void FUN_140364530(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimTrack",1);
  UObjectCompiledInDeferStruct(FAnimTrack::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364580 FUN_140364580 body=66 status=ok
// SIG undefined FUN_140364580(void)

void FUN_140364580(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimationFrameSnapshot",1);
  UObjectCompiledInDeferStruct(FAnimationFrameSnapshot::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403645d0 FUN_1403645d0 body=66 status=ok
// SIG undefined FUN_1403645d0(void)

void FUN_1403645d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FloatCurve",1);
  UObjectCompiledInDeferStruct(FFloatCurve::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364620 FUN_140364620 body=66 status=ok
// SIG undefined FUN_140364620(void)

void FUN_140364620(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RawCurveTracks",1);
  UObjectCompiledInDeferStruct(FUN_1428ed670,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364670 FUN_140364670 body=66 status=ok
// SIG undefined FUN_140364670(void)

void FUN_140364670(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootMotionExtractionStep",1);
  UObjectCompiledInDeferStruct
            (FRootMotionExtractionStep::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403646c0 FUN_1403646c0 body=66 status=ok
// SIG undefined FUN_1403646c0(void)

void FUN_1403646c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SlotEvaluationPose",1);
  UObjectCompiledInDeferStruct(FSlotEvaluationPose::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364710 FUN_140364710 body=66 status=ok
// SIG undefined FUN_140364710(void)

void FUN_140364710(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"StateMachineDebugData",1);
  UObjectCompiledInDeferStruct(FStateMachineDebugData::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364760 FUN_140364760 body=66 status=ok
// SIG undefined FUN_140364760(void)

void FUN_140364760(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TransformCurve",1);
  UObjectCompiledInDeferStruct(FTransformCurve::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 1403647b0 FUN_1403647b0 body=66 status=ok
// SIG undefined FUN_1403647b0(void)

void FUN_1403647b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VectorCurve",1);
  UObjectCompiledInDeferStruct(FVectorCurve::StaticStruct,L"/Script/Engine",*puVar1,0,0);
  return;
}



// FUNCTION 140364800 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimBlueprintGeneratedClass'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimBlueprintGeneratedClass''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimBlueprintGeneratedClass__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ed8b0,UAnimBlueprintGeneratedClass::GetPrivateStaticClass,
             L"UAnimBlueprintGeneratedClass",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140364840 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimClassData'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimClassData''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimClassData__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ed8e0,UAnimClassData::StaticClass,L"UAnimClassData",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140364880 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimClassInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimClassInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimClassInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ed910,UAnimClassInterface::GetPrivateStaticClass,L"UAnimClassInterface",
             L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 1403648c0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimComposite'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimComposite''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimComposite__(void)

{
  UObjectCompiledInDefer(FUN_1428ed940,FUN_1428ea3a0,L"UAnimComposite",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140364900 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompositeBase'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompositeBase''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompositeBase__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ea450,UTextureRenderTarget::StaticClass,L"UAnimCompositeBase",L"/Script/Engine"
             ,0,0,0);
  return;
}



// FUNCTION 140364940 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress__(void)

{
  UObjectCompiledInDefer(FUN_1428eb380,thunk_FUN_1428ecc50,L"UAnimCompress",L"/Script/Engine",0,0,0)
  ;
  return;
}



// FUNCTION 140364980 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_Automatic'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_Automatic''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_Automatic__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ed970,FUN_1428eb400,L"UAnimCompress_Automatic",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 1403649c0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_BitwiseCompressOnly'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_BitwiseCompressOnly''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_BitwiseCompressOnly__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ed9a0,FUN_1428e99d0,L"UAnimCompress_BitwiseCompressOnly",L"/Script/Engine",0,0,
             0);
  return;
}



// FUNCTION 140364a00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_LeastDestructive'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_LeastDestructive''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_LeastDestructive__(void)

{
  UObjectCompiledInDefer
            (FUN_1428ed9d0,FUN_1428e9a90,L"UAnimCompress_LeastDestructive",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140364a40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_PerTrackCompression'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_PerTrackCompression''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_PerTrackCompression__(void)

{
  UObjectCompiledInDefer
            (FUN_1428eda00,FUN_1428e9c00,L"UAnimCompress_PerTrackCompression",L"/Script/Engine",0,0,
             0);
  return;
}



// FUNCTION 140364a80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_RemoveEverySecondKey'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_RemoveEverySecondKey''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_RemoveEverySecondKey__(void)

{
  UObjectCompiledInDefer
            (FUN_1428eda30,FUN_1428e9cf0,L"UAnimCompress_RemoveEverySecondKey",L"/Script/Engine",0,0
             ,0);
  return;
}



// FUNCTION 140364ac0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_RemoveLinearKeys'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_RemoveLinearKeys''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_RemoveLinearKeys__(void)

{
  UObjectCompiledInDefer
            (FUN_1428e9cb0,FUN_1428e9b50,L"UAnimCompress_RemoveLinearKeys",L"/Script/Engine",0,0,0);
  return;
}



// FUNCTION 140364b00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_RemoveTrivialKeys'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimCompress_RemoveTrivialKeys''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimCompress_RemoveTrivialKeys__(void)

{
  UObjectCompiledInDefer
            (FUN_1428eda60,FUN_1428e9dc0,L"UAnimCompress_RemoveTrivialKeys",L"/Script/Engine",0,0,0)
  ;
  return;
}



// FUNCTION 140364b40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimInstance'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimInstance''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimInstance__(void)

{
  UObjectCompiledInDefer(FUN_1428ea540,thunk_FUN_1428eccf0,L"UAnimInstance",L"/Script/Engine",0,0,0)
  ;
  return;
}



// FUNCTION 140364c90 `dynamic_initializer_for_'ScriptStruct_GunfireRuntime_StaticRegisterNativesFGunfireAnimInstanceProxy'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_GunfireRuntime_StaticRegisterNativesFGunfireAnimInstanceProxy''(void)

void _dynamic_initializer_for__ScriptStruct_GunfireRuntime_StaticRegisterNativesFGunfireAnimInstanceProxy__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x6c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_145207560;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimInstanceProxy",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364cf0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimLinkableElement'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimLinkableElement''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimLinkableElement__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452077c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimLinkableElement",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364d50 `dynamic_initializer_for_'ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings''(void)

void _dynamic_initializer_for__ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145207940;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimMontageInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364db0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ApplyMeshSpaceAdditive'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ApplyMeshSpaceAdditive''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ApplyMeshSpaceAdditive__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145207fd0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_ApplyMeshSpaceAdditive",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364e10 FUN_140364e10 body=92 status=ok
// SIG undefined FUN_140364e10(void)

void FUN_140364e10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452080e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_AssetPlayerBase",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364e70 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_Base'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_Base''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_Base__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145209130;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_Base",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364ed0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452097c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_ConvertComponentToLocalSpace",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364f30 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1452096a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_ConvertLocalToComponentSpace",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364f90 FUN_140364f90 body=92 status=ok
// SIG undefined FUN_140364f90(void)

void FUN_140364f90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208200;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_SaveCachedPose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140364ff0 FUN_140364ff0 body=92 status=ok
// SIG undefined FUN_140364ff0(void)

void FUN_140364ff0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208460;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_SequencePlayer",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140365050 `dynamic_initializer_for_'ScriptStruct_FSHProject_StaticRegisterNativesFItemData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_FSHProject_StaticRegisterNativesFItemData''(void)

void _dynamic_initializer_for__ScriptStruct_FSHProject_StaticRegisterNativesFItemData__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x188;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208668;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_StateMachine",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403650b0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInput'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInput''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInput__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208aa0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_SubInput",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140365110 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 200;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208bb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_SubInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140365170 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionPoseEvaluator'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionPoseEvaluator''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionPoseEvaluator__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208d20;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_TransitionPoseEvaluator",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403651d0 FUN_1403651d0 body=92 status=ok
// SIG undefined FUN_1403651d0(void)

void FUN_1403651d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208e38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_TransitionResult",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140365230 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_UseCachedPose'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNode_UseCachedPose''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNode_UseCachedPose__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145208f50;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_UseCachedPose",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140365290 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyArray'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyArray''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyArray__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145209b68;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNotifyArray",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}


