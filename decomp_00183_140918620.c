// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140918620 FUN_140918620 body=3173 status=ok
// SIG undefined FUN_140918620(void)

undefined8 * FUN_140918620(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 local_res8 [2];
  undefined8 *local_res10;
  undefined4 local_res18;
  undefined2 uStackX_1c;
  undefined2 uStackX_1e;
  longlong local_348 [2];
  undefined8 *local_338;
  int local_330;
  int local_32c;
  undefined1 local_328;
  undefined1 local_327;
  undefined4 local_324;
  undefined1 local_320;
  undefined4 local_31c;
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316;
  undefined8 local_314;
  longlong local_308 [2];
  void *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined4 local_2dc;
  ushort local_2d8;
  undefined1 local_2d6;
  undefined4 local_2d4;
  undefined2 uStack_2d0;
  undefined2 uStack_2ce;
  void *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  void *local_2b8;
  ulonglong local_2b0;
  undefined2 local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined4 local_29c;
  ushort local_298;
  undefined1 local_296;
  undefined4 local_294;
  undefined2 uStack_290;
  undefined2 uStack_28e;
  void *local_288;
  int local_280;
  undefined4 local_27c;
  void *local_278;
  ulonglong local_270;
  undefined2 local_268;
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_25c;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined8 local_254;
  longlong local_248 [2];
  void *local_238;
  int local_230;
  undefined4 local_22c;
  undefined1 local_228;
  undefined1 local_227;
  undefined4 local_224;
  undefined1 local_220;
  undefined4 local_21c;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined8 local_214;
  longlong local_208 [2];
  void *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined8 local_1d4;
  longlong local_1c8 [2];
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  void *local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined8 local_184;
  longlong local_178 [2];
  void *local_168;
  int local_160;
  undefined4 local_15c;
  undefined1 local_158;
  undefined1 local_157;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined8 local_144;
  longlong local_138 [2];
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined8 local_104;
  longlong local_f8 [2];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  void *local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined8 local_b4;
  longlong local_a8 [2];
  void *local_98;
  int local_90;
  int local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined8 local_74;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  
  puVar11 = (undefined8 *)0x0;
  *param_1 = &PTR_IsPromotedBuild_14415dec8;
  param_1[1] = &PTR_FUN_14415def8;
  param_1[2] = &PTR_LAB_14415df40;
  param_1[3] = 0;
  param_1[4] = 0;
  local_res10 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = *param_3;
  puVar6 = (undefined8 *)operator_new(0x18);
  puVar7 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar7 = puVar6;
  }
  param_1[0x19] = puVar7;
  param_1[0x18] = puVar7;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  local_198 = (void *)0x0;
  local_190 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
  pvVar4 = local_198;
  FGenericPlatformString::Memcpy(local_198,L"UdpMessageMulticastSocket",0x34);
  lVar10 = (longlong)(int)local_190;
  local_2d8 = 0;
  local_2d6 = 0;
  local_2d4 = DAT_1469f59a0;
  uStack_2d0 = 0;
  local_2c8 = (void *)0x0;
  local_2c0 = (int)local_190;
  if ((int)local_190 == 0) {
    local_2bc = 0;
    local_1d8 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2c8,local_190 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_2c8,pvVar4,lVar10 * 2);
    local_1d8 = (undefined1)local_2d8;
  }
  local_1d4 = CONCAT26(uStack_2ce,CONCAT24(uStack_2d0,local_2d4));
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_2a8 = 0x100;
  local_2a4 = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_2d8 = local_2d8 & 0xff;
  local_1d7 = 0;
  local_1d6 = local_2d6;
  FString::FString(local_1c8,&local_2c8);
  lVar10 = (longlong)(int)local_2b0;
  local_1b8 = (void *)0x0;
  local_1b0 = (int)local_2b0;
  if ((int)local_2b0 == 0) {
    local_1ac = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_2b0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_1b8,local_2b8,lVar10 << 2);
  }
  local_1a8 = (undefined1)local_2a8;
  local_1a7 = local_2a8._1_1_;
  local_1a4 = local_2a4;
  local_19c = local_29c;
  local_258 = local_1d8;
  local_257 = local_1d7;
  local_256 = local_1d6;
  local_254 = local_1d4;
  local_1a0 = 1;
  FString::FString(local_248,local_1c8);
  lVar10 = (longlong)local_1b0;
  local_238 = (void *)0x0;
  local_230 = local_1b0;
  if (local_1b0 == 0) {
    local_22c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_238,local_1b0,0);
    _guard_xfg_dispatch_icall_nop(local_238,local_1b8,lVar10 << 2);
  }
  local_228 = local_1a8;
  local_227 = local_1a7;
  local_224 = local_1a4;
  local_220 = local_1a0;
  local_21c = local_19c;
  local_res18 = *(undefined4 *)param_2;
  local_318 = local_258;
  uStackX_1c = local_254._4_2_;
  local_314 = CONCAT26(uStackX_1e,CONCAT24(local_254._4_2_,local_res18));
  local_317 = local_257;
  local_256 = 1;
  local_316 = 1;
  local_254 = local_314;
  FString::FString(local_308,local_248);
  lVar10 = (longlong)local_230;
  local_2f8 = (void *)0x0;
  local_2f0 = local_230;
  if (local_230 == 0) {
    local_2ec = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_2f8,local_230,0);
    _guard_xfg_dispatch_icall_nop(local_2f8,local_238,lVar10 << 2);
  }
  local_2e8 = local_228;
  local_2e7 = local_227;
  local_2e4 = local_224;
  local_2e0 = local_220;
  local_2dc = local_21c;
  local_res18 = (undefined4)local_314;
  uStackX_1c = *(undefined2 *)((longlong)param_1 + 0xb4);
  local_218 = local_318;
  local_314 = CONCAT26(uStackX_1e,CONCAT24(uStackX_1c,(undefined4)local_314));
  local_217 = local_317;
  local_316 = 1;
  local_216 = 1;
  local_214 = local_314;
  FString::FString(local_208,local_308);
  lVar10 = (longlong)local_2f0;
  local_1f8 = (void *)0x0;
  local_1f0 = local_2f0;
  if (local_2f0 == 0) {
    local_1ec = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_2f0,0);
    _guard_xfg_dispatch_icall_nop(local_1f8,local_2f8,lVar10 << 2);
  }
  uVar3 = local_217;
  uVar2 = local_218;
  local_1e8 = local_2e8;
  local_1e7 = local_2e7;
  local_1e4 = local_2e4;
  local_1e0 = local_2e0;
  local_1dc = local_2dc;
  local_res18 = (undefined4)local_214;
  uStackX_1c = *(undefined2 *)((longlong)param_3 + 4);
  uVar8 = CONCAT26(uStackX_1e,CONCAT24(uStackX_1c,(undefined4)local_214));
  local_216 = 1;
  local_214 = uVar8;
  FString::FString(local_348,local_208);
  pvVar4 = local_1f8;
  lVar10 = (longlong)local_1f0;
  local_338 = (undefined8 *)0x0;
  local_330 = local_1f0;
  if (local_1f0 == 0) {
    local_32c = 0;
    iVar9 = local_1f0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_338,local_1f0,0);
    puVar11 = local_338;
    _guard_xfg_dispatch_icall_nop(local_338,pvVar4,lVar10 << 2);
    iVar9 = local_330;
  }
  local_328 = local_1e8;
  local_327 = local_1e7;
  local_324 = local_1e4;
  local_320 = local_1e0;
  local_31c = local_1dc;
  local_330 = iVar9 + 1;
  if (local_32c < local_330) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_338,iVar9);
    puVar11 = local_338;
  }
  *(undefined4 *)((longlong)puVar11 + (longlong)iVar9 * 4) = *(undefined4 *)param_3;
  local_108 = uVar2;
  local_107 = uVar3;
  local_106 = 1;
  local_104 = uVar8;
  FString::FString(local_f8,local_348);
  puVar11 = local_338;
  lVar10 = (longlong)local_330;
  local_e8 = (void *)0x0;
  local_e0 = local_330;
  if (local_330 == 0) {
    local_dc = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_e8,local_330,0);
    _guard_xfg_dispatch_icall_nop(local_e8,puVar11,lVar10 << 2);
  }
  local_d7 = local_327;
  local_d4 = local_324;
  local_d0 = local_320;
  local_cc = local_31c;
  local_188 = local_108;
  local_187 = local_107;
  local_186 = local_106;
  local_184 = local_104;
  local_d8 = 1;
  FString::FString(local_178,local_f8);
  pvVar1 = local_e8;
  lVar10 = (longlong)local_e0;
  local_168 = (void *)0x0;
  local_160 = local_e0;
  if (local_e0 == 0) {
    local_15c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_168,local_e0,0);
    _guard_xfg_dispatch_icall_nop(local_168,pvVar1,lVar10 << 2);
  }
  local_158 = local_d8;
  local_154 = local_d4;
  local_150 = local_d0;
  local_14c = local_cc;
  local_b8 = local_188;
  local_b7 = local_187;
  local_b6 = local_186;
  local_b4 = local_184;
  local_157 = 1;
  FString::FString(local_a8,local_178);
  pvVar5 = local_168;
  lVar10 = (longlong)local_160;
  local_98 = (void *)0x0;
  local_90 = local_160;
  if (local_160 == 0) {
    local_8c = local_160;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_98,local_160,0);
    _guard_xfg_dispatch_icall_nop(local_98,pvVar5,lVar10 << 2);
  }
  local_88 = local_158;
  local_87 = local_157;
  local_84 = local_154;
  local_80 = local_150;
  local_7c = local_14c;
  uVar8 = FUN_14091b0a0(&local_b8);
  param_1[0x17] = uVar8;
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (puVar11 != (undefined8 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (local_348[0] != 0) {
    FMemory::Free();
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_308[0] != 0) {
    FMemory::Free();
  }
  if (local_238 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_248[0] != 0) {
    FMemory::Free();
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  if (local_2b8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_2c8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free();
  }
  local_c0 = 0x18;
  local_c8 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  pvVar4 = local_c8;
  FGenericPlatformString::Memcpy(local_c8,L"UdpMessageUnicastSocket",0x30);
  lVar10 = (longlong)(int)local_c0;
  local_298 = 0;
  local_296 = 0;
  local_294 = DAT_1469f59a0;
  uStack_290 = 0;
  local_288 = (void *)0x0;
  local_280 = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_27c = 0;
    local_148 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_288,local_c0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_288,pvVar4,lVar10 * 2);
    local_148 = (undefined1)local_298;
  }
  local_144 = CONCAT26(uStack_28e,CONCAT24(uStack_290,local_294));
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268 = 0x100;
  local_264 = 0;
  local_260 = 0;
  local_25c = 0;
  local_298 = local_298 & 0xff;
  local_147 = 0;
  local_146 = local_296;
  FString::FString(local_138,&local_288);
  pvVar1 = local_278;
  lVar10 = (longlong)(int)local_270;
  local_128 = (void *)0x0;
  local_120 = (int)local_270;
  if ((int)local_270 == 0) {
    local_11c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_128,local_270 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_128,pvVar1,lVar10 << 2);
  }
  local_118 = (undefined1)local_268;
  local_117 = local_268._1_1_;
  local_114 = local_264;
  local_110 = local_260;
  local_10c = local_25c;
  local_78 = local_148;
  local_77 = local_147;
  local_144 = *local_res10;
  local_146 = 1;
  local_76 = 1;
  local_74 = local_144;
  FString::FString(local_68,local_138);
  pvVar5 = local_128;
  lVar10 = (longlong)local_120;
  local_58 = (void *)0x0;
  local_50 = local_120;
  if (local_120 == 0) {
    local_4c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,local_120,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar5,lVar10 << 2);
  }
  local_48 = local_118;
  local_47 = local_117;
  local_44 = local_114;
  local_40 = local_110;
  local_3c = local_10c;
  uVar8 = FUN_14091b0a0(&local_78);
  param_1[0x28] = uVar8;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (local_288 != (void *)0x0) {
    FMemory::Free();
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_1[0x17] + 0xd8))((longlong *)param_1[0x17],0x200000,local_res8);
  (**(code **)(*(longlong *)param_1[0x28] + 0xd8))((longlong *)param_1[0x28],0x200000,local_res8);
  uVar8 = FUN_1415d42a0(param_1,L"FUdpMessageTunnel",0x20000,1,0xffffffffffffffff);
  param_1[0x25] = uVar8;
  return param_1;
}



// FUNCTION 140919290 FUdpMessageTunnelConnection body=284 status=ok
// SIG undefined FUdpMessageTunnelConnection(void)

undefined8 *
FUdpMessageTunnelConnection::FUdpMessageTunnelConnection
          (undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  puVar3 = (undefined8 *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14415df50;
  param_1[1] = &PTR_LAB_14415df80;
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[7] = puVar2;
  param_1[6] = puVar2;
  FDateTime::UtcNow(param_1 + 8);
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar3 = puVar2;
  }
  param_1[0xb] = puVar3;
  param_1[10] = puVar3;
  param_1[0xc] = *param_3;
  param_1[0xd] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0xd8))(param_2,0x200000,local_res8);
  (**(code **)(*(longlong *)param_1[0xd] + 0xd0))((longlong *)param_1[0xd],0x200000,local_res8);
  uVar4 = FUN_1415d42a0(param_1,L"FUdpMessageTunnelConnection",0x20000,0,0xffffffffffffffff);
  param_1[0xe] = uVar4;
  return param_1;
}



// FUNCTION 1409193b0 FUdpSerializeMessageTask body=299 status=ok
// SIG undefined FUdpSerializeMessageTask(void)

undefined8 *
FUdpSerializeMessageTask::FUdpSerializeMessageTask
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_4;
  lVar4 = param_4[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = *param_2;
  lVar4 = param_2[1];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = *param_3;
  lVar4 = param_3[1];
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 1409194e0 FUN_1409194e0 body=136 status=ok
// SIG undefined FUN_1409194e0(void)

undefined8 * FUN_1409194e0(undefined8 *param_1)

{
  FArchive::FArchive();
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_143f4a100;
  param_1[0x13] = param_1 + 0x15;
  param_1[0x14] = 0;
  FArchive::SetIsSaving(param_1,1);
  FArchive::SetIsPersistent(param_1,1);
  *param_1 = &PTR__scalar_deleting_destructor__14415d528;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 1;
  return param_1;
}



// FUNCTION 140919570 UUdpMessagingSettings body=106 status=ok
// SIG undefined UUdpMessagingSettings(void)

undefined8 * UUdpMessagingSettings::UUdpMessagingSettings(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__14415d860;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 1409195e0 ~TQueue<FUdpMessageProcessor::FInboundSegment,0> body=147 status=ok
// SIG undefined ~TQueue<FUdpMessageProcessor::FInboundSegment,0>(void)

void TQueue<FUdpMessageProcessor::FInboundSegment,0>::
     ~TQueue<FUdpMessageProcessor::FInboundSegment,0>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  while (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FMemory::operator_delete(lVar4,0x20);
    }
    lVar4 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 140919680 FUN_140919680 body=147 status=ok
// SIG undefined FUN_140919680(void)

void FUN_140919680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  while (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FMemory::operator_delete(lVar4,0x28);
    }
    lVar4 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 140919720 FUN_140919720 body=395 status=ok
// SIG undefined FUN_140919720(void)

void FUN_140919720(longlong *param_1)

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
      if (bVar4) goto LAB_1409197e1;
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
LAB_1409197e1:
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
      FUdpMessageProcessor::FNodeInfo::~FNodeInfo((longlong)iStack_1c * 0xf8 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 1409198b0 ~FNodeInfo body=140 status=ok
// SIG undefined ~FNodeInfo(void)

void FUdpMessageProcessor::FNodeInfo::~FNodeInfo(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x98,0);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x20);
  return;
}



// FUNCTION 140919940 FUN_140919940 body=971 status=ok
// SIG undefined FUN_140919940(void)

void FUN_140919940(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  *param_1 = &PTR_FUN_14415d7e0;
  param_1[1] = &PTR_LAB_14415d810;
  (**(code **)(*(longlong *)param_1[0x23] + 0x18))((longlong *)param_1[0x23],1);
  plVar8 = (longlong *)param_1[0x23];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,1);
  }
  param_1[0x23] = 0;
  if (((*(int *)(param_1 + 0x2b) != 0) && ((longlong *)param_1[0x2a] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x2a] + 0x18))(), cVar6 != '\0')) {
    local_a8 = 0;
    uVar4 = *(uint *)(param_1 + 0xd);
    puVar1 = (uint *)(param_1 + 10);
    uStack_a4 = 1;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar4 != 0) {
      puVar12 = (uint *)param_1[0xc];
      if ((uint *)param_1[0xc] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = *puVar12;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar11 == 0) {
        lVar10 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar7 = local_a8 + 1;
        bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar7;
        if (bVar5) goto LAB_140919a9f;
        uVar11 = puVar12[lVar10 + 1];
      }
      uStack_a4 = -uVar11 & uVar11;
      iVar7 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (iStack_90 - iVar7) + 0x1f;
      if ((int)uVar4 < (int)uStack_94) {
LAB_140919a9f:
        uStack_94 = uVar4;
      }
    }
    uStack_74 = *(uint *)(param_1 + 0xd);
    uStack_48 = CONCAT44(uStack_94,0xffffffff);
    local_40 = CONCAT44(uStack_8c,iStack_90);
    uVar11 = uStack_74 & 0xffffffe0;
    iStack_58 = local_a8;
    uStack_54 = uStack_a4;
    local_50 = puVar1;
    if (uStack_74 != uVar4) {
      puVar12 = (uint *)param_1[0xc];
      if ((uint *)param_1[0xc] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
      iVar7 = (int)uStack_74 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140919b7c;
        uVar9 = puVar12[(longlong)iVar7 + 1];
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
      uStack_74 = (uVar11 - iVar7) + 0x1f;
      if ((int)uVar4 < (int)uStack_74) {
LAB_140919b7c:
        uStack_74 = uVar4;
      }
    }
    while ((uStack_48._4_4_ != uStack_74 || (local_50 != puVar1))) {
      if (*(int *)(param_1 + 0x2b) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[0x2a];
      }
      (**(code **)(*plVar8 + 0x38))();
      uStack_48 = CONCAT44(uStack_48._4_4_,(uint)uStack_48 & ~uStack_54);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
    }
  }
  FUN_14091d820(param_1 + 8,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x26);
  plVar8 = (longlong *)param_1[0x25];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  FUN_140919720(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  FUN_14091d8a0(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  FUN_140919680(param_1 + 4);
  TQueue<FUdpMessageProcessor::FInboundSegment,0>::~TQueue<FUdpMessageProcessor::FInboundSegment,0>
            (param_1 + 2);
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  return;
}



// FUNCTION 140919d10 ~FUdpMessageSegmenter body=133 status=ok
// SIG undefined ~FUdpMessageSegmenter(void)

void FUdpMessageSegmenter::~FUdpMessageSegmenter(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar5 = (longlong *)param_1[7];
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
  if (param_1[3] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140919da0 FUN_140919da0 body=448 status=ok
// SIG undefined FUN_140919da0(void)

void FUN_140919da0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_IsPromotedBuild_14415dec8;
  param_1[1] = &PTR_FUN_14415def8;
  param_1[2] = &PTR_LAB_14415df40;
  plVar2 = (longlong *)param_1[0x25];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (longlong *)param_1[0x25];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
  }
  if (param_1[0x17] != 0) {
    uVar1 = FName::FName(local_res8,L"WINDOWS",1);
    plVar2 = (longlong *)FUN_1419c6b80(uVar1);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1[0x17]);
    param_1[0x17] = 0;
  }
  if (param_1[0x28] != 0) {
    uVar1 = FName::FName(local_res8,L"WINDOWS",1);
    plVar2 = (longlong *)FUN_1419c6b80(uVar1);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1[0x28]);
    param_1[0x28] = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_14091da30(param_1 + 0x1a,0);
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FUN_14091da30(param_1 + 0xc,0);
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 3);
  param_1[2] = &PTR_FUN_143f47c98;
  param_1[1] = &PTR__purecall_14415de80;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  return;
}



// FUNCTION 140919f60 ~FUdpSerializeMessageTask body=179 status=ok
// SIG undefined ~FUdpSerializeMessageTask(void)

void FUdpSerializeMessageTask::~FUdpSerializeMessageTask(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 14091a020 operator= body=756 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int local_60;
  uint uStack_5c;
  uint *puStack_58;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_a8 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar3 != 0) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = _Dst;
      }
      uVar9 = *puVar10;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar8 = local_a8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar8;
        if (bVar5) goto LAB_14091a0fd;
        uVar9 = puVar10[lVar7 + 1];
      }
      uStack_a4 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (iStack_90 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_14091a0fd:
        uStack_94 = uVar3;
      }
    }
    uStack_74 = *(uint *)(param_1 + 5);
    uVar3 = *(uint *)(param_1 + 5);
    local_50 = 0xffffffff;
    uStack_4c = uStack_94;
    uStack_48 = CONCAT44(uStack_8c,iStack_90);
    uVar9 = uStack_74 & 0xffffffe0;
    local_60 = local_a8;
    uStack_5c = uStack_a4;
    puStack_58 = _Dst;
    if (uStack_74 != uVar3) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = _Dst;
      }
      uVar6 = puVar10[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
      iVar8 = (int)uStack_74 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_14091a1ce;
        uVar6 = puVar10[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_74 = (uVar9 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_14091a1ce:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (puStack_58 != _Dst))) {
      plVar4 = *(longlong **)((longlong)(int)uStack_4c * 0x20 + 0x10 + *param_1);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      local_50 = local_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
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



// FUNCTION 14091a320 FUN_14091a320 body=530 status=ok
// SIG undefined FUN_14091a320(void)

longlong * FUN_14091a320(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
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
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x800001)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      uVar7 = uVar6;
      if (0 < local_res8[0]) {
        do {
          puVar8 = (undefined2 *)(*param_2 + uVar7);
          puVar1 = *(undefined2 **)param_1[1];
          if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar8,2);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,puVar8,2);
            }
          }
          else {
            *puVar8 = *puVar1;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 2;
        } while ((int)uVar5 < (int)param_2[1]);
        return param_1;
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
      }
      if (0 < local_res8[0]) {
        do {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          puVar8 = *(undefined2 **)param_1[1];
          puVar1 = (undefined2 *)(*param_2 + (longlong)iVar3 * 2);
          if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar8 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar1,2);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,puVar1,2);
            }
          }
          else {
            *puVar1 = *puVar8;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < local_res8[0]);
        return param_1;
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 14091a540 FUN_14091a540 body=704 status=ok
// SIG undefined FUN_14091a540(void)

longlong * FUN_14091a540(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  int local_res8 [2];
  
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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
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
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  (**(code **)(*param_1 + 0x78))(param_1,(longlong)(int)param_2[10],(longlong)(int)param_2[0xb]);
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = param_2[10];
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
  if (-1 < (char)*(byte *)(param_1 + 5)) {
    if ((-1 < local_res8[0]) &&
       (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
      param_2[10] = local_res8[0];
      if (((local_res8[0] != 0) || (iVar5 = 0, param_2[0xb] != 0)) &&
         (iVar5 = local_res8[0], (*(byte *)(param_1 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_2 + 8,local_res8[0],param_2[0xb]);
        iVar5 = param_2[10];
      }
      (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_2 + 8),(longlong)iVar5);
      return param_1;
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  return param_1;
}



// FUNCTION 14091a800 FUN_14091a800 body=253 status=ok
// SIG undefined FUN_14091a800(void)

longlong * FUN_14091a800(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 local_48 [16];
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_48,param_1);
  local_38 = local_48;
  local_30 = &local_38;
  FUN_141661f40(&local_38,param_2 + 4);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_48);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 0x14);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    param_2[0x24] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,1);
  return param_1;
}



// FUNCTION 14091a960 FUN_14091a960 body=97 status=ok
// SIG undefined FUN_14091a960(void)

undefined8 * FUN_14091a960(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14415d740;
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



// FUNCTION 14091a9d0 FUN_14091a9d0 body=43 status=ok
// SIG undefined FUN_14091a9d0(void)

undefined8 * FUN_14091a9d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14091aa00 FUN_14091aa00 body=331 status=ok
// SIG undefined FUN_14091aa00(void)

undefined8 * FUN_14091aa00(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = &PTR_IsPromotedBuild_14415d760;
  param_1[1] = &PTR_LAB_14415d790;
  plVar4 = (longlong *)param_1[0xd];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,1);
    plVar4 = (longlong *)param_1[0xd];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,1);
    }
  }
  local_10 = (longlong *)0x0;
  if (param_1 + 6 != &local_18) {
    param_1[6] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_10);
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
  }
  FUN_1415b5910(param_1[3]);
  param_1[3] = 0;
  plVar4 = (longlong *)param_1[7];
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
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14091ab50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140919940();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 14091ab90 `scalar_deleting_destructor' body=200 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FUdpMessageTransport::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_GetDebugName_14415d718;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = (longlong *)param_1[10];
  param_1[4] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = (longlong *)param_1[1];
  param_1[10] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[1] = 0;
  if (param_1[5] != 0) {
    (**(code **)(*(longlong *)param_1[7] + 0x28))();
    param_1[5] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(longlong *)param_1[7] + 0x28))();
    param_1[0xb] = 0;
  }
  param_1[8] = 0;
  *param_1 = &PTR__purecall_144159598;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14091ac60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140919da0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 14091aca0 FUN_14091aca0 body=212 status=ok
// SIG undefined FUN_14091aca0(void)

undefined8 * FUN_14091aca0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_LAB_14415df50;
  param_1[1] = &PTR_LAB_14415df80;
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)param_1[0xe];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0xd];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  param_1[0xd] = 0;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 10);
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(param_1 + 6)
  ;
  param_1[1] = &PTR__purecall_144147258;
  plVar3 = (longlong *)param_1[3];
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
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14091ad80 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUdpReassembledMessage::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14415d750;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14091ade0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FUdpSerializedMessage::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14091ae30 FUN_14091ae30 body=150 status=ok
// SIG undefined FUN_14091ae30(void)

undefined8 * FUN_14091ae30(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_IsPromotedBuild_14415d7a0;
  param_1[1] = &PTR_LAB_14415d7d0;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 9);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14091aed0 `scalar_deleting_destructor' body=153 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FUdpSocketSender::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_IsPromotedBuild_14415d820;
  param_1[1] = &PTR_LAB_14415d850;
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  FUN_1415b5910(param_1[10]);
  param_1[10] = 0;
  TQueue<FUdpMessageProcessor::FInboundSegment,0>::~TQueue<FUdpMessageProcessor::FInboundSegment,0>
            (param_1 + 2);
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14091af70 FUN_14091af70 body=43 status=ok
// SIG undefined FUN_14091af70(void)

undefined8 * FUN_14091af70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14415de80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14091afa0 `scalar_deleting_destructor' body=250 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUdpMessagingSettings::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x98);
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x90);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x60);
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x58);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14091b0a0 FUN_14091b0a0 body=1288 status=ok
// SIG undefined FUN_14091b0a0(void)

longlong * FUN_14091b0a0(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  bool bVar18;
  short *psVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  undefined1 local_98 [8];
  undefined4 local_90;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  bVar18 = false;
  local_res10[0] = 0;
  uVar12 = FName::FName(local_98,L"WINDOWS",1);
  plVar13 = (longlong *)FUN_1419c6b80(uVar12);
  local_res20 = plVar13;
  if (plVar13 == (longlong *)0x0) {
    uVar12 = FUN_141672640();
    FOutputDevice::Log(uVar12,L"FUdpSocketBuilder: Failed to load socket subsystem");
    return (longlong *)0x0;
  }
  puVar22 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x18) == 0) {
    psVar19 = &DAT_143f3eda8;
  }
  else {
    psVar19 = *(short **)(param_1 + 0x10);
  }
  local_88 = 0;
  local_80 = 0;
  if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
    lVar16 = -1;
    do {
      lVar16 = lVar16 + 1;
    } while (psVar19[lVar16] != 0);
    uVar15 = (int)lVar16 + 1;
    local_80 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,psVar19,(longlong)(int)uVar15 * 2);
  }
  local_res18 = 0x118;
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x18))(plVar13,&local_res18,&local_88,1);
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (plVar13 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar22 = *(undefined2 **)(param_1 + 0x10);
    }
    uVar12 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar12,L"FUdpSocketBuilder: Failed to create socket %s",puVar22);
    return (longlong *)0x0;
  }
  cVar10 = (**(code **)(*plVar13 + 0x88))(plVar13,param_1[1] == '\0');
  if ((((cVar10 == '\0') ||
       (cVar10 = (**(code **)(*plVar13 + 0xb8))(plVar13,param_1[0x38]), cVar10 == '\0')) ||
      (cVar10 = (**(code **)(*plVar13 + 0x90))(plVar13,*param_1), cVar10 == '\0')) ||
     (cVar10 = (**(code **)(*plVar13 + 200))(plVar13,1), cVar10 == '\0')) {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = *(undefined2 **)(param_1 + 0x10);
    }
    uVar7 = *param_1;
    uVar8 = param_1[0x38];
    uVar6 = param_1[1];
    uVar12 = FUN_141672640();
    FOutputDevice::LogfImpl
              (uVar12,
               L"FUdpSocketBuilder: Failed to configure %s (blocking: %i, reusable: %i, broadcast: %i)"
               ,puVar21,uVar6,uVar8,uVar7);
LAB_14091b4ac:
    puVar14 = (undefined8 *)FIPv4Endpoint::ToString(param_1 + 4,local_48);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar14;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = *(undefined2 **)(param_1 + 0x10);
    }
    uVar12 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar12,L"FUdpSocketBuilder: Failed to bind %s to %s",puVar17,puVar21);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    if (param_1[2] == '\0') {
LAB_14091b2a1:
      bVar9 = false;
    }
    else {
      (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_78,0,0);
      (**(code **)(*local_78 + 0x10))(local_78,*(undefined4 *)(param_1 + 4));
      (**(code **)(*local_78 + 0x30))(local_78,*(undefined2 *)(param_1 + 8));
      bVar18 = true;
      cVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,local_78);
      if (cVar10 != '\0') goto LAB_14091b2a1;
      bVar9 = true;
    }
    if ((bVar18) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (bVar9) goto LAB_14091b4ac;
    cVar10 = (**(code **)(*plVar13 + 0xa8))(plVar13,param_1[0x30]);
    if ((cVar10 != '\0') &&
       (cVar10 = (**(code **)(*plVar13 + 0xb0))(plVar13,param_1[0x31]), cVar10 != '\0')) {
      puVar20 = *(undefined4 **)(param_1 + 0x20);
      puVar4 = puVar20 + *(int *)(param_1 + 0x28);
      while( true ) {
        if (puVar20 == puVar4) {
          if (0 < *(int *)(param_1 + 0x34)) {
            (**(code **)(*plVar13 + 0xd8))(plVar13,*(int *)(param_1 + 0x34),local_res10);
          }
          if (*(int *)(param_1 + 0x3c) < 1) {
            return plVar13;
          }
          (**(code **)(*plVar13 + 0xd0))(plVar13,*(int *)(param_1 + 0x3c),local_res10);
          return plVar13;
        }
        uVar11 = *puVar20;
        local_90 = uVar11;
        (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_68,0,0);
        (**(code **)(*local_68 + 0x10))(local_68,uVar11);
        (**(code **)(*local_68 + 0x30))(local_68,0);
        cVar10 = (**(code **)(*plVar13 + 0x98))(plVar13,local_68);
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          lVar16 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
        if (cVar10 == '\0') break;
        puVar20 = puVar20 + 1;
      }
      puVar14 = (undefined8 *)FIPv4Address::ToString(puVar20,local_58);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar14;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = *(undefined2 **)(param_1 + 0x10);
      }
      uVar12 = FUN_141672640();
      FOutputDevice::LogfImpl
                (uVar12,L"FUdpSocketBuilder: Failed to subscribe %s to multicast group %s",puVar17,
                 puVar21);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      goto LAB_14091b537;
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar7 = param_1[0x31];
  uVar8 = param_1[0x30];
  uVar12 = FUN_141672640();
  FOutputDevice::LogfImpl
            (uVar12,
             L"FUdpSocketBuilder: Failed to configure multicast for %s (loopback: %i, ttl: %i)",
             puVar21,uVar8,uVar7);
LAB_14091b537:
  plVar1 = local_res20;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar22 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar11 = (**(code **)(*local_res20 + 0x88))(local_res20);
  uVar12 = FUN_141672640();
  FOutputDevice::LogfImpl
            (uVar12,L"FUdpSocketBuilder: Failed to create and initialize socket %s (last error: %i)"
             ,puVar22,uVar11);
  (**(code **)(*plVar1 + 0x28))(plVar1,plVar13);
  return (longlong *)0x0;
}



// FUNCTION 14091b5c0 FUN_14091b5c0 body=161 status=ok
// SIG undefined FUN_14091b5c0(void)

undefined8 FUN_14091b5c0(longlong param_1,uint param_2,char param_3)

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
      FUN_140920330(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14091b670 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
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



// FUNCTION 14091b720 FUN_14091b720 body=795 status=ok
// SIG undefined FUN_14091b720(void)

undefined8 FUN_14091b720(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_res18 [8];
  void *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined2 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  
  local_80 = 0x23;
  plVar7 = (longlong *)0x0;
  local_88 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  _Src = local_88;
  FGenericPlatformString::Memcpy(local_88,L"FUdpMessageTunnel.RemoteConnection",0x46);
  lVar11 = (longlong)(int)local_80;
  local_68[0] = 0;
  local_64 = DAT_1469f59a0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = (int)local_80;
  if ((int)local_80 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_80 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar11 * 2);
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  plVar5 = (longlong *)FUN_1408d5630(local_68);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_78,0,0);
    (**(code **)(*local_78 + 0x10))(local_78,*param_2);
    (**(code **)(*local_78 + 0x30))(local_78,*(undefined2 *)(param_2 + 1));
    cVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,local_78);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_70 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (cVar3 != '\0') {
      lVar11 = operator_new(0x90);
      plVar8 = plVar7;
      if (lVar11 != 0) {
        plVar8 = (longlong *)
                 FUdpMessageTunnelConnection::FUdpMessageTunnelConnection(lVar11,plVar5,param_2);
      }
      plVar9 = (longlong *)operator_new(0x18);
      plVar5 = plVar7;
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_FUN_14410cc48;
        plVar9[2] = (longlong)plVar8;
        plVar5 = plVar9;
      }
      plVar9 = plVar8 + 2;
      if (plVar8 == (longlong *)0x0) {
        plVar9 = plVar7;
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
          if (0 < iVar4) goto LAB_14091b9c5;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        *plVar9 = (longlong)plVar8;
        plVar7 = (longlong *)plVar9[1];
        if (plVar5 != plVar7) {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
            plVar7 = (longlong *)plVar9[1];
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
          plVar9[1] = (longlong)plVar5;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar5 + 1;
          lVar11 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
      }
LAB_14091b9c5:
      puVar10 = (undefined8 *)operator_new(0x18);
      if (puVar10 == (undefined8 *)0x0) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar5 + 1;
          lVar11 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
      }
      else {
        *puVar10 = 0;
        puVar10[1] = plVar8;
        puVar10[2] = plVar5;
        LOCK();
        puVar2 = *(undefined8 **)(param_1 + 0xb8);
        *(undefined8 **)(param_1 + 0xb8) = puVar10;
        UNLOCK();
        LOCK();
        *puVar2 = puVar10;
        UNLOCK();
      }
      return 1;
    }
    uVar6 = FName::FName(local_res18,L"WINDOWS",1);
    plVar7 = (longlong *)FUN_1419c6b80(uVar6);
    (**(code **)(*plVar7 + 0x28))(plVar7,plVar5);
  }
  return 0;
}



// FUNCTION 14091ba40 FUN_14091ba40 body=1776 status=ok
// SIG undefined FUN_14091ba40(void)

void FUN_14091ba40(longlong param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined8 *local_res20;
  undefined8 local_148;
  undefined8 local_140;
  char local_138 [4];
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined1 local_114 [4];
  longlong *local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 *local_c0;
  undefined1 **local_b8;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  undefined1 **local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined1 **local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined1 **local_58;
  
  local_110 = (longlong *)0x0;
  local_108 = (longlong *)0x0;
LAB_14091ba82:
  do {
    do {
      do {
        lVar10 = **(longlong **)(param_1 + 0x18);
        if (lVar10 == 0) {
          bVar7 = false;
        }
        else {
          pplVar1 = (longlong **)(lVar10 + 8);
          if (&local_110 != pplVar1) {
            local_110 = *pplVar1;
            *pplVar1 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_108,lVar10 + 0x10);
          }
          local_100 = *(undefined8 *)(lVar10 + 0x18);
          lVar3 = *(longlong *)(param_1 + 0x18);
          *(longlong *)(param_1 + 0x18) = lVar10;
          local_e8 = (longlong *)0x0;
          plStack_e0 = (longlong *)0x0;
          if (pplVar1 != &local_e8) {
            *pplVar1 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar10 + 0x10,&plStack_e0);
          }
          plVar11 = plStack_e0;
          *(undefined8 *)(lVar10 + 0x18) = local_d8;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_e0 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar12 = (int *)((longlong)plVar11 + 0xc);
              iVar9 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
              }
            }
          }
          if (lVar3 != 0) {
            plVar11 = *(longlong **)(lVar3 + 0x10);
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar11 + 1;
              lVar10 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar12 = (int *)((longlong)plVar11 + 0xc);
                iVar9 = *piVar12;
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            FMemory::operator_delete(lVar3,0x20);
          }
          bVar7 = true;
        }
        plVar2 = local_108;
        plVar11 = local_110;
        if (!bVar7) {
          if (local_108 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_108 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar12 = (int *)((longlong)plVar2 + 0xc);
              iVar9 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          return;
        }
        local_134 = 0;
        local_12c = 0;
        local_124 = 0;
        uStack_11c = 0;
      } while (local_110 == (longlong *)0x0);
      pcVar4 = *(char **)local_110[1];
      if ((char *)((undefined8 *)local_110[1])[1] < pcVar4 + 1) {
        (**(code **)(*local_110 + 0x50))(local_110,local_138,1);
      }
      else {
        local_138[0] = *pcVar4;
        *(longlong *)local_110[1] = *(longlong *)local_110[1] + 1;
      }
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_d0,plVar11);
      local_c0 = local_d0;
      local_b8 = &local_c0;
      FUN_141661f40(&local_c0,&local_134);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_d0);
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_b0,plVar11);
      local_a0 = local_b0;
      local_98 = &local_a0;
      FUN_141661f40(&local_a0,&local_124);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_b0);
      puVar5 = *(undefined1 **)plVar11[1];
      if ((undefined1 *)((undefined8 *)plVar11[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar11 + 0x50))(plVar11,local_114,1);
      }
      else {
        local_114[0] = *puVar5;
        *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 1;
      }
    } while (local_138[0] != '\n');
  } while (((*(int *)(param_1 + 0x98) == local_124._4_4_ &&
            *(int *)(param_1 + 0x9c) == (int)uStack_11c) &&
           *(int *)(param_1 + 0xa0) == uStack_11c._4_4_) &&
           (int)local_124 == *(int *)(param_1 + 0x94));
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    iVar9 = FCrc::MemCrc_DEPRECATED(&local_124,0x10);
    lVar10 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar10 = param_1 + 0x78;
    }
    iVar9 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)iVar9) * 4);
    if (iVar9 != -1) {
      do {
        piVar12 = (int *)((longlong)iVar9 * 0x100 + *(longlong *)(param_1 + 0x40));
        if (((piVar12[1] == local_124._4_4_ && piVar12[2] == (int)uStack_11c) &&
            piVar12[3] == uStack_11c._4_4_) && (int)local_124 == *piVar12) {
          if ((iVar9 != -1) && (piVar12 != (int *)0x0)) goto LAB_14091bd98;
          break;
        }
        iVar9 = piVar12[0x3e];
      } while (iVar9 != -1);
    }
  }
  local_res20 = &local_124;
  FUN_140917570(param_1 + 0x40,local_res18,&local_res20,0);
  piVar12 = (int *)((longlong)local_res18[0] * 0x100 + *(longlong *)(param_1 + 0x40));
LAB_14091bd98:
  if (((piVar12[0xb] == 0 && piVar12[10] == 0) && piVar12[9] == 0) && piVar12[8] == 0) {
    piVar12[8] = (int)local_124;
    piVar12[9] = local_124._4_4_;
    piVar12[10] = (int)uStack_11c;
    piVar12[0xb] = uStack_11c._4_4_;
    if (((*(int *)(param_1 + 0x148) != 0) && (*(longlong **)(param_1 + 0x140) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))(), cVar8 != '\0')) {
      plVar11 = (longlong *)0x0;
      if (*(int *)(param_1 + 0x148) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x140);
      }
      (**(code **)(*plVar11 + 0x40))(plVar11,piVar12 + 8);
    }
  }
  plVar11 = local_110;
  *(undefined8 *)(piVar12 + 4) = local_100;
  switch(local_114[0]) {
  case 1:
    puVar6 = *(undefined4 **)local_110[1];
    if ((undefined4 *)((undefined8 *)local_110[1])[1] < puVar6 + 1) {
      (**(code **)(*local_110 + 0x50))(local_110,local_res8);
      if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar11,local_res8);
      }
      FUN_1406cd900(piVar12 + 0x2a,local_res8[0]);
      *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      local_res8[0] = *puVar6;
      *(longlong *)local_110[1] = *(longlong *)local_110[1] + 4;
      FUN_1406cd900(piVar12 + 0x2a,local_res8[0]);
      *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
    }
    goto LAB_14091ba82;
  case 2:
    puVar6 = *(undefined4 **)local_110[1];
    if ((undefined4 *)((undefined8 *)local_110[1])[1] < puVar6 + 1) {
      (**(code **)(*local_110 + 0x50))(local_110,local_res10);
      if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar11,local_res10);
      }
      FUN_1406cd900(piVar12 + 0x2a,local_res10[0]);
      *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      local_res10[0] = *puVar6;
      *(longlong *)local_110[1] = *(longlong *)local_110[1] + 4;
      FUN_1406cd900(piVar12 + 0x2a,local_res10[0]);
      *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
    }
    goto LAB_14091ba82;
  case 3:
    local_148 = 0;
    local_140 = 0;
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_90,local_110);
    local_80 = local_90;
    local_78 = &local_80;
    FUN_141661f40(&local_80,&local_148);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_90);
    if ((((local_140._4_4_ != 0 || (int)local_140 != 0) || local_148._4_4_ != 0) ||
         (int)local_148 != 0) &&
       (((piVar12[0xb] == local_140._4_4_ && piVar12[10] == (int)local_140) &&
        piVar12[9] == local_148._4_4_) && (int)local_148 == piVar12[8])) {
      if ((*(int *)(param_1 + 0x158) != 0) &&
         ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0 &&
          (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x18))(), cVar8 != '\0')))) {
        plVar11 = (longlong *)0x0;
        if (*(int *)(param_1 + 0x158) != 0) {
          plVar11 = *(longlong **)(param_1 + 0x150);
        }
        (**(code **)(*plVar11 + 0x40))(plVar11,&local_148);
      }
      FUN_140920a00(param_1 + 0x40,&local_148);
      *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
      goto LAB_14091ba82;
    }
    break;
  case 4:
    FUN_14091f420(param_1,&local_110);
    *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
    goto LAB_14091ba82;
  case 5:
    local_f8 = 0;
    local_f0 = 0;
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_70,local_110);
    local_60 = local_70;
    local_58 = &local_60;
    FUN_141661f40(&local_60,&local_f8);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_70);
    if (((local_f0._4_4_ != 0 || (int)local_f0 != 0) || local_f8._4_4_ != 0) || (int)local_f8 != 0)
    {
      FUdpMessageProcessor::FNodeInfo::ResetIfRestarted(piVar12 + 4,&local_f8);
      *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
      goto LAB_14091ba82;
    }
    break;
  case 6:
    goto switchD_14091be17_caseD_6;
  case 7:
    FUN_14091fe10(param_1,&local_110);
  }
  *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
  goto LAB_14091ba82;
switchD_14091be17_caseD_6:
  FUN_14091fc50(param_1,&local_110);
  *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(param_1 + 0x38);
  goto LAB_14091ba82;
}



// FUNCTION 14091c150 FUN_14091c150 body=1953 status=ok
// SIG undefined FUN_14091c150(void)

void FUN_14091c150(longlong *param_1)

{
  longlong **pplVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  longlong *plVar21;
  int local_res10 [2];
  int local_res18;
  int local_res20;
  longlong *local_178;
  longlong *plStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  int local_150;
  uint uStack_14c;
  uint *puStack_148;
  undefined4 local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int *local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined8 *local_b0;
  uint *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 **local_68;
  longlong *local_60;
  undefined8 **local_58;
  
  bVar10 = false;
  bVar9 = false;
  local_res10[0] = 0;
  local_178 = (longlong *)0x0;
  plStack_170 = (longlong *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  plVar17 = param_1;
  do {
    do {
      plVar21 = plStack_170;
      lVar14 = *(longlong *)param_1[5];
      if (lVar14 == 0) {
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          plVar17 = plStack_170 + 1;
          lVar14 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar21 + 8))(plVar21,1);
            }
          }
        }
        return;
      }
      pplVar1 = (longlong **)(lVar14 + 8);
      if (&local_178 != pplVar1) {
        local_178 = *pplVar1;
        *pplVar1 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,lVar14 + 0x10);
      }
      local_168 = *(undefined8 *)(lVar14 + 0x18);
      uStack_160 = *(undefined8 *)(lVar14 + 0x20);
      lVar7 = param_1[5];
      param_1[5] = lVar14;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = (longlong *)0x0;
      plStack_f0 = (longlong *)0x0;
      if (pplVar1 != &local_f8) {
        *pplVar1 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar14 + 0x10,&plStack_f0);
      }
      plVar21 = plStack_f0;
      *(undefined4 *)(lVar14 + 0x18) = (undefined4)local_e8;
      *(undefined4 *)(lVar14 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(lVar14 + 0x20) = (undefined4)uStack_e0;
      *(undefined4 *)(lVar14 + 0x24) = uStack_e0._4_4_;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_f0 + 1;
        lVar14 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
          }
        }
      }
      if (lVar7 != 0) {
        plVar21 = *(longlong **)(lVar7 + 0x10);
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar21 + 1;
          lVar14 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar21 + 8))(plVar21,1);
            }
          }
        }
        FMemory::operator_delete(lVar7,0x28);
      }
      lVar14 = (**(code **)(*local_178 + 0x98))();
    } while (0x4000000 < lVar14);
    plVar21 = param_1 + 0x12;
    *(int *)plVar21 = (int)*plVar21 + 1;
    local_128 = plVar21;
    if ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74)) {
      iVar13 = FCrc::MemCrc_DEPRECATED(&local_168,0x10);
      plVar15 = (longlong *)param_1[0x10];
      if ((longlong *)param_1[0x10] == (longlong *)0x0) {
        plVar15 = param_1 + 0xf;
      }
      iVar13 = *(int *)((longlong)plVar15 +
                       ((longlong)(int)param_1[0x11] - 1U & (longlong)iVar13) * 4);
      if (iVar13 != -1) {
        do {
          local_130 = (int *)((longlong)iVar13 * 0x100 + param_1[8]);
          if (((local_130[1] == local_168._4_4_ && local_130[2] == (int)uStack_160) &&
              local_130[3] == uStack_160._4_4_) && *local_130 == (int)local_168) {
            if ((iVar13 != -1) && (local_130 != (int *)0x0)) goto LAB_14091c3e2;
            break;
          }
          iVar13 = local_130[0x3e];
        } while (iVar13 != -1);
      }
    }
    local_b0 = &local_168;
    FUN_140917570(param_1 + 8,local_res10,&local_b0,0);
    local_130 = (int *)((longlong)local_res10[0] * 0x100 + param_1[8]);
LAB_14091c3e2:
    if ((((int)local_168 == 0 && local_168._4_4_ == 0) && (int)uStack_160 == 0) &&
        uStack_160._4_4_ == 0) {
      uStack_14c = 1;
      local_158 = param_1 + 0x18;
      puVar3 = (uint *)(param_1 + 0x1a);
      *(undefined8 *)(local_130 + 4) = *(undefined8 *)((longlong)param_1 + 0xa4);
      uVar5 = *(uint *)(param_1 + 0x1d);
      local_150 = 0;
      uStack_13c = 0;
      iStack_138 = 0;
      if (uVar5 != 0) {
        puVar20 = (uint *)param_1[0x1c];
        if ((uint *)param_1[0x1c] == (uint *)0x0) {
          puVar20 = puVar3;
        }
        iStack_138 = 0;
        uVar6 = *puVar20;
        local_150 = 0;
        while (uVar6 == 0) {
          lVar14 = (longlong)local_150;
          iStack_138 = iStack_138 + 0x20;
          iVar13 = local_150 + 1;
          bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_150;
          local_150 = iVar13;
          if (bVar8) goto LAB_14091c4ca;
          uVar6 = puVar20[lVar14 + 1];
        }
        uStack_14c = -uVar6 & uVar6;
        local_res18 = 0x1f;
        if (uStack_14c != 0) {
          for (; uStack_14c >> local_res18 == 0; local_res18 = local_res18 + -1) {
          }
        }
        if (uStack_14c == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_res18;
        }
        uStack_13c = (iStack_138 - iVar13) + 0x1f;
        if ((int)uVar5 < (int)uStack_13c) {
LAB_14091c4ca:
          uStack_13c = uVar5;
        }
      }
      local_140 = 0xffffffff;
      uVar6 = *(uint *)(param_1 + 0x1d);
      uStack_118 = CONCAT44(uStack_14c,local_150);
      uStack_80 = CONCAT44(uStack_13c,0xffffffff);
      uStack_100 = CONCAT44(uStack_134,iStack_138);
      iVar13 = (int)uVar6 >> 5;
      local_120._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
      uVar18 = -1 << ((byte)uVar6 & 0x1f);
      uVar19 = uVar6 & 0xffffffe0;
      local_120 = CONCAT44(local_120._4_4_,iVar13);
      uStack_110 = CONCAT44(uVar6,uVar18);
      uStack_108 = CONCAT44(uStack_13c,uVar6) & 0xffffffffffffffe0;
      iStack_90 = local_150;
      uStack_8c = uStack_14c;
      puStack_148 = puVar3;
      local_a8 = puVar3;
      local_88 = puVar3;
      local_78 = uStack_100;
      local_98 = local_158;
      uVar11 = uStack_110;
      if (uVar6 != uVar5) {
        puVar20 = (uint *)param_1[0x1c];
        if ((uint *)param_1[0x1c] == (uint *)0x0) {
          puVar20 = puVar3;
        }
        uVar18 = puVar20[iVar13] & uVar18;
        while (uVar18 == 0) {
          uVar19 = uVar19 + 0x20;
          uVar12 = uStack_108 >> 0x20;
          uStack_108 = CONCAT44((int)uVar12,uVar19);
          local_120._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          local_120 = CONCAT44(local_120._4_4_,iVar13 + 1);
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
          goto LAB_14091c5b5;
          uVar18 = puVar20[(longlong)iVar13 + 1];
          uStack_110 = 0xffffffff;
          iVar13 = iVar13 + 1;
        }
        uVar18 = -uVar18 & uVar18;
        local_res20 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> local_res20 == 0; local_res20 = local_res20 + -1) {
          }
        }
        if (uVar18 == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_res20;
        }
        iVar13 = (uVar19 - iVar13) + 0x1f;
        uStack_110 = CONCAT44(iVar13,(undefined4)uStack_110);
        uVar11 = uStack_110;
        if ((int)uVar5 < iVar13) {
LAB_14091c5b5:
          uStack_110 = CONCAT44(uVar5,(undefined4)uStack_110);
          uVar11 = uStack_110;
        }
      }
      while( true ) {
        lVar14 = (longlong)uStack_80._4_4_;
        if (((uStack_80._4_4_ == (int)((ulonglong)uVar11 >> 0x20)) && (local_88 == puVar3)) &&
           (plVar21 = local_128, local_98 == local_158)) break;
        lVar7 = *local_98;
        puVar16 = (undefined8 *)operator_new();
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          bVar9 = true;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
          }
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[4] = 0;
          *(undefined2 *)((longlong)puVar16 + 0x2a) = 0x400;
          puVar16[6] = local_178;
          puVar16[7] = plStack_170;
          plVar17 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
          }
        }
        local_d0 = (longlong *)operator_new(0x18);
        if (local_d0 != (longlong *)0x0) {
          *(undefined4 *)(local_d0 + 1) = 1;
          *local_d0 = (longlong)&PTR_DestroyObject_14415dfc8;
          *(undefined4 *)((longlong)local_d0 + 0xc) = 1;
          local_d0[2] = (longlong)puVar16;
        }
        local_d8 = puVar16;
        SharedPointerInternals::EnableSharedFromThis(&local_d8,puVar16,puVar16);
        local_70 = local_128;
        local_68 = &local_d8;
        FUN_140917cc0(lVar14 * 0xf8 + lVar7 + 0xa0,local_b8,&local_70);
        plVar21 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_d0 + 1;
          lVar14 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar21 + 8))(plVar21,1);
            }
          }
        }
        if ((bVar9) && (bVar9 = false, plVar17 != (longlong *)0x0)) {
          LOCK();
          plVar21 = plVar17 + 1;
          lVar14 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_8c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
      }
    }
    piVar2 = local_130;
    puVar16 = (undefined8 *)operator_new();
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      bVar10 = true;
      local_a0 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
      }
      *puVar16 = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      *(undefined2 *)((longlong)puVar16 + 0x2a) = 0x400;
      puVar16[6] = local_178;
      puVar16[7] = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
      }
    }
    plVar15 = local_a0;
    local_c0 = (longlong *)operator_new(0x18);
    if (local_c0 != (longlong *)0x0) {
      *(undefined4 *)(local_c0 + 1) = 1;
      *local_c0 = (longlong)&PTR_DestroyObject_14415dfc8;
      *(undefined4 *)((longlong)local_c0 + 0xc) = 1;
      local_c0[2] = (longlong)puVar16;
    }
    local_c8 = puVar16;
    SharedPointerInternals::EnableSharedFromThis(&local_c8,puVar16,puVar16);
    local_58 = &local_c8;
    local_60 = plVar21;
    FUN_140917cc0(piVar2 + 0x2a,local_b4);
    plVar21 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      lVar14 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    if ((bVar10) && (bVar10 = false, plVar15 != (longlong *)0x0)) {
      LOCK();
      plVar21 = plVar15 + 1;
      lVar14 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
  } while( true );
}



// FUNCTION 14091c900 FUN_14091c900 body=332 status=ok
// SIG undefined FUN_14091c900(void)

undefined8 * FUN_14091c900(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14415d740;
  *(undefined1 *)(plVar6 + 8) = 0;
  plVar6[9] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14091ca50 Dequeue body=297 status=ok
// SIG undefined Dequeue(void)

undefined8 TQueue<TSharedPtr<FArrayReader,1>,1>::Dequeue(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_18;
  longlong *local_10;
  
  lVar5 = **(longlong **)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)(lVar5 + 8);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,lVar5 + 0x10);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar5;
  local_10 = (longlong *)0x0;
  if (puVar1 != &local_18) {
    *puVar1 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x10,&local_10);
    plVar7 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  if (lVar6 != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FMemory::operator_delete(lVar6,0x18);
  }
  return 1;
}



// FUNCTION 14091cb80 FUN_14091cb80 body=1534 status=ok
// SIG undefined FUN_14091cb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14091cb80(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_1e8 [32];
  uint local_1c8 [2];
  undefined8 local_1c0;
  undefined8 *local_1b8;
  longlong *local_1b0;
  undefined8 **local_1a8;
  undefined8 ***local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined **local_178;
  longlong *local_170;
  byte local_14f;
  undefined8 local_140;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [4];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  uVar5 = (**(code **)(*param_2 + 8))(param_2);
  FArchive::FArchive(&local_178);
  local_178 = &PTR_FUN_143f4a3a0;
  puVar9 = (undefined8 *)0x0;
  local_d8 = 0x7fffffffffffffff;
  local_e8 = 0;
  local_e0 = uVar5;
  FArchive::SetIsLoading(&local_178,1);
  FArchive::SetIsPersistent(&local_178,0);
  local_140 = 0x400;
  local_1c0 = 0;
  (*(code *)local_178[8])(&local_178,&local_1c0);
  puVar6 = (undefined8 *)FName::ToString(&local_1c0,&local_1b8);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar6;
  }
  uVar5 = FUN_14171c950();
  uVar5 = FUN_141799780(uVar5,0xffffffffffffffff,puVar10);
  FWeakObjectPtr::operator=(param_1 + 0xa8,uVar5);
  if (local_1b8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xa8,0,1);
  if (cVar3 != '\0') {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_1b8,&local_178);
    local_1a8 = &local_1b8;
    local_1a0 = &local_1a8;
    FUN_141661f40(&local_1a8,param_1 + 0x8c);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_1b8);
    local_1c8[0] = 0;
    if ((uint *)local_170[1] < (uint *)*local_170 + 1) {
      (*(code *)local_178[10])(&local_178,local_1c8,4);
      if ((local_14f & 0x10) != 0) {
        FArchive::ByteSwap(&local_178,local_1c8,4);
      }
    }
    else {
      local_1c8[0] = *(uint *)*local_170;
      *local_170 = *local_170 + 4;
    }
    if (local_1c8[0] < 0x401) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (*(uint *)(param_1 + 0x84) != local_1c8[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x78,local_1c8[0]);
      }
      while (0 < (int)local_1c8[0]) {
        iVar2 = *(int *)(param_1 + 0x80);
        local_1c8[0] = local_1c8[0] - 1;
        *(int *)(param_1 + 0x80) = iVar2 + 1;
        if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x78,iVar2);
        }
        puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x78));
        puVar6 = puVar9;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar6 = puVar11;
        }
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_1b8,&local_178);
        local_1a8 = &local_1b8;
        local_1a0 = &local_1a8;
        FUN_141661f40(&local_1a8,puVar6);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_1b8);
      }
      pbVar1 = (byte *)(param_1 + 0x88);
      if ((byte *)local_170[1] < (byte *)*local_170 + 1) {
        (*(code *)local_178[10])(&local_178,pbVar1,1);
      }
      else {
        *pbVar1 = *(byte *)*local_170;
        *local_170 = *local_170 + 1;
      }
      if (*pbVar1 < 4) {
        if ((undefined8 *)local_170[1] < (undefined8 *)*local_170 + 1) {
          (*(code *)local_178[10])(&local_178,param_1 + 0xa0,8);
          if ((local_14f & 0x10) != 0) {
            FArchive::ByteSwap(&local_178,param_1 + 0xa0,8);
          }
        }
        else {
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)*local_170;
          *local_170 = *local_170 + 8;
        }
        puVar6 = (undefined8 *)(param_1 + 0x68);
        if ((undefined8 *)local_170[1] < (undefined8 *)*local_170 + 1) {
          (*(code *)local_178[10])(&local_178,puVar6,8);
          if ((local_14f & 0x10) != 0) {
            FArchive::ByteSwap(&local_178,puVar6,8);
          }
        }
        else {
          *puVar6 = *(undefined8 *)*local_170;
          *local_170 = *local_170 + 8;
        }
        local_1c8[0] = 0;
        if ((uint *)local_170[1] < (uint *)*local_170 + 1) {
          (*(code *)local_178[10])(&local_178,local_1c8,4);
          if ((local_14f & 0x10) != 0) {
            FArchive::ByteSwap(&local_178,local_1c8,4);
          }
        }
        else {
          local_1c8[0] = *(uint *)*local_170;
          *local_170 = *local_170 + 4;
        }
        if ((int)local_1c8[0] < 0x81) {
          if (0 < (int)local_1c8[0]) {
            local_1b8 = &local_198;
            local_1b0 = &local_190;
            do {
              local_1c8[0] = local_1c8[0] - 1;
              local_198 = 0;
              local_190 = 0;
              local_188 = 0;
              (*(code *)local_178[8])(&local_178,&local_198);
              FUN_14158ce90(&local_178,&local_190);
              FUN_14090fe80(param_1 + 8,&local_1c0,&local_1b8,0);
              if (local_190 != 0) {
                FMemory::Free();
              }
            } while (0 < (int)local_1c8[0]);
          }
          lVar7 = FWeakObjectPtr::Get(param_1 + 0xa8);
          uVar5 = FMemory::Malloc((longlong)
                                  (*(int *)(lVar7 + 0x40) + -1 + *(int *)(lVar7 + 0x44) &
                                  -*(int *)(lVar7 + 0x44)),0);
          *(undefined8 *)(param_1 + 0x70) = uVar5;
          plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa8);
          (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(param_1 + 0x70),1);
          local_c0 = 0;
          local_c8 = &PTR_LAB_14415b128;
          local_b8 = 0;
          puVar6 = (undefined8 *)operator_new(0x70);
          local_a8 = puVar9;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR__scalar_deleting_destructor__143f60768;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar6[4] = &local_178;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0;
            puVar6[0xc] = 1;
            *(undefined2 *)(puVar6 + 0xd) = 0;
            local_a8 = puVar6;
          }
          puVar6 = (undefined8 *)operator_new(0x18);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = 1;
            *puVar6 = &PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
            puVar6[2] = local_a8;
            puVar9 = puVar6;
          }
          local_a0 = puVar9;
          SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
          uVar5 = FWeakObjectPtr::Get(param_1 + 0xa8);
          local_98[0] = 1;
          local_88 = FUN_1407c3030;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          uVar4 = FUN_142a52120(*(undefined8 *)(param_1 + 0x70),uVar5,&local_c8,local_98);
          if (local_48 != 0) {
            plVar8 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar8 = local_58;
            }
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x10))(plVar8,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
          FJsonStructDeserializerBackend::~FJsonStructDeserializerBackend(&local_c8);
          goto LAB_14091d153;
        }
      }
    }
  }
  uVar4 = 0;
LAB_14091d153:
  FArchive::~FArchive(&local_178);
  return uVar4;
}



// FUNCTION 14091d180 FUN_14091d180 body=40 status=ok
// SIG undefined FUN_14091d180(void)

void FUN_14091d180(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x10);
  return;
}



// FUNCTION 14091d1b0 FUN_14091d1b0 body=9 status=ok
// SIG undefined FUN_14091d1b0(void)

void FUN_14091d1b0(longlong param_1)

{
  FUN_1415b5910(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14091d1c0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FUdpMessageSegmenter,SharedPointerInternals::DefaultDeleter<FUdpMessageSegmenter>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUdpMessageSegmenter::~FUdpMessageSegmenter(lVar1);
    FMemory::operator_delete(lVar1,0x40);
    return;
  }
  return;
}



// FUNCTION 14091d1f0 FUN_14091d1f0 body=22 status=ok
// SIG undefined FUN_14091d1f0(void)

void FUN_14091d1f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014091d201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14091d210 FUN_14091d210 body=1541 status=ok
// SIG undefined FUN_14091d210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14091d210(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  int local_164;
  uint local_160;
  undefined8 local_158;
  int local_150;
  uint uStack_14c;
  uint *puStack_148;
  undefined4 local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int local_108;
  undefined **local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined1 **local_a8;
  undefined4 local_98;
  undefined4 local_94;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar9 = (longlong *)param_1[2];
  lVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
    cVar6 = FWeakObjectPtr::IsValid(uVar8,0,1);
    if (cVar6 != '\0') {
      plVar9 = (longlong *)param_1[2];
      plVar4 = (longlong *)param_1[4];
      lVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
      if (lVar7 == 0) {
LAB_14091d2d3:
        local_158 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
        cVar6 = FWeakObjectPtr::IsValid(uVar8,0,1);
        if (cVar6 == '\0') goto LAB_14091d2d3;
        uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
        lVar7 = FWeakObjectPtr::Get(uVar8);
        local_158 = *(undefined8 *)(lVar7 + 0x18);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,&local_158);
      uVar8 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_c0,plVar4);
      local_b0 = local_c0;
      local_a8 = &local_b0;
      FUN_141661f40(&local_b0,uVar8);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_c0);
      uVar8 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
      FUN_140910980(plVar4,uVar8);
      local_168[0] = (**(code **)(*(longlong *)param_1[2] + 0x38))();
      plVar9 = (longlong *)plVar4[1];
      if ((undefined1 *)plVar9[1] < (undefined1 *)*plVar9 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,local_168,1);
      }
      else {
        local_168[0] = *(undefined1 *)*plVar9;
        *plVar9 = *plVar9 + 1;
      }
      uVar8 = (**(code **)(*(longlong *)param_1[2] + 0x58))();
      FUN_1404c11e0(plVar4,uVar8);
      uVar8 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
      FUN_1404c11e0(plVar4,uVar8);
      lVar7 = (*(code *)**(undefined8 **)param_1[2])();
      local_164 = *(int *)(lVar7 + 8) - *(int *)(lVar7 + 0x34);
      plVar9 = (longlong *)plVar4[1];
      if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
        (**(code **)(*plVar4 + 0x50))(plVar4,&local_164,4);
        if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar4,&local_164,4);
        }
      }
      else {
        local_164 = *(int *)*plVar9;
        *plVar9 = *plVar9 + 4;
      }
      plVar9 = (longlong *)(*(code *)**(undefined8 **)param_1[2])();
      uVar3 = *(uint *)(plVar9 + 5);
      local_150 = 0;
      uStack_14c = 1;
      puVar1 = (uint *)(plVar9 + 2);
      uStack_13c = 0;
      iStack_138 = 0;
      if (uVar3 != 0) {
        puVar14 = (uint *)plVar9[4];
        if ((uint *)plVar9[4] == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = *puVar14;
        iStack_138 = 0;
        local_150 = 0;
        while (uVar12 == 0) {
          lVar7 = (longlong)local_150;
          iStack_138 = iStack_138 + 0x20;
          iVar11 = local_150 + 1;
          bVar15 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_150;
          local_150 = iVar11;
          if (bVar15) goto LAB_14091d4c4;
          uVar12 = puVar14[lVar7 + 1];
        }
        uStack_14c = -uVar12 & uVar12;
        local_108 = 0x1f;
        if (uStack_14c != 0) {
          for (; uStack_14c >> local_108 == 0; local_108 = local_108 + -1) {
          }
        }
        if (uStack_14c == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - local_108;
        }
        uStack_13c = (iStack_138 - iVar11) + 0x1f;
        if ((int)uVar3 < (int)uStack_13c) {
LAB_14091d4c4:
          uStack_13c = uVar3;
        }
      }
      local_140 = 0xffffffff;
      uVar12 = *(uint *)(plVar9 + 5);
      uStack_128 = CONCAT44(uStack_14c,local_150);
      uStack_d0 = CONCAT44(uStack_13c,0xffffffff);
      uStack_110 = CONCAT44(uStack_134,iStack_138);
      local_160 = -1 << ((byte)uVar12 & 0x1f);
      local_130._0_4_ = SUB84(plVar9,0);
      local_e8 = (undefined4)local_130;
      local_130._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
      iVar11 = (int)uVar12 >> 5;
      local_130 = CONCAT44(local_130._4_4_,iVar11);
      uVar13 = uVar12 & 0xffffffe0;
      uStack_120 = CONCAT44(uVar12,local_160);
      uStack_118 = CONCAT44(uStack_13c,uVar12) & 0xffffffffffffffe0;
      uStack_e4 = local_130._4_4_;
      iStack_e0 = local_150;
      uStack_dc = uStack_14c;
      puStack_148 = puVar1;
      local_d8 = puVar1;
      local_c8 = uStack_110;
      uVar8 = uStack_120;
      if (uVar12 != uVar3) {
        puVar14 = (uint *)plVar9[4];
        if ((uint *)plVar9[4] == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = puVar14[iVar11] & local_160;
        while (uVar12 == 0) {
          uVar13 = uVar13 + 0x20;
          uVar5 = uStack_118 >> 0x20;
          uStack_118 = CONCAT44((int)uVar5,uVar13);
          local_130._4_4_ = (undefined4)((ulonglong)local_130 >> 0x20);
          local_130 = CONCAT44(local_130._4_4_,iVar11 + 1);
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_14091d5c1;
          uVar12 = puVar14[(longlong)iVar11 + 1];
          uStack_120 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        local_160 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> local_160 == 0; local_160 = local_160 - 1) {
          }
        }
        if (uVar12 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - local_160;
        }
        iVar11 = (uVar13 - iVar11) + 0x1f;
        uStack_120 = CONCAT44(iVar11,(undefined4)uStack_120);
        uVar8 = uStack_120;
        if ((int)uVar3 < iVar11) {
LAB_14091d5c1:
          uStack_120 = CONCAT44(uVar3,(undefined4)uStack_120);
          uVar8 = uStack_120;
        }
      }
      while( true ) {
        if (((uStack_d0._4_4_ == (int)((ulonglong)uVar8 >> 0x20)) && (local_d8 == puVar1)) &&
           ((longlong *)CONCAT44(uStack_e4,local_e8) == plVar9)) break;
        lVar7 = (longlong)uStack_d0._4_4_ * 0x20 + *(longlong *)CONCAT44(uStack_e4,local_e8);
        (**(code **)(*plVar4 + 0x40))(plVar4,lVar7);
        FUN_14158ce90(plVar4,lVar7 + 8);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_dc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e0);
      }
      local_100 = &PTR_FUN_14415b650;
      plVar9 = (longlong *)operator_new(0x28);
      local_f0 = (longlong *)0x0;
      local_f8 = local_f0;
      if (plVar9 != (longlong *)0x0) {
        plVar9[1] = (longlong)plVar4;
        *plVar9 = (longlong)&PTR_FUN_14415b688;
        plVar9[2] = 0;
        plVar9[3] = 0;
        plVar9[4] = 0;
        local_f8 = plVar9;
      }
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        plVar9[2] = (longlong)local_f8;
        local_f0 = plVar9;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
      plVar9 = (longlong *)param_1[2];
      uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
      uVar8 = FWeakObjectPtr::Get(uVar8);
      uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9);
      local_98 = 1;
      local_88 = FUN_1407c3030;
      local_94 = 1;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      FUN_142a540e0(uVar10,uVar8,&local_100,&local_98);
      if (local_48 != 0) {
        plVar9 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar9 = local_58;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar9 = local_f0;
      *(undefined4 *)(param_1[4] + 0xb8) = 0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_f0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      goto LAB_14091d793;
    }
  }
  *(undefined4 *)(param_1[4] + 0xb8) = 2;
LAB_14091d793:
  plVar9 = (longlong *)param_1[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar11 = (int)plVar9[1];
    bVar15 = iVar11 == 0;
    if (bVar15) {
      *(int *)(plVar9 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    while (!bVar15) {
      LOCK();
      bVar15 = iVar11 == (int)plVar9[1];
      if (bVar15) {
        *(int *)(plVar9 + 1) = iVar11 + 1;
      }
      UNLOCK();
      if (bVar15) {
        if (plVar9 == (longlong *)0x0) {
          return;
        }
        if ((longlong *)*param_1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*param_1 + 0x10))();
        }
        LOCK();
        plVar4 = plVar9 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 != 1) {
          return;
        }
        (**(code **)(*plVar9 + 8))(plVar9,1);
        return;
      }
      LOCK();
      iVar11 = (int)plVar9[1];
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(plVar9 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14091d820 FUN_14091d820 body=117 status=ok
// SIG undefined FUN_14091d820(void)

void FUN_14091d820(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_14091d8a0();
  cVar1 = FUN_14091b5c0(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14091d8a0 FUN_14091d8a0 body=400 status=ok
// SIG undefined FUN_14091d8a0(void)

void FUN_14091d8a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14091d971;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_14091d971:
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
      FUdpMessageProcessor::FNodeInfo::~FNodeInfo((longlong)iStack_1c * 0x100 + 0x10 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<256,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14091da30 FUN_14091da30 body=481 status=ok
// SIG undefined FUN_14091da30(void)

void FUN_14091da30(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_14091db04;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_14091db04:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x38 + *param_1 + 0x18);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14091dc20 FUN_14091dc20 body=181 status=ok
// SIG undefined FUN_14091dc20(void)

ulonglong FUN_14091dc20(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  plVar5 = (longlong *)param_2[1];
  uVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar7 = *param_3;
  uVar8 = param_3[1];
  puVar11 = (undefined8 *)operator_new(0x28);
  if (puVar11 == (undefined8 *)0x0) {
    uVar12 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar10 = (int)lVar9 - 1;
      uVar12 = (ulonglong)uVar10;
      if (uVar10 == 0) {
        uVar12 = (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar12 = (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uVar12 = uVar12 & 0xffffffffffffff00;
  }
  else {
    *puVar11 = 0;
    puVar11[1] = uVar6;
    puVar11[2] = plVar5;
    puVar11[3] = uVar7;
    puVar11[4] = uVar8;
    LOCK();
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar11;
    UNLOCK();
    LOCK();
    uVar6 = *puVar4;
    *puVar4 = puVar11;
    UNLOCK();
    uVar12 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  return uVar12;
}



// FUNCTION 14091dce0 ExecuteTask body=246 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FUdpSerializeMessageTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14091d210(param_1 + 2,param_3,param_1 + 9);
  FUdpSerializeMessageTask::~FUdpSerializeMessageTask(param_1 + 2);
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14415d740;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14091dde0 FUN_14091dde0 body=213 status=ok
// SIG undefined FUN_14091dde0(void)

int * FUN_14091dde0(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x100 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[0x3e];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14091dec0 FindId body=210 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x38 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[0xc];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14091dfa0 FindId body=309 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FIPv4Endpoint,FUdpMessageProcessor::FNodeInfo>,TDefaultMapHashableKeyFuncs<FIPv4Endpoint,FUdpMessageProcessor::FNodeInfo,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *(ushort *)(param_3 + 1);
    uVar8 = *param_3 - (uint)uVar1 ^ (uint)(uVar1 >> 0xd);
    uVar7 = (-0x61c88647 - uVar8) - (uint)uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0xf8;
        if ((*(int *)(lVar6 + lVar2) == *param_3) && (*(ushort *)(lVar6 + 4 + lVar2) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0xf0 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14091e0e0 FUN_14091e0e0 body=159 status=ok
// SIG undefined FUN_14091e0e0(void)

longlong * FUN_14091e0e0(longlong *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  dVar3 = param_2 * 10000.0 + 0.5;
  uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (0.0 <= dVar3) {
    lVar5 = (longlong)dVar3;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar3)) {
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = uVar6;
      uVar4 = movmskpd(0,auVar2);
      dVar3 = (double)(longlong)(lVar5 - (ulonglong)(uVar4 & 1));
    }
  }
  else {
    lVar5 = (longlong)dVar3;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = uVar6;
      uVar4 = movmskpd(0,auVar1);
      *param_1 = (longlong)(double)(longlong)(lVar5 + (ulonglong)(uVar4 & 1 ^ 1));
      return param_1;
    }
  }
  *param_1 = (longlong)dVar3;
  return param_1;
}



// FUNCTION 14091e180 FUN_14091e180 body=201 status=ok
// SIG undefined FUN_14091e180(void)

undefined4 FUN_14091e180(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x18) * 2;
  if (plVar6 != plVar5) {
    do {
      lVar2 = plVar6[1];
      lVar7 = *plVar6 + 8;
      if (*plVar6 == 0) {
        lVar7 = 0;
      }
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      plVar6 = plVar6 + 2;
      plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *param_2);
      *plVar4 = lVar7;
      plVar4[1] = lVar2;
    } while (plVar6 != plVar5);
  }
  lVar2 = param_2[1];
  LeaveCriticalSection(lpCriticalSection);
  return (int)lVar2;
}



// FUNCTION 14091e250 GetDebugName body=39 status=ok
// SIG undefined GetDebugName(void)

undefined8 FUdpMessageTransport::GetDebugName(undefined8 param_1,undefined8 param_2)

{
  FName::FName(param_2,"UdpMessageTransport",1);
  return param_2;
}



// FUNCTION 14091e280 GetName body=58 status=ok
// SIG undefined GetName(void)

undefined8 FUdpMessageTunnelConnection::GetName(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FIPv4Endpoint::ToString(param_1 + 0x58,local_18);
  FText::FromString(param_2,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14091e2c0 FUN_14091e2c0 body=348 status=ok
// SIG undefined FUN_14091e2c0(void)

undefined8 FUN_14091e2c0(longlong *param_1,undefined8 *param_2,undefined2 *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint local_24;
  
  if (*param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 4);
    iVar4 = 0;
    local_24 = 0;
    iVar7 = 0;
    if (uVar5 != 0) {
      puVar6 = (uint *)param_1[3];
      if ((uint *)param_1[3] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 1);
      }
      uVar2 = *puVar6;
      iVar3 = 0;
      while (uVar2 == 0) {
        iVar7 = iVar7 + 0x20;
        local_24 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14091e379;
        uVar2 = puVar6[(longlong)iVar3 + 1];
        iVar3 = iVar3 + 1;
      }
      uVar2 = -uVar2 & uVar2;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar2 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_24 = (iVar7 - iVar3) + 0x1f;
      if ((int)uVar5 < (int)local_24) {
        local_24 = uVar5;
      }
    }
LAB_14091e379:
    if ((int)local_24 < (int)uVar5) {
      *param_3 = (undefined2)local_24;
      iVar3 = (local_24 & 0xffff) * (uint)*(ushort *)((longlong)param_1 + 0x2a);
      iVar7 = (**(code **)(*(longlong *)*param_1 + 0x98))();
      uVar1 = *(ushort *)((longlong)param_1 + 0x2a);
      uVar2 = iVar7 - iVar3;
      iVar7 = *(int *)((longlong)param_2 + 0xc);
      *(undefined4 *)(param_2 + 1) = 0;
      uVar5 = (uint)uVar1;
      if ((int)uVar2 <= (int)(uint)uVar1) {
        uVar5 = uVar2;
      }
      if (iVar7 < (int)uVar5) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2,uVar5);
        iVar7 = *(int *)((longlong)param_2 + 0xc);
        iVar4 = *(int *)(param_2 + 1);
      }
      *(uint *)(param_2 + 1) = iVar4 + uVar5;
      if (iVar7 < (int)(iVar4 + uVar5)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,iVar3);
      (**(code **)(*(longlong *)*param_1 + 0x50))
                ((longlong *)*param_1,*param_2,(longlong)(int)uVar5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14091e430 FUN_14091e430 body=5 status=ok
// SIG undefined FUN_14091e430(void)

undefined8 FUN_14091e430(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// FUNCTION 14091e440 GetTotalInboundBytes body=8 status=ok
// SIG undefined GetTotalInboundBytes(void)

undefined8 FUdpMessageTunnel::GetTotalInboundBytes(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 14091e460 GetUptime body=85 status=ok
// SIG undefined GetUptime(void)

longlong * FUdpMessageTunnelConnection::GetUptime(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FDateTime::UtcNow(local_res8);
    *param_2 = *plVar2 - param_1[7];
    return param_2;
  }
  *param_2 = param_1[3] - param_1[7];
  return param_2;
}



// FUNCTION 14091e4c0 FUN_14091e4c0 body=406 status=ok
// SIG undefined FUN_14091e4c0(void)

undefined8 FUN_14091e4c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar4 = operator_new(0x90);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)
             FUdpMessageTunnelConnection::FUdpMessageTunnelConnection(lVar4,param_2,param_3);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar9 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_14410cc48;
    plVar6[2] = (longlong)plVar5;
    plVar9 = plVar6;
  }
  plVar6 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14091e5e4;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar8 = (longlong *)plVar6[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14091e5e4:
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 == (undefined8 *)0x0) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  else {
    *puVar7 = 0;
    puVar7[1] = plVar5;
    puVar7[2] = plVar9;
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar7;
    UNLOCK();
    LOCK();
    *puVar2 = puVar7;
    UNLOCK();
  }
  return 1;
}



// FUNCTION 14091e660 FUN_14091e660 body=456 status=ok
// SIG undefined FUN_14091e660(void)

void FUN_14091e660(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  plVar6 = (longlong *)operator_new(0xb0);
  plStack_30 = (longlong *)0x0;
  local_38 = plStack_30;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetAddress_14415b0c0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    *(undefined4 *)(plVar6 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0x3c) = 0;
    plVar6[9] = 0;
    *(undefined4 *)(plVar6 + 10) = 0;
    plVar6[0xb] = *param_3;
    lVar4 = param_3[1];
    plVar6[0xc] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    *(undefined8 *)((longlong)plVar6 + 0x8c) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x94) = 0;
    *(undefined4 *)(plVar6 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0xac) = 0;
    local_38 = plVar6;
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_FUN_14415b778;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)local_38;
    plStack_30 = plVar6;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  cVar5 = FUN_14091cb80(local_38,param_2);
  if (cVar5 != '\0') {
    local_28 = local_38;
    plStack_20 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
              (*(longlong **)(param_1 + 0x40),&local_28,param_4);
    plVar6 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 14091e850 FUN_14091e850 body=199 status=ok
// SIG undefined FUN_14091e850(void)

void FUN_14091e850(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    plVar6 = (longlong *)param_2[1];
    uVar7 = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    uVar8 = *param_3;
    puVar9 = (undefined8 *)operator_new(0x20);
    if (puVar9 == (undefined8 *)0x0) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    else {
      *puVar9 = 0;
      puVar9[1] = uVar7;
      puVar9[2] = plVar6;
      puVar9[3] = uVar8;
      LOCK();
      puVar4 = *(undefined8 **)(lVar5 + 0x10);
      *(undefined8 **)(lVar5 + 0x10) = puVar9;
      UNLOCK();
      LOCK();
      *puVar4 = puVar9;
      UNLOCK();
      (**(code **)(**(longlong **)(lVar5 + 0x120) + 0x10))();
    }
  }
  return;
}



// FUNCTION 14091e920 FUN_14091e920 body=710 status=ok
// SIG undefined FUN_14091e920(void)

undefined8 FUN_14091e920(longlong param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined4 local_res8 [2];
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  puVar9 = (undefined8 *)operator_new(0x70);
  puVar12 = (undefined8 *)0x0;
  puVar11 = puVar12;
  if (puVar9 != (undefined8 *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0xb0);
    *puVar9 = &PTR_IsPromotedBuild_14415d760;
    puVar9[1] = &PTR_LAB_14415d790;
    puVar9[2] = DAT_146862d18;
    *(undefined4 *)(puVar9 + 4) = 1;
    puVar9[5] = 0;
    pplVar1 = (longlong **)(puVar9 + 6);
    *pplVar1 = (longlong *)0x0;
    puVar9[7] = 0;
    FDateTime::UtcNow(puVar9 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x94);
    uVar7 = *(undefined8 *)(param_1 + 0x9c);
    puVar9[0xb] = uVar10;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[9] = uVar6;
    puVar9[10] = uVar7;
    uVar10 = FUN_1415ab270(0);
    puVar9[3] = uVar10;
    (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_28,0,0);
    (**(code **)(*local_28 + 0x10))(local_28,*(undefined4 *)(param_1 + 0xa4));
    (**(code **)(*local_28 + 0x30))(local_28,*(undefined2 *)(param_1 + 0xa8));
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    if (pplVar1 != &local_38) {
      *pplVar1 = local_28;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar9 + 7,&plStack_30);
    }
    plVar4 = plStack_30;
    plVar13 = plStack_20;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar13 = plStack_20;
        if (iVar5 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
          plVar13 = plStack_20;
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar13 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    uVar10 = FUN_1415d42a0(puVar9,L"FUdpMessageBeacon",0x20000,1,0xffffffffffffffff);
    puVar9[0xd] = uVar10;
    puVar11 = puVar9;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  puVar11 = (undefined8 *)operator_new(0x60);
  if (puVar11 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0xb0);
    *puVar11 = &PTR_IsPromotedBuild_14415d820;
    puVar11[1] = &PTR_LAB_14415d850;
    puVar9 = (undefined8 *)operator_new(0x20);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar12 = puVar9;
    }
    puVar11[3] = puVar12;
    puVar11[2] = puVar12;
    *(undefined4 *)(puVar11 + 4) = 0;
    puVar11[5] = uVar10;
    *(undefined1 *)(puVar11 + 6) = 0;
    FUN_14091e0e0(puVar11 + 9,0x4059000000000000);
    local_res8[0] = 0;
    (**(code **)(*(longlong *)puVar11[5] + 0xd0))((longlong *)puVar11[5],0x80000,local_res8);
    uVar10 = FUN_1415ab270(0);
    puVar11[10] = uVar10;
    uVar10 = FUN_1415d42a0(puVar11,L"FUdpMessageProcessor.Sender",0x20000,1,0xffffffffffffffff);
    puVar11[7] = uVar10;
    *(undefined8 **)(param_1 + 0xb8) = puVar11;
  }
  return 1;
}



// FUNCTION 14091ec00 FUN_14091ec00 body=1187 status=ok
// SIG undefined FUN_14091ec00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091ec00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong local_b0 [2];
  longlong local_a0 [2];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [32];
  
  FTcpMessagingModule::ShutdownBridge();
  plVar7 = (longlong *)UUdpMessagingSettings::GetPrivateStaticClass();
  lVar12 = plVar7[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar12 = plVar7[0x1f];
  }
  bVar4 = false;
  cVar6 = FIPv4Endpoint::Parse(lVar12 + 0x30,&local_res10);
  if (cVar6 == '\0') {
    local_res10 = _DAT_1469f59a8;
    uVar8 = FIPv4Endpoint::ToString(&local_res10,local_b0);
    FText::FromString(local_80,uVar8);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    uVar8 = FText::ToString(local_80);
    FString::operator=(lVar12 + 0x30,uVar8);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_78 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar4 = true;
  }
  cVar6 = FIPv4Endpoint::Parse(lVar12 + 0x40,&local_res8);
  if (cVar6 == '\0') {
    local_res8 = CONCAT26(local_res8._6_2_,0x1a0ae6000001);
    uVar8 = FIPv4Endpoint::ToString(&local_res8,local_a0);
    FText::FromString(local_68,uVar8);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    uVar8 = FText::ToString(local_68);
    FString::operator=(lVar12 + 0x40,uVar8);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_60 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    bVar4 = true;
  }
  if (*(char *)(lVar12 + 0x50) == '\0') {
    *(undefined1 *)(lVar12 + 0x50) = 1;
  }
  else if (!bVar4) goto LAB_14091edaf;
  FUN_141761740(lVar12,0x4000,0,DAT_1468b6148);
LAB_14091edaf:
  puVar9 = (undefined8 *)operator_new(0x60);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined1 *)(lVar12 + 0x50);
    *puVar9 = &PTR_GetDebugName_14415d718;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 6) = uVar3;
    puVar9[3] = local_res8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    uVar8 = FName::FName(local_res18,L"WINDOWS",1);
    uVar8 = FUN_1419c6b80(uVar8);
    puVar9[7] = uVar8;
    puVar9[8] = 0;
    puVar9[9] = local_res10;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
  }
  plVar7 = (longlong *)0x0;
  plVar10 = (longlong *)operator_new(0x18);
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *plVar10 = (longlong)&PTR_FUN_14415dfd8;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    plVar10[2] = (longlong)puVar9;
    plVar7 = plVar10;
  }
  local_f8 = puVar9;
  plStack_f0 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_f8,puVar9,puVar9);
  puVar9 = (undefined8 *)FGuid::NewGuid(local_50);
  local_e8 = *puVar9;
  uStack_e0 = puVar9[1];
  puVar9 = (undefined8 *)FName::FName(local_res20,"Messaging",1);
  uVar8 = *puVar9;
  uVar11 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar11,uVar8);
  puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x50))(plVar7,local_90);
  local_d8 = *puVar9;
  local_d0 = (longlong *)puVar9[1];
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_88 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  plStack_100 = plStack_f0;
  local_c8 = 0;
  local_b8 = (longlong *)0x0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  local_c0 = local_f8;
  local_108 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b8,&plStack_100);
  plVar7 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_100 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  FMessageBridgeBuilder::Build(&local_e8,&local_118);
  if ((undefined8 *)(param_1 + 0x10) != &local_118) {
    *(undefined8 *)(param_1 + 0x10) = local_118;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_110);
  }
  plVar7 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_110 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  plVar7 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_b8 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_b8)(local_b8);
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
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_d0 != (longlong *)0x0)) {
      (**(code **)(*local_d0 + 8))(local_d0,1);
    }
  }
  plVar7 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_f0 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
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
  return;
}



// FUNCTION 14091f0b0 FUN_14091f0b0 body=134 status=ok
// SIG undefined FUN_14091f0b0(void)

undefined8 * FUN_14091f0b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FSelfRegisteringExec::FSelfRegisteringExec();
  *puVar1 = &PTR_FUN_14415cf38;
  puVar1[1] = &PTR_LAB_14415cf48;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar2;
}



// FUNCTION 14091f140 FUN_14091f140 body=669 status=ok
// SIG undefined FUN_14091f140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091f140(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined6 local_res8;
  undefined2 uStackX_e;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  FUN_140921cc0();
  plVar6 = (longlong *)UUdpMessagingSettings::GetPrivateStaticClass();
  lVar12 = plVar6[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar12 = plVar6[0x1f];
  }
  plVar6 = (longlong *)(lVar12 + 0x70);
  bVar4 = false;
  cVar5 = FIPv4Endpoint::Parse(plVar6,&local_res10);
  plVar11 = (longlong *)0x0;
  if (cVar5 == '\0') {
    local_res10 = _DAT_1469f59a8;
    plVar7 = (longlong *)FIPv4Endpoint::ToString(&local_res10,local_58);
    if (plVar6 != plVar7) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      *plVar6 = *plVar7;
      *plVar7 = 0;
      *(int *)(lVar12 + 0x78) = (int)plVar7[1];
      *(undefined4 *)(lVar12 + 0x7c) = *(undefined4 *)((longlong)plVar7 + 0xc);
      plVar7[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    bVar4 = true;
  }
  plVar6 = (longlong *)(lVar12 + 0x80);
  cVar5 = FIPv4Endpoint::Parse(plVar6,&local_res8);
  if (cVar5 == '\0') {
    _local_res8 = CONCAT26(uStackX_e,0x1a0ae6000001);
    plVar7 = (longlong *)FIPv4Endpoint::ToString(&local_res8,local_48);
    if (plVar6 != plVar7) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      *plVar6 = *plVar7;
      *plVar7 = 0;
      *(int *)(lVar12 + 0x88) = (int)plVar7[1];
      *(undefined4 *)(lVar12 + 0x8c) = *(undefined4 *)((longlong)plVar7 + 0xc);
      plVar7[1] = 0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  else if (!bVar4) goto LAB_14091f29e;
  FUN_141761740(lVar12,0x4000,0,DAT_1468b6148);
LAB_14091f29e:
  lVar8 = operator_new(0x160);
  plVar6 = plVar11;
  if (lVar8 != 0) {
    plVar6 = (longlong *)FUN_140918620(lVar8,&local_res10,&local_res8);
  }
  plVar9 = (longlong *)operator_new(0x18);
  plVar7 = plVar11;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_14410cc48;
    plVar9[2] = (longlong)plVar6;
    plVar7 = plVar9;
  }
  pplVar1 = (longlong **)(param_1 + 0x20);
  if (plVar6 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
  }
  else {
    local_68 = plVar6 + 1;
  }
  plVar9 = local_68;
  local_60 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_68,plVar6,plVar6);
  if (pplVar1 != &local_68) {
    *pplVar1 = plVar9;
    local_68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_60);
    plVar7 = local_60;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (0 < *(int *)(lVar12 + 0x98)) {
    do {
      cVar5 = FIPv4Endpoint::Parse
                        ((longlong)(int)plVar11 * 0x10 + *(longlong *)(lVar12 + 0x90),local_res18);
      if (cVar5 != '\0') {
        (**(code **)**pplVar1)(*pplVar1,local_res18);
      }
      uVar10 = (int)plVar11 + 1;
      plVar11 = (longlong *)(ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(lVar12 + 0x98));
  }
  return;
}



// FUNCTION 14091f3e0 IsOpen body=25 status=ok
// SIG undefined IsOpen(void)

bool FUdpMessageTunnelConnection::IsOpen(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x70))();
  return iVar1 == 1;
}



// FUNCTION 14091f400 IsServerRunning body=9 status=ok
// SIG undefined IsServerRunning(void)

bool FUdpMessageTunnel::IsServerRunning(longlong param_1)

{
  return *(longlong *)(param_1 + 0x50) != 0;
}



// FUNCTION 14091f410 FUN_14091f410 body=8 status=ok
// SIG undefined FUN_14091f410(void)

longlong FUN_14091f410(longlong param_1)

{
  return param_1 + 0x140;
}



// FUNCTION 14091f420 FUN_14091f420 body=2090 status=ok
// SIG undefined FUN_14091f420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14091f420(longlong param_1,uint *param_2,undefined4 *param_3)

{
  uint **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 *puVar7;
  uint *puVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_228 [32];
  longlong *local_208;
  uint local_1f8;
  undefined1 local_1f4 [4];
  int local_1f0 [2];
  undefined8 local_1e8;
  uint *local_1e0;
  longlong *local_1d8;
  int local_1d0 [2];
  ulonglong local_1c8;
  uint local_1c0;
  int local_1bc;
  ushort local_1b8;
  int local_1b4;
  ulonglong local_1b0;
  ushort local_1a8;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong *plStack_188;
  longlong *local_180;
  longlong *local_178;
  uint *local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *plStack_158;
  undefined8 local_150;
  longlong *plStack_148;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 local_11c;
  undefined **local_118;
  longlong *local_110;
  byte local_ef;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar13 = (longlong *)0x0;
  local_1a0 = (void *)0x0;
  local_198 = 0;
  local_1e0 = param_2;
  FUN_14091a540(*(undefined8 *)param_2,&local_1c0);
  if ((local_1b0 != 0) && (local_1b0 < *(ulonglong *)(param_3 + 0x1c))) goto LAB_14091fc0c;
  plVar12 = (longlong *)(param_3 + 8);
  local_168 = plVar12;
  if (param_3[10] != param_3[0x15]) {
    puVar7 = *(undefined4 **)(param_3 + 0x18);
    if (*(undefined4 **)(param_3 + 0x18) == (undefined4 *)0x0) {
      puVar7 = param_3 + 0x16;
    }
    uVar16 = puVar7[(longlong)(int)param_3[0x1a] - 1U & (longlong)(int)local_1c0];
    if (uVar16 != 0xffffffff) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar16 * 0x20 + *plVar12);
        if (*puVar15 == local_1c0) {
          if ((uVar16 != 0xffffffff) && (puVar15 != (uint *)0x0)) goto LAB_14091f53f;
          break;
        }
        uVar16 = puVar15[6];
      } while (uVar16 != 0xffffffff);
    }
  }
  local_170 = &local_1c0;
  FUN_1409172d0(plVar12,local_1d0,&local_170,0);
  puVar15 = (uint *)((longlong)local_1d0[0] * 0x20 + *plVar12);
LAB_14091f53f:
  ppuVar1 = (uint **)(puVar15 + 2);
  if (*ppuVar1 == (uint *)0x0) {
    puVar8 = (uint *)operator_new(0x60);
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      local_1f0[0] = local_1bc;
      local_1c8 = local_1b0;
      *(undefined ***)puVar8 = &PTR__scalar_deleting_destructor__14415d750;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      uVar14 = local_1a8 + 0x1f >> 5;
      local_1f8 = (uint)local_1a8;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      local_1e8 = CONCAT44(local_1e8._4_4_,uVar14);
      uVar16 = 0;
      if (uVar14 != 0) {
        puVar8[0xf] = uVar14 << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar8 + 8,0);
        uVar16 = (uint)local_1e8;
      }
      if (local_1f8 != 0) {
        puVar8[0xe] = local_1f8;
        puVar10 = *(uint **)(puVar8 + 0xc);
        if (*(uint **)(puVar8 + 0xc) == (uint *)0x0) {
          puVar10 = puVar8 + 8;
        }
        _guard_xfg_dispatch_icall_nop(puVar10,0xff,(ulonglong)uVar16 << 2);
      }
      *(short *)(puVar8 + 0x10) = (short)local_1f8;
      puVar8[0x11] = 0;
      *(undefined8 *)(puVar8 + 0x13) = *(undefined8 *)(local_1e0 + 4);
      *(ulonglong *)(puVar8 + 0x16) = local_1c8;
      uVar16 = puVar8[4];
      puVar8[4] = local_1f0[0] + uVar16;
      if ((int)puVar8[5] < (int)(local_1f0[0] + uVar16)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar8 + 2);
      }
    }
    plVar9 = (longlong *)operator_new(0x18);
    plVar12 = plVar13;
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
      plVar9[2] = (longlong)puVar8;
      plVar12 = plVar9;
    }
    local_1e0 = puVar8;
    local_1d8 = plVar12;
    SharedPointerInternals::EnableSharedFromThis(&local_1e0,puVar8,puVar8);
    if (ppuVar1 != &local_1e0) {
      *ppuVar1 = puVar8;
      local_1e0 = (uint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar15 + 4,&local_1d8);
      plVar12 = local_1d8;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  puVar8 = *ppuVar1;
  if ((int)(uint)local_1b8 < (int)puVar8[0xe]) {
    *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(param_1 + 0x38);
    uVar16 = 1 << ((byte)local_1b8 & 0x1f);
    local_1c8 = (ulonglong)(local_1b8 >> 5) * 4;
    puVar10 = *(uint **)(puVar8 + 0xc);
    if (*(uint **)(puVar8 + 0xc) == (uint *)0x0) {
      puVar10 = puVar8 + 8;
    }
    if ((puVar10[local_1b8 >> 5] & uVar16) != 0) {
      if ((int)local_198 + local_1b4 <= (int)puVar8[4]) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_1b4 + *(longlong *)(puVar8 + 2)),local_1a0,
                   (longlong)(int)local_198);
        puVar10 = *(uint **)(puVar8 + 0xc);
        if (*(uint **)(puVar8 + 0xc) == (uint *)0x0) {
          puVar10 = puVar8 + 8;
        }
        *(uint *)((longlong)puVar10 + local_1c8) =
             *(uint *)((longlong)puVar10 + local_1c8) & ~uVar16;
        *(short *)(puVar8 + 0x10) = (short)puVar8[0x10] + -1;
        puVar8[0x11] = puVar8[0x11] + (int)local_198;
      }
    }
  }
  if ((short)(*ppuVar1)[0x10] != 0) goto LAB_14091fc0c;
  local_13c = param_3[4];
  uStack_138 = param_3[5];
  uStack_134 = param_3[6];
  uStack_130 = param_3[7];
  local_12c = *(undefined4 *)(param_1 + 0x94);
  uStack_128 = *(undefined4 *)(param_1 + 0x98);
  uStack_124 = *(undefined4 *)(param_1 + 0x9c);
  uStack_120 = *(undefined4 *)(param_1 + 0xa0);
  local_140[0] = 10;
  local_11c = 2;
  local_1f8 = local_1c0;
  local_1e8 = 0;
  FArchive::FArchive(&local_118);
  local_88 = 0;
  local_118 = &PTR_FUN_143f4a100;
  local_80 = &local_70;
  local_78 = 0;
  FArchive::SetIsSaving(&local_118,1);
  FArchive::SetIsPersistent(&local_118,0);
  local_70 = 0;
  local_118 = &PTR__scalar_deleting_destructor__14415b438;
  local_68 = 0;
  FUN_14091a800(&local_118,local_140);
  if ((uint *)local_110[1] < (uint *)*local_110 + 1) {
    (*(code *)local_118[10])(&local_118,&local_1f8,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,&local_1f8,4);
    }
  }
  else {
    local_1f8 = *(uint *)*local_110;
    *local_110 = *local_110 + 4;
  }
  (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_180,0,0);
  (**(code **)(*local_180 + 0x10))(local_180,*param_3);
  (**(code **)(*local_180 + 0x30))(local_180,*(undefined2 *)(param_3 + 1));
  local_208 = local_180;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))
            (*(longlong **)(param_1 + 0xb0),local_70,local_68 & 0xffffffff,local_1f0);
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_178 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)local_178 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  puVar8 = *ppuVar1;
  if (*(longlong *)(puVar8 + 0x16) == 0) {
    if (((param_3[7] != 0 || param_3[6] != 0) || param_3[5] != 0) || param_3[4] != 0) {
      local_160 = 0;
      plStack_158 = (longlong *)0x0;
      if (((*(int *)(param_1 + 0x138) != 0) && (*(longlong **)(param_1 + 0x130) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))(), cVar6 != '\0')) {
        if (*(int *)(param_1 + 0x138) != 0) {
          plVar13 = *(longlong **)(param_1 + 0x130);
        }
        (**(code **)(*plVar13 + 0x40))(plVar13,puVar8,&local_160,param_3 + 4);
      }
      plVar13 = plStack_158;
      if (plStack_158 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_158 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_158)(plStack_158);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            lVar11 = *plVar13;
LAB_14091fbd7:
            (**(code **)(lVar11 + 8))(plVar13,1);
          }
        }
      }
    }
  }
  else {
    iVar17 = param_3[0x22];
    param_3[0x22] = iVar17 + 1;
    if ((int)param_3[0x23] < iVar17 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3 + 0x20,iVar17);
    }
    plVar12 = (longlong *)((longlong)iVar17 * 0x10 + *(longlong *)(param_3 + 0x20));
    *plVar12 = (longlong)*ppuVar1;
    lVar11 = *(longlong *)(puVar15 + 4);
    plVar12[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    lVar11 = *(longlong *)(param_3 + 0x20);
    iVar17 = param_3[0x22] + -1;
    while (0 < iVar17) {
      plVar9 = (longlong *)((longlong)iVar17 * 0x10 + lVar11);
      iVar17 = (iVar17 + -1) / 2;
      plVar12 = (longlong *)((longlong)iVar17 * 0x10 + lVar11);
      if (*(ulonglong *)(*plVar12 + 0x58) <= *(ulonglong *)(*plVar9 + 0x58)) break;
      if (plVar9 != plVar12) {
        local_58 = *plVar9;
        lStack_50 = plVar9[1];
        uVar3 = *(undefined4 *)((longlong)plVar12 + 4);
        lVar5 = plVar12[1];
        uVar4 = *(undefined4 *)((longlong)plVar12 + 0xc);
        *(int *)plVar9 = (int)*plVar12;
        *(undefined4 *)((longlong)plVar9 + 4) = uVar3;
        *(int *)(plVar9 + 1) = (int)lVar5;
        *(undefined4 *)((longlong)plVar9 + 0xc) = uVar4;
        *plVar12 = local_58;
        plVar12[1] = lStack_50;
      }
    }
    if (*(longlong *)(*ppuVar1 + 0x16) == *(longlong *)(param_3 + 0x1c)) {
      local_190 = 0;
      plStack_188 = (longlong *)0x0;
      while (plVar12 = plStack_188,
            *(longlong *)(**(longlong **)(param_3 + 0x20) + 0x58) == *(longlong *)(param_3 + 0x1c))
      {
        FUN_140917f30(param_3 + 0x20,&local_190,local_1f4,1);
        *(longlong *)(param_3 + 0x1c) = *(longlong *)(param_3 + 0x1c) + 1;
        if (((param_3[7] != 0 || param_3[6] != 0) || param_3[5] != 0) || param_3[4] != 0) {
          local_150 = 0;
          plStack_148 = (longlong *)0x0;
          if (((*(int *)(param_1 + 0x138) != 0) &&
              (*(longlong **)(param_1 + 0x130) != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))(), cVar6 != '\0')) {
            plVar12 = plVar13;
            if (*(int *)(param_1 + 0x138) != 0) {
              plVar12 = *(longlong **)(param_1 + 0x130);
            }
            (**(code **)(*plVar12 + 0x40))(plVar12,local_190,&local_150,param_3 + 4);
          }
          plVar12 = plStack_148;
          if (plStack_148 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_148 + 1;
            lVar11 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_148)(plStack_148);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar17 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
      }
      if (plStack_188 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_188 + 1;
        lVar11 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_188)(plStack_188);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            lVar11 = *plStack_188;
            plVar13 = plStack_188;
            goto LAB_14091fbd7;
          }
        }
      }
    }
  }
  FUN_1406cd900(local_168,local_1c0);
LAB_14091fc0c:
  if (local_1a0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14091fc50 FUN_14091fc50 body=446 status=ok
// SIG undefined FUN_14091fc50(void)

void FUN_14091fc50(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  int local_28 [2];
  ushort *local_20;
  undefined8 local_18;
  
  param_2 = (longlong *)*param_2;
  local_20 = (ushort *)0x0;
  local_18 = 0;
  piVar4 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_28,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_28,4);
    }
  }
  else {
    local_28[0] = *piVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14091a320(param_2,&local_20);
  if (*(int *)(param_3 + 0xa0) != *(int *)(param_3 + 0xcc)) {
    lVar8 = *(longlong *)(param_3 + 0xd8);
    if (*(longlong *)(param_3 + 0xd8) == 0) {
      lVar8 = param_3 + 0xd0;
    }
    iVar6 = *(int *)(lVar8 + ((longlong)*(int *)(param_3 + 0xe0) - 1U & (longlong)local_28[0]) * 4);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(param_3 + 0x98);
      do {
        lVar7 = (longlong)iVar6 * 0x20;
        if (*(int *)(lVar7 + lVar8) == local_28[0]) {
          if ((iVar6 != -1) && (lVar8 = (longlong)iVar6 * 0x20 + lVar8, lVar8 != 0)) {
            lVar7 = *(longlong *)(lVar8 + 8);
            plVar5 = *(longlong **)(lVar8 + 0x10);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            if (lVar7 != 0) {
              for (puVar9 = local_20; puVar9 != local_20 + (int)local_18; puVar9 = puVar9 + 1) {
                uVar3 = *puVar9;
                if ((int)(uint)uVar3 < *(int *)(lVar7 + 0x20)) {
                  lVar8 = *(longlong *)(lVar7 + 0x18);
                  if (*(longlong *)(lVar7 + 0x18) == 0) {
                    lVar8 = lVar7 + 8;
                  }
                  puVar2 = (uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4);
                  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
                }
              }
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar4 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x18 + lVar8);
      } while (iVar6 != -1);
    }
  }
  if (local_20 != (ushort *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}



// FUNCTION 14091fe10 FUN_14091fe10 body=438 status=ok
// SIG undefined FUN_14091fe10(void)

void FUN_14091fe10(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *_Dst;
  int local_res10 [2];
  
  param_2 = (longlong *)*param_2;
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *piVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar4 = (longlong *)0x0;
  plVar7 = plVar4;
  if (*(int *)(param_3 + 0xa0) != *(int *)(param_3 + 0xcc)) {
    lVar8 = *(longlong *)(param_3 + 0xd8);
    if (*(longlong *)(param_3 + 0xd8) == 0) {
      lVar8 = param_3 + 0xd0;
    }
    iVar2 = *(int *)(lVar8 + ((longlong)*(int *)(param_3 + 0xe0) - 1U & (longlong)local_res10[0]) *
                             4);
    if (iVar2 != -1) {
      lVar8 = *(longlong *)(param_3 + 0x98);
      do {
        lVar6 = (longlong)iVar2 * 0x20;
        if (*(int *)(lVar6 + lVar8) == local_res10[0]) {
          if ((iVar2 != -1) && (lVar8 = (longlong)iVar2 * 0x20 + lVar8, lVar8 != 0)) {
            plVar4 = *(longlong **)(lVar8 + 8);
            plVar7 = *(longlong **)(lVar8 + 0x10);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar6 + 0x18 + lVar8);
      } while (iVar2 != -1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    iVar2 = (int)plVar4[4];
    *(undefined4 *)(plVar4 + 4) = 0;
    iVar3 = (int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar5 = iVar3 << 5;
    if (*(int *)((longlong)plVar4 + 0x24) != iVar5) {
      *(int *)((longlong)plVar4 + 0x24) = iVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar4 + 1,0);
    }
    if (iVar2 != 0) {
      *(int *)(plVar4 + 4) = iVar2;
      _Dst = (longlong *)plVar4[3];
      if ((longlong *)plVar4[3] == (longlong *)0x0) {
        _Dst = plVar4 + 1;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,0xff,(longlong)iVar3 << 2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 14091ffd0 FUN_14091ffd0 body=849 status=ok
// SIG undefined FUN_14091ffd0(void)

longlong * FUN_14091ffd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ushort local_res8 [4];
  uint local_res10 [2];
  int local_res18 [4];
  longlong *local_e8;
  longlong *local_e0;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  plVar12 = (longlong *)0x0;
  local_res10[0] = 0;
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                    (*(longlong **)(param_1 + 0x68),local_res10);
  while( true ) {
    if ((cVar6 == '\0') || (local_res10[0] < 2)) {
      return (longlong *)0x1;
    }
    local_res18[0] = 0;
    FArchive::FArchive(&local_d8);
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    local_d8 = &PTR__scalar_deleting_destructor__143f747a8;
    FArchive::SetIsLoading(&local_d8,1);
    FArchive::SetIsPersistent(&local_d8,1);
    uVar5 = local_38;
    if ((int)local_38 < 2) {
      local_38 = CONCAT44(local_38._4_4_,2);
      if (local_38._4_4_ < 2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&lStack_40,uVar5 & 0xffffffff);
      }
    }
    else if ((2 < (int)local_38) && (iVar2 = (int)local_38 + -2, iVar2 != 0)) {
      iVar11 = ((int)local_38 - iVar2) + -2;
      if (iVar11 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lStack_40 + 2),(void *)((int)local_38 + lStack_40),(longlong)iVar11);
      }
      local_38 = CONCAT44(local_38._4_4_,(int)local_38 - iVar2);
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&lStack_40);
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))
                      (*(longlong **)(param_1 + 0x68),lStack_40,2,local_res18,2);
    if (cVar6 == '\0') break;
    if ((ushort *)local_d0[1] < (ushort *)*local_d0 + 1) {
      (*(code *)local_d8[10])(&local_d8,local_res8,2);
      if ((local_af & 0x10) != 0) {
        FArchive::ByteSwap(&local_d8,local_res8,2);
      }
    }
    else {
      local_res8[0] = *(ushort *)*local_d0;
      *local_d0 = *local_d0 + 2;
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                      (*(longlong **)(param_1 + 0x68),local_res10);
    if ((cVar6 != '\0') && (local_res8[0] + 2 <= local_res10[0])) {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))
                        (*(longlong **)(param_1 + 0x68),local_res8,2,local_res18,0);
      if (cVar6 != '\0') {
        *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + (longlong)local_res18[0];
        lVar7 = operator_new(0xa8);
        plVar8 = plVar12;
        if (lVar7 != 0) {
          plVar8 = (longlong *)FArrayReader::FArrayReader(lVar7,1);
        }
        plVar9 = (longlong *)operator_new(0x18);
        local_e0 = plVar12;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *plVar9 = (longlong)&PTR_DestroyObject_144159b08;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          plVar9[2] = (longlong)plVar8;
          local_e0 = plVar9;
        }
        local_e8 = plVar8;
        SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar8,plVar8);
        uVar3 = *(uint *)(local_e8 + 0x14);
        uVar13 = (uint)local_res8[0];
        uVar14 = (uint)local_res8[0];
        if ((int)uVar3 < (int)uVar13) {
          *(uint *)(local_e8 + 0x14) = uVar14;
          if (*(int *)((longlong)local_e8 + 0xa4) < (int)uVar14) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_e8 + 0x13,uVar3);
          }
        }
        else if (((int)uVar13 < (int)uVar3) && (uVar13 != uVar3)) {
          *(uint *)(local_e8 + 0x14) = uVar14;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
        }
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))
                          (*(longlong **)(param_1 + 0x68),local_e8[0x13],(int)local_e8[0x14],
                           local_res18,0);
        if (cVar6 != '\0') {
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + (longlong)local_res18[0];
          puVar10 = (undefined8 *)operator_new(0x18);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = local_e8;
            puVar10[2] = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            puVar4 = *(undefined8 **)(param_1 + 0x30);
            *(undefined8 **)(param_1 + 0x30) = puVar10;
            *puVar4 = puVar10;
          }
          plVar12 = (longlong *)0x1;
        }
        plVar8 = local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_e0 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      break;
    }
    if (lStack_40 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_d8);
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                      (*(longlong **)(param_1 + 0x68),local_res10);
  }
  if (lStack_40 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_d8);
  return plVar12;
}



// FUNCTION 140920330 FUN_140920330 body=541 status=ok
// SIG undefined FUN_140920330(void)

void FUN_140920330(longlong *param_1)

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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14092045f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_14092045f:
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
        lVar6 = (longlong)iStack_2c * 0x100 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xfc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xf8) =
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



// FUNCTION 140920550 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14092067f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_14092067f:
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
        lVar6 = (longlong)iStack_2c * 0x38 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x34) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x30) =
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



// FUNCTION 140920770 FUN_140920770 body=654 status=ok
// SIG undefined FUN_140920770(void)

void FUN_140920770(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piVar16;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar7 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1409208af;
        uVar10 = puVar15[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
LAB_1409208af:
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
        piVar16 = (int *)((longlong)iStack_1c * 0xf8 + *param_1);
        uVar3 = *(ushort *)(piVar16 + 1);
        uVar12 = *piVar16 - (uint)uVar3 ^ (uint)(uVar3 >> 0xd);
        uVar10 = (-0x61c88647 - uVar12) - (uint)uVar3 ^ uVar12 << 8;
        uVar13 = (uVar3 - uVar10) - uVar12 ^ uVar10 >> 0xd;
        uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar10 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar12) - uVar13 ^ uVar12 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar12 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar16[0x3d] = uVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        piVar16[0x3c] =
             *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140920a00 FUN_140920a00 body=389 status=ok
// SIG undefined FUN_140920a00(void)

undefined8 FUN_140920a00(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar3 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar7 + ((longlong)iVar3 & uVar8) * 4);
  if (iVar3 == -1) {
    return 0;
  }
  lVar2 = *param_1;
  while( true ) {
    lVar6 = (longlong)iVar3 * 0x100;
    if (((*(int *)(lVar6 + 4 + lVar2) == param_2[1] && *(int *)(lVar6 + 8 + lVar2) == param_2[2]) &&
        *(int *)(lVar6 + 0xc + lVar2) == param_2[3]) && *param_2 == *(int *)(lVar6 + lVar2)) break;
    iVar3 = *(int *)(lVar6 + 0xf8 + lVar2);
    if (iVar3 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = (longlong)iVar3 * 0x100;
    uVar8 = (longlong)*(int *)(lVar5 + 0xfc + lVar2) & uVar8;
    piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
    iVar1 = *(int *)((longlong)plVar7 + uVar8 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar4 = *(int *)(lVar5 + 0xf8 + lVar2);
        break;
      }
      piVar4 = (int *)((longlong)iVar1 * 0x100 + 0xf8 + lVar2);
      iVar1 = *piVar4;
    }
  }
  FUdpMessageProcessor::FNodeInfo::~FNodeInfo(*param_1 + 0x10 + lVar6);
  TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 140920b90 FUN_140920b90 body=222 status=ok
// SIG undefined FUN_140920b90(void)

void FUN_140920b90(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar7 = (longlong)param_2 * 0x38;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar7 + 0x34 + lVar3));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar6 = *(int *)(lVar7 + 0x30 + lVar3);
        break;
      }
      piVar6 = (int *)(lVar3 + 0x30 + (longlong)iVar2 * 0x38);
      iVar2 = *piVar6;
    }
  }
  plVar4 = *(longlong **)((longlong)param_2 * 0x38 + *param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar6 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 140920c70 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

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
    lVar11 = uVar9 << 8;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x100 + *param_1) = iVar8;
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
      lVar11 = lVar11 + 0x100;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140920d30 RemoveExpiredNodes body=425 status=ok
// SIG undefined RemoveExpiredNodes(void)

void FUdpMessageTunnel::RemoveExpiredNodes(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  char local_40;
  char cStack_3f;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  iVar1 = (int)param_2[5];
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_2 + 2);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = puStack_28;
    }
    uVar2 = *puVar6;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar5 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar5;
      if (bVar3) goto LAB_140920df1;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
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
    if (iVar1 < local_68._4_4_) {
LAB_140920df1:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = '\0';
  cStack_3f = '\0';
  local_10._0_4_ = SUB84(param_2,0);
  local_10._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < (int)param_2[5];
  local_48 = param_2;
  local_38 = param_2;
  local_10 = param_2;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      if (1200000000 <
          *(longlong *)(param_1 + 0x50) -
          *(longlong *)((longlong)iStack_5c * 0x38 + 0x28 + *param_2)) {
        FUN_140920b90(local_58._8_8_);
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140920ee0 ResetIfRestarted body=339 status=ok
// SIG undefined ResetIfRestarted(void)

void FUdpMessageProcessor::FNodeInfo::ResetIfRestarted(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((*(int *)(param_1 + 0x1c) != param_2[3] || *(int *)(param_1 + 0x18) != param_2[2]) ||
      *(int *)(param_1 + 0x14) != param_2[1]) || *(int *)(param_1 + 0x10) != *param_2) {
    TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x8c);
    lVar3 = *(longlong *)(param_1 + 0x80);
    iVar8 = *(int *)(param_1 + 0x88);
    if (iVar6 < 0) {
      if (iVar8 != 0) {
        plVar7 = (longlong *)(lVar3 + 8);
        do {
          plVar4 = (longlong *)*plVar7;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar6 = *(int *)(param_1 + 0x8c);
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      if (iVar6 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x80),0);
      }
    }
    else {
      if (iVar8 != 0) {
        plVar7 = (longlong *)(lVar3 + 8);
        do {
          plVar4 = (longlong *)*plVar7;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    *(undefined8 *)(param_1 + 0x70) = 1;
    uVar5 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
  }
  return;
}



// FUNCTION 140921040 FUN_140921040 body=116 status=ok
// SIG undefined FUN_140921040(void)

void FUN_140921040(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_var;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  FMemory::QuantizeSize(lVar3 << 8,0);
  iVar2 = extraout_var;
  if (extraout_var < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar2 << 8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1409210c0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xf8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xf8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140921160 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<256,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  int iVar1;
  int extraout_var;
  longlong lVar2;
  
  iVar1 = 0;
  if ((param_2 != 0) &&
     (FMemory::QuantizeSize((longlong)param_2 << 8,0), iVar1 = extraout_var, extraout_var < param_2)
     ) {
    iVar1 = 0x7fffffff;
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1 << 8,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1409211d0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xf8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xf8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140921260 FUN_140921260 body=127 status=ok
// SIG undefined FUN_140921260(void)

void FUN_140921260(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UUdpMessagingSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FTcpMessagingModule::ShutdownBridge(param_1);
  }
  else {
    FUN_14091ec00();
  }
  if (*(char *)(lVar2 + 0x68) != '\0') {
    FUN_14091f140();
    return;
  }
  FUN_140921cc0(param_1);
  return;
}



// FUNCTION 1409212e0 Run body=221 status=ok
// SIG undefined Run(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUdpMessageBeacon::Run(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_res8;
  
  cVar1 = *(char *)(param_1 + 0x60);
  while (cVar1 == '\0') {
    FDateTime::UtcNow(&local_res8);
    if (*(longlong *)(param_1 + 0x40) <= local_res8) {
      lVar2 = (longlong)((double)*(int *)(param_1 + 0x20) * (double)_DAT_146862d10);
      if (lVar2 <= DAT_146862d18) {
        lVar2 = DAT_146862d18;
      }
      *(longlong *)(param_1 + 0x10) = lVar2;
      cVar1 = FUN_140921b70(param_1,5,param_1 + 0x10);
      if (cVar1 != '\0') {
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x10) + local_res8;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),
               (longlong)((double)(*(longlong *)(param_1 + 0x40) - local_res8) * 0.0001),0);
    cVar1 = *(char *)(param_1 + 0x60);
  }
  FUN_140921b70(param_1,3,param_1 + 0x10);
  return 0;
}



// FUNCTION 1409213c0 Run body=211 status=ok
// SIG undefined Run(void)

undefined8 FUdpMessageProcessor::Run(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  cVar2 = *(char *)(param_1 + 0x110);
  while (cVar2 == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x20))
                      (*(longlong **)(param_1 + 0x120),10,0);
    if (cVar2 != '\0') {
      puVar3 = (undefined8 *)FDateTime::UtcNow(local_res8);
      *(undefined8 *)(param_1 + 0x38) = *puVar3;
      FUN_14091ba40(param_1);
      FUN_14091c150(param_1);
      FUN_1409248a0(param_1);
      FUN_140925650(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x110);
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = *(longlong **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return 0;
}



// FUNCTION 1409214a0 Run body=157 status=ok
// SIG undefined Run(void)

undefined8 FUdpMessageTunnel::Run(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  cVar1 = *(char *)(param_1 + 0x120);
  while (cVar1 == '\0') {
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res8);
    *(undefined8 *)(param_1 + 0x50) = *puVar2;
    FUN_140924640(param_1);
    FUN_1409237c0(param_1,*(undefined8 *)(param_1 + 0xb8));
    FUN_1409237c0(param_1,*(undefined8 *)(param_1 + 0x140));
    FUN_140922e80(param_1);
    RemoveExpiredNodes(param_1,param_1 + 0x60);
    RemoveExpiredNodes(param_1,param_1 + 0xd0);
    FUN_1416b1760(0);
    cVar1 = *(char *)(param_1 + 0x120);
  }
  return 0;
}



// FUNCTION 140921540 Run body=107 status=ok
// SIG undefined Run(void)

undefined8 FUdpMessageTunnelConnection::Run(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  do {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))(*(longlong **)(param_1 + 0x68),2);
    if (cVar1 != '\0') {
      uVar2 = FUN_14091ffd0(param_1);
      *(undefined1 *)(param_1 + 0x88) = uVar2;
      uVar2 = FUN_140921980(param_1);
      *(undefined1 *)(param_1 + 0x88) = uVar2;
    }
    FUN_1416b1760(0);
  } while (*(char *)(param_1 + 0x88) != '\0');
  puVar3 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x20) = *puVar3;
  return 0;
}



// FUNCTION 1409215b0 FUN_1409215b0 body=843 status=ok
// SIG undefined FUN_1409215b0(void)

undefined8 FUN_1409215b0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int local_res8 [2];
  uint local_res10;
  undefined2 local_res18 [8];
  undefined1 local_68 [4];
  undefined2 local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    plVar11 = (longlong *)0x0;
    do {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                        (*(longlong **)(param_1 + 0x10),0,*(undefined8 *)(param_1 + 0x40));
      if (cVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))
                  (*(longlong **)(param_1 + 0x18),&local_50,0,0);
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
        plVar8 = local_48;
        while (local_48 = plVar8, cVar4 != '\0') {
          plVar6 = (longlong *)operator_new(0xa8);
          plVar8 = plVar11;
          if (plVar6 != (longlong *)0x0) {
            FArchive::FArchive(plVar6);
            plVar6[0x12] = 0;
            plVar6[0x13] = 0;
            plVar6[0x14] = 0;
            *plVar6 = (longlong)&PTR__scalar_deleting_destructor__143f747a8;
            FArchive::SetIsLoading(plVar6,1);
            FArchive::SetIsPersistent(plVar6,1);
            plVar8 = plVar6;
          }
          plVar6 = (longlong *)operator_new(0x18);
          local_58 = plVar11;
          if (plVar6 != (longlong *)0x0) {
            *(undefined4 *)(plVar6 + 1) = 1;
            *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
            *plVar6 = (longlong)&PTR_DestroyObject_144159b08;
            plVar6[2] = (longlong)plVar8;
            local_58 = plVar6;
          }
          local_60 = plVar8;
          SharedPointerInternals::EnableSharedFromThis(&local_60,plVar8,plVar8);
          uVar10 = 0xffe3;
          if (local_res10 < 0xffe4) {
            uVar10 = local_res10;
          }
          uVar2 = *(uint *)(local_60 + 0x14);
          if ((int)uVar2 < (int)uVar10) {
            *(uint *)(local_60 + 0x14) = uVar10;
            if (*(int *)((longlong)local_60 + 0xa4) < (int)uVar10) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_60 + 0x13,uVar2);
            }
          }
          else if (((int)uVar10 < (int)uVar2) && (uVar10 != uVar2)) {
            *(uint *)(local_60 + 0x14) = uVar10;
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
          }
          local_res8[0] = 0;
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))
                            (*(longlong **)(param_1 + 0x10),local_60[0x13],(int)local_60[0x14],
                             local_res8,local_50,0);
          plVar8 = local_60;
          if (cVar4 != '\0') {
            iVar9 = (int)local_60[0x14] - local_res8[0];
            if (iVar9 != 0) {
              iVar5 = (int)local_60[0x14];
              iVar7 = (iVar5 - iVar9) - local_res8[0];
              if (iVar7 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(local_60[0x13] + (longlong)local_res8[0]),
                           (void *)((longlong)(iVar9 + local_res8[0]) + local_60[0x13]),
                           (longlong)iVar7);
                iVar5 = (int)plVar8[0x14];
              }
              *(int *)(plVar8 + 0x14) = iVar5 - iVar9;
            }
            plVar6 = local_48;
            plVar8 = local_50;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_50 + 0x28))(local_50,local_68);
            (**(code **)(*plVar8 + 0x40))(plVar8,local_res18);
            local_64 = local_res18[0];
            if (((*(int *)(param_1 + 0x50) != 0) &&
                (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))(), cVar4 != '\0')) {
              plVar8 = plVar11;
              if (*(int *)(param_1 + 0x50) != 0) {
                plVar8 = *(longlong **)(param_1 + 0x48);
              }
              (**(code **)(*plVar8 + 0x40))(plVar8,&local_60,local_68);
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar6 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          plVar8 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_58 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
          plVar8 = local_48;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar8 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
        }
      }
    } while (*(char *)(param_1 + 0x20) == '\0');
  }
  return 0;
}



// FUNCTION 140921900 Run body=125 status=ok
// SIG undefined Run(void)

undefined8 FUdpSocketSender::Run(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    while (cVar1 = FUN_1409243a0(param_1,param_1 + 0x48), cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))
                (*(longlong **)(param_1 + 0x50),
                 (longlong)((double)*(longlong *)(param_1 + 0x48) * 0.0001),0);
      if (*(char *)(param_1 + 0x30) != '\0') {
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return 0;
}



// FUNCTION 140921980 FUN_140921980 body=482 status=ok
// SIG undefined FUN_140921980(void)

undefined8 FUN_140921980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined2 local_res8 [4];
  int local_res10 [2];
  undefined8 local_res18;
  longlong local_e8;
  longlong *plStack_e0;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30 [3];
  
  if (**(longlong **)(param_1 + 0x58) == 0) {
    return 1;
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))(*(longlong **)(param_1 + 0x68),1,0);
  if (cVar6 == '\0') {
    return 1;
  }
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  TQueue<TSharedPtr<FArrayReader,1>,1>::Dequeue(param_1 + 0x50,&local_e8);
  local_res10[0] = 0;
  local_res18 = 0;
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a100;
  local_40 = local_30;
  local_38 = 0;
  FArchive::SetIsSaving(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  lVar4 = local_e8;
  local_30[0] = 0;
  local_30[1] = 0;
  local_d8 = &PTR__scalar_deleting_destructor__14415b438;
  local_res8[0] = *(undefined2 *)(local_e8 + 0xa0);
  if ((undefined2 *)local_d0[1] < (undefined2 *)*local_d0 + 1) {
    FMemoryWriter::Serialize(&local_d8,local_res8,2);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,local_res8,2);
    }
  }
  else {
    local_res8[0] = *(undefined2 *)*local_d0;
    *local_d0 = *local_d0 + 2;
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x50))
                    (*(longlong **)(param_1 + 0x68),local_30[0],2,local_res10);
  if (cVar6 != '\0') {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + (longlong)local_res10[0];
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x50))
                      (*(longlong **)(param_1 + 0x68),*(undefined8 *)(lVar4 + 0x98),
                       *(undefined4 *)(lVar4 + 0xa0),local_res10);
    if (cVar6 != '\0') {
      uVar7 = 1;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + (longlong)local_res10[0];
      goto LAB_140921ae6;
    }
  }
  uVar7 = 0;
LAB_140921ae6:
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_d8);
  plVar5 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140921b70 FUN_140921b70 body=335 status=ok
// SIG undefined FUN_140921b70(void)

undefined8 FUN_140921b70(longlong param_1,undefined1 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res10 [8];
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined1 **local_110;
  undefined1 local_108 [4];
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e4;
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_f4 = *(undefined4 *)(param_1 + 0x48);
  uStack_f0 = *(undefined4 *)(param_1 + 0x4c);
  uStack_ec = *(undefined4 *)(param_1 + 0x50);
  uStack_e8 = *(undefined4 *)(param_1 + 0x54);
  local_108[0] = 10;
  local_104 = 0;
  local_fc = 0;
  local_e4 = param_2;
  FArchive::FArchive(local_d8);
  local_48 = 0;
  local_d8[0] = &PTR_FUN_143f4a100;
  local_40 = &local_30;
  local_38 = 0;
  FArchive::SetIsSaving(local_d8,1);
  FArchive::SetIsPersistent(local_d8,0);
  local_30 = 0;
  local_d8[0] = &PTR__scalar_deleting_destructor__14415b438;
  local_28 = 0;
  FUN_14091a800(local_d8,local_108);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_128,local_d8);
  local_118 = local_128;
  local_110 = &local_118;
  FUN_141661f40(&local_118,param_1 + 0x48);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_128);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x68))
                    (*(longlong **)(param_1 + 0x58),1,*param_3);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))
                      (*(longlong **)(param_1 + 0x58),local_30,local_28 & 0xffffffff,local_res10,
                       *(undefined8 *)(param_1 + 0x30));
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_140921c8d;
    }
  }
  uVar2 = 0;
LAB_140921c8d:
  if (local_30 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_d8);
  return uVar2;
}



// FUNCTION 140921cc0 FUN_140921cc0 body=143 status=ok
// SIG undefined FUN_140921cc0(void)

void FUN_140921cc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x20) != &local_18) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_10);
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140921d50 FUN_140921d50 body=365 status=ok
// SIG undefined FUN_140921d50(void)

void FUN_140921d50(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x10))();
  puVar2 = (undefined8 *)operator_new(0x48);
  puVar6 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_Init_14415b168;
    *(undefined8 *)((longlong)puVar2 + 0xc) = *param_2;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[3] = 10000000;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    uVar3 = FUN_1415d42a0(puVar2,L"FTcpListener",0x2000,0,0xffffffffffffffff);
    puVar2[6] = uVar3;
    puVar6 = puVar2;
  }
  param_1[10] = (longlong)puVar6;
  uStack_10 = 0;
  local_18 = FUN_14091e4c0;
  plVar7 = puVar6 + 7;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_14415b6a8;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
    plVar4[1] = (longlong)(param_1 + -1);
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
  }
  if (&local_18 != plVar7) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(puVar6 + 8) != 0) && (plVar1 = (longlong *)*plVar7, plVar1 != (longlong *)0x0))
      {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar7 != 0) {
          lVar5 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar5;
        }
        *(undefined4 *)(puVar6 + 8) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar7);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return;
}



// FUNCTION 140921ec0 FUN_140921ec0 body=3684 status=ok
// SIG undefined FUN_140921ec0(void)

undefined8 FUN_140921ec0(longlong param_1,undefined8 param_2)

{
  void **ppvVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined2 *puVar19;
  undefined4 local_res8;
  undefined2 uStackX_c;
  undefined2 uStackX_e;
  undefined8 local_res10;
  uint6 local_284;
  undefined2 uStack_27e;
  void *local_278;
  int local_270;
  undefined4 local_26c;
  void *local_268;
  undefined8 local_260;
  undefined2 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  void *local_248;
  ulonglong local_240;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined8 local_234;
  longlong local_228 [2];
  void *local_218;
  int local_210;
  undefined4 local_20c;
  undefined1 local_208;
  undefined1 local_207;
  undefined4 local_204;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined8 local_1f4;
  longlong local_1e8 [2];
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined8 local_1b4;
  longlong local_1a8 [2];
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined1 local_187;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined8 local_174;
  longlong local_168 [2];
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_147;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  ushort local_138;
  undefined1 local_136;
  uint local_134;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  ulonglong local_110;
  undefined2 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined8 local_f4;
  longlong local_e8 [2];
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined8 local_b4;
  longlong local_a8 [2];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined8 local_74;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  
  local_240 = 0x18;
  local_248 = (void *)0x0;
  local_res10 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  pvVar12 = local_248;
  FGenericPlatformString::Memcpy(local_248,L"UdpMessageUnicastSocket",0x30);
  lVar17 = (longlong)(int)local_240;
  local_284 = (uint6)DAT_1469f59a0;
  local_278 = (void *)0x0;
  local_270 = (int)local_240;
  if ((int)local_240 == 0) {
    local_26c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,local_240 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_278,pvVar12,lVar17 * 2);
  }
  local_1f8 = 0;
  local_1f6 = 0;
  local_1f4 = _local_284;
  local_268 = (void *)0x0;
  local_260 = 0;
  local_258 = 0x100;
  local_254 = 0;
  local_250 = 0;
  local_24c = 0;
  local_1f7 = 0;
  FString::FString(local_1e8,&local_278);
  pvVar3 = local_268;
  lVar17 = (longlong)(int)local_260;
  local_1d8 = (void *)0x0;
  local_1d0 = (int)local_260;
  if ((int)local_260 == 0) {
    local_1cc = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_1d8,local_260 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_1d8,pvVar3,lVar17 << 2);
  }
  local_1c8 = (undefined1)local_258;
  local_1c7 = local_258._1_1_;
  local_1c4 = local_254;
  local_1c0 = local_250;
  local_1b8 = local_1f8;
  local_1bc = local_24c;
  local_1f4 = *(undefined8 *)(param_1 + 0x48);
  local_1b7 = local_1f7;
  local_1f6 = 1;
  local_1b6 = 1;
  local_1b4 = local_1f4;
  FString::FString(local_1a8,local_1e8);
  pvVar7 = local_1d8;
  lVar17 = (longlong)local_1d0;
  local_198 = (void *)0x0;
  local_190 = local_1d0;
  if (local_1d0 == 0) {
    local_18c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_198,local_1d0,0);
    _guard_xfg_dispatch_icall_nop(local_198,pvVar7,lVar17 << 2);
  }
  local_187 = local_1c7;
  local_184 = local_1c4;
  local_180 = local_1c0;
  local_17c = local_1bc;
  local_238 = local_1b8;
  local_237 = local_1b7;
  local_236 = local_1b6;
  local_234 = local_1b4;
  local_188 = 1;
  FString::FString(local_228,local_1a8);
  pvVar8 = local_198;
  lVar17 = (longlong)local_190;
  local_218 = (void *)0x0;
  local_210 = local_190;
  if (local_190 == 0) {
    local_20c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_218,local_190,0);
    _guard_xfg_dispatch_icall_nop(local_218,pvVar8,lVar17 << 2);
  }
  local_208 = local_188;
  local_207 = local_187;
  local_200 = local_180;
  local_1fc = local_17c;
  local_178 = local_238;
  local_177 = local_237;
  local_176 = local_236;
  local_174 = local_234;
  local_204 = 0x200000;
  FString::FString(local_168,local_228);
  pvVar4 = local_218;
  lVar17 = (longlong)local_210;
  local_158 = (void *)0x0;
  local_150 = local_210;
  if (local_210 == 0) {
    local_14c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_158,local_210,0);
    _guard_xfg_dispatch_icall_nop(local_158,pvVar4,lVar17 << 2);
  }
  local_148 = local_208;
  local_147 = local_207;
  local_144 = local_204;
  local_140 = local_200;
  local_13c = local_1fc;
  uVar9 = FUN_14091b0a0(&local_178);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  if (local_158 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (local_228[0] != 0) {
    FMemory::Free();
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  if (local_1a8[0] != 0) {
    FMemory::Free();
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (local_278 != (void *)0x0) {
    FMemory::Free();
  }
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar9 = 0;
  }
  else {
    pvVar12 = (void *)0x0;
    local_240 = 0x1a;
    local_248 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    pvVar3 = local_248;
    FGenericPlatformString::Memcpy(local_248,L"UdpMessageMulticastSocket",0x34);
    lVar17 = (longlong)(int)local_240;
    local_138 = 0;
    local_136 = 0;
    local_134 = DAT_1469f59a0;
    uStack_130 = 0;
    local_128 = (void *)0x0;
    local_120 = (int)local_240;
    if ((int)local_240 == 0) {
      local_11c = 0;
      local_238 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_240 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_128,pvVar3,lVar17 * 2);
      local_238 = (undefined1)local_138;
    }
    local_234 = CONCAT26(uStack_12e,CONCAT24(uStack_130,local_134));
    local_118 = (void *)0x0;
    local_110 = 0;
    local_108 = 0x100;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_138 = local_138 & 0xff;
    local_237 = 0;
    local_236 = local_136;
    FString::FString(local_228,&local_128);
    lVar17 = (longlong)(int)local_110;
    local_218 = (void *)0x0;
    local_210 = (int)local_110;
    if ((int)local_110 == 0) {
      local_20c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_218,local_110 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_218,local_118,lVar17 << 2);
    }
    local_208 = (undefined1)local_108;
    local_207 = local_108._1_1_;
    local_204 = local_104;
    local_1fc = local_fc;
    local_f8 = local_238;
    local_f7 = local_237;
    local_f6 = local_236;
    local_f4 = local_234;
    local_200 = 1;
    FString::FString(local_e8,local_228);
    lVar17 = (longlong)local_210;
    local_d8 = (void *)0x0;
    local_d0 = local_210;
    if (local_210 == 0) {
      local_cc = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_d8,local_210,0);
      _guard_xfg_dispatch_icall_nop(local_d8,local_218,lVar17 << 2);
    }
    local_c8 = local_208;
    local_c7 = local_207;
    local_c4 = local_204;
    local_c0 = local_200;
    local_bc = local_1fc;
    local_res8 = *(undefined4 *)(param_1 + 0x48);
    local_1f8 = local_f8;
    uStackX_c = local_f4._4_2_;
    local_1f4 = CONCAT26(uStackX_e,CONCAT24(local_f4._4_2_,local_res8));
    local_1f7 = local_f7;
    local_f6 = 1;
    local_1f6 = 1;
    local_f4 = local_1f4;
    FString::FString(local_1e8,local_e8);
    lVar17 = (longlong)local_d0;
    local_1d8 = (void *)0x0;
    local_1d0 = local_d0;
    if (local_d0 == 0) {
      local_1cc = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_1d8,local_d0,0);
      _guard_xfg_dispatch_icall_nop(local_1d8,local_d8,lVar17 << 2);
    }
    uVar6 = local_1f7;
    uVar5 = local_1f8;
    local_1c8 = local_c8;
    local_1c7 = local_c7;
    local_1c4 = local_c4;
    local_1c0 = local_c0;
    local_1bc = local_bc;
    local_res8 = (undefined4)local_1f4;
    uStackX_c = *(undefined2 *)(param_1 + 0x1c);
    uVar9 = CONCAT26(uStackX_e,CONCAT24(uStackX_c,(undefined4)local_1f4));
    local_1f6 = 1;
    local_1f4 = uVar9;
    FString::FString(&local_278,local_1e8);
    pvVar3 = local_1d8;
    lVar17 = (longlong)local_1d0;
    local_268 = (void *)0x0;
    local_260._0_4_ = local_1d0;
    if (local_1d0 == 0) {
      local_260._4_4_ = 0;
      iVar16 = local_1d0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_268,local_1d0,0);
      pvVar12 = local_268;
      _guard_xfg_dispatch_icall_nop(local_268,pvVar3,lVar17 << 2);
      iVar16 = (int)local_260;
    }
    local_258 = CONCAT11(local_1c7,local_1c8);
    local_254 = local_1c4;
    local_250 = local_1c0;
    local_24c = local_1bc;
    local_260 = CONCAT44(local_260._4_4_,iVar16 + 1);
    if (local_260._4_4_ < iVar16 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_268,iVar16);
      pvVar12 = local_268;
    }
    *(undefined4 *)((longlong)pvVar12 + (longlong)iVar16 * 4) = *(undefined4 *)(param_1 + 0x18);
    local_178 = uVar5;
    local_177 = uVar6;
    local_176 = 1;
    local_174 = uVar9;
    FString::FString(local_168,&local_278);
    pvVar12 = local_268;
    lVar17 = (longlong)(int)local_260;
    local_158 = (void *)0x0;
    local_150 = (int)local_260;
    if ((int)local_260 == 0) {
      local_14c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_158,local_260 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_158,pvVar12,lVar17 << 2);
    }
    local_147 = local_258._1_1_;
    local_144 = local_254;
    local_140 = local_250;
    local_13c = local_24c;
    local_b8 = local_178;
    local_b7 = local_177;
    local_b6 = local_176;
    local_b4 = local_174;
    local_148 = 1;
    FString::FString(local_a8,local_168);
    pvVar7 = local_158;
    lVar17 = (longlong)local_150;
    local_98 = (void *)0x0;
    local_90 = local_150;
    if (local_150 == 0) {
      local_8c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_98,local_150,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar7,lVar17 << 2);
    }
    local_88 = local_148;
    local_84 = local_144;
    local_80 = local_140;
    local_7c = local_13c;
    local_87 = *(undefined1 *)(param_1 + 0x30);
    local_1b8 = local_b8;
    local_1b7 = local_b7;
    local_1b6 = local_b6;
    local_1b4 = local_b4;
    FString::FString(local_1a8,local_a8);
    pvVar8 = local_98;
    lVar17 = (longlong)local_90;
    local_198 = (void *)0x0;
    local_190 = local_90;
    if (local_90 == 0) {
      local_18c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_198,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_198,pvVar8,lVar17 << 2);
    }
    local_188 = local_88;
    local_187 = local_87;
    local_180 = local_80;
    local_17c = local_7c;
    local_78 = local_1b8;
    local_77 = local_1b7;
    local_76 = local_1b6;
    local_74 = local_1b4;
    local_184 = 0x200000;
    FString::FString(local_68,local_1a8);
    pvVar4 = local_198;
    lVar17 = (longlong)local_190;
    local_58 = (void *)0x0;
    local_50 = local_190;
    if (local_190 == 0) {
      local_4c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,local_190,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar4,lVar17 << 2);
    }
    local_48 = local_188;
    local_47 = local_187;
    local_44 = local_184;
    local_40 = local_180;
    local_3c = local_17c;
    uVar9 = FUN_14091b0a0(&local_78);
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    if (local_1a8[0] != 0) {
      FMemory::Free();
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    if (local_168[0] != 0) {
      FMemory::Free();
    }
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
    if (local_278 != (void *)0x0) {
      FMemory::Free();
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    if (local_218 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_228[0] != 0) {
      FMemory::Free();
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = local_res10;
    lVar17 = operator_new(0x160);
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      uVar9 = FGuid::NewGuid(&local_248);
      lVar17 = FUN_1409182e0(lVar17,*(undefined8 *)(param_1 + 0x58),uVar9,param_1 + 0x18);
    }
    puVar18 = (undefined8 *)0x0;
    *(longlong *)(param_1 + 8) = lVar17;
    ppvVar1 = (void **)(lVar17 + 0x130);
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar10 != (longlong *)0x0) {
      plVar10[1] = param_1;
      *plVar10 = (longlong)&DAT_143f3ed00;
      plVar10[2] = (longlong)FUN_14091e660;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar10[4] = lVar11;
      *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (&local_248 != ppvVar1) {
      if (plVar10 == (longlong *)0x0) {
        if ((*(int *)(lVar17 + 0x138) != 0) && (plVar2 = *ppvVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*ppvVar1 != (void *)0x0) {
            pvVar12 = (void *)FMemory::Realloc(*ppvVar1,0,0);
            *ppvVar1 = pvVar12;
          }
          *(undefined4 *)(lVar17 + 0x138) = 0;
        }
      }
      else {
        (**(code **)(*plVar10 + 0x30))(plVar10,ppvVar1);
      }
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar17 = FMemory::Realloc(plVar10,0,0);
      if (lVar17 != 0) {
        FMemory::Free(lVar17);
      }
    }
    FUN_1404b8b20(*(longlong *)(param_1 + 8) + 0x140,param_1,&LAB_14091e830);
    FUN_1404b8b20(*(longlong *)(param_1 + 8) + 0x150,param_1,&LAB_14091e840);
    puVar19 = &DAT_143f3eda8;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      puVar13 = (undefined8 *)operator_new(0x58);
      puVar14 = puVar18;
      if (puVar13 != (undefined8 *)0x0) {
        puVar13[2] = *(undefined8 *)(param_1 + 0x28);
        *puVar13 = &PTR_IsPromotedBuild_14415d7a0;
        puVar13[1] = &PTR_LAB_14415d7d0;
        *(undefined1 *)(puVar13 + 4) = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar13 + 6,0);
        FGenericPlatformString::Memcpy(puVar13[6],L"UdpMessageMulticastReceiver",0x38);
        puVar13[8] = 1000000;
        puVar13[9] = 0;
        *(undefined4 *)(puVar13 + 10) = 0;
        uVar9 = FName::FName(&local_res8,L"WINDOWS",1);
        uVar9 = FUN_1419c6b80(uVar9);
        puVar13[3] = uVar9;
        puVar14 = puVar13;
      }
      *(undefined8 **)(param_1 + 0x20) = puVar14;
      FUN_1404b8b20(puVar14 + 9,param_1,FUN_14091e850);
      lVar17 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar17 + 0x38) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = *(undefined2 **)(lVar17 + 0x30);
      }
      uVar9 = FUN_1415d42a0(lVar17,puVar15,0x20000,1,0xffffffffffffffff);
      *(undefined8 *)(lVar17 + 0x28) = uVar9;
    }
    puVar14 = (undefined8 *)operator_new(0x58);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[2] = *(undefined8 *)(param_1 + 0x58);
      *puVar14 = &PTR_IsPromotedBuild_14415d7a0;
      puVar14[1] = &PTR_LAB_14415d7d0;
      *(undefined1 *)(puVar14 + 4) = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar14 + 6,0);
      FGenericPlatformString::Memcpy(puVar14[6],L"UdpMessageUnicastReceiver",0x34);
      puVar14[8] = 1000000;
      puVar14[9] = 0;
      *(undefined4 *)(puVar14 + 10) = 0;
      uVar9 = FName::FName(&local_res8,L"WINDOWS",1);
      uVar9 = FUN_1419c6b80(uVar9);
      puVar14[3] = uVar9;
      puVar18 = puVar14;
    }
    *(undefined8 **)(param_1 + 0x50) = puVar18;
    FUN_1404b8b20(puVar18 + 9,param_1,FUN_14091e850);
    lVar17 = *(longlong *)(param_1 + 0x50);
    if (*(int *)(lVar17 + 0x38) != 0) {
      puVar19 = *(undefined2 **)(lVar17 + 0x30);
    }
    uVar9 = FUN_1415d42a0(lVar17,puVar19,0x20000,1,0xffffffffffffffff);
    *(undefined8 *)(lVar17 + 0x28) = uVar9;
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 140922d70 Stop body=32 status=ok
// SIG undefined Stop(void)

void FUdpMessageTunnelConnection::Stop(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 140922db0 StopServer body=43 status=ok
// SIG undefined StopServer(void)

void FUdpMessageTunnel::StopServer(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 140922de0 StopTransport body=146 status=ok
// SIG undefined StopTransport(void)

void FUdpMessageTransport::StopTransport(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 140922e80 FUN_140922e80 body=1373 status=ok
// SIG undefined FUN_140922e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140922e80(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_128 [32];
  longlong *local_108;
  uint local_f8;
  char local_f0 [4];
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined1 local_cc [4];
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  int local_a8 [2];
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  ulonglong local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  piVar9 = (int *)0x0;
  local_f8 = 0;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  piVar8 = piVar9;
LAB_140922ed0:
  while( true ) {
    iVar6 = (int)piVar8;
    if (((iVar6 < 0) || (*(int *)(param_1 + 0x20) <= iVar6)) ||
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x68))
                          (*(longlong **)(param_1 + 0x140),1,0), cVar5 == '\0')) goto LAB_14092335f;
    lVar13 = (longlong)iVar6;
    cVar5 = TQueue<TSharedPtr<FArrayReader,1>,1>::Dequeue
                      (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 0x10) + 0x30,&local_b8
                      );
    plVar10 = local_b8;
    if (cVar5 != '\0') break;
    local_f8 = iVar6 + 1;
    piVar8 = (int *)(ulonglong)local_f8;
  }
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  pcVar2 = *(char **)local_b8[1];
  if ((char *)((undefined8 *)local_b8[1])[1] < pcVar2 + 1) {
    (**(code **)(*local_b8 + 0x50))(local_b8,local_f0,1);
  }
  else {
    local_f0[0] = *pcVar2;
    *(longlong *)local_b8[1] = *(longlong *)local_b8[1] + 1;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_80,plVar10);
  local_70 = local_80;
  local_68 = &local_70;
  FUN_141661f40(&local_70,&local_ec);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_80);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_60,plVar10);
  local_50 = local_60;
  local_48 = &local_50;
  FUN_141661f40(&local_50,&local_dc);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_60);
  puVar3 = *(undefined1 **)plVar10[1];
  if ((undefined1 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    (**(code **)(*plVar10 + 0x50))(plVar10,local_cc,1);
  }
  else {
    local_cc[0] = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 1;
  }
  if (local_f0[0] == '\n') {
    plVar1 = (longlong *)(param_1 + 0xd0);
    plVar10[0x12] = 0;
    if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
      iVar6 = FCrc::MemCrc_DEPRECATED(&local_dc,0x10);
      lVar7 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar7 = param_1 + 0x108;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar6 * 0x38 + *plVar1);
          if (((piVar8[1] == local_dc._4_4_ && piVar8[2] == (int)local_d4) &&
              piVar8[3] == local_d4._4_4_) && *piVar8 == (int)local_dc) {
            if ((iVar6 != -1) && (piVar8 != (int *)0x0)) goto LAB_1409230f8;
            break;
          }
          iVar6 = piVar8[0xc];
        } while (iVar6 != -1);
      }
    }
    local_90 = &local_dc;
    FUN_140917760(plVar1,local_a8,&local_90,0);
    piVar8 = (int *)((longlong)local_a8[0] * 0x38 + *plVar1);
LAB_1409230f8:
    piVar11 = piVar8 + 4;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar13 * 0x10);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar13 * 0x10);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      plVar10 = local_b8;
    }
    local_c8 = uVar4;
    plStack_c0 = plVar1;
    if ((int *)&local_c8 != piVar11) {
      local_c8 = *(undefined8 *)piVar11;
      plStack_c0 = *(longlong **)(piVar8 + 6);
      *(undefined8 *)piVar11 = uVar4;
      *(longlong **)(piVar8 + 6) = plVar1;
      local_40 = uVar4;
      plStack_38 = plVar1;
    }
    plVar1 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_c0 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      plVar10 = local_b8;
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar11 = (int *)((longlong)plVar1 + 0xc);
        iVar6 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        plVar10 = local_b8;
        if (iVar6 == 1) {
          (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
          plVar10 = local_b8;
        }
      }
    }
    *(undefined8 *)(piVar8 + 10) = *(undefined8 *)(param_1 + 0x50);
    *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) + (longlong)(int)plVar10[0x14];
    if (((local_e4._4_4_ != 0 || (int)local_e4 != 0) || (int)local_ec != 0) || local_ec._4_4_ != 0)
    goto code_r0x0001409231be;
    uVar12 = *(ulonglong *)(param_1 + 0xb0);
    goto LAB_140923295;
  }
LAB_14092335f:
  plVar10 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar8 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  return;
code_r0x0001409231be:
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    iVar6 = FCrc::MemCrc_DEPRECATED(&local_ec,0x10);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar13 = param_1 + 0x98;
    }
    iVar6 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x60));
        if (((piVar8[3] == local_e4._4_4_ && piVar8[2] == (int)local_e4) &&
            piVar8[1] == local_ec._4_4_) && *piVar8 == (int)local_ec) {
          if (iVar6 != -1) goto LAB_14092326f;
          break;
        }
        iVar6 = piVar8[0xc];
      } while (iVar6 != -1);
    }
  }
  piVar8 = piVar9;
LAB_14092326f:
  piVar11 = piVar8 + 4;
  if (piVar8 == (int *)0x0) {
    piVar11 = piVar9;
  }
  piVar8 = (int *)(ulonglong)local_f8;
  if (piVar11 != (int *)0x0) {
    uVar12 = *(ulonglong *)(piVar11 + 4);
LAB_140923295:
    local_a8[1] = 0;
    local_88 = uVar12;
    (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_a0,0,0);
    (**(code **)(*local_a0 + 0x10))(local_a0,uVar12 & 0xffffffff);
    (**(code **)(*local_a0 + 0x30))(local_a0,uVar12 >> 0x20 & 0xffff);
    local_108 = local_a0;
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x48))
              (*(longlong **)(param_1 + 0x140),plVar10[0x13],(int)plVar10[0x14]);
    plVar10 = local_98;
    piVar8 = (int *)(ulonglong)local_f8;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar11 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  goto LAB_140922ed0;
}



// FUNCTION 1409233e0 Tick body=135 status=ok
// SIG undefined Tick(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUdpMessageBeacon::Tick(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  local_res8 = 0;
  plVar2 = (longlong *)FDateTime::UtcNow(local_res10);
  if (*(longlong *)(param_1 + 0x38) <= *plVar2) {
    lVar3 = (longlong)((double)*(int *)(param_1 + 0x18) * (double)_DAT_146862d10);
    if (lVar3 <= DAT_146862d18) {
      lVar3 = DAT_146862d18;
    }
    *(longlong *)(param_1 + 8) = lVar3;
    cVar1 = FUN_140921b70(param_1 + -8,5,&local_res8);
    if (cVar1 != '\0') {
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 8) + *plVar2;
    }
  }
  return;
}



// FUNCTION 140923470 Tick body=64 status=ok
// SIG undefined Tick(void)

void FUdpMessageProcessor::Tick(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  lVar1 = param_1 + -8;
  puVar2 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x30) = *puVar2;
  FUN_14091ba40(lVar1);
  FUN_14091c150(lVar1);
  FUN_1409248a0(lVar1);
  FUN_140925650(lVar1);
  return;
}



// FUNCTION 1409234c0 FUN_1409234c0 body=32 status=ok
// SIG undefined FUN_1409234c0(void)

void FUN_1409234c0(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FUN_140924060(param_1 + -8,local_res8);
  return;
}



// FUNCTION 1409234e0 FUN_1409234e0 body=32 status=ok
// SIG undefined FUN_1409234e0(void)

void FUN_1409234e0(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FUN_1409243a0(param_1 + -8,local_res8);
  return;
}



// FUNCTION 140923500 FUN_140923500 body=699 status=ok
// SIG undefined FUN_140923500(void)

undefined8 FUN_140923500(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined1 local_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar8 = (**(code **)(*(longlong *)*param_2 + 0x30))(), *(int *)(lVar8 + 8) < 0x401)) {
    plVar9 = (longlong *)operator_new(0xd0);
    plStack_c0 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_14415dfb8;
      FUN_1409194e0(plVar9 + 2);
      plStack_c0 = plVar9;
    }
    local_c8 = plStack_c0 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
    plVar3 = plStack_c0;
    plVar9 = local_c8;
    if ((int)param_3[1] == 0) {
      lVar8 = *(longlong *)(param_1 + 8);
      local_b8 = 0;
      uStack_b0 = 0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      local_50 = 0;
      uStack_48 = 0;
      puVar10 = (undefined8 *)operator_new(0x28);
      if (puVar10 == (undefined8 *)0x0) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      else {
        *puVar10 = 0;
        puVar10[1] = plVar9;
        puVar10[2] = plVar3;
        puVar10[3] = 0;
        puVar10[4] = 0;
        LOCK();
        puVar1 = (undefined8 *)(lVar8 + 0x20);
        puVar5 = (undefined8 *)*puVar1;
        *puVar1 = puVar10;
        UNLOCK();
        LOCK();
        *puVar5 = puVar10;
        UNLOCK();
      }
    }
    else {
      lVar8 = *param_3;
      lVar11 = (longlong)(int)param_3[1] * 0x10 + lVar8;
      for (; lVar8 != lVar11; lVar8 = lVar8 + 0x10) {
        FUN_14091dc20(*(undefined8 *)(param_1 + 8),&local_c8,lVar8);
      }
    }
    lVar8 = *(longlong *)(param_1 + 8);
    plVar9 = (longlong *)FUN_14091c900(local_78,0,0xff);
    local_a8 = *(undefined8 *)(lVar8 + 0x120);
    lVar11 = *plVar9;
    local_a0 = *(longlong *)(lVar8 + 0x128);
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_88 = local_c8;
    plStack_80 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    local_98 = *param_2;
    local_90 = param_2[1];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    FUdpSerializeMessageTask::FUdpSerializeMessageTask(lVar11 + 0x10,&local_98,&local_88,&local_a8);
    lVar8 = *plVar9;
    lVar7 = plVar9[2];
    lVar11 = plVar9[1];
    lVar6 = *(longlong *)(lVar8 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    FUN_140915370(lVar8,lVar11,(int)lVar7,1);
    if (lVar6 != 0) {
      LOCK();
      piVar2 = (int *)(lVar6 + 0x48);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
    plVar9 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_c0 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1409237c0 FUN_1409237c0 body=2087 status=ok
// SIG undefined FUN_1409237c0(void)

void FUN_1409237c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar18;
  int iVar19;
  uint local_res18 [2];
  undefined4 local_res20 [2];
  longlong *local_f8;
  longlong *local_f0;
  char local_e8 [4];
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined1 local_c4 [4];
  int local_c0;
  int local_bc;
  undefined2 local_b8 [2];
  undefined4 local_b4;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined1 **local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 **local_50;
  undefined1 local_48 [16];
  longlong *plVar17;
  
  uVar10 = FName::FName(local_48,L"WINDOWS",1);
  plVar11 = (longlong *)FUN_1419c6b80(uVar10);
  (**(code **)(*plVar11 + 0x70))(plVar11,&local_a8,0,0);
  local_res18[0] = 0;
  cVar7 = (**(code **)(*param_2 + 0x30))(param_2,local_res18);
  iVar19 = -1;
  do {
    if (cVar7 == '\0') {
LAB_140923f8d:
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        lVar15 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar18 = (int *)((longlong)local_a0 + 0xc);
          iVar19 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      return;
    }
    plVar17 = (longlong *)0x0;
    plVar12 = (longlong *)operator_new(0xa8);
    plVar11 = plVar17;
    if (plVar12 != (longlong *)0x0) {
      FArchive::FArchive(plVar12);
      plVar12[0x12] = 0;
      plVar12[0x13] = 0;
      plVar12[0x14] = 0;
      *plVar12 = (longlong)&PTR__scalar_deleting_destructor__143f747a8;
      FArchive::SetIsLoading(plVar12,1);
      FArchive::SetIsPersistent(plVar12,1);
      plVar11 = plVar12;
    }
    plVar12 = (longlong *)operator_new(0x18);
    local_f0 = plVar17;
    if (plVar12 != (longlong *)0x0) {
      *(int *)(plVar12 + 1) = 1;
      *(int *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_DestroyObject_144159b08;
      plVar12[2] = (longlong)plVar11;
      local_f0 = plVar12;
    }
    local_f8 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar11,plVar11);
    uVar16 = 0xffe3;
    if (local_res18[0] < 0xffe4) {
      uVar16 = local_res18[0];
    }
    uVar2 = *(uint *)(local_f8 + 0x14);
    if ((int)uVar2 < (int)uVar16) {
      *(uint *)(local_f8 + 0x14) = uVar16;
      if (*(int *)((longlong)local_f8 + 0xa4) < (int)uVar16) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_f8 + 0x13,uVar2);
      }
    }
    else if (((int)uVar16 < (int)uVar2) && (uVar16 != uVar2)) {
      *(uint *)(local_f8 + 0x14) = uVar16;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
    }
    local_res20[0] = 0;
    cVar7 = (**(code **)(*param_2 + 0x58))
                      (param_2,local_f8[0x13],(int)local_f8[0x14],local_res20,local_a8,0);
    plVar11 = local_f8;
    if (cVar7 != '\0') {
      local_e4 = 0;
      local_dc = 0;
      local_d4 = 0;
      local_cc = 0;
      pcVar3 = *(char **)local_f8[1];
      if ((char *)((undefined8 *)local_f8[1])[1] < pcVar3 + 1) {
        (**(code **)(*local_f8 + 0x50))(local_f8,local_e8,1);
      }
      else {
        local_e8[0] = *pcVar3;
        *(longlong *)local_f8[1] = *(longlong *)local_f8[1] + 1;
      }
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_88,plVar11);
      local_78 = local_88;
      local_70 = &local_78;
      FUN_141661f40(&local_78,&local_e4);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_88);
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_68,plVar11);
      local_58 = local_68;
      local_50 = &local_58;
      FUN_141661f40(&local_58,&local_d4);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_68);
      puVar4 = *(undefined1 **)plVar11[1];
      if ((undefined1 *)((undefined8 *)plVar11[1])[1] < puVar4 + 1) {
        (**(code **)(*plVar11 + 0x50))(plVar11,local_c4,1);
      }
      else {
        local_c4[0] = *puVar4;
        *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 1;
      }
      if (local_e8[0] == '\n') {
        iVar9 = iVar19;
        if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
          iVar8 = FCrc::MemCrc_DEPRECATED(&local_d4,0x10);
          lVar15 = *(longlong *)(param_1 + 0x110);
          if (*(longlong *)(param_1 + 0x110) == 0) {
            lVar15 = param_1 + 0x108;
          }
          iVar8 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)iVar8) * 4
                          );
          if (iVar8 != -1) {
            do {
              piVar18 = (int *)((longlong)iVar8 * 0x38 + *(longlong *)(param_1 + 0xd0));
              iVar9 = iVar8;
              if (((piVar18[1] == local_d4._4_4_ && piVar18[2] == (int)local_cc) &&
                  piVar18[3] == local_cc._4_4_) && *piVar18 == (int)local_d4) break;
              iVar8 = piVar18[0xc];
              iVar9 = iVar19;
            } while (iVar8 != -1);
          }
        }
        local_c0 = iVar9;
        if (iVar9 == -1) {
          local_f8[0x12] = 0;
          if (((local_dc._4_4_ == 0 && (int)local_dc == 0) && (int)local_e4 == 0) &&
              local_e4._4_4_ == 0) {
            plVar11 = plVar17;
            if (0 < *(int *)(param_1 + 0x20)) {
              do {
                plVar6 = local_f0;
                plVar12 = local_f8;
                if (local_f0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
                  UNLOCK();
                }
                lVar15 = *(longlong *)((longlong)plVar11 + *(longlong *)(param_1 + 0x18));
                cVar7 = (**(code **)(*(longlong *)(lVar15 + 8) + 0x28))(lVar15 + 8);
                if ((cVar7 != '\0') &&
                   (puVar14 = (undefined8 *)operator_new(0x18), puVar14 != (undefined8 *)0x0)) {
                  *puVar14 = 0;
                  puVar14[1] = plVar12;
                  puVar14[2] = plVar6;
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                    UNLOCK();
                  }
                  puVar5 = *(undefined8 **)(lVar15 + 0x50);
                  *(undefined8 **)(lVar15 + 0x50) = puVar14;
                  *puVar5 = puVar14;
                }
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = plVar6 + 1;
                  lVar15 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*plVar6)(plVar6);
                    LOCK();
                    piVar18 = (int *)((longlong)plVar6 + 0xc);
                    iVar9 = *piVar18;
                    *piVar18 = *piVar18 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                    }
                  }
                }
                uVar16 = (int)plVar17 + 1;
                plVar17 = (longlong *)(ulonglong)uVar16;
                plVar11 = plVar11 + 2;
              } while ((int)uVar16 < *(int *)(param_1 + 0x20));
            }
          }
          else {
            if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
              iVar9 = FCrc::MemCrc_DEPRECATED(&local_e4,0x10);
              lVar15 = *(longlong *)(param_1 + 0x110);
              if (*(longlong *)(param_1 + 0x110) == 0) {
                lVar15 = param_1 + 0x108;
              }
              iVar9 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)iVar9)
                                        * 4);
              if (iVar9 != -1) {
                do {
                  plVar11 = (longlong *)((longlong)iVar9 * 0x38 + *(longlong *)(param_1 + 0xd0));
                  if ((((int)plVar11[1] == (int)local_dc &&
                       *(int *)((longlong)plVar11 + 4) == local_e4._4_4_) &&
                      *(int *)((longlong)plVar11 + 0xc) == local_dc._4_4_) &&
                      (int)local_e4 == (int)*plVar11) {
                    if (iVar9 != -1) goto LAB_140923bfe;
                    break;
                  }
                  iVar9 = (int)plVar11[6];
                } while (iVar9 != -1);
              }
            }
            plVar11 = plVar17;
LAB_140923bfe:
            plVar6 = local_f0;
            plVar12 = local_f8;
            plVar13 = plVar11 + 2;
            if (plVar11 == (longlong *)0x0) {
              plVar13 = plVar17;
            }
            if ((plVar13 != (longlong *)0x0) && (lVar15 = *plVar13, lVar15 != 0)) {
              if (local_f0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
                UNLOCK();
                lVar15 = *plVar13;
              }
              cVar7 = (**(code **)(*(longlong *)(lVar15 + 8) + 0x28))(lVar15 + 8);
              if ((cVar7 != '\0') &&
                 (puVar14 = (undefined8 *)operator_new(0x18), puVar14 != (undefined8 *)0x0)) {
                *puVar14 = 0;
                puVar14[1] = plVar12;
                puVar14[2] = plVar6;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                }
                puVar5 = *(undefined8 **)(lVar15 + 0x50);
                *(undefined8 **)(lVar15 + 0x50) = puVar14;
                *puVar5 = puVar14;
              }
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar6 + 1;
                lVar15 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar18 = (int *)((longlong)plVar6 + 0xc);
                  iVar9 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
          }
          if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
            iVar9 = FCrc::MemCrc_DEPRECATED(&local_d4,0x10);
            lVar15 = *(longlong *)(param_1 + 0xa0);
            if (*(longlong *)(param_1 + 0xa0) == 0) {
              lVar15 = param_1 + 0x98;
            }
            iVar9 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)iVar9) *
                                      4);
            if (iVar9 != -1) {
              do {
                piVar18 = (int *)((longlong)iVar9 * 0x38 + *(longlong *)(param_1 + 0x60));
                if (((piVar18[1] == local_d4._4_4_ && piVar18[2] == (int)local_cc) &&
                    piVar18[3] == local_cc._4_4_) && (int)local_d4 == *piVar18) {
                  if ((iVar9 != -1) && (piVar18 != (int *)0x0)) goto LAB_140923e57;
                  break;
                }
                iVar9 = piVar18[0xc];
              } while (iVar9 != -1);
            }
          }
          local_90 = &local_d4;
          FUN_140917760(param_1 + 0x60,&local_bc,&local_90,0);
          piVar18 = (int *)((longlong)local_bc * 0x38 + *(longlong *)(param_1 + 0x60));
LAB_140923e57:
          plVar12 = local_a0;
          plVar11 = local_a8;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_a8 + 0x28))(local_a8,&local_b4);
          (**(code **)(*plVar11 + 0x40))(plVar11,local_b8);
          uStack_b0 = local_b8[0];
          *(ulonglong *)(piVar18 + 8) = CONCAT26(uStack_ae,CONCAT24(local_b8[0],local_b4));
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar12 + 1;
            lVar15 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          *(undefined8 *)(piVar18 + 10) = *(undefined8 *)(param_1 + 0x50);
          *(longlong *)(param_1 + 0x138) =
               *(longlong *)(param_1 + 0x138) + (longlong)(int)local_f8[0x14];
          goto LAB_140923ef2;
        }
      }
      plVar11 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_f0 + 1;
        lVar15 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar18 = (int *)((longlong)plVar11 + 0xc);
          iVar19 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      goto LAB_140923f8d;
    }
LAB_140923ef2:
    plVar11 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_f0 + 1;
      lVar15 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar18 = (int *)((longlong)plVar11 + 0xc);
        iVar9 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    cVar7 = (**(code **)(*param_2 + 0x30))(param_2,local_res18);
  } while( true );
}



// FUNCTION 140923ff0 Update body=104 status=ok
// SIG undefined Update(void)

void FUdpMessageTunnel::Update(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x50) = *puVar1;
  FUN_140924640(param_1);
  FUN_1409237c0(param_1,*(undefined8 *)(param_1 + 0xb8));
  FUN_1409237c0(param_1,*(undefined8 *)(param_1 + 0x140));
  FUN_140922e80(param_1);
  RemoveExpiredNodes(param_1,param_1 + 0x60);
  RemoveExpiredNodes(param_1,param_1 + 0xd0);
  return;
}



// FUNCTION 140924060 FUN_140924060 body=822 status=ok
// SIG undefined FUN_140924060(void)

void FUN_140924060(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int local_res8 [2];
  uint local_res18 [2];
  undefined2 local_res20 [4];
  undefined1 local_60 [4];
  undefined2 local_5c;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                    (*(longlong **)(param_1 + 0x10),0,*param_2);
  if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))
              (*(longlong **)(param_1 + 0x18),&local_48,0,0);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),local_res18);
    if (cVar4 != '\0') {
      plVar11 = (longlong *)0x0;
      do {
        plVar6 = (longlong *)operator_new(0xa8);
        plVar8 = plVar11;
        if (plVar6 != (longlong *)0x0) {
          FArchive::FArchive(plVar6);
          plVar6[0x12] = 0;
          plVar6[0x13] = 0;
          plVar6[0x14] = 0;
          *plVar6 = (longlong)&PTR__scalar_deleting_destructor__143f747a8;
          FArchive::SetIsLoading(plVar6,1);
          FArchive::SetIsPersistent(plVar6,1);
          plVar8 = plVar6;
        }
        plVar6 = (longlong *)operator_new(0x18);
        local_50 = plVar11;
        if (plVar6 != (longlong *)0x0) {
          *(undefined4 *)(plVar6 + 1) = 1;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)&PTR_DestroyObject_144159b08;
          plVar6[2] = (longlong)plVar8;
          local_50 = plVar6;
        }
        local_58 = plVar8;
        SharedPointerInternals::EnableSharedFromThis(&local_58,plVar8,plVar8);
        uVar10 = 0xffe3;
        if (local_res18[0] < 0xffe4) {
          uVar10 = local_res18[0];
        }
        uVar2 = *(uint *)(local_58 + 0x14);
        if ((int)uVar2 < (int)uVar10) {
          *(uint *)(local_58 + 0x14) = uVar10;
          if (*(int *)((longlong)local_58 + 0xa4) < (int)uVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_58 + 0x13,uVar2);
          }
        }
        else if (((int)uVar10 < (int)uVar2) && (uVar10 != uVar2)) {
          *(uint *)(local_58 + 0x14) = uVar10;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
        }
        local_res8[0] = 0;
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))
                          (*(longlong **)(param_1 + 0x10),local_58[0x13],(int)local_58[0x14],
                           local_res8,local_48,0);
        plVar8 = local_58;
        if (cVar4 != '\0') {
          iVar9 = (int)local_58[0x14] - local_res8[0];
          if (iVar9 != 0) {
            iVar5 = (int)local_58[0x14];
            iVar7 = (iVar5 - iVar9) - local_res8[0];
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(local_58[0x13] + (longlong)local_res8[0]),
                         (void *)((longlong)(iVar9 + local_res8[0]) + local_58[0x13]),
                         (longlong)iVar7);
              iVar5 = (int)plVar8[0x14];
            }
            *(int *)(plVar8 + 0x14) = iVar5 - iVar9;
          }
          plVar6 = local_40;
          plVar8 = local_48;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_48 + 0x28))(local_48,local_60);
          (**(code **)(*plVar8 + 0x40))(plVar8,local_res20);
          local_5c = local_res20[0];
          if (((*(int *)(param_1 + 0x50) != 0) &&
              (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))(), cVar4 != '\0')) {
            plVar8 = plVar11;
            if (*(int *)(param_1 + 0x50) != 0) {
              plVar8 = *(longlong **)(param_1 + 0x48);
            }
            (**(code **)(*plVar8 + 0x40))(plVar8,&local_58,local_60);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar6 + 1;
            lVar3 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
        }
        plVar8 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),local_res18);
      } while (cVar4 != '\0');
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409243a0 FUN_1409243a0 body=657 status=ok
// SIG undefined FUN_1409243a0(void)

undefined8 FUN_1409243a0(longlong param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char cVar9;
  uint local_res8 [2];
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *plStack_38;
  undefined8 local_30;
  
  lVar5 = **(longlong **)(param_1 + 0x18);
  while( true ) {
    if ((lVar5 == 0) ||
       (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
                          (*(longlong **)(param_1 + 0x28),1,*param_2), cVar9 == '\0')) {
      return 1;
    }
    local_res8[0] = 0;
    local_58 = (undefined8 *)0x0;
    plStack_50 = (longlong *)0x0;
    lVar5 = **(longlong **)(param_1 + 0x18);
    if (lVar5 != 0) {
      ppuVar1 = (undefined8 **)(lVar5 + 8);
      if (&local_58 != ppuVar1) {
        local_58 = *ppuVar1;
        *ppuVar1 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_50,lVar5 + 0x10);
      }
      local_48 = *(ulonglong *)(lVar5 + 0x18);
      lVar6 = *(longlong *)(param_1 + 0x18);
      *(longlong *)(param_1 + 0x18) = lVar5;
      local_40 = (undefined8 *)0x0;
      plStack_38 = (longlong *)0x0;
      if (ppuVar1 != &local_40) {
        *ppuVar1 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x10,&plStack_38);
      }
      plVar7 = plStack_38;
      *(undefined8 *)(lVar5 + 0x18) = local_30;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_38 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_38 + 8))(plStack_38,1);
          }
        }
      }
      if (lVar6 != 0) {
        plVar7 = *(longlong **)(lVar6 + 0x10);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        FMemory::operator_delete(lVar6,0x20);
      }
    }
    (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_68,0,0);
    (**(code **)(*local_68 + 0x10))(local_68,local_48 & 0xffffffff);
    (**(code **)(*local_68 + 0x30))(local_68,local_48._4_2_);
    puVar8 = local_58;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))
              (*(longlong **)(param_1 + 0x28),*local_58,*(undefined4 *)(local_58 + 1),local_res8,
               local_68);
    plVar7 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = plStack_50;
    if (local_res8[0] != *(uint *)(puVar8 + 1)) break;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    lVar5 = **(longlong **)(param_1 + 0x18);
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return 0;
}



// FUNCTION 140924640 FUN_140924640 body=606 status=ok
// SIG undefined FUN_140924640(void)

void FUN_140924640(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  bVar5 = false;
  iVar8 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 << 4;
    bVar5 = false;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9);
      cVar6 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x28))(lVar3 + 8);
      if (cVar6 == '\0') {
        TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                  (param_1 + 0x18,iVar8,1,1);
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  plVar10 = (longlong *)0x0;
  if (**(longlong **)(param_1 + 200) == 0) {
    if (!bVar5) {
      return;
    }
  }
  else {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    while (plVar4 = plStack_30, lVar9 = **(longlong **)(param_1 + 200), lVar9 != 0) {
      puVar7 = (undefined8 *)(lVar9 + 8);
      if (&local_38 != puVar7) {
        local_38 = *puVar7;
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_30,lVar9 + 0x10);
      }
      lVar3 = *(longlong *)(param_1 + 200);
      *(longlong *)(param_1 + 200) = lVar9;
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      if (puVar7 != &local_28) {
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x10,&plStack_20);
        plVar4 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_20)(plStack_20);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_20 + 8))(plStack_20,1);
            }
          }
        }
      }
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        FMemory::operator_delete(lVar3,0x18);
      }
      iVar8 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar8 + 1;
      if (*(int *)(param_1 + 0x24) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar8);
      }
      puVar7 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x18));
      *puVar7 = local_38;
      puVar7[1] = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
    }
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0x150) != 0) && (*(longlong **)(param_1 + 0x148) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x150) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x148);
    }
    (**(code **)(*plVar10 + 0x40))(plVar10);
  }
  return;
}



// FUNCTION 1409248a0 FUN_1409248a0 body=892 status=ok
// SIG undefined FUN_1409248a0(void)

void FUN_1409248a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong local_res8;
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  uint local_80;
  int local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar12 = *(int *)(param_1 + 0x68);
  local_68 = (uint *)(param_1 + 0x50);
  uVar11 = 0;
  uStack_a4 = 1;
  local_88 = 0;
  local_7c = 0;
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (iVar12 != 0) {
    puVar16 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar3 = *puVar16;
    uVar9 = uVar11;
    uVar14 = uVar11;
    while (uVar3 == 0) {
      iVar8 = (int)uVar9;
      uStack_90 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_90;
      local_a8 = iVar8 + 1;
      uVar9 = (ulonglong)local_a8;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14092499c;
      uVar3 = puVar16[(longlong)iVar8 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (uStack_90 - iVar8) + 0x1f;
    if (iVar12 < (int)uStack_94) {
LAB_14092499c:
      uStack_94 = iVar12;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  uStack_60 = 0xffffffff;
  iStack_5c = uStack_94;
  local_58 = CONCAT44(uStack_8c,uStack_90);
  uVar4 = *(uint *)(param_1 + 0x68);
  uStack_70 = CONCAT44(uStack_a4,local_a8);
  uVar15 = uVar3 & 0xffffffe0;
  uStack_94 = uVar3;
  if (uVar3 != uVar4) {
    lVar17 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar17 = param_1 + 0x50;
    }
    uVar10 = *(uint *)(lVar17 + (longlong)((int)uVar3 >> 5) * 4) & -1 << ((byte)uVar3 & 0x1f);
    iVar12 = (int)uVar3 >> 5;
    while (uVar10 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_140924a71;
      uVar10 = *(uint *)(lVar17 + 4 + (longlong)iVar12 * 4);
      iVar12 = iVar12 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar12 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_94 = (uVar15 - iVar12) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_140924a71:
      uStack_94 = uVar4;
    }
  }
  local_res8 = (ulonglong)uStack_94;
  uVar9 = uVar11;
  local_78 = plVar1;
  local_50 = plVar1;
  uStack_48 = uStack_70;
  puStack_40 = local_68;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  iStack_34 = iStack_5c;
  while( true ) {
    iVar12 = (int)uVar11;
    if (((iStack_5c == (int)local_res8) && (local_68 == (uint *)(param_1 + 0x50))) &&
       (local_78 == plVar1)) break;
    piVar13 = (int *)((longlong)iStack_5c * 0x100 + *local_78);
    if ((((piVar13[3] == 0 && piVar13[2] == 0) && piVar13[1] == 0) && *piVar13 == 0) ||
       (*(longlong *)(param_1 + 0x38) < *(longlong *)(piVar13 + 6) + (longlong)((double)lVar5 * 5.0)
       )) {
      FUN_140924c20(param_1);
    }
    else {
      local_80 = iVar12 + 1;
      if (local_7c < (int)local_80) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_88,uVar11);
        uVar9 = local_88;
      }
      uVar11 = (ulonglong)local_80;
      uVar7 = *(undefined8 *)(piVar13 + 2);
      puVar2 = (undefined8 *)(uVar9 + (longlong)iVar12 * 0x10);
      *puVar2 = *(undefined8 *)piVar13;
      puVar2[1] = uVar7;
    }
    uStack_60 = uStack_60 & ~uStack_70._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  for (uVar11 = uVar9; uVar11 != (longlong)iVar12 * 0x10 + uVar9; uVar11 = uVar11 + 0x10) {
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x150,uVar11);
    FUN_140920a00(plVar1,uVar11);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  iVar12 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74)) + 1;
  if (iVar12 < *(int *)(lVar5 + 0x20)) {
    FDateTime::UtcNow(&local_res8);
    iVar8 = *(int *)(lVar5 + 0x20);
    *(int *)(lVar5 + 0x20) = iVar12;
    dVar6 = (double)(iVar12 / iVar8);
    *(ulonglong *)(lVar5 + 0x40) =
         (longlong)((double)(longlong)(*(longlong *)(lVar5 + 0x40) - local_res8) * dVar6) +
         local_res8;
    *(ulonglong *)(lVar5 + 0x28) =
         local_res8 -
         (longlong)((double)(longlong)(local_res8 - *(longlong *)(lVar5 + 0x28)) * dVar6);
    (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x10))();
  }
  if (uVar9 != 0) {
    FMemory::Free(uVar9);
  }
  return;
}



// FUNCTION 140924c20 FUN_140924c20 body=2599 status=ok
// SIG undefined FUN_140924c20(void)

void FUN_140924c20(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  ushort *puVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  longlong **pplVar25;
  bool bVar26;
  int local_res18 [2];
  int local_res20;
  undefined4 local_188;
  int local_184;
  ushort local_180 [2];
  int local_17c;
  undefined8 local_178;
  undefined2 local_170 [4];
  undefined1 local_168 [16];
  longlong local_158;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  uint uStack_13c;
  longlong **pplStack_138;
  undefined4 local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  longlong *local_118;
  undefined8 uStack_110;
  longlong **local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  longlong *local_e8;
  undefined2 local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  longlong **pplStack_c0;
  undefined1 auStack_b8 [16];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined1 local_6c [4];
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 **local_50;
  
  bVar26 = false;
  local_118 = param_2 + 0x13;
  local_res18[0] = 0;
  local_8c = param_2[2];
  uStack_84 = param_2[3];
  pplStack_138 = (longlong **)(param_2 + 0x15);
  local_90[0] = 10;
  local_7c = *(undefined8 *)(param_1 + 0x94);
  uStack_74 = *(undefined8 *)(param_1 + 0x9c);
  local_6c[0] = 4;
  local_140 = 0;
  iVar14 = *(int *)(param_2 + 0x18);
  uStack_13c = 1;
  iStack_12c = 0;
  iStack_128 = 0;
  if (iVar14 != 0) {
    pplVar25 = (longlong **)param_2[0x17];
    if ((longlong **)param_2[0x17] == (longlong **)0x0) {
      pplVar25 = pplStack_138;
    }
    uVar4 = *(uint *)pplVar25;
    local_140 = 0;
    iStack_128 = 0;
    while (uVar4 == 0) {
      lVar22 = (longlong)local_140;
      iStack_128 = iStack_128 + 0x20;
      iVar21 = local_140 + 1;
      bVar11 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_140;
      local_140 = iVar21;
      if (bVar11) goto LAB_140924d29;
      uVar4 = *(uint *)((longlong)pplVar25 + (lVar22 + 1) * 4);
    }
    uStack_13c = -uVar4 & uVar4;
    local_res20 = 0x1f;
    if (uStack_13c != 0) {
      for (; uStack_13c >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
    if (uStack_13c == 0) {
      iVar21 = 0x20;
    }
    else {
      iVar21 = 0x1f - local_res20;
    }
    iStack_12c = (iStack_128 - iVar21) + 0x1f;
    if (iVar14 < iStack_12c) {
LAB_140924d29:
      iStack_12c = iVar14;
    }
  }
  local_130 = 0xffffffff;
  uStack_100 = CONCAT44(iStack_12c,0xffffffff);
  auStack_b8._8_4_ = iStack_128;
  auStack_b8._0_8_ = uStack_100;
  auStack_b8._12_4_ = uStack_124;
  uStack_110 = CONCAT44(uStack_13c,local_140);
  local_e0 = 0;
  local_168._8_4_ = SUB84(local_118,0);
  local_168._12_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  local_168._0_8_ = auStack_b8._8_8_;
  local_f8._8_4_ = local_168._8_4_;
  local_f8._0_8_ = auStack_b8._8_8_;
  local_f8._12_4_ = local_168._12_4_;
  iVar14 = iStack_12c;
  local_108 = pplStack_138;
  local_e8 = local_118;
  local_d0 = local_118;
  uStack_c8 = uStack_110;
  pplStack_c0 = pplStack_138;
  if (iStack_12c < *(int *)(param_2 + 0x18)) {
    do {
      local_158 = (longlong)iVar14 * 0x20;
      lVar22 = *local_118 + local_158;
      plVar24 = *(longlong **)(lVar22 + 8);
      if ((*plVar24 == 0) && (lVar17 = plVar24[6], *(int *)(lVar17 + 0xb8) == 0)) {
        lVar15 = operator_new();
        if (lVar15 == 0) {
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16 = (longlong *)FMemoryReader::FMemoryReader(lVar15,lVar17 + 0xa8,1);
        }
        uVar3 = *(ushort *)((longlong)plVar24 + 0x2a);
        *plVar24 = (longlong)plVar16;
        lVar17 = (**(code **)(*plVar16 + 0x98))();
        uVar18 = (longlong)(lVar17 + -1 + (ulonglong)uVar3) / (longlong)(ulonglong)uVar3;
        *(short *)(plVar24 + 5) = (short)uVar18;
        uVar4 = (uint)uVar18 & 0xffff;
        *(undefined4 *)(plVar24 + 4) = 0;
        uVar23 = uVar4 + 0x1f;
        uVar13 = uVar23 & 0xffffffe0;
        if (*(uint *)((longlong)plVar24 + 0x24) != uVar13) {
          *(uint *)((longlong)plVar24 + 0x24) = uVar13;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar24 + 1,0);
        }
        if ((uVar18 & 0xffff) != 0) {
          *(uint *)(plVar24 + 4) = uVar4;
          plVar16 = (longlong *)plVar24[3];
          if ((longlong *)plVar24[3] == (longlong *)0x0) {
            plVar16 = plVar24 + 1;
          }
          _guard_xfg_dispatch_icall_nop(plVar16,0xff,(ulonglong)(uVar23 >> 5) << 2);
        }
      }
      lVar17 = local_158;
      plVar24 = *(longlong **)(lVar22 + 8);
      if (*plVar24 == 0) {
        if (*(int *)(plVar24[6] + 0xb8) == 2) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove(local_f8._8_8_,iVar14);
          local_e0 = CONCAT11(local_e0._1_1_,1);
        }
      }
      else {
        local_168 = ZEXT816(0);
        cVar12 = FUN_14091e2c0(plVar24,local_168,local_180);
        if (cVar12 != '\0') {
          do {
            plVar24 = (longlong *)0x0;
            plVar16 = *(longlong **)(lVar22 + 8);
            local_188 = *(undefined4 *)(lVar17 + *local_118);
            iVar14 = 0;
            if ((longlong *)*plVar16 != (longlong *)0x0) {
              iVar14 = (**(code **)(*(longlong *)*plVar16 + 0x98))();
              plVar16 = *(longlong **)(lVar22 + 8);
            }
            local_17c = (uint)local_180[0] << 10;
            local_178 = 0;
            local_170[0] = (undefined2)plVar16[4];
            local_184 = iVar14;
            plVar19 = (longlong *)operator_new(0xb8);
            plVar16 = plVar24;
            if (plVar19 != (longlong *)0x0) {
              local_d8 = 0;
              FArchive::FArchive(plVar19);
              plVar19[0x12] = 0;
              *plVar19 = (longlong)&PTR_FUN_143f4a100;
              plVar19[0x14] = local_d8;
              plVar19[0x13] = (longlong)(plVar19 + 0x15);
              FArchive::SetIsSaving(plVar19,1);
              FArchive::SetIsPersistent(plVar19,0);
              plVar19[0x15] = 0;
              plVar19[0x16] = 0;
              *plVar19 = (longlong)&PTR__scalar_deleting_destructor__14415b438;
              plVar16 = plVar19;
            }
            plVar19 = (longlong *)operator_new(0x18);
            local_148 = plVar24;
            if (plVar19 != (longlong *)0x0) {
              *(undefined4 *)(plVar19 + 1) = 1;
              *plVar19 = (longlong)&PTR_FUN_143f3f2e0;
              *(undefined4 *)((longlong)plVar19 + 0xc) = 1;
              plVar19[2] = (longlong)plVar16;
              local_148 = plVar19;
            }
            local_150 = plVar16;
            SharedPointerInternals::EnableSharedFromThis(&local_150,plVar16,plVar16);
            plVar16 = local_150;
            puVar5 = *(undefined1 **)local_150[1];
            if ((undefined1 *)((undefined8 *)local_150[1])[1] < puVar5 + 1) {
              (**(code **)(*local_150 + 0x50))(local_150,local_90,1);
            }
            else {
              local_90[0] = *puVar5;
              *(longlong *)local_150[1] = *(longlong *)local_150[1] + 1;
            }
            FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_68,plVar16);
            local_58 = local_68;
            local_50 = &local_58;
            FUN_141661f40(&local_58,&local_8c);
            FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_68);
            FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_d0,plVar16);
            pplStack_c0 = &local_d0;
            auStack_b8._0_8_ = &pplStack_c0;
            FUN_141661f40(&pplStack_c0,&local_7c);
            FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_d0);
            puVar5 = *(undefined1 **)plVar16[1];
            if ((undefined1 *)((undefined8 *)plVar16[1])[1] < puVar5 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,local_6c,1);
            }
            else {
              local_6c[0] = *puVar5;
              *(longlong *)plVar16[1] = *(longlong *)plVar16[1] + 1;
            }
            plVar16 = local_150;
            puVar6 = *(undefined4 **)local_150[1];
            if ((undefined4 *)((undefined8 *)local_150[1])[1] < puVar6 + 1) {
              (**(code **)(*local_150 + 0x50))(local_150,&local_188,4);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,&local_188,4);
              }
            }
            else {
              local_188 = *puVar6;
              *(longlong *)local_150[1] = *(longlong *)local_150[1] + 4;
            }
            piVar7 = *(int **)plVar16[1];
            if ((int *)((undefined8 *)plVar16[1])[1] < piVar7 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,&local_184,4);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,&local_184,4);
              }
            }
            else {
              local_184 = *piVar7;
              *(longlong *)plVar16[1] = *(longlong *)plVar16[1] + 4;
            }
            puVar8 = *(ushort **)plVar16[1];
            if ((ushort *)((undefined8 *)plVar16[1])[1] < puVar8 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,local_180,2);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,local_180,2);
              }
            }
            else {
              local_180[0] = *puVar8;
              *(longlong *)plVar16[1] = *(longlong *)plVar16[1] + 2;
            }
            piVar7 = *(int **)plVar16[1];
            if ((int *)((undefined8 *)plVar16[1])[1] < piVar7 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,&local_17c,4);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,&local_17c,4);
              }
            }
            else {
              local_17c = *piVar7;
              *(longlong *)plVar16[1] = *(longlong *)plVar16[1] + 4;
            }
            puVar20 = *(undefined8 **)plVar16[1];
            if ((undefined8 *)((longlong *)plVar16[1])[1] < puVar20 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,&local_178,8);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,&local_178,8);
              }
            }
            else {
              local_178 = *puVar20;
              *(longlong *)plVar16[1] = *(longlong *)plVar16[1] + 8;
            }
            puVar9 = *(undefined2 **)plVar16[1];
            if ((undefined2 *)((undefined8 *)plVar16[1])[1] < puVar9 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,local_170,2);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,local_170,2);
              }
            }
            else {
              local_170[0] = *puVar9;
              *(longlong *)plVar16[1] = *(longlong *)plVar16[1] + 2;
            }
            (**(code **)(*plVar16 + 0x78))
                      (plVar16,(longlong)(int)local_168._8_4_,(longlong)(int)local_168._12_4_);
            plVar19 = (longlong *)plVar16[1];
            local_res18[0] = local_168._8_4_;
            if ((*(byte *)(plVar16 + 5) & 1) != 0) {
              local_res18[0] = 0;
            }
            if ((int *)plVar19[1] < (int *)*plVar19 + 1) {
              (**(code **)(*plVar16 + 0x50))(plVar16,local_res18,4);
              if ((*(byte *)((longlong)plVar16 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar16,local_res18,4);
              }
            }
            else {
              local_res18[0] = *(int *)*plVar19;
              *plVar19 = *plVar19 + 4;
            }
            if ((((char)*(byte *)(plVar16 + 5) < '\0') || (local_res18[0] < 0)) ||
               (((*(byte *)((longlong)plVar16 + 0x2b) & 8) != 0 && (0x1000000 < local_res18[0])))) {
              *(byte *)(plVar16 + 5) = *(byte *)(plVar16 + 5) | 0x80;
            }
            else {
              local_168._8_4_ = local_res18[0];
              iVar14 = local_res18[0];
              if (((local_res18[0] != 0) || (local_168._12_4_ != 0)) &&
                 ((*(byte *)(plVar16 + 5) & 1) != 0)) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(local_168,local_res18[0]);
                iVar14 = local_168._8_4_;
              }
              (**(code **)(*plVar16 + 0x50))(plVar16,local_168._0_8_,(longlong)iVar14);
            }
            plVar16 = local_148;
            if (local_150 != (longlong *)0x0) {
              plVar24 = local_150 + 0x15;
            }
            if (local_148 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_148 + 1) = (int)local_148[1] + 1;
              UNLOCK();
            }
            lVar17 = *(longlong *)(param_1 + 0xb8);
            if (*(char *)(lVar17 + 0x30) == '\0') {
              bVar26 = true;
              local_a0 = local_148;
              if (local_148 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_148 + 1) = (int)local_148[1] + 1;
                UNLOCK();
              }
              uVar10 = *param_2;
              local_a8 = plVar24;
              local_98 = uVar10;
              puVar20 = (undefined8 *)operator_new();
              if (puVar20 == (undefined8 *)0x0) goto LAB_140925405;
              *puVar20 = 0;
              puVar20[1] = plVar24;
              bVar11 = true;
              local_a0 = (longlong *)0x0;
              puVar20[2] = plVar16;
              puVar20[3] = uVar10;
              LOCK();
              puVar2 = *(undefined8 **)(lVar17 + 0x10);
              *(undefined8 **)(lVar17 + 0x10) = puVar20;
              UNLOCK();
              LOCK();
              *puVar2 = puVar20;
              UNLOCK();
            }
            else {
LAB_140925405:
              bVar11 = false;
            }
            plVar24 = local_a0;
            if ((bVar26) && (bVar26 = false, local_a0 != (longlong *)0x0)) {
              LOCK();
              plVar19 = local_a0 + 1;
              lVar15 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar7 = (int *)((longlong)plVar24 + 0xc);
                iVar14 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*local_a0 + 8))(local_a0,1);
                }
              }
            }
            if (bVar11) {
              (**(code **)(**(longlong **)(lVar17 + 0x50) + 0x10))();
            }
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar24 = plVar16 + 1;
              lVar17 = *plVar24;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar7 = (int *)((longlong)plVar16 + 0xc);
                iVar14 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
            plVar24 = local_148;
            if (!bVar11) {
              if (local_148 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_148 + 1;
                lVar22 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar22 == 1) {
                  (**(code **)*local_148)(local_148);
                  LOCK();
                  piVar7 = (int *)((longlong)plVar24 + 0xc);
                  iVar14 = *piVar7;
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plVar24 + 8))(plVar24,1);
                  }
                }
              }
              if (local_168._0_8_ != 0) {
                FMemory::Free();
              }
              goto LAB_1409255fb;
            }
            lVar17 = *(longlong *)(lVar22 + 8);
            if ((int)(uint)local_180[0] < *(int *)(lVar17 + 0x20)) {
              lVar15 = *(longlong *)(lVar17 + 0x18);
              if (*(longlong *)(lVar17 + 0x18) == 0) {
                lVar15 = lVar17 + 8;
              }
              puVar1 = (uint *)(lVar15 + (ulonglong)(local_180[0] >> 5) * 4);
              *puVar1 = *puVar1 & ~(1 << ((byte)local_180[0] & 0x1f));
              *(short *)(lVar17 + 0x28) = *(short *)(lVar17 + 0x28) + -1;
            }
            if (local_148 != (longlong *)0x0) {
              LOCK();
              plVar16 = local_148 + 1;
              lVar17 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*local_148)(local_148);
                LOCK();
                piVar7 = (int *)((longlong)plVar24 + 0xc);
                iVar14 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar24 + 8))(plVar24,1);
                }
              }
            }
            cVar12 = FUN_14091e2c0(*(undefined8 *)(lVar22 + 8),local_168,local_180);
            lVar17 = local_158;
          } while (cVar12 != '\0');
          iVar14 = uStack_100._4_4_;
        }
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Remove(local_f8._8_8_,iVar14);
        local_e0 = CONCAT11(local_e0._1_1_,1);
        if (local_168._0_8_ != 0) {
          FMemory::Free();
        }
      }
      uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
      iVar14 = uStack_100._4_4_;
    } while (uStack_100._4_4_ < (int)*(uint *)(local_108 + 3));
LAB_1409255fb:
    if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_e8,(int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140925650 FUN_140925650 body=532 status=ok
// SIG undefined FUN_140925650(void)

void FUN_140925650(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0xc0);
  local_88 = 0;
  uVar3 = *(uint *)(param_1 + 0xe8);
  puVar1 = (uint *)(param_1 + 0xd0);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar5) goto LAB_14092572e;
      uVar4 = puVar10[lVar6 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_14092572e:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xe8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1409257f1;
      uVar7 = puVar10[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1409257f1:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_140924c20(param_1,*plVar2 + (longlong)(int)uStack_4c * 0xf8 + 8);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 140925870 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUdpMessagingSettings::GetPrivateStaticClass(void)

{
  if (DAT_146862d38 == 0) {
    FUN_14171ccd0(L"/Script/UdpMessaging",L"UdpMessagingSettings",&DAT_146862d38,FUN_140447710,0xa0,
                  0x10000004,0,L"Engine",&LAB_1409259a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862d38;
}



// FUNCTION 140925930 FUN_140925930 body=53 status=ok
// SIG undefined FUN_140925930(void)

void FUN_140925930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14415e3e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140925970 FUN_140925970 body=47 status=ok
// SIG undefined FUN_140925970(void)

longlong FUN_140925970(void)

{
  if (DAT_146862d28 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862d28,&PTR_s__Script_UdpMessaging_14415e388);
  }
  return DAT_146862d28;
}



// FUNCTION 1409259e0 Copy body=154 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPersistenceBlob>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 140925a80 FUN_140925a80 body=6 status=ok
// SIG undefined FUN_140925a80(void)

undefined8 FUN_140925a80(void)

{
  return 0x4b701f5d;
}



// FUNCTION 140925a90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FUdpMockMessage::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862d48 == 0) {
    if (DAT_146862d28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146862d28,&PTR_s__Script_UdpMessaging_14415e388);
    }
    lVar1 = DAT_146862d28;
    uVar2 = FUN_140925a80();
    DAT_146862d48 = GetStaticStruct(FUN_140925b40,lVar1,L"UdpMockMessage",0x10,uVar2);
  }
  return;
}



// FUNCTION 140925b10 FUN_140925b10 body=47 status=ok
// SIG undefined FUN_140925b10(void)

longlong FUN_140925b10(void)

{
  if (DAT_146862d30 == 0) {
    FUN_141786440(&DAT_146862d30,&PTR_GetPrivateStaticClass_14415e0a0);
  }
  return DAT_146862d30;
}



// FUNCTION 140925b40 FUN_140925b40 body=47 status=ok
// SIG undefined FUN_140925b40(void)

longlong FUN_140925b40(void)

{
  if (DAT_146862d50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862d50,&PTR_FUN_146287d30);
  }
  return DAT_146862d50;
}



// FUNCTION 140925b70 IndexOfByKey<FGuid> body=120 status=ok
// SIG undefined IndexOfByKey<FGuid>(void)

longlong TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != piVar1 + (longlong)*(int *)(param_1 + 1) * 4) {
    piVar2 = piVar1;
    do {
      if (((piVar2[1] == param_2[1] && piVar2[2] == param_2[2]) && piVar2[3] == param_2[3]) &&
          *piVar2 == *param_2) {
        return (longlong)piVar2 - (longlong)piVar1 >> 4;
      }
      piVar2 = piVar2 + 4;
    } while (piVar2 != piVar1 + (longlong)*(int *)(param_1 + 1) * 4);
  }
  return 0xffffffff;
}



// FUNCTION 140925bf0 FActorSequenceObjectReference body=118 status=ok
// SIG undefined FActorSequenceObjectReference(void)

undefined1 *
FActorSequenceObjectReference::FActorSequenceObjectReference
          (undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 0x18,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 140925c70 UActorSequence body=176 status=ok
// SIG undefined UActorSequence(void)

undefined8 * UActorSequence::UActorSequence(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  UMovieSceneSequence::UMovieSceneSequence();
  *param_1 = &PTR_FUN_14415ed38;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x341) = 1;
  puVar2 = (undefined8 *)FName::FName(local_res8,"MovieScene",1);
  uVar1 = *puVar2;
  uVar3 = UMovieScene::GetPrivateStaticClass();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x69] = lVar4;
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
  return param_1;
}



// FUNCTION 140925d20 FUN_140925d20 body=313 status=ok
// SIG undefined FUN_140925d20(void)

undefined8 * FUN_140925d20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  FUN_142326e40();
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14415f028;
  param_1[5] = &PTR_LAB_14415f420;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)((longlong)param_1 + 0x196) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar2 = (longlong *)FUN_140926bb0();
    lVar6 = plVar2[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar6 = plVar2[0x1f];
    }
    lVar3 = FUN_14178ca30(param_1);
    if (lVar3 != lVar6) {
      return param_1;
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"Sequence",1);
  uVar1 = *puVar4;
  uVar5 = UActorSequence::GetPrivateStaticClass();
  lVar6 = FUN_141789050(param_2,param_1,uVar1,uVar5,uVar5,1,0,0);
  param_1[0x39] = lVar6;
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 9;
  return param_1;
}



// FUNCTION 140925e60 ~FActorSequenceObjectReferenceMap body=95 status=ok
// SIG undefined ~FActorSequenceObjectReferenceMap(void)

void FActorSequenceObjectReferenceMap::~FActorSequenceObjectReferenceMap(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[3];
  lVar1 = param_1[2];
  if (iVar2 != 0) {
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140925ed0 FUN_140925ed0 body=85 status=ok
// SIG undefined FUN_140925ed0(void)

longlong FUN_140925ed0(longlong param_1,ulonglong param_2)

{
  FActorSequenceObjectReferenceMap::~FActorSequenceObjectReferenceMap(param_1 + 0x350);
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 140925f30 FUN_140925f30 body=135 status=ok
// SIG undefined FUN_140925f30(void)

longlong FUN_140925f30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1b8);
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
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 140925fc0 FUN_140925fc0 body=208 status=ok
// SIG undefined FUN_140925fc0(void)

void FUN_140925fc0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  
  FUN_142330a70();
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    plVar2 = (longlong *)FName::FName(local_res10,"SequencePlayer",1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar3 = FUN_140926d40();
    uVar3 = FUN_1417985e0(uVar3,param_1,lVar1,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x1d0) = uVar3;
    FUN_141f54f80(uVar3,*(undefined8 *)(param_1 + 0x1c8),param_1 + 0x180);
    if (*(char *)(param_1 + 0x178) != '\0') {
      FUN_141f5abf0(*(undefined8 *)(param_1 + 0x1d0));
      return;
    }
  }
  return;
}



// FUNCTION 140926090 BindPossessableObject body=373 status=ok
// SIG undefined BindPossessableObject(void)

void UActorSequence::BindPossessableObject
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 uStack_5c;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  longlong local_18;
  
  if (param_3 != 0) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = FUN_140926410(local_30,param_3);
      FActorSequenceObjectReferenceMap::CreateBinding(param_1 + 0x350,param_2,uVar3);
    }
    else {
      lVar2 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      if (param_3 == param_4) {
        local_64 = 0;
        uStack_5c = 0;
        local_68[0] = 0;
      }
      else {
        local_88 = 0xffffffff;
        local_84 = 0;
        uStack_74 = 0;
        local_7c = 0;
        puVar4 = (undefined8 *)FUniqueObjectGuid::GetOrCreateIDForObject(local_40,param_3);
        local_7c = *puVar4;
        uStack_74 = puVar4[1];
        FWeakObjectPtr::operator=(&local_88,param_3);
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        local_84 = CONCAT44(DAT_1464b4c84,(undefined4)local_84);
        local_68[0] = 1;
        local_64 = local_7c;
        uStack_5c = uStack_74;
      }
      local_48 = 0;
      local_50 = 0;
      FActorSequenceObjectReferenceMap::CreateBinding(param_1 + 0x350,param_2,local_68);
      local_18 = local_50;
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140926210 FUN_140926210 body=265 status=ok
// SIG undefined FUN_140926210(void)

bool FUN_140926210(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != param_3) {
        lVar2 = AActor::GetLevel(param_2);
        lVar3 = AActor::GetLevel(param_3);
        if (lVar2 != lVar3) {
          return false;
        }
      }
      return true;
    }
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_2 + 0x118) == 0) {
        return false;
      }
      lVar2 = AActor::GetLevel();
      lVar3 = AActor::GetLevel(param_3);
      return lVar2 == lVar3;
    }
  }
  return false;
}



// FUNCTION 140926320 CreateBinding body=232 status=ok
// SIG undefined CreateBinding(void)

void FActorSequenceObjectReferenceMap::CreateBinding
               (longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  iVar6 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>();
  if (iVar6 == -1) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    iVar2 = (int)param_1[3];
    *(int *)(param_1 + 3) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + param_1[2]);
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  plVar8 = (longlong *)((longlong)iVar6 * 0x10 + param_1[2]);
  iVar6 = TArray<FActorSequenceObjectReference,FDefaultAllocator>::Find(plVar8,param_3);
  if (iVar6 == -1) {
    iVar6 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar6 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar6);
    }
    FActorSequenceObjectReference::FActorSequenceObjectReference
              (*plVar8 + (longlong)iVar6 * 0x28,param_3);
  }
  return;
}



// FUNCTION 140926410 FUN_140926410 body=471 status=ok
// SIG undefined FUN_140926410(void)

undefined1 * FUN_140926410(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_res10;
  longlong local_68 [2];
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_40 [3];
  
  uVar9 = 0;
  local_54 = 0;
  uStack_4c = 0;
  uVar10 = 0;
  if (*(longlong *)(param_2 + 0x118) == 0) {
    uVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    lVar6 = UObjectBaseUtility::GetTypedOuter(param_2,uVar5);
    if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x238) != 0)) &&
       (lVar2 = *(longlong *)(lVar6 + 200), lVar2 != 0)) {
      lVar7 = UBlueprint::GetPrivateStaticClass();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x238) + 0x38);
        plVar1 = plVar8 + *(int *)(*(longlong *)(lVar6 + 0x238) + 0x40);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          if (*(longlong *)(*plVar8 + 0x30) == param_2) {
            local_res10 = *(undefined8 *)(*plVar8 + 0xf8);
            puVar4 = (undefined8 *)FName::ToString(&local_res10,local_68);
            uVar11 = uVar10;
            if (local_40 != puVar4) {
              uVar9 = *puVar4;
              *puVar4 = 0;
              uVar10 = *(undefined4 *)(puVar4 + 1);
              uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
              puVar4[1] = 0;
            }
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            *param_1 = 2;
            *(undefined8 *)(param_1 + 4) = local_54;
            *(undefined8 *)(param_1 + 0xc) = uStack_4c;
            *(undefined8 *)(param_1 + 0x18) = uVar9;
            *(undefined4 *)(param_1 + 0x20) = uVar10;
            *(undefined4 *)(param_1 + 0x24) = uVar11;
            return param_1;
          }
        }
      }
    }
    *param_1 = 2;
    *(undefined8 *)(param_1 + 4) = local_54;
    *(undefined8 *)(param_1 + 0xc) = uStack_4c;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    puVar4 = (undefined8 *)UObjectBaseUtility::GetPathName(param_2,local_68);
    uVar11 = uVar10;
    if (local_40 != puVar4) {
      uVar9 = *puVar4;
      *puVar4 = 0;
      uVar10 = *(undefined4 *)(puVar4 + 1);
      uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
      puVar4[1] = 0;
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    *param_1 = 2;
    *(undefined8 *)(param_1 + 4) = local_54;
    *(undefined8 *)(param_1 + 0xc) = uStack_4c;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined4 *)(param_1 + 0x20) = uVar10;
    *(undefined4 *)(param_1 + 0x24) = uVar11;
  }
  return param_1;
}



// FUNCTION 1409265f0 Find body=218 status=ok
// SIG undefined Find(void)

longlong TArray<FActorSequenceObjectReference,FDefaultAllocator>::Find
                   (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + (longlong)(int)param_1[1] * 0x28;
  if (lVar2 != lVar1) {
    piVar6 = (int *)(lVar2 + 0xc);
    lVar7 = lVar2;
    do {
      if (((piVar6[-1] == *(int *)(param_2 + 8) && piVar6[-2] == *(int *)(param_2 + 4)) &&
          piVar6[1] == *(int *)(param_2 + 0x10)) && *(int *)(param_2 + 0xc) == *piVar6) {
        if (*(int *)(param_2 + 0x20) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(param_2 + 0x18);
        }
        if (piVar6[5] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(piVar6 + 3);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar3 == 0) {
          return (lVar7 - lVar2) / 0x28;
        }
      }
      lVar7 = lVar7 + 0x28;
      piVar6 = piVar6 + 10;
    } while (lVar7 != lVar1);
  }
  return 0xffffffff;
}



// FUNCTION 1409266d0 GetEventContexts body=92 status=ok
// SIG undefined GetEventContexts(void)

longlong * UActorSequencePlayer::GetEventContexts(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = (**(code **)(*param_1 + 0x70))();
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return param_2;
}



// FUNCTION 140926740 FUN_140926740 body=89 status=ok
// SIG undefined FUN_140926740(void)

undefined8 FUN_140926740(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined8 *)(param_2 + 0x118);
    }
  }
  return 0;
}



// FUNCTION 1409267a0 FUN_1409267a0 body=47 status=ok
// SIG undefined FUN_1409267a0(void)

longlong FUN_1409267a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3b0);
  if (lVar2 != 0) {
    uVar1 = FUN_1428dfc70();
    lVar2 = UObjectBaseUtility::GetTypedOuter(lVar2,uVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1409267d0 LocateBoundObjects body=197 status=ok
// SIG undefined LocateBoundObjects(void)

void UActorSequence::LocateBoundObjects
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_3 != 0) &&
     (iVar2 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>(param_1 + 0x350), iVar2 != -1)) {
    plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x360));
    lVar6 = *plVar3;
    lVar1 = lVar6 + (longlong)(int)plVar3[1] * 0x28;
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
      lVar4 = FActorSequenceObjectReference::Resolve(lVar6,param_3);
      if (lVar4 != 0) {
        iVar2 = *(int *)(param_4 + 0x10);
        *(int *)(param_4 + 0x10) = iVar2 + 1;
        if (*(int *)(param_4 + 0x14) < iVar2 + 1) {
          FUN_1407eebb0(param_4,iVar2);
        }
        lVar5 = *(longlong *)(param_4 + 8);
        if (*(longlong *)(param_4 + 8) == 0) {
          lVar5 = param_4;
        }
        *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar4;
      }
    }
  }
  return;
}



// FUNCTION 1409268c0 Resolve body=453 status=ok
// SIG undefined Resolve(void)

longlong FActorSequenceObjectReference::Resolve(char *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined8 local_24;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return param_2;
  }
  if (cVar1 == '\x01') {
    if (((*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0xc) != 0) ||
        *(int *)(param_1 + 8) != 0) || *(int *)(param_1 + 4) != 0) {
      lVar4 = UObjectBaseUtility::GetOutermost(param_2);
      local_48 = *(int *)(param_1 + 4);
      iStack_44 = *(int *)(param_1 + 8);
      iStack_40 = *(int *)(param_1 + 0xc);
      iStack_3c = *(int *)(param_1 + 0x10);
      if (*(int *)(lVar4 + 0x54) != -1) {
        piVar5 = (int *)FUniqueObjectGuid::FixupForPIE(&local_48,local_38);
        local_48 = *piVar5;
        iStack_44 = piVar5[1];
        iStack_40 = piVar5[2];
        iStack_3c = piVar5[3];
      }
      local_28 = 0xffffffff;
      local_24 = 0;
      local_1c = local_48;
      iStack_18 = iStack_44;
      iStack_14 = iStack_40;
      iStack_10 = iStack_3c;
      lVar4 = FWeakObjectPtr::Get(&local_28);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        if (DAT_1464b4c84 == local_24._4_4_) {
          return 0;
        }
        if (((iStack_10 == 0 && iStack_14 == 0) && iStack_18 == 0) && local_1c == 0) {
          return 0;
        }
        lVar4 = FUniqueObjectGuid::ResolveObject(&local_1c);
        FWeakObjectPtr::operator=(&local_28,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          local_24 = CONCAT44(DAT_1464b4c84,(undefined4)local_24);
        }
        lVar4 = FWeakObjectPtr::Get(&local_28);
        if (lVar4 == 0) {
          return 0;
        }
      }
      lVar6 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = AActor::GetLevel(lVar4);
        lVar7 = AActor::GetLevel(param_2);
        if (lVar6 == lVar7) {
          return lVar4;
        }
      }
    }
  }
  else if ((cVar1 == '\x02') && (1 < *(int *)(param_1 + 0x20))) {
    if (*(int *)(param_1 + 0x20) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(param_1 + 0x18);
    }
    uVar3 = FUN_1428e7a40();
    lVar4 = FUN_141799410(uVar3,param_2,puVar8,0);
    return lVar4;
  }
  return 0;
}



// FUNCTION 140926a90 FUN_140926a90 body=53 status=ok
// SIG undefined FUN_140926a90(void)

void FUN_140926a90(longlong param_1,undefined4 param_2)

{
  FUN_142357eb0();
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_141f67590(*(longlong *)(param_1 + 0x1d0),param_2);
  }
  return;
}



// FUNCTION 140926ad0 UnbindPossessableObjects body=212 status=ok
// SIG undefined UnbindPossessableObjects(void)

void UActorSequence::UnbindPossessableObjects(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x350);
  iVar2 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>(plVar1);
  if (iVar2 != -1) {
    iVar4 = *(int *)(param_1 + 0x358);
    iVar3 = (iVar4 - iVar2) + -1;
    if (0 < iVar3) {
      iVar3 = 1;
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 * 0x10 + *plVar1),
                 (void *)((longlong)(iVar4 - iVar3) * 0x10 + *plVar1),(longlong)iVar3 << 4);
      iVar4 = *(int *)(param_1 + 0x358);
    }
    *(int *)(param_1 + 0x358) = iVar4 + -1;
    lVar5 = (longlong)iVar2 * 0x10;
    TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
    ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>
              (*(longlong *)(param_1 + 0x360) + lVar5);
    iVar4 = *(int *)(param_1 + 0x368);
    iVar2 = (iVar4 - iVar2) + -1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x360) + lVar5),
                 (void *)((longlong)(iVar4 - iVar2) * 0x10 + *(longlong *)(param_1 + 0x360)),
                 (longlong)iVar2 << 4);
      iVar4 = *(int *)(param_1 + 0x368);
    }
    *(int *)(param_1 + 0x368) = iVar4 + -1;
  }
  return;
}



// FUNCTION 140926bb0 FUN_140926bb0 body=162 status=ok
// SIG undefined FUN_140926bb0(void)

longlong FUN_140926bb0(void)

{
  if (DAT_146862e50 == 0) {
    FUN_14171ccd0(L"/Script/ActorSequence",L"ActorSequenceComponent",&DAT_146862e50,FUN_140447710,
                  0x1d8,0x10000000,0,L"Engine",&LAB_140927000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146862e50;
}



// FUNCTION 140926c80 FUN_140926c80 body=53 status=ok
// SIG undefined FUN_140926c80(void)

void FUN_140926c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14415fec8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140926cc0 FUN_140926cc0 body=53 status=ok
// SIG undefined FUN_140926cc0(void)

void FUN_140926cc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14415ffe0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140926d00 FUN_140926d00 body=53 status=ok
// SIG undefined FUN_140926d00(void)

void FUN_140926d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1441600f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140926d40 FUN_140926d40 body=162 status=ok
// SIG undefined FUN_140926d40(void)

longlong FUN_140926d40(void)

{
  if (DAT_146862e98 == 0) {
    FUN_14171ccd0(L"/Script/ActorSequence",L"ActorSequencePlayer",&DAT_146862e98,FUN_140447710,0x7f0
                  ,0x10000000,0,L"Engine",FUN_140927020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140927450,&LAB_140447700,0);
  }
  return DAT_146862e98;
}



// FUNCTION 140926e00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UActorSequence::GetPrivateStaticClass(void)

{
  if (DAT_146862e38 == 0) {
    FUN_14171ccd0(L"/Script/ActorSequence",L"ActorSequence",&DAT_146862e38,FUN_140447710,0x370,
                  0x10000004,0,L"Engine",&LAB_140926fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140927440,&LAB_140447700,0);
  }
  return DAT_146862e38;
}



// FUNCTION 140926eb0 FUN_140926eb0 body=47 status=ok
// SIG undefined FUN_140926eb0(void)

longlong FUN_140926eb0(void)

{
  if (DAT_146862e40 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862e40,&PTR_s__Script_ActorSequence_14415fe70);
  }
  return DAT_146862e40;
}



// FUNCTION 140926ef0 CopyToEmpty<FActorSequenceObjectReference> body=225 status=ok
// SIG undefined CopyToEmpty<FActorSequenceObjectReference>(void)

void TArray<FActorSequenceObjectReference,FDefaultAllocator>::
     CopyToEmpty<FActorSequenceObjectReference>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar5 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    puVar6 = (undefined4 *)(param_2 + 4);
    do {
      *puVar5 = *(undefined1 *)(puVar6 + -1);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *(undefined4 *)(puVar5 + 4) = *puVar6;
      *(undefined4 *)(puVar5 + 8) = uVar2;
      *(undefined4 *)(puVar5 + 0xc) = uVar3;
      *(undefined4 *)(puVar5 + 0x10) = uVar4;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      iVar1 = puVar6[7];
      _Src = *(void **)(puVar6 + 5);
      *(int *)(puVar5 + 0x20) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(puVar5 + 0x24) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5 + 0x18,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + 0x18),_Src,(longlong)iVar1 * 2);
      }
      puVar5 = puVar5 + 0x28;
      puVar6 = puVar6 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140927020 FUN_140927020 body=52 status=ok
// SIG undefined FUN_140927020(void)

void FUN_140927020(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141f3a660(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144160210;
    puVar1[5] = &PTR_LAB_1441604b8;
  }
  return;
}



// FUNCTION 140927060 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFMODStudioModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141f3bd50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 1409270c0 Copy body=194 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FActorSequenceObjectReference>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x18);
    do {
      *param_2 = *(undefined1 *)(puVar6 + -3);
      puVar1 = (undefined8 *)(param_2 + 0x18);
      uVar3 = *(undefined4 *)(puVar6 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -0xc);
      uVar5 = *(undefined4 *)(puVar6 + -1);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)((longlong)puVar6 + -0x14);
      *(undefined4 *)(param_2 + 8) = uVar3;
      *(undefined4 *)(param_2 + 0xc) = uVar4;
      *(undefined4 *)(param_2 + 0x10) = uVar5;
      if (puVar1 != puVar6) {
        iVar2 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar6 = puVar6 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140927190 Copy body=317 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FActorSequenceObjectReferenceMap>::Copy
          (undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0x10);
    do {
      if (param_2 != plVar6 + -2) {
        iVar3 = (int)plVar6[-1];
        _Src = (void *)plVar6[-2];
        *(int *)(param_2 + 1) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar3 << 4);
        }
      }
      plVar5 = param_2 + 2;
      if (plVar5 != plVar6) {
        lVar2 = *plVar5;
        for (iVar3 = (int)param_2[3]; iVar3 != 0; iVar3 = iVar3 + -1) {
          TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
          ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar2);
          lVar2 = lVar2 + 0x10;
        }
        iVar3 = (int)plVar6[1];
        puVar1 = (undefined8 *)*plVar6;
        *(int *)(param_2 + 3) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar5,iVar3);
          puVar4 = (undefined8 *)*plVar5;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            TArray<FActorSequenceObjectReference,FDefaultAllocator>::
            CopyToEmpty<FActorSequenceObjectReference>
                      (puVar4,*puVar1,*(undefined4 *)(puVar1 + 1),0,0);
            puVar4 = puVar4 + 2;
            puVar1 = puVar1 + 2;
          }
        }
      }
      plVar6 = plVar6 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1409272d0 Copy body=168 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FActorSequenceObjectReferences>::Copy
          (undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = (int)param_2[1];
      if (iVar2 != 0) {
        plVar1 = (longlong *)(*param_2 + 0x18);
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 5;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::
      CopyToEmpty<FActorSequenceObjectReference>
                (param_2,*param_3,(int)param_3[1],*(undefined4 *)((longlong)param_2 + 0xc),0);
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1409273a0 EActorSequenceObjectReferenceType_StaticEnum body=85 status=ok
// SIG undefined EActorSequenceObjectReferenceType_StaticEnum(void)

void EActorSequenceObjectReferenceType_StaticEnum(void)

{
  if (DAT_146862df0 == 0) {
    if (DAT_146862e40 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146862e40,&PTR_s__Script_ActorSequence_14415fe70);
    }
    DAT_146862df0 = GetStaticEnum(FUN_140927670,DAT_146862e40,L"EActorSequenceObjectReferenceType");
  }
  return;
}



// FUNCTION 140927400 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC(void)

{
  return 0x41a7de2f;
}



// FUNCTION 140927410 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC(void)

{
  return 0x36349357;
}



// FUNCTION 140927420 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC(void)

{
  return 0xb0c97ff0;
}



// FUNCTION 140927460 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FActorSequenceObjectReference::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862e80 == 0) {
    if (DAT_146862e40 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146862e40,&PTR_s__Script_ActorSequence_14415fe70);
    }
    lVar1 = DAT_146862e40;
    uVar2 = Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC();
    DAT_146862e80 = GetStaticStruct(FUN_1409276a0,lVar1,L"ActorSequenceObjectReference",0x28,uVar2);
  }
  return;
}



// FUNCTION 1409274e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FActorSequenceObjectReferenceMap::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862e60 == 0) {
    if (DAT_146862e40 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146862e40,&PTR_s__Script_ActorSequence_14415fe70);
    }
    lVar1 = DAT_146862e40;
    uVar2 = Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC();
    DAT_146862e60 =
         GetStaticStruct(FUN_1409276d0,lVar1,L"ActorSequenceObjectReferenceMap",0x20,uVar2);
  }
  return;
}



// FUNCTION 140927560 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FActorSequenceObjectReferences::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862e70 == 0) {
    if (DAT_146862e40 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146862e40,&PTR_s__Script_ActorSequence_14415fe70);
    }
    lVar1 = DAT_146862e40;
    uVar2 = Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC();
    DAT_146862e70 = GetStaticStruct(FUN_140927700,lVar1,L"ActorSequenceObjectReferences",0x10,uVar2)
    ;
  }
  return;
}



// FUNCTION 1409275e0 FUN_1409275e0 body=47 status=ok
// SIG undefined FUN_1409275e0(void)

longlong FUN_1409275e0(void)

{
  if (DAT_146862e30 == 0) {
    FUN_141786440(&DAT_146862e30,&PTR_GetPrivateStaticClass_14415fc40);
  }
  return DAT_146862e30;
}



// FUNCTION 140927610 FUN_140927610 body=47 status=ok
// SIG undefined FUN_140927610(void)

longlong FUN_140927610(void)

{
  if (DAT_146862e48 == 0) {
    FUN_141786440(&DAT_146862e48,&PTR_FUN_14415f490);
  }
  return DAT_146862e48;
}



// FUNCTION 140927640 FUN_140927640 body=47 status=ok
// SIG undefined FUN_140927640(void)

longlong FUN_140927640(void)

{
  if (DAT_146862e90 == 0) {
    FUN_141786440(&DAT_146862e90,&PTR_FUN_14415fb00);
  }
  return DAT_146862e90;
}



// FUNCTION 140927670 FUN_140927670 body=47 status=ok
// SIG undefined FUN_140927670(void)

longlong FUN_140927670(void)

{
  if (DAT_146862e58 == 0) {
    FUN_1417866a0(&DAT_146862e58,&PTR_FUN_1462882e0);
  }
  return DAT_146862e58;
}



// FUNCTION 1409276a0 FUN_1409276a0 body=47 status=ok
// SIG undefined FUN_1409276a0(void)

longlong FUN_1409276a0(void)

{
  if (DAT_146862e88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862e88,&PTR_FUN_146288270);
  }
  return DAT_146862e88;
}



// FUNCTION 1409276d0 FUN_1409276d0 body=47 status=ok
// SIG undefined FUN_1409276d0(void)

longlong FUN_1409276d0(void)

{
  if (DAT_146862e68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862e68,&PTR_FUN_146288070);
  }
  return DAT_146862e68;
}



// FUNCTION 140927700 FUN_140927700 body=47 status=ok
// SIG undefined FUN_140927700(void)

longlong FUN_140927700(void)

{
  if (DAT_146862e78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862e78,&PTR_FUN_146288130);
  }
  return DAT_146862e78;
}



// FUNCTION 140927730 FUN_140927730 body=43 status=ok
// SIG undefined FUN_140927730(void)

undefined8 * FUN_140927730(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144160668;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140927790 FUN_140927790 body=249 status=ok
// SIG undefined FUN_140927790(void)

/* WARNING: Removing unreachable block (ram,0x00014092786a) */

undefined8 * FUN_140927790(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  uVar5 = 0;
  plVar1 = (longlong *)(param_1 + 8);
  *param_2 = 0;
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res8);
      uVar5 = *puVar4;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar2 + 1;
    if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *param_2 = uVar5;
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_2;
}



// FUNCTION 140927890 RemoveChunkInstallDelegate body=183 status=ok
// SIG undefined RemoveChunkInstallDelegate(void)

void FGenericPlatformChunkInstall::RemoveChunkInstallDelegate(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
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
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
  return;
}



// FUNCTION 140927950 FUN_140927950 body=118 status=ok
// SIG undefined FUN_140927950(void)

undefined8 *
FUN_140927950(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_4[1];
  *param_2 = 0;
  if ((int)lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_4;
  }
  if ((plVar2 != (longlong *)0x0) ||
     (((int)lVar1 != 0 && (plVar2 = (longlong *)*param_4, plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*param_4 != 0) {
      lVar1 = FMemory::Realloc(*param_4,0,0);
      *param_4 = lVar1;
    }
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409279d0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGenericPlatformChunkInstall::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_144160668;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140927a20 GetChunkLocation body=1009 status=ok
// SIG undefined GetChunkLocation(void)

undefined8 FLauncherChunkInstaller::GetChunkLocation(undefined8 param_1,undefined4 param_2)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  uint local_5c;
  longlong local_58;
  longlong local_48 [2];
  
  uVar2 = FPlatformFileManager::Get();
  lVar3 = FPlatformFileManager::FindPlatformFile(uVar2,L"PakFile");
  if (lVar3 != 0) {
    plVar9 = (longlong *)0x0;
    local_98 = (longlong *)0x0;
    local_90 = 0;
    local_68 = (longlong *)0x0;
    local_5c = 0;
    uVar2 = FCommandLine::Get();
    FPakPlatformFile::GetPakFolders(uVar2,&local_98);
    plVar4 = local_98 + (longlong)(int)local_90 * 2;
    plVar14 = plVar9;
    plVar6 = plVar9;
    for (plVar13 = local_98; plVar13 != plVar4; plVar13 = plVar13 + 2) {
      local_78 = (longlong *)0x0;
      local_70 = 0;
      plVar5 = (longlong *)FUN_1415c3d50();
      if ((int)plVar13[1] == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*plVar13;
      }
      (**(code **)(*plVar5 + 0x70))(plVar5,&local_78,puVar11,L".pak");
      uVar10 = (ulonglong)(int)local_70;
      plVar12 = local_78 + uVar10 * 2;
      plVar5 = local_78;
      if (local_78 != plVar12) {
        do {
          iVar8 = (int)plVar9;
          local_60 = iVar8 + 1;
          if ((int)plVar6 < (int)local_60) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,plVar9);
            plVar6 = (longlong *)(ulonglong)local_5c;
            plVar14 = local_68;
          }
          plVar9 = (longlong *)(ulonglong)local_60;
          FString::FString(plVar14 + (longlong)iVar8 * 2,plVar5);
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar12);
        uVar10 = local_70 & 0xffffffff;
      }
      uVar7 = (uint)uVar10;
      plVar5 = local_78;
      while (uVar7 != 0) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
        uVar7 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar7;
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    FStringFormatArg::FStringFormatArg(&local_68,param_2);
    local_88 = 0;
    local_80 = 1;
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_88,1);
    FStringFormatArg::FStringFormatArg(local_88,&local_68);
    if (local_58 != 0) {
      FMemory::Free();
    }
    FString::Format(local_48,L"pakchunk{0}",&local_88);
    uVar7 = (uint)plVar9;
    for (plVar6 = plVar14; plVar6 != plVar14 + (longlong)(int)uVar7 * 2; plVar6 = plVar6 + 2) {
      _Src = (void *)*plVar6;
      local_78 = (longlong *)0x0;
      iVar8 = (int)plVar6[1];
      uVar10 = local_70 >> 0x20;
      local_70 = CONCAT44((int)uVar10,iVar8);
      if (iVar8 == 0) {
        local_70 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar8,0);
        ::_guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar8 * 2);
      }
      FUN_141671d50(&local_68,&local_78);
      cVar1 = FString::StartsWith(&local_68,local_48);
      if (cVar1 != '\0') {
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (local_80 != 0) {
          plVar6 = (longlong *)(local_88 + 0x10);
          iVar8 = local_80;
          do {
            if (*plVar6 != 0) {
              FMemory::Free();
            }
            plVar6 = plVar6 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        plVar6 = plVar14;
        if (local_88 != 0) {
          FMemory::Free();
        }
        while (uVar7 != 0) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          uVar7 = (int)plVar9 - 1;
          plVar9 = (longlong *)(ulonglong)uVar7;
          plVar6 = plVar6 + 2;
        }
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        plVar9 = local_98;
        for (iVar8 = (int)local_90; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free(local_98);
        }
        return 3;
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      plVar6 = (longlong *)(local_88 + 0x10);
      iVar8 = local_80;
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    plVar6 = plVar14;
    if (local_88 != 0) {
      FMemory::Free();
    }
    while (uVar7 != 0) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      uVar7 = (int)plVar9 - 1;
      plVar9 = (longlong *)(ulonglong)uVar7;
      plVar6 = plVar6 + 2;
    }
    if (plVar14 != (longlong *)0x0) {
      FMemory::Free(plVar14);
    }
    plVar9 = local_98;
    for (iVar8 = (int)local_90; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  return 1;
}



// FUNCTION 140927e20 InitializeModule body=115 status=ok
// SIG undefined InitializeModule(void)

undefined8 *
FStaticallyLinkedModuleRegistrant<FLauncherChunkInstallerModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = &PTR_FUN_1441607e8;
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 2;
    *puVar2 = &PTR__scalar_deleting_destructor__144160768;
    puVar1[1] = puVar2;
    return puVar1;
  }
  puVar1[1] = 0;
  return puVar1;
}



// FUNCTION 140927ea0 ~TArray<wchar_t,FDefaultAllocator> body=78 status=ok
// SIG undefined ~TArray<wchar_t,FDefaultAllocator>(void)

void TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(longlong *param_1)

{
  DebugGet(param_1,0);
  if (*param_1 != 0) {
    FMemory::Free(*param_1);
  }
  return;
}



// FUNCTION 140927ef0 DebugGet body=43 status=ok
// SIG undefined DebugGet(void)

longlong TArray<wchar_t,FDefaultAllocator>::DebugGet(longlong *param_1,int param_2)

{
  return *param_1 + (longlong)param_2 * 2;
}



// FUNCTION 140927f20 char_traits<char>_> body=875 status=ok
// SIG undefined char_traits<char>_>(void)

longlong * std::operator<<<std::char_traits<char>_>(longlong *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  __int64 _Var4;
  basic_streambuf<char,std::char_traits<char>_> *pbVar5;
  int local_68;
  longlong local_60;
  longlong local_30;
  basic_ostream<char,std::char_traits<char>_> *local_20;
  char local_18;
  
  local_68 = 0;
  basic_ostream<char,std::char_traits<char>_>::sentry::sentry(&local_20);
  if (local_18 != '\0') {
    _Var4 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)))
    ;
    if (_Var4 < 2) {
      local_30 = 0;
    }
    else {
      _Var4 = std::ios_base::width
                        ((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      local_30 = _Var4 + -1;
    }
    local_60 = local_30;
    uVar2 = std::ios_base::flags((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)))
    ;
    if ((uVar2 & 0x1c0) != 0x40) {
      for (; (local_68 == 0 && (0 < local_60)); local_60 = local_60 + -1) {
        cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,cVar1);
        if (iVar3 == -1) {
          local_68 = 4;
        }
      }
    }
    if (local_68 == 0) {
      pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,param_2);
      if (iVar3 == -1) {
        local_68 = 4;
      }
    }
    for (; (local_68 == 0 && (0 < local_60)); local_60 = local_60 + -1) {
      cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,cVar1);
      if (iVar3 == -1) {
        local_68 = 4;
      }
    }
  }
  std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),0);
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),local_68,false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(local_20);
  basic_ostream<char,std::char_traits<char>_>::_Sentry_base::~_Sentry_base(&local_20);
  return param_1;
}



// FUNCTION 140928290 char_traits<char>_> body=943 status=ok
// SIG undefined char_traits<char>_>(void)

longlong * std::operator<<<std::char_traits<char>_>(longlong *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  __int64 _Var4;
  basic_streambuf<char,std::char_traits<char>_> *pbVar5;
  int local_68;
  longlong local_60;
  longlong local_50;
  longlong local_30;
  basic_ostream<char,std::char_traits<char>_> *local_18;
  char local_10;
  
  local_68 = 0;
  local_50 = -1;
  do {
    local_50 = local_50 + 1;
  } while (param_2[local_50] != '\0');
  _Var4 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
  if ((_Var4 < 1) ||
     (_Var4 = std::ios_base::width
                        ((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4))),
     _Var4 <= local_50)) {
    local_30 = 0;
  }
  else {
    _Var4 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)))
    ;
    local_30 = _Var4 - local_50;
  }
  local_60 = local_30;
  basic_ostream<char,std::char_traits<char>_>::sentry::sentry(&local_18);
  if (local_10 == '\0') {
    local_68 = 4;
  }
  else {
    uVar2 = std::ios_base::flags((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)))
    ;
    if ((uVar2 & 0x1c0) != 0x40) {
      for (; 0 < local_60; local_60 = local_60 + -1) {
        cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,cVar1);
        if (iVar3 == -1) {
          local_68 = 4;
          break;
        }
      }
    }
    if (local_68 == 0) {
      pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      _Var4 = std::basic_streambuf<char,std::char_traits<char>_>::sputn(pbVar5,param_2,local_50);
      if (_Var4 != local_50) {
        local_68 = 4;
      }
    }
    if (local_68 == 0) {
      for (; 0 < local_60; local_60 = local_60 + -1) {
        cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,cVar1);
        if (iVar3 == -1) {
          local_68 = 4;
          break;
        }
      }
    }
    std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),0);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),local_68,false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(local_18);
  basic_ostream<char,std::char_traits<char>_>::_Sentry_base::~_Sentry_base(&local_18);
  return param_1;
}



// FUNCTION 140928640 CreateRaw<FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>_> body=265 status=ok
// SIG undefined CreateRaw<FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>_>(void)

undefined8 *
TBaseDelegate<IModuleInterface_*>::
CreateRaw<FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>_>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FDelegateBase::Allocate(&local_20,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    IBaseDelegateInstanceCommon<IModuleInterface_*___cdecl(void)>::
    IBaseDelegateInstanceCommon<IModuleInterface_*___cdecl(void)>(puVar1);
    *puVar1 = IBaseDelegateInstance<class_IModuleInterface*___ptr64___cdecl(void)>::vftable;
    *puVar1 = &PTR_LAB_144162a40;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[4] = uVar2;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  operator=(param_1,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 140928750 Emplace<FName_const_&,TBaseDelegate<IModuleInterface_*>_const_&> body=118 status=ok
// SIG undefined Emplace<FName_const_&,TBaseDelegate<IModuleInterface_*>_const_&>(void)

longlong TMapBase<FName,TBaseDelegate<IModuleInterface_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>_>
         ::Emplace<FName_const_&,TBaseDelegate<IModuleInterface_*>_const_&>
                   (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_38 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140437c00(param_1,local_38,&local_18,0);
  return *param_1 + 8 + (longlong)local_38[0] * 0x20;
}



// FUNCTION 1409287d0 _Allocate_manually_vector_aligned<std::_Default_allocate_traits> body=132 status=ok
// SIG undefined _Allocate_manually_vector_aligned<std::_Default_allocate_traits>(void)

ulonglong std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = operator_new(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 140928860 _Copy_memmove<int_*,int_*> body=111 status=ok
// SIG undefined _Copy_memmove<int_*,int_*>(void)

longlong std::_Copy_memmove<int_*,int_*>(void *param_1,longlong param_2,void *param_3)

{
  ::_guard_xfg_dispatch_icall_nop(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}



// FUNCTION 1409288d0 _Destroy_range<std::allocator<DsDevice>_> body=133 status=ok
// SIG undefined _Destroy_range<std::allocator<DsDevice>_>(void)

/* WARNING: Removing unreachable block (ram,0x00014092893e) */

void std::_Destroy_range<std::allocator<DsDevice>_>(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [8];
  undefined1 local_20;
  longlong local_18;
  
  puVar2 = local_28;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = local_28[0];
  for (local_18 = param_1; local_18 != param_2; local_18 = local_18 + 0x38) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_18 + 0x18);
  }
  return;
}



// FUNCTION 140928960 _Emplace_back<DsDevice> body=161 status=ok
// SIG undefined _Emplace_back<DsDevice>(void)

void std::_Uninitialized_backout_al<DsDevice_*,std::allocator<DsDevice>_>::_Emplace_back<DsDevice>
               (longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar3 = param_2;
  puVar4 = puVar1;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  puVar1[0x12] = param_2[0x12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar1 + 0x18,param_2 + 0x18);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x38;
  return;
}



// FUNCTION 140928a10 _Emplace_back_with_unused_capacity<int_const_&> body=102 status=ok
// SIG undefined _Emplace_back_with_unused_capacity<int_const_&>(void)

void std::vector<int,std::allocator<int>_>::_Emplace_back_with_unused_capacity<int_const_&>
               (longlong param_1,undefined4 *param_2)

{
  **(undefined4 **)(param_1 + 8) = *param_2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
  return;
}



// FUNCTION 140928a80 _Emplace_back_with_unused_capacity<DsDevice_const_&> body=106 status=ok
// SIG undefined _Emplace_back_with_unused_capacity<DsDevice_const_&>(void)

void std::vector<DsDevice,std::allocator<DsDevice>_>::
     _Emplace_back_with_unused_capacity<DsDevice_const_&>(longlong param_1,undefined8 param_2)

{
  DsDevice::DsDevice(*(undefined8 *)(param_1 + 8),param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x38;
  return;
}



// FUNCTION 140928af0 _Emplace_reallocate<int_const_&> body=1111 status=ok
// SIG undefined _Emplace_reallocate<int_const_&>(void)

/* WARNING: Removing unreachable block (ram,0x000140928eaa) */
/* WARNING: Removing unreachable block (ram,0x000140928eb0) */
/* WARNING: Removing unreachable block (ram,0x000140928ebf) */
/* WARNING: Removing unreachable block (ram,0x000140928ec1) */
/* WARNING: Removing unreachable block (ram,0x000140928ee7) */
/* WARNING: Removing unreachable block (ram,0x000140928ef9) */
/* WARNING: Removing unreachable block (ram,0x000140928b95) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffef0 : 0x000140928bb4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                   (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined4 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  
  lVar1 = param_2 - *param_1 >> 2;
  local_f8 = param_1[1] - *param_1 >> 2;
  local_110 = 0x3fffffffffffffff;
  local_108 = 0x7fffffffffffffff;
  local_100 = &local_110;
  local_a0 = 0x3fffffffffffffff;
  local_a8 = local_100;
  local_98 = param_1;
  if (local_f8 == 0x3fffffffffffffff) {
    _Xlength();
  }
  local_b0 = local_f8 + 1;
  uVar2 = _Calculate_growth(param_1,local_b0);
  lVar3 = allocator<int>::allocate(local_98,uVar2);
  local_90 = lVar3 + 4 + lVar1 * 4;
  local_88 = (undefined4 *)(lVar3 + lVar1 * 4);
  *local_88 = *param_3;
  local_d8 = lVar3 + lVar1 * 4;
  if (param_2 == param_1[1]) {
    _Umove_if_noexcept(param_1,*param_1,param_1[1],lVar3);
  }
  else {
    local_e8 = *param_1;
    local_20 = param_2 - local_e8 >> 2;
    local_f0 = param_2;
    local_e0 = lVar3;
    local_80 = local_e8;
    local_78 = lVar3;
    local_70 = lVar3;
    local_68 = param_2;
    local_60 = local_e8;
    local_e0 = _Copy_memmove<int_*,int_*>(local_e8,param_2,lVar3);
    local_d0 = param_1[1];
    local_c0 = lVar3 + 4 + lVar1 * 4;
    local_18 = local_d0 - param_2 >> 2;
    local_d8 = lVar3;
    local_c8 = param_2;
    local_58 = local_e0;
    local_50 = local_d0;
    local_48 = local_c0;
    local_40 = local_c0;
    local_38 = local_d0;
    local_30 = param_2;
    local_c0 = _Copy_memmove<int_*,int_*>(param_2,local_d0,local_c0);
    local_28 = local_c0;
  }
  _Change_array(param_1,lVar3,local_b0,uVar2);
  return *param_1 + lVar1 * 4;
}



// FUNCTION 140928f50 _Emplace_reallocate<int_const_&> body=1111 status=ok
// SIG undefined _Emplace_reallocate<int_const_&>(void)

/* WARNING: Removing unreachable block (ram,0x00014092930a) */
/* WARNING: Removing unreachable block (ram,0x000140929310) */
/* WARNING: Removing unreachable block (ram,0x00014092931f) */
/* WARNING: Removing unreachable block (ram,0x000140929321) */
/* WARNING: Removing unreachable block (ram,0x000140929347) */
/* WARNING: Removing unreachable block (ram,0x000140929359) */
/* WARNING: Removing unreachable block (ram,0x000140928ff5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffef0 : 0x000140929014 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                   (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined4 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  
  lVar1 = param_2 - *param_1 >> 2;
  local_f8 = param_1[1] - *param_1 >> 2;
  local_110 = 0x3fffffffffffffff;
  local_108 = 0x7fffffffffffffff;
  local_100 = &local_110;
  local_a0 = 0x3fffffffffffffff;
  local_a8 = local_100;
  local_98 = param_1;
  if (local_f8 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
  }
  local_b0 = local_f8 + 1;
  uVar2 = _Calculate_growth(param_1,local_b0);
  lVar3 = allocator<unsigned_int>::allocate(local_98,uVar2);
  local_90 = lVar3 + 4 + lVar1 * 4;
  local_88 = (undefined4 *)(lVar3 + lVar1 * 4);
  *local_88 = *param_3;
  local_d8 = lVar3 + lVar1 * 4;
  if (param_2 == param_1[1]) {
    _Umove_if_noexcept(param_1,*param_1,param_1[1],lVar3);
  }
  else {
    local_e8 = *param_1;
    local_20 = param_2 - local_e8 >> 2;
    local_f0 = param_2;
    local_e0 = lVar3;
    local_80 = local_e8;
    local_78 = lVar3;
    local_70 = lVar3;
    local_68 = param_2;
    local_60 = local_e8;
    local_e0 = _Copy_memmove<int_*,int_*>(local_e8,param_2,lVar3);
    local_d0 = param_1[1];
    local_c0 = lVar3 + 4 + lVar1 * 4;
    local_18 = local_d0 - param_2 >> 2;
    local_d8 = lVar3;
    local_c8 = param_2;
    local_58 = local_e0;
    local_50 = local_d0;
    local_48 = local_c0;
    local_40 = local_c0;
    local_38 = local_d0;
    local_30 = param_2;
    local_c0 = _Copy_memmove<int_*,int_*>(param_2,local_d0,local_c0);
    local_28 = local_c0;
  }
  _Change_array(param_1,lVar3,local_b0,uVar2);
  return *param_1 + lVar1 * 4;
}



// FUNCTION 1409293b0 _Emplace_reallocate<DsDevice_const_&> body=839 status=ok
// SIG undefined _Emplace_reallocate<DsDevice_const_&>(void)

/* WARNING: Removing unreachable block (ram,0x000140929657) */
/* WARNING: Removing unreachable block (ram,0x00014092965d) */
/* WARNING: Removing unreachable block (ram,0x00014092969a) */
/* WARNING: Removing unreachable block (ram,0x0001409296ac) */
/* WARNING: Removing unreachable block (ram,0x00014092945e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff80 : 0x00014092947d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong std::vector<DsDevice,std::allocator<DsDevice>_>::_Emplace_reallocate<DsDevice_const_&>
                   (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_a0 = (param_2 - *param_1) / 0x38;
  local_68 = (param_1[1] - *param_1) / 0x38;
  local_80 = 0x492492492492492;
  local_78 = 0x7fffffffffffffff;
  local_70 = &local_80;
  local_40 = 0x492492492492492;
  local_48 = local_70;
  local_38 = param_1;
  if (local_68 == 0x492492492492492) {
    vector<int,std::allocator<int>_>::_Xlength(0x38,(param_1[1] - *param_1) % 0x38);
  }
  local_50 = local_68 + 1;
  local_88 = _Calculate_growth(param_1,local_50);
  local_b0 = allocator<DsDevice>::allocate(local_38,local_88);
  local_98 = local_b0 + 0x38 + local_a0 * 0x38;
  local_30 = local_b0 + local_a0 * 0x38;
  local_60 = local_98;
  DsDevice::DsDevice(local_30,param_3);
  local_98 = local_b0 + local_a0 * 0x38;
  if (param_2 == param_1[1]) {
    local_28 = param_1[1];
    local_20 = *param_1;
    puVar2 = local_b8;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_a8 = local_b8[0];
    _Uninitialized_move<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>
              (local_20,local_28,local_b0,param_1);
  }
  else {
    local_18 = *param_1;
    _Uninitialized_move<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>
              (local_18,param_2,local_b0,param_1);
    local_98 = local_b0;
    local_10 = param_1[1];
    _Uninitialized_move<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>
              (param_2,local_10,local_b0 + 0x38 + local_a0 * 0x38,param_1);
  }
  _Change_array(param_1,local_b0,local_50,local_88);
  return local_a0 * 0x38 + *param_1;
}



// FUNCTION 140929700 _Guess_median_unchecked<unsigned_int_*,std::less<void>_> body=339 status=ok
// SIG undefined _Guess_median_unchecked<unsigned_int_*,std::less<void>_>(void)

void std::_Guess_median_unchecked<unsigned_int_*,std::less<void>_>
               (longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = param_3 - param_1 >> 2;
  if (lVar1 < 0x29) {
    _Med3_unchecked<unsigned_int_*,std::less<void>_>(param_1,param_2,param_3,param_4);
  }
  else {
    lVar1 = lVar1 + 1 >> 3;
    _Med3_unchecked<unsigned_int_*,std::less<void>_>
              (param_1,param_1 + lVar1 * 4,param_1 + lVar1 * 8,param_4);
    _Med3_unchecked<unsigned_int_*,std::less<void>_>
              (param_2 + lVar1 * -4,param_2,param_2 + lVar1 * 4,param_4);
    _Med3_unchecked<unsigned_int_*,std::less<void>_>
              (param_3 + lVar1 * -8,param_3 + lVar1 * -4,param_3,param_4);
    _Med3_unchecked<unsigned_int_*,std::less<void>_>
              (param_1 + lVar1 * 4,param_2,param_3 + lVar1 * -4,param_4);
  }
  return;
}



// FUNCTION 140929860 _Insert_string<char,std::char_traits<char>,unsigned___int64> body=895 status=ok
// SIG undefined _Insert_string<char,std::char_traits<char>,unsigned___int64>(void)

longlong *
std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
          (longlong *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  __int64 _Var4;
  ulonglong uVar5;
  basic_streambuf<char,std::char_traits<char>_> *pbVar6;
  int local_58;
  longlong local_50;
  longlong local_30;
  basic_ostream<char,std::char_traits<char>_> *local_20;
  char local_18;
  
  local_58 = 0;
  _Var4 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
  if ((_Var4 < 1) ||
     (uVar5 = std::ios_base::width
                        ((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4))),
     uVar5 <= param_3)) {
    local_30 = 0;
  }
  else {
    _Var4 = std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)))
    ;
    local_30 = _Var4 - param_3;
  }
  local_50 = local_30;
  basic_ostream<char,std::char_traits<char>_>::sentry::sentry(&local_20);
  if (local_18 == '\0') {
    local_58 = 4;
    goto LAB_140929b86;
  }
  uVar2 = std::ios_base::flags((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
  if ((uVar2 & 0x1c0) != 0x40) {
    for (; local_50 != 0; local_50 = local_50 + -1) {
      cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      pbVar6 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar6,cVar1);
      if (iVar3 == -1) {
        local_58 = 4;
        break;
      }
    }
  }
  if (local_58 == 0) {
    pbVar6 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
    uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputn(pbVar6,param_2,param_3);
    if (uVar5 == param_3) goto LAB_140929ab1;
    local_58 = 4;
  }
  else {
LAB_140929ab1:
    for (; local_50 != 0; local_50 = local_50 + -1) {
      cVar1 = std::basic_ios<char,std::char_traits<char>_>::fill
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      pbVar6 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)));
      iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar6,cVar1);
      if (iVar3 == -1) {
        local_58 = 4;
        break;
      }
    }
  }
  std::ios_base::width((ios_base *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),0);
LAB_140929b86:
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),local_58,false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(local_20);
  basic_ostream<char,std::char_traits<char>_>::_Sentry_base::~_Sentry_base(&local_20);
  return param_1;
}



// FUNCTION 140929be0 _Insertion_sort_unchecked<unsigned_int_*,std::less<void>_> body=446 status=ok
// SIG undefined _Insertion_sort_unchecked<unsigned_int_*,std::less<void>_>(void)

uint * std::_Insertion_sort_unchecked<unsigned_int_*,std::less<void>_>(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *local_68;
  uint *local_58;
  
  local_68 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = local_68 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      local_58 = puVar2;
      if (uVar1 < *param_1) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_68 + (8 - ((longlong)puVar2 - (longlong)param_1))),
                   param_1,(longlong)puVar2 - (longlong)param_1);
        *param_1 = uVar1;
        local_68 = puVar2;
      }
      else {
        while (puVar3 = local_58 + -1, uVar1 < *puVar3) {
          *local_58 = *puVar3;
          local_58 = puVar3;
        }
        *local_58 = uVar1;
        local_68 = puVar2;
      }
    }
  }
  return param_2;
}



// FUNCTION 140929da0 _Med3_unchecked<unsigned_int_*,std::less<void>_> body=263 status=ok
// SIG undefined _Med3_unchecked<unsigned_int_*,std::less<void>_>(void)

void std::_Med3_unchecked<unsigned_int_*,std::less<void>_>
               (uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  if (*param_2 < *param_1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  if (*param_3 < *param_2) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    if (*param_2 < *param_1) {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}



// FUNCTION 140929eb0 _Partition_by_median_guess_unchecked<unsigned_int_*,std::less<void>_> body=1441 status=ok
// SIG undefined _Partition_by_median_guess_unchecked<unsigned_int_*,std::less<void>_>(void)

undefined8 *
std::_Partition_by_median_guess_unchecked<unsigned_int_*,std::less<void>_>
          (undefined8 *param_1,uint *param_2,uint *param_3,undefined1 param_4)

{
  uint uVar1;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  
  local_b8 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 3);
  _Guess_median_unchecked<unsigned_int_*,std::less<void>_>(param_2,local_b8,param_3 + -1,param_4);
  local_b0 = local_b8 + 1;
  for (; ((param_2 < local_b8 && (*local_b8 <= local_b8[-1])) && (local_b8[-1] <= *local_b8));
      local_b8 = local_b8 + -1) {
  }
  for (; ((local_b0 < param_3 && (*local_b8 <= *local_b0)) && (*local_b0 <= *local_b8));
      local_b0 = local_b0 + 1) {
  }
  local_a8 = local_b0;
  local_a0 = local_b8;
  do {
    while (param_3 <= local_a8) {
LAB_14092a13c:
      for (; param_2 < local_a0; local_a0 = local_a0 + -1) {
        if (*local_b8 <= local_a0[-1]) {
          if (*local_b8 < local_a0[-1]) break;
          local_b8 = local_b8 + -1;
          if (local_b8 != local_a0 + -1) {
            uVar1 = *local_b8;
            *local_b8 = local_a0[-1];
            local_a0[-1] = uVar1;
          }
        }
      }
      if ((local_a0 == param_2) && (local_a8 == param_3)) {
        *param_1 = local_b8;
        param_1[1] = local_b0;
        return param_1;
      }
      if (local_a0 == param_2) {
        if (local_b0 != local_a8) {
          uVar1 = *local_b8;
          *local_b8 = *local_b0;
          *local_b0 = uVar1;
        }
        local_b0 = local_b0 + 1;
        uVar1 = *local_b8;
        *local_b8 = *local_a8;
        *local_a8 = uVar1;
        local_b8 = local_b8 + 1;
        local_a8 = local_a8 + 1;
      }
      else if (local_a8 == param_3) {
        local_a0 = local_a0 + -1;
        local_b8 = local_b8 + -1;
        if (local_a0 != local_b8) {
          uVar1 = *local_a0;
          *local_a0 = *local_b8;
          *local_b8 = uVar1;
        }
        local_b0 = local_b0 + -1;
        uVar1 = *local_b8;
        *local_b8 = *local_b0;
        *local_b0 = uVar1;
      }
      else {
        local_a0 = local_a0 + -1;
        uVar1 = *local_a8;
        *local_a8 = *local_a0;
        *local_a0 = uVar1;
        local_a8 = local_a8 + 1;
      }
    }
    if (*local_a8 <= *local_b8) {
      if (*local_a8 < *local_b8) goto LAB_14092a13c;
      if (local_b0 == local_a8) {
        local_b0 = local_b0 + 1;
      }
      else {
        uVar1 = *local_b0;
        *local_b0 = *local_a8;
        *local_a8 = uVar1;
        local_b0 = local_b0 + 1;
      }
    }
    local_a8 = local_a8 + 1;
  } while( true );
}



// FUNCTION 14092a460 _Pop_heap_hole_by_index<unsigned_int_*,unsigned_int,std::less<void>_> body=451 status=ok
// SIG undefined _Pop_heap_hole_by_index<unsigned_int_*,unsigned_int,std::less<void>_>(void)

void std::_Pop_heap_hole_by_index<unsigned_int_*,unsigned_int,std::less<void>_>
               (longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  longlong local_28;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  local_38 = param_2;
  while (lVar2 = local_38, local_38 < lVar3) {
    lVar1 = local_38 * 2;
    local_38 = lVar1 + 2;
    if (*(uint *)(param_1 + local_38 * 4) < *(uint *)(param_1 + -4 + local_38 * 4)) {
      local_38 = lVar1 + 1;
    }
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + local_38 * 4);
  }
  if ((local_38 == lVar3) &&
     ((param_3 & 1 ^ (longlong)param_3 >> 0x3f) == (longlong)param_3 >> 0x3f)) {
    *(undefined4 *)(param_1 + local_38 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    local_38 = param_3 - 1;
  }
  while ((local_28 = local_38 + -1 >> 1, param_2 < local_38 &&
         (*(uint *)(param_1 + local_28 * 4) < *param_4))) {
    *(undefined4 *)(param_1 + local_38 * 4) = *(undefined4 *)(param_1 + local_28 * 4);
    local_38 = local_28;
  }
  *(uint *)(param_1 + local_38 * 4) = *param_4;
  return;
}



// FUNCTION 14092a630 _Reallocate_for<<lambda_138c3d7c38c85abb84c7fc7bfe5747b7>,char> body=447 status=ok
// SIG undefined _Reallocate_for<<lambda_138c3d7c38c85abb84c7fc7bfe5747b7>,char>(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_for<<lambda_138c3d7c38c85abb84c7fc7bfe5747b7>,char>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined1 *local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_18;
  
  uVar1 = max_size(param_1);
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    _Xlen();
  }
  local_38 = param_1[3];
  local_48 = _Calculate_growth(param_1,param_2);
  uVar1 = local_48 + 1;
  local_18 = param_1;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      local_60 = (undefined1 *)0x0;
    }
    else {
      local_60 = (undefined1 *)operator_new(uVar1);
    }
  }
  else {
    local_60 = (undefined1 *)_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(uVar1)
    ;
  }
  local_50 = local_60;
  param_1[2] = param_2;
  param_1[3] = local_48;
  local_40 = local_60;
  puVar2 = local_60;
  for (uVar1 = param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = param_4;
    puVar2 = puVar2 + 1;
  }
  local_60[param_2] = 0;
  if (local_38 < 0x10) {
    *param_1 = local_60;
  }
  else {
    local_30 = *param_1;
    local_58 = local_38 + 1;
    local_28 = local_30;
    if (0xfff < local_58) {
      _Adjust_manually_vector_aligned(&local_30,&local_58);
    }
    FMemory::operator_delete(local_30,local_58);
    *param_1 = local_50;
  }
  return param_1;
}



// FUNCTION 14092a7f0 _Sort_heap_unchecked<unsigned_int_*,std::less<void>_> body=199 status=ok
// SIG undefined _Sort_heap_unchecked<unsigned_int_*,std::less<void>_>(void)

void std::_Sort_heap_unchecked<unsigned_int_*,std::less<void>_>
               (undefined4 *param_1,longlong param_2,undefined1 param_3)

{
  longlong local_res10;
  undefined4 local_18 [2];
  undefined4 *local_10;
  
  for (local_res10 = param_2; 1 < local_res10 - (longlong)param_1 >> 2;
      local_res10 = local_res10 + -4) {
    if (1 < local_res10 - (longlong)param_1 >> 2) {
      local_10 = (undefined4 *)(local_res10 + -4);
      local_18[0] = *local_10;
      *local_10 = *param_1;
      _Pop_heap_hole_by_index<unsigned_int_*,unsigned_int,std::less<void>_>
                (param_1,0,(longlong)local_10 - (longlong)param_1 >> 2,local_18,param_3);
    }
  }
  return;
}



// FUNCTION 14092a8c0 _Sort_unchecked<unsigned_int_*,std::less<void>_> body=465 status=ok
// SIG undefined _Sort_unchecked<unsigned_int_*,std::less<void>_>(void)

void std::_Sort_unchecked<unsigned_int_*,std::less<void>_>
               (longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_38 [2];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  while ((local_28 = local_res10 - local_res8 >> 2, 0x20 < local_28 && (0 < local_res18))) {
    _Partition_by_median_guess_unchecked<unsigned_int_*,std::less<void>_>
              (&local_18,local_res8,local_res10,param_4);
    local_res18 = (local_res18 >> 1) + (local_res18 >> 2);
    if (local_18 - local_res8 >> 2 < local_res10 - local_10 >> 2) {
      _Sort_unchecked<unsigned_int_*,std::less<void>_>(local_res8,local_18,local_res18,param_4);
      local_res8 = local_10;
    }
    else {
      _Sort_unchecked<unsigned_int_*,std::less<void>_>(local_10,local_res10,local_res18,param_4);
      local_res10 = local_18;
    }
  }
  if (local_28 < 0x21) {
    if (1 < local_28) {
      _Insertion_sort_unchecked<unsigned_int_*,std::less<void>_>(local_res8,local_res10,param_4);
    }
  }
  else {
    local_20 = local_res10 - local_res8 >> 2;
    local_30 = local_res10 - local_res8 >> 3;
    while (0 < local_30) {
      local_30 = local_30 + -1;
      local_38[0] = *(undefined4 *)(local_res8 + local_30 * 4);
      _Pop_heap_hole_by_index<unsigned_int_*,unsigned_int,std::less<void>_>
                (local_res8,local_30,local_20,local_38,param_4);
    }
    _Sort_heap_unchecked<unsigned_int_*,std::less<void>_>(local_res8,local_res10,param_4);
  }
  return;
}



// FUNCTION 14092aaa0 _Uninitialized_move<int_*,int_*,std::allocator<int>_> body=244 status=ok
// SIG undefined _Uninitialized_move<int_*,int_*,std::allocator<int>_>(void)

longlong std::_Uninitialized_move<int_*,int_*,std::allocator<int>_>
                   (void *param_1,longlong param_2,void *param_3)

{
  ::_guard_xfg_dispatch_icall_nop(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}



// FUNCTION 14092aba0 _Uninitialized_move<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_> body=212 status=ok
// SIG undefined _Uninitialized_move<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>(void)

undefined8
std::_Uninitialized_move<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_18;
  
  local_18 = (param_2 - param_1) / 0x38;
  local_30 = local_48 + 2;
  puVar3 = local_48;
  local_40 = param_2;
  local_38 = param_1;
  local_28 = param_3;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_48[1] = local_48[0];
  uVar1 = _Uninitialized_move_al_unchecked<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>
                    (local_38,local_40,local_28,param_4,local_48[0],*local_30);
  return uVar1;
}



// FUNCTION 14092ac80 _Uninitialized_move_al_unchecked<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_> body=149 status=ok
// SIG undefined _Uninitialized_move_al_unchecked<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>(void)

undefined8
std::_Uninitialized_move_al_unchecked<DsDevice_*,DsDevice_*,std::allocator<DsDevice>_>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_3;
  local_10 = param_4;
  for (local_res8 = param_1; uVar1 = local_18, local_res8 != param_2; local_res8 = local_res8 + 0x38
      ) {
    _Uninitialized_backout_al<DsDevice_*,std::allocator<DsDevice>_>::_Emplace_back<DsDevice>
              (&local_20,local_res8);
  }
  local_20 = local_18;
  _Destroy_range<std::allocator<DsDevice>_>(local_18,local_18,local_10);
  return uVar1;
}



// FUNCTION 14092ad20 emplace_back<int_const_&> body=112 status=ok
// SIG undefined emplace_back<int_const_&>(void)

void std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
               (longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 8)) {
    _Emplace_reallocate<int_const_&>(param_1,*(undefined8 *)(param_1 + 8),param_2);
  }
  else {
    _Emplace_back_with_unused_capacity<int_const_&>(param_1,param_2);
  }
  return;
}



// FUNCTION 14092ad90 emplace_back<int_const_&> body=112 status=ok
// SIG undefined emplace_back<int_const_&>(void)

void std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
               (longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 8)) {
    _Emplace_reallocate<int_const_&>(param_1,*(undefined8 *)(param_1 + 8),param_2);
  }
  else {
    _Emplace_back_with_unused_capacity<int_const_&>(param_1,param_2);
  }
  return;
}



// FUNCTION 14092ae00 emplace_back<DsDevice_const_&> body=112 status=ok
// SIG undefined emplace_back<DsDevice_const_&>(void)

void std::vector<DsDevice,std::allocator<DsDevice>_>::emplace_back<DsDevice_const_&>
               (longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 8)) {
    _Emplace_reallocate<DsDevice_const_&>(param_1,*(undefined8 *)(param_1 + 8),param_2);
  }
  else {
    _Emplace_back_with_unused_capacity<DsDevice_const_&>(param_1,param_2);
  }
  return;
}



// FUNCTION 14092ae70 endl<char,std::char_traits<char>_> body=78 status=ok
// SIG undefined endl<char,std::char_traits<char>_>(void)

basic_ostream<char,std::char_traits<char>_> *
std::endl<char,std::char_traits<char>_>(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,std::char_traits<char>_>::flush(param_1);
  return param_1;
}



// FUNCTION 14092aec0 sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,std::less<void>_> body=116 status=ok
// SIG undefined sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,std::less<void>_>(void)

void std::
     sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,std::less<void>_>
               (longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_27 [7];
  longlong local_20;
  longlong local_18;
  
  puVar2 = local_27;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = param_2;
  local_18 = param_1;
  _Sort_unchecked<unsigned_int_*,std::less<void>_>(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}



// FUNCTION 14092af40 FStaticallyLinkedModuleRegistrant<FAudioCaptureModule> body=122 status=ok
// SIG undefined FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>(void)

undefined8
FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>::
FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [32];
  
  TBaseDelegate<IModuleInterface_*>::
  CreateRaw<FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>_>
            (local_20,param_1,InitializeModule);
  puVar1 = (undefined8 *)FName::FName(local_28,param_2,1);
  local_30 = *puVar1;
  lVar2 = FUN_14168dc80();
  TMapBase<FName,TBaseDelegate<IModuleInterface_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>_>
  ::Emplace<FName_const_&,TBaseDelegate<IModuleInterface_*>_const_&>
            (lVar2 + 0x58,&local_30,local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_20);
  return param_1;
}



// FUNCTION 14092afc0 IBaseDelegateInstanceCommon<IModuleInterface_*___cdecl(void)> body=41 status=ok
// SIG undefined IBaseDelegateInstanceCommon<IModuleInterface_*___cdecl(void)>(void)

undefined8 *
IBaseDelegateInstanceCommon<IModuleInterface_*___cdecl(void)>::
IBaseDelegateInstanceCommon<IModuleInterface_*___cdecl(void)>(undefined8 *param_1)

{
  *param_1 = IDelegateInstance::vftable;
  *param_1 = IBaseDelegateInstanceCommon<class_IModuleInterface*___ptr64___cdecl(void)>::vftable;
  return param_1;
}



// FUNCTION 14092aff0 TConstSetBitIterator<FDefaultBitArrayAllocator> body=186 status=ok
// SIG undefined TConstSetBitIterator<FDefaultBitArrayAllocator>(void)

int * TConstSetBitIterator<FDefaultBitArrayAllocator>::
      TConstSetBitIterator<FDefaultBitArrayAllocator>(int *param_1,undefined8 param_2,uint param_3)

{
  *param_1 = (int)param_3 >> 5;
  param_1[1] = 1 << ((byte)param_3 & 0x1f);
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = -1 << ((byte)param_3 & 0x1f);
  param_1[5] = param_3;
  param_1[6] = param_3 & 0xffffffe0;
  if (param_3 != *(uint *)(*(longlong *)(param_1 + 2) + 0x18)) {
    FindFirstSetBit(param_1);
  }
  return param_1;
}



// FUNCTION 14092b0b0 _String_val<std::_Simple_types<char>_> body=37 status=ok
// SIG undefined _String_val<std::_Simple_types<char>_>(void)

longlong std::_String_val<std::_Simple_types<char>_>::_String_val<std::_Simple_types<char>_>
                   (longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14092b0e0 _Vector_const_iterator<std::_Vector_val<std::_Simple_types<DsDevice>_>_> body=34 status=ok
// SIG undefined _Vector_const_iterator<std::_Vector_val<std::_Simple_types<DsDevice>_>_>(void)

undefined8 *
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DsDevice>_>_>::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DsDevice>_>_>
          (undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14092b110 basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> body=254 status=ok
// SIG undefined basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(void)

basic_ostream<char,std::char_traits<char>_> *
std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    *(undefined **)param_1 = &DAT_1441623c0;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x88));
  }
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (param_1,(basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 8),false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 8));
  *(undefined ***)(param_1 + 8) =
       basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar1 = basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Getstate(param_2 | 2)
  ;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return param_1;
}



// FUNCTION 14092b210 basic_string<char,std::char_traits<char>,std::allocator<char>_> body=172 status=ok
// SIG undefined basic_string<char,std::char_traits<char>,std::allocator<char>_>(void)

undefined1 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_58 [8];
  undefined1 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2 = local_58;
  local_48 = param_1;
  local_40 = param_1;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50 = local_58[0];
  puVar2 = param_2;
  puVar3 = param_1;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_2;
  _Tidy_init(param_2);
  return param_1;
}



// FUNCTION 14092b2c0 basic_string<char,std::char_traits<char>,std::allocator<char>_> body=150 status=ok
// SIG undefined basic_string<char,std::char_traits<char>,std::allocator<char>_>(void)

longlong std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
         basic_string<char,std::char_traits<char>,std::allocator<char>_>
                   (longlong param_1,longlong param_2)

{
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  _Tidy_init(param_1);
  local_38 = -1;
  do {
    local_38 = local_38 + 1;
  } while (*(char *)(param_2 + local_38) != '\0');
  assign(param_1,param_2,local_38);
  return param_1;
}



// FUNCTION 14092b360 vector<unsigned_int,std::allocator<unsigned_int>_> body=122 status=ok
// SIG undefined vector<unsigned_int,std::allocator<unsigned_int>_>(void)

undefined8 *
std::vector<unsigned_int,std::allocator<unsigned_int>_>::
vector<unsigned_int,std::allocator<unsigned_int>_>(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 *local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = local_28;
  local_20 = param_1;
  local_18 = param_1;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _Move_from(param_1,param_2,local_28[0]);
  return param_1;
}



// FUNCTION 14092b3e0 CallbackInfo body=105 status=ok
// SIG undefined CallbackInfo(void)

undefined8 * CallbackInfo::CallbackInfo(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 14092b450 ConvertInfo body=159 status=ok
// SIG undefined ConvertInfo(void)

longlong RtApi::ConvertInfo::ConvertInfo(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 14092b4f0 DeviceInfo body=205 status=ok
// SIG undefined DeviceInfo(void)

undefined1 * RtAudio::DeviceInfo::DeviceInfo(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::
  vector<unsigned_int,std::allocator<unsigned_int>_>(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  return param_1;
}



// FUNCTION 14092b5c0 DeviceInfo body=247 status=ok
// SIG undefined DeviceInfo(void)

undefined1 * RtAudio::DeviceInfo::DeviceInfo(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 14092b6c0 DsDevice body=162 status=ok
// SIG undefined DsDevice(void)

undefined1 * DsDevice::DsDevice(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
            (param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



// FUNCTION 14092b770 DsDevice body=136 status=ok
// SIG undefined DsDevice(void)

longlong DsDevice::DsDevice(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 14092b800 DsHandle body=205 status=ok
// SIG undefined DsHandle(void)

undefined4 * DsHandle::DsHandle(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14092b8d0 FAudioCapture body=342 status=ok
// SIG undefined FAudioCapture(void)

longlong * Audio::FAudioCapture::FAudioCapture(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  *param_1 = 0;
  plVar2 = (longlong *)CreateImpl(param_1,&local_28);
  if (param_1 != plVar2) {
    lVar1 = *param_1;
    *param_1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      RtAudio::~RtAudio(lVar1 + 0x10);
      FMemory::operator_delete(lVar1,0x18);
    }
  }
  local_20 = local_28;
  local_18 = local_28;
  if (local_28 != 0) {
    RtAudio::~RtAudio(local_28 + 0x10);
    FMemory::operator_delete(local_28,0x18);
  }
  return param_1;
}



// FUNCTION 14092ba30 FAudioCaptureImpl body=74 status=ok
// SIG undefined FAudioCaptureImpl(void)

undefined8 * Audio::FAudioCaptureImpl::FAudioCaptureImpl(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  RtAudio::RtAudio(param_1 + 2,0);
  return param_1;
}



// FUNCTION 14092ba80 FAudioCaptureSynth body=283 status=ok
// SIG undefined FAudioCaptureSynth(void)

undefined8 * Audio::FAudioCaptureSynth::FAudioCaptureSynth(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144162328;
  *param_1 = &PTR_OnAudioCapture_144162338;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  FAudioCapture::FAudioCapture(param_1 + 5);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  return param_1;
}



// FUNCTION 14092bba0 RtApi body=303 status=ok
// SIG undefined RtApi(void)

undefined8 *
RtApi::RtApi(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441623c8;
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
  basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 1,2,1,param_4,0);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init(param_1 + 0x1e);
  RtApiStream::RtApiStream(param_1 + 0x23);
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffce;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffb5;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 14092bcd0 RtApiDs body=161 status=ok
// SIG undefined RtApiDs(void)

undefined8 * RtApiDs::RtApiDs(undefined8 *param_1)

{
  HRESULT HVar1;
  
  RtApi::RtApi(param_1);
  *param_1 = &PTR__scalar_deleting_destructor__144162430;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar1) {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return param_1;
}



// FUNCTION 14092bd80 RtApiStream body=188 status=ok
// SIG undefined RtApiStream(void)

undefined4 * RtApi::RtApiStream::RtApiStream(undefined4 *param_1)

{
  longlong local_28;
  undefined4 *local_20;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  CallbackInfo::CallbackInfo(param_1 + 0x26);
  local_28 = 2;
  local_20 = param_1 + 0x34;
  while( true ) {
    if (local_28 == 0) break;
    ConvertInfo::ConvertInfo(local_20);
    local_20 = local_20 + 0x12;
    local_28 = local_28 + -1;
  }
  *param_1 = 0x2b67;
  param_1[1] = 0x2b67;
  return param_1;
}



// FUNCTION 14092be40 RtAudio body=514 status=ok
// SIG undefined RtAudio(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * RtAudio::RtAudio(longlong *param_1,int param_2)

{
  int iVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  if (param_2 != 0) {
    openRtApi(param_1,param_2);
    if (*param_1 != 0) {
      return param_1;
    }
    this = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>
                     (cerr_exref,"\nRtAudio: no compiled support for specified API argument!\n");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (this,std::endl<char,std::char_traits<char>_>);
  }
  local_80 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = local_80;
  getCompiledApi(&local_60);
  local_88 = 0;
  while (((ulonglong)local_88 < (ulonglong)(local_58 - local_60 >> 2) &&
         ((openRtApi(param_1,*(undefined4 *)(local_60 + (ulonglong)local_88 * 4)), *param_1 == 0 ||
          (iVar1 = (**(code **)(*(longlong *)*param_1 + 0x10))(*param_1), iVar1 == 0))))) {
    local_88 = local_88 + 1;
  }
  if (*param_1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_38,"\nRtAudio: no compiled API support found ... critical error!!\n\n");
    local_70 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_38)
    ;
    local_78 = &PTR__scalar_deleting_destructor__144162388;
    local_68 = 2;
    local_40 = local_70;
    throw_wrapper(&local_78);
    local_78 = &PTR__scalar_deleting_destructor__1441622f8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_38)
    ;
    std::vector<int,std::allocator<int>_>::_Tidy(&local_60);
  }
  else {
    std::vector<int,std::allocator<int>_>::_Tidy(&local_60);
  }
  return param_1;
}



// FUNCTION 14092c050 FUN_14092c050 body=449 status=ok
// SIG undefined FUN_14092c050(void)

/* WARNING: Removing unreachable block (ram,0x00014092c17f) */
/* WARNING: Removing unreachable block (ram,0x00014092c0f3) */
/* WARNING: Removing unreachable block (ram,0x00014092c126) */
/* WARNING: Removing unreachable block (ram,0x00014092c1b5) */

undefined8 * FUN_14092c050(undefined8 *param_1,undefined8 param_2)

{
  FUN_142a7ae70(param_1,param_2);
  *param_1 = &PTR_FUN_144162498;
  param_1[5] = &PTR_LAB_144162a10;
  Audio::FAudioCaptureSynth::FAudioCaptureSynth(param_1 + 0xcb);
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6dd) = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xde) = 1;
  UNLOCK();
  *(undefined1 *)((longlong)param_1 + 0x6de) = 0;
  if (*(int *)((longlong)param_1 + 0x6d4) < 480000) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xd9,480000);
  }
  return param_1;
}



// FUNCTION 14092c220 _Sentry_base body=153 status=ok
// SIG undefined _Sentry_base(void)

longlong *
std::basic_ostream<char,std::char_traits<char>_>::_Sentry_base::_Sentry_base
          (longlong *param_1,longlong param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  *param_1 = param_2;
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 8))(pbVar1);
  }
  return param_1;
}



// FUNCTION 14092c2c0 sentry body=235 status=ok
// SIG undefined sentry(void)

longlong std::basic_ostream<char,std::char_traits<char>_>::sentry::sentry
                   (longlong param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  
  _Sentry_base::_Sentry_base(param_1,param_2);
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<char,std::char_traits<char>_>::tie
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (param_2 + *(int *)(*(longlong *)param_2 + 4)));
    if (pbVar2 != (basic_ostream<char,std::char_traits<char>_> *)0x0) {
      pbVar2 = std::basic_ios<char,std::char_traits<char>_>::tie
                         ((basic_ios<char,std::char_traits<char>_> *)
                          (param_2 + *(int *)(*(longlong *)param_2 + 4)));
      if (pbVar2 != param_2) {
        pbVar2 = std::basic_ios<char,std::char_traits<char>_>::tie
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_2 + *(int *)(*(longlong *)param_2 + 4)));
        std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar2);
      }
    }
  }
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  *(bool *)(param_1 + 8) = bVar1;
  return param_1;
}



// FUNCTION 14092c3b0 ~TFunction<void___cdecl(void)> body=100 status=ok
// SIG undefined ~TFunction<void___cdecl(void)>(void)

void TFunction<void___cdecl(void)>::~TFunction<void___cdecl(void)>(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)UE4Function_Private::FFunctionStorage::GetBoundObject(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free(*(longlong *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14092c420 ~TQueue<TFunction<void___cdecl(void)>,1> body=163 status=ok
// SIG undefined ~TQueue<TFunction<void___cdecl(void)>,1>(void)

void TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
               (longlong param_1)

{
  longlong lVar1;
  
  while (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar1 != 0) {
      ::TFunction<void___cdecl(void)>::~TFunction<void___cdecl(void)>(lVar1 + 0x10);
      FMemory::operator_delete(lVar1,0x60);
    }
  }
  return;
}



// FUNCTION 14092c4d0 ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> body=170 status=ok
// SIG undefined ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(void)

void std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
     ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(longlong param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  
  *(undefined ***)(param_1 + -0x88 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4)) =
       vftable;
  *(int *)(param_1 + -0x8c + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4)) =
       *(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88;
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80);
  *(undefined ***)this = basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (this);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + -0x78));
  return;
}



// FUNCTION 14092c580 ~FAudioCapture body=120 status=ok
// SIG undefined ~FAudioCapture(void)

void Audio::FAudioCapture::~FAudioCapture(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    RtAudio::~RtAudio(lVar1 + 0x10);
    FMemory::operator_delete(lVar1,0x18);
  }
  return;
}



// FUNCTION 14092c600 ~FAudioCaptureSynth body=113 status=ok
// SIG undefined ~FAudioCaptureSynth(void)

void Audio::FAudioCaptureSynth::~FAudioCaptureSynth(undefined8 *param_1)

{
  *param_1 = &PTR_OnAudioCapture_144162338;
  FUN_140591050(param_1 + 0xb);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FAudioCapture::~FAudioCapture(param_1 + 5);
  TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR__purecall_144162328;
  return;
}



// FUNCTION 14092c680 ~RtApi body=140 status=ok
// SIG undefined ~RtApi(void)

void RtApi::~RtApi(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441623c8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  RtApiStream::~RtApiStream(param_1 + 0x23);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_1 + 0x1e);
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x12);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x12));
  return;
}



// FUNCTION 14092c710 ~RtApiDs body=104 status=ok
// SIG undefined ~RtApiDs(void)

void RtApiDs::~RtApiDs(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144162430;
  if (*(int *)((longlong)param_1 + 300) != -0x32) {
    closeStream(param_1);
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    CoUninitialize();
  }
  std::vector<DsDevice,std::allocator<DsDevice>_>::_Tidy(param_1 + 0x52);
  RtApi::~RtApi(param_1);
  return;
}



// FUNCTION 14092c780 ~RtApiStream body=142 status=ok
// SIG undefined ~RtApiStream(void)

void RtApi::RtApiStream::~RtApiStream(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 2;
  local_28 = param_1 + 0x160;
  while( true ) {
    if (local_20 == 0) break;
    std::vector<int,std::allocator<int>_>::_Tidy(local_28 + -0x18);
    std::vector<int,std::allocator<int>_>::_Tidy(local_28 + -0x30);
    local_28 = local_28 + -0x48;
    local_20 = local_20 + -1;
  }
  return;
}



// FUNCTION 14092c810 ~RtAudio body=92 status=ok
// SIG undefined ~RtAudio(void)

void RtAudio::~RtAudio(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 14092c870 ~_Sentry_base body=130 status=ok
// SIG undefined ~_Sentry_base(void)

void std::basic_ostream<char,std::char_traits<char>_>::_Sentry_base::~_Sentry_base
               (longlong *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 0x10))(pbVar1);
  }
  return;
}



// FUNCTION 14092c900 operator= body=193 status=ok
// SIG undefined operator=(void)

longlong * TArray<wchar_t,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free(*param_1);
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  return param_1;
}



// FUNCTION 14092c9d0 operator= body=282 status=ok
// SIG undefined operator=(void)

longlong * TBaseDelegate<IModuleInterface_*>::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *local_30;
  longlong *local_28;
  
  if (param_2 != param_1) {
    if ((int)param_2[1] == 0) {
      local_30 = (longlong *)0x0;
    }
    else {
      local_30 = (longlong *)*param_2;
    }
    if (local_30 == (longlong *)0x0) {
      if ((int)param_1[1] == 0) {
        local_28 = (longlong *)0x0;
      }
      else {
        local_28 = (longlong *)*param_1;
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x28))(local_28,0);
        if (*param_1 != 0) {
          lVar1 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar1;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*local_30 + 0x30))(local_30,param_1);
    }
  }
  return param_1;
}



// FUNCTION 14092caf0 operator= body=159 status=ok
// SIG undefined operator=(void)

undefined1 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
          (undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_48 [8];
  undefined1 local_40;
  undefined1 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  if (param_1 != param_2) {
    _Tidy_deallocate(param_1);
    puVar2 = local_48;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_40 = local_48[0];
    puVar2 = local_48;
    for (lVar1 = 1; puVar2 = puVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
    }
    local_38 = local_48[1];
    puVar2 = param_2;
    puVar3 = param_1;
    for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_30 = param_2;
    local_28 = param_1;
    local_20 = param_2;
    _Tidy_init(param_2);
  }
  return param_1;
}



// FUNCTION 14092cb90 operator= body=148 status=ok
// SIG undefined operator=(void)

/* WARNING: Removing unreachable block (ram,0x00014092cbb0) */

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_18;
  
  if (param_1 != param_2) {
    local_18 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_18 = (undefined8 *)*param_2;
    }
    assign(param_1,local_18,param_2[2]);
  }
  return param_1;
}



// FUNCTION 14092cc30 operator= body=202 status=ok
// SIG undefined operator=(void)

longlong DsDevice::operator=(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined8 *)(param_1 + local_18 * 8) = *(undefined8 *)(param_2 + local_18 * 8);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined1 *)(param_1 + local_10 + 0x10) = *(undefined1 *)(param_2 + local_10 + 0x10);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (param_1 + 0x18,param_2 + 0x18);
  return param_1;
}


